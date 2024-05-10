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

"""Represent a Fleetbench benchmark."""

import os
import subprocess

from absl import flags

_BENCHMARK_DIR = flags.DEFINE_string(
    "benchmark_dir",
    None,
    "Directory containing benchmarks.",
)


def _FindBenchmarkPath(benchmark: str) -> str:
  """Find the path to the benchmark binary."""
  if os.path.exists(benchmark):
    return os.path.abspath(benchmark)

  if not _BENCHMARK_DIR.value:
    raise FileNotFoundError("Benchmark directory not specified.")

  # Look for the benchmark starting from the specified benchmark directory.
  benchmark_path = os.path.join(_BENCHMARK_DIR.value, benchmark)
  if os.path.exists(benchmark_path):
    return benchmark_path
  for root, _, files in os.walk(_BENCHMARK_DIR.value):
    if benchmark in files:
      return os.path.join(root, benchmark)
  raise FileNotFoundError(f"Benchmark not found: {benchmark}")


def GetSubBenchmarks(benchmark_path: str):
  cmd = [benchmark_path, "--benchmark_list_tests"]
  p = subprocess.run(cmd, capture_output=True, text=True, check=True)
  return p.stdout.split("\n")[:-1]


class Benchmark:
  """Represents a benchmark binary and filter."""

  def __init__(self, name: str, benchmark_filter: str):
    self._name = os.path.basename(name)
    self._path = _FindBenchmarkPath(name)
    self._benchmark_filter = benchmark_filter

  def CommandLine(self):
    # Trailing $ since this is a regex and we don't want to match anything
    # extra.
    return [self._path, f"--benchmark_filter={self._benchmark_filter}$"]

  def Name(self):
    return f"{self._name} ({self._benchmark_filter})"

  def __str__(self):
    return self.Name()
