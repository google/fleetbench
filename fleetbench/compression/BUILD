filegroup(
    name = "corpora",
    srcs = glob([
        "corpora/Snappy-COMPRESS-A/*",
        "corpora/Snappy-DECOMPRESS-A/*",
        "corpora/ZSTD-COMPRESS-A/*",
        "corpora/ZSTD-DECOMPRESS-A/*",
    ]),
)

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

cc_test(
    name = "compression_benchmark",
    srcs = ["compression_benchmark.cc"],
    data = [":corpora"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":algorithms",
        "//fleetbench:benchmark_main",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
