# Copyright 2024 The Fleetbench Authors
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

import json
import os
from unittest import mock

from absl.testing import absltest
from absl.testing import flagsaver
import pandas as pd

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import parallel_bench_lib
from fleetbench.parallel import reporter
from fleetbench.parallel import result
from fleetbench.parallel import run


class ParallelBenchTest(absltest.TestCase):

  def setUp(self):
    super().setUp()
    self.pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1],
        cpu_affinity=False,
        benchmark_weights=None,
        utilization=0.5,
        duration=0.1,
        temp_root=absltest.get_default_test_tmpdir(),
    )

  def tearDown(self):
    super().tearDown()
    for filename in os.listdir(self.pb.temp_root):
      os.remove(os.path.join(self.pb.temp_root, filename))

  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @mock.patch.object(run.Run, "Execute", autospec=True)
  @mock.patch.object(cpu, "Utilization", autospec=True)
  @mock.patch.object(reporter, "GenerateBenchmarkReport", autospec=True)
  @mock.patch.object(reporter, "SaveBenchmarkResults", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def testRun(
      self,
      mock_save_benchmark_results,
      mock_generate_benchmark_report,
      mock_utilization,
      mock_execute,
      mock_get_subbenchmarks,
  ):
    mock_get_subbenchmarks.return_value = ["BM_Test1", "BM_Test2"]
    mock_execute.return_value = result.Result(
        benchmark="fake_bench (BM_Test1)",
        rc=0,
        stdout="fake_stdout",
        stderr="fake_stderr",
        duration=0.01,
        bm_cpu_time=0.01,
        result="fake_result",
    )
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )

    def fake_utilization(unused_cpus):
      # Return 0% for the first call, then 55% for the rest.
      fake_utilizations = [(0, {1: 0}, 0), (55, {1: 55}, 1)]
      return fake_utilizations[min(mock_utilization.call_count - 1, 1)]

    mock_utilization.side_effect = fake_utilization

    mock_generate_benchmark_report.return_value = pd.DataFrame()
    mock_save_benchmark_results.return_value = None

    self.pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1],
        cpu_affinity=False,
        benchmark_weights=None,
        utilization=0.5,
        duration=0.1,
        temp_root=absltest.get_default_test_tmpdir(),
    )
    self.pb.Run("fake_bench", [])
    mock_execute.assert_called_once()

  def test_set_extra_benchmark_flags(self):
    self.assertEqual(
        parallel_bench_lib._SetExtraBenchmarkFlags(
            benchmark_perf_counters="instructions",
            benchmark_repetitions=10,
            benchmark_min_time="10s",
        ),
        [
            "--benchmark_perf_counters=instructions",
            "--benchmark_min_time=10s",
            "--benchmark_repetitions=10",
        ],
    )

    self.assertEqual(
        parallel_bench_lib._SetExtraBenchmarkFlags(
            benchmark_perf_counters="instructions",
            benchmark_repetitions=0,
            benchmark_min_time="",
        ),
        [
            "--benchmark_perf_counters=instructions",
        ],
    )

  def test_convert_to_dataframe(self):
    # First entries are fake durations, the second entries are real durations.
    self.pb.runtimes["BM_Test1"] = [
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=10,
            per_iteration_wall_time=1,
            per_iteration_cpu_time=1,
            per_bm_run_iteration=2,
        ),
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=2,
            per_iteration_wall_time=3.01,
            per_iteration_cpu_time=3,
            per_bm_run_iteration=4,
        ),
    ]
    self.pb.runtimes["BM_Test2"] = [
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=10,
            per_iteration_wall_time=1,
            per_iteration_cpu_time=1,
            per_bm_run_iteration=10,
        ),
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=4,
            per_iteration_wall_time=4,
            per_iteration_cpu_time=5,
            per_bm_run_iteration=8,
        ),
    ]
    self.pb.utilization_samples.append((pd.Timestamp.now(), 0.5))

    df = self.pb.ConvertToDataFrame()
    self.assertEqual(
        df.to_dict("records"),
        [
            {
                "Benchmark": "BM_Test1",
                "WallTimes": 3.01,
                "CPUTimes": 3,
                "Iterations": 4,
            },
            {
                "Benchmark": "BM_Test2",
                "WallTimes": 4,
                "CPUTimes": 5,
                "Iterations": 8,
            },
        ],
    )

  def test_generate_perf_counter_dataframe(self):
    mock_data1 = {
        "benchmarks": [{
            "name": "test_benchmark1",
            "cpu_time": 10,
            "instructions": 100,
            "cycles": 1,
        }]
    }
    mock_data2 = {
        "benchmarks": [{
            "name": "test_benchmark2",
            "cpu_time": 20,
            "instructions": 200,
            "cycles": 2,
        }]
    }

    mock_data3 = {
        "benchmarks": [{
            "name": "test_benchmark1",
            "cpu_time": 30,
            "instructions": 160,
            "cycles": 5,
        }]
    }
    with open(os.path.join(self.pb.temp_root, "run_1"), "w") as f:
      json.dump(mock_data1, f)
    with open(os.path.join(self.pb.temp_root, "run_2"), "w") as f:
      json.dump(mock_data2, f)
    with open(os.path.join(self.pb.temp_root, "run_3"), "w") as f:
      json.dump(mock_data3, f)

    counters = "instructions,cycles"
    df = self.pb.GeneratePerfCounterDataFrame(counters)

    self.assertIsInstance(df, pd.DataFrame)
    self.assertLen(df, 2)  # There are two benchmarks
    # The first benchmark has:
    #   100 instructions and 1 cycle in run_1,
    #   160 instructions and 5 cycles in run_3.
    # The second benchmark has 200 instructions and 2 cycles in run_2.
    expected_df = pd.DataFrame([
        {"Benchmark": "test_benchmark1", "instructions": 130.0, "cycles": 3.0},
        {"Benchmark": "test_benchmark2", "instructions": 200.0, "cycles": 2.0},
    ]).set_index("Benchmark")
    pd.testing.assert_frame_equal(df, expected_df)

  @mock.patch.object(reporter, "SaveBenchmarkResults", autospec=True)
  @mock.patch.object(reporter, "GenerateBenchmarkReport", autospec=True)
  @mock.patch.object(
      parallel_bench_lib.ParallelBench, "ConvertToDataFrame", autospec=True
  )
  def test_post_processing_benchmark_results(
      self,
      mock_convert_to_dataframe,
      mock_generate_benchmark_report,
      mock_save_benchmark_results,
  ):
    mock_convert_to_dataframe.return_value = pd.DataFrame([
        {"Benchmark": "test_benchmark1", "WallTimes": 10, "CPUTimes": 10},
    ])

    self.pb.PostProcessBenchmarkResults("instructions,cycles")
    mock_generate_benchmark_report.assert_called_once()
    mock_save_benchmark_results.assert_called_once()


class ParseBenchmarkWeightsTest(absltest.TestCase):

  def test_empty_list(self):
    self.assertIsNone(parallel_bench_lib.ParseBenchmarkWeights([]))

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
        parallel_bench_lib.ParseBenchmarkWeights(benchmark_list),
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
        parallel_bench_lib.ParseBenchmarkWeights(benchmark_list),
        expected_output,
    )


if __name__ == "__main__":
  absltest.main()
