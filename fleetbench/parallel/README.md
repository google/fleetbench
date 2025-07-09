# Fleetbench Multiprocessing

This page describes the Fleetbench
multiprocessing framework, which resides in
/fleetbench/parallel/.

[TOC]

## Overview

This framework runs Fleetbench benchmarks concurrently across multiple CPU cores
to simulate specific CPU utilization levels. It schedules benchmarks based on
their expected runtimes and configurable weighting strategies to achieve and
maintain the target load over a defined duration.

The main script is `parallel_bench.py`, which orchestrates the parallel
execution using helper modules for CPU management, benchmark execution, worker
threads, and reporting.

## Features

*   **Parallel Execution:** Leverages multiple CPU cores to run benchmarks
    simultaneously.
*   **Target Utilization:** Aims to achieve a user-defined average CPU
    utilization across selected cores.
*   **CPU Affinity:** Option to bind worker threads to specific CPU cores for
    predictable performance.
*   **Flexible Benchmark Selection:**
    *   Run all default benchmarks.
    *   Filter benchmarks by keywords.
    *   Filter benchmarks by predefined workload groups (e.g., `proto`, `libc`).
*   **Weighted Scheduling:** Selects benchmarks to run based on different
    strategies (e.g., workload runtime, individual benchmark runtime, custom
    weights) to match target distributions.
*   **Hyperthreading Control (x86_64):** Manage Simultaneous Multithreading
    (SMT) state and workload placement (disable, dynamic, skewed, balanced).
*   **Performance Monitoring:** Collects basic timing information and optionally
    integrates with `perf` counters.
*   **Reporting:** Generates summary reports in JSON format, including
    aggregated results and average utilization.

## Usage

1.  Build the Fleetbench binary:

    ```
    bazel build --config=clang --config=opt --config=haswell fleetbench:fleetbench
    ```

1.  Build the parallel framework binary:

    ```
    bazel build --config=clang --config=opt --config=haswell fleetbench/parallel:parallel_bench
    ```

1.  Run the framework mode. By default, it will run for 60 seconds and attempt
    to utilize 75% of the system's CPU.

    ```
    bazel-bin/fleetbench/parallel/parallel_bench --benchmark_target=bazel-bin/fleetbench/fleetbench
    ```

    If you want to run a single benchmark on multi cores, `--benchmark_filter`
    can be helpful:

    ```
    bazel-bin/fleetbench/parallel/parallel_bench --benchmark_target=bazel-bin/fleetbench/fleetbench --benchmark_filter=BM_PROTO_Arena"
    ```

    Tip: Please check [here](#command-flags) for more flags.

## How it works

1.  **Initialization** Parses command-line flags, detects CPU architecture (x86
    vs. arm), selects the specific CPU cores to use based on `--num_cpus` and
    `--hyperthreading_mode` and creates the main `ParallelBench` object.

1.  **Benchmark Setup** Determines the list of benchmarks to run based on
    filters. Calculates initial benchmark selection weights/probabilities based
    on the chosen strategy. And initializes controller and worker threads.

1.  **Scheduling Loop** This loop runs for the specified `--duration`.

    *   Periodically checks current CPU utilization across worker cores.
    *   Calculates the number of additional benchmark jobs needed to reach
        `--utilization`.
    *   Selects which benchmarks to run next. Probabilities are adjusted
        dynamically based on observed runtimes of completed benchmarks.
    *   Dispatches the selected benchmark objects to idle worker threads.
    *   Collects completed `Result` objects from workers, updating runtime
        statistics for future scheduling decisions.

1.  **Benchmark Execution** Each Worker thread waits for its assigned benchmark
    object.

    *   If `--cpu_affinity` is set, the worker binds itself to its assigned CPU.
    *   The worker executes the benchmark using subprocess, passing necessary
        benchmark flags. It reads the JSON output from the benchmark, parses key
        metrics, and stores the corresponding result.

1.  **Shutdown & Reporting**

    *   After the duration completes, the controller signals workers to stop and
        collects any remaining results.
    *   Results from all runs within a repetition are aggregated into a
        Dataframe. If perf counters were requested, they are parsed and added.
    *   A summary report is generated and saved to results.json in the
        repetition's temporary directory.
    *   If `--keep_raw_data` is false, individual run files (`run_XXX`) are
        deleted.If multiple repetitions were run, a final aggregated report is
        created in the parent directory.

## Command Flags

Flags are defined in
[parallel_bench.py](https://github.com/google/fleetbench/blob/main/fleetbench/parallel/parallel_bench.py).

Here's a breakdown:

### Basic Execution

*   `--duration:` (Integer, default: 60) Minimum duration in seconds for the
    entire parallel run. The tool will try to sustain load for at least this
    long.

*   `--utilization`: (Float, 0.0-1.0, default: 0.75) The desired average CPU
    utilization across the worker cores.

*   `--repetitions`: (Integer, default: 1) How many times to repeat the entire
    benchmarking experiment (each run lasts `--duration` seconds). Results
    across repetitions are averaged in the final report.

*   `--temp_dir`: (String, default: `/tmp/parallel_bench`) Directory for storing
    temporary files and results. Each repetition gets a subdirectory (e.g.,
    `run_0`, `run_1`).

### Benchmark Selection & Configuration

*   `--benchmark_target`: (String, default: `fleetbench`) The name or full path
    of the Fleetbench benchmark executable.

*   `--benchmark_filter`: (String, repeatable) Selects benchmarks from the
    minimal set
    that contain any of the specified keywords.

    Example: `--benchmark_filter=PROTO --benchmark_filter=LIBC`

*   `--workload_filter`: (String, repeatable) Selects benchmarks based on
    workload groups. Overrides `--benchmark_filter`. The format is
    `workload_name,keyword1,keyword2` or `workload_name,all`. This flag
    differentiates from the previous flag as it selects benchmarks from entire
    collection of benchmark pools. In contrast, `--benchmark_filter` only
    filters benchmarks within the minimal set.

    Example: `--workload_filter=LIBC,Memcpy,Memcmp --workload_filter=PROTO,all`.

*   `--scheduling_strategy`: (Enum, default: `WORKLOAD_WEIGHTED`) Strategy for
    choosing the next benchmark:

    *   `WORKLOAD_WEIGHTED`: Based on expected aggregate runtime of benchmarks
        within a workload.
    *   `BM_WEIGHTED`: Based on the expected runtime of individual benchmarks.
    *   `DCTAX_WEIGHTED`: We provide a templated
        [weights.csv](https://github.com/google/fleetbench/blob/main/fleetbench/parallel/weights.csv)
        for this strategy. Please adjust the file at your interest. With this
        strategy, the aggregated runtime for each benchmark will be proportional
        to the ratios defined in this CSV file.

*   `--benchmark_weights`: (String, repeatable) Assign custom weights to
    benchmarks or filtered groups. Format:
    "benchmark_name|filter_keyword:weight". Benchmarks not explicitly weighted
    default to 1.0. By adjusting the weight for different benchmarks, it's able
    to control the memory bandwidth utilization during the run.

    Example: `--benchmark_weights="PROTO:2.5" --benchmark_weights="COLD:0.5"`

### Performance & Tuning

*   `--benchmark_repetitions`: (Integer, default: 0) Number of times each
    individual benchmark invocation should repeat internally. This is the same
    flag as supported in
    https://github.com/google/benchmark.

*   `--benchmark_min_time`: (String, default: "2s") Minimum duration for each
    individual benchmark invocation. Again, please follow the
    https://github.com/google/benchmark
    usage.

*   `--benchmark_perf_counters`: (String, default: "") Comma-separated list of
    perf counters to collect for each individual benchmark run such as
    `--benchmark_perf_counters=cycles,instructions`

### CPU & Scheduling Control

*   `--num_cpus`: (Integer, default: all available) Total number of logical CPUs
    to use. One CPU is reserved for the controller thread; the rest are used for
    workers. Must be >= 2.
*   `--cpu_affinity`: (Boolean, default: True) If true, bind each worker thread
    tightly to its assigned CPU core. If false, allow the OS scheduler to manage
    worker placement.
*   `--hyperthreading_mode`: (Enum, default: DYNAMIC, x86_64 only) Controls SMT
    (Hyperthreading) behavior:

    *   `DISABLE`: SMT disabled. Attempts to select only one thread per physical
        core, effectively disabling SMT for the benchmark run. Utilization
        target applies to these selected cores.
    *   `DYNAMIC`: SMT enabled, OS scheduler manages placement across available
        cores (up to --num_cpus).
    *   `SKEWED`: SMT enabled. Tries to fill cores on Socket 0 first, then
        Socket 1. Uses lower-numbered sibling threads preferentially.
    *   `BALANCED`: SMT enabled. Tries to distribute work evenly across sockets
        and cores/threads.

    Note: SKEWED and BALANCED modes adjust `--num_cpus` internally and set
    `--utilization` effectively to 1.0 for the selected set of cores to ensure
    they are fully loaded.

### Output & Reporting

*   `--keep_raw_data`: (Boolean, default: False) If true, keeps the individual
    JSON output files generated by each benchmark run within the `temp_dir`.
    Otherwise, they are deleted after results are aggregated.

## Run with FDO

To run the benchmarks with FDO optimization, please follow the instructions
below:

1.  Build the instrumented binary:

    ```
    bazel build --config=clang --config=opt --config=haswell --fdo_instrument=.fdo fleetbench:fleetbench
    bazel build --config=clang --config=opt --config=haswell --fdo_instrument=.fdo fleetbench/parallel:parallel_bench
    ```

1.  Run the benchmarks to collect the FDO profile:

    ```
    bazel-bin/fleetbench/parallel/parallel_bench --benchmark_target=bazel-bin/fleetbench/fleetbench
    ```

    This will generate a `.fdo/default_*.profraw` file.

1.  Next we re-build the optimized binaries:

    ```
    bazel build --config=clang --config=opt --config=haswell --fdo_optimize=.fdo/default_*.profraw fleetbench:fleetbench
    bazel build --config=clang --config=opt --config=haswell --fdo_optimize=.fdo/default_*.profraw fleetbench/parallel:parallel_bench
    ```

1.  Lastly, run the multiprocessing framework:

    ```
    bazel-bin/fleetbench/parallel/parallel_bench --benchmark_target=bazel-bin/fleetbench/fleetbench
    ```
