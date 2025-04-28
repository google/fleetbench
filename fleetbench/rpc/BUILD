load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")
load("@com_google_protobuf//bazel:cc_proto_library.bzl", "cc_proto_library")
load("@com_google_protobuf//bazel:proto_library.bzl", "proto_library")

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
    name = "rpc_counters",
    srcs = [
        "rpc_counters.cc",
    ],
    hdrs = [
        "rpc_counters.h",
    ],
    deps = [
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_absl//absl/synchronization",
    ],
)

cc_library(
    name = "grpc_client",
    srcs = [
        "grpc_client.cc",
    ],
    hdrs = [
        "grpc_client.h",
    ],
    deps = [
        ":fleetbenchservice_grpc",
        ":generator_process",
        ":rpc_counters",
        "//fleetbench/rpc/protos:combo",
        "@com_github_grpc_grpc//:grpc++",
        "@com_github_grpc_grpc//:grpc_security_base",
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:string_view",
        "@com_google_absl//absl/synchronization",
        "@com_google_absl//absl/time",
    ],
)

cc_library(
    name = "grpc_server",
    srcs = [
        "grpc_server.cc",
    ],
    hdrs = [
        "grpc_server.h",
    ],
    deps = [
        ":fleetbenchservice_grpc",
        ":generator_process",
        ":rpc_counters",
        "//fleetbench/common",
        "//fleetbench/rpc/protos:combo",
        "//fleetbench/rpc/protos:response_Message_cc_proto",
        "@com_github_grpc_grpc//:grpc++",
        "@com_github_grpc_grpc//:grpc_security_base",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:string_view",
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
        ":generator_process",
        ":grpc_client",
        ":grpc_server",
        ":util",
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/random",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_binary(
    name = "rpcperf_main",
    srcs = [
        "rpcperf_main.cc",
    ],
    args = ["--grpc_experiments=-work_serializer_dispatch"],
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":grpc_client",
        ":grpc_server",
        ":rpcperf",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/time",
    ],
)

cc_library(
    name = "rpc_benchmark_lib",
    testonly = True,
    srcs = ["rpcperf_benchmark.cc"],
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":grpc_client",
        ":grpc_server",
        ":rpcperf",
        "//fleetbench:benchmark_main",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
        "//fleetbench/rpc/protos:combo",
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/synchronization",
        "@com_google_benchmark//:benchmark",
    ],
    alwayslink = True,
)

cc_test(
    name = "rpc_benchmark",
    args = ["--grpc_experiments=-work_serializer_dispatch"],
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    deps = [
        ":rpc_benchmark_lib",
        "//fleetbench:benchmark_main",
    ],
)
