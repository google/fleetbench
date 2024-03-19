package(default_visibility = ["//visibility:private"])

cc_library(
    name = "cord_benchmark_lib",
    testonly = True,
    srcs = [
        "cord_benchmark.cc",
        "generated_cord_benchmarks.cc",
        "generated_cord_benchmarks.h",
    ],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:cord",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = True,
)

cc_test(
    name = "cord_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":cord_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
