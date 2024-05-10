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

import os
import queue
import threading
from typing import Optional

from absl import logging

from fleetbench.parallel import result
from fleetbench.parallel import run as parallel_run


class Worker(threading.Thread):
  """Per-CPU worker for running benchmarks.

  Attributes:
    command_q: Queue of commands to execute. An item in the queue indicates that
      the worker is busy and should not be assigned more work.
    result_q: Queue of results from completed runs.
    cpu: The CPU number this worker is assigned to.
    affinity: If true, bind this thread to the assigned CPU.
  """

  def __init__(self, cpu: int, affinity: bool):
    super().__init__()
    self._command_q: queue.Queue[Optional[parallel_run.Run]] = queue.Queue(
        maxsize=1
    )
    self._result_q: queue.Queue[Optional[result.Result]] = queue.Queue()
    self._cpu = cpu
    self._affinity = affinity

  def TryAddRun(self, run: parallel_run.Run) -> bool:
    """Tries to add a run to the worker's queue.

    Args:
      run: The run to add to the queue.

    Returns:
      True if successful, False if the queue is full.
    """
    try:
      self._command_q.put_nowait(run)
      return True
    except queue.Full:
      return False

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
      os.sched_setaffinity(os.getpid(), [self._cpu])
    logging.debug("Worker %d running", self._cpu)

    while True:
      run_object = self._command_q.get()
      if run_object is None:
        logging.debug("Worker %d shutting down", self._cpu)
        self._result_q.put(None)
        break
      self._result_q.put(run_object.Execute())

    logging.debug("Worker %d exiting", self._cpu)
