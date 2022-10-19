# Fleetbench

Fleetbench is a benchmarking suite for Google workloads. It's a
[portmanteau](https://en.wikipedia.org/wiki/Portmanteau) of
"[fleet](https://services.google.com/fh/files/misc/fleet_management_at_scale_white_paper.pdf)"
and "benchmark". It is meant for use by chip vendors, compiler researchers, and
others interested in making performance optimizations beneficial to workloads
similar to Google's. This repository contains the Fleetbench C++ code.

## Overview

Fleetbench is a benchmarking suite that consists of a curated set of
microbenchmarks for hot functions across Google's fleet. The data set
distributions it uses for executing the benchmarks are derived from data
collected in production.

IMPORTANT: The benchmarking suite is not complete at this time. As described in
[this paper](https://research.google/pubs/pub44271/), a significant portion of
compute is spent in code common to many applications - the so-called ‘Data
Center Tax’. This benchmark at `v0.1` represents subset of core libraries used
across the fleet. Future releases will continue to increase this coverage. The
goal is to expand coverage iteratively and keep distributions up-to-date, so
always use its version at `HEAD`.

For more information, see:

*   [Versioning](#versioning) on the details of Fleetbench's releases.
*   [Future Work](#future-work) section on all that we plan to add.
*   [Setup](#setup) for how to run the benchmark.

## Benchmark fidelity

Benchmark fidelity is an important consideration in building this suite. There
are 3 levels of fidelity that we consider:

1.  The suite exercises the same functionality as production.
1.  The suite's performance counters match production.
1.  An optimization's impact on the suite matches the impact on production.

The goal of the suite for Y22 is to achieve the first level of fidelity.

## Versioning

Fleetbench uses [semantic versioning](http://semver.org) for its releases, where
`PATCH` versions will be used for bug fixes, `MINOR` for updates to
distributions and category coverage, and `MAJOR` for substantial changes to the
benchmarking suite. All releases will be tagged, and the suite can be built and
run at any version of the tag.

If you're starting out, authors recommend you always use the latest version at
HEAD only.

## Setup

[Bazel](https://bazel.build) is the official build system for Fleetbench.

The suite can be built and run with Bazel. For example, to run swissmap
benchmark for hot setup, do:

```
bazel run -c opt fleetbench/swissmap:hot_swissmap_benchmark
```

Swissmap benchmark for cold access setup takes much longer to run to completion,
so by default it has a `--benchmark_filter` flag set to narrow down to smaller
set sizes of `16` and `64` elements:

```
bazel run -c opt fleetbench/swissmap:cold_swissmap_benchmark
```

To change this filter, you can specify a regex in `--benchmark_filter` flag
([more info](https://github.com/google/benchmark/blob/main/docs/user_guide.md#running-a-subset-of-benchmarks)).
Example to run for only sets of `16` and `512` elements:

```
bazel run -c opt fleetbench/swissmap:cold_swissmap_benchmark -- --benchmark_filter=".*set_size:(16|512).*"
```

The protocol buffer benchmark is set to run for at least 3s by default:

```
bazel run -c opt fleetbench/proto:proto_benchmark
```

To change the duration to 30s, run the following:

```
bazel run -c opt fleetbench/proto:proto_benchmark -- --benchmark_min_time=30
```

The TCMalloc's Empirical Driver benchmark can take ~1hr to run all benchmarks:

```
bazel run -c opt fleetbench/tcmalloc:empirical_driver
```

To do build and execution of the benchmark in separate steps, run the commands
below.

NOTE: you'll need to specify the flags `--benchmark_filter` and
`--benchmark_min_time` explicitly when build and execution are split into two
separate steps.

```
bazel build -c opt fleetbench/swissmap:hot_swissmap_benchmark
bazel-bin/fleetbench/swissmap/hot_swissmap_benchmark --benchmark_filter=all
```

NOTE: the suite will be expanded with the ability to execute all benchmarks with
one target.

WARNING: MacOS and Windows have not been tested, and are not currently supported
by Fleetbench.

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
    micro[benchmark framework](https://github.com/google/benchmark). Please
    reference its documentation for comparing results across benchmark runs:
    [link](https://github.com/google/benchmark/blob/main/docs/tools.md).

1.  Q: How do I build the benchmark with FDO?

    A: This is currently blocked on
    [Bazel 6.0.0](https://github.com/bazelbuild/bazel/issues/16159) becoming
    available. See
    [Bazel FDO GH issue](https://github.com/bazelbuild/bazel/pull/13620) for
    details.

1.  Q: My question isn't addressed here. How do I contact the development team?

    A: Please see
    [previous GH issues](https://github.com/google/fleetbench/issues) and file a
    new one, if your question isn't addressed there.

## License

Fleetbench is licensed under the terms of the Apache license. See LICENSE for
more information.

Disclaimer: This is not an officially supported Google product.
