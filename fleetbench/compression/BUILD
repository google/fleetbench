package(default_visibility = ["//visibility:private"])

cc_library(
    name = "algorithms",
    srcs = ["algorithms.cc"],
    hdrs = ["algorithms.h"],
    deps = [
        ":algorithms_interface",
        ":zlibwrapper",
        "@ZSTD//:zstdlib",
        "@brotli//:brotlidec",
        "@brotli//:brotlienc",
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
        "@chromium_zlib//:zlib",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
    ],
)

cc_library(
    name = "compression_parameter",
    srcs = ["compression_parameter.cc"],
    hdrs = ["compression_parameter.h"],
    data = glob(["compression_parameters/**"]),
    deps = [
        "//fleetbench/common",
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
    tools = [
        "//fleetbench/compression/generate_corpora",
    ],
) for json in JSON_FILES]

filegroup(
    name = "generate_data",
    srcs = ["generate_data_%s" % json for json in JSON_FILES],
)

genrule(
    name = "corpus",
    srcs = [":generate_data"],
    outs = ["corpus.zip"],
    cmd = "zip -q -r $(OUTS) $(SRCS)",
    visibility = ["//fleetbench:__pkg__"],
)

cc_library(
    name = "compression_benchmark_lib",
    testonly = True,
    srcs = ["compression_benchmark.cc"],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":algorithms",
        ":compression_parameter",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/container:btree",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
        "@libzip//:zip",
    ],
    alwayslink = True,
)

cc_test(
    name = "compression_benchmark",
    data = [":corpus"],
    tags = ["manual"],
    deps = [
        ":compression_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)

cc_test(
    name = "compression_benchmark_fleet",
    # Just run a single benchmark to reduce the test runtime.
    args = ["--benchmark_filter=(BM_COMPRESSION_Snappy_COMPRESS_Fleet|" +
            "BM_COMPRESSION_ZSTD_COMPRESS_Fleet/compression_level:1/window_log:15|" +
            "BM_COMPRESSION_Flate_COMPRESS_Fleet/compression_level:1/window_log:15|" +
            "BM_COMPRESSION_Flate_COMPRESS_Fleet_internal/compression_level:1/window_log:15|" +
            "BM_COMPRESSION_Brotli_COMPRESS_Fleet/compression_level:1/window_log:18)"],
    data = [":corpus"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":compression_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
