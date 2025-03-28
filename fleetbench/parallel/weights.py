# Copyright 2025 The Fleetbench Authors
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


"""This file contains functions for handling benchmark weights."""
import csv
import enum

from absl import logging

from python.runfiles import Runfiles
from fleetbench.parallel import benchmark as bm


class SchedulingStrategy(enum.Enum):
  """Enumeration class for different scheduling modes."""

  BM_WEIGHTED = 0  # Equal total execution time for each individual benchmark.
  WORKLOAD_WEIGHTED = 1  # Equal total execution time for each workload
  DCTAX_WEIGHTED = 2  # Execution time distributed as per DC Tax weights


def _ParseBenchmarkWeights(
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


def GetDCTaxWeights() -> dict[str, float]:
  """Read the weights for each benchmark from the data/weights.csv file.

  Returns:
      A dictionary containing the weights for each benchmark.
  """
  file_path = "com_google_fleetbench/fleetbench/parallel/weights.csv"

  with open(Runfiles.Create().Rlocation(file_path), newline="") as csv_file:
    rows = [row for row in csv_file if not row.startswith("#")]
  return {
      benchmark_name: float(weight)
      for benchmark_name, weight in csv.reader(rows)
  }


def _UpdateWorkloadWeights(
    benchmark_weights: dict[str, float],
    workload_benchmark: dict[str, list[bm.Benchmark]],
    custom_weights: dict[str, float],
) -> dict[str, float]:
  """Updates benchmark weights based on workload and custom weights."""
  for benchmarks in workload_benchmark.values():
    # If there is only one benchmark in the workload, there is no need to
    # apply the custom weights.
    if len(benchmarks) == 1:
      continue

    for benchmark in benchmarks:
      for keyword, weight in custom_weights.items():
        if keyword in benchmark.BenchmarkName().upper():
          # Update the weight for the benchmark in the custom weights list.
          benchmark_weights[benchmark.BenchmarkName()] *= weight

    # Normalize the weights again for each workload.
    # We need first sum all weights for current workload, then divide
    # individual weights by sum.
    sum_weights = sum(
        benchmark_weights[benchmark.BenchmarkName()] for benchmark in benchmarks
    )
    for benchmark in benchmarks:
      benchmark_weights[benchmark.BenchmarkName()] /= sum_weights
  return benchmark_weights


def GetBenchmarkWeights(
    benchmarks: dict[str, bm.Benchmark],
    scheduling_strategy: SchedulingStrategy,
    custom_weight_strings: list[str] | None = None,
) -> dict[str, float]:
  """Get the weights for each benchmark.

  The default weight for each benchmark is 1.0. If custom_weight_strings is
  provided, the weights for the benchmarks in the list will be updated.

  Args:
    benchmarks: A dictionary of {benchmark name: Benchmark object}.
    scheduling_strategy: The scheduling strategy to use when selecting next
      benchmarks.
    custom_weight_strings: A list of strings to parse for custom weights.

  Returns:
    A dictionary of {benchmark name: weight}.
  """
  custom_weights = None
  if custom_weight_strings:
    logging.info(
        "Running with selected benchmark weights: %s", custom_weight_strings
    )
    custom_weights = _ParseBenchmarkWeights(custom_weight_strings)

  logging.info("Running with scheduling strategy: %s", scheduling_strategy.name)
  if scheduling_strategy == SchedulingStrategy.BM_WEIGHTED:
    benchmark_weights = {
        benchmark.BenchmarkName(): 1.0 for benchmark in benchmarks.values()
    }
    # Update the benchmark weights with the custom weights.
    if custom_weights:
      benchmark_weights.update(custom_weights)

  elif scheduling_strategy == SchedulingStrategy.WORKLOAD_WEIGHTED:
    # Get number of benchmarks for each workload
    workload_benchmark = {
        workload: [
            benchmark
            for benchmark in benchmarks.values()
            if benchmark.Workload() == workload
        ]
        for workload in set(
            benchmark.Workload() for benchmark in benchmarks.values()
        )
    }

    # Calculate the weight for each benchmark
    benchmark_weights = {}
    for benchmarks in workload_benchmark.values():
      for benchmark in benchmarks:
        benchmark_weights[benchmark.BenchmarkName()] = 1 / len(benchmarks)

    # Update the benchmark weights with the custom weights if provided.
    if custom_weights:
      benchmark_weights = _UpdateWorkloadWeights(
          benchmark_weights, workload_benchmark, custom_weights
      )

  elif scheduling_strategy == SchedulingStrategy.DCTAX_WEIGHTED:
    # Get the DCTax based weights for each benchmark
    # For OSS, feel free to adjust the weights.csv file.
    benchmark_weights = GetDCTaxWeights()

    if custom_weights:
      logging.warning(
          "Custom weights are not supported for DCTAX_WEIGHTED scheduling"
          " strategy. We will ignore the custom weights."
      )
  else:
    raise ValueError(
        "Unsupported scheduling strategy: %s" % scheduling_strategy.name
    )
  return benchmark_weights
