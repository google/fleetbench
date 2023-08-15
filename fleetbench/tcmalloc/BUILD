load("//fleetbench:tcmalloc_copts.bzl", "TCMALLOC_DEFAULT_COPTS")

package(default_visibility = ["//visibility:private"])

cc_library(
    name = "empirical",
    testonly = 1,
    srcs = ["empirical.cc"],
    hdrs = ["empirical.h"],
    copts = TCMALLOC_DEFAULT_COPTS,
    deps = [
        "//fleetbench/common",
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_absl//absl/functional:function_ref",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
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
        "@com_google_absl//absl/flags:flag",
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

cc_library(
    name = "empirical_heap_size",
    testonly = 1,
    srcs = ["empirical_heap_size.cc"],
    hdrs = ["empirical_heap_size.h"],
    deps = ["@com_google_absl//absl/log:check"],
)

cc_test(
    name = "empirical_driver",
    srcs = ["empirical_driver.cc"],
    data = glob(["distributions/**"]),
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":empirical",
        ":empirical_driver_lib",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/base",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
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

# Run a minimal version of empirical_driver to exercise the code paths.
cc_test(
    name = "empirical_driver_test",
    srcs = ["empirical_driver.cc"],
    data = glob(["distributions/**"]),
    local_defines = ["EMPIRICAL_DRIVER_SMOKETEST"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":empirical",
        ":empirical_driver_lib",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/base",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
        "@com_google_tcmalloc//tcmalloc:malloc_extension",
    ],
)
