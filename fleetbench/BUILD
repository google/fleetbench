package(default_visibility = ["//visibility:private"])

# Same as TCMalloc
licenses(["notice"])

exports_files(["LICENSE"])

config_setting(
    name = "llvm",
    flag_values = {
        "@bazel_tools//tools/cpp:compiler": "clang",
    },
)

cc_library(
    name = "benchmark_main",
    srcs = ["benchmark_main.cc"],
    visibility = ["//fleetbench:__subpackages__"],
    deps = [
        "@com_google_benchmark//:benchmark",
    ],
)
