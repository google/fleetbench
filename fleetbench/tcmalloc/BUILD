cc_library(
    name = "empirical",
    testonly = 1,
    srcs = ["empirical.cc"],
    hdrs = ["empirical.h"],
    deps = [
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/functional:function_ref",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/random:seed_sequences",
        "@com_google_absl//absl/types:span",
        "@com_google_benchmark//:benchmark",
    ],
)

cc_test(
    name = "empirical_test",
    srcs = ["empirical_test.cc"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":empirical",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/strings",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_library(
    name = "empirical_distributions",
    testonly = 1,
    srcs = ["empirical_distributions.cc"],
    hdrs = ["empirical_distributions.h"],
    deps = [
        ":empirical",
        "@com_google_absl//absl/types:span",
    ],
)

cc_test(
    name = "empirical_distributions_test",
    srcs = ["empirical_distributions_test.cc"],
    deps = [
        ":empirical",
        ":empirical_distributions",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_googletest//:gtest_main",
    ],
)
