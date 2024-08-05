load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")

package(default_visibility = ["//visibility:private"])

proto_library(
    name = "distributionargs",
    srcs = ["distributionargs.proto"],
)

cc_proto_library(
    name = "distributionargs_cc_proto",
    deps = [":distributionargs"],
)

proto_library(
    name = "fleetbenchservice",
    srcs = ["fleetbenchservice.proto"],
    deps = ["//fleetbench/rpc/protos:{}_Message_proto".format(typ) for typ in [
        "request",
        "response",
    ]],
)

cc_proto_library(
    name = "fleetbenchservice_cc_proto",
    deps = [":fleetbenchservice"],
)

cc_grpc_library(
    name = "fleetbenchservice_grpc",
    srcs = [":fleetbenchservice"],
    grpc_only = True,
    deps = [":fleetbenchservice_cc_proto"],
)

# core defs

cc_library(
    name = "grpc",
    srcs = [
        "grpc.cc",
    ],
    hdrs = [
        "generator_process.h",
        "grpc.h",
    ],
    deps = [
        ":distributionargs_cc_proto",
        ":fleetbenchservice_cc_proto",
        ":fleetbenchservice_grpc",
        ":generator_process",
        "//fleetbench/rpc/protos:combo",
        "@com_github_grpc_grpc//:grpc++",
        "@com_github_grpc_grpc//:grpc_security_base",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/hash",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/time",
    ],
)

cc_library(
    name = "generator_process",
    srcs = [
        "generator_process.cc",
    ],
    hdrs = [
        "generator_process.h",
    ],
    deps = [
        ":distributionargs_cc_proto",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "util",
    srcs = [
        "util.cc",
    ],
    hdrs = [
        "util.h",
    ],
    deps = [
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_protobuf//:protobuf",
        "@com_google_protobuf//src/google/protobuf/io",
    ],
)

cc_library(
    name = "rpcperf",
    srcs = [
        "rpcperf.cc",
    ],
    hdrs = [
        "rpcperf.h",
    ],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":grpc",
        ":util",
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/time",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_binary(
    name = "rpcperf_main",
    srcs = [
        "rpcperf_main.cc",
    ],
    deps = [
        ":grpc",
        ":rpcperf",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/strings",
    ],
)

cc_test(
    name = "rpc_benchmark",
    srcs = ["rpcperf_test.cc"],
    linkstatic = 1,
    deps = [
        ":grpc",
        ":rpcperf",
        "//fleetbench/rpc/protos:combo",
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_googletest//:gtest_main",
    ],
)
