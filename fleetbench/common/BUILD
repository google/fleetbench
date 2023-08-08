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
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/strings",
    ],
    alwayslink = 1,
)
