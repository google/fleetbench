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

#ifndef THIRD_PARTY_FLEETBENCH_MEM_MEMORY_SIZE_DISTRIBUTIONS_H_
#define THIRD_PARTY_FLEETBENCH_MEM_MEMORY_SIZE_DISTRIBUTIONS_H_

#include "absl/strings/string_view.h"
#include "absl/types/span.h"

namespace fleetbench {
namespace libc {

static constexpr double MemcpyGoogleA[] = {
#include "distributions/MemcpyGoogleA.csv"
};

static constexpr double MemcpyGoogleB[] = {
#include "distributions/MemcpyGoogleB.csv"
};

// Represents a probability distribution for the size argument of a memory
// operation.
struct SizeDistribution {
  absl::string_view name;  // The name of the distribution.
  absl::Span<const double>
      distributions;  // Size indexed array of probabilities.
};

// Returns a list of SizeDistribution for each memory operation.
absl::Span<const SizeDistribution> GetMemcpySizeDistributions();
}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_MEMORY_SIZE_DISTRIBUTIONS_H_
