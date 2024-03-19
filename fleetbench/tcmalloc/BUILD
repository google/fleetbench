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
    name = "empirical_driver_lib",
    testonly = True,
    srcs = [
        "empirical_driver.cc",
        "empirical_driver.h",
    ],
    copts = TCMALLOC_DEFAULT_COPTS,
    data = glob(["distributions/**"]),
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":empirical",
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
    alwayslink = True,
)

cc_test(
    name = "empirical_driver",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    tags = ["manual"],
    deps = [
        ":empirical_driver_lib",
        "//fleetbench:benchmark_main",
    ],
)

# Run a minimal version of empirical_driver to exercise the code paths.
cc_test(
    name = "empirical_driver_test",
    local_defines = ["EMPIRICAL_DRIVER_SMOKETEST"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":empirical_driver_lib",
        "//fleetbench:benchmark_main",
    ],
)
