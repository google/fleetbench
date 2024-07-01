package(default_visibility = ["//fleetbench:__subpackages__"])

cc_library(
    name = "common",
    srcs = ["common.cc"],
    hdrs = [
        "common.h",
    ],
    linkstatic = 1,
    deps = [
        "@bazel_tools//tools/cpp/runfiles",
        "@com_google_absl//absl/container:btree",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = 1,
)

cc_test(
    name = "common_test",
    srcs = ["common_test.cc"],
    deps = [
        ":common",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)
