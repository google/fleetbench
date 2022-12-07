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

static constexpr double MemsetGoogleA[] = {
#include "distributions/MemsetGoogleA.csv"
};

static constexpr double MemsetGoogleB[] = {
#include "distributions/MemsetGoogleB.csv"
};

static constexpr double MemsetGoogleD[] = {
#include "distributions/MemsetGoogleD.csv"
};

static constexpr double MemsetGoogleQ[] = {
#include "distributions/MemsetGoogleQ.csv"
};

static constexpr double MemsetGoogleL[] = {
#include "distributions/MemsetGoogleL.csv"
};

static constexpr double MemsetGoogleM[] = {
#include "distributions/MemsetGoogleM.csv"
};

static constexpr double MemsetGoogleS[] = {
#include "distributions/MemsetGoogleS.csv"
};

static constexpr double MemsetGoogleW[] = {
#include "distributions/MemsetGoogleW.csv"
};

static constexpr double MemsetGoogleU[] = {
#include "distributions/MemsetGoogleU.csv"
};

static constexpr double MemcmpGoogleA[] = {
#include "distributions/MemcmpGoogleA.csv"
};

static constexpr double MemcmpGoogleB[] = {
#include "distributions/MemcmpGoogleB.csv"
};

static constexpr double MemcmpGoogleD[] = {
#include "distributions/MemcmpGoogleD.csv"
};

static constexpr double MemcmpGoogleQ[] = {
#include "distributions/MemcmpGoogleQ.csv"
};

static constexpr double MemcmpGoogleL[] = {
#include "distributions/MemcmpGoogleL.csv"
};

static constexpr double MemcmpGoogleM[] = {
#include "distributions/MemcmpGoogleM.csv"
};

static constexpr double MemcmpGoogleS[] = {
#include "distributions/MemcmpGoogleS.csv"
};

static constexpr double MemcmpGoogleW[] = {
#include "distributions/MemcmpGoogleW.csv"
};

static constexpr double MemcmpGoogleU[] = {
#include "distributions/MemcmpGoogleU.csv"
};

static constexpr double BcmpGoogleA[] = {
#include "distributions/BcmpGoogleA.csv"
};

static constexpr double BcmpGoogleB[] = {
#include "distributions/BcmpGoogleB.csv"
};

static constexpr double BcmpGoogleD[] = {
#include "distributions/BcmpGoogleD.csv"
};

static constexpr double BcmpGoogleQ[] = {
#include "distributions/BcmpGoogleQ.csv"
};

static constexpr double BcmpGoogleL[] = {
#include "distributions/BcmpGoogleL.csv"
};

static constexpr double BcmpGoogleM[] = {
#include "distributions/BcmpGoogleM.csv"
};

static constexpr double BcmpGoogleS[] = {
#include "distributions/BcmpGoogleS.csv"
};

static constexpr double BcmpGoogleW[] = {
#include "distributions/BcmpGoogleW.csv"
};

static constexpr double BcmpGoogleU[] = {
#include "distributions/BcmpGoogleU.csv"
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
absl::Span<const SizeDistribution> GetMemsetSizeDistributions();
absl::Span<const SizeDistribution> GetMemcmpSizeDistributions();
absl::Span<const SizeDistribution> GetBcmpSizeDistributions();
}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_MEMORY_SIZE_DISTRIBUTIONS_H_
