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

"""Run Fleetbench benchmarks in parallel.

This script will run the specified benchmarks over all available CPUs to try and
achieve the desired CPU utilization. We randomly choose a benchmark based on its
expected runtime.
"""

from collections.abc import Sequence
import os
import shutil

from absl import app
from absl import flags
from absl import logging

from fleetbench.parallel import cpu
from fleetbench.parallel import parallel_bench_lib


_CPU_AFFINITY = flags.DEFINE_bool(
    "cpu_affinity", True, "Bind each worker to a single CPU."
)

_TEMP_ROOT = flags.DEFINE_string(
    "temp_dir", "/tmp/parallel_bench", "Temp directory to use."
)

_DURATION = flags.DEFINE_integer("duration", 60, "Minimum duration in seconds.")

_BENCHMARK_TARGET = flags.DEFINE_string(
    "benchmark_target",
    "fleetbench",
    "Benchmark target to run. Specify the basename if in the same directory as"
    " parallel_bench, or the full path.",
)

_BENCHMARK_FILTER = flags.DEFINE_multi_string(
    "benchmark_filter", [], "Specifies subset of benchmarks to run."
)

_UTILIZATION = flags.DEFINE_float(
    "utilization",
    0.75,
    "Desired fraction of CPU utilization (0 - 1).",
    lower_bound=0,
    upper_bound=1,
)

_NUM_CPUS = flags.DEFINE_integer(
    "num_cpus",
    len(cpu.Available()),
    "Number of CPUs to use. Note that 1 CPU will be reserved for scheduling."
    " The lowest available core will be used for the control thread, and the"
    " remaining up to num_cpus - 1 will be used for the workers.",
    lower_bound=2,
    upper_bound=len(cpu.Available()),
)


def main(argv: Sequence[str]) -> None:
  if len(argv) > 1:
    raise app.UsageError("Too many command-line arguments.")

  shutil.rmtree(_TEMP_ROOT.value, ignore_errors=True)
  os.makedirs(_TEMP_ROOT.value, exist_ok=True)

  cpus = list(cpu.Available())[: _NUM_CPUS.value]
  bench = parallel_bench_lib.ParallelBench(
      cpus=cpus,
      cpu_affinity=_CPU_AFFINITY.value,
      utilization=_UTILIZATION.value,
      duration=_DURATION.value,
      temp_root=_TEMP_ROOT.value,
  )

  # TODO(rjogrady): Summarize / Print results.
  results = bench.Run(
      benchmark_target=_BENCHMARK_TARGET.value,
      benchmark_filter=_BENCHMARK_FILTER.value,
  )
  logging.info(
      "Ran %d benchmarks. Output is in %s", len(results), _TEMP_ROOT.value
  )


if __name__ == "__main__":
  app.run(main)