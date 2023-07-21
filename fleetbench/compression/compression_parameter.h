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

#ifndef THIRD_PARTY_FLEETBENCH_COMPRESSION_COMPRESSION_PARAMETER_H_
#define THIRD_PARTY_FLEETBENCH_COMPRESSION_COMPRESSION_PARAMETER_H_
#include <string>
#include <vector>

#include "absl/container/flat_hash_map.h"

namespace fleetbench {
namespace compression {

// The function reads `compression_parameters/compression_levels.csv` file. Each
// entry in the file is in the format "$binary,1,2,3,..." indicating the binary
// and its corresponding compression levels. The function returns a map where
// the binary is the key, and the associated compression levels vector as the
// value.
absl::flat_hash_map<std::string,
                    absl::flat_hash_map<std::string, std::vector<int64_t> > >
GetCompressionLevelsMap();

}  // namespace compression
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_COMPRESSION_COMPRESSION_PARAMETER_H_
