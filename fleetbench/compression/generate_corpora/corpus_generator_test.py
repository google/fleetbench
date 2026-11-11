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

import os

from absl.testing import absltest
import numpy as np

from python.runfiles import Runfiles
from fleetbench.compression.generate_corpora import corpus_generator

DATASETS_TEST_SIMPLE = [
    "alice29.txt",
]

DATASETS_TEST_COMPLEX = [
    "alice29.txt",
    "asyoulik.txt",
    "baddata1.snappy",
]

SNAPPY_WINDOW_SIZE = 16  # In unit KiB
SNAPPY_COMPRESSION_LEVEL = 0
ZSTD_COMPRESSION_LEVEL = [-5, -3, -1] + list(range(0, 12)) + [15]
ZSTD_WINDOW_SIZE = [0]
DATASET_DIR = (
    "com_google_fleetbench/fleetbench/compression/generate_corpora/corpora"
)


class _StubDistribution:

  def __init__(self, samples):
    self._samples = iter(samples)

  def sample_child_counts(self):
    return next(self._samples)


class CorpusGeneratorTest(absltest.TestCase):

  def test_generate_chunks_snappy_simple(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()
    parameters = corpus_generator.CompressionParameters(
        window_size=SNAPPY_WINDOW_SIZE, compression_level=SNAPPY_COMPRESSION_LEVEL
    )
    self.assertEqual(corpus_chunk_manager.max_ratio_lookup[parameters], 1.9)
    snappy_lookup_table = corpus_chunk_manager.lookup_table[parameters]
    # max ratio is 1.9
    self.assertLen(snappy_lookup_table, 20)

    # Ensures all data chunks are being processed
    total_chunks = sum(len(lst) for lst in snappy_lookup_table)
    file_path = Runfiles.Create().Rlocation(
        os.path.join(DATASET_DIR, DATASETS_TEST_SIMPLE[0])
    )
    with open(file_path, "rb") as file:
      corpus = file.read()
      dataset_chunks = int(len(corpus) / corpus_chunk_manager.chunk_size)
    self.assertEqual(total_chunks, dataset_chunks)

  def test_generate_chunks_snappy_complex(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_COMPLEX,
        "A",
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()

    parameters = corpus_generator.CompressionParameters(
        window_size=SNAPPY_WINDOW_SIZE, compression_level=SNAPPY_COMPRESSION_LEVEL
    )

    self.assertEqual(corpus_chunk_manager.max_ratio_lookup[parameters], 1.9)

    snappy_lookup_table = corpus_chunk_manager.lookup_table[parameters]
    # max ratio is 1.9
    self.assertLen(snappy_lookup_table, 20)

    # Ensures all data chunks are being processed
    dataset_chunks = 0
    for file in DATASETS_TEST_COMPLEX:
      file_path = Runfiles.Create().Rlocation(os.path.join(DATASET_DIR, file))
      with open(file_path, "rb") as file:
        corpus = file.read()
        dataset_chunks += int(len(corpus) / corpus_chunk_manager.chunk_size)

    total_chunks = sum(len(lst) for lst in snappy_lookup_table)
    self.assertEqual(total_chunks, dataset_chunks)

  def test_generate_chunks_zstd_simple_ratio(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "ZSTD",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()
    max_ratio_ref = [1.6, 1.7, 2.5, 2.6, 2.6, 2.6]
    compression_level_subset = [-5, -3, 1, 5, 11, 15]
    for idx, level in enumerate(compression_level_subset):
      parameters = corpus_generator.CompressionParameters(
          window_size=ZSTD_WINDOW_SIZE[0], compression_level=level
      )
      self.assertEqual(
          corpus_chunk_manager.max_ratio_lookup[parameters],
          max_ratio_ref[idx],
      )

  def test_generate_chunks_zstd_simple_lookup_table(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "ZSTD",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()
    # Ensures all data chunks are being processed
    file_path = Runfiles.Create().Rlocation(
        os.path.join(DATASET_DIR, DATASETS_TEST_SIMPLE[0])
    )
    with open(file_path, "rb") as file:
      corpus = file.read()
      dataset_chunks = int(len(corpus) / corpus_chunk_manager.chunk_size)
    ref_total_dataset_chunks = (
        dataset_chunks * len(ZSTD_COMPRESSION_LEVEL) * len(ZSTD_WINDOW_SIZE)
    )

    total_chunks = 0
    for compression_level in ZSTD_COMPRESSION_LEVEL:
      for window_size in ZSTD_WINDOW_SIZE:
        parameters = corpus_generator.CompressionParameters(
            window_size=window_size, compression_level=compression_level
        )
        for ratio in corpus_chunk_manager.lookup_table[parameters]:
          total_chunks += len(ratio)

    self.assertEqual(total_chunks, ref_total_dataset_chunks)

  def test_compute_compression_ratio(self):
    chunk_array = []
    file_path = Runfiles.Create().Rlocation(
        os.path.join(DATASET_DIR, DATASETS_TEST_SIMPLE[0])
    )
    chunk_size = 10000
    with open(file_path, "rb") as file:
      corpus = file.read()

      corpus_chunk_1 = corpus_generator.CorpusChunk(
          corpus[0:chunk_size], 0, file
      )
      corpus_chunk_2 = corpus_generator.CorpusChunk(
          corpus[chunk_size + 1 : 2 * chunk_size], 0, file
      )
      chunk_array.append(corpus_chunk_1)
      chunk_array.append(corpus_chunk_2)

    corpus_chunk_manager_snappy = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    compression_ratio_snappy = (
        corpus_chunk_manager_snappy.compute_compression_ratio(chunk_array)
    )
    self.assertBetween(compression_ratio_snappy, 1.5, 1.7)

    corpus_chunk_manager_zstd = corpus_generator.CorpusChunkManager(
        "ZSTD", "compress", DATASETS_TEST_SIMPLE, "A"
    )
    compression_ratio_zstd = (
        corpus_chunk_manager_zstd.compute_compression_ratio(chunk_array, -5)
    )
    self.assertBetween(compression_ratio_zstd, 1.37, 1.40)

  def test_compute_compression_ratio_empty(self):
    chunk_array = []
    corpus_chunk_manager_snappy = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    compression_ratio_snappy = (
        corpus_chunk_manager_snappy.compute_compression_ratio(chunk_array)
    )
    self.assertEqual(compression_ratio_snappy, -1)

    corpus_chunk_manager_zstd = corpus_generator.CorpusChunkManager(
        "ZSTD", "compress", DATASETS_TEST_SIMPLE, "A"
    )
    compression_ratio_zstd = (
        corpus_chunk_manager_zstd.compute_compression_ratio(chunk_array)
    )
    self.assertEqual(compression_ratio_zstd, -1)

  def test_create_chunk_array_snappy(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )

    parameters = corpus_generator.CompressionParameters(
        window_size=SNAPPY_WINDOW_SIZE,
        compression_level=SNAPPY_COMPRESSION_LEVEL,
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()

    # The smallest chunk size is 1024
    for sampled_log_size in range(10, 20):
      for sampled_compression_ratio in np.arange(0, 2, 0.1):
        sampled_call_size = 2**sampled_log_size
        output_list = corpus_chunk_manager.create_chunk_array(
            sampled_call_size, sampled_compression_ratio, parameters
        )
        if output_list is None:
          continue

        # Ensures compression ratio is close.
        achieved_ratio = corpus_chunk_manager.compute_compression_ratio(
            output_list
        )
        diff = abs(achieved_ratio - sampled_compression_ratio)
        self.assertLess(diff, 0.5)

        # Ensures file size is same
        result = bytes()
        for chunk in output_list:
          result += chunk.data

        self.assertLen(result, sampled_call_size)

  def test_create_chunk_array_snappy_less_than_1024(self):
    corpus_chunk_manager = corpus_generator.CorpusChunkManager(
        "Snappy",
        "compress",
        DATASETS_TEST_SIMPLE,
        "A",
    )
    parameters = corpus_generator.CompressionParameters(
        window_size=SNAPPY_WINDOW_SIZE,
        compression_level=SNAPPY_COMPRESSION_LEVEL,
    )
    corpus_chunk_manager.generate_corpus_chunks_lookup()

    sampled_log_size_log2 = 8
    target_call_size = 2**sampled_log_size_log2
    sampled_compression_ratio = 1.2

    output_list = corpus_chunk_manager.create_chunk_array(
        target_call_size, sampled_compression_ratio, parameters
    )
    self.assertLen(output_list, 1)
    self.assertLen(output_list[0].data, target_call_size)

  def test_generate_benchmarks_caps_oversized_high_ratio(self):
    manager = corpus_generator.CorpusChunkManager(
        "Brotli", "COMPRESS", DATASETS_TEST_SIMPLE, "A"
    )
    oversized = {
        "call_size": 27.0,
        "compression_level": 4.0,
        "compression_ratio": 14.2,
    }
    output_dir = self.create_tempdir().full_path
    with self.assertLogs(level="WARNING") as logs:
      manager.generate_benchmarks(
          _StubDistribution([oversized] * 1002), 2, "A", output_dir
      )
    self.assertLen(logs.output, 1)
    out = os.path.join(output_dir, "Brotli_COMPRESS_A")
    sizes = {f: os.path.getsize(os.path.join(out, f)) for f in os.listdir(out)}
    self.assertEqual(sizes, {"corpus_0": 2**17, "corpus_1": 2**17})

  def test_generate_benchmarks_terminates_for_oversized_sparse_low_ratio(self):
    manager = corpus_generator.CorpusChunkManager(
        "Snappy", "COMPRESS", DATASETS_TEST_SIMPLE, "A"
    )
    sparse = {"call_size": 27.0, "compression_ratio": 1.2}
    output_dir = self.create_tempdir().full_path
    with self.assertLogs(level="WARNING"):
      manager.generate_benchmarks(
          _StubDistribution([sparse] * 1002), 2, "A", output_dir
      )
    out = os.path.join(output_dir, "Snappy_COMPRESS_A")
    for name in ("corpus_0", "corpus_1"):
      size = os.path.getsize(os.path.join(out, name))
      self.assertBetween(size, manager.chunk_size, 2**17)
      self.assertEqual(size & (size - 1), 0)

  def test_generate_benchmarks_preserves_rejection_for_mixed_distribution(self):
    manager = corpus_generator.CorpusChunkManager(
        "Snappy", "COMPRESS", DATASETS_TEST_SIMPLE, "A"
    )
    oversized = {"call_size": 27.0, "compression_ratio": 1.6}
    feasible = {"call_size": 10.0, "compression_ratio": 1.6}
    samples = [oversized] * 600 + [feasible] + [oversized] * 1001 + [feasible]
    output_dir = self.create_tempdir().full_path
    with self.assertNoLogs(level="WARNING"):
      manager.generate_benchmarks(
          _StubDistribution(samples), 3, "A", output_dir
      )
    out = os.path.join(output_dir, "Snappy_COMPRESS_A")
    sizes = {f: os.path.getsize(os.path.join(out, f)) for f in os.listdir(out)}
    self.assertEqual(
        sizes, {"corpus_0": 2**10, "corpus_1": 2**17, "corpus_2": 2**10}
    )


if __name__ == "__main__":
  absltest.main()
