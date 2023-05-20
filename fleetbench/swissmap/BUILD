package(
    default_visibility = ["//visibility:private"],
)

cc_library(
    name = "swissmap_benchmark",
    hdrs = [
        "swissmap_benchmark.h",
    ],
    linkstatic = 1,
    deps = [
        "//fleetbench/common",
        "@com_google_absl//absl/random",
    ],
    alwayslink = 1,
)

cc_test(
    name = "swissmap_benchmark_test",
    srcs = ["swissmap_benchmark_test.cc"],
    deps = [
        ":swissmap_benchmark",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "cold_swissmap_benchmark",
    srcs = ["cold_swissmap_benchmark.cc"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":swissmap_benchmark",
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "cold_swissmap_smoketest",
    srcs = ["cold_swissmap_benchmark.cc"],
    # Just run a single benchmark to reduce the test runtime.
    args = ["--benchmark_filter=BM_.*::absl::flat_hash_set.*64.*set_size:64.*density:0"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":swissmap_benchmark",
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "hot_swissmap_benchmark",
    srcs = ["hot_swissmap_benchmark.cc"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":swissmap_benchmark",
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "hot_swissmap_smoketest",
    srcs = ["hot_swissmap_benchmark.cc"],
    # Just run a single benchmark to reduce the test runtime.
    args = ["--benchmark_filter=BM_.*::absl::flat_hash_set.*64.*set_size:64.*density:0"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":swissmap_benchmark",
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)
