package(default_visibility = ["//visibility:private"])

cc_library(
    name = "hashing_benchmark_lib",
    testonly = True,
    srcs = ["hashing_benchmark.cc"],
    data = glob(["distributions/**"]),
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/container:btree",
        "@com_google_absl//absl/crc:crc32c",
        "@com_google_absl//absl/hash",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = True,
)

cc_test(
    name = "hashing_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":hashing_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
