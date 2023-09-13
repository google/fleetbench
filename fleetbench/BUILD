load("@rules_python//python:py_test.bzl", "py_test")

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
    name = "maybe_llvmlibc",
    deps = select({
        "//fleetbench:llvm": ["@llvm-project//:llvmlibc"],
        "//conditions:default": [],
    }),
)

cc_library(
    name = "benchmark_main",
    srcs = ["benchmark_main.cc"],
    visibility = ["//fleetbench:__subpackages__"],
    deps = [
        ":dynamic_registrar",
        ":maybe_llvmlibc",
        "@com_google_absl//absl/log",
        "@com_google_benchmark//:benchmark",
        "@com_google_tcmalloc//tcmalloc:malloc_extension",
    ],
)

cc_library(
    name = "dynamic_registrar",
    srcs = ["dynamic_registrar.cc"],
    hdrs = ["dynamic_registrar.h"],
    visibility = ["//fleetbench:__subpackages__"],
)

cc_test(
    name = "dynamic_registrar_test",
    srcs = ["dynamic_registrar_test.cc"],
    deps = [
        ":dynamic_registrar",
        "@com_google_googletest//:gtest_main",
    ],
)

py_test(
    name = "distro_test",
    srcs = [":distro_test.py"],
    deps = [
        "@com_google_absl_py//absl/testing:absltest",
    ],
)
