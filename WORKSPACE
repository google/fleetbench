# Copyright 2022 The Fleetbench Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

workspace(name = "com_google_fleetbench")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Load a recent version of skylib in case our dependencies have obsolete
# versions. This is needed for bazel 6 compatibility.
http_archive(
    name = "bazel_skylib", # 2022-09-01
    urls = ["https://github.com/bazelbuild/bazel-skylib/archive/refs/tags/1.3.0.zip"],
    strip_prefix = "bazel-skylib-1.3.0",
    sha256 = "4756ab3ec46d94d99e5ed685d2d24aece484015e45af303eb3a11cab3cdc2e71",
)

# Support for building foreign build system dependencies. Needed for libpfm.
http_archive(
    name = "rules_foreign_cc", # 2023-01-12
    sha256 = "2a4d07cd64b0719b39a7c12218a3e507672b82a97b98c6a89d38565894cf7c51",
    strip_prefix = "rules_foreign_cc-0.9.0",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/refs/tags/0.9.0.tar.gz",
)
load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

# Abseil
http_archive(
    name = "com_google_absl", # 2022-10-05
    urls = ["https://github.com/abseil/abseil-cpp/archive/b3162b1da62711c663d0025e2eabeb83fd1f2728.zip"],
    strip_prefix = "abseil-cpp-b3162b1da62711c663d0025e2eabeb83fd1f2728",
    sha256 = "d5c91248c33269fcc7ab35897315a45cfa2c37abb4c6d4ed36cb5c82f366367a",
)

# Google benchmark.
http_archive(
    name = "com_google_benchmark", # 2023-01-12
    urls = ["https://github.com/google/benchmark/archive/v1.7.1.zip"],
    strip_prefix = "benchmark-1.7.1",
    sha256 = "aeec52381284ec3752505a220d36096954c869da4573c2e1df3642d2f0a4aac6",
)

# GoogleTest/GoogleMock framework. Used by most unit tests.
http_archive(
    name = "com_google_googletest",  # 2021-05-19T20:10:13Z
    urls = ["https://github.com/google/googletest/archive/aa9b44a18678dfdf57089a5ac22c1edb69f35da5.zip"],
    strip_prefix = "googletest-aa9b44a18678dfdf57089a5ac22c1edb69f35da5",
    sha256 = "8cf4eaab3a13b27a95b7e74c58fb4c0788ad94d1f7ec65b20665c4caf1d245e8",
)

# libpfm4, for perf counters
http_archive(
    name = "libpfm", # 2023-01-12
    # use our own build file, based from google/benchmark/tools, but modified to
    # disable use-after-free, which is emitted when building libpfm.
    build_file_content = """
load("@rules_foreign_cc//foreign_cc:defs.bzl", "make")

filegroup(
    name = "pfm_srcs",
    srcs = glob(["**"]),
)

make(
    name = "libpfm",
    lib_source = ":pfm_srcs",
    lib_name = "libpfm",
    # this disables debug mode. In particular, this makes sure certain
    # warning-as-error of libpfm aren't surfaced, which would break the build.
    args = ["DBG="],
    visibility = [
        "//visibility:public",
    ],
)
    """,
    sha256 = "5da5f8872bde14b3634c9688d980f68bda28b510268723cc12973eedbab9fecc",
    type = "tar.gz",
    strip_prefix = "libpfm-4.11.0",
    urls = ["https://sourceforge.net/projects/perfmon2/files/libpfm4/libpfm-4.11.0.tar.gz/download"],
 )

# TCMalloc
http_archive(
    name = "com_google_tcmalloc", # 2022-09-21
    urls = ["https://github.com/google/tcmalloc/archive/48808681a9f38e974b49619a126f6f949ff59520.zip"],
    strip_prefix = "tcmalloc-48808681a9f38e974b49619a126f6f949ff59520",
    sha256 = "18bde75174866059a8db37dc42a921192b9182f57e7900a66d9f26cdd72599af",
)

# Dependencies of TCMalloc
# Fuzzing
http_archive(
    name = "rules_fuzzing",
    sha256 = "a5734cb42b1b69395c57e0bbd32ade394d5c3d6afbfe782b24816a96da24660d",
    strip_prefix = "rules_fuzzing-0.1.1",
    urls = ["https://github.com/bazelbuild/rules_fuzzing/archive/v0.1.1.zip"],
)

# Proto rules for Bazel and Protobuf
http_archive(
    name = "com_google_protobuf",
    sha256 = "8b28fdd45bab62d15db232ec404248901842e5340299a57765e48abe8a80d930",
    strip_prefix = "protobuf-3.20.1",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.20.1.tar.gz"],
)
load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()

http_archive(
    name = "rules_proto",
    sha256 = "66bfdf8782796239d3875d37e7de19b1d94301e8972b3cbd2446b332429b4df1",
    strip_prefix = "rules_proto-4.0.0",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_proto/archive/refs/tags/4.0.0.tar.gz",
        "https://github.com/bazelbuild/rules_proto/archive/refs/tags/4.0.0.tar.gz",
    ],
)

load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
rules_proto_dependencies()
rules_proto_toolchains()

# C++ rules for Bazel.
http_archive(
    name = "rules_cc",  # 2021-05-14T14:51:14Z
    urls = ["https://github.com/bazelbuild/rules_cc/archive/68cb652a71e7e7e2858c50593e5a9e3b94e5b9a9.zip"],
    strip_prefix = "rules_cc-68cb652a71e7e7e2858c50593e5a9e3b94e5b9a9",
    sha256 = "1e19e9a3bc3d4ee91d7fcad00653485ee6c798efbbf9588d40b34cbfbded143d",
)

load("@rules_fuzzing//fuzzing:repositories.bzl", "rules_fuzzing_dependencies")

rules_fuzzing_dependencies()

load("@rules_fuzzing//fuzzing:init.bzl", "rules_fuzzing_init")

rules_fuzzing_init()
