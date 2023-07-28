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

"""Statistical distributions for modeling compression parameters."""

from absl import logging
import numpy as np


class DistributionTracker:
  """This class converts query results to probability distributions.

  Creating count distribution and byte distribution based on some input query
  results, and support sampling features. Note that there is no guarantee that
  buckets are contigous.
  """

  def __init__(self, distrib_name, json_result):
    self.distrib_name = distrib_name

    # a histogram: bucket, call count, weighted by bytes per call
    buckets = []
    counts = []
    total_bytes = []

    for row in json_result:
      buckets.append(float(row))
      counts.append(int(json_result[row]["count"]))
      total_bytes.append(int(json_result[row]["bytes"]))

    self.buckets = np.array(buckets)
    self.counts = np.array(counts)
    self.total_bytes = np.array(total_bytes)

    # The dictionary is (bucket value, DistributionTracker) pairs.
    self.child_distribs_for_buckets = dict()

    # collect count and byte distributions
    # avoid divide by zero error, the numerator will be all zeros anyway
    counts_sum = sum(self.counts)
    if counts_sum == 0:
      self.counts_probability = np.zeros(len(self.counts))
    else:
      self.counts_probability = self.counts / counts_sum

    total_bytes_sum = sum(self.total_bytes)
    if total_bytes_sum == 0:
      self.bytes_probability = np.zeros(len(self.total_bytes))
    else:
      self.bytes_probability = self.total_bytes / total_bytes_sum

  def sample_counts_distribution(self):
    return np.random.choice(self.buckets, p=self.counts_probability)

  def sample_bytes_distribution(self):
    return np.random.choice(self.buckets, p=self.bytes_probability)

  def add_child_distribution(self, bucket_val, distrib):
    self.child_distribs_for_buckets[float(bucket_val)] = distrib

  def sample_child_counts(self):
    """Recursively samples child count distributions.

    Sample count distributions until reach the end, or no child distribution for
    a value.

    Returns:
      A dictionary, where the dictionary key is the distribution label, and the
      value is the sampled count.
      Example output: {"call_size": 5, "compression_ratio": 20}
    """

    self_sample = self.sample_counts_distribution()
    sampled_result = {self.distrib_name: self_sample}
    if self_sample in self.child_distribs_for_buckets.keys():
      sampled_result.update(
          self.child_distribs_for_buckets[self_sample].sample_child_counts()
      )
    return sampled_result

  def sample_child_bytes(self):
    """Recursively samples child byte distributions.

    Sample byte distributions until reach the end, or no child distribution for
    a value.

    Returns:
      A dictionary, where the dictionary key is the distribution label, and the
      value is the sampled byte.
      Example output: {"call_size": 5, "compression_ratio": 20}
    """
    self_sample = self.sample_bytes_distribution()
    sampled_result = {self.distrib_name: self_sample}
    if self_sample in self.child_distribs_for_buckets.keys():
      sampled_result.update(
          self.child_distribs_for_buckets[self_sample].sample_child_bytes()
      )
    return sampled_result


def process_distribution(input_distribution, name, algorithm, operation):
  """Converts .json to distribution_tracker instance."""
  logging.debug("Processing distribution of %s", name)
  distribution_tracker = DistributionTracker("call_size", input_distribution)
  for call_size_bucket in input_distribution:
    if algorithm == "Snappy" or (
        algorithm in ["ZSTD", "Flate", "Brotli"] and operation == "DECOMPRESS"
    ):
      compression_ratio_distribution_tracker = DistributionTracker(
          "compression_ratio",
          input_distribution[call_size_bucket]["compression_ratio"],
      )
      distribution_tracker.add_child_distribution(
          call_size_bucket, compression_ratio_distribution_tracker
      )
    elif algorithm in ["ZSTD", "Flate", "Brotli"] and operation == "COMPRESS":
      # Unpack ZSTD, Flate or Brotli metrics.
      # The order is:
      # call_size --> compression_level --> window_size --> compression_ratio
      compression_level_distribution = input_distribution[call_size_bucket].get(
          "compression_level"
      )
      if not compression_level_distribution:
        raise RuntimeError(
            f"call_size {call_size_bucket} does not have compression_level"
        )

      compression_level_distribution_tracker = DistributionTracker(
          "compression_level",
          compression_level_distribution,
      )
      for compression_level_bucket in compression_level_distribution:
        compression_ratio_distribution = compression_level_distribution[
            compression_level_bucket
        ].get("compression_ratio")
        if not compression_ratio_distribution:
          raise RuntimeError(
              f"compression level {compression_level_bucket} does not have"
              " compression_ratio"
          )
        compression_ratio_distribution_tracker = DistributionTracker(
            "compression_ratio",
            compression_ratio_distribution,
        )
        compression_level_distribution_tracker.add_child_distribution(
            compression_level_bucket, compression_ratio_distribution_tracker
        )

      distribution_tracker.add_child_distribution(
          call_size_bucket, compression_level_distribution_tracker
      )
    else:
      raise RuntimeError(f"{algorithm} and {operation} is not supported yet")
  return distribution_tracker
