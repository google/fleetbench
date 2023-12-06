package(default_visibility = ["//visibility:private"])

cc_test(
    name = "cord_benchmark",
    srcs = [
        "cord_benchmark.cc",
        "generated_cord_benchmarks.cc",
        "generated_cord_benchmarks.h",
    ],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:cord",
        "@com_google_benchmark//:benchmark",
    ],
)
