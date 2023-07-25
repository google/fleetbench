package(default_visibility = ["//visibility:private"])

cc_library(
    name = "algorithms",
    srcs = ["algorithms.cc"],
    hdrs = ["algorithms.h"],
    deps = [
        ":algorithms_interface",
        ":zlibwrapper",
        "@ZSTD//:zstdlib",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@snappy",
    ],
)

cc_library(
    name = "algorithms_interface",
    hdrs = [
        "algorithms.h",
    ],
    deps = [
        "@ZSTD//:zstdlib",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "zlibwrapper",
    srcs = [
        "gzipheader.cc",
        "zlibwrapper.cc",
    ],
    hdrs = [
        "gzipheader.h",
        "zlibwrapper.h",
    ],
    deps = [
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@zlib",
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

BENCHMARK_NUMS = 100

JSON_FILES = [json.split("/")[-1] for json in glob(["distributions/*"])]

[genrule(
    name = "generate_data_%s" % json,
    srcs = ["distributions/%s" % json],
    outs = ["corpora/%s/corpus_%d" % (
        json.removesuffix(".json"),
        n,
    ) for n in range(BENCHMARK_NUMS)],
    cmd = "$(location //fleetbench/compression/generate_corpora:generate_corpora) --distribution_name=$< --output_dir=$(RULEDIR)/corpora --benchmark_nums=100",
    output_to_bindir = True,
    tools = [
        "//fleetbench/compression/generate_corpora",
    ],
) for json in JSON_FILES]

filegroup(
    name = "generate_data",
    srcs = ["generate_data_%s" % json for json in JSON_FILES],
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
    args = ["--benchmark_filter=(BM_Snappy-COMPRESS-Fleet|" +
            "BM_ZSTD-COMPRESS-B/compression_level:1/window_log:15|" +
            "BM_Flate-COMPRESS-Fleet/compression_level:1/window_log:15|" +
            "BM_Flate-COMPRESS-Fleet_internal/compression_level:1/window_log:15)"],
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
