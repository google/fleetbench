# Copyright 2023 The Fleetbench Authors
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

load("@bazel_skylib//lib:selects.bzl", "selects")

package(
    default_visibility = ["//visibility:public"],
    features = ["header_modules"],
)

licenses(["notice"])

ZLIB_LOCAL_DEFINES = [
    "HAVE_UNISTD_H",
    "HAVE_STDINT_H",
    "HAVE_STDDEF_H",
    "USE_ZLIB_RABIN_KARP_ROLLING_HASH",
    "X86_NOT_WINDOWS",
] + select({
    "@platforms//cpu:x86_64": [
        "ADLER32_SIMD_SSSE3",
        "CRC32_SIMD_SSE42_PCLMUL",
        "INFLATE_CHUNK_SIMD_SSE2",
        "INFLATE_CHUNK_READ_64LE",  # requires x86_64
        "DEFLATE_SLIDE_HASH_SSE2",
        "UNALIGNED_OK",
    ],
    "@platforms//cpu:arm64": [
        "ADLER32_SIMD_NEON",
        "CRC32_ARMV8_CRC32",
        "INFLATE_CHUNK_SIMD_NEON",
        "INFLATE_CHUNK_READ_64LE",  # requires arm64
        "DEFLATE_SLIDE_HASH_NEON",
    ],
    "//conditions:default": [],
})

cc_library(
    name = "zlib",
    srcs = glob(["*.h"]) + [
        "adler32.c",
        "adler32_simd.c",
        "compress.c",
        "contrib/optimizations/inffast_chunk.c",
        "contrib/optimizations/inflate.c",
        "cpu_features.c",
        "crc32.c",
        "crc32_simd.c",
        "crc_folding.c",
        "deflate.c",
        "gzclose.c",
        "gzlib.c",
        "gzread.c",
        "gzwrite.c",
        "infback.c",
        "inffast.c",
        "inftrees.c",
        "trees.c",
        "uncompr.c",
        "zutil.c",
    ],
    hdrs = [
        "zconf.h",
        "zlib.h",
    ],
    copts = select({
        "@com_google_fleetbench//fleetbench:clang_or_gcc_x86_64": [
            "-mssse3",
            "-msse4.2",
            "-mpclmul",
        ],
        "@com_google_fleetbench//fleetbench:clang_or_gcc_arm64": [
            "-march=armv8-a+crc+crypto",
        ],
        "//conditions:default": [],
    }),
    defines = ["CHROMIUM_ZLIB_NO_CHROMECONF"],
    local_defines = ZLIB_LOCAL_DEFINES,
    strip_include_prefix = ".",
    visibility = ["//visibility:public"],
    deps = [":zlib_opt_includes"],
)

cc_library(
    name = "zlib_opt_includes",
    hdrs = glob(["contrib/optimizations/*.h"]),
    defines = ["CHROMIUM_ZLIB_NO_CHROMECONF"],
    local_defines = ZLIB_LOCAL_DEFINES,
    strip_include_prefix = "contrib/optimizations",
    visibility = ["//visibility:private"],
)
