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

#include "gtest/gtest.h"
#include "absl/flags/flag.h"
#include "absl/strings/str_cat.h"

namespace fleetbench {

TEST(ReadDistributionFileTest, Numbers) {
  std::string path =
      absl::StrCat(getenv("TEST_TMPDIR"), "/test1.csv");

  std::ofstream file(path, std::ofstream::out);
  if (file.is_open()) {
    file << "1.1,2.2,3.3" << std::endl;
    file.close();
  }
  auto result = ReadDistributionFile(path);
  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result[0], 1.1);
  EXPECT_EQ(result[1], 2.2);
  EXPECT_EQ(result[2], 3.3);
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

}  // namespace fleetbench
