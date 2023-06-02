package(default_visibility = ["//visibility:private"])

cc_library(
    name = "algorithms",
    srcs = ["algorithms.cc"],
    hdrs = ["algorithms.h"],
    deps = [
        "@ZSTD//:zstdlib",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@snappy",
    ],
)

sh_binary(
    name = "synthesize_data",
    srcs = [":synthesize_data.sh"],
    data = ["//fleetbench/compression/generate_corpora"],
)

ALGORITHMS = [
    "Snappy",
    "ZSTD",
]

COMPRESS = [
    "COMPRESS",
    "DECOMPRESS",
]

BINARIES = [
    "A",
    "B",
    "C",
    "D",
    "F",
    "L",
    "M",
    "P",
    "S",
    "U",
]

BENCHMARK_NUMS = 10

CORPORA = [
    "%s-%s-%s/corpus_%d" % (x, y, z, w)
    for x in ALGORITHMS
    for y in COMPRESS
    for z in BINARIES
    for w in range(BENCHMARK_NUMS)
    if not (x == "ZSTD" and y == "COMPRESS" and z == "L")
]

genrule(
    name = "generate_data",
    outs = ["corpora/%s" % s for s in CORPORA],
    cmd = "$(location :synthesize_data) $(RULEDIR)/corpora 10",
    exec_tools = [
        ":synthesize_data",
    ],
    output_to_bindir = True,
)

cc_test(
    name = "compression_benchmark",
    srcs = ["compression_benchmark.cc"],
    data = [":generate_data"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":algorithms",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "@bazel_tools//tools/cpp/runfiles",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
