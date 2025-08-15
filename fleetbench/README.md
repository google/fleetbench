# Benchmark Characteristics

<!--*
# Document freshness: For more information, see go/fresh-source.
freshness: { owner: 'liyuying' reviewed: '2025-08-10' }
*-->

This page summarizes some key performance characteristics of the benchmarks.

[TOC]

## Definition:

We first present our definitions for different metrics here. The following
sections provide a detailed breakdown of each benchmark, including all necessary
details.

### Primary Bound

This category determines whether a benchmark's performance is limited by the
processor's computational speed or by the rate at which data can be moved into
and out of main memory.

*   **Compute-Bound**: The workload performs a large number of calculations
    relative to the amount of data it needs. Performance is limited by the CPU's
    ability to execute instructions.

*   **Cache-Bound**: The workload is frequently accessing data that isn't in the
    fastest L1 cache but is found in a lower level cache. While much faster than
    going to main memory, fetching from these caches still incurs latency,
    causing the CPU to wait.

*   **Memory-Bound**: The workload performance is bottlenecked by the speed of
    memory accesses. It spends more time waiting for data from RAM than it does
    computing.

### Sensitivity

These categories measure how a benchmark's performance is affected by hardware
characteristics.

*   **High**: The benchmark's performance is a primary indicator of this
    characteristic. A change in this factor would cause a major performance
    shift.

*   **Medium**: The benchmark is moderately influenced by this factor, but it is
    not the main bottleneck.

*   **Low**: The benchmark's performance is largely independent of this factor.

We apply this scale to the following areas:

*   **Memory Bandwidth Sensitivity** The benchmark's runtime is impacted
    directly by available memory bandwidth. A high sensitivity indicates an
    increase in bandwidth results in a noticeable performance gain. On the other
    hand, if the benchmark's performance is largely independent of memory
    bandwidth, it has low sensitivity.

*   **Memory Latency Sensitivity**: A high latency sensitivity indicates the
    benchmark's runtime is severely impacted by the time it takes to retrieve a
    single piece of data from memory.

*   **Cache Sensitivity**: A high cache sensitivity benchmark is almost entirely
    dependent on data being in the CPU's cache. A high cache miss rate would
    cause a massive performance drop. On the contrary, the benchmark's
    performance is largely independent of cache behavior if the cache
    sensitivity is low, either because it works with very little data or because
    it performs cache-bypassing operations.

*   **Branch Misprediction**: A high sensitivity benchmark contains
    unpredictable conditional branches that often cause the CPU to guess
    incorrectly, leading to pipeline stalls. In contrast, the benchmark has
    highly predictable control flow, with few conditional branches or
    easy-to-predict patterns when it is low sensitivity.

### Instruction Type

Besides all these sensitivities, we also include an extra column describing the
type and proportion of instructions executed. Including:

*   **Scalar/SIMD**: A workload is dominated by single-data instructions or it
    works on multiple data elements simultaneously (vector instructions).

*   **Pointer Chasing**: A workload dominated by following a chain of pointers,
    which is highly sensitive to memory latency.

*   **Memory Intensive**: High if the benchmark moves a lot of data.

*   **Bit Manipulation**: Workloads focused on logic and bitwise operations.

*   **Integer/Floating-Point**: Whether the focus is on the integer operations
    or floating-point operations.

## Proto

Benchmark | Primary Bound                 | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:-------- | :---------------------------- | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
Proto     | Hybrid Compute & Memory-Bound | High                         | Medium                     | High              | Medium               | Scalar, Integer, Point Chasing, Memory Intensive

*   Hybrid Compute & Memory-Bound: The benchmark contains memory-intensive
    `Serialize` and `Deserialize` operations, the code is filled with a dense
    sequence of calls to functions like `Merge`, `Descriptor`, `Reflection`,
    `ByteSize`, `Swap`, and various `_Set_` and `_Get_` functions. Many of these
    are computationally heavy and will tax the CPU's execution units.
*   Hybrid Instruction Mix: The code involves numerous scalar operations and a
    significant amount of pointer chasing to access message fields. This
    benchmark is highly read/write intensive, with frequent operations like
    `(De)Serialize`, `Copy`, etc.

## Swissmap

Benchmark     | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:------------ | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
Hot_Swissmap  | Compute-Bound | Low                          | Low                        | High              | Meidum               | Scalar, Integer, Point Chasing, Compute Intensive
Cold_Swissmap | Memory-Bound  | High                         | Very High                  | Very High         | Medium               | Scalar\|Integer, Point Chasing, Memory Intensive

## TCMalloc

Benchmark | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:-------- | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
TCMalloc  | Compute-Bound | Medium                       | High                       | High              | High                 | Integer, Point Chasing, Memory Intensive, Bit Manipulation

*   The benchmark is a classic example of a *compute-bound workload* where the
    computation is not math-heavy, but rather focused on intricate data
    structure management. TCMalloc maintains sophisticated data structures to
    manage memory efficiently. The work of finding an appropriately sized free
    block, updating metadata, and linking/unlinking pointers is a complex
    sequence of CPU instructions.
*   This is a high memory latency sensitive benchmark benchmark. The internal
    workings of the memory allocator are an example of a pointer-chasing
    workload. Traversing freelists and other metadata structures involves many
    unpredictable memory accesses, and the time it takes to retrieve a single
    piece of data (memory latency) is a major performance factor.
*   This is also a high cache sensitive benchmark because the performance of
    TCMalloc is highly dependent on keeping its critical metadata (e.g., small
    object freelists) resident in the CPU's caches.

## Mem Libc

Benchmark | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:-------- | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
L1/L2/LLC | Cache-Bound   | Very High                    | Low                        | Very High         | Hybrid               | Scalar, Integer, Memory Intensive
Cold      | Memory-Bound  | Very High                    | Very High                  | Low               | Low                  | Scalar, Integer, Memory Intensive

*   L1/L2/LLC are *Cache-bound*. The performance is limited by how quickly the
    CPU can move data to and from the targeted cache level. This is a measure of
    the cache's throughput, which is significantly higher than that of main
    memory.
*   The cold benchmarks are *memory-bound by main memory bandwidth*. The
    execution time is dominated by the time spent waiting for data to be
    transferred from the system's main memory to the CPU's caches.
*   Read/Write-intensive & Branch misprediction:
    *   `memcpy` and `memmove`: These are *read-write* operations. They read
        data from a source buffer and write it to a destination buffer. Their
        performance is constrained by the maximum throughput of both the read
        and write channels of the memory subsystem. They are low in branch
        misprediction sensitivity.
    *   `memset`: This is a *write-only* operation. It writes a single,
        repeating byte value to a destination buffer. `memset` is only limited
        by write bandwidth. It can often be implemented more efficiently at the
        instruction level, sometimes leveraging specialized instructions like
        [STNP](https://developer.arm.com/documentation/ddi0602/2023-09/Base-Instructions/STNP--Store-Pair-of-Registers--with-non-temporal-hint-)
        on ARM. They are low in branch misprediction sensitivity.
    *   `memcmp` and `bcmp`: These are *read-only* comparison operations and
        *branch-intensive*. They read data from two separate memory locations
        and compare them. The performance is limited by the speed of reading
        from both source buffers. They also have *high branch misprediction
        sensitivity*, as the loop terminates on the first mismatch.

## Compression

Benchmark     | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:------------ | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
Compression   | Compute-Bound | High                         | Low                        | Low               | Medium               | Scalar, Integer, Memory Intensive, Bit Manipulation
Decompression | Compute-Bound | High                         | Low                        | Low               | High                 | Scalar, Integer, Memory Intensive, Bit Manipulation

*   Compression is *Read-Intensive* as this operation reads a large,
    uncompressed corpus and writes a smaller, compressed output. Performance is
    limited by the algorithm's internal processing speed, but also highly
    sensitive to the available memory bandwidth for ingesting the input data.
    These benchmarks have medium branch misprediction sensitivity. The
    algorithms use complex state machines and conditional branches for pattern
    matching and encoding, which can sometimes be difficult for the CPU to
    predict.
*   Decompression is both *read and write intensive*. The performance is highly
    sensitive to both the read and write memory bandwidth.
*   Both have high memory bandwidth and low memory latency sensitivity. The
    benchmark must read, either the entire uncompressed corpus or the compressed
    data, in a streaming fashion. The overall throughput is directly impacted by
    how quickly this data can be fed into the CPU. Because of this sequential
    and streaming data access pattern, the benchmark is not particular sensitive
    to memory latency.
*   Branch prediction is high for decompression algorithms because of the state
    machines, which are driven by a stream of bits. Parsing the bitstream
    involves numerous conditional branches that can be unpredictable, leading to
    frequent pipeline stalls from branch mispredictions. Compression algorithms
    also contain a variety of conditional branches for state machines and
    pattern matching. While some branches can be predictable, others, especially
    in the core matching loops, can lead to mispredictions that impact
    performance.

## Hashing

Benchmark | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:-------- | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
Hot       | Compute-Bound | High                         | Low                        | High              | Low                  | Integer, Memory Intensive, Bit Manipulation
Cold      | Memory-Bound  | High                         | Low                        | Low               | Low                  | Integer, Memory Intensive, Bit Manipulation

*   Hot benchmarks are compute-bound. When the data fits in the cache, the
    limiting factor is the CPU's speed in performing the hashing calculations.
    Cold benchmarks are memory-bound by main memory bandwidth. Since the input
    data is much larger than the cache, the CPU spends most of its time waiting
    for data to be streamed from main memory.
*   Both hot and cold benchmarks are *highly sensitive to memory bandwidth*. The
    hot benchmarks are limited by cache bandwidth, while the cold benchmarks are
    limited by main memory bandwidth.
*   `BM_HASHING_Extendcrc32cinternal` is a streaming workload for situations
    where data arrives in chunks and we want to calculate a running hash without
    re-processing all the previous data. `BM_HASHING_Computecrc32c` is a
    one-shot workload by measuring the raw performance of hashing a single,
    complete buffer. `BM_HASHING_Combine_contiguous` is a composite workload. It
    is not just hash the data, but hash the data combined with a small,
    fixed-size value (the length of the string) to prevent hashing collision.

## Cord

Benchmark | Primary Bound | Memory Bandwidth Sensitivity | Memory Latency Sensitivity | Cache Sensitivity | Branch Misprediction | Instruction Mix Notes
:-------- | :------------ | :--------------------------- | :------------------------- | :---------------- | :------------------- | :--------------------
Cord      | Memory-Bound  | High                         | High                       | High              | Medium               | Integer, Pointer Chasing

*   The benchmark's performance is primarily determined by how efficiently the
    CPU can move and access data from memory. Unlike a contiguous `std::string`,
    an `absl::Cord` stores its data in a series of non-contiguous chunks, often
    linked together like a tree. Operations that require access to the entire
    data, such as `copy` the Cord to a `std::string` or `compare` it to another
    string, involve traversing this fragmented data structure, making the
    benchmark heavily reliant on *memory bandwidth and latency*.
