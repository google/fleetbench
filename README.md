# Fleetbench

Fleetbench is a benchmarking suite for Google workloads. It's a
[portmanteau](https://en.wikipedia.org/wiki/Portmanteau) of
"[fleet](https://services.google.com/fh/files/misc/fleet_management_at_scale_white_paper.pdf)"
and "benchmark". It is meant for use by chip vendors, compiler researchers, and
others interested in making performance optimizations beneficial to workloads
similar to Google's. This repository contains the Fleetbench C++ code.

Details on Fleetbench can be found in our paper
[A Profiling-Based Benchmark Suite for Warehouse-Scale Computers](https://doi.org/10.1109/ISPASS61541.2024.00046).

NOTE: As this project is evolving, we recommend including the tag/release number
when citing it to avoid any confusion.

## Overview

Fleetbench is a benchmarking suite that consists of a curated set of
microbenchmarks for hot functions across Google's fleet. The data set
distributions it uses for executing the benchmarks are derived from data
collected in production.

IMPORTANT: This benchmark at `v1.0.0` represents subset of core libraries used
across the fleet. Future releases will continue to increase this coverage. The
goal is to expand coverage iteratively and keep distributions up-to-date, so
always use its version at `HEAD`.

For more information, see:

*   [Workloads coverage](#workloads-coverage) for latest suite coverage.
*   [Versioning](#versioning) on the details of Fleetbench's releases.
*   [Running Benchmarks](#running-benchmarks) for how to run the benchmark.
*   [Future Work](#future-work) section on all that we plan to add.

## Benchmark fidelity

Benchmark fidelity is an important consideration in building this suite. There
are 3 levels of fidelity that we consider:

1.  The suite exercises the same functionality as production.
1.  The suite's performance counters match production.
1.  An optimization impact on the suite matches the impact on production.

## Versioning

Fleetbench uses [semantic versioning](http://semver.org) for its releases, where
`PATCH` versions will be used for bug fixes, `MINOR` for updates to
distributions and category coverage, and `MAJOR` for substantial changes to the
benchmarking suite. All releases will be tagged, and the suite can be built and
run at any version of the tag.

If you're starting out, authors recommend you always use the latest version at
HEAD only.

## Workloads coverage

As of Q2'25, Fleetbench provides coverage for several major hot libraries.

Benchmark   | Description
----------- | -----------
Proto       | Instruction-focused.
Swissmap    | Data-focused.
Libc        | Data-focused. Benchmarking `memcpy`, `memcmp/bcmp`, `memset`, and `memmove`.
TCMalloc    | Data-focused.
Compression | Data-focused. Covers [Snappy](https://github.com/google/snappy), [ZSTD](https://facebook.github.io/zstd/), [Brotli](https://github.com/google/brotli), and Zlib.
Hashing     | Data-focused. Supports algorithms [CRC32](https://github.com/abseil/abseil-cpp/tree/master/absl/crc) and [absl::Hash](https://github.com/abseil/abseil-cpp/tree/master/absl/hash).
STL-Cord    | Instruction-focused.
RPC         | Instruction-focused with a strong data-drive aspect and buit on [gRPC framework](https://grpc.io)
SIMD        | [ScaNN LUT16](https://research.google/blog/announcing-scann-efficient-vector-similarity-search/) based and measures performance of lookup-and-accumulate.

## Running Benchmarks

### Setup

[Bazel](https://bazel.build) is the official build system for Fleetbench.

We currently require Bazel version 8.0.0. Consider
[Bazelisk](https://github.com/bazelbuild/bazelisk) to automatically manage your
Bazel version.

NOTE: Our setup uses LLVM 17.0.1.

As an example, to run the Swissmap benchmarks:

```
bazel run --config=opt fleetbench/swissmap:swissmap_benchmark
```

Important: Always run benchmarks with `--config=opt` to apply essential compiler
optimizations.

### Run commands

Replacing the `$WORK_LOAD` and `$BUILD_TARGET` with one of the entry in the
table to build and run the benchmark. The reasons why we add each build flag are
explained in the next few sections.

<section class="tabs">

#### X86 {.new-tab}

```
bazel build --config=clang --config=opt \
--config=haswell fleetbench/WORK_LOAD:BUILD_TARGET
GLIBC_TUNABLES=glibc.pthread.rseq=0 bazel-bin/fleetbench/WORK_LOAD/BUILD_TARGET
```

Or combining build and run together:

```
GLIBC_TUNABLES=glibc.pthread.rseq=0 bazel run --config=clang --config=opt \
--config=haswell fleetbench/WORK_LOAD:BUILD_TARGET
```

#### Arm {.new-tab}

```
bazel build --config=clang --config=opt \
--config=arm fleetbench/WORK_LOAD:BUILD_TARGET
GLIBC_TUNABLES=glibc.pthread.rseq=0 bazel-bin/fleetbench/WORK_LOAD/BUILD_TARGET
```

Or combining build and run together:

```
GLIBC_TUNABLES=glibc.pthread.rseq=0 bazel run --config=clang --config=opt \
--config=arm fleetbench/WORK_LOAD:BUILD_TARGET
```

</section>

Benchmark   | WORKLOAD    | BUILD_TARGET          | Binary run flags
----------- | ----------- | --------------------- | ----------------
Proto       | proto       | proto_benchmark       |
Swissmap    | swissmap    | swissmap_benchmark    |
Libc memory | libc        | mem_benchmark         | `--benchmark_counters_tabular=true`
TCMalloc    | tcmalloc    | empirical_driver      | Check `--benchmark_filter` below.
Compression | compression | compression_benchmark | `--benchmark_counters_tabular=true`
Hashing     | hashing     | hashing_benchmark     | `--benchmark_counters_tabular=true`
STL-Cord    | stl         | cord_benchmark        |
RPC         | rpc         | rpc_benchmark         |
SIMD        | simd        | simd_benchmark        |

NOTE: By default, each benchmark only runs a minimal set of tests that we have
selected as the most representative. To see the default lists, you can use the
`--benchmark_list_tests` flag when running the target. You can add
`--benchmark_filter=all` to see the exhaustive list.

You can also specify a regex in `--benchmark_filter` flag to specify a subset of
benchmarks to run
([more info](https://github.com/google/benchmark/blob/main/docs/user_guide.md#running-a-subset-of-benchmarks)).
The TCMalloc Empirical Driver benchmark can take ~1hr to run all benchmarks, so
running a subset may be advised.

Example to run for only sets of `16` and `64` elements of swissmap:

```
bazel run --config=opt fleetbench/swissmap:swissmap_benchmark -- \
--benchmark_filter=".*set_size:(16|64).*"
```

To extend the runtime of a benchmark, e.g. to collect more profile samples, use
`--benchmark_min_time`.

```
bazel run --config=opt fleetbench/proto:proto_benchmark -- --benchmark_min_time=30s
```

Some benchmarks also provide counter reports after completion. Adding
`--benchmark_counters_tabular=true`
([doc](https://github.com/google/benchmark/blob/main/docs/user_guide.md#counter-reporting))
can help print counters as table columns for improved layout.

### Ensuring TCMalloc per-CPU Mode

TCMalloc is the underlying memory allocator in this benchmark suite. By default
it operates in [per-CPU mode](https://google.github.io/tcmalloc/overview.html).

Note: the [Restartable Sequences (RSEQ)](https://lwn.net/Articles/883104/)
kernel feature is required for per-CPU mode. RSEQ has the limitation that a
given thread can only register a single `rseq` structure with the kernel. Recent
versions of glibc do this on initialization,
[preventing TCMalloc](https://github.com/google/tcmalloc/issues/144) from using
it.

Set the environment variable: `GLIBC_TUNABLES=glibc.pthread.rseq=0` to prevent
glibc from doing this registration. This will allow TCMalloc to operate in
per-CPU mode.

### Clang Toolchain

For more consistency with Google's build configuration, we suggest using the
Clang / LLVM tools. These instructions have been tested with LLVM 14.

These can be installed with the system's package manager, e.g. on Debian:

```
sudo apt-get install clang llvm lld
```

Otherwise, see https://releases.llvm.org to obtain these if not present on your
system or to find the newest version.

Once installed, specify `--config=clang` on the bazel command line to use the
clang compiler. We assume `clang` and `lld` are in the PATH.

Note: to make this setting the default, add `build --config=clang` to your
.bazelrc.

### Architecture-Specific Flags

If running on an x86 Haswell or above machine, we suggest adding
`--config=haswell` for consistency with our compiler flags.

Use `--config=westmere` for Westmere-era processors, and `--config=arm` for ARM
ones.

### Reducing run-to-run variance

It is expected that there will be some variance in the reported CPU times across
benchmark executions. The benchmark itself runs the same code, so the causes of
the variance are mainly in the environment. The following is a non-exhaustive
list of techniques that help with reducing run-to-run latency variance:

*   Ensure no other workloads are running on the machine at the same time. Note
    that this makes the environment less representative of production, where
    multi-tenant workloads are common.
*   Run the benchmark for longer, controlled with `--benchmark_min_time`.
*   Run multiple repetitions of the benchmarks in one go, controlled with
    `--benchmark_repetitions`.
*   Recommended by the benchmarking framework
    [here](https://github.com/google/benchmark/blob/main/docs/reducing_variance.md#reducing-variance-in-benchmarks):
    *   Disable frequency scaling
    *   Bind the process to a core by setting its affinity
    *   Disable processor boosting
    *   Disable Hyperthreading/SMT (should not affect single-threaded
        benchmarks)
    *   NOTE: We do not recommend reducing the working set of the benchmark to
        fit into L1 cache, contrary to the recommendations in the link, as it
        would significantly reduce this benchmarking suite's representativeness.
*   Disable memory randomization (ASLR)

## Future Work

Potential areas of future work include:

*   Increasing the set of benchmarks included in the suite to capture more of
    the range of code executed by google workloads.
*   Generate benchmarking score.
*   Update data distributions based on new fleet measurements.
*   Rewrite individual components with macrobenchmarks.
*   Extend the benchmarking suite to allow for drop-in replacement of equivalent
    implementations for each category of workloads.

## FAQs

1.  Q: How do I compare results of the two different runs of a benchmark, e.g.
    contender vs baseline?

    A: Fleetbench is using the
    [benchmark framework](https://github.com/google/benchmark). Please reference
    its documentation for comparing results across benchmark runs:
    [link](https://github.com/google/benchmark/blob/main/docs/tools.md).

1.  Q: How do I build the benchmark with FDO?

    A: Note that Clang and the LLVM tools are required for FDO builds.

    Take fleetbench/swissmap/swissmap_benchmark as an example.

```
# Instrument.
bazel build --config=clang --config=opt --fdo_instrument=.fdo fleetbench/swissmap:swissmap_benchmark
# Run to generate instrumentation.
bazel-bin/fleetbench/swissmap/swissmap_benchmark --benchmark_filter=all
# There should be a file with a .profraw extension in $PWD/.fdo/.
# Build an optimized binary.
bazel build --config=clang --config=opt --fdo_optimize=.fdo/<filename>.profraw fleetbench/swissmap:swissmap_benchmark
# Run the FDO-optimized binary.
bazel-bin/fleetbench/swissmap/swissmap_benchmark --benchmark_filter=all
```

1.  Q: How do I build the benchmark with ThinLTO?

    A: Note that Clang and the LLVM tools are required for ThinLTO builds. In
    particular, the `lld` linker must be in the PATH. Specify
    `--features=thin_lto` on the bazel command line. E.g.

```
bazel run --config=clang --config=opt --features=thin_lto fleetbench/proto:proto_benchmark
```

1.  Q: Does Fleetbench run on _ OS?

    A: The supported platforms are same as TCMalloc's, see
    [link](https://github.com/google/tcmalloc/blob/master/docs/platforms.md) for
    more details.

1.  Q: Can I run Fleetbench without TCMalloc?

    A: Yes. Specify `--custom_malloc="@bazel_tools//tools/cpp:malloc"` on the
    bazel command line to override with the system allocator.

1.  Q: Can I run with Address Sanitizer?

    A: Yes. Note that you need to override TCMalloc as well for ASAN to work.

    Example:

```
    bazel build --custom_malloc="@bazel_tools//tools/cpp:malloc" -c opt fleetbench/proto:proto_benchmark --copt=-fsanitize=address --linkopt=-fsanitize=address
```

1.  Q: Are the benchmarks fixed in nature?

    A: No. It is our expectation that the code under benchmark, the hardware,
    the compiler, and compiler flags used may all change in concert as to
    identify optimization opportunities.

1.  Q: My question isn't addressed here. How do I contact the development team?

    A: Please see
    [previous GH issues](https://github.com/google/fleetbench/issues) and file a
    new one, if your question isn't addressed there.

## License

Fleetbench is licensed under the terms of the Apache license. See LICENSE for
more information.

Disclaimer: This is not an officially supported Google product.
