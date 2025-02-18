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
import subprocess
from unittest import mock
from absl.testing import absltest
from absl.testing import flagsaver
from fleetbench.parallel import benchmark


class BenchmarkTest(absltest.TestCase):

  def testFindBenchmarkAbsolutePath(self):
    temp_dir = self.create_tempdir()
    temp_dir.create_file("fake_benchmark")
    benchmark_path = os.path.join(temp_dir, "fake_benchmark")
    bm = benchmark.Benchmark(benchmark_path, "BM_Test")
    self.assertEqual(bm.Name(), "fake_benchmark (BM_Test)")
    self.assertEqual(
        bm.CommandLine(), [benchmark_path, "--benchmark_filter=BM_Test$"]
    )

  def testBenchmarkDir(self):
    temp_dir = self.create_tempdir()
    temp_dir.create_file("fake_benchmark")

    with flagsaver.flagsaver(benchmark_dir=temp_dir.full_path):
      bm = benchmark.Benchmark("fake_benchmark", "BM_Test")
      self.assertEqual(bm.Name(), "fake_benchmark (BM_Test)")

  def testBenchmarkNotFound(self):
    with self.assertRaises(FileNotFoundError):
      benchmark.Benchmark("/abs/path/fake_benchmark", "BM_Test")

    with flagsaver.flagsaver(benchmark_dir="/abs/path"):
      with self.assertRaises(FileNotFoundError):
        benchmark.Benchmark("fake_benchmark", "BM_Test")

  @mock.patch.object(subprocess, "run", autospec=True)
  def testGetSubBenchmarks(self, mock_run):
    mock_run.return_value = subprocess.CompletedProcess(
        args=[], returncode=0, stdout="BM_Test\nBM_Test2\n", stderr=""
    )
    self.assertEqual(
        benchmark.GetSubBenchmarks("/path/to/benchmark"),
        ["BM_Test", "BM_Test2"],
    )

  def testCommandLine(self):
    temp_dir = self.create_tempdir()
    temp_dir.create_file("fake_benchmark")
    benchmark_path = os.path.join(temp_dir, "fake_benchmark")
    bm = benchmark.Benchmark(benchmark_path, "BM_Test")
    self.assertEqual(
        bm.CommandLine(),
        [benchmark_path, "--benchmark_filter=BM_Test$"],
    )

    bm.AddCommandFlags(["--benchmark_min_time=10"])

    self.assertEqual(
        bm.CommandLine(),
        [
            benchmark_path,
            "--benchmark_filter=BM_Test$",
            "--benchmark_min_time=10",
        ],
    )

    bm.AddCommandFlags(["--benchmark_perf_counters=ctr1,ctr2"])
    self.assertEqual(
        bm.CommandLine(),
        [
            benchmark_path,
            "--benchmark_filter=BM_Test$",
            "--benchmark_min_time=10",
            "--benchmark_perf_counters=ctr1,ctr2",
        ],
    )

  @mock.patch.object(subprocess, "run", autospec=True)
  def testGetWorkloads(self, mock_run):
    mock_run.return_value = subprocess.CompletedProcess(
        args=[],
        returncode=0,
        stdout=(
            "BM_LIBC_Test1\nBM_LIBC_Test2\nBM_PROTO_Test1\nBM_TCMALLOC_Test1\n"
        ),
        stderr="",
    )
    self.assertCountEqual(
        benchmark.GetWorkloads("/path/to/benchmark"),
        ["LIBC", "PROTO", "TCMALLOC"],
    )

  @mock.patch.object(subprocess, "run", autospec=True)
  def testGetSubBenchmarksWorkload(self, mock_run):
    mock_run.return_value = subprocess.CompletedProcess(
        args=[],
        returncode=0,
        stdout="BM_PROTO_Arena\nBM_PROTO_NoArena\n",
        stderr="",
    )
    self.assertEqual(
        benchmark.GetSubBenchmarks("/path/to/benchmark", "proto"),
        ["BM_PROTO_Arena", "BM_PROTO_NoArena"],
    )

  @mock.patch.object(subprocess, "run", autospec=True)
  def testGetSubBenchmarksWorkloadWithUnmatchedBM(self, mock_run):
    # Simulate the full list of benchmarks
    full_benchmarks = ["BM_PROTO_Arena", "BM_PROTO_NoArena", "BM_CORD_Fleet"]

    # Simulate the subprocess output
    mock_run.return_value = subprocess.CompletedProcess(
        args=[],
        returncode=0,
        stdout="\n".join(full_benchmarks),
        stderr="",
    )

    sub_benchmarks = benchmark.GetSubBenchmarks("/path/to/benchmark", "proto")

    # Assert the expected behavior
    self.assertEqual(sub_benchmarks, ["BM_PROTO_Arena", "BM_PROTO_NoArena"])
    mock_run.assert_called_once_with(
        [
            "/path/to/benchmark",
            "--benchmark_list_tests",
            "--benchmark_filter=BM_PROTO",
        ],
        capture_output=True,
        text=True,
        check=True,
        env=mock.ANY,
    )

  @mock.patch.object(benchmark, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getbenchmark_without_filter(self, mock_get_subbenchmarks):
    mock_get_subbenchmarks.return_value = ["BM_Test1", "BM_Test2"]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )

    benchmarks = benchmark.GetDefaultBenchmarks("fake_bench", [])
    self.assertLen(benchmarks, 2)
    self.assertCountEqual(
        benchmarks.keys(),
        ["fake_bench (BM_Test1)", "fake_bench (BM_Test2)"],
    )

  @mock.patch.object(benchmark, "GetSubBenchmarks", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def test_getbenchmark_with_filter_partial_match(self, mock_get_subbenchmarks):
    mock_get_subbenchmarks.return_value = ["BM_Test1", "BM_Test2"]
    self.create_tempfile(
        os.path.join(absltest.get_default_test_tmpdir(), "fake_bench")
    )
    benchmarks = benchmark.GetDefaultBenchmarks("fake_bench", ["Test1"])
    self.assertLen(benchmarks, 1)
    self.assertCountEqual(
        benchmarks.keys(),
        ["fake_bench (BM_Test1)"],
    )

  @mock.patch.object(benchmark, "GetWorkloads", autospec=True)
  @mock.patch.object(benchmark, "GetSubBenchmarks", autospec=True)
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

    benchmarks = benchmark.GetWorkloadBenchmarks(
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

  @mock.patch.object(benchmark, "GetWorkloads", autospec=True)
  @mock.patch.object(benchmark, "GetSubBenchmarks", autospec=True)
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
    benchmarks = benchmark.GetWorkloadBenchmarks("fake_bench", ["proto,all"])
    self.assertLen(benchmarks, 3)
    self.assertCountEqual(
        benchmarks.keys(),
        [
            "fake_bench (BM_PROTO_Test1)",
            "fake_bench (BM_PROTO_Test2)",
            "fake_bench (BM_PROTO_Test3)",
        ],
    )


if __name__ == "__main__":
  absltest.main()
