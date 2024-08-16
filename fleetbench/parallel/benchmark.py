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
import re
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


def GetSubBenchmarks(benchmark_path: str, workload: str = "") -> list[str]:
  """Retrieves a list of sub-benchmarks from a benchmark executable.

  If 'workload' is specified, only sub-benchmarks with the given workload are
  returned.
  """
  cmd = [benchmark_path, "--benchmark_list_tests"]

  if workload == "all":
    cmd += ["--benchmark_filter=all"]
  elif workload:
    cmd += [
        f"--benchmark_filter=BM_{workload.upper()}",
    ]
  p = subprocess.run(cmd, capture_output=True, text=True, check=True)
  return p.stdout.split("\n")[:-1]


def GetWorkloads(benchmark_path: str):
  """Retrieves a list of unique workloads from a benchmark executable."""
  benchmarks = GetSubBenchmarks(benchmark_path, "all")
  workload_pattern = r"BM_(?P<workload>[^_]+)"

  def extract_workload(benchmark):
    match = re.search(workload_pattern, benchmark)
    return match.group("workload") if match else None

  return list(set(filter(None, map(extract_workload, benchmarks))))


class Benchmark:
  """Represents a benchmark binary and filter."""

  def __init__(self, name: str, benchmark_filter: str):
    self._name = os.path.basename(name)
    self._path = _FindBenchmarkPath(name)
    self._benchmark_filter = benchmark_filter
    # Trailing $ since this is a regex and we don't want to match anything
    # extra.
    self._command_flag = [f"--benchmark_filter={self._benchmark_filter}$"]

  def CommandLine(self) -> list[str]:
    return [self._path] + self._command_flag

  def AddCommandFlags(self, flag: list[str]) -> None:
    self._command_flag.extend(flag)

  def Name(self):
    return f"{self._name} ({self._benchmark_filter})"

  def __str__(self):
    return self.Name()
