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
from absl import logging


_BENCHMARK_DIR = flags.DEFINE_string(
    "benchmark_dir",
    None,
    "Directory containing benchmarks.",
)


def CleanEnv() -> dict[str, str]:
  """Returns a copy of the current environment suitable for subprocesses."""
  env = os.environ.copy()
  # Subprocesses don't share the same runfiles as this script.
  env.pop("RUNFILES_MANIFEST_FILE", None)
  return env


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

  Args:
    benchmark_path: Path to the benchmark binary.
    workload: The workload to filter for. If empty, all sub-benchmarks are
      returned.

  Returns:
    A list of sub-benchmark names that match the workload filter.
  """
  cmd = [benchmark_path, "--benchmark_list_tests"]

  if workload == "all":
    cmd += ["--benchmark_filter=all"]
  elif workload:
    cmd += [
        f"--benchmark_filter=BM_{workload.upper()}",
    ]
  try:
    p = subprocess.run(
        cmd, capture_output=True, text=True, check=True, env=CleanEnv()
    )
  except subprocess.CalledProcessError as e:
    logging.exception("Failed to get sub-benchmarks: %s (%s)", cmd, e.stderr)
    raise
  return p.stdout.split("\n")[:-1]


def GetWorkloads(benchmark_path: str):
  """Retrieves a list of unique workloads from a benchmark executable."""
  benchmarks = GetSubBenchmarks(benchmark_path, "all")
  workload_pattern = r"BM_(?P<workload>[^_]+)"

  def _ExtractWorkload(benchmark):
    match = re.search(workload_pattern, benchmark)
    return match.group("workload") if match else None

  return list(set(filter(None, map(_ExtractWorkload, benchmarks))))


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

  def Path(self):
    return f"{self._path}"

  def BenchmarkName(self):
    return self._benchmark_filter

  def Workload(self):
    return self._benchmark_filter.split("_")[1]

  def __str__(self):
    return self.Name()


def _CreateBenchmarks(bm_target: str, names: list[str]) -> dict[str, Benchmark]:
  """Creates benchmark dictionary with the benchmark name as the key."""
  benchmarks = {}
  for name in names:
    benchmark = Benchmark(bm_target, name)
    benchmarks[benchmark.Name()] = benchmark
  return benchmarks


def _CreateMatchingBenchmarks(
    bm_target: str, bm_filter: str, bm_candidates: list[str]
) -> dict[str, Benchmark]:
  """Creates benchmarks that match the given filter."""
  matching_bm_names = [name for name in bm_candidates if bm_filter in name]
  if not matching_bm_names:
    raise ValueError(f"Can't find benchmarks matching {bm_filter}.")
  return _CreateBenchmarks(bm_target, matching_bm_names)


def GetDefaultBenchmarks(
    benchmark_target: str, benchmark_filters: list[str]
) -> dict[str, Benchmark]:
  """Get a list of benchmarks from the default target.

    Filtering options:
  - Empty list: Returns all default benchmarks.
  - Keyword list: Returns benchmarks from the default list matching the provided
                  keyword (e.g., "Cold Hot").

  Args:
    benchmark_target: Path to the benchmark binary.
    benchmark_filters: List of filters to apply to the benchmarks to run.

  Returns:
    A map of benchmark names to Benchmark objects.
  """
  benchmarks = {}
  sub_benchmarks = GetSubBenchmarks(benchmark_target)

  # Gets default benchmark sets
  if not benchmark_filters:
    return _CreateBenchmarks(benchmark_target, sub_benchmarks)

  # Gets benchmark sets from filters
  for bm_filter in benchmark_filters:
    benchmarks.update(
        _CreateMatchingBenchmarks(benchmark_target, bm_filter, sub_benchmarks)
    )
  return benchmarks


def GetWorkloadBenchmarks(
    benchmark_target: str, workload_filters: list[str]
) -> dict[str, Benchmark]:
  """Get a list of benchmarks from the given workload that match the filters.

  Filtering options:
    - Workload name + keyword(s): Returns benchmarks associated with the
        specified workload, further filtered by keywords (e.g.,
        "libc,Memcpy,Memcmp").
    - Workload name + "all": Returns all benchmarks associated with the
        specified workload (e.g., "proto,all").
  Args:
    benchmark_target: Path to the benchmark binary.
    workload_filters: List of filters to apply to the benchmarks to run.

  Returns:
    A map of benchmark names to Benchmark objects.
  """
  benchmarks = {}

  # Get all unique workloads
  workloads = GetWorkloads(benchmark_target)

  def _GetWorkloadAndFilter(bm_filter: str) -> tuple[str, list[str]]:
    parts = bm_filter.split(",")
    if parts[0].upper() not in workloads:
      raise ValueError(f"Workload {parts[0]} not supported in Fleetbench.")
    return parts[0], parts[1:]

  for workload_filter in workload_filters:
    workload, bm_filters = _GetWorkloadAndFilter(workload_filter)
    workload_bms = GetSubBenchmarks(benchmark_target, workload)
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
