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
import math
import os
import shutil
from unittest import mock

from absl.testing import absltest
import pandas as pd

from fleetbench.parallel import reporter


class ReportedTest(absltest.TestCase):

  def setUp(self):
    super().setUp()
    self.test_dir = self.create_tempdir()

  def _write_json_file(self, file, data):
    json_object = json.dumps(data, indent=4)

    with open(file, "w") as f:
      f.write(json_object)

  def tearDown(self):
    super().tearDown()
    shutil.rmtree(self.test_dir)

  def test_aggregate_constext_single_file(self):
    data = {
        "context": {
            "date": "2025-02-14",
            "load_avg": [1.0, 2.0, 3.0],
            "hostname": "host1",
        }
    }
    self.results_file = self.test_dir.create_file("run0")
    self._write_json_file(self.results_file, data)
    result = reporter.AggregateContext(self.test_dir.full_path)
    self.assertEqual(
        result,
        {
            "date": "2025-02-14",
            "load_avg": [1.0, 2.0, 3.0],
            "hostname": "host1",
        },
    )

  def test_aggregate_constext_multiple_files(self):
    data0 = {
        "context": {
            "date": "2025-02-14",
            "load_avg": [1.0, 2.0, 3.0],
            "hostname": "host1",
        }
    }
    data1 = {
        "context": {
            "date": "2025-02-15",
            "load_avg": [2.0, 3.0, 4.0],
            "hostname": "host1",
        }
    }
    self._write_json_file(self.test_dir.create_file("run0"), data0)
    self._write_json_file(self.test_dir.create_file("run1"), data1)
    result = reporter.AggregateContext(self.test_dir.full_path)

    self.assertEqual(
        result,
        {
            "date": "2025-02-14",
            "load_avg": [1.5, 2.5, 3.5],
            "hostname": "host1",
        },
    )

  def test_aggregate_context_inconsistent_data(self):
    data0 = {
        "context": {
            "date": "2025-02-14",
            "load_avg": [1.0, 2.0, 3.0],
            "hostname": "host1",
        }
    }
    data1 = {
        "context": {
            "date": "2025-02-15",
            "load_avg": [2.0, 3.0, 4.0],
            "hostname": "host2",
        }
    }
    self._write_json_file(self.test_dir.create_file("run0"), data0)
    self._write_json_file(self.test_dir.create_file("run1"), data1)

    with self.assertLogs(level="WARNING") as log_output:
      reporter.AggregateContext(self.test_dir.full_path)

    self.assertLen(log_output.records, 1)
    self.assertIn(
        "Warning: Inconsistent value for 'hostname'",
        log_output.records[0].getMessage(),
    )

  def test_aggregate_final_context_single_context(self):
    context = {
        "date": "2025-02-14",
        "load_avg": [1.0, 2.0, 3.0],
        "hostname": "host1",
    }
    result = reporter.AggregateFinalContext([context])
    self.assertEqual(
        result,
        {
            "date": "2025-02-14",
            "load_avg": [1.0, 2.0, 3.0],
            "hostname": "host1",
        },
    )

  def test_aggregate_final_context_multiple_contexts(self):
    context1 = {
        "date": "2025-02-14",
        "load_avg": [1.0, 2.0, 3.0],
        "hostname": "host1",
    }
    context2 = {
        "date": "2025-02-15",
        "load_avg": [2.0, 3.0, 4.0],
        "hostname": "host1",
    }
    result = reporter.AggregateFinalContext([context1, context2])
    self.assertEqual(
        result,
        {
            "date": "2025-02-14",
            "load_avg": [1.5, 2.5, 3.5],
            "hostname": "host1",
        },
    )

  def test_generate_benchmark_report(self):
    benchmark_df = pd.DataFrame([
        {
            "Benchmark": "BM_Test1",
            "WallTimes": 3,
            "CPUTimes": 3,
            "Iterations": 10,
        },
        {
            "Benchmark": "BM_Test2",
            "WallTimes": 4,
            "CPUTimes": 5,
            "Iterations": 20,
        },
        {
            "Benchmark": "BM_Test1",
            "WallTimes": 6,
            "CPUTimes": 7,
            "Iterations": 50,
        },
    ])
    perf_counter_df = pd.DataFrame([
        {"Benchmark": "BM_Test1", "instructions": 130.0, "cycles": 3.0},
        {"Benchmark": "BM_Test2", "instructions": 200.0, "cycles": 2.0},
    ])
    combined_df = reporter.GenerateBenchmarkReport(
        benchmark_df, perf_counter_df
    )
    self.assertIsInstance(combined_df, pd.DataFrame)
    self.assertLen(combined_df, 2)  # Two benchmarks: BM_Test1 and BM_Test2
    expected_df = pd.DataFrame([
        {
            "Benchmark": "BM_Test1",
            "Count": 2,
            "Mean_Wall_Time": 4.5,
            "Mean_CPU_Time": 5.0,
            "Mean_Iterations": 30,
            "Wall_Time_std": 2.121,
            "CPU_Time_std": 2.828,
            "Iterations_std": 28.284,
            "instructions": 130.0,
            "cycles": 3.0,
        },
        {
            "Benchmark": "BM_Test2",
            "Count": 1,
            "Mean_Wall_Time": 4,
            "Mean_CPU_Time": 5.0,
            "Mean_Iterations": 20,
            "Wall_Time_std": math.nan,
            "CPU_Time_std": math.nan,
            "Iterations_std": math.nan,
            "instructions": 200.0,
            "cycles": 2.0,
        },
    ])
    pd.testing.assert_frame_equal(combined_df, expected_df)

  def test_aggregate_final_data_single_benchmark(self):
    data_list = [{
        "benchmark_1": {
            "name": "benchmark_1",
            "metric_1": 10.0,
            "metric_2": 20.0,
            "metric_1_std": 1.0,
            "metric_2_std": 2.0,
        }
    }]
    result = reporter.AggregateFinalData(data_list)
    self.assertEqual(
        result,
        [{
            "name": "benchmark_1",
            "metric_1": 10.0,
            "metric_2": 20.0,
            "metric_1_std": 1.0,
            "metric_2_std": 2.0,
        }],
    )

  def test_aggregate_final_data_multiple_benchmarks(self):
    data_list = [
        {
            "benchmark_1": {
                "name": "benchmark_1",
                "metric_1": 10.0,
                "metric_2": 20.0,
                "metric_1_std": 1.0,
                "metric_2_std": 2.0,
            },
            "benchmark_2": {
                "name": "benchmark_2",
                "metric_1": 15.0,
                "metric_2": 25.0,
                "metric_1_std": 3.0,
                "metric_2_std": 4.0,
            },
        },
        {
            "benchmark_1": {
                "name": "benchmark_1",
                "metric_1": 12.0,
                "metric_2": 22.0,
                "metric_1_std": 2.0,
                "metric_2_std": 3.0,
            },
            "benchmark_2": {
                "name": "benchmark_2",
                "metric_1": 17.0,
                "metric_2": 27.0,
                "metric_1_std": 5.0,
                "metric_2_std": 6.0,
            },
        },
    ]
    result = reporter.AggregateFinalData(data_list)

    self.assertLen(result, 2)
    self.assertEqual(result[0]["name"], "benchmark_1")
    self.assertAlmostEqual(result[0]["metric_1"], 11.0)
    self.assertAlmostEqual(result[0]["metric_2"], 21.0)
    self.assertAlmostEqual(result[0]["metric_1_std"], 1.581, places=3)
    self.assertAlmostEqual(result[0]["metric_2_std"], 2.550, places=3)
    self.assertEqual(result[1]["name"], "benchmark_2")
    self.assertAlmostEqual(result[1]["metric_1"], 16.0)
    self.assertAlmostEqual(result[1]["metric_2"], 26.0)
    self.assertAlmostEqual(result[1]["metric_1_std"], 4.123, places=3)
    self.assertAlmostEqual(result[1]["metric_2_std"], 5.099, places=3)

  def test_save_benchmark_results(self):
    df = pd.DataFrame([
        {"Benchmark": "BM_Test1", "Mean_Wall_Time": 1, "Mean_CPU_Time": 1},
        {"Benchmark": "BM_Test2", "Mean_Wall_Time": 1, "Mean_CPU_Time": 2},
    ]).set_index("Benchmark")

    reporter.SaveBenchmarkResults(self.test_dir.full_path, df)
    file_name = os.path.join(self.test_dir, "results.json")
    self.assertTrue(os.path.exists(file_name))
    with open(file_name, "r") as json_file:
      data = json.load(json_file)
    self.assertEqual(
        data["benchmarks"],
        [
            {"name": "BM_Test1", "real_time": 1, "cpu_time": 1},
            {"name": "BM_Test2", "real_time": 1, "cpu_time": 2},
        ],
    )

  def test_save_benchmark_results_returns_remapped_data(self):
    # Create a sample DataFrame
    df = pd.DataFrame([
        {"name": "BM_Test1", "Count": 1, "real_time": 1},
        {"name": "BM_Test2", "Count": 2, "real_time": 2},
    ]).set_index("name")

    output_dir = self.create_tempdir()
    # Mock AggregateContext to return a simple context
    mock_context = {"date": "2025-02-14", "load_avg": [1.0, 2.0, 3.0]}
    with mock.patch.object(
        reporter, "AggregateContext", return_value=mock_context
    ):
      _, remapped_data = reporter.SaveBenchmarkResults(output_dir, df)
    expected_remapped_data = {
        "BM_Test1": {"name": "BM_Test1", "Count": 1, "real_time": 1},
        "BM_Test2": {"name": "BM_Test2", "Count": 2, "real_time": 2},
    }
    self.assertEqual(remapped_data, expected_remapped_data)


if __name__ == "__main__":
  absltest.main()
