load("//fleetbench:variants.bzl", "create_fleetbench_benchmark")

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

create_fleetbench_benchmark(
    name = "compression_benchmark",
    srcs = ["compression_benchmark.cc"],
    data = [":corpora"],
    deps = [
        ":algorithms",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
