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

r"""The program to automatically generate Compression Benchmark corpus.

This generator reads metric distributions from pre-stored .json files, and
samples from the distributions to produce a set of target parameters, such as
call size, compression ratio, etc.

Then it synthesizes corpus by breaking the existing files in /corpora/ into
1KB chunks and randomly selecting chunks until the output file reach the target
parameter sets.

The generated files will be in the specified output directory.

To run the script:
bazel run //fleetbench/compression/generate_corpora:generate_corpora \
-- --distribution_name="$.json" --output_dir="$output_directory"
"""

from collections.abc import Sequence
import json
import os
import random

from absl import app
from absl import flags
import numpy as np

from fleetbench.compression.generate_corpora import corpus_generator
from fleetbench.compression.generate_corpora import distribution_tracker

JSON_PATH = flags.DEFINE_string(
    "distribution_name",
    None,
    "the .json file name of the compression distribution",
    required=True,
)

OUTPUT_DIR = flags.DEFINE_string(
    "output_dir", None, "Output directory", required=True
)

BENCHMARK_NUMS = flags.DEFINE_integer(
    "benchmark_nums", 10, "Number of benchmarks to generate", required=False
)

DATASETS = [
    "alice29.txt",
    "asyoulik.txt",
    "baddata1.snappy",
    "baddata2.snappy",
    "baddata3.snappy",
    "fireworks.jpeg",
    "geo.protodata",
    "html",
    "html_x_4",
    "kppkn.gtb",
    "lcet10.txt",
    "paper-100k.pdf",
    "plrabn12.txt",
    "urls.10K",
]


def main(argv: Sequence[str]) -> None:
  if len(argv) > 1:
    raise app.UsageError("Too many command-line arguments.")

  # Force random seeds to 0, to ensure reproducibility of genrule.
  random.seed(0)
  np.random.seed(0)

  if not os.path.exists(JSON_PATH.value):
    raise app.ValueError(f"{JSON_PATH.value} does not exist.")
  filename = os.path.split(JSON_PATH.value)[1]
  filename_without_extension = os.path.splitext(filename)[0]
  algorithm, operation, name = filename_without_extension.split("_", 2)

  with open(JSON_PATH.value, "r") as openfile:
    json_distribution = json.load(openfile)
    distribution = distribution_tracker.process_distribution(
        json_distribution, name, algorithm, operation
    )

  corpus_chunk_manager = corpus_generator.CorpusChunkManager(
      algorithm, operation, DATASETS, name
  )
  corpus_chunk_manager.generate_benchmarks(
      distribution,
      BENCHMARK_NUMS.value,
      name,
      OUTPUT_DIR.value,
  )


if __name__ == "__main__":
  app.run(main)
