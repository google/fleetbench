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

#include "fleetbench/tcmalloc/empirical.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

#include "absl/container/flat_hash_map.h"
#include "absl/functional/function_ref.h"
#include "absl/log/check.h"
#include "absl/random/discrete_distribution.h"
#include "absl/random/uniform_int_distribution.h"
#include "absl/random/uniform_real_distribution.h"
#include "absl/strings/numbers.h"
#include "absl/strings/string_view.h"
#include "absl/types/span.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"

// Implementations of functions.
namespace fleetbench {
namespace tcmalloc {

namespace {

// Simulate using the memory by issuing a store and a load to the address.  This
// is consistent with using the actually malloc'd/new'd memory.  If the memory
// were never written to or read, we could simply never make the allocation.
//
// This is an artificial access pattern, but it produces results that show that
// the prefetch in TCMalloc's allocation path
// (https://www.usenix.org/conference/osdi21/presentation/hunter)
// is worth having, which is consistent with experience from performance
// sensitive macro benchmarks.
//
// If this memory is never accessed at all, this microbenchmark would be
// "improved" by removing the prefetch, even though doing so would regress
// application performance in more realistic contexts.
inline void TouchAllocated(void* allocated) {
  uint8_t* access_ptr = static_cast<uint8_t*>(allocated);
  *access_ptr = 0;
  // Prevent the compiler from register optimizing the load by telling it that
  // access_ptr might change
  benchmark::DoNotOptimize(access_ptr);
  auto byte = *(access_ptr);
  // Prevent the compiler from removing the load since the result is unused
  benchmark::DoNotOptimize(byte);
}

}  // namespace

static absl::discrete_distribution<size_t> BirthRateDistribution(
    const absl::Span<const EmpiricalData::Entry> weights) {
  std::vector<double> v;
  v.reserve(weights.size());
  for (auto w : weights) {
    v.push_back(w.alloc_rate);
  }

  return absl::discrete_distribution<size_t>(v.begin(), v.end());
}

EmpiricalData::EmpiricalData(size_t seed, const absl::Span<const Entry> weights,
                             size_t total_mem,
                             absl::FunctionRef<void*(size_t)> alloc,
                             absl::FunctionRef<void(void*, size_t)> dealloc)
    : rng_(seed),
      alloc_(alloc),
      dealloc_(dealloc),
      total_num_allocated_(0),
      total_bytes_allocated_(0),
      birth_sampler_(BirthRateDistribution(weights)),
      total_birth_rate_(0),
      death_sampler_(weights.size()),
      num_allocated_recorded_(0),
      bytes_allocated_recorded_(0) {
  // First, compute average live count for each size in a heap of size
  // <total_mem>.
  double total = 0;
  for (const auto& w : weights) {
    total += w.num_live * w.size;
  }
  const double scale = total_mem / total;
  std::vector<double> avg_counts;
  // now sum(w.num_live * scale * w.size) = total_mem as desired.
  for (const auto& w : weights) {
    const double count = w.num_live * scale;
    avg_counts.push_back(count);
  }

  // Little's Law says that avg_count = birth rate * (average lifespan).
  // We want birth rates to match the input weights (any absolute rate will do,
  // we have one gauge parameter which is the rate virtual time passes:
  // so we can use the absolute rates given without normalization.
  // We just then have to pick lifespans to match the desired avg_count.
  for (int i = 0; i < weights.size(); ++i) {
    const double avg_count = avg_counts[i];
    const Entry& w = weights[i];
    total_birth_rate_ += w.alloc_rate;
    const double lifespan = avg_count / w.alloc_rate;
    const double death_rate = 1 / lifespan;
    state_.push_back({w.size, death_rate, {}});
    state_.back().objs.reserve(avg_count * 2);
  }

  // Now, we generate the initial sample. We have to sample from the *live*
  // distribution, not the *allocation* one, so we can't use the birth sampler;
  // make a new one from the live counts.  (We could run the full birth/death
  // loop until we made it up to size but that's much slower.)
  absl::discrete_distribution<int> live_dist(avg_counts.begin(),
                                             avg_counts.end());

  size_t usage = 0;
  while (usage < total_mem) {
    int i = live_dist(rng_);
    DoBirth(i);
    usage += state_[i].size;
  }

  SnapshotLiveObjects();

  for (auto& s : state_) {
    for (size_t i = 0; i < s.objs.size(); ++i) {
      s.objs_indices_after_recording.push_back({.born = false, .index = i});
    }
  }
}

EmpiricalData::~EmpiricalData() {
  for (auto& s : state_) {
    for (auto p : s.objs) {
      dealloc_(p, s.size);
    }
  }
}

void* EmpiricalData::DoBirth(const size_t i) {
  SizeState& s = state_[i];
  // We have an extra live object, so the overall death rate goes up.
  death_sampler_.AdjustWeight(i, s.death_rate);
  const size_t size = s.size;
  total_num_allocated_++;
  total_bytes_allocated_ += size;
  void* p = alloc_(size);
  s.objs.push_back(p);
  return p;
}

void EmpiricalData::DoDeath(const size_t i) {
  SizeState& s = state_[i];
  CHECK(!s.objs.empty());
  const int obj =
      absl::uniform_int_distribution<int>(0, s.objs.size() - 1)(rng_);
  death_sampler_.AdjustWeight(i, -s.death_rate);
  const size_t size = s.size;
  void* p = s.objs[obj];
  s.objs[obj] = s.objs.back();
  s.objs.pop_back();
  dealloc_(p, size);
}

void EmpiricalData::RecordBirth(const size_t i) {
  birth_or_death_.push_back(true);
  birth_or_death_sizes_.push_back(i);
  SizeState& s = state_[i];
  birth_or_death_actual_sizes_.push_back(s.size);
  death_sampler_.AdjustWeight(i, s.death_rate);
  num_allocated_recorded_++;
  bytes_allocated_recorded_ += s.size;
  // We only care about keeping the number of objects correct when building the
  // trace.  When we replay we will actually push the allocated address but
  // when building the trace we can just push nullptr to keep the length of live
  // object lists consistent with what it should have been after a true birth.
  s.objs.push_back(nullptr);
  s.objs_indices_after_recording.push_back(
      {.born = true, .index = birth_object_index_});
  ++birth_object_index_;
}

void* EmpiricalData::ReplayBirth(const size_t size) {
  void* p = alloc_(size);
  *birth_pointers_[birth_object_index_] = p;
  return p;
}

void EmpiricalData::RecordDeath(const size_t i) {
  birth_or_death_.push_back(false);
  SizeState& s = state_[i];
  CHECK(!s.objs.empty());
  birth_or_death_sizes_.push_back(i);
  birth_or_death_actual_sizes_.push_back(s.size);
  auto to_free = absl::uniform_int_distribution<int>(
      0, std::max(0, static_cast<int>(s.objs.size()) - 1))(rng_);
  death_sampler_.AdjustWeight(i, -s.death_rate);
  s.objs[to_free] = s.objs.back();
  s.objs.pop_back();

  death_obj_indices_.push_back(s.objs_indices_after_recording[to_free]);
  s.objs_indices_after_recording[to_free] =
      s.objs_indices_after_recording.back();
  s.objs_indices_after_recording.pop_back();
}

void EmpiricalData::ReplayDeath(const size_t size) {
  void* p = death_objects_[death_object_index_];
  dealloc_(p, size);
}

void EmpiricalData::RecordNext() {
  const double B = total_birth_rate_;
  const double T = death_sampler_.TotalWeight();
  const double Both = B + T;
  absl::uniform_real_distribution<double> which(0, Both);
  bool do_birth = which(rng_) < B;

  if (do_birth) {
    size_t i = birth_sampler_(rng_);
    RecordBirth(i);
  } else {
    size_t i = death_sampler_(rng_);
    RecordDeath(i);
  }
}

void EmpiricalData::ReplayTrace() {
  for (birth_object_index_ = 0, death_object_index_ = 0;
       birth_object_index_ + death_object_index_ < birth_or_death_.size();) {
    size_t birth_or_death_index = birth_object_index_ + death_object_index_;
    bool do_birth = birth_or_death_[birth_or_death_index];
    size_t size = birth_or_death_actual_sizes_[birth_or_death_index];

    if (do_birth) {
      void* allocated = ReplayBirth(size);
      TouchAllocated(allocated);
      ++birth_object_index_;
    } else {
      ReplayDeath(size);
      ++death_object_index_;
    }
  }
  total_num_allocated_ += num_allocated_recorded_;
  total_bytes_allocated_ += bytes_allocated_recorded_;
}

void EmpiricalData::PrepareNextReplay() {
  for (auto& s : state_) {
    for (const auto& update : s.obj_update) {
      s.objs[update.to] = s.objs[update.from];
    }
    for (const auto& update : s.birth_update) {
      s.objs[update.to] = birth_objects_[update.from];
    }
    for (const auto& update : s.death_update) {
      death_objects_[update.to] = s.objs[update.from];
    }
  }
}

void EmpiricalData::SnapshotLiveObjects() {
  for (const auto& s : state_) {
    snapshot_state_.push_back(
        {s.size, s.death_rate, s.objs, s.objs_indices_after_recording});
  }
}

void EmpiricalData::RestoreSnapshot() {
  for (int i = 0; i < snapshot_state_.size(); i++) {
    state_[i].objs = snapshot_state_[i].objs;
  }
}

void EmpiricalData::BuildUpdateVectors() {
  birth_pointers_.resize(birth_object_index_);
  birth_objects_.resize(birth_object_index_);
  death_objects_.resize(death_obj_indices_.size());

  for (size_t i = 0, death_index = 0; i < birth_or_death_.size(); ++i) {
    // Skip births
    if (birth_or_death_[i]) {
      continue;
    }

    const ObjectIndex& death_obj_index = death_obj_indices_[death_index];
    if (!death_obj_index.born) {
      SizeState& s = state_[birth_or_death_sizes_[i]];
      size_t from = death_obj_index.index;
      size_t to = death_index;
      s.death_update.push_back({.from = from, .to = to});
      death_objects_[to] = s.objs[from];
    } else {
      size_t birth_index = death_obj_index.index;
      birth_pointers_[birth_index] = &death_objects_[death_index];
    }
    ++death_index;
  }

  for (SizeState& s : state_) {
    for (size_t i = 0; i < s.objs_indices_after_recording.size(); ++i) {
      if (!s.objs_indices_after_recording[i].born) {
        size_t from = s.objs_indices_after_recording[i].index;
        size_t to = i;
        if (from != to) {
          s.obj_update.push_back({.from = from, .to = to});
        }
      } else {
        size_t birth_index = s.objs_indices_after_recording[i].index;
        birth_pointers_[birth_index] = &birth_objects_[birth_index];
        s.birth_update.push_back({.from = birth_index, .to = i});
      }
    }
  }
}

void EmpiricalData::RecordRepairToSnapshotState() {
  // Compared to the number of live objects when the snapshot was taken each
  // size state either
  // 1) Contains the same number of live objects as when the snapshot was taken,
  //    requiring no action.
  // 2) Contains a smaller number of live objects, requiring a (likely small)
  //    number of true allocations.
  // 3) Contains a larger number of live objects, requiring a (likely small)
  //    number of true deallocations.
  for (int i = 0; i < state_.size(); i++) {
    while (state_[i].objs.size() < snapshot_state_[i].objs.size()) {
      RecordBirth(i);
    }
    while (state_[i].objs.size() > snapshot_state_[i].objs.size()) {
      RecordDeath(i);
    }
  }
}

std::vector<EmpiricalData::Entry> GetEmpiricalDataEntries(
    absl::string_view file) {
  std::vector<EmpiricalData::Entry> distribution;
  auto lines = ReadCsv(file, ',');
  for (const auto& line : lines) {
    QCHECK_EQ(line.size(), 3);
    size_t size = 0;
    double alloc_rate, num_live;
    QCHECK(absl::SimpleAtoi(line[0], &size) &&
           absl::SimpleAtod(line[1], &alloc_rate) &&
           absl::SimpleAtod(line[2], &num_live));
    distribution.push_back(
        {.size = size, .alloc_rate = alloc_rate, .num_live = num_live});
  }
  return distribution;
}

absl::flat_hash_map<std::string, uint32_t> GetHeapSizes(
    absl::string_view file) {
  absl::flat_hash_map<std::string, uint32_t> heap_sizes;
  auto lines = ReadCsv(file, ',');
  for (const auto& line : lines) {
    QCHECK_EQ(line.size(), 2);
    int heap_size = 0;
    QCHECK(absl::SimpleAtoi(line[1], &heap_size));
    QCHECK(!heap_sizes.contains(line[0]));
    heap_sizes[line[0]] = heap_size;
  }
  QCHECK(!heap_sizes.empty());
  return heap_sizes;
}

}  // namespace tcmalloc
}  // namespace fleetbench
