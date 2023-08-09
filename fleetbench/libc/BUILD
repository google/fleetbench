package(default_visibility = ["//visibility:private"])

cc_library(
    name = "utils",
    srcs = ["utils.cc"],
    hdrs = ["utils.h"],
    deps = [
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random",
    ],
)

cc_test(
    name = "mem_benchmark",
    srcs = ["mem_benchmark.cc"],
    data = glob(["distributions/**"]),
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":utils",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
        "@com_google_benchmark//:benchmark",
    ],
)
