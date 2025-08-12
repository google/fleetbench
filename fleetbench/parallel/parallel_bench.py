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

# pylint:disable=line-too-long
from fleetbench.parallel import cpu
from fleetbench.parallel import parallel_bench_lib
from fleetbench.parallel import weights
# pylint:enable=line-too-long

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
    "benchmark_filter",
    [],
    """Specifies subset of benchmarks to run.
    Filtering options:
    - Empty list: Selects all default benchmarks.
    - Keyword list: Selects benchmarks from the default list matching any
      provided keyword, one keyword per filter
      (e.g., "--benchmark_filter=Cold --benchmark_filter=Hot")
    """,
)

_WORKLOAD_FILTER = flags.DEFINE_multi_string(
    "workload_filter",
    [],
    """Selects benchmarks associated with specified workloads. This will
       overwrite the `--benchmark_filter` flag.
    Filtering options:
    - Workload name + keyword(s): Selects benchmarks associated with the
      specified workload, further filtered by keywords
      (e.g., "--workload_filter=libc,Memcpy,Memcmp").
    - Workload name + "all": Selects all benchmarks associated with the
      specified workload (e.g., "--workload_filter=proto,all")
    """,
)

_BENCHMARK_PERF_COUNTERS = flags.DEFINE_string(
    "benchmark_perf_counters",
    "",
    "Perf counter to collect during benchmark run. When applied, all benchmarks"
    " will be run with the same counter.",
)

_BENCHMARK_REPETITIONS = flags.DEFINE_integer(
    "benchmark_repetitions",
    0,
    "Number of times to run each benchmark. Applied to all benchmarks.",
    lower_bound=0,
)

# This is a bit hacky. We set the flag to ensure the target utilization is
# actually reached.
_BENCHMARK_MIN_TIME = flags.DEFINE_string(
    "benchmark_min_time",
    "2s",
    "Minimum time to run each benchmark. Applied to all benchmarks.",
)

_UTILIZATION = flags.DEFINE_float(
    "utilization",
    0.75,
    "Desired fraction of CPU utilization (0 - 1).",
    lower_bound=0,
    upper_bound=1,
)


_SCHEDULING_STRATEGY = flags.DEFINE_enum_class(
    "scheduling_strategy",
    weights.SchedulingStrategy.WORKLOAD_WEIGHTED,
    weights.SchedulingStrategy,
    "The scheduling strategy to use. The default is WORKLOAD_WEIGHTED, which"
    " means the benchmarks will be selected based on the expected workload"
    " runtime. If set to BM_WEIGHTED, the benchmarks will be selected based on"
    " the expected benchmark runtime. The DCTAX_WEIGHTED will run benchmarks"
    " based on the DCTax ratio.",
)


_CUSTOM_BENCHMARK_WEIGHTS = flags.DEFINE_multi_string(
    "benchmark_weights",
    [],
    "Weights for selected benchmarks. Default weight of 1.0 is used if not"
    " specified. If set, the benchmarks will be selected based on the weights."
    " The input should be in the format of"
    " <benchmark_name|benchmark_filter>:<weight>. If the number of weights is"
    " less than the number of benchmarks, the remaining benchmarks will use the"
    " default weights.",
)

_CUSTOM_BENCHMARK_THREADS = flags.DEFINE_multi_string(
    "benchmark_threads",
    [],
    "Number of threads to use for selected benchmarks. The input should be in"
    " the format of <benchmark_name|benchmark_filter>:<n_threads>. Benchmarks"
    " for which no thread count is specified will use one thread by default.",
)

_NUM_CPUS = flags.DEFINE_integer(
    "num_cpus",
    len(cpu.Available()),
    """Number of CPUs to use. Note that 1 CPU will be reserved for scheduling.
    The lowest available core will be used for the control thread, and the
     remaining up to num_cpus - 1 will be used for the workers.""",
    lower_bound=2,
    upper_bound=len(cpu.Available()),
)

_HYPERTHREADING_MODE = flags.DEFINE_enum_class(
    "hyperthreading_mode",
    cpu.HyperthreadingMode.DYNAMIC,
    cpu.HyperthreadingMode,
    "The scheduling_mode to use. If particular, this controls the SMT state. If"
    " set to DISABLE, SMT will be disabled. If set to DYNAMIC, SMT will be"
    " enabled and the scheduler will be allowed to pin workloads. If set to"
    " SKEWED, SMT will be enabled and workloads will be pinned to Socket0 and"
    " lower hyperthreads as primary and higher hyperthreads as secondary. If"
    " set to BALANCED, SMT will be enabled and workloads will be balanced"
    " across sockets and hyperthreads.",
)

_REPETITIONS = flags.DEFINE_integer(
    "repetitions",
    1,
    "Number of times to run the the entire framework. If asked to run for"
    " multiple times, each run will share settings and the reported results"
    " will be averaged.",
    lower_bound=1,
)

_KEEP_RAW_DATA = flags.DEFINE_bool(
    "keep_raw_data",
    False,
    "If true, the raw data will be kept in the temp directory.",
)


def _ParseBenchmarkThreads(
    benchmark_threads_list: list[str],
) -> dict[str, int]:
  """Parses a list of benchmark thread count specs into a dictionary.

  The string element in the list should be in the format:
  <benchmark_name|benchmark_filter>:<n_threads>.

  Args:
    benchmark_threads_list: A list of strings to parse.

  Returns:
    A dictionary of {<benchmark_name|benchmark_filter>: <n_threads>}.
  """
  benchmark_threads = {}
  for spec in benchmark_threads_list:
    try:
      benchmark, n_threads = spec.rsplit(":", maxsplit=1)
      benchmark_threads[benchmark] = int(n_threads)
    except ValueError:
      logging.warning(
          "Invalid benchmark string: %s. The format should be"
          " <benchmark_name|benchmark_filter>:<n_threads>. Skipping...",
          spec,
      )

  return benchmark_threads


def main(argv: Sequence[str]) -> None:
  if len(argv) > 1:
    raise app.UsageError("Too many command-line arguments.")

  shutil.rmtree(_TEMP_ROOT.value, ignore_errors=True)
  os.makedirs(_TEMP_ROOT.value, exist_ok=True)

  cpu_arch = cpu.GetCPUArch()
  if cpu_arch == "aarch64":
    logging.info("Running on ARM. SMT is unsupport.")
    cpus = list(cpu.Available())[: _NUM_CPUS.value]
    target_utilization = _UTILIZATION.value
  elif cpu_arch == "x86_64":
    logging.info("Running on x86. Adjusting CPU scheduling...")
    scheduling_mode = cpu.CpuSchedulingMode(
        num_cpus=_NUM_CPUS.value,
        utilization=_UTILIZATION.value,
        hyperthreading_mode=_HYPERTHREADING_MODE.value,
    )
    cpus, target_utilization = scheduling_mode.SelectCPURangeAndSetUtilization()
  else:
    raise ValueError(f"Unsupported CPU architecture: {cpu_arch}")

  bench = parallel_bench_lib.ParallelBench(
      cpus=cpus,
      cpu_affinity=_CPU_AFFINITY.value,
      utilization=target_utilization,
      duration=_DURATION.value,
      repetitions=_REPETITIONS.value,
      temp_parent_root=_TEMP_ROOT.value,
      keep_raw_data=_KEEP_RAW_DATA.value,
      benchmark_perf_counters=_BENCHMARK_PERF_COUNTERS.value,
      benchmark_threads=_ParseBenchmarkThreads(_CUSTOM_BENCHMARK_THREADS.value),
  )

  bench.SetWeights(
      _BENCHMARK_TARGET.value,
      _BENCHMARK_FILTER.value,
      _WORKLOAD_FILTER.value,
      _SCHEDULING_STRATEGY.value,
      _CUSTOM_BENCHMARK_WEIGHTS.value,
  )

  bench.Run(
      benchmark_repetitions=_BENCHMARK_REPETITIONS.value,
      benchmark_min_time=_BENCHMARK_MIN_TIME.value,
  )
  logging.info("Benchmark output is in %s", _TEMP_ROOT.value)


if __name__ == "__main__":
  app.run(main)
