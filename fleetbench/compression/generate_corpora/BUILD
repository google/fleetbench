package(default_visibility = ["//fleetbench:__subpackages__"])

py_library(
    name = "distribution_tracker",
    srcs = ["distribution_tracker.py"],
    deps = ["@com_google_absl_py//absl/logging"],
)

py_test(
    name = "distribution_tracker_test",
    srcs = ["distribution_tracker_test.py"],
    deps = [
        ":distribution_tracker",
        "@com_google_absl_py//absl/testing:absltest",
    ],
)

py_library(
    name = "corpus_generator",
    srcs = ["corpus_generator.py"],
    data = glob(["corpora/**"]),
    deps = [
        "@com_google_absl_py//absl/logging",
        "@rules_python//python/runfiles",
    ],
)

py_test(
    name = "corpus_generator_test",
    srcs = ["corpus_generator_test.py"],
    data = glob(["corpora/**"]),
    deps = [
        ":corpus_generator",
        "@com_google_absl_py//absl/testing:absltest",
        "@rules_python//python/runfiles",
    ],
)

py_binary(
    name = "generate_corpora",
    srcs = ["generate_corpora.py"],
    deps = [
        ":corpus_generator",
        ":distribution_tracker",
        "@com_google_absl_py//absl:app",
        "@com_google_absl_py//absl/flags",
    ],
)
