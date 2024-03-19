package(default_visibility = ["//visibility:private"])

cc_library(
    name = "swissmap_benchmark_lib",
    testonly = True,
    srcs = [
        "cold_swissmap_benchmark.cc",
        "hot_swissmap_benchmark.cc",
    ],
    hdrs = [
        "swissmap_benchmark.h",
    ],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = True,
)

cc_test(
    name = "swissmap_benchmark_test",
    srcs = ["swissmap_benchmark_test.cc"],
    deps = [
        ":swissmap_benchmark_lib",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "swissmap_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":swissmap_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)

cc_test(
    name = "swissmap_smoketest",
    # Just run a single benchmark to reduce the test runtime.
    args = ["--benchmark_filter=BM_.*::absl::flat_hash_set.*64.*set_size:64.*density:0"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":swissmap_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
