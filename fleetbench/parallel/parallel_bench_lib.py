# Copyright 2024 The Fleetbench Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Run Fleetbench benchmarks in parallel."""

import dataclasses
import json
import math
import os
import shutil
import time
from typing import Any

from absl import logging
import numpy as np
import pandas as pd

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import reporter
from fleetbench.parallel import run
from fleetbench.parallel import weights
from fleetbench.parallel import worker


def _SetExtraBenchmarkFlags(
    benchmark_perf_counters: list[str],
    benchmark_repetitions: int,
    benchmark_min_time: str,
) -> list[str]:
  """Set extra benchmark flags."""
  benchmark_flags = []
  if benchmark_perf_counters:
    perf_counters_str = ",".join(benchmark_perf_counters)
    benchmark_flags.append(f"--benchmark_perf_counters={perf_counters_str}")
  if benchmark_min_time:
    benchmark_flags.append(f"--benchmark_min_time={benchmark_min_time}")
  if benchmark_repetitions:
    benchmark_flags.append(f"--benchmark_repetitions={benchmark_repetitions}")

  return benchmark_flags


@dataclasses.dataclass
class BenchmarkMetrics:
  # per benchmark run total duration
  total_duration: float
  # per benchmark iteration wall time
  per_iteration_wall_time: float
  # per benchmark iteration cpu time
  per_iteration_cpu_time: float
  # per benchmark iteration
  per_bm_run_iteration: int


class ParallelBench:
  """Run Fleetbench benchmarks in parallel.

  Attributes:
    controller_cpu: CPU ID to run the controller on.
    cpus: List of CPUs to run benchmarks on.
    cpu_affinity: Whether to bind each worker to a CPU or allow the scheduler to
      move them around.
    benchmark_weights: Whether to use adaptive benchmark selection.
    benchmarks: List of benchmarks to run.
    target_utilization: Target utilization from 0 to 1.
    duration: How long in seconds to run for.
    repetitions: Number of times to run the entire framework.
    temp_parent_root: Parent directory to store temporary files in.
    temp_root: Child directory to store results in. It is in the format of
      "temp_parent_root/run_{repetition_id}".
    keep_raw_data: Whether to keep the raw results from each run.
    perf_counters: A list of performance counters to collect during benchmark
      run.
    runtimes: Dictionary of benchmark name -> history of benchmark runtimes.
    workers: Dictionary of CPU ID -> Worker thread.
    results: List of results from all runs.
    utilization_samples: List of (timestamp, utilization) tuples. Used to
      generate utilization over time plots.
    target_ratios: List of target ratios for each benchmark. This is used to
      calculate the probability of each benchmark being selected, and determined
      by the benchmark weights.
    first_run: Boolean indicating if this is the first run. We use this to
      determine if we can randomly select benchmarks or if we need to run all
      benchmarks at least once.
  """

  def __init__(
      self,
      cpus: list[int],
      cpu_affinity: bool,
      utilization: float,
      duration: float,
      repetitions: int,
      temp_parent_root: str,
      keep_raw_data: bool,
      benchmark_perf_counters: str,
  ):
    """Initialize the parallel benchmark runner."""

    if not len(cpus) > 1:
      raise ValueError("Must specify at least 2 CPUs.")

    # Reserve a CPU for the controller loop.
    self.controller_cpu = cpus[0]
    self.cpus = cpus[1:]
    self.cpu_affinity = cpu_affinity
    self.benchmark_weights: dict[str, float] = {}
    self.benchmarks: dict[str, bm.Benchmark] = {}
    self.target_utilization = utilization * 100
    self.duration = duration
    self.repetitions = repetitions
    self.temp_parent_root = temp_parent_root
    self.temp_root = ""
    self.keep_raw_data = keep_raw_data
    self.perf_counters: list[str] = (
        benchmark_perf_counters.split(",") if benchmark_perf_counters else []
    )
    self.runtimes: dict[str, list[BenchmarkMetrics]] = {}
    self.workers: dict[int, worker.Worker] = {}
    self.utilization_samples: list[tuple[pd.Timestamp, float]] = []
    self.target_ratios: list[float] = []
    self.first_run = True

  def SetWeights(
      self,
      benchmark_target: str,
      benchmark_filter: list[str] | None,
      workload_filter: list[str] | None,
      scheduling_strategy: weights.SchedulingStrategy,
      custom_benchmark_weights: list[str] | None,
  ) -> None:
    """Sets the benchmark weights."""
    logging.info("Running with benchmark_filter: %s", benchmark_filter)
    logging.info("Running with workload_filter: %s", workload_filter)

    if benchmark_filter and workload_filter:
      logging.warning(
          "Both benchmark_filter and workload_filter specified. "
          "benchmark_filter will be ignored."
      )
    if workload_filter:
      self.benchmarks = bm.GetWorkloadBenchmarks(
          benchmark_target, workload_filter
      )
    else:
      self.benchmarks = bm.GetDefaultBenchmarks(
          benchmark_target, benchmark_filter
      )
    # Gets the number of workloads and num of benchmark for each workload
    self.benchmark_weights = weights.GetBenchmarkWeights(
        self.benchmarks, scheduling_strategy, custom_benchmark_weights
    )

  def _PreRun(
      self,
      benchmark_repetitions: int,
      benchmark_min_time: str,
      repetition: int,
  ) -> None:
    """Initial configuration steps."""

    logging.info("Initializing benchmarks and worker threads...")

    benchmark_flags = _SetExtraBenchmarkFlags(
        self.perf_counters, benchmark_repetitions, benchmark_min_time
    )

    if benchmark_flags:
      logging.info("Setting benchmark flags: %s", benchmark_flags)
      #  Only set the flags once.
      if repetition == 0:
        for benchmark in self.benchmarks.values():
          benchmark.AddCommandFlags(benchmark_flags)

    # Initialize the runtimes with a fake wall time. Based on empirically
    # observed runtimes, TCMalloc take 4x longer to run than others.
    for benchmark in self.benchmarks.keys():
      total_duration = 4 if "TCMALLOC" in benchmark else 1
      self.runtimes[benchmark] = [
          BenchmarkMetrics(
              total_duration=total_duration,
              per_iteration_wall_time=0.0,
              per_iteration_cpu_time=0.0,
              per_bm_run_iteration=0,
          )
      ]

    self.target_ratios = [
        self.benchmark_weights[instance.BenchmarkName()]
        for instance in self.benchmarks.values()
    ]

    # Create a worker thread for each CPU.
    self.workers = {
        cpu_id: worker.Worker(cpu_id, self.cpu_affinity) for cpu_id in self.cpus
    }

    for w in self.workers.values():
      w.start()

    if self.cpu_affinity:
      logging.info(
          "Controller on CPU %d, benchmarks running on %d CPUs",
          self.controller_cpu,
          len(self.cpus),
      )
      logging.debug("CPU activity: %s", self.cpus)
      os.sched_setaffinity(os.getpid(), [self.controller_cpu])

  def _AdjustProbabilities(
      self, target_ratios: list[float], current_runtime: list[float]
  ) -> np.ndarray:
    """Calculates benchmark probabilities.

    We want to run benchmarks based on their expected runtime so that the
    actual runtimes align with desired target ratios.

    Probability_i = Current RT_0 * Target Ratio_i / (Target Ratio_0 * Current
    RT_i)

    Args:
        target_ratios: List of target ratios.
        current_runtime: List of current runtime.

    Returns:
        List of normalized probabilities.
    """

    num_benchmarks = len(target_ratios)
    if num_benchmarks != len(current_runtime):
      raise ValueError(
          "Target and current ratio lists must have the same length."
      )

    # Set the first BM to be the reference with probability 1.0.
    probabilities = [1.0]

    # Calculate probabilities for other benchmarks
    for j in range(1, num_benchmarks):
      probability = (current_runtime[0] * target_ratios[j]) / (
          current_runtime[j] * target_ratios[0]
      )
      probabilities.append(probability)

    # Normalize the values
    return np.array(probabilities) / np.sum(probabilities)

  def _AdjustRuntime(self) -> np.ndarray:
    """Adjusts the runtime of each benchmark to account for variance."""
    valid_data = False
    valid_index = -1
    current_runtimes = np.empty(len(self.runtimes.keys()))
    need_adjustment = []

    for i, (times) in enumerate(self.runtimes.values()):
      # Skip the first run, which is a fake run.
      last_10_wall_times = np.array([t.total_duration for t in times[1:][-10:]])

      if last_10_wall_times.size:
        current_runtimes[i] = last_10_wall_times.mean()
        valid_data = True
        valid_index = i
      else:
        current_runtimes[i] = times[0].total_duration
        # We need to adjust the runtime as it's already a valid value.
        need_adjustment.append(i)

    if valid_data:
      for index in need_adjustment:
        current_runtimes[index] = (
            current_runtimes[index] * current_runtimes[valid_index]
        )
    return current_runtimes

  def _ComputeBenchmarkWeights(self) -> np.ndarray:
    """Probability is inversely based on expected runtime."""

    current_runtimes = self._AdjustRuntime()

    if not np.all(current_runtimes == 1.0):
      current_rt_ratios = current_runtimes / current_runtimes.sum()

      probabilities = self._AdjustProbabilities(
          self.target_ratios, current_rt_ratios
      )
    else:
      probabilities = np.array(self.target_ratios) / np.sum(self.target_ratios)

    return probabilities

  def _SelectNextBenchmarks(self, count: int) -> list[bm.Benchmark]:
    """Randomly choose some benchmarks to run."""

    if count <= 0:
      return []

    # We try to run all benchmarks at least once.
    benchmarks = []
    if self.first_run:
      if count > len(self.benchmarks):
        benchmarks = list(self.benchmarks.values())
        count = count - len(benchmarks)
      self.first_run = False

    # Probabilities based on the expected runtime.
    probabilities = self._ComputeBenchmarkWeights()
    # self.runtimes is a dict of benchmark name -> list of runtimes.
    benchmark_names = list(self.runtimes.keys())
    selected_names = np.random.choice(
        benchmark_names, p=probabilities, size=count, replace=True
    )
    return benchmarks + [self.benchmarks[name] for name in selected_names]

  def _RunSchedulingLoop(self) -> None:
    """Check CPU utilization and pick the next job to schedule."""

    next_run_id = 0
    start_time = time.time()

    while True:
      # Check elapsed time
      if time.time() - start_time > self.duration:
        break
      # Check CPU utilization and schedule jobs if we're under-utilized.
      total_utilization, utilization_per_cpu, busy_cpus = cpu.Utilization(
          self.cpus
      )

      logging.log_every_n_seconds(
          logging.DEBUG,
          "utilization average %.1f%%, with %d busy CPUS, per-CPU: %s",
          5,
          total_utilization,
          busy_cpus,
          utilization_per_cpu,
      )

      self.utilization_samples.append((pd.Timestamp.now(), total_utilization))

      least_busy_cpus = sorted(
          utilization_per_cpu.keys(), key=utilization_per_cpu.get
      )

      # E.g. we are at 50% utilization, target is 70%.
      # Assume each job uses 100% of a CPU, and that we have 10 CPUs.
      # We need to schedule 2 jobs to hit 70%.
      utilization_gap = self.target_utilization - total_utilization
      expected_utilization = 100 / len(self.cpus)
      jobs_required = math.ceil(utilization_gap / expected_utilization)

      # Randomly select benchmarks, weighting by inverse runtime.
      # This makes it less likely to select long-running benchmarks and
      # get an even distribution.
      benchmarks = self._SelectNextBenchmarks(jobs_required)

      # Schedule something on an available CPUs if we're under-utilized.
      # Otherwise, do nothing while we wait for utilization to drop.
      for benchmark in benchmarks:
        path = os.path.join(self.temp_root, "run_%03d" % next_run_id)
        r = run.Run(
            benchmark=benchmark,
            out_file=path,
        )
        for cpu_id in least_busy_cpus:
          if self.workers[cpu_id].TryAddRun(r):
            next_run_id += 1
            logging.debug("Scheduling %s on CPU %d", benchmark, cpu_id)
            # We just added something to this worker, so presumably
            # trying to add the next benchmark to it will fail.
            least_busy_cpus.remove(cpu_id)
            break

      # Process any available results. This updates the runtimes of each
      # benchmark to make the scheduling probabilities more accurate.
      for w in self.workers.values():
        for r in w.TryGetResults():
          if r.rc != 0:
            logging.error("Benchmark failed: %s", r.benchmark)
            continue
          self.runtimes[r.benchmark].append(
              BenchmarkMetrics(
                  total_duration=r.duration,
                  per_iteration_wall_time=r.bm_wall_time,
                  per_iteration_cpu_time=r.bm_cpu_time,
                  per_bm_run_iteration=r.iteration,
              )
          )

  def GeneratePerfCounterDataFrame(self) -> pd.DataFrame | None:
    """Generates a DataFrame of performance counter results for each benchmark.

    Returns:
      A DataFrame of performance counter results for each benchmark, or None if
      no performance counters were specified.
    """
    if not self.perf_counters:
      return None

    performance_data = []
    for filename in os.listdir(self.temp_root):

      if filename == "results.json":
        continue
      file_path = os.path.join(self.temp_root, filename)
      with open(file_path, "r") as f:
        file_content = f.read()
        benchmark_result = json.loads(file_content)["benchmarks"][0]

      entry = {
          "Benchmark": benchmark_result["name"],
      }
      for counter in self.perf_counters:
        if counter in benchmark_result:
          entry[counter] = benchmark_result[counter]
      performance_data.append(entry)

    perf_counters_results = pd.DataFrame(performance_data)
    if perf_counters_results.empty:
      return None

    # Group the results by benchmark and counter, and calculate the mean of each
    # counter for each benchmark.
    aggregations = {}
    for counter in self.perf_counters:
      aggregations[counter] = pd.NamedAgg(column=counter, aggfunc=np.mean)

    perf_counters_results = (
        perf_counters_results.groupby("Benchmark").agg(**aggregations).round(3)
    )
    return perf_counters_results

  def ConvertToDataFrame(self) -> pd.DataFrame:
    """Converts benchmark results to a DataFrame."""
    utilization = pd.DataFrame(
        self.utilization_samples, columns=["timestamp", "utilization"]
    )
    data = []

    for benchmark, times_list in self.runtimes.items():
      for t in times_list[1:]:
        entry = {
            "Benchmark": benchmark,
            "WallTimes": t.per_iteration_wall_time,
            "CPUTimes": t.per_iteration_cpu_time,
            "Iterations": t.per_bm_run_iteration,
        }
        data.append(entry)
    runtimes = pd.DataFrame(data)

    # TODO: We can do more here - plot utilization over time, etc.
    logging.info("Ran %d total benchmarks", runtimes["Benchmark"].count())
    logging.info("Median Utilization: %f", utilization["utilization"].median())
    return runtimes

  def _RemoveRawData(self) -> None:
    """Remove raw data from the temporary directory."""
    logging.info("Removing raw data from %s", self.temp_root)
    for filename in os.listdir(self.temp_root):
      if filename.startswith("run_"):
        file_path = os.path.join(self.temp_root, filename)
        try:
          os.remove(file_path)
        except OSError as e:
          logging.exception("Failed to remove %s: %s", file_path, e)

  def PostProcessBenchmarkResults(
      self,
  ) -> tuple[reporter.ContextInfo, reporter.BenchmarkRuntimeInfo]:
    """Generate benchmark reports and save results to a JSON file.

    If benchmark_perf_counters is specified, the report will include perf
    counters for each benchmark. We will also check to see if we want to remove
    the raw data.
    Returns:
      A tuple containing the context and benchmark data dictionaries.
    """

    df = self.ConvertToDataFrame()

    perf_counter_df = self.GeneratePerfCounterDataFrame()
    df = reporter.GenerateBenchmarkReport(df, perf_counter_df)
    context, data = reporter.SaveBenchmarkResults(self.temp_root, df)

    if not self.keep_raw_data:
      self._RemoveRawData()
    return context, data

  def Run(
      self,
      benchmark_repetitions: int = 0,
      benchmark_min_time: str = "",
  ):
    """Run benchmarks in parallel."""

    context_list = []
    data_list = []

    for i in range(self.repetitions):
      self.temp_root = os.path.join(self.temp_parent_root, f"run_{i}")
      shutil.rmtree(self.temp_root, ignore_errors=True)
      os.makedirs(self.temp_root, exist_ok=True)

      print(f"Running trial {i}.......")

      self._PreRun(
          benchmark_repetitions,
          benchmark_min_time,
          i,
      )

      logging.info(
          "Running %d benchmarks to try to hit %.f%% utilization",
          len(self.benchmarks),
          self.target_utilization,
      )
      logging.debug("Benchmark list: %s", ", ".join(self.benchmarks.keys()))

      logging.info("Start measuring for %d seconds", self.duration)
      self._RunSchedulingLoop()

      logging.info("Shutting down all workers...")
      # Collect all remaining results
      for w in self.workers.values():
        results = w.StopAndGetResults()
        for r in results:
          self.runtimes[r.benchmark].append(
              BenchmarkMetrics(
                  total_duration=r.duration,
                  per_iteration_wall_time=r.bm_wall_time,
                  per_iteration_cpu_time=r.bm_cpu_time,
                  per_bm_run_iteration=r.iteration,
              )
          )

      for cpu_id, w in self.workers.items():
        logging.debug("Joining worker on CPU %d", cpu_id)
        w.join()

      # Post-process benchmark results
      context, data = self.PostProcessBenchmarkResults()
      context_list.append(context)
      data_list.append(data)

    reporter.GenerateFinalReport(
        self.temp_parent_root, context_list, data_list, self.repetitions
    )
