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

"""Runs a single benchmark and collects the results and metadata."""

import json
import subprocess
import time

from absl import logging

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import result


class Run:
  """Represents a single run of a benchmark."""

  def __init__(self, benchmark: bm.Benchmark, out_file: str):
    self.benchmark = benchmark
    self.out_file = out_file

  def Execute(self) -> result.Result:
    """Runs the benchmark and returns the result."""
    command = self._CommandLine()
    logging.debug("running %s", command)
    try:
      start = time.time()
      proc = subprocess.run(command, capture_output=True, check=True, text=True)
      end = time.time()
    except subprocess.CalledProcessError as e:
      logging.exception("Run failed: %s (%s)", command, e.stderr)
      return result.Result(
          benchmark=self.benchmark.Name(),
          rc=e.returncode,
          stdout=e.stdout,
          stderr=e.stderr,
      )

    with open(self.out_file, "r") as f:
      benchmark_output = f.read()
    benchmark_cpu_time = self._GetBenchmarkRuntime(benchmark_output)
    return result.Result(
        benchmark=self.benchmark.Name(),
        rc=proc.returncode,
        duration=end - start,
        bm_cpu_time=benchmark_cpu_time,
        result=benchmark_output,
        stdout=proc.stdout,
        stderr=proc.stderr,
    )

  def _CommandLine(self) -> list[str]:
    return self.benchmark.CommandLine() + [
        "--benchmark_out_format=json",
        f"--benchmark_out={self.out_file}",
    ]

  def _GetBenchmarkRuntime(self, benchmark_output: str) -> float:
    data = json.loads(benchmark_output)
    return data["benchmarks"][0]["cpu_time"]
