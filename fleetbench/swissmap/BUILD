load("//fleetbench:variants.bzl", "create_fleetbench_benchmark")

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

create_fleetbench_benchmark(
    name = "cold_swissmap_benchmark",
    srcs = ["cold_swissmap_benchmark.cc"],
    benchmark_filter = ".*set_size:(16|64).*",
    deps = [
        ":swissmap_benchmark",
        "//fleetbench/common",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)

create_fleetbench_benchmark(
    name = "hot_swissmap_benchmark",
    srcs = ["hot_swissmap_benchmark.cc"],
    deps = [
        ":swissmap_benchmark",
        "//fleetbench/common",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:flat_hash_set",
        "@com_google_absl//absl/container:node_hash_set",
        "@com_google_absl//absl/random",
        "@com_google_benchmark//:benchmark",
    ],
)

sh_test(
    name = "hot_sanitizer_test",
    size = "medium",
    srcs = ["hot_sanitizer_test.sh"],
    data = [":hot_swissmap_benchmark"],
    deps = [],
)

sh_test(
    name = "cold_sanitizer_test",
    size = "medium",
    srcs = ["cold_sanitizer_test.sh"],
    data = [":cold_swissmap_benchmark"],
    deps = [],
)
