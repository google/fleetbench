load("@com_google_protobuf//bazel:cc_proto_library.bzl", "cc_proto_library")
load("@com_google_protobuf//bazel:proto_library.bzl", "proto_library")

package(default_visibility = ["//visibility:public"])

NUM_PROTOS_PER_PROGRAM_AND_TYPE = 3

# The list of programs corresponds to the directory names.
PROGRAMS = [path for path in glob(
    ["*"],
    exclude_directories = 0,
) if path not in glob(["*"])]

IDS = range(0, NUM_PROTOS_PER_PROGRAM_AND_TYPE)

TYPES = [
    "request",
    "response",
]

[proto_library(
    name = "{}_{}_Message{}_proto".format(prog, typ, id),
    srcs = ["{}/{}/Message{}.proto".format(prog, typ, id)],
) for id in range(0, NUM_PROTOS_PER_PROGRAM_AND_TYPE) for prog in PROGRAMS for typ in TYPES]

[cc_proto_library(
    name = "{}_{}_Message{}_cc_proto".format(prog, typ, id),
    deps = [":{}_{}_Message{}_proto".format(prog, typ, id)],
) for id in range(0, NUM_PROTOS_PER_PROGRAM_AND_TYPE) for prog in PROGRAMS for typ in TYPES]

[proto_library(
    name = "{}_{}_Message_proto".format(prog, typ),
    srcs = ["{}{}Message.proto".format(
        prog,
        typ.capitalize(),
    )],
    deps = [":{}_{}_Message{}_proto".format(prog, typ, id) for id in range(0, NUM_PROTOS_PER_PROGRAM_AND_TYPE)],
) for prog in PROGRAMS for typ in TYPES]

[cc_proto_library(
    name = "{}_{}_Message_cc_proto".format(prog, typ),
    deps = [":{}_{}_Message_proto".format(prog, typ)],
) for prog in PROGRAMS for typ in TYPES]

[proto_library(
    name = "{}_Message_proto".format(typ),
    srcs = ["{}Message.proto".format(typ.capitalize())],
    deps = [":{}_{}_Message_proto".format(prog, typ) for prog in PROGRAMS],
) for typ in TYPES]

[cc_proto_library(
    name = "{}_Message_cc_proto".format(typ),
    deps = [":{}_Message_proto".format(typ)],
) for typ in TYPES]

[cc_library(
    name = "{}_{}_Message".format(prog, typ),
    hdrs = ["{}{}Message.h".format(
        prog,
        typ.capitalize(),
    )] + ["{}/{}/access_message{}.h".format(prog, typ, id) for id in IDS],
    deps = [":{}_{}_Message{}_cc_proto".format(prog, typ, id) for id in IDS] + [
        ":{}_{}_Message_cc_proto".format(prog, typ),
        "@com_google_absl//absl/log:check",
        "@com_google_absl//absl/strings:cord",
        "@com_google_absl//absl/strings:string_view",
    ],
    alwayslink = True,
) for prog in PROGRAMS for typ in TYPES]

# combo is a cc_library that combines all auto-generated protos/headers into a single library.
# it combines protos into a RequestMessage or ResponseMessage top-level proto and provides a
# header to set those messages given which program, which message, which sub-message,
# and which setter.
cc_library(
    name = "combo",
    hdrs = [
        "combo.h",
    ] + ["{}{}Message.h".format(
        prog,
        typ.capitalize(),
    ) for prog in PROGRAMS for typ in TYPES],
    deps = [
               "@com_google_absl//absl/log:check",
               "@com_google_absl//absl/strings:cord",
               "@com_google_absl//absl/strings:string_view",
           ] + [":{}_Message_cc_proto".format(typ) for typ in TYPES] +
           [":{}_{}_Message".format(prog, typ) for prog in PROGRAMS for typ in TYPES] +
           ["{}_{}_Message_cc_proto".format(prog, typ) for prog in PROGRAMS for typ in TYPES],
    alwayslink = True,
)
