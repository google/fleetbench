load("@com_google_protobuf//bazel:cc_proto_library.bzl", "cc_proto_library")
load("@com_google_protobuf//bazel:proto_library.bzl", "proto_library")
load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

package(default_visibility = ["//visibility:private"])

NUM_MESSAGES = 10

[proto_library(
    name = "Message%d_proto" % id,
    testonly = True,
    srcs = ["Message%d.proto" % id],
) for id in range(0, NUM_MESSAGES)]

cc_library(
    name = "receiver",
    testonly = True,
    hdrs = ["receiver.h"],
    deps = [
        "@com_google_absl//absl/strings:cord",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_benchmark//:benchmark",
    ],
)

[cc_proto_library(
    name = "Message%d_cc_proto" % id,
    testonly = True,
    deps = [":Message%d_proto" % id],
) for id in range(0, NUM_MESSAGES)]

[cc_library(
    name = "access_message_%d" % id,
    testonly = True,
    srcs = ["access_message%d.cc" % id],
    hdrs = [
        "access_message%d.h" % id,
    ],
    deps = [
        ":Message%d_cc_proto" % id,
        ":receiver",
        "@com_google_absl//absl/log:check",
    ],
) for id in range(0, NUM_MESSAGES)]

cc_library(
    name = "proto_benchmark_lib",
    testonly = True,
    srcs = [
        "benchmark.cc",
        "lifecycle.cc",
    ],
    hdrs = ["lifecycle.h"],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":Message%d_cc_proto" % id
        for id in range(0, NUM_MESSAGES)
    ] + [
        ":access_message_%d" % id
        for id in range(0, NUM_MESSAGES)
    ] + [
        ":receiver",
        "//fleetbench:dynamic_registrar",
        "//fleetbench:productivity_reporter",
        "//fleetbench/common",
        "@com_google_absl//absl/strings:cord",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_benchmark//:benchmark",
        "@com_google_protobuf//:protobuf",
    ],
    alwayslink = True,
)

cc_test(
    name = "benchmark_test",
    srcs = ["benchmark_test.cc"],
    deps = [
        ":proto_benchmark_lib",
        "@com_google_googletest//:gtest_main",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_test(
    name = "proto_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":proto_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
