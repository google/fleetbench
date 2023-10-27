load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

package(default_visibility = ["//visibility:private"])

[proto_library(
    name = "representative%d_proto" % id,
    testonly = True,
    srcs = ["representative%d.proto" % id],
) for id in range(1, 11)]

[cc_proto_library(
    name = "representative%d_cc_proto" % id,
    testonly = True,
    deps = [":representative%d_proto" % id],
) for id in range(1, 11)]

cc_library(
    name = "benchmark_lib",
    testonly = True,
    srcs = [
        "lifecycle.cc",
    ],
    hdrs = [
        "lifecycle.h",
        "populate_protos.h",
        "receiver.h",
    ],
    deps = [
        ":representative%d_cc_proto" % id
        for id in range(1, 11)
    ] + [
        "//fleetbench/common",
        "@com_google_absl//absl/strings:cord",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_benchmark//:benchmark",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_test(
    name = "benchmark_test",
    srcs = ["benchmark_test.cc"],
    deps = [
        ":benchmark_lib",
        "@com_google_googletest//:gtest_main",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_test(
    name = "proto_benchmark",
    srcs = [
        "benchmark.cc",
    ],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":benchmark_lib",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "@com_google_benchmark//:benchmark",
        "@com_google_protobuf//:protobuf",
    ],
)
