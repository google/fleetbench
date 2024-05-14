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


def _GetBenchmarks(
    benchmark_target: str, benchmark_filters: list[str]
) -> dict[str, bm.Benchmark]:
  """Get a list of benchmarks from the given target."""
  benchmarks = {}
  sub_benchmarks = bm.GetSubBenchmarks(benchmark_target)

  if not benchmark_filters:
    for name in sub_benchmarks:
      benchmark = bm.Benchmark(benchmark_target, name)
      benchmarks[benchmark.Name()] = benchmark
  else:
    for name in benchmark_filters:
      if name not in sub_benchmarks:
        raise ValueError(f"Benchmark {name} not found in {benchmark_target}.")
      benchmark = bm.Benchmark(benchmark_target, name)
      benchmarks[benchmark.Name()] = benchmark

  return benchmarks


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
    self.runtimes: dict[str, list[float]] = {}
    self.workers: dict[int, worker.Worker] = {}
    self.results: list[result.Result] = []
    self.utilization_samples: list[tuple[pd.Timestamp, float]] = []

  def _PreRun(
      self, benchmark_target: str, benchmark_filters: list[str]
  ) -> None:
    """Initial configuration steps."""

    logging.info("Initializing benchmarks and worker threads...")

    self.benchmarks = _GetBenchmarks(benchmark_target, benchmark_filters)

    # Initialize the runtimes with a fake duration. This causes all benchmarks
    # to be equally likely at first.
    self.runtimes = {benchmark: [1.0] for benchmark in self.benchmarks.keys()}

    # Create a worker thread for each CPU.
    self.workers = {
        cpu_id: worker.Worker(cpu_id, self.cpu_affinity) for cpu_id in self.cpus
    }

    for w in self.workers.values():
      w.start()

    if self.cpu_affinity:
      # Bind the controller to its CPU.
      logging.info(
          "Controller on CPU %d, benchmarks running on %d CPUs (%s)",
          self.controller_cpu,
          len(self.cpus),
          self.cpus,
      )
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
      inverse_weights.append(statistics.mean(times[-10:]))
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
      total_utilization, utilization_per_cpu = cpu.Utilization(self.cpus)

      logging.log_every_n_seconds(
          logging.INFO,
          "utilization average %.1f%%, per-CPU: %s",
          5,
          total_utilization,
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
          self.runtimes[r.benchmark].append(r.duration)
          self.results.append(r)

  def Run(
      self, benchmark_target: str, benchmark_filter: list[str] = []
  ) -> list[result.Result]:
    """Run benchmarks in parallel."""
    self._PreRun(benchmark_target, benchmark_filter)

    logging.info(
        "Running %s benchmarks to try to hit %.f%% utilization",
        ", ".join(self.benchmarks.keys()),
        self.target_utilization,
    )

    self._RunSchedulingLoop()

    logging.info("Shutting down all workers...")
    for w in self.workers.values():
      self.results.extend(w.StopAndGetResults())

    for cpu_id, w in self.workers.items():
      logging.debug("Joining worker on CPU %d", cpu_id)
      w.join()

    utilization = pd.DataFrame(
        self.utilization_samples, columns=["timestamp", "utilization"]
    )
    runtimes = pd.DataFrame({
        benchmark: pd.Series(runtimes)
        for benchmark, runtimes in self.runtimes.items()
    })
    # TODO(rjogrady): We can do more here- plot utilization over time, etc.
    logging.info("Median Utilization: %f", utilization["utilization"].median())
    logging.info("Benchmark runtimes:")
    for col in runtimes.columns:
      logging.info(
          "%s: count=%s median=%s",
          col,
          runtimes[col].count(),
          runtimes[col].median(),
      )
    return self.results
