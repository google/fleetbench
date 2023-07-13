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

cc_library(
    name = "compression_parameter",
    srcs = ["compression_parameter.cc"],
    hdrs = ["compression_parameter.h"],
    data = glob(["compression_parameters/**"]),
    deps = [
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
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

BENCHMARK_NUMS = 100

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
    cmd = "$(location :synthesize_data) $(RULEDIR)/corpora 100",
    output_to_bindir = True,
    tools = [
        ":synthesize_data",
    ],
)

cc_test(
    name = "compression_benchmark",
    srcs = ["compression_benchmark.cc"],
    data = [":generate_data"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":algorithms",
        ":compression_parameter",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "@bazel_tools//tools/cpp/runfiles",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "compression_smoketest",
    srcs = ["compression_benchmark.cc"],
    # Just run a single benchmark to reduce the test runtime.
    args = ["--benchmark_filter=BM_ZSTD-COMPRESS-B/compression_level:1/window_log:15"],
    data = [":generate_data"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":algorithms",
        ":compression_parameter",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "@bazel_tools//tools/cpp/runfiles",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
