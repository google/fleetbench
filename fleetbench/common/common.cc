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

#include <algorithm>
#include <filesystem>  // NOLINT
#include <fstream>
#include <iostream>
#include <optional>
#include <random>
#include <string>
#include <utility>
#include <vector>

#include "tools/cpp/runfiles/runfiles.h"
#include "absl/container/btree_map.h"
#include "absl/flags/flag.h"
#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/numbers.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"

#include "absl/log/log.h"
using bazel::tools::cpp::runfiles::Runfiles;

ABSL_FLAG(bool, fixed_seed, true,
          "Use a fixed seed for random number generation. The seed can be "
          "specified with the --seed flag; the default is 0. If "
          "--fixed_seed=false, random seeds are used.");
ABSL_FLAG(std::optional<int>, seed, {},
          "Seed for random number generation. Requires --fixed_seed=true.");

ABSL_FLAG(std::optional<int>, L1_data_size, {},
          "Size of the L1 data cache in bytes. Determined automatically if the "
          "flag is not specified.");
ABSL_FLAG(std::optional<int>, L2_size, {},
          "Size of the L2 cache in bytes. Determined automatically if the flag "
          "is not specified.");
ABSL_FLAG(std::optional<int>, L3_size, {},
          "Size of the L3 cache in bytes. Determined automatically if the flag "
          "is not specified.");

namespace fleetbench {

using CacheInfo = benchmark::CPUInfo::CacheInfo;

Random& Random::instance() {
  static auto* instance = [] {
    if (absl::GetFlag(FLAGS_seed).has_value()) {
      CHECK(absl::GetFlag(FLAGS_fixed_seed))
          << "--seed requires --fixed_seed=true";
    }
    return new Random(absl::GetFlag(FLAGS_fixed_seed),
                      absl::GetFlag(FLAGS_seed).value_or(0));
  }();
  return *instance;
}

Random::Random(bool fixed_seed, int seed)
    : fixed_seed_(fixed_seed), seed_(seed) {
  if (fixed_seed_) {
    rng_.seed(seed_);
  } else {
    std::random_device rd;
    rng_.seed(rd());
  }
}

void Random::Reset() {
  if (fixed_seed_) {
    rng_.seed(seed_);
  }
}

std::vector<std::filesystem::path> GetMatchingFiles(absl::string_view dir,
                                                    absl::string_view prefix) {
  std::vector<std::filesystem::path> files;
  for (const auto& entry : std::filesystem::directory_iterator(dir)) {
    if (absl::StartsWith(entry.path().filename().string(), prefix)) {
      files.push_back(entry.path());
    }
  }
  std::sort(files.begin(), files.end());
  return files;
}

absl::btree_map<int, double> ReadDistributionFile(std::filesystem::path file) {
  return ConvertLine(ReadCsv(file)[0]);
}

MemDistributionData ReadMemDistributionFile(std::filesystem::path file) {
  std::vector<std::vector<std::string>> lines = ReadCsv(file);
  CHECK_GE(lines.size(), 3) << "Invalid distribution file";
  double overlap_probability = 0.0;
  absl::btree_map<int, double> overlap_line = ConvertLine(lines[1]);
  auto it = overlap_line.find(1);
  if (it != overlap_line.end()) {
    overlap_probability = it->second;
  }
  return MemDistributionData{.size_distribution = ConvertLine(lines[0]),
                             .overlap_probability = overlap_probability,
                             .alignment_distribution = ConvertLine(lines[2])};
}

std::vector<std::vector<std::string>> ReadCsv(std::filesystem::path file,
                                              char delimiter) {
  std::vector<std::vector<std::string>> lines;
  std::string line;
  std::fstream f(file, std::ios_base::in);
  while (std::getline(f, line)) {
    lines.push_back(absl::StrSplit(line, delimiter));
  }
  return lines;
}

absl::btree_map<int, double> ConvertLine(const std::vector<std::string>& line) {
  absl::btree_map<int, double> result;
  for (const std::string& column : line) {
    std::pair<absl::string_view, absl::string_view> split =
        absl::StrSplit(column, ':');
    int key;
    CHECK(absl::SimpleAtoi(split.first, &key))
        << "Invalid key: " << split.first << "\n";
    double value;
    CHECK(absl::SimpleAtod(split.second, &value))
        << "Invalid column: " << split.second << "\n";
    result[key] = value;
  }
  return result;
}

std::string GetFleetbenchRuntimePath(const absl::string_view path) {
  //github.com/bazelbuild/bazel/blob/master/tools/cpp/runfiles/runfiles_src.h
  std::string error;
  const char* program_path = std::getenv("FLEETBENCH_PROGRAM_PATH");
  std::unique_ptr<Runfiles> runfiles(Runfiles::Create(program_path, &error));
  if (runfiles == nullptr)
    LOG(FATAL) << "Can't find runfile directory: " << error;
  return runfiles->Rlocation(
      absl::StrCat("com_google_fleetbench/fleetbench/", path));
}

int GetCacheSize(int cache_level, absl::string_view cache_type) {
  if (absl::GetFlag(FLAGS_L1_data_size).has_value() && cache_level == 1 &&
      cache_type == "Data") {
    return absl::GetFlag(FLAGS_L1_data_size).value();
  }
  if (absl::GetFlag(FLAGS_L2_size).has_value() && cache_level == 2) {
    return absl::GetFlag(FLAGS_L2_size).value();
  }
  if (absl::GetFlag(FLAGS_L3_size).has_value() && cache_level == 3) {
    return absl::GetFlag(FLAGS_L3_size).value();
  }

  for (const CacheInfo& ci : benchmark::CPUInfo::Get().caches) {
    if (ci.level == cache_level) {
      if ((cache_level == 1 && ci.type == cache_type) || (cache_level > 1))
        return ci.size;
    }
  }

#if defined(__aarch64__)
  LOG(WARNING) << "Cache size could not be detected. You can use the "
                  "--L1_data_size, --L2_size, and --L3_size flags to specify "
                  "the cache sizes (in bytes) manually. Falling back to "
                  "hardcoded defaults.";
  switch (cache_level) {
    case 1:
      return 64 * 1024;
    case 2:
      return 256 * 1024;
    case 3:
      return 32 * 1024 * 1024;
  }
#endif
  LOG(FATAL) << "Cache size could not be detected. You can use the "
                "--L1_data_size, --L2_size, and --L3_size flags to specify "
                "the cache sizes (in bytes) manually.";
}

}  // namespace fleetbench
