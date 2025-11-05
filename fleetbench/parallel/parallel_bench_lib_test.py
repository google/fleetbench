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
import shutil
from unittest import mock

from absl import flags
from absl.testing import absltest
from absl.testing import flagsaver
from absl.testing import parameterized
import pandas as pd

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import parallel_bench_lib
from fleetbench.parallel import reporter
from fleetbench.parallel import result
from fleetbench.parallel import run
from fleetbench.parallel import weights

FLAGS = flags.FLAGS


class ParallelBenchTest(parameterized.TestCase):

  def setUp(self):
    super().setUp()
    self.temp_dir = self.create_tempdir()
    self.pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1],
        cpu_affinity=False,
        utilization=0.5,
        duration=0.1,
        repetitions=1,
        temp_parent_root=self.temp_dir.full_path,
        keep_raw_data=True,
        benchmark_perf_counters="",
        benchmark_threads={},
    )

  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @mock.patch.object(run.Run, "Execute", autospec=True)
  @mock.patch.object(cpu, "Utilization", autospec=True)
  @mock.patch.object(reporter, "GenerateBenchmarkReport", autospec=True)
  @mock.patch.object(
      reporter, "SaveBenchmarkResults", autospec=True, return_value=(None, None)
  )
  @flagsaver.flagsaver
  def testRun(
      self,
      mock_save_benchmark_results,
      mock_generate_benchmark_report,
      mock_utilization,
      mock_execute,
      mock_get_subbenchmarks,
  ):
    FLAGS.benchmark_dir = self.temp_dir.full_path
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
    self.create_tempfile(os.path.join(self.temp_dir.full_path, "fake_bench"))

    def fake_utilization(unused_cpus):
      # Return 0% for the first call, then 55% for the rest.
      fake_utilizations = [(0, {1: 0}, 0), (55, {1: 55}, 1)]
      return fake_utilizations[min(mock_utilization.call_count - 1, 1)]

    mock_utilization.side_effect = fake_utilization

    mock_generate_benchmark_report.return_value = pd.DataFrame()

    self.pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1],
        cpu_affinity=False,
        utilization=0.5,
        duration=0.1,
        repetitions=1,
        temp_parent_root=self.temp_dir.full_path,
        keep_raw_data=True,
        benchmark_perf_counters="",
        benchmark_threads={},
    )
    self.pb.SetWeights(
        benchmark_target="fake_bench",
        benchmark_filter=None,
        workload_filter=None,
        scheduling_strategy=weights.SchedulingStrategy.BM_WEIGHTED,
        custom_benchmark_weights=None,
    )
    self.pb.Run()
    mock_execute.assert_called_once()
    mock_save_benchmark_results.assert_called_once()

  @mock.patch.object(parallel_bench_lib.ParallelBench, "_PreRun", autospec=True)
  @mock.patch.object(
      parallel_bench_lib.ParallelBench, "_RunSchedulingLoop", autospec=True
  )
  @mock.patch.object(
      parallel_bench_lib.ParallelBench,
      "PostProcessBenchmarkResults",
      autospec=True,
  )
  @mock.patch.object(
      reporter, "GenerateFinalReport", autospec=True, return_value=None
  )
  @mock.patch.object(shutil, "rmtree", autospec=True)
  @mock.patch.object(os, "makedirs", autospec=True)
  def test_run_multiple_repetitions(
      self,
      mock_makedirs,
      mock_rmtree,
      mock_generate_final_report,
      mock_post_process_benchmark_results,
      mock_run_scheduling_loop,
      mock_pre_run,
  ):
    mock_post_process_benchmark_results.return_value = (
        {"date": "2025-02-14", "load_avg": [1.0, 2.0, 3.0]},
        {"col1": [1, 2]},
    )
    self.pb.repetitions = 2
    self.pb.Run()
    self.assertEqual(mock_pre_run.call_count, 2)
    self.assertEqual(mock_run_scheduling_loop.call_count, 2)
    self.assertEqual(mock_post_process_benchmark_results.call_count, 2)
    self.assertEqual(mock_rmtree.call_count, 2)
    self.assertEqual(mock_makedirs.call_count, 2)
    self.assertEqual(mock_generate_final_report.call_count, 1)

    args = mock_generate_final_report.call_args[0]
    self.assertEqual(args[0], self.pb.temp_parent_root)
    self.assertEqual(
        args[1],
        [
            {"date": "2025-02-14", "load_avg": [1.0, 2.0, 3.0]},
            {"date": "2025-02-14", "load_avg": [1.0, 2.0, 3.0]},
        ],
    )
    self.assertEqual(args[2], [{"col1": [1, 2]}, {"col1": [1, 2]}])
    self.assertEqual(args[3], 2)

  def test_set_extra_benchmark_flags(self):
    self.pb.perf_counters = ["instructions"]
    self.assertEqual(
        self.pb._SetExtraBenchmarkFlags(
            benchmark_repetitions=10,
            benchmark_min_time="10s",
        ),
        [
            "--benchmark_perf_counters=instructions",
            "--benchmark_min_time=10s",
            "--benchmark_repetitions=10",
        ],
    )

    self.pb.perf_counters = ["instructions", "cycles"]

    self.assertEqual(
        self.pb._SetExtraBenchmarkFlags(
            benchmark_repetitions=0,
            benchmark_min_time="",
        ),
        [
            "--benchmark_perf_counters=instructions,cycles",
        ],
    )

  @mock.patch.object(bm, "GetSubBenchmarks", autospec=True)
  @mock.patch.object(run.Run, "Execute", autospec=True)
  @mock.patch.object(cpu, "Utilization", autospec=True)
  @mock.patch.object(reporter, "GenerateBenchmarkReport", autospec=True)
  @mock.patch.object(
      reporter, "SaveBenchmarkResults", autospec=True, return_value=(None, None)
  )
  @flagsaver.flagsaver
  def testRunThreads(
      self,
      mock_save_benchmark_results,
      mock_generate_benchmark_report,
      mock_utilization,
      mock_execute,
      mock_get_subbenchmarks,
  ):
    FLAGS.benchmark_dir = self.temp_dir.full_path
    mock_get_subbenchmarks.return_value = ["BM_Test1"]
    mock_execute.return_value = result.Result(
        benchmark="fake_bench (BM_Test1)",
        rc=0,
        stdout="fake_stdout",
        stderr="fake_stderr",
        duration=0.01,
        bm_cpu_time=0.01,
        result="fake_result",
    )
    self.create_tempfile(os.path.join(self.temp_dir.full_path, "fake_bench"))

    def fake_utilization(unused_cpus):
      # Return 0% for the first call, then 55% for the rest.
      fake_utilizations = [(0, {1: 0, 2: 0}, 0), (55, {1: 55, 2: 55}, 1)]
      return fake_utilizations[min(mock_utilization.call_count - 1, 1)]

    mock_utilization.side_effect = fake_utilization

    mock_generate_benchmark_report.return_value = pd.DataFrame()

    self.pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1, 2],
        cpu_affinity=False,
        utilization=0.5,
        duration=0.1,
        repetitions=1,
        temp_parent_root=self.temp_dir.full_path,
        keep_raw_data=True,
        benchmark_perf_counters="",
        benchmark_threads={"BM_Test1": 2},
    )
    self.pb.SetWeights(
        benchmark_target="fake_bench",
        benchmark_filter=None,
        workload_filter=None,
        scheduling_strategy=weights.SchedulingStrategy.BM_WEIGHTED,
        custom_benchmark_weights=None,
    )
    self.pb.Run()
    mock_execute.assert_called_once()
    mock_save_benchmark_results.assert_called_once()

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

    self.pb.temp_root = os.path.join(self.pb.temp_parent_root, "run_0")
    os.makedirs(self.pb.temp_root, exist_ok=True)

    with open(os.path.join(self.pb.temp_root, "run_1"), "w") as f:
      json.dump(mock_data1, f)
    with open(os.path.join(self.pb.temp_root, "run_2"), "w") as f:
      json.dump(mock_data2, f)
    with open(os.path.join(self.pb.temp_root, "run_3"), "w") as f:
      json.dump(mock_data3, f)

    self.pb.perf_counters = ["instructions", "cycles"]
    df = self.pb.GeneratePerfCounterDataFrame()

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
      parallel_bench_lib.ParallelBench,
      "GeneratePerfCounterDataFrame",
      autospec=True,
  )
  @mock.patch.object(
      parallel_bench_lib.ParallelBench, "ConvertToDataFrame", autospec=True
  )
  def test_post_processing_benchmark_results(
      self,
      mock_convert_to_dataframe,
      mock_generate_perf_counter_dataframe,
      mock_generate_benchmark_report,
      mock_save_benchmark_results,
  ):
    mock_convert_to_dataframe.return_value = pd.DataFrame([
        {"Benchmark": "test_benchmark1", "WallTimes": 10, "CPUTimes": 10},
    ])

    mock_save_benchmark_results.return_value = (None, None)
    self.pb.PostProcessBenchmarkResults()
    mock_generate_perf_counter_dataframe.assert_called_once()
    mock_generate_benchmark_report.assert_called_once()
    mock_save_benchmark_results.assert_called_once()

  @parameterized.named_parameters(
      dict(
          testcase_name="adjust_probabilities_1",
          target_ratios=[0.2, 0.8],
          current_runtime=[1, 4],
          expected=[0.5, 0.5],
      ),
      dict(
          testcase_name="adjust_probabilities_2",
          target_ratios=[0.5, 0.5],
          current_runtime=[1, 1],
          expected=[0.5, 0.5],
      ),
      dict(
          testcase_name="adjust_probabilities_3",
          target_ratios=[0.2, 0.8],
          current_runtime=[2, 2],
          expected=[0.2, 0.8],
      ),
      dict(
          testcase_name="adjust_probabilities_4",
          target_ratios=[0.2, 0.8],
          current_runtime=[1, 1],
          expected=[0.2, 0.8],
      ),
  )
  def test_adjust_probabilities(self, target_ratios, current_runtime, expected):
    probabilities = self.pb._AdjustProbabilities(target_ratios, current_runtime)
    self.assertSequenceAlmostEqual(probabilities, expected)

  def test_adjust_runtime(self):
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
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=4,
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
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=6,
            per_iteration_wall_time=4,
            per_iteration_cpu_time=5,
            per_bm_run_iteration=8,
        ),
    ]

    current_runtimes = self.pb._AdjustRuntime()
    self.assertSequenceAlmostEqual(current_runtimes, [3.0, 5.0])

    self.pb.runtimes["BM_Test1"] = [
        parallel_bench_lib.BenchmarkMetrics(
            total_duration=10,
            per_iteration_wall_time=1,
            per_iteration_cpu_time=1,
            per_bm_run_iteration=2,
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
    current_runtimes = self.pb._AdjustRuntime()
    self.assertSequenceAlmostEqual(current_runtimes, [40.0, 4.0])

  @mock.patch.object(os, "remove", autospec=True)
  @mock.patch.object(os, "listdir", autospec=True)
  def test_remove_raw_data(self, mock_listdir, mock_remove):
    self.pb.temp_root = "/tmp/test_dir"
    mock_listdir.return_value = ["run_1", "run_2", "results.json"]

    self.pb._RemoveRawData()

    mock_listdir.assert_called_once_with("/tmp/test_dir")
    mock_remove.assert_has_calls([
        mock.call("/tmp/test_dir/run_1"),
        mock.call("/tmp/test_dir/run_2"),
    ])

  @mock.patch.object(os, "remove", autospec=True)
  @mock.patch.object(os, "listdir", autospec=True)
  def test_remove_raw_data_no_run_files(self, mock_listdir, mock_remove):
    self.pb.temp_root = "/tmp/test_dir"
    mock_listdir.return_value = ["results.json"]

    self.pb._RemoveRawData()

    mock_listdir.assert_called_once_with("/tmp/test_dir")
    mock_remove.assert_not_called()


if __name__ == "__main__":
  absltest.main()
