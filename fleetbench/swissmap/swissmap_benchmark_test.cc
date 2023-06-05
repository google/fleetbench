// Copyright 2022 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// This file defines the skeleton of generated benchmark files. It contains
// the includes, gunit benchmark code, and main entrypoint.

#include "fleetbench/swissmap/swissmap_benchmark.h"

#include "gtest/gtest.h"
#include "absl/container/flat_hash_set.h"

namespace fleetbench {

TEST(SwissmapBenchmarkTest, Density) {
  auto set1 = GenerateSet<absl::flat_hash_set<Value<4>, Hash, Eq>>(
      1 << 10, Density::kMin);
  EXPECT_NEAR(set1.load_factor(), 0.4375, 0.01);

  auto set2 = GenerateSet<absl::flat_hash_set<Value<4>, Hash, Eq>>(
      1 << 10, Density::kMax);
  EXPECT_NEAR(set2.load_factor(), 0.875, 0.01);
}

TEST(SwissmapBenchmarkTest, GenerateSets) {
  auto sets = GenerateSets<absl::flat_hash_set<Value<4>, Hash, Eq>>(
      1, 3, Density::kMin);
  EXPECT_EQ(sets.size(), 2);

  int num_elements = 0;
  for (auto s : sets) {
    EXPECT_GE(s.size(), 1);
    EXPECT_EQ(s.size(), ToVector(s).size());
    num_elements += s.size();
  }

  auto v = ToVectorRandomized(sets);
  EXPECT_EQ(v.size(), sets.size());
  EXPECT_EQ(Transpose(v).size(), num_elements);
}
}  // namespace fleetbench
