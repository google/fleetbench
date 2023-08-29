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

#include "fleetbench/compression/compression_parameter.h"

#include <fstream>
#include <ios>
#include <string>
#include <string_view>
#include <vector>

#include "absl/container/flat_hash_map.h"
#include "absl/log/check.h"
#include "absl/strings/numbers.h"
#include "absl/strings/str_split.h"
#include "fleetbench/common/common.h"

namespace fleetbench {
namespace compression {
absl::flat_hash_map<std::string,
                    absl::flat_hash_map<std::string, std::vector<int64_t> > >
GetCompressionLevelsMap() {
  absl::flat_hash_map<std::string,
                      absl::flat_hash_map<std::string, std::vector<int64_t> > >
      compression_levels_map;

  std::string path = GetFleetbenchRuntimePath(
      "compression/compression_parameters/compression_level_external.csv");

  std::string line;
  std::fstream file(path, std::ios_base::in);
  while (std::getline(file, line)) {
    // Finds binary
    std::vector<std::string> columns = absl::StrSplit(line, ',');
    std::string algorithm = columns[0];
    std::string binary = columns[1];
    std::vector<int64_t> levels(columns.size() - 2);
    for (size_t i = 2; i < columns.size(); i++) {
      QCHECK(absl::SimpleAtoi(columns[i], &levels[i - 2]));
    }
    compression_levels_map[algorithm][binary] = levels;
  }

  return compression_levels_map;
}
}  // namespace compression
}  // namespace fleetbench
