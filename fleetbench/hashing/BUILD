package(default_visibility = ["//visibility:private"])

cc_test(
    name = "hashing_benchmark",
    srcs = ["hashing_benchmark.cc"],
    data = glob(["distributions/**"]),
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/crc:crc32c",
        "@com_google_absl//absl/hash",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
