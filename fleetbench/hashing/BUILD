cc_test(
    name = "hashing_benchmark",
    srcs = ["hashing_benchmark.cc"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":hashing_size_distributions",
        "//fleetbench:benchmark_main",
        "//fleetbench/common",
        "@com_google_absl//absl/crc:crc32c",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/types:span",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_library(
    name = "hashing_size_distributions",
    srcs = ["hashing_size_distributions.cc"],
    hdrs = ["hashing_size_distributions.h"],
    textual_hdrs = glob(["distributions/*.csv"]),
    deps = [
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/types:span",
    ],
)
