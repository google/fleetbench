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

#include "fleetbench/tcmalloc/empirical_heap_size.h"

#include <map>

#include "absl/log/check.h"

namespace fleetbench {
namespace tcmalloc {

uint64_t ProfileConstant(DistributionProfile profile) {
  static const auto* base_heap_consts = []() {
    return new std::map<DistributionProfile, uint64_t>{
        {DistributionProfile::kBeta, 93ul << 20},
        {DistributionProfile::kBravo, 29615ul << 20},
        {DistributionProfile::kCharlie, 11967ul << 20},
        {DistributionProfile::kDelta, 3536ul << 20},
        {DistributionProfile::kEcho, 1150ul << 20},
        {DistributionProfile::kFoxtrot, 6161ul << 20},
        {DistributionProfile::kMerced, 6811ul << 20},
        {DistributionProfile::kSierra, 63015ul << 20},
        {DistributionProfile::kSigma, 8797ul << 20},
        {DistributionProfile::kUniform, 15472ul << 20}};
  }();
  auto i = base_heap_consts->find(profile);
  CHECK(i != base_heap_consts->end());
  return i->second;
}

}  // namespace tcmalloc
}  // namespace fleetbench
