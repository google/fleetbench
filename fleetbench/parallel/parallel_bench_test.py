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

import os
from unittest import mock

from absl.testing import absltest
from absl.testing import flagsaver

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import cpu
from fleetbench.parallel import parallel_bench_lib
from fleetbench.parallel import result
from fleetbench.parallel import run


class ParallelBenchTest(absltest.TestCase):

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
    pb = parallel_bench_lib.ParallelBench(
        cpus=[0, 1],
        cpu_affinity=False,
        utilization=0.5,
        duration=0.1,
        temp_root=absltest.get_default_test_tmpdir(),
    )
    results = pb.Run("fake_bench", [])
    mock_execute.assert_called_once()
    self.assertLen(results, 1)

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


if __name__ == "__main__":
  absltest.main()
