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
from fleetbench.parallel import worker


class WorkerTest(absltest.TestCase):

  def testWorkerExecutes(self):
    w = worker.Worker(cpu=1, affinity=False)
    w.start()
    run = mock.MagicMock()
    fake_result = mock.MagicMock()
    run.Execute.return_value = fake_result
    w.TryAddRun(run, [])
    results = w.StopAndGetResults()
    run.Execute.assert_called_once()
    self.assertEqual(results, [fake_result])

  @mock.patch.object(os, "sched_setaffinity", autospec=True)
  def testWorkerExecutesWithExtraWorkers(self, mock_sched_setaffinity):
    w = worker.Worker(cpu=1, affinity=True)
    w2 = worker.Worker(cpu=2, affinity=True)
    w.start()
    w2.start()
    self.assertTrue(w2.TryBlock())
    run = mock.MagicMock()
    fake_result = mock.MagicMock()
    run.Execute.return_value = fake_result
    w.TryAddRun(run, [w2])
    results = w.StopAndGetResults()
    run.Execute.assert_called_once()
    self.assertEqual(results, [fake_result])
    self.assertEmpty(w2.StopAndGetResults())
    mock_sched_setaffinity.assert_called()

  @mock.patch.object(os, "sched_setaffinity", autospec=True)
  def testWorkerExecutesWithExtraWorkersWithoutAffinity(
      self, mock_sched_setaffinity
  ):
    w = worker.Worker(cpu=1, affinity=False)
    w2 = worker.Worker(cpu=2, affinity=False)
    w.start()
    w2.start()

    self.assertTrue(w2.TryBlock())
    run = mock.MagicMock()
    fake_result = mock.MagicMock()
    run.Execute.return_value = fake_result
    self.assertTrue(w.TryAddRun(run, [w2]))
    self.assertEqual(w.StopAndGetResults(), [fake_result])
    run.Execute.assert_called_once()
    mock_sched_setaffinity.assert_not_called()

    second_run = mock.MagicMock()
    second_result = mock.MagicMock()
    second_run.Execute.return_value = second_result
    can_add_run = w2.TryAddRun(second_run, [])
    w2_results = w2.StopAndGetResults()
    w.join()
    w2.join()
    self.assertTrue(can_add_run)
    self.assertEqual(w2_results, [second_result])
    second_run.Execute.assert_called_once()


if __name__ == "__main__":
  absltest.main()
