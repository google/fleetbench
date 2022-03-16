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
#ifndef THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_
#define THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_

#include "absl/random/random.h"

namespace fleetbench {

using ::absl::InsecureBitGen;

inline InsecureBitGen MakeRNG() {
  std::seed_seq seed;  // Stable across binaries, distinct across commits.
  return InsecureBitGen(seed);
}

inline InsecureBitGen& GetRNG() {
  static auto* rng = new auto(MakeRNG());
  return *rng;
}

}  // namespace fleetbench
#endif  // THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_
