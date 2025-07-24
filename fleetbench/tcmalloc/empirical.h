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
//
// Generate load for malloc based on an empirical distribution of size
// and lifetimes.  That is, given samples telling us that (for a given
// binary, say) we see 16-byte mallocs at 10 Hz and 128-byte at 5 Hz,
// and that 90% of live objects are 16-byte objects, we can generate a
// sequence of calls to malloc and free which replicate both of those
// properties.
//
// Note that
//   a) we do this only in a relative sense: we can't guarantee a precise
//      rate of allocation (that depends on cost of malloc, cpu time,
//      etc, etc, etc.) We can guarantee we make twice as many malloc(16)
//      calls as malloc(128)s.
//
//   b) We pick one simple distribution that has these properties (and is
//      nicely randomized, is a difficult malloc test, etc.) It is by no
//      means unique; it by no means replicates the app's behavior exactly.
//
//   c) We make no attempt to replicate inter-thread/inter-CPU
//      behavior (producer/consumer, etc). This class simply creates
//      the behavior we like local to a single thread.

#ifndef THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_H_
#define THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_H_

#include <stddef.h>

#include <cstdint>
#include <random>
#include <string>
#include <vector>

#include "absl/algorithm/container.h"
#include "absl/base/attributes.h"
#include "absl/container/flat_hash_map.h"
#include "absl/functional/function_ref.h"
#include "absl/log/check.h"
#include "absl/random/discrete_distribution.h"
#include "absl/random/uniform_real_distribution.h"
#include "absl/strings/string_view.h"
#include "absl/types/span.h"

namespace fleetbench {
namespace tcmalloc {

inline void sized_delete(void* ptr, size_t size) {
#ifdef __cpp_sized_deallocation
  ::operator delete(ptr, size);
#else
  (void)size;
  ::operator delete(ptr);
#endif
}

// This is like WeightedPicker from util/random--an arbitrary discrete
// distribution, which can efficiently change the probability of any given item
// but:
// - faster
// - supports floating point weights.
class AdjustableSampler {
 public:
  // weights are all zeroes
  explicit AdjustableSampler(size_t n)
      : n_(NextPowerOfTwo(n)), tree_(2 * n_ - 1, 0) {
    CHECK_GE(n, static_cast<size_t>(1));
  }

  explicit AdjustableSampler(const std::vector<double>& weights)
      : n_(NextPowerOfTwo(weights.size())), tree_(2 * n_ - 1, 0) {
    CHECK(!weights.empty());
    absl::c_copy(weights, tree_.begin() + (n_ - 1));

    size_t i = n_ - 1;
    // post decrement
    while (i-- > 0) {
      tree_[i] = tree_[2 * i + 1] + tree_[2 * i + 2];
    }
  }

  // Sample from the distribution on {0, 1, ..., n_ - 1} with probabilities:
  // p_i = w_i / Sum(w_i)
  template <typename Generator>
  size_t operator()(Generator& g) const {  // NOLINT(runtime/references)
    return SampleWeight(
        absl::uniform_real_distribution<double>(0, tree_[0])(g));
  }

  void AdjustWeight(size_t i, double delta) { SetWeight(i, weight(i) + delta); }

  void SetWeight(size_t i, double x) {
    i += n_ - 1;
    tree_[i] = x;
    while (i != 0) {
      i = (i - 1) / 2;
      tree_[i] = tree_[2 * i + 1] + tree_[2 * i + 2];
    }
  }

  double weight(size_t i) const { return tree_[i + n_ - 1]; }

  double TotalWeight() const { return tree_[0]; }

  bool operator==(const AdjustableSampler& rhs) const {
    return n_ == rhs.n_ && tree_ == rhs.tree_;
  }

 private:
  const size_t n_;

  // If x is a uniform number in [0, Sum(w_i)), samples the above distribution.
  size_t SampleWeight(double x) const {
    // We want to efficiently sample the above distribution, *and* be able
    // to change the weights that determine it.  We do this by forming a tree
    // where each leaf is a value (and its weight), and each internal node
    // has the sum of the weights of its descendants.  It is easy to update
    // this tree as weights change.
    //
    // The key invariant: each subtree's weight, divided by the total tree
    // weight, is exactly the probability a sample lands within that subtree.
    //
    // So to sample, all we need to do is walk down the tree, using the relative
    // weights of each left/right child to guide the probability of each
    // decision.
    size_t i = 0;
    while (i < (n_ - 1)) {
      // INVARIANT: at this point, x is uniform in [0, W), where W is the weight
      // of the subtree rooted at i.
      // W = left + right (but we don't need to actually read right.)
      // As discussed above, we want to go left with probability left / W.
      const double left = tree_[2 * i + 1];
      if (x <= left) {
        // TODO: Prevent this loop from being predicated as doing
        // so significantly reduces performance.
        asm volatile("");

        // Conditioning on this branch, x is now uniform in [0, left).
        i = 2 * i + 1;
      } else {
        // x is uniform in [left, left + right), so shift it down.
        x -= left;
        i = 2 * i + 2;
      }
    }

    return (i - (n_ - 1));
  }

  static size_t NextPowerOfTwo(size_t x) {
    size_t n = 1;
    while (n < x) {
      n *= 2;
    }
    return n;
  }
  // tree_[n_ - 1]...tree[2n_-2] = weights[0...n_-1]
  // parent of tree_[i] = tree_[(i - 1) / 2]
  // (children of tree_[i] = tree_[2i + 1, 2i + 2])
  // invariant: for internal nodes,
  //     tree_[i] = sum(weights[j] | j in subtree rooted at i)
  std::vector<double> tree_;
};

// This is the main simulator: takes a profile of data and a target size,
// and generates malloc load matching that.
class EmpiricalData {
 public:
  struct Entry {
    size_t size;
    // The units here actually don't matter so long as they're consistent
    // between Entries in a given Empirical.

    // Rate at which calls to malloc(<size>) are made
    double alloc_rate;
    // Number (at steady state) of extant <size>-sized objects
    double num_live;
  };

  // Allocates ~(total_mem bytes / thread count) to put us in a "steady state".
  EmpiricalData(size_t seed, const absl::Span<const Entry> weights,
                size_t total_mem, absl::FunctionRef<void*(size_t)> alloc,
                absl::FunctionRef<void(void*, size_t)> dealloc);

  ~EmpiricalData();

  // How many objects have we made in our total life?
  // Note that these *DO* include startup allocations.
  size_t total_num_allocated() const { return total_num_allocated_; }
  size_t total_bytes_allocated() const { return total_bytes_allocated_; }

  // Records information on which allocation or deallocation *would have* been
  // performed had we called Next() instead.  For questions about the internal
  // logic of this function please see the comments within Next().
  void RecordNext();

  // Replays the recorded trace.
  void ReplayTrace();

  // Returns the number of allocs and deallocs in the recorded trace.
  size_t TraceLength() const { return birth_or_death_.size(); }

  std::default_random_engine* const rng() { return &rng_; }

  // Saves the list of live objects of each size class.  We will later restore
  // this list (exactly once) with RestoreSnapshot() after we have constructed
  // the record and replay information.
  void SnapshotLiveObjects();

  // Restores the list of live objects within each size class to what it was
  // after the warmup allocations were complete.  Because building the trace
  // modifies the lists of live objects this function must be called
  // 1) exactly once and 2) after the trace has been constructed but before
  // starting to replay the trace.
  void RestoreSnapshot();

  // Records a sequence of allocations and deallocations that restores the
  // *lengths* of the number of live objects within each size class to what it
  // was after the warmup allocations were complete. This function should only
  // be called once (at the end of the recording phase).
  void RecordRepairToSnapshotState();

  // Fills the update vectors in `SizeState` that are used to update the state
  // after each replay of the recorded trace.
  // This function should be called once after RestoreSnapshot().
  void BuildUpdateVectors();

  // Prepares the next replay round by updating the state based on the update
  // vectors in `SizeState`.
  // Must be called after each replay, but not before the first replay.
  void PrepareNextReplay();

 private:
  std::default_random_engine rng_;

  struct ObjectIndex {
    // Whether the object was born during the recording phase.
    bool born : 1;
    size_t index : 63;
  };

  struct UpdatePair {
    size_t from;
    size_t to;
  };

  struct SizeState {
    const size_t size;
    const double death_rate;
    std::vector<void*> objs;

    // objs_indices_after_recording[i] = j has the following meaning:
    //   - if j.born == 0, then after the recording phase, objs[i] contains the
    //     object that was stored in objs[j.index] before the recording phase.
    //   - if j.born == 1, then objs[i] contains the (j.index)-th object that
    //     was born during the recording phase.
    std::vector<ObjectIndex> objs_indices_after_recording;

    // Updating the objs vector and the death_objects_ vector are relatively
    // expensive operations. Therefore, we try to avoid performing these updates
    // after each allocation/deallocation during the main benchmarking loop;
    // instead, we perform all of the updates (except for the updates to
    // death_objects_ for ojects that are born and killed in the same replay
    // round) together after each replay of the entire trace in a
    // `Pause/ResumeTiming` block so that they don't affect the benchmark
    // results. To perform these updates, we use the following vectors.

    // obj_update contains pairs of the form (from, to) that are used to update
    // `objs` after each replay of the recorded trace. After the replay,
    // objs[to] is updated to store object that was in objs[from] before the
    // replay. The elements of the vector are ordered such that no `to` value
    // is equal to a `from` value that occurs later in the vector. Thus, the
    // update can be performed in place, and it is not necessary to create a
    // copy of `objs`. Pairs where `from` is equal to `to` are omitted for
    // efficiency reasons.
    std::vector<UpdatePair> obj_update;

    // birth_update contains pairs of the form (from, to). After each replay,
    // objs[to] is updated to store the element that was written to
    // new_objects_[from] during the replay.
    // These updates are performed after the obj_update updates.
    std::vector<UpdatePair> birth_update;

    // death_update contains pairs of the form (from, to). After each replay,
    // death_objects_[to] is updated to store the element that is currently
    // stored in objs[from].
    // These updates are performed after the birth_update updates.
    std::vector<UpdatePair> death_update;
  };

  void* DoBirth(size_t i);
  void DoDeath(size_t i);

  void RecordBirth(size_t i);
  void* ReplayBirth(size_t size);
  void RecordDeath(size_t i);
  void ReplayDeath(size_t size);

  absl::FunctionRef<void*(size_t)> alloc_;
  absl::FunctionRef<void(void*, size_t)> dealloc_;

  size_t total_num_allocated_;
  size_t total_bytes_allocated_;
  std::vector<SizeState> state_;

  absl::discrete_distribution<size_t> birth_sampler_;
  double total_birth_rate_;
  AdjustableSampler death_sampler_;

  // Record and replay members.
  std::vector<SizeState> snapshot_state_;
  std::vector<bool> birth_or_death_;
  std::vector<uint16_t> birth_or_death_sizes_;
  std::vector<size_t> birth_or_death_actual_sizes_;
  std::vector<void*> death_objects_;
  std::vector<void*> birth_objects_;
  uint32_t death_object_index_ = 0;
  uint32_t birth_object_index_ = 0;
  size_t num_allocated_recorded_;
  size_t bytes_allocated_recorded_;

  // birth_pointers_[i] contains the address where the i-th object that is born
  // during the reply should be stored. This address either points to an entry
  // in death_objects_ if the object is killed during the same replay round, or
  // to birth_objects_[i] otherwise.
  std::vector<void**> birth_pointers_;

  // death_obj_indices_[i] = j has the following meaning:
  //   - if j.born == 0, then the i-th recorded death operation kills the object
  //     that was stored in objs[j.index] in the corresponding `SizeState`
  //     before the recording phase.
  //   - if j.born == 1, then the i-th recorded death operation kills the
  //     (j.index)-th object that was born during the recording phase.
  std::vector<ObjectIndex> death_obj_indices_;
};

std::vector<EmpiricalData::Entry> GetEmpiricalDataEntries(
    absl::string_view file);
absl::flat_hash_map<std::string, uint32_t> GetHeapSizes(absl::string_view file);
using EmpiricalProfile = absl::Span<const EmpiricalData::Entry>;

}  // namespace tcmalloc
}  // namespace fleetbench
#endif  // THIRD_PARTY_FLEETBENCH_TCMALLOC_EMPIRICAL_H_
