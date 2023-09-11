load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

package(default_visibility = ["//visibility:private"])

proto_library(
    name = "representative1_proto",
    testonly = True,
    srcs = ["representative1.proto"],
)

proto_library(
    name = "representative2_proto",
    testonly = True,
    srcs = ["representative2.proto"],
)

proto_library(
    name = "representative3_proto",
    testonly = True,
    srcs = ["representative3.proto"],
)

proto_library(
    name = "representative4_proto",
    testonly = True,
    srcs = ["representative4.proto"],
)

proto_library(
    name = "representative5_proto",
    testonly = True,
    srcs = ["representative5.proto"],
)

proto_library(
    name = "representative6_proto",
    testonly = True,
    srcs = ["representative6.proto"],
)

proto_library(
    name = "representative7_proto",
    testonly = True,
    srcs = ["representative7.proto"],
)

proto_library(
    name = "representative8_proto",
    testonly = True,
    srcs = ["representative8.proto"],
)

proto_library(
    name = "representative9_proto",
    testonly = True,
    srcs = ["representative9.proto"],
)

proto_library(
    name = "representative10_proto",
    testonly = True,
    srcs = ["representative10.proto"],
)

cc_proto_library(
    name = "representative1_cc_proto",
    testonly = True,
    deps = [":representative1_proto"],
)

cc_proto_library(
    name = "representative2_cc_proto",
    testonly = True,
    deps = [":representative2_proto"],
)

cc_proto_library(
    name = "representative3_cc_proto",
    testonly = True,
    deps = [":representative3_proto"],
)

cc_proto_library(
    name = "representative4_cc_proto",
    testonly = True,
    deps = [":representative4_proto"],
)

cc_proto_library(
    name = "representative5_cc_proto",
    testonly = True,
    deps = [":representative5_proto"],
)

cc_proto_library(
    name = "representative6_cc_proto",
    testonly = True,
    deps = [":representative6_proto"],
)

cc_proto_library(
    name = "representative7_cc_proto",
    testonly = True,
    deps = [":representative7_proto"],
)

cc_proto_library(
    name = "representative8_cc_proto",
    testonly = True,
    deps = [":representative8_proto"],
)

cc_proto_library(
    name = "representative9_cc_proto",
    testonly = True,
    deps = [":representative9_proto"],
)

cc_proto_library(
    name = "representative10_cc_proto",
    testonly = True,
    deps = [":representative10_proto"],
)

cc_library(
    name = "benchmark_lib",
    testonly = True,
    srcs = [
        "lifecycle.cc",
    ],
    hdrs = [
        "lifecycle.h",
        "populate_protos.h",
    ],
    deps = [
        ":representative10_cc_proto",
        ":representative1_cc_proto",
        ":representative2_cc_proto",
        ":representative3_cc_proto",
        ":representative4_cc_proto",
        ":representative5_cc_proto",
        ":representative6_cc_proto",
        ":representative7_cc_proto",
        ":representative8_cc_proto",
        ":representative9_cc_proto",
        "//fleetbench/common",
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
