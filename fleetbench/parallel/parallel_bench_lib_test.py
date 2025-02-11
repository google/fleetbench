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
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def testRun(self, mock_utilization, mock_execute, mock_get_subbenchmarks):
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

  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getbenchmark_without_filter(self, mock_get_subbenchmarks):
    mock_get_subbenchmarks.return_value = ["BM_Test1", "BM_Test2"]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )

    benchmarks = parallel_bench_lib._GetDefaultBenchmarks("fake_bench", [])
    self.assertLen(benchmarks, 2)
    self.assertCountEqual(
        benchmarks.keys(),
        ["fake_bench (BM_Test1)", "fake_bench (BM_Test2)"],
    )

  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getbenchmark_with_filter_partial_match(self, mock_get_subbenchmarks):
    mock_get_subbenchmarks.return_value = ["BM_Test1", "BM_Test2"]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )
    benchmarks = parallel_bench_lib._GetDefaultBenchmarks(
        "fake_bench", ["Test1"]
    )
    self.assertLen(benchmarks, 1)
    self.assertCountEqual(
        benchmarks.keys(),
        ["fake_bench (BM_Test1)"],
    )

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

  @mock.patch.object(bm, "GetWorkloads", autospec=True)
  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getworkloadbenchmark_all(
      self, mock_get_subbenchmarks, mock_get_workloads
  ):
    mock_get_workloads.return_value = ["PROTO"]
    mock_get_subbenchmarks.return_value = [
        "BM_PROTO_Test1",
        "BM_PROTO_Test2",
        "BM_PROTO_Test3",
    ]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )
    benchmarks = parallel_bench_lib._GetWorkloadBenchmarks(
        "fake_bench", ["proto,all"]
    )
    self.assertLen(benchmarks, 3)
    self.assertCountEqual(
        benchmarks.keys(),
        [
            "fake_bench (BM_PROTO_Test1)",
            "fake_bench (BM_PROTO_Test2)",
            "fake_bench (BM_PROTO_Test3)",
        ],
    )

  @mock.patch.object(bm, "GetWorkloads", autospec=True)
  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getworkloadbenchmark_subset(
      self, mock_get_subbenchmarks, mock_get_workloads
  ):
    mock_get_workloads.return_value = ["PROTO", "CORD"]
    mock_get_subbenchmarks.side_effect = [
        ["BM_PROTO_Test1", "BM_PROTO_Test2", "BM_PROTO_Test3"],
        ["BM_CORD_Test1"],
    ]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )

    benchmarks = parallel_bench_lib._GetWorkloadBenchmarks(
        "fake_bench", ["proto,1,2", "cord,all"]
    )
    self.assertLen(benchmarks, 3)
    self.assertCountEqual(
        benchmarks.keys(),
        [
            "fake_bench (BM_PROTO_Test1)",
            "fake_bench (BM_PROTO_Test2)",
            "fake_bench (BM_CORD_Test1)",
        ],
    )

  def test_convert_to_dataframe(self):
    # First entries are fake durations, the second entries are real durations.
    self.pb.runtimes["BM_Test1"] = [
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=10,
            per_iteration_wall_time=1,
            per_iteration_cpu_time=1,
        ),
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=2,
            per_iteration_wall_time=3.01,
            per_iteration_cpu_time=3,
        ),
    ]
    self.pb.runtimes["BM_Test2"] = [
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=10,
            per_iteration_wall_time=1,
            per_iteration_cpu_time=1,
        ),
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=4,
            per_iteration_wall_time=4,
            per_iteration_cpu_time=5,
        ),
    ]
    self.pb.utilization_samples.append((pd.Timestamp.now(), 0.5))

    df = self.pb.ConvertToDataFrame()
    self.assertEqual(
        df.to_dict("records"),
        [
            {"Benchmark": "BM_Test1", "WallTimes": 3.01, "CPUTimes": 3},
            {"Benchmark": "BM_Test2", "WallTimes": 4, "CPUTimes": 5},
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

  def test_generate_benchmark_report(self):
    benchmark_df = pd.DataFrame([
        {"Benchmark": "BM_Test1", "WallTimes": 3, "CPUTimes": 3},
        {"Benchmark": "BM_Test2", "WallTimes": 4, "CPUTimes": 5},
        {"Benchmark": "BM_Test1", "WallTimes": 6, "CPUTimes": 7},
    ])
    perf_counter_df = pd.DataFrame([
        {"Benchmark": "BM_Test1", "instructions": 130.0, "cycles": 3.0},
        {"Benchmark": "BM_Test2", "instructions": 200.0, "cycles": 2.0},
    ])
    combined_df = self.pb.GenerateBenchmarkReport(benchmark_df, perf_counter_df)
    self.assertIsInstance(combined_df, pd.DataFrame)
    self.assertLen(combined_df, 2)  # Two benchmarks: BM_Test1 and BM_Test2
    expected_df = pd.DataFrame([
        {
            "Benchmark": "BM_Test1",
            "Count": 2,
            "Mean_Wall_Time": 4.5,
            "Mean_CPU_Time": 5.0,
            "instructions": 130.0,
            "cycles": 3.0,
        },
        {
            "Benchmark": "BM_Test2",
            "Count": 1,
            "Mean_Wall_Time": 4,
            "Mean_CPU_Time": 5.0,
            "instructions": 200.0,
            "cycles": 2.0,
        },
    ])
    pd.testing.assert_frame_equal(combined_df, expected_df)

  def test_save_benchmark_results(self):
    df = pd.DataFrame([
        {"Benchmark": "BM_Test1", "Mean_Wall_Time": 1, "Mean_CPU_Time": 1},
        {"Benchmark": "BM_Test2", "Mean_Wall_Time": 1, "Mean_CPU_Time": 2},
    ]).set_index("Benchmark")

    self.pb.SaveBenchmarkResults(df)
    file_name = os.path.join(absltest.get_default_test_tmpdir(), "results.json")
    self.assertTrue(os.path.exists(file_name))
    with open(file_name, "r") as json_file:
      data = json.load(json_file)
    self.assertEqual(
        data,
        [
            {"name": "BM_Test1", "real_time": 1, "cpu_time": 1},
            {"name": "BM_Test2", "real_time": 1, "cpu_time": 2},
        ],
    )


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
