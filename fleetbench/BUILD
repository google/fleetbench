package(default_visibility = ["//visibility:private"])

# Same as TCMalloc
licenses(["notice"])

exports_files(["LICENSE"])

cc_library(
    name = "benchmark_main",
    srcs = ["benchmark_main.cc"],
    visibility = ["//fleetbench:__subpackages__"],
    deps = [
        "@com_google_benchmark//:benchmark",
    ],
)
