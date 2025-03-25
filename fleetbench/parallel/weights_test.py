# Copyright 2025 The Fleetbench Authors
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

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import weights


class ParseBenchmarkWeightsTest(absltest.TestCase):

  def test_valid_list(self):
    benchmark_list = [
        "cold:0.5",
        "PROTO:0.3",
        "Cord:0.2",
    ]
    expected_output = {
        "COLD": 0.5,
        "PROTO": 0.3,
        "CORD": 0.2,
    }
    self.assertEqual(
        weights._ParseBenchmarkWeights(benchmark_list),
        expected_output,
        "Should return correct dictionary for valid list",
    )

  def test_invalid_string(self):
    benchmark_list = [
        "cold:0.5",
        "PROTO:invalid",
        "TCMALLOC",
        "Cord:0.2",
    ]
    # Even with an invalid string, the function should still process the valid
    # ones.
    expected_output = {"COLD": 0.5, "CORD": 0.2}
    self.assertEqual(
        weights._ParseBenchmarkWeights(benchmark_list),
        expected_output,
    )

  def test_bm_weighted_no_custom_weights(self):
    benchmark_map = {
        "benchmark1": bm.Benchmark("fake_target", "benchmark1"),
        "benchmark2": bm.Benchmark("fake_target", "benchmark2"),
    }
    expected_weights = {
        "benchmark1": 1.0,
        "benchmark2": 1.0,
    }
    self.assertEqual(
        weights.GetBenchmarkWeights(
            benchmark_map, weights.SchedulingStrategy.BM_WEIGHTED
        ),
        expected_weights,
    )

  def test_bm_weighted_custom_weights(self):
    benchmark_map = {
        "benchmark1": bm.Benchmark("fake_target", "benchmark1"),
        "benchmark2": bm.Benchmark("fake_target", "benchmark2"),
    }
    custom_weights = ["benchmark1:0.5", "benchmark2:0.3"]
    expected_weights = {
        "benchmark1": 0.5,
        "benchmark2": 0.3,
    }
    self.assertEqual(
        weights.GetBenchmarkWeights(
            benchmark_map,
            weights.SchedulingStrategy.BM_WEIGHTED,
            custom_weights,
        ),
        expected_weights,
    )

  def test_workload_weighted(self):
    benchmark_map = {
        "benchmark1": bm.Benchmark("fake_target", "BM_Workload1_Test1"),
        "benchmark2": bm.Benchmark("fake_target", "BM_Workload1_Test2"),
        "benchmark3": bm.Benchmark("fake_target", "BM_Workload2_Test1"),
    }
    expected_weights = {
        "benchmark1": 0.5,
        "benchmark2": 0.5,
        "benchmark3": 1.0,
    }
    self.assertEqual(
        weights.GetBenchmarkWeights(
            benchmark_map, weights.SchedulingStrategy.WORKLOAD_WEIGHTED
        ),
        expected_weights,
    )
