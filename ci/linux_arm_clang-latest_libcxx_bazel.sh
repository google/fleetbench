#!/bin/bash
#
# Copyright 2022 The Fleetbench Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This script that can be invoked to test fleetbench in a hermetic environment
# using a Docker image on Linux. You must have Docker installed to use this
# script.

set -euox pipefail

if [ -z ${FLEETBENCH_ROOT:-} ]; then
  FLEETBENCH_ROOT="$(realpath $(dirname ${0})/..)"
fi

readonly DOCKER_CONTAINER="gcr.io/google.com/absl-177019/linux_arm_hybrid-latest:20231219"

# USE_BAZEL_CACHE=1 only works on Kokoro.
# Without access to the credentials this won't work.
if [[ ${USE_BAZEL_CACHE:-0} -ne 0 ]]; then
  DOCKER_EXTRA_ARGS="--mount type=bind,source=${KOKORO_KEYSTORE_DIR},target=/keystore,readonly ${DOCKER_EXTRA_ARGS:-}"
  # Bazel doesn't track changes to tools outside of the workspace
  # (e.g. /usr/bin/gcc), so by appending the docker container to the
  # remote_http_cache url, we make changes to the container part of
  # the cache key. Hashing the key is to make it shorter and url-safe.
  container_key=$(echo ${DOCKER_CONTAINER} | sha256sum | head -c 16)
  BAZEL_EXTRA_ARGS="--remote_cache=https://storage.googleapis.com/absl-bazel-remote-cache/${container_key} --google_credentials=/keystore/73103_absl-bazel-remote-cache ${BAZEL_EXTRA_ARGS:-}"
fi

source "${FLEETBENCH_ROOT}/ci/common.sh"

start_docker_container

# Install additional dependencies not provided by the docker image.
docker exec fleetbench apt-get update
docker exec fleetbench apt-get install -y \
    python3-pandas \
    python3-psutil

sanity_check_docker_container

CLANG_PATH="/opt/llvm/clang"
TOOLCHAIN_TYPE="aarch64-unknown-linux-gnu"
for std in ${STD}; do
  run_generic_tests \
    "-e PATH=${PATH}:${CLANG_PATH}/bin -e BAZEL_CXXOPTS=-std=${std}:-nostdinc++ -e BAZEL_LINKOPTS=-L${CLANG_PATH}/lib/${TOOLCHAIN_TYPE}:-lc++:-lc++abi:-lm:-Wl,-rpath=${CLANG_PATH}/lib/${TOOLCHAIN_TYPE} -e CPLUS_INCLUDE_PATH=${CLANG_PATH}/include/${TOOLCHAIN_TYPE}/c++/v1:${CLANG_PATH}/include/c++/v1" \
    "--config=clang"
done
