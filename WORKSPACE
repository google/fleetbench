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

# Prevent buildifier -lint=fix from reordering load statements. loads
# can't come before the http_archive.
# buildifier: disable=load-on-top

workspace(name = "com_google_fleetbench")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# GRPC rules.
http_archive(
    name = "com_github_grpc_grpc",  # 2024-07-23
    strip_prefix = "grpc-4b206a2812af345297a7223026cd7c5fd643d3be",
    urls = ["https://github.com/grpc/grpc/archive/4b206a2812af345297a7223026cd7c5fd643d3be.tar.gz"],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()

# Support for building foreign build system dependencies. Needed for libpfm.
http_archive(
    name = "rules_foreign_cc",  # 2023-01-25
    sha256 = "040ab3cc71356c186230e8c6c8d147dc533a83c72e3e9b4244a36cd9cf18179d",
    strip_prefix = "rules_foreign_cc-1e66c02ea867d91312a1e14c1d3f78ccbe0d8bc8",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/1e66c02ea867d91312a1e14c1d3f78ccbe0d8bc8.zip",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

# Abseil-Python
http_archive(
    name = "com_google_absl_py",  # 2024-04-16
    integrity = "sha256-kpYxSP+2fHkqFfDL/9TDJvpcHil5IECWLTYFYRtl3c4=",
    strip_prefix = "abseil-py-fae7e951d46011fdaf62685893ef4efd48544c0a",
    urls = ["https://github.com/abseil/abseil-py/archive/fae7e951d46011fdaf62685893ef4efd48544c0a.zip"],
)

# Google benchmark.
http_archive(
    name = "com_google_benchmark",  # 2023-09-05
    sha256 = "abfc22e33e3594d0edf8eaddaf4d84a2ffc491ad74b6a7edc6e7a608f690e691",
    strip_prefix = "benchmark-1.8.3",
    urls = ["https://github.com/google/benchmark/archive/v1.8.3.zip"],
)

# Google Snappy
http_archive(
    name = "snappy",  # 2023-05-09
    sha256 = "c7b207562584bb7272921c176c6bd5c54cfae833129a5d7451bccd7f97b831b5",
    strip_prefix = "snappy-c9f9edf6d75bb065fa47468bf035e051a57bec7c",
    urls = ["https://github.com/google/snappy/archive/c9f9edf6d75bb065fa47468bf035e051a57bec7c.zip"],
)

# ZSTD
http_archive(
    name = "ZSTD",  # 2020-05-22
    build_file = "//fleetbench/compression:zstd.BUILD",
    sha256 = "b6c537b53356a3af3ca3e621457751fa9a6ba96daf3aebb3526ae0f610863532",
    strip_prefix = "zstd-1.4.5/lib",
    urls = ["https://github.com/facebook/zstd/archive/v1.4.5.zip"],
)

# Brotli
http_archive(
    name = "brotli",  # 2023-07-28
    sha256 = "8c165ad05f6ab62b528f72dba7e5777b6361e4de24332ed34f929ff44479fb8c",
    strip_prefix = "brotli-0300be36ba019c55d2edc48353270fa18008d49c",
    urls = ["https://github.com/google/brotli/archive/0300be36ba019c55d2edc48353270fa18008d49c.zip"],
)

# Flate
http_archive(
    name = "chromium_zlib",  # 2023-08-11
    build_file = "//fleetbench/compression:zlib.BUILD",
    # sha256 is not stable for googlesource.com
    urls = ["https://chromium.googlesource.com/chromium/src/third_party/zlib/+archive/f5fd0ad2663e239a31184ad4c9919991dda16f46.tar.gz"],
)

# libzip
http_archive(
    name = "libzip",  # 2024-04-09
    build_file = "//fleetbench/compression:libzip.BUILD",
    integrity = "sha256-1W2FfRw61KfzpMAaUcam5VMONauTUD9iJ26LorMGGGo=",
    strip_prefix = "libzip-1.10.1",
    urls = ["https://github.com/nih-at/libzip/archive/v1.10.1.tar.gz"],
)

# libpfm4, for perf counters
http_archive(
    name = "libpfm",  # 2023-01-12
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
    strip_prefix = "libpfm-4.11.0",
    type = "tar.gz",
    urls = ["https://sourceforge.net/projects/perfmon2/files/libpfm4/libpfm-4.11.0.tar.gz/download"],
)

# TCMalloc
http_archive(
    name = "com_google_tcmalloc",  # 2024-04-12
    integrity = "sha256-Se3AKJNGeqFDmUmjHGIkwA7ZW0jiYKpczh9fxKXlNNs=",
    strip_prefix = "tcmalloc-5ed309d3de0c647a91bb41b2be68603c39aef452",
    urls = ["https://github.com/google/tcmalloc/archive/5ed309d3de0c647a91bb41b2be68603c39aef452.zip"],
)

# Dependencies of TCMalloc
# Fuzzing
http_archive(
    name = "rules_fuzzing",  # 2023-10-19
    sha256 = "ff52ef4845ab00e95d29c02a9e32e9eff4e0a4c9c8a6bcf8407a2f19eb3f9190",
    strip_prefix = "rules_fuzzing-0.4.1",
    urls = ["https://github.com/bazelbuild/rules_fuzzing/releases/download/v0.4.1/rules_fuzzing-0.4.1.zip"],
)

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

# Bazel platform rules.
http_archive(
    name = "platforms",  # 2024-01-08
    sha256 = "3a561c99e7bdbe9173aa653fd579fe849f1d8d67395780ab4770b1f381431d51",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/platforms/releases/download/0.0.7/platforms-0.0.7.tar.gz",
        "https://github.com/bazelbuild/platforms/releases/download/0.0.7/platforms-0.0.7.tar.gz",
    ],
)

load("@rules_fuzzing//fuzzing:repositories.bzl", "rules_fuzzing_dependencies")

rules_fuzzing_dependencies()

load("@rules_fuzzing//fuzzing:init.bzl", "rules_fuzzing_init")

rules_fuzzing_init()

http_archive(
    name = "llvm",  # 2023-03-07
    build_file = "@//fleetbench:llvmlibc.BUILD.bazel",
    sha256 = "ee98a255becf4b8d2667cea777a497e0fea87a294abfc5c01ee28897dbfc7c3f",
    strip_prefix = "llvm-project-e002a38b20e3ac40aecbbfa0774f8ba7b9690b0c",
    urls = ["https://github.com/llvm/llvm-project/archive/e002a38b20e3ac40aecbbfa0774f8ba7b9690b0c.tar.gz"],
)

load("@llvm//utils/bazel:configure.bzl", "llvm_configure")

llvm_configure(name = "llvm-project")
