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

from absl.testing import absltest
from fleetbench.compression.generate_corpora import distribution_tracker


class DistributionTrackerTest(absltest.TestCase):

  def test_initialization(self):
    input_data = {
        "-1": {"count": 1, "bytes": 0},
        "0": {"count": 2, "bytes": 5},
        "1": {"count": 2, "bytes": 15},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )
    self.assertEqual(list(distribution.buckets), [-1, 0, 1])
    self.assertEqual(list(distribution.counts), [1, 2, 2])
    self.assertEqual(list(distribution.total_bytes), [0, 5, 15])
    self.assertEqual(list(distribution.counts_probability), [0.2, 0.4, 0.4])
    self.assertEqual(list(distribution.bytes_probability), [0, 0.25, 0.75])

  def test_initialization_zero_sum(self):
    input_data = {
        "-1": {"count": 0, "bytes": 0},
        "0": {"count": 0, "bytes": 0},
        "1": {"count": 0, "bytes": 0},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )
    self.assertEqual(list(distribution.counts_probability), [0, 0, 0])
    self.assertEqual(list(distribution.bytes_probability), [0, 0, 0])

  def test_sample_count_distribution(self):
    input_data = {
        "-1": {"count": 1, "bytes": 0},
        "0": {"count": 2, "bytes": 5},
        "1": {"count": 2, "bytes": 15},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )

    results = {key: 0 for key in distribution.buckets}
    for _ in range(1000):
      sample = distribution.sample_counts_distribution()
      results[sample] += 1

    # distribution.counts_probability = [0.2, 0.4, 0.4]
    results = {key: round(value / 1000, 1) for key, value in results.items()}
    self.assertEqual(results, {-1: 0.2, 0: 0.4, 1: 0.4})

  def test_sample_byte_distribution(self):
    input_data = {
        "-1": {"count": 1, "bytes": 0},
        "0": {"count": 2, "bytes": 1},
        "1": {"count": 2, "bytes": 9},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )

    results = {key: 0 for key in distribution.buckets}
    for _ in range(1000):
      sample = distribution.sample_bytes_distribution()
      results[sample] += 1

    # distribution.byte_probability = [0, 0.1, 0.9]
    results = {key: round(value / 1000, 1) for key, value in results.items()}
    self.assertEqual(results, {-1: 0, 0: 0.1, 1: 0.9})

  def test_sample_child_counts(self):
    input_data = {
        "0": {"count": 2, "bytes": 5},
        "1": {"count": 2, "bytes": 15},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )

    input_data_1 = {
        "1": {"count": 0, "bytes": 1},
        "2": {"count": 3, "bytes": 6},
    }
    distribution_1 = distribution_tracker.DistributionTracker(
        "child_data_1", input_data_1
    )
    distribution.add_child_distribution(0, distribution_1)

    for _ in range(10):
      result = distribution.sample_child_counts()
      if len(result) == 1:
        self.assertEqual(result, {"test_data": 1})
      else:
        self.assertEqual(result, {"test_data": 0, "child_data_1": 2})

  def test_sample_child_bytes(self):
    input_data = {
        "0": {"count": 2, "bytes": 5},
        "1": {"count": 2, "bytes": 15},
    }
    distribution = distribution_tracker.DistributionTracker(
        "test_data", input_data
    )

    input_data_1 = {
        "1": {"count": 4, "bytes": 1},
        "2": {"count": 3, "bytes": 0},
    }
    distribution_1 = distribution_tracker.DistributionTracker(
        "child_data_1", input_data_1
    )
    distribution.add_child_distribution(0, distribution_1)

    for _ in range(10):
      result = distribution.sample_child_bytes()
      if len(result) == 1:
        self.assertEqual(result, {"test_data": 1})
      else:
        self.assertEqual(result, {"test_data": 0, "child_data_1": 1})


class ProcessDistributionTest(absltest.TestCase):

  def test_snappy_distribution(self):
    input_data = {
        "0": {"count": 2, "bytes": 5},
    }

    input_data_0 = {
        "0": {"count": 0, "bytes": 1},
        "1": {"count": 2, "bytes": 15},
    }

    input_data["0"]["compression_ratio"] = input_data_0

    distribution = distribution_tracker.process_distribution(
        input_data, "", "Snappy", "COMPRESS"
    )

    self.assertLen(distribution.child_distribs_for_buckets, 1)
    self.assertLen(distribution.child_distribs_for_buckets[0.0].buckets, 2)

  def test_zstd_compression_distriibution(self):
    compression_ratio_0 = {
        "1.2": {"count": 2, "bytes": 1},
        "1.3": {"count": 2, "bytes": 9},
    }
    compression_ratio_1 = {
        "1.1": {"count": 1, "bytes": 0},
    }
    compression_level_0 = {
        "3": {"count": 0, "bytes": 1, "compression_ratio": compression_ratio_0},
        "4": {
            "count": 2,
            "bytes": 15,
            "compression_ratio": compression_ratio_1,
        },
    }

    call_size = {
        "10": {
            "count": 2,
            "bytes": 5,
            "compression_level": compression_level_0,
        },
    }

    call_size_distribution = distribution_tracker.process_distribution(
        call_size, "", "ZSTD", "COMPRESS"
    )

    self.assertLen(call_size_distribution.buckets, 1)

    # call size 10 has 2 child compression level
    compression_level_tracker = (
        call_size_distribution.child_distribs_for_buckets[10.0]
    )
    self.assertLen(compression_level_tracker.buckets, 2)
    # compression level `3` has 1 child compression ratio size
    compression_ratio_tacker_1 = (
        compression_level_tracker.child_distribs_for_buckets[3.0]
    )
    self.assertLen(compression_ratio_tacker_1.counts, 2)
    # compression level `4` has 1 child compression ratio
    compression_ratio_tacker_2 = (
        compression_level_tracker.child_distribs_for_buckets[4.0]
    )
    self.assertLen(compression_ratio_tacker_2.counts, 1)

  def test_zstd_decompression_distribution(self):
    input_data = {
        "0": {"count": 2, "bytes": 5},
    }

    input_data_0 = {
        "0": {"count": 0, "bytes": 1},
        "1": {"count": 2, "bytes": 15},
    }

    input_data["0"]["compression_ratio"] = input_data_0

    distribution = distribution_tracker.process_distribution(
        input_data, "", "ZSTD", "DECOMPRESS"
    )

    self.assertLen(distribution.child_distribs_for_buckets, 1)
    self.assertLen(distribution.child_distribs_for_buckets[0.0].buckets, 2)

  def test_zstd_missing_child_distribution(self):
    call_size = {
        "10": {
            "count": 2,
            "bytes": 5,
        },
    }
    # missing `compression_level`
    with self.assertRaises(RuntimeError):
      distribution_tracker.process_distribution(
          call_size, "", "ZSTD", "COMPRESS"
      )

    compression_level = {
        "3": {
            "count": 0,
            "bytes": 1,
        }
    }
    call_size["10"]["compression_level"] = compression_level
    # missing compression ratio
    with self.assertRaises(RuntimeError):
      distribution_tracker.process_distribution(
          call_size, "", "ZSTD", "COMPRESS"
      )


if __name__ == "__main__":
  absltest.main()
