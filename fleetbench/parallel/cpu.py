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

"""Utilities for CPU-related operations."""

import enum
import math
import os
import subprocess
from typing import Tuple

from absl import logging
import psutil


# TODO: Consider using `lscpu -p` to get CPU information.
class CpuInfo:
  """Class for reading and parsing CPU information from the cpuinfo file.

  The default cpuinfo file is /proc/cpuinfo.
  """

  def __init__(self, cpu_info_file: str, available_cpus: list[int]):
    self.cpu_info = {}
    self.cpu_info_file = cpu_info_file
    self.available_cpus = available_cpus
    self._CollectCpuInfo()

  def _AddCore(self, file_content: str):
    """Parses the CPU information and adds it to the CPU info dictionary."""

    relevant_keys = ("processor", "physical id", "core id")
    physical_id = None
    vcpu = None
    core_id = None

    for line in file_content.splitlines():
      if not line.startswith(relevant_keys):
        continue
      key, value = line.strip().split(":")
      key = key.strip()
      value = int(value.strip())

      if key == "processor":
        vcpu = value
      elif key == "physical id":
        physical_id = value
      elif key == "core id":
        core_id = value

    if physical_id is None or vcpu is None or core_id is None:
      logging.warning("Invalid CPU information: %s", file_content)
      return

    if vcpu not in self.available_cpus:
      logging.warning("CPU %d is not available", vcpu)
      return

    self.cpu_info.setdefault(physical_id, {})
    self.cpu_info[physical_id].setdefault(core_id, [])
    self.cpu_info[physical_id][core_id].append(vcpu)

  def _CollectCpuInfo(self):
    """Reads CPU information from /proc/cpuinfo and organizes it into a dictionary."""

    with open(self.cpu_info_file, "r") as f:
      file_content = f.read()

    blocks = file_content.split("\n\n")
    for block in blocks:
      self._AddCore(block.strip())

  def GetSocketsCount(self) -> int:
    """Returns the number of sockets."""
    return len(self.cpu_info)

  def GetCoresForSocket(self, socket_id: int) -> list[int]:
    """Returns a list of CPUs for a given socket."""
    if socket_id not in self.cpu_info:
      logging.warning("Socket ID %d not found in CPU info", socket_id)
      return []
    return list(self.cpu_info[socket_id].keys())

  def GetVCPUPairsForCore(self, socket_id, core_id) -> list[int]:
    """Returns a list of vCPU pairs."""
    if (
        socket_id not in self.cpu_info
        or core_id not in self.cpu_info[socket_id]
    ):
      logging.warning(
          "Socket ID %d or core ID %d not found in CPU info", socket_id, core_id
      )
      return []
    return self.cpu_info[socket_id][core_id]

  def IsUnusedCoreID(self, core_id: int) -> bool:
    """Returns True if the core ID is unused."""
    for socket_id in self.cpu_info:
      if core_id in self.cpu_info[socket_id]:
        return False
    return True


class HyperthreadingMode(enum.Enum):
  """Enumeration class for different scheduling modes."""

  DISABLE = 0  # Disable SMT
  DYNAMIC = 1  # Enable SMT, let scheduler pin workloads
  SKEWED = 2  # Enable SMT, pin workloads to Socket0 and lower hyperthreads
  BALANCED = 3  # Enable SMT, balance workloads across sockets and hyperthreads


class CpuSchedulingMode:
  """Class for managing CPU scheduling modes."""

  def __init__(
      self,
      num_cpus: int,
      utilization: float,
      hyperthreading_mode: HyperthreadingMode,
      cpu_info_file: str = "/proc/cpuinfo",
  ):

    # Number of CPUs to use.
    self.num_cpus = num_cpus

    # Number of CPUs required to reach the target utilization. Note the number
    # of required CPUs may be different from the number of CPUs we actually use
    # if the number of available CPUs is less than the required CPUs.
    self.required_cpus_num = num_cpus

    # List of available CPUs. We will use this list to select CPUs.
    self.available_cpus = list(Available())

    self.target_utilization = utilization
    self.hyperthreading_mode = hyperthreading_mode

    if (
        self.hyperthreading_mode == HyperthreadingMode.SKEWED
        or self.hyperthreading_mode == HyperthreadingMode.BALANCED
    ):
      self.num_cpus = self._GetRequiredVCPUs(self.required_cpus_num)
      self._UpdateTargetUtilization()

    # Collect CPU information from the cpuinfo file.
    self.cpu_info = CpuInfo(cpu_info_file, self.available_cpus)

  def _GetRequiredVCPUs(self, required_cpus_num: int) -> int:
    # Returns the number of vCPUs required to reach the target utilization.
    # We add some buffer vCPUs to account for the fact that it's hard to reach
    # 100% utilization and there are always some vCPUs that are not used.
    vcpus = math.ceil(required_cpus_num * self.target_utilization)
    vcpus += 3 if required_cpus_num % 2 else 2
    return min(len(self.available_cpus), vcpus)

  def _UpdateTargetUtilization(self):
    logging.info(
        "Updating target utilization to 1 because we want to use all the"
        " selected vCPUs."
    )
    self.target_utilization = 1

  def _GetCPUsWithDisabledSMT(self) -> list[int]:
    """Retrieves a list of CPUs with SMT disabled.

    This function selects one vCPU per physical CPU (pCPU) from both sockets
    to effectively disable SMT.

    Returns:
      A list of selected CPU IDs.
    """
    selected_cpus = []

    # Select one vCPU per pCPU from both sockets.
    # The utilization value stays the same as the one for the dynamic mode.

    for socket_id in range(self.cpu_info.GetSocketsCount()):
      for core_id in self.cpu_info.GetCoresForSocket(socket_id):
        vcpu_pairs = self.cpu_info.GetVCPUPairsForCore(socket_id, core_id)
        if vcpu_pairs:
          selected_cpus.append(vcpu_pairs[0])

    if self.num_cpus > len(selected_cpus):
      logging.warning(
          "Not enough vCPUs available when SMT is disabled. Asked for %d but "
          "only %d available and all of them will be used",
          self.num_cpus,
          len(selected_cpus),
      )
      return selected_cpus
    return selected_cpus[: self.num_cpus]

  def _GetCPUsWithSkewedScheduling(self) -> list[int]:
    """Retrieves a list of CPUs with skewed scheduling towards Socket0.

    This function prioritizes CPUs from Socket0 by selecting all its vCPUs
    first, and then selecting vCPUs from Socket1 only if more CPUs are needed.

    Returns:
      A list of selected CPU IDs with skewed scheduling.
    """
    selected_cpus = []
    for socket_id in range(self.cpu_info.GetSocketsCount()):
      for core_id in self.cpu_info.GetCoresForSocket(socket_id):
        vcpu_pairs = self.cpu_info.GetVCPUPairsForCore(socket_id, core_id)
        if vcpu_pairs:
          selected_cpus.extend(vcpu_pairs)
    return selected_cpus[: self.num_cpus]

  def _GetCPUsWithBalancedScheduling(self) -> list[int]:
    """Select CPUs from two sockets in an interleaved manner.

    We want to distribute workloads evenly across socket.

    Returns:
      A list of selected CPU IDs with balanced scheduling.
    """

    selected_cpus = []

    # Interleave vCPUs from both sockets
    core_id = 0
    socket_count = self.cpu_info.GetSocketsCount()

    while len(selected_cpus) < self.num_cpus:
      # Some core_ids may not be used.
      if self.cpu_info.IsUnusedCoreID(core_id):
        core_id += 1
        continue

      for socket_id in range(socket_count):
        vcpu_pairs = self.cpu_info.GetVCPUPairsForCore(socket_id, core_id)
        if vcpu_pairs:
          selected_cpus.extend(vcpu_pairs)
        if len(selected_cpus) >= self.num_cpus:
          return selected_cpus

      core_id += 1

    return selected_cpus

  def SelectCPURangeAndSetUtilization(self) -> tuple[list[int], float]:
    """Selects a range of CPUs and calculates the CPU utilization.

    This function selects a range of CPUs based on the provided CPU information,
    the desired number of CPUs, and the hyperthreading scheduling mode. It also
    calculates the CPU utilization value, which represents the fraction of the
    selected CPUs that will be used.

    Returns:
      A tuple containing:
        - A list of selected CPU IDs.
        - The CPU utilization value (float).

    Raises:
      ValueError: If the scheduling mode is invalid.
    """

    if self.hyperthreading_mode == HyperthreadingMode.DYNAMIC:
      logging.info("Enabling SMT. Dynamic scheduling.")
      return self.available_cpus[: self.num_cpus], self.target_utilization

    if self.hyperthreading_mode == HyperthreadingMode.DISABLE:
      cpus_list = self._GetCPUsWithDisabledSMT()
    elif self.hyperthreading_mode == HyperthreadingMode.SKEWED:
      logging.info("Enabling SMT. Prioritizing Socket0 and lower hyperthreads.")
      cpus_list = self._GetCPUsWithSkewedScheduling()
    elif self.hyperthreading_mode == HyperthreadingMode.BALANCED:
      logging.info(
          "Enabling SMT. Balancing workloads across sockets and hyperthreads."
      )
      cpus_list = self._GetCPUsWithBalancedScheduling()
    else:
      raise ValueError(f"Invalid scheduling mode: {self.hyperthreading_mode}")

    return sorted(cpus_list), self.target_utilization


def Available() -> set[int]:
  """Get available CPUs. Note this may be less than the machine CPU count."""
  return set(os.sched_getaffinity(os.getpid()))


def Utilization(cpus: list[int]) -> Tuple[float, dict[int, float], int]:
  """Get CPU utilization percentage per core and average across cores.

  Note that this blocks for 0.1 seconds.
  Args:
    cpus: list of CPU IDs to get utilization for.

  Raises:
    ValueError: if no CPUs are provided.
  Returns:
    Tuple of average utilization across cores, a dictionary of per-core
    utilization and the count of all busy cpus.
  """
  if not cpus:
    raise ValueError("No CPUs provided.")
  per_core_cpu_utilization = psutil.cpu_percent(interval=0.1, percpu=True)
  usable_utilization = {}
  for cpu_id in cpus:
    usable_utilization[cpu_id] = per_core_cpu_utilization[cpu_id]
  busy_cpus = len([val for val in usable_utilization.values() if val != 0])

  return (
      sum(usable_utilization.values()) / len(cpus),
      usable_utilization,
      busy_cpus,
  )


def GetCPUArch() -> str:
  """Returns the CPU architecture."""
  try:
    cpu_arch = subprocess.run(
        ["uname", "-m"], capture_output=True, text=True, check=True
    )
    return cpu_arch.stdout.strip()
  except subprocess.CalledProcessError:
    logging.warning("Could not determine machine architecture. Using x86.")
    return "x86_64"
