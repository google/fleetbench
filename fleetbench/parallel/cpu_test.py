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
from absl.testing import parameterized
import psutil

from fleetbench.parallel import cpu


class CpuTest(parameterized.TestCase):

  def test_Available(self):
    self.assertGreaterEqual(len(cpu.Available()), 1)

  @mock.patch.object(psutil, "cpu_percent")
  def test_Utilization(self, mock_cpu_percent):
    mock_cpu_percent.return_value = [10, 100, 25, 0]
    average, per_cpu, busy_cpu = cpu.Utilization([1, 3])
    self.assertEqual(per_cpu, {1: 100, 3: 0})
    self.assertEqual(average, 50)
    self.assertEqual(busy_cpu, 1)

    with self.assertRaises(ValueError):
      cpu.Utilization([])

  @parameterized.named_parameters(
      ("x86", "x86_64"),
      ("arm", "aarch64"),
  )
  @mock.patch("subprocess.run")
  def test_get_cpu_arch_success(self, cpu_arch, mock_run):
    """Test when subprocess.run succeeds."""
    mock_process = mock.Mock()
    mock_process.stdout = cpu_arch + "\n"
    mock_process.returncode = 0
    mock_run.return_value = mock_process

    self.assertEqual(cpu.GetCPUArch(), cpu_arch)
    mock_run.assert_called_once_with(
        ["uname", "-m"], capture_output=True, text=True, check=True
    )


class SchedlingModeTest(parameterized.TestCase):

  def setUp(self):
    super().setUp()
    self.temp_file_path_single_socket = os.path.join(
        absltest.get_default_test_tmpdir(), "cpuinfo"
    )
    self.create_tempfile(
        self.temp_file_path_single_socket,
        b"""processor	: 0
vendor_id : Some Vendor
physical id : 0
core id   : 0

processor : 1
vendor_id : Some Vendor
physical id : 0
core id   : 1

processor : 2
vendor_id : Some Vendor
physical id : 0
core id   : 2

processor : 28
vendor_id : Some Vendor
physical id : 0
core id   : 0

processor : 29
vendor_id : Some Vendor
physical id : 0
core id   : 1

processor : 30
vendor_id : Some Vendor
physical id : 0
core id   : 2
""",
    )

    self.temp_file_path_complex = os.path.join(
        absltest.get_default_test_tmpdir(), "cpuinfo2"
    )
    self.create_tempfile(
        self.temp_file_path_complex,
        b"""processor	: 0
vendor_id : Some Vendor
physical id : 0
core id   : 0

processor : 1
vendor_id : Some Vendor
physical id : 0
core id   : 1

processor : 2
vendor_id : Some Vendor
physical id : 0
core id   : 3

processor : 28
vendor_id : Some Vendor
physical id : 1
core id   : 0

processor : 29
vendor_id : Some Vendor
physical id : 1
core id   : 1

processor : 56
vendor_id : Some Vendor
physical id : 0
core id   : 0

processor : 57
vendor_id : Some Vendor
physical id : 0
core id   : 1

processor : 58
vendor_id : Some Vendor
physical id : 0
core id   : 3

processor : 84
vendor_id : Some Vendor
physical id : 1
core id   : 0

processor : 85
vendor_id : Some Vendor
physical id : 1
core id   : 1

""",
    )

  def test_GetCpuInfo(self):
    available_cpus = list(range(32))
    cpu_info = cpu.CpuInfo(self.temp_file_path_single_socket, available_cpus)

    self.assertEqual(cpu_info.GetSocketsCount(), 1)
    self.assertEqual(cpu_info.GetCoresForSocket(0), [0, 1, 2])
    self.assertEqual(cpu_info.GetVCPUPairsForCore(0, 0), [0, 28])
    self.assertEqual(cpu_info.GetVCPUPairsForCore(0, 1), [1, 29])
    self.assertEqual(cpu_info.GetVCPUPairsForCore(0, 2), [2, 30])

    available_cpus2 = list(range(96))
    cpu_info2 = cpu.CpuInfo(self.temp_file_path_complex, available_cpus2)
    self.assertEqual(cpu_info2.GetSocketsCount(), 2)
    self.assertEqual(cpu_info2.GetCoresForSocket(0), [0, 1, 3])
    self.assertEqual(cpu_info2.GetCoresForSocket(1), [0, 1])
    self.assertEqual(cpu_info2.GetVCPUPairsForCore(0, 0), [0, 56])
    self.assertEqual(cpu_info2.GetVCPUPairsForCore(0, 1), [1, 57])
    self.assertEqual(cpu_info2.GetVCPUPairsForCore(0, 3), [2, 58])
    self.assertEqual(cpu_info2.GetVCPUPairsForCore(1, 0), [28, 84])
    self.assertEqual(cpu_info2.GetVCPUPairsForCore(1, 1), [29, 85])

    self.assertFalse(cpu_info2.IsUnusedCoreID(0))
    self.assertTrue(cpu_info2.IsUnusedCoreID(2))

  @parameterized.named_parameters(
      (
          "Disable_mode",
          cpu.HyperthreadingMode.DISABLE,
          6,
          0.6,
          [0, 1, 2],
          0.6,
      ),
      ("Skewed_mode", cpu.HyperthreadingMode.SKEWED, 6, 0.3, [0, 1, 28, 29], 1),
      (
          "Balanced_mode",
          cpu.HyperthreadingMode.BALANCED,
          6,
          0.3,
          [0, 1, 28, 29],
          1,
      ),
  )
  @mock.patch.object(os, "sched_getaffinity")
  def test_SchedulingMode_SingleSocket(
      self,
      mode,
      num_cpus,
      target_utilization,
      expected_cpus_list,
      expected_utilization,
      mock_sched_getaffinity,
  ):
    mock_sched_getaffinity.return_value = list(range(32))
    scheduling_mode = cpu.CpuSchedulingMode(
        num_cpus=num_cpus,
        utilization=target_utilization,
        hyperthreading_mode=mode,
        cpu_info_file=self.temp_file_path_single_socket,
    )

    cpus_list, utilization = scheduling_mode.SelectCPURangeAndSetUtilization()
    self.assertEqual(cpus_list, expected_cpus_list)
    self.assertEqual(utilization, expected_utilization)

  @parameterized.named_parameters(
      (
          "Disable_mode",
          cpu.HyperthreadingMode.DISABLE,
          10,
          0.6,
          [0, 1, 2, 28, 29],
          0.6,
      ),
      (
          "Skewed_mode",
          cpu.HyperthreadingMode.SKEWED,
          10,
          0.4,
          [0, 1, 2, 56, 57, 58],
          1,
      ),
      (
          "Balanced_mode",
          cpu.HyperthreadingMode.BALANCED,
          10,
          0.4,
          [0, 1, 28, 56, 57, 84],
          1,
      ),
  )
  @mock.patch.object(os, "sched_getaffinity")
  def test_SchedulingMode_complex(
      self,
      mode,
      num_cpus,
      target_utilization,
      expected_cpus_list,
      expected_utilization,
      mock_sched_getaffinity,
  ):
    mock_sched_getaffinity.return_value = list(range(96))
    scheduling_mode = cpu.CpuSchedulingMode(
        num_cpus=num_cpus,
        utilization=target_utilization,
        hyperthreading_mode=mode,
        cpu_info_file=self.temp_file_path_complex,
    )

    cpus_list, utilization = scheduling_mode.SelectCPURangeAndSetUtilization()
    self.assertEqual(cpus_list, expected_cpus_list)
    self.assertEqual(utilization, expected_utilization)


if __name__ == "__main__":
  absltest.main()
