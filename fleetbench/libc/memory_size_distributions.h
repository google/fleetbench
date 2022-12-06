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

static constexpr double MemcpyGoogleD[] = {
#include "distributions/MemcpyGoogleD.csv"
};

static constexpr double MemcpyGoogleQ[] = {
#include "distributions/MemcpyGoogleQ.csv"
};

static constexpr double MemcpyGoogleL[] = {
#include "distributions/MemcpyGoogleL.csv"
};

static constexpr double MemcpyGoogleM[] = {
#include "distributions/MemcpyGoogleM.csv"
};

static constexpr double MemcpyGoogleS[] = {
#include "distributions/MemcpyGoogleS.csv"
};

static constexpr double MemcpyGoogleW[] = {
#include "distributions/MemcpyGoogleW.csv"
};

static constexpr double MemcpyGoogleU[] = {
#include "distributions/MemcpyGoogleU.csv"
};

static constexpr double MemmoveGoogleA[] = {
#include "distributions/MemmoveGoogleA.csv"
};

static constexpr double MemmoveGoogleB[] = {
#include "distributions/MemmoveGoogleB.csv"
};

static constexpr double MemmoveGoogleD[] = {
#include "distributions/MemmoveGoogleD.csv"
};

static constexpr double MemmoveGoogleQ[] = {
#include "distributions/MemmoveGoogleQ.csv"
};

static constexpr double MemmoveGoogleL[] = {
#include "distributions/MemmoveGoogleL.csv"
};

static constexpr double MemmoveGoogleM[] = {
#include "distributions/MemmoveGoogleM.csv"
};

static constexpr double MemmoveGoogleS[] = {
#include "distributions/MemmoveGoogleS.csv"
};

static constexpr double MemmoveGoogleW[] = {
#include "distributions/MemmoveGoogleW.csv"
};

static constexpr double MemmoveGoogleU[] = {
#include "distributions/MemmoveGoogleU.csv"
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
absl::Span<const SizeDistribution> GetMemmoveSizeDistributions();

}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_MEMORY_SIZE_DISTRIBUTIONS_H_
