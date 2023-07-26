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

#include <random>

#include "absl/flags/flag.h"

ABSL_FLAG(bool, fixed_seed, true,
          "Use a fixed seed for random number generation.");

namespace fleetbench {

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

}  // namespace fleetbench
