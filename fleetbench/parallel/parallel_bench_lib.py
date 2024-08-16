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
import random
import statistics
import time

from absl import logging
import pandas as pd

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import result
from fleetbench.parallel import run
from fleetbench.parallel import worker


def _CreateBenchmarks(
    bm_target: str, names: list[str]
) -> dict[str, bm.Benchmark]:
  """Creates benchmark dictionary with the benchmark name as the key."""
  benchmarks = {}
  for name in names:
    benchmark = bm.Benchmark(bm_target, name)
    benchmarks[benchmark.Name()] = benchmark
  return benchmarks


def _CreateMatchingBenchmarks(
    bm_target: str, bm_filter: str, bm_candidates: list[str]
) -> dict[str, bm.Benchmark]:
  """Creates benchmarks that match the given filter."""
  matching_bm_names = [name for name in bm_candidates if bm_filter in name]
  if not matching_bm_names:
    raise ValueError(f"Can't find benchmarks matching {bm_filter}.")
  return _CreateBenchmarks(bm_target, matching_bm_names)


def _GetDefaultBenchmarks(
    benchmark_target: str, benchmark_filters: list[str]
) -> dict[str, bm.Benchmark]:
  """Get a list of benchmarks from the default target.

    Filtering options:
  - Empty list: Returns all default benchmarks.
  - Keyword list: Returns benchmarks from the default list matching the provided
                  keyword (e.g., "Cold Hot").
  """
  benchmarks = {}
  sub_benchmarks = bm.GetSubBenchmarks(benchmark_target)

  # Gets default benchmark sets
  if not benchmark_filters:
    return _CreateBenchmarks(benchmark_target, sub_benchmarks)

  # Gets benchmark sets from filters
  for bm_filter in benchmark_filters:
    benchmarks.update(
        _CreateMatchingBenchmarks(benchmark_target, bm_filter, sub_benchmarks)
    )
  return benchmarks


def _GetWorkloadBenchmarks(
    benchmark_target: str, workload_filters: list[str]
) -> dict[str, bm.Benchmark]:
  """Get a list of benchmarks from the given workload that match the filters.

  Filtering options:
    - Workload name + keyword(s): Returns benchmarks associated with the
        specified workload, further filtered by keywords (e.g.,
        "libc,Memcpy,Memcmp").
    - Workload name + "all": Returns all benchmarks associated with the
        specified workload (e.g., "proto,all").
  """
  benchmarks = {}

  # Get all unique workloads
  workloads = bm.GetWorkloads(benchmark_target)

  def _GetWorkloadAndFilter(bm_filter: str) -> tuple[str, list[str]]:
    parts = bm_filter.split(",")
    if parts[0].upper() not in workloads:
      raise ValueError(f"Workload {parts[0]} not supported in Fleetbench.")
    return parts[0], parts[1:]

  for workload_filter in workload_filters:
    workload, bm_filters = _GetWorkloadAndFilter(workload_filter)
    workload_bms = bm.GetSubBenchmarks(benchmark_target, workload)
    if bm_filters == ["all"]:
      benchmarks.update(
          _CreateMatchingBenchmarks(
              benchmark_target, workload.upper(), workload_bms
          )
      )
    else:
      for bm_filter in bm_filters:
        benchmarks.update(
            _CreateMatchingBenchmarks(benchmark_target, bm_filter, workload_bms)
        )

  return benchmarks


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
class BenchmarkTimes:
  wall_time: float
  cpu_time: float


class ParallelBench:
  """Run Fleetbench benchmarks in parallel.

  Attributes:
    controller_cpu: CPU ID to run the controller on.
    cpus: List of CPUs to run benchmarks on.
    cpu_affinity: Whether to bind each worker to a CPU or allow the scheduler to
      move them around.
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
      utilization: float,
      duration: float,
      temp_root: str,
  ):
    """Initialize the parallel benchmark runner."""

    if not len(cpus) > 1:
      raise ValueError("Must specify at least 2 CPUs.")

    # Reserve a CPU for the controller loop.
    self.controller_cpu, *self.cpus = cpus
    self.cpu_affinity = cpu_affinity
    self.benchmarks: dict[str, bm.Benchmark] = {}
    self.target_utilization = utilization * 100
    self.duration = duration
    self.temp_root = temp_root
    self.runtimes: dict[str, list[BenchmarkTimes]] = {}
    self.workers: dict[int, worker.Worker] = {}
    self.results: list[result.Result] = []
    self.utilization_samples: list[tuple[pd.Timestamp, float]] = []

  def _PreRun(
      self,
      benchmark_target: str,
      benchmark_filters: list[str],
      workload_filters: list[str],
      benchmark_perf_counters: str,
      benchmark_repetitions: int,
      benchmark_min_time: str,
  ) -> None:
    """Initial configuration steps."""

    logging.info("Initializing benchmarks and worker threads...")

    if workload_filters:
      self.benchmarks = _GetWorkloadBenchmarks(
          benchmark_target, workload_filters
      )
    else:
      self.benchmarks = _GetDefaultBenchmarks(
          benchmark_target, benchmark_filters
      )

    benchmark_flags = _SetExtraBenchmarkFlags(
        benchmark_perf_counters, benchmark_repetitions, benchmark_min_time
    )

    if benchmark_flags:
      logging.info("Setting benchmark flags: %s", benchmark_flags)
      for benchmark in self.benchmarks.values():
        benchmark.AddCommandFlags(benchmark_flags)

    # Initialize the runtimes with a fake duration. This causes all benchmarks
    # to be equally likely at first.
    self.runtimes = {
        benchmark: [BenchmarkTimes(wall_time=1.0, cpu_time=0.0)]
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

  def _SelectNextBenchmark(self) -> bm.Benchmark:
    """Randomly choose the next benchmark to run.

    Probability is inversely based on expected runtime.

    Returns:
      Benchmark name to run next.
    """
    inverse_weights = []
    # Use the last 10 runtimes to estimate expected runtime.
    for times in self.runtimes.values():
      last_10_wall_times = [time.wall_time for time in times[-10:]]
      inverse_weights.append(1 / (statistics.mean(last_10_wall_times)))
    probabilities = [x / sum(inverse_weights) for x in inverse_weights]

    # self.runtimes is a dict of benchmark name -> list of runtimes.
    # Pick a random one based on the expected runtime.
    benchmark_name = random.choices(
        k=1,
        population=list(self.runtimes.keys()),
        weights=probabilities,
    )[0]
    return self.benchmarks[benchmark_name]

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

      # Schedule something on an available CPUs if we're under-utilized.
      # Otherwise, do nothing while we wait for utilization to drop.
      for _ in range(jobs_required):
        for cpu_id in least_busy_cpus:
          benchmark = self._SelectNextBenchmark()
          path = os.path.join(self.temp_root, "run_%03d" % next_run_id)
          r = run.Run(
              benchmark=benchmark,
              out_file=path,
          )
          if self.workers[cpu_id].TryAddRun(r):
            next_run_id += 1
            logging.debug("Scheduling %s on CPU %d", benchmark, cpu_id)
            break

      # Process any available results. This updates the runtimes of each
      # benchmark to make the scheduling probabilities more accurate.
      for w in self.workers.values():
        for r in w.TryGetResults():
          if r.rc != 0:
            logging.error("Benchmark failed: %s", r.benchmark)
            continue
          self.runtimes[r.benchmark].append(
              BenchmarkTimes(wall_time=r.duration, cpu_time=r.bm_cpu_time)
          )
          self.results.append(r)

  def GenerateBenchmarkReport(self) -> None:
    utilization = pd.DataFrame(
        self.utilization_samples, columns=["timestamp", "utilization"]
    )
    data = []
    for benchmark, times_list in self.runtimes.items():
      for t in times_list[1:]:
        entry = {
            "Benchmark": benchmark,
            "Duration": t.wall_time,
            "CPUTimes": t.cpu_time,
        }
        data.append(entry)
    runtimes = pd.DataFrame(data)

    # TODO(rjogrady): We can do more here - plot utilization over time, etc.
    logging.info("Median Utilization: %f", utilization["utilization"].median())
    logging.info("Benchmark runtimes report:")

    grouped_results = (
        runtimes.groupby("Benchmark")
        .agg(
            Count=("Duration", "count"),
            Median_Duration=("Duration", "median"),
            Mean_CPU_Time=("CPUTimes", "mean"),
        )
        .round(3)
    )
    print(grouped_results.to_string())

  def GeneratePerfCounterReport(self, counters: list[str]) -> None:
    """Generate a report of the perf counters for each benchmark."""
    performance_data = []
    for filename in os.listdir(self.temp_root):

      file_path = os.path.join(self.temp_root, filename)
      with open(file_path, "r") as f:
        benchmark_result = json.loads(f.read())["benchmarks"][0]

      for counter in counters:
        if counter in benchmark_result:
          entry = {
              "Benchmark": benchmark_result["name"],
              "Counter": counter,
              "Value": benchmark_result[counter],
          }
          performance_data.append(entry)

    perf_counters = pd.DataFrame(performance_data)
    perf_counters_results = (
        perf_counters.groupby(["Benchmark", "Counter"])
        .agg(
            Median=("Value", "median"),
            Mean=("Value", "mean"),
        )
        .round(3)
    )

    print(perf_counters_results.to_string())

    # Summarizes results to CSV for post-analysis
    perf_counters_results.to_csv(
        os.path.join(self.temp_root, "perf_counters.csv")
    )

  def Run(
      self,
      benchmark_target: str,
      benchmark_filter: list[str] = [],
      workload_filter: list[str] = [],
      benchmark_perf_counters: str = "",
      benchmark_repetitions: int = 0,
      benchmark_min_time: str = "",
  ) -> list[result.Result]:
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
    for w in self.workers.values():
      self.results.extend(w.StopAndGetResults())

    for cpu_id, w in self.workers.items():
      logging.debug("Joining worker on CPU %d", cpu_id)
      w.join()

    self.GenerateBenchmarkReport()

    if benchmark_perf_counters:
      counters = benchmark_perf_counters.split(",")
      self.GeneratePerfCounterReport(counters)

    return self.results
