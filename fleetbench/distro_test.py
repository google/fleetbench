# Copyright 2023 The Fleetbench Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from absl.testing import absltest
import brotli
import numpy as np
import pandas as pd
import psutil
import zstandard

import snappy


class DistroTest(absltest.TestCase):
  """Sanity check that we can import Python libraries."""

  def testPsUtil(self):
    self.assertGreater(psutil.cpu_count(), 0)

  def testPandas(self):
    self.assertTrue(pd.Series([1, 2, 3]).any())

  def testNumpy(self):
    self.assertTrue(np.any(np.array([1, 2, 3])))

  def testZstd(self):
    compressed_bytes = zstandard.compress(b"12345678", level=0)
    self.assertEqual(zstandard.decompress(compressed_bytes), b"12345678")

  def testSnappy(self):
    compressed_bytes = snappy.compress(b"12345678")
    self.assertEqual(snappy.uncompress(compressed_bytes), b"12345678")

  def testBrotli(self):
    compressed_bytes = brotli.compress(b"12345678")
    self.assertEqual(brotli.decompress(compressed_bytes), b"12345678")


if __name__ == "__main__":
  absltest.main()
