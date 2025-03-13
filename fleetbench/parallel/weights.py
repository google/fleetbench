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

from absl import logging
from fleetbench.parallel import benchmark as bm


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


def GetBenchmarkWeights(
    benchmarks: dict[str, bm.Benchmark],
    custom_weight_strings: list[str] | None = None,
) -> dict[str, float]:
  """Get the weights for each benchmark.

  The default weight for each benchmark is 1.0. If custom_weight_strings is
  provided, the weights for the benchmarks in the list will be updated.

  Args:
    benchmarks: A dictionary of {benchmark name: Benchmark object}.
    custom_weight_strings: A list of strings to parse for custom weights.

  Returns:
    A dictionary of {benchmark name: weight}.
  """
  benchmark_weights = {
      benchmark.BenchmarkName(): 1.0 for benchmark in benchmarks.values()
  }

  # Update the benchmark weights with the custom weights.
  if custom_weight_strings:
    logging.info(
        "Running with selected benchmark weights: %s", custom_weight_strings
    )
    custom_weights = _ParseBenchmarkWeights(custom_weight_strings)
    if custom_weights:
      benchmark_weights.update(custom_weights)
  return benchmark_weights
