package(default_visibility = ["//visibility:private"])

cc_library(
    name = "utils",
    srcs = ["utils.cc"],
    hdrs = ["utils.h"],
    deps = ["@com_google_absl//absl/log:check"],
)

cc_library(
    name = "mem_benchmark_lib",
    testonly = True,
    srcs = ["mem_benchmark.cc"],
    data = glob(
        ["distributions/**"],
    ),
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":utils",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/container:btree",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = True,
)

cc_test(
    name = "mem_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":mem_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)

cc_test(
    name = "utils_test",
    srcs = ["utils_test.cc"],
    deps = [
        ":utils",
        "@com_google_absl//absl/types:span",
        "@com_google_googletest//:gtest_main",
    ],
)
