# Parallel benchmark harness.

package(default_visibility = ["//visibility:private"])

licenses(["notice"])

py_library(
    name = "cpu",
    srcs = ["cpu.py"],
)

py_library(
    name = "result",
    srcs = ["result.py"],
)

py_library(
    name = "worker",
    srcs = ["worker.py"],
    deps = [
        ":result",
        ":run",
        "@com_google_absl_py//absl/logging",
    ],
)

py_library(
    name = "run",
    srcs = ["run.py"],
    deps = [
        ":benchmark",
        ":result",
        "@com_google_absl_py//absl/logging",
    ],
)

py_library(
    name = "benchmark",
    srcs = ["benchmark.py"],
    deps = ["@com_google_absl_py//absl/flags"],
)

py_library(
    name = "parallel_bench_lib",
    testonly = True,
    srcs = ["parallel_bench_lib.py"],
    deps = [
        ":benchmark",
        ":cpu",
        ":result",
        ":run",
        ":worker",
        "@com_google_absl_py//absl/logging",
    ],
)

py_binary(
    name = "parallel_bench",
    testonly = True,
    srcs = ["parallel_bench.py"],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":cpu",
        ":parallel_bench_lib",
        "@com_google_absl_py//absl:app",
        "@com_google_absl_py//absl/flags",
        "@com_google_absl_py//absl/logging",
    ],
)

py_test(
    name = "parallel_bench_test",
    srcs = ["parallel_bench_test.py"],
    deps = [
        ":benchmark",
        ":cpu",
        ":parallel_bench_lib",
        ":result",
        ":run",
        "@com_google_absl_py//absl/testing:absltest",
        "@com_google_absl_py//absl/testing:flagsaver",
    ],
)

py_test(
    name = "benchmark_test",
    srcs = ["benchmark_test.py"],
    deps = [
        ":benchmark",
        "@com_google_absl_py//absl/testing:absltest",
        "@com_google_absl_py//absl/testing:flagsaver",
    ],
)

py_test(
    name = "cpu_test",
    srcs = ["cpu_test.py"],
    deps = [
        ":cpu",
        "@com_google_absl_py//absl/testing:absltest",
    ],
)

py_test(
    name = "worker_test",
    srcs = ["worker_test.py"],
    deps = [
        ":worker",
        "@com_google_absl_py//absl/testing:absltest",
    ],
)

py_test(
    name = "run_test",
    srcs = ["run_test.py"],
    deps = [
        ":benchmark",
        ":run",
        "@com_google_absl_py//absl/testing:absltest",
        "@com_google_absl_py//absl/testing:flagsaver",
    ],
)
