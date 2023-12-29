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

#include "fleetbench/tcmalloc/empirical.h"

#include <algorithm>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "absl/flags/flag.h"
#include "absl/random/random.h"
#include "absl/strings/str_cat.h"

namespace fleetbench {
namespace tcmalloc {

namespace {

void* alloc(size_t s) { return ::operator new(s); }

const std::vector<EmpiricalData::Entry>& dummy() {
  static std::vector<EmpiricalData::Entry> e = {{8, 1000, 100 * 1000},
                                                {16, 1000, 1000},
                                                {64, 100, 1000},
                                                {64 * 1024, 10, 800}};

  return e;
}

MATCHER(EntrySizeEq, "have equal size") {
  return std::get<0>(arg).size == std::get<1>(arg).size;
}

std::vector<double> Normalize(const std::vector<double>& xs) {
  double total = 0;
  for (double x : xs) {
    total += x;
  }
  double inv = 1 / total;
  std::vector<double> ret;
  for (double x : xs) {
    ret.push_back(x * inv);
  }

  return ret;
}

std::vector<double> GetRates(const std::vector<EmpiricalData::Entry>& es) {
  std::vector<double> ret;
  for (auto e : es) {
    ret.push_back(e.alloc_rate);
  }

  return ret;
}

std::vector<double> GetCounts(const std::vector<EmpiricalData::Entry>& es) {
  std::vector<double> ret;
  for (auto e : es) {
    ret.push_back(e.num_live);
  }

  return ret;
}

MATCHER_P(DoubleRelEq, err,
          absl::StrCat(negation ? "aren't" : "are", " within ",
                       absl::SixDigits(err * 100), "% of each other")) {
  double a = std::get<0>(arg);
  double b = std::get<1>(arg);
  return (std::max(a / b, b / a) - 1) < err;
}

TEST(EmpiricalRecordAndReplay, Basic) {
  constexpr uint32_t kBufferSize = 100000;
  constexpr size_t kSize = 128 * 1024 * 1024;
  auto const& expected = dummy();
  absl::BitGen rng;
  EmpiricalData data(absl::Uniform<uint32_t>(rng), expected, kSize, alloc,
                     sized_delete);
  size_t total_allocations = data.total_num_allocated();
  size_t total_bytes_allocated = data.total_bytes_allocated();

  for (int j = 0; j < kBufferSize; ++j) {
    data.RecordNext();
  }

  data.RestoreSnapshot();
  data.BuildDeathObjectPointers();

  // We need one warmup iteration so we can compute the delta allocations and
  // bytes we should see from each time through the trace.
  for (int j = 0; j < kBufferSize; ++j) {
    data.ReplayNext();
  }

  size_t delta_allocations = data.total_num_allocated() - total_allocations;
  size_t delta_bytes_allocated =
      data.total_bytes_allocated() - total_bytes_allocated;

  for (int i = 0; i < 10; ++i) {
    EXPECT_EQ(delta_allocations,
              data.total_num_allocated() - total_allocations);
    EXPECT_EQ(delta_bytes_allocated,
              data.total_bytes_allocated() - total_bytes_allocated);

    // Restart the trace before updating total_* so we don't capture the
    // "repair" operations.
    data.RestartTraceIfNecessary();

    total_allocations = data.total_num_allocated();
    total_bytes_allocated = data.total_bytes_allocated();

    for (int j = 0; j < kBufferSize; ++j) {
      data.ReplayNext();
    }
  }
}

TEST(GetEmpiricalDataEntries, EmpiricalDataEntry) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test1.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "1,1.1,2.2" << '\n';
    file << "2,3.3,4.4" << '\n';
    file.close();
  }
  auto result = GetEmpiricalDataEntries(path);
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0].size, 1);
  EXPECT_EQ(result[0].alloc_rate, 1.1);
  EXPECT_EQ(result[0].num_live, 2.2);

  EXPECT_EQ(result[1].size, 2);
  EXPECT_EQ(result[1].alloc_rate, 3.3);
  EXPECT_EQ(result[1].num_live, 4.4);
}

TEST(GetHeapSizes, HeapSizeEntry) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test2.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "a,10" << '\n';
    file << "ab,20" << '\n';
    file << "abc,30" << '\n';
    file.close();
  }
  auto result = GetHeapSizes(path);
  EXPECT_THAT(result, testing::UnorderedElementsAre(testing::Pair("a", 10),
                                                    testing::Pair("ab", 20),
                                                    testing::Pair("abc", 30)));
}

}  // namespace
}  // namespace tcmalloc
}  // namespace fleetbench
