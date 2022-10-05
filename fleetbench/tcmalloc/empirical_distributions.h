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

#ifndef THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_DISTRIBUTIONS_H_
#define THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_DISTRIBUTIONS_H_

#include "absl/types/span.h"
#include "fleetbench/tcmalloc/empirical.h"

namespace fleetbench {
namespace tcmalloc {

absl::Span<const EmpiricalData::Entry> Beta();
absl::Span<const EmpiricalData::Entry> Bravo();
absl::Span<const EmpiricalData::Entry> Charlie();
absl::Span<const EmpiricalData::Entry> Delta();
absl::Span<const EmpiricalData::Entry> Echo();
absl::Span<const EmpiricalData::Entry> Foxtrot();
absl::Span<const EmpiricalData::Entry> Merced();
absl::Span<const EmpiricalData::Entry> Sierra();
absl::Span<const EmpiricalData::Entry> Sigma();
absl::Span<const EmpiricalData::Entry> Uniform();

}  // namespace tcmalloc
}  // namespace fleetbench
#endif  // THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_DISTRIBUTIONS_H_
