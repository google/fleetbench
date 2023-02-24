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

""" Helper functions to simplify Fleetbench BUILD files """

def create_fleetbench_benchmark(name, srcs, **kwargs):
    """Declare a single benchmark binary. Wraps cc_binary() rule.

    Args:
      name: binary target name
      srcs: source targets
      **kwargs: Additional variables to be passed to cc_binary.
    """
    deps = kwargs.pop("deps")
    malloc = kwargs.pop("malloc", "@com_google_tcmalloc//tcmalloc:tcmalloc")
    benchmark_filter = kwargs.pop("benchmark_filter", "all")
    benchmark_min_time = kwargs.pop("benchmark_min_time", "0.5s")  # same as default in benchmark framework
    native.cc_binary(
        name = name,
        srcs = srcs,
        malloc = malloc,
        args = [
            "--benchmark_filter=" + benchmark_filter,
            "--benchmark_min_time=" + benchmark_min_time,
        ],
        testonly = 1,
        linkstatic = 1,
        deps = deps + ["//fleetbench:benchmark_main"],
        **kwargs
    )
