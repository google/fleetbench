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
#include <sstream>
#include <string>
#include <vector>

#include "tools/cpp/runfiles/runfiles.h"
#include "absl/flags/flag.h"
#include "absl/strings/match.h"
#include "absl/strings/numbers.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"

#include "absl/log/log.h"
using bazel::tools::cpp::runfiles::Runfiles;

ABSL_FLAG(bool, fixed_seed, true,
          "Use a fixed seed for random number generation.");

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
  static auto* instance = new Random(absl::GetFlag(FLAGS_fixed_seed));
  return *instance;
}

Random::Random(bool fixed_seed) : fixed_seed_(fixed_seed) {
  if (fixed_seed_) {
    rng_.seed(0);
  } else {
    std::random_device rd;
    rng_.seed(rd());
  }
}

void Random::Reset() {
  if (fixed_seed_) {
    rng_.seed(0);
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

std::vector<double> ReadDistributionFile(std::filesystem::path file) {
  std::vector<double> distribution;
  std::string column;
  std::fstream f(file, std::ios_base::in);
  while (std::getline(f, column, ',')) {
    double d = 0.0;
    if (!absl::SimpleAtod(column, &d)) {
      std::cerr << "Invalid column: " << column << "\n";
    }
    distribution.push_back(d);
  }
  return distribution;
}

DistributionOverlapProbabilityPair ReadDistributionFileWithOverlapProbability(
    std::filesystem::path file) {
  std::vector<double> columns = ReadDistributionFile(file);
  double overlap_probability = columns.back();
  columns.pop_back();
  return DistributionOverlapProbabilityPair{columns, overlap_probability};
}

std::vector<std::vector<std::string>> ReadCsv(std::filesystem::path file,
                                              char delimiter) {
  std::vector<std::vector<std::string>> lines;
  std::string line;

  std::fstream f(file, std::ios_base::in);
  while (std::getline(f, line)) {
    std::stringstream linestream(line);

    std::string substring;
    std::vector<std::string> substrings{};
    while (std::getline(linestream, substring, delimiter)) {
      substrings.push_back(substring);
    }
    lines.push_back(substrings);
  }
  return lines;
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
  return -1;
}

}  // namespace fleetbench
