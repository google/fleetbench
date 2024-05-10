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

from unittest import mock
from absl.testing import absltest
from fleetbench.parallel import worker


class WorkerTest(absltest.TestCase):

  def testWorkerExecutes(self):
    w = worker.Worker(cpu=1, affinity=False)
    w.start()
    run = mock.MagicMock()
    fake_result = mock.MagicMock()
    run.Execute.return_value = fake_result
    w.TryAddRun(run)
    results = w.StopAndGetResults()
    run.Execute.assert_called_once()
    self.assertEqual(results, [fake_result])


if __name__ == "__main__":
  absltest.main()
