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
  echo "Unset FLEETBENCH_ROOT"
  exit 1
fi

if [ -z ${STD:-} ]; then
  STD="c++17"
fi

if [ -z ${BUILD_CONFIG:-} ]; then
  BUILD_CONFIG=("" "--config=opt")
fi

# Avoid depending on external sites like GitHub by checking --distdir for
# external dependencies first.
# https://docs.bazel.build/versions/master/guide.html#distdir
if [[ ${KOKORO_GFILE_DIR:-} ]] && [[ -d "${KOKORO_GFILE_DIR}/distdir" ]]; then
  DOCKER_EXTRA_ARGS="--mount type=bind,source=${KOKORO_GFILE_DIR}/distdir,target=/distdir,readonly ${DOCKER_EXTRA_ARGS:-}"
  BAZEL_EXTRA_ARGS="--distdir=/distdir ${BAZEL_EXTRA_ARGS:-}"
fi

start_docker_container() {
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
}

stop_docker() {
  docker stop fleetbench
}
trap stop_docker EXIT

sanity_check_docker_container() {
  # Sanity check our setup
  docker exec fleetbench /usr/local/bin/bazel --version
  docker exec fleetbench /usr/local/bin/bazel test fleetbench:distro_test --test_output=errors
}

run_bazel_build_test() {
  local BAZEL_TARGET="$1"
  local BAZEL_INNER_EXTRA_ARGS="$2"

  # DOCKER_ENV, BAZEL_ARGS, build_config, BAZEL_EXTRA_ARGS are inherited from
  # the callee

  # build/test separately to avoid thrashing VM resources
  BAZEL_COMMANDS=("build" "test")
  for cmd in "${BAZEL_COMMANDS[@]}"; do
    time docker exec ${DOCKER_ENV} \
      fleetbench \
      /usr/local/bin/bazel ${cmd} ${BAZEL_TARGET} \
        ${BAZEL_ARGS} \
        ${build_config} \
        --define="absl=1" \
        --keep_going \
        --show_timestamps \
        --test_env="GTEST_INSTALL_FAILURE_SIGNAL_HANDLER=1" \
        --test_output=errors \
        --test_tag_filters=-benchmark \
        --test_size_filters=-enormous \
        ${BAZEL_INNER_EXTRA_ARGS:-}
        ${BAZEL_EXTRA_ARGS:-}
  done
}

run_generic_tests() {
  local DOCKER_ENV="$1"
  local BAZEL_ARGS="$2"

  # Run bazel tests.
  for build_config in "${BUILD_CONFIG[@]}"; do
    echo "--------------------------------------------------------------------"
    run_bazel_build_test \
      "fleetbench/rpc/..." \
      "--jobs=4 --experimental_use_semaphore_for_jobs"

    run_bazel_build_test \
      "..." \
      ""
  done
}
