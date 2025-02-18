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
import time

from absl import logging
import numpy as np
import pandas as pd

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import run
from fleetbench.parallel import worker


def ParseBenchmarkWeights(
    benchmark_weights_list: list[str],
) -> dict[str, float] | None:
  """Parses a list of benchmark weights into a dictionary.

  The string element in the list should be in the format:
  <benchmark_name|benchmark_filter>:<weight>. Note that the benchmark name or
  filter should be in ALL CAPS to ensure case-insensitive matching.

  Args:
    benchmark_weights_list: A list of strings to parse.

  Returns:
    A dictionary of {capitalized string: float} or None if the list is empty.
  """
  if not benchmark_weights_list:
    return None

  benchmark_weights = {}
  for weights in benchmark_weights_list:
    try:
      key, value_str = weights.split(":")
      benchmark_weights[key.upper()] = float(value_str)
    except ValueError:
      logging.warning(
          "Invalid benchmark string: %s. The format should be"
          " <benchmark_name|benchmark_filter>:<weight>. Skipping...",
          weights,
      )

  return benchmark_weights


def _SetExtraBenchmarkFlags(
    benchmark_perf_counters: str,
    benchmark_repetitions: int,
    benchmark_min_time: str,
) -> list[str]:
  """Set extra benchmark flags."""
  benchmark_flags = []
  if benchmark_perf_counters:
    benchmark_flags.append(
        f"--benchmark_perf_counters={benchmark_perf_counters}"
    )
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
    temp_root: Directory to store temporary files in.
    runtimes: Dictionary of benchmark name -> history of benchmark runtimes.
    workers: Dictionary of CPU ID -> Worker thread.
    results: List of results from all runs.
    utilization_samples: List of (timestamp, utilization) tuples. Used to
      generate utilization over time plots.
  """

  def __init__(
      self,
      cpus: list[int],
      cpu_affinity: bool,
      benchmark_weights: dict[str, float] | None,
      utilization: float,
      duration: float,
      temp_root: str,
  ):
    """Initialize the parallel benchmark runner."""

    if not len(cpus) > 1:
      raise ValueError("Must specify at least 2 CPUs.")

    # Reserve a CPU for the controller loop.
    self.controller_cpu = cpus[0]
    self.cpus = cpus[1:]
    self.cpu_affinity = cpu_affinity
    self.benchmark_weights = benchmark_weights
    self.benchmarks: dict[str, bm.Benchmark] = {}
    self.target_utilization = utilization * 100
    self.duration = duration
    self.temp_root = temp_root
    self.runtimes: dict[str, list[BenchmarkMetrics]] = {}
    self.workers: dict[int, worker.Worker] = {}
    self.utilization_samples: list[tuple[pd.Timestamp, float]] = []

  def _PreRun(
      self,
      benchmark_target: str,
      benchmark_filters: list[str] | None,
      workload_filters: list[str] | None,
      benchmark_perf_counters: str,
      benchmark_repetitions: int,
      benchmark_min_time: str,
  ) -> None:
    """Initial configuration steps."""

    logging.info("Initializing benchmarks and worker threads...")

    if workload_filters:
      self.benchmarks = bm.GetWorkloadBenchmarks(
          benchmark_target, workload_filters
      )
    else:
      self.benchmarks = bm.GetDefaultBenchmarks(
          benchmark_target, benchmark_filters
      )

    benchmark_flags = _SetExtraBenchmarkFlags(
        benchmark_perf_counters, benchmark_repetitions, benchmark_min_time
    )

    if benchmark_flags:
      logging.info("Setting benchmark flags: %s", benchmark_flags)
      for benchmark in self.benchmarks.values():
        benchmark.AddCommandFlags(benchmark_flags)

    # Initialize the runtimes with a fake wall time of 1. This causes all
    # benchmarks to be equally likely at first.
    self.runtimes = {
        benchmark: [
            BenchmarkMetrics(
                total_duration=1.0,
                per_iteration_wall_time=0.0,
                per_iteration_cpu_time=0.0,
            )
        ]
        for benchmark in self.benchmarks.keys()
    }

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

  def _ComputeBenchmarkWeights(self) -> np.ndarray:
    """Probability is inversely based on expected runtime."""

    inverse_weights = np.empty(len(self.runtimes.keys()))

    # Use the last 10 runtimes to estimate expected runtime.
    for i, (benchmark_name, times) in enumerate(self.runtimes.items()):
      last_10_wall_times = np.array([t.total_duration for t in times[-10:]])
      base_weight = 1 / last_10_wall_times.mean()

      # If we're using adaptive benchmark selection, adjust the weight based on
      # the benchmark's performance relative to the fleet.
      if self.benchmark_weights:
        for keyword, weight in self.benchmark_weights.items():
          if keyword in benchmark_name.upper():
            base_weight *= weight
            break
      inverse_weights[i] = base_weight
    return inverse_weights / inverse_weights.sum()

  def _SelectNextBenchmarks(self, count: int) -> list[bm.Benchmark]:
    """Randomly choose some benchmarks to run."""

    if count <= 0:
      return []
    # Probabilities based on the expected runtime.
    probabilities = self._ComputeBenchmarkWeights()
    # self.runtimes is a dict of benchmark name -> list of runtimes.
    benchmark_names = list(self.runtimes.keys())
    selected_names = np.random.choice(
        benchmark_names, p=probabilities, size=count, replace=True
    )
    return [self.benchmarks[name] for name in selected_names]

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
              )
          )

  def GenerateBenchmarkReport(
      self,
      df: pd.DataFrame,
      perf_counter_df: pd.DataFrame | None,
  ) -> pd.DataFrame:
    """Generates a DataFrame of aggregated benchmark results.

    Args:
      df: A DataFrame of benchmark results.
      perf_counter_df: A DataFrame of performance counter results.

    Returns:
      A DataFrame of aggregated benchmark results.
    """

    # Remove "fleetbench (" prefix and ")" suffix
    df["Benchmark"] = (
        df["Benchmark"]
        .astype(str)
        .str.replace(r"fleetbench \((.*)\)", r"\1", regex=True)
    )

    grouped_results = (
        df.groupby("Benchmark")
        .agg(
            Count=("WallTimes", "count"),
            Mean_Wall_Time=("WallTimes", "mean"),
            Mean_CPU_Time=("CPUTimes", "mean"),
        )
        .round(3)
    )

    # Combine perf_counter_df and benchmark run results on the same
    # "benchmark" entry.
    if perf_counter_df is not None:
      grouped_results = pd.merge(
          grouped_results, perf_counter_df, on="Benchmark", how="left"
      )

    print(grouped_results.to_string())
    return grouped_results

  def SaveBenchmarkResults(self, df: pd.DataFrame) -> None:
    """Saves benchmark results to a JSON file for predictiveness analysis."""

    file_name = os.path.join(self.temp_root, "results.json")

    # Convert DataFrame to a list of dictionaries (one for each row)
    # Rename the column "Benchmark" to "Name"
    # TODO: This only works for open source benchmark version.

    # We use "Benchmark" column as the index, and rename it to "name"
    df.index.name = "name"
    df = df.rename(
        columns={
            "Mean_Wall_Time": "real_time",
            "Mean_CPU_Time": "cpu_time",
        }
    )
    data = df.reset_index().to_dict(orient="records")

    try:
      with open(file_name, "w") as json_file:
        json.dump(
            data, json_file, indent=4
        )  # Serialize and write with indentation
        logging.info("Summary results successfully written to %s", file_name)
    except (IOError, json.JSONDecodeError) as e:
      print(f"Error writing JSON data: {e}")

  def GeneratePerfCounterDataFrame(
      self, benchmark_perf_counters: str
  ) -> pd.DataFrame | None:
    """Generates a DataFrame of performance counter results for each benchmark.

    Args:
      benchmark_perf_counters: A comma-separated list of performance counters to
        collect.

    Returns:
      A DataFrame of performance counter results for each benchmark, or None if
      no performance counters were specified.
    """
    if not benchmark_perf_counters:
      return None

    counters = benchmark_perf_counters.split(",")

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
      for counter in counters:
        if counter in benchmark_result:
          entry[counter] = benchmark_result[counter]
      performance_data.append(entry)

    perf_counters_results = pd.DataFrame(performance_data)
    if perf_counters_results.empty:
      return None

    # Group the results by benchmark and counter, and calculate the mean of each
    # counter for each benchmark.
    aggregations = {}
    for counter in counters:
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
        }
        data.append(entry)
    runtimes = pd.DataFrame(data)

    # TODO: We can do more here - plot utilization over time, etc.
    logging.info("Ran %d total benchmarks", runtimes["Benchmark"].count())
    logging.info("Median Utilization: %f", utilization["utilization"].median())
    return runtimes

  def PostProcessBenchmarkResults(self, benchmark_perf_counters: str) -> None:
    """Generate benchmark reports and save results to a JSON file.

    If benchmark_perf_counters is specified, the report will include perf
    counters for each benchmark.
    """

    df = self.ConvertToDataFrame()

    perf_counter_df = self.GeneratePerfCounterDataFrame(benchmark_perf_counters)
    df = self.GenerateBenchmarkReport(df, perf_counter_df)
    self.SaveBenchmarkResults(df)

  def Run(
      self,
      benchmark_target: str,
      benchmark_filter: list[str] | None = None,
      workload_filter: list[str] | None = None,
      benchmark_perf_counters: str = "",
      benchmark_repetitions: int = 0,
      benchmark_min_time: str = "",
  ):
    """Run benchmarks in parallel."""
    logging.info("Running with benchmark_filter: %s", benchmark_filter)
    logging.info("Running with workload_filter: %s", workload_filter)

    if benchmark_filter and workload_filter:
      logging.warning(
          "Both benchmark_filter and workload_filter specified. "
          "benchmark_filter will be ignored."
      )

    self._PreRun(
        benchmark_target,
        benchmark_filter,
        workload_filter,
        benchmark_perf_counters,
        benchmark_repetitions,
        benchmark_min_time,
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
            )
        )

    for cpu_id, w in self.workers.items():
      logging.debug("Joining worker on CPU %d", cpu_id)
      w.join()

    # Post-process benchmark results
    self.PostProcessBenchmarkResults(benchmark_perf_counters)
