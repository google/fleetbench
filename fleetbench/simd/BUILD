"""
Copyright 2024 The Fleetbench Authors

Licensed under the Apache License, Version 2.0 (the "License" );
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an " AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")
load("//fleetbench:utils.bzl", "if_clang")

package(default_visibility = ["//visibility:private"])

cc_library(
    name = "simd_library",
    testonly = True,
    srcs = if_clang([
        "simd_benchmark.cc",
    ]),
    visibility = ["//fleetbench:__pkg__"],
    deps = if_clang([
        "@com_google_research_scann//scann/hashes/internal:lut16_args",
        "@com_google_research_scann//scann/hashes/internal:lut16_interface",
        "@com_google_research_scann//scann/utils:alignment",
        "@com_google_research_scann//scann/utils:common",
        "@com_google_research_scann//scann/utils:fast_top_neighbors",
        "@com_google_research_scann//scann/utils:threads",
        "@com_google_research_scann//scann/utils/intrinsics:flags",
        "@com_google_absl//absl/random:distributions",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/types:span",
        "@com_google_benchmark//:benchmark",
        "//fleetbench:dynamic_registrar",
        "//fleetbench/common",
    ]),
    alwayslink = 1,
)

cc_test(
    name = "simd_benchmark",
    linkstatic = 1,
    malloc = "@com_google_tcmalloc//tcmalloc",
    visibility = ["//fleetbench:__pkg__"],
    deps = [
        ":simd_library",
        "//fleetbench:benchmark_main",
    ],
)
