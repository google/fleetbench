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
#ifndef THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_HEAP_SIZE_H_
#define THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_HEAP_SIZE_H_

#include <cstdint>
namespace fleetbench {
namespace tcmalloc {
enum class DistributionProfile {
  kBeta = 0,
  kBravo,
  kCharlie,
  kDelta,
  kEcho,
  kFoxtrot,
  kMerced,
  kSierra,
  kSigma,
  kUniform,
};

// Total size of base heap.
uint64_t ProfileConstant(DistributionProfile profile);

}  // namespace tcmalloc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_HEAP_SIZE_H_
