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

import os
from typing import Tuple

import psutil


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
    raise ValueError('No CPUs provided.')
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
