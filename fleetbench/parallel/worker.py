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

"""Worker for parallel benchmark."""

import dataclasses
import os
import queue
import threading
from typing import Optional, Self

from absl import logging

from fleetbench.parallel import result
from fleetbench.parallel import run as parallel_run


@dataclasses.dataclass
class RunAndExtraWorkers:
  """Groups a benchmark run with any additional workers it needs."""

  run: parallel_run.Run
  extra_workers: list["Worker"]


class Worker(threading.Thread):
  """Per-CPU worker for running benchmarks.

  Attributes:
    command_q: Queue of commands to execute. An item in the queue indicates that
      the worker is busy and should not be assigned more work.
    result_q: Queue of results from completed runs.
    cpu: The CPU number this worker is assigned to.
    affinity: If true, bind this thread to the assigned CPU.
    lock: Lock to temporarily block this worker while its CPU is being used by
      another worker that requires more than one CPU.
    in_use_as_extra_worker: Whether this worker is currently being used as an
      extra worker.
  """

  def __init__(self, cpu: int, affinity: bool):
    super().__init__()
    self._command_q: queue.Queue[Optional[RunAndExtraWorkers]] = queue.Queue(
        maxsize=1
    )
    self._result_q: queue.Queue[Optional[result.Result]] = queue.Queue()
    self.cpu = cpu
    self._affinity = affinity
    self._lock = threading.Lock()
    self._in_use_as_extra_worker = False

  def TryAddRun(self, run: parallel_run.Run, extra_workers: list[Self]) -> bool:
    """Tries to add a run to the worker's queue.

    Args:
      run: The run to add to the queue.
      extra_workers: The extra workers to add to the queue.

    Returns:
      True if successful, False if the queue is full.
    """
    if self._in_use_as_extra_worker:
      return False
    try:
      self._command_q.put_nowait(RunAndExtraWorkers(run, extra_workers))
      return True
    except queue.Full:
      return False

  def TryBlock(self) -> bool:
    """Tries to block the worker so that its CPU can be used by another worker.

    Returns:
      True if successful, False if the worker is busy.
    """
    lock_acquired = self._lock.acquire(blocking=False)
    if lock_acquired:
      self._in_use_as_extra_worker = True
    return lock_acquired

  def Unblock(self) -> None:
    """Resume the worker's normal operation."""
    self._in_use_as_extra_worker = False
    self._lock.release()

  def StopAndGetResults(self) -> list[result.Result]:
    """Shut down the worker loop, then wait for results."""
    self._command_q.put(None)
    results = []
    while True:
      r = self._result_q.get()
      if r is None:
        break
      results.append(r)
    return results

  def TryGetResults(self) -> list[result.Result]:
    """Obtain any available results without blocking."""
    results = []
    while True:
      try:
        r = self._result_q.get_nowait()
        if r is None:
          break
        results.append(r)
      except queue.Empty:
        break
    return results

  def run(self):
    """Called when the thread is started. Loops executing commands."""
    if self._affinity:
      os.sched_setaffinity(threading.get_native_id(), [self.cpu])
    logging.debug("Worker %d running", self.cpu)

    while True:
      task = self._command_q.get()
      if task is None:
        logging.debug("Worker %d shutting down", self.cpu)
        self._result_q.put(None)
        break
      with self._lock:
        extra_workers = task.extra_workers
        if extra_workers and self._affinity:
          os.sched_setaffinity(
              threading.get_native_id(),
              [self.cpu] + [extra_worker.cpu for extra_worker in extra_workers],
          )
        self._result_q.put(task.run.Execute())
        if extra_workers and self._affinity:
          os.sched_setaffinity(threading.get_native_id(), [self.cpu])
          for extra_worker in extra_workers:
            extra_worker.Unblock()

    logging.debug("Worker %d exiting", self.cpu)
