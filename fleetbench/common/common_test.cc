// Copyright 2023 The Fleetbench Authors
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

#include "fleetbench/common/common.h"

#include <fstream>
#include <ostream>
#include <string>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "absl/flags/flag.h"
#include "absl/strings/str_cat.h"

namespace fleetbench {

using ::testing::DoubleEq;
using ::testing::ElementsAre;
using ::testing::Pair;

TEST(ReadDistributionFileTest, Numbers) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test1.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "0:1.1,1:2.2,4:3.3" << std::endl;
    file.close();
  }
  auto result = ReadDistributionFile(path);
  EXPECT_THAT(result,
              ElementsAre(Pair(0, DoubleEq(1.1)), Pair(1, DoubleEq(2.2)),
                          Pair(4, DoubleEq(3.3))));
}

TEST(ReadMemDistributionFileTest, Numbers) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test1.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "0:1.1,1:2.2" << std::endl;
    file << "0:0.9,1:0.1" << std::endl;
    file << "1:0.7,64:0.3" << std::endl;
    file.close();
  }
  MemDistributionData result = ReadMemDistributionFile(path);
  EXPECT_THAT(result.size_distribution,
              ElementsAre(Pair(0, DoubleEq(1.1)), Pair(1, DoubleEq(2.2))));
  EXPECT_DOUBLE_EQ(result.overlap_probability, 0.1);
  EXPECT_THAT(result.alignment_distribution,
              ElementsAre(Pair(1, DoubleEq(0.7)), Pair(64, DoubleEq(0.3))));
}

TEST(ReadCsvTest, Numbers) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test1.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "1,1.2345,2.2345" << std::endl;
    file << "2,3.2345,4.2345" << std::endl;
    file.close();
  }
  auto result = ReadCsv(path, ',');
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0].size(), 3);
  EXPECT_EQ(result[0][1], "1.2345");
  EXPECT_EQ(result[1].size(), 3);
  EXPECT_EQ(result[1][2], "4.2345");
}

TEST(ReadCsvTest, Mixed) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test2.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "abcd-1" << std::endl;
    file << "efg-2" << std::endl;
    file.close();
  }
  auto result = ReadCsv(path, '-');
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0].size(), 2);
  EXPECT_EQ(result[0][0], "abcd");
  EXPECT_EQ(result[1].size(), 2);
  EXPECT_EQ(result[1][1], "2");
}

TEST(ConvertLineTest, Numbers) {
  std::vector<std::string> line = {"0:1.2345", "4:2.2345"};
  EXPECT_THAT(ConvertLine(line), ElementsAre(Pair(0, DoubleEq(1.2345)),
                                             Pair(4, DoubleEq(2.2345))));
}

TEST(RandomTest, Seed) {
  absl::SetFlag(&FLAGS_fixed_seed, true);
  absl::SetFlag(&FLAGS_seed, 1);

  int random1 = GetRNG()();
  Random::instance().Reset();
  int random2 = GetRNG()();
  EXPECT_EQ(random1, random2);
}

TEST(DeathTest, SeedFlags) {
  ASSERT_DEATH(
      {
        absl::SetFlag(&FLAGS_fixed_seed, false);
        absl::SetFlag(&FLAGS_seed, 1);
        GetRNG()();
      },
      "--seed requires --fixed_seed=true");
}

TEST(DeathTest, ConvertLineInvalidKey) {
  ASSERT_DEATH(ConvertLine({"a:1.2345", "1:2.3456"}), "Invalid key: a");
}

TEST(DeathTest, ConvertLineInvalidColumn) {
  ASSERT_DEATH(ConvertLine({"0:1.2345", "1:xyz"}), "Invalid column: xyz");
}

}  // namespace fleetbench
