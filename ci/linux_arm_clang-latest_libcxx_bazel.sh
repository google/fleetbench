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

if [ -z ${STD:-} ]; then
  STD="c++17"
fi

if [ -z ${BUILD_CONFIG:-} ]; then
  BUILD_CONFIG=("" "--config=opt")
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

# Avoid depending on external sites like GitHub by checking --distdir for
# external dependencies first.
# https://docs.bazel.build/versions/master/guide.html#distdir
if [[ ${KOKORO_GFILE_DIR:-} ]] && [[ -d "${KOKORO_GFILE_DIR}/distdir" ]]; then
  DOCKER_EXTRA_ARGS="--mount type=bind,source=${KOKORO_GFILE_DIR}/distdir,target=/distdir,readonly ${DOCKER_EXTRA_ARGS:-}"
  BAZEL_EXTRA_ARGS="--distdir=/distdir ${BAZEL_EXTRA_ARGS:-}"
fi

# Create and start the docker container.
docker run --name fleetbench --volume="${FLEETBENCH_ROOT}:/fleetbench:ro" \
        --workdir=/fleetbench \
        --cap-add=SYS_PTRACE \
        --detach=true \
        --interactive=true \
        --tty=true \
        --rm \
        ${DOCKER_EXTRA_ARGS:-} \
        ${DOCKER_CONTAINER} \
        /bin/bash

stop_docker() {
  docker stop fleetbench
}
trap stop_docker EXIT

# Sanity check our setup
docker exec fleetbench /usr/local/bin/bazel --version
docker exec fleetbench /usr/local/bin/bazel test fleetbench:distro_test

# Run bazel tests.
for std in ${STD}; do
  for build_config in "${BUILD_CONFIG[@]}"; do
    echo "--------------------------------------------------------------------"
    time docker exec \
    -e PATH=${PATH}:"/opt/llvm/clang/bin" \
    -e BAZEL_CXXOPTS="-std=${std}:-nostdinc++" \
    -e BAZEL_LINKOPTS="-L/opt/llvm/clang/lib/aarch64-unknown-linux-gnu:-lc++:-lc++abi:-lm:-Wl,-rpath=/opt/llvm/clang/lib/aarch64-unknown-linux-gnu" \
    -e CPLUS_INCLUDE_PATH="/opt/llvm/clang/include/aarch64-unknown-linux-gnu/c++/v1:/opt/llvm/clang/include/c++/v1" \
    fleetbench \
    /usr/local/bin/bazel test ... \
        --config=clang \
        ${build_config} \
        --define="absl=1" \
        --keep_going \
        --show_timestamps \
        --test_env="GTEST_INSTALL_FAILURE_SIGNAL_HANDLER=1" \
        --test_output=errors \
        --test_tag_filters=-benchmark \
        --test_size_filters=-enormous \
        ${BAZEL_EXTRA_ARGS:-}
  done
done
