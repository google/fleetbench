#!/bin/bash
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
# This file defines the skeleton of generated benchmark files. It contains
# the includes, gunit benchmark code, and main entrypoint.


#!/bin/bash
OUT_DIR=$1
BENCHMARK_NUMS=$2
RUNFILES_DIR=$0.runfiles

algorithms=("Snappy" "ZSTD")
operations=("COMPRESS" "DECOMPRESS")
binaries=("A" "B" "C" "D" "F" "L" "M" "P" "S" "U")

for algorithm in "${algorithms[@]}"; do
  for operation in "${operations[@]}"; do
    for binary in "${binaries[@]}"; do
       # Skip ZSTD-COMPRESS-L
        if [[ $algorithm == "ZSTD" && $operation == "COMPRESS" && $binary == "L" ]]; then
          continue
        fi

      # Find compression distribution
      prefix="$algorithm-$operation-$binary"

      ${RUNFILES_DIR}/com_google_fleetbench/fleetbench/compression/generate_corpora/generate_corpora --distribution_name="$prefix.json"  --output_dir=${OUT_DIR} --benchmark_nums=${BENCHMARK_NUMS}

    done
  done
done