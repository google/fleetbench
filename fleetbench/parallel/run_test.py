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
import subprocess
from unittest import mock

from absl.testing import absltest
from absl.testing import flagsaver

from fleetbench.parallel import benchmark as bm
from fleetbench.parallel import run


class RunTest(absltest.TestCase):

  @mock.patch.object(subprocess, "run", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def testRun(self, mock_run):
    output_file = self.create_tempfile()

    data = {"benchmarks": [{"cpu_time": 12.345}]}
    json_object = json.dumps(data, indent=4)
    with open(output_file.full_path, "w") as f:
      f.write(json_object)
    mock_run.return_value.returncode = 0
    self.create_tempfile(
        file_path=os.path.join(
            absltest.get_default_test_tmpdir(), "fake_benchmark"
        ),
    )
    r = run.Run(
        benchmark=bm.Benchmark(
            name="fake_benchmark", benchmark_filter="BM_Test"
        ),
        out_file=output_file.full_path,
    )
    result = r.Execute()
    mock_run.assert_called_once()
    self.assertEqual(result.result, json_object)
    self.assertEqual(result.benchmark, "fake_benchmark (BM_Test)")
    self.assertGreater(result.duration, 0)
    self.assertEqual(result.bm_cpu_time, 12.345)
    self.assertEqual(result.rc, 0)

  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def testMissingFile(self):
    with self.assertRaises(FileNotFoundError):
      unused_r = run.Run(
          benchmark=bm.Benchmark(
              name="nonexistent_benchmark", benchmark_filter="BM_Test"
          ),
          out_file="fake_file",
      )

  @mock.patch.object(subprocess, "run", autospec=True)
  @flagsaver.flagsaver(
      benchmark_dir=absltest.get_default_test_tmpdir(),
  )
  def testBenchmarkFailed(self, mock_run):
    mock_run.side_effect = subprocess.CalledProcessError(
        returncode=1, cmd="fake_benchmark", stderr="something bad happened"
    )
    self.create_tempfile(
        file_path=os.path.join(
            absltest.get_default_test_tmpdir(), "fake_benchmark"
        )
    )

    r = run.Run(
        benchmark=bm.Benchmark("fake_benchmark", benchmark_filter="BM_Test"),
        out_file="fake_file",
    )
    result = r.Execute()
    self.assertEqual(result.rc, 1)
    self.assertEqual(result.stderr, "something bad happened")


if __name__ == "__main__":
  absltest.main()
