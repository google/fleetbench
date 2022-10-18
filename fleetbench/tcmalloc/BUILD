load("//fleetbench:tcmalloc_copts.bzl", "TCMALLOC_DEFAULT_COPTS")
load("//fleetbench:variants.bzl", "create_fleetbench_benchmark")

package(
    default_visibility = ["//visibility:private"],
)

cc_library(
    name = "empirical",
    testonly = 1,
    srcs = ["empirical.cc"],
    hdrs = ["empirical.h"],
    copts = TCMALLOC_DEFAULT_COPTS,
    deps = [
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/functional:function_ref",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/random:seed_sequences",
        "@com_google_absl//absl/types:span",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "empirical_test",
    srcs = ["empirical_test.cc"],
    copts = TCMALLOC_DEFAULT_COPTS,
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":empirical",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_library(
    name = "empirical_distributions",
    testonly = 1,
    srcs = ["empirical_distributions.cc"],
    hdrs = ["empirical_distributions.h"],
    copts = TCMALLOC_DEFAULT_COPTS,
    deps = [
        ":empirical",
        "@com_google_absl//absl/types:span",
    ],
)

cc_library(
    name = "empirical_driver_lib",
    testonly = 1,
    hdrs = ["empirical_driver.h"],
    copts = TCMALLOC_DEFAULT_COPTS,
    linkstatic = 1,
    deps = ["@com_google_benchmark//:benchmark"],
)

create_fleetbench_benchmark(
    name = "empirical_driver",
    srcs = ["empirical_driver.cc"],
    deps = [
        ":empirical",
        ":empirical_distributions",
        ":empirical_driver_lib",
        "@com_google_absl//absl/base",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/time",
        "@com_google_benchmark//:benchmark",
        "@com_google_tcmalloc//tcmalloc:malloc_extension",
    ],
)

cc_test(
    name = "empirical_distributions_test",
    srcs = ["empirical_distributions_test.cc"],
    deps = [
        ":empirical",
        ":empirical_distributions",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_googletest//:gtest_main",
    ],
)
