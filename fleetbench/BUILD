load("@bazel_skylib//lib:selects.bzl", "selects")
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

selects.config_setting_group(
    name = "clang_or_gcc_x86_64",
    match_all = [
        ":compiler_clang_or_gcc",
        "@platforms//cpu:x86_64",
    ],
)

selects.config_setting_group(
    name = "clang_or_gcc_arm64",
    match_all = [
        ":compiler_clang_or_gcc",
        "@platforms//cpu:arm64",
    ],
)

selects.config_setting_group(
    name = "compiler_clang_or_gcc",
    match_any = [
        ":compiler_clang",
        ":compiler_gcc",
    ],
)

config_setting(
    name = "compiler_clang",
    flag_values = {
        "@bazel_tools//tools/cpp:compiler": "clang",
    },
)

config_setting(
    name = "compiler_regular_gcc",
    flag_values = {
        "@bazel_tools//tools/cpp:compiler": "gcc",
    },
)

config_setting(
    name = "compiler_unknown",
    flag_values = {
        "@bazel_tools//tools/cpp:compiler": "compiler",
    },
)

selects.config_setting_group(
    name = "compiler_gcc",
    match_any = [
        ":compiler_regular_gcc",
        # To workaround https://github.com/bazelbuild/bazel/issues/17794, assume
        # any unknown compiler is GCC.
        ":compiler_unknown",
    ],
)

cc_test(
    name = "fleetbench",
    data = ["//fleetbench/compression:corpus"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":benchmark_main",
        "//fleetbench/compression:compression_benchmark_lib",
        "//fleetbench/hashing:hashing_benchmark_lib",
        "//fleetbench/libc:mem_benchmark_lib",
        "//fleetbench/proto:proto_benchmark_lib",
        "//fleetbench/stl:cord_benchmark_lib",
        "//fleetbench/swissmap:swissmap_benchmark_lib",
        "//fleetbench/tcmalloc:empirical_driver_lib",
    ],
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
    deps = ["@com_google_absl_py//absl/testing:absltest"],
)
