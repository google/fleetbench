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

#ifndef THIRD_PARTY_FLEETBENCH_SWISSMAP_SWISSMAP_BENCHMARK_H_
#define THIRD_PARTY_FLEETBENCH_SWISSMAP_SWISSMAP_BENCHMARK_H_

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <utility>
#include <vector>

#include "absl/container/flat_hash_map.h"
#include "absl/container/flat_hash_set.h"
#include "absl/random/random.h"
#include "fleetbench/common/common.h"

namespace fleetbench {

inline uint32_t RandomNonSpecial() {
  return absl::Uniform(GetRNG(), 0U, (1U << 31));
}

// The value isn't special and the second highest order bit is unset <=>
// the value never exists in the set.
inline uint32_t RandomExistent() { return RandomNonSpecial() | (1U << 30); }
inline uint32_t RandomNonexistent() { return RandomNonSpecial() & ~(1U << 30); }

enum class Density {
  kMin,  // minimum load factor
  kMax,  // maximum load factor
};

// Transposes the input 2D vector and concatenates the resulting elements. The
// input is not required to be a matrix - the elements of `input` can have
// different sizes, but `input.front()` is required to have the maximum size of
// all elements. The output will have size `input.size() * m.front().size()`. If
// not all elements of `input` have the same size, then any elements in the
// output corresponding to missing `T`s from the input are default constructed.
template <class T>
std::vector<T> Transpose(std::vector<std::vector<T>> input) {
  assert(!input.empty());
  std::vector<T> v(input.size() * input.front().size());
  for (size_t i = 0; i != input.size(); ++i) {
    assert(input[i].size() <= input[0].size());
    for (size_t j = 0; j != input[i].size(); ++j) {
      v[j * input.size() + i] = input[i][j];
    }
  }
  return v;
}

// Returns a set filled with random data with size at least min_size and either
// low or high load factor depending on the requested density. Calling this
// function multiple times with the same arguments can yield sets with different
// sizes and numbers of buckets. Their elements can also be different. The
// reason this function can result in sets with different sizes is that the
// capacities are not guaranteed to be the same for different sets of the same
// type (e.g. container can let allocator choose a good capacity based on
// current conditions), and this method makes the sizes depend on the
// capacities.
template <class Set>
Set GenerateSet(size_t min_size, Density density) {
  Set output;

  std::vector<uint32_t> unique_random_elements;
  unique_random_elements.reserve(min_size);

  // +2 is to ensure the final set size is at least min_size.
  auto target_set_size = (density == Density::kMax) ? min_size + 2 : min_size;

  // Fill up the set with random elements until it reaches the target size given
  // the density.
  while (output.size() < target_set_size) {
    uint32_t elem = RandomExistent();
    if (output.insert(elem).second) unique_random_elements.push_back(elem);
  }

  size_t bucket_count = output.bucket_count();
  // Add more random elements until bucket count increases. That means we are at
  // kMin density. For kMax density, reconstruct the set as it was just before
  // the bucket count increased.
  while (true) {
    uint32_t elem = RandomExistent();
    if (!output.insert(elem).second) continue;
    if (output.bucket_count() > bucket_count) {
      // bucket count change because of resizing. We use the before and after
      // states for the max and min density, respectively.
      if (density == Density::kMax) {
        Set empty;
        output.swap(empty);
        // Insert element one by one without reserve for faithful reconstruct.
        for (auto& elem : unique_random_elements) {
          output.insert(elem);
        }
      }
      return output;
    }
    unique_random_elements.push_back(elem);
  }
}

// Generates several random sets with GenerateSet<Set>(min_size, density). The
// sum of the set sizes is at least min_total_size. Output is sorted by size in
// descending order.
template <class Set>
std::vector<Set> GenerateSets(size_t min_size, size_t min_total_size,
                              Density density) {
  Random::instance().Reset();
  size_t total_size = 0;
  std::vector<Set> generated_sets;
  generated_sets.reserve(min_total_size / min_size + 1);
  while (total_size < min_total_size) {
    Set set = GenerateSet<Set>(min_size, density);
    total_size += set.size();
    generated_sets.push_back(std::move(set));
  }
  // The motivation for sorting the output to be descending by size is for use
  // with `Transpose()`. When we want to do an operation on the i-th element of
  // each set, we can iterate over them in order and stop once we get to one
  // that has fewer than i elements - at which point, we know that the remaining
  // ones also have fewer than i elements.
  std::sort(generated_sets.begin(), generated_sets.end(),
            [](const Set& a, const Set& b) { return a.size() > b.size(); });
  return generated_sets;
}

// Helper class to avoid performing the same initializations repeatedly.
template <class Set>
class SetsCache {
 public:
  static SetsCache<Set>& GetInstance() {
    static SetsCache<Set> instance;
    return instance;
  }

  // Caches calls to GenerateSets, i.e., for repeated calls with the same
  // parameters, the function will return a reference to the same vector of
  // generated sets.
  std::vector<Set>& GetGeneratedSets(size_t min_size, size_t min_total_size,
                                     Density density) {
    auto& sets = generated_sets_[min_size][min_total_size][density];

    if (sets == nullptr) {
      sets = std::make_unique<std::vector<Set>>(
          GenerateSets<Set>(min_size, min_total_size, density));
    }
    return *sets;
  }

  // Returns a vector v such that v[i] is a vector containing the elements of
  // sets[i]. Note that 'sets' must not be modified between calls to this
  // function.
  std::vector<std::vector<uint32_t>>& GetKeys(std::vector<Set>& sets) {
    auto& keys = keys_[&sets];

    if (keys.empty()) {
      keys.resize(sets.size());
      for (size_t i = 0; i != sets.size(); ++i) {
        keys[i] = ToVector(sets[i]);
      }
    }

    return keys;
  }

  // Returns a reference to a vector of keys that do not occur in 'sets'. Note
  // that 'sets' must not be modified between calls to this function.
  std::vector<uint32_t>& GetNonExistingKeys(std::vector<Set>& sets) {
    auto& keys = non_ex_keys_[&sets];

    if (keys.empty()) {
      keys.resize(GetLargestSetSize(sets));
      for (uint32_t& key : keys) key = RandomNonexistent();
    }

    return keys;
  }

  // Returns a reference to a vector v obtained by calling Transpose() on
  // ToVectorRandomized(sets). Note that 'sets' must not be modified between
  // calls to this function.
  std::vector<uint32_t>& GetTransposedRandomizedKeys(std::vector<Set>& sets) {
    auto& keys = transp_r_keys_[&sets];

    if (keys.empty()) {
      std::vector<std::vector<uint32_t>> set_elements_randomized =
          ToVectorRandomized(sets);

      // Transpose to ensure access is cold.
      keys = Transpose(std::move(set_elements_randomized));
    }

    return keys;
  }

  // Returns a reference to a vector obtained by transposing 'sets'. Note that
  // 'sets' must not be modified between calls to this function.
  std::vector<uint32_t>& GetTransposedKeys(std::vector<Set>& sets) {
    auto& keys = transp_keys_[&sets];

    if (keys.empty()) {
      std::vector<std::vector<uint32_t>> set_elements(sets.size());
      for (size_t i = 0; i != sets.size(); ++i) {
        set_elements[i] = ToVector(sets[i]);
      }
      keys = Transpose(std::move(set_elements));
    }

    return keys;
  }

  // Returns a reference to a vector v such that v[i] first contains the
  // elements of sets[i] (in random order), followed by a large number of
  // elements that do not occur in sets[i]. Note that 'sets' must not be
  // modified between calls to this function.
  std::vector<std::vector<uint32_t>>& GetExtendedKeys(std::vector<Set>& sets) {
    auto& keys = ext_keys_[&sets];

    if (keys.empty()) {
      const size_t num_keys = 3 * GetLargestSetSize(sets);
      keys.resize(sets.size());
      for (size_t i = 0; i != sets.size(); ++i) {
        keys[i] = ToVector(sets[i]);
        std::shuffle(keys[i].begin(), keys[i].end(), GetRNG());
        absl::flat_hash_set<uint32_t> extra;
        keys[i].reserve(num_keys);
        while (keys[i].size() < num_keys) {
          uint32_t key = RandomExistent();
          // Generate a unique key that hasn't been inserted before.
          if (!sets[i].count(key) && extra.insert(key).second)
            keys[i].push_back(key);
        }
      }
    }

    return keys;
  }

  // Returns a vector v, such that v[i] contains the number of sets in the input
  // that have at least i elements. The input must be sorted by size in
  // descending order. Note that 'sets' must not be modified between calls to
  // this function.
  std::vector<size_t>& GetNumSetsOfSize(std::vector<Set>& sets) {
    auto& n_sets_of_size = n_sets_of_size_[&sets];

    if (n_sets_of_size.empty()) {
      n_sets_of_size.resize(GetLargestSetSize(sets) + 1);
      for (size_t i = 0; i < n_sets_of_size.size(); ++i) {
        size_t j = 0;
        for (; j < sets.size() && i <= sets[j].size(); ++j) {
        }
        n_sets_of_size[i] = j;
      }
    }

    return n_sets_of_size;
  }

  SetsCache<Set>(SetsCache<Set> const&) = delete;
  void operator=(SetsCache<Set> const&) = delete;

 private:
  SetsCache<Set>() {}

  using GeneratedSetsMap = absl::flat_hash_map<
      size_t,
      absl::flat_hash_map<
          size_t,
          absl::flat_hash_map<Density, std::unique_ptr<std::vector<Set>>>>>;
  GeneratedSetsMap generated_sets_;

  absl::flat_hash_map<std::vector<Set>*, std::vector<std::vector<uint32_t>>>
      keys_;
  absl::flat_hash_map<std::vector<Set>*, std::vector<uint32_t>> non_ex_keys_;
  absl::flat_hash_map<std::vector<Set>*, std::vector<uint32_t>> transp_keys_;
  absl::flat_hash_map<std::vector<Set>*, std::vector<uint32_t>> transp_r_keys_;
  absl::flat_hash_map<std::vector<Set>*, std::vector<std::vector<uint32_t>>>
      ext_keys_;
  absl::flat_hash_map<std::vector<Set>*, std::vector<size_t>> n_sets_of_size_;
};

template <class Set>
std::vector<uint32_t> ToVector(const Set& set) {
  return std::vector<uint32_t>(set.begin(), set.end());
}

template <class Set>
std::vector<std::vector<uint32_t>> ToVectorRandomized(std::vector<Set> sets) {
  std::vector<std::vector<uint32_t>> output(sets.size());
  for (size_t i = 0; i != sets.size(); ++i) {
    std::vector<uint32_t> set_as_vector = ToVector(sets[i]);
    std::shuffle(set_as_vector.begin(), set_as_vector.end(), GetRNG());
    output[i] = set_as_vector;
  }
  return output;
}

// Returns the size of the largest set in the input. The input must be sorted by
// size in descending order.
template <class Set>
size_t GetLargestSetSize(const std::vector<Set>& sets) {
  return sets.front().size();
}

// Ballast provides additional padding of `kSize` to highlight hash set behavior
// during iteration when neighbor elements are pulled into cache line on access.
template <size_t kSize>
class Ballast {
  char ballast_[kSize];
};

// Ballast of zero ensures no padding in cache line between hash set elements.
template <>
class Ballast<0> {};

// Creates Value object with alignment requirement of 4 or 8, for value sizes
// 4 and 64 respectively. This is useful for benchmarking hashset behavior with
// and without additional padding when iterating, which results in neighbor
// elements getting pulled into the cache line. In other words, we benchmark for
// Value:
//
// struct {
//   uint32_t value_;
// }
// which has sizeof = 4, alignment = 4.
//
// AND
//
// struct {
//   uint32_t value_;
//   char data[60];
// }
// which has sizeof = 64, alignment = 8.
template <size_t kSize>
class alignas(kSize < 8 ? 4 : 8) Value : private Ballast<kSize - 4> {
 public:
  static_assert(kSize >= 4, "");
  Value(uint32_t value = 0) : value_(value) {}
  operator uint32_t() const { return value_; }

 private:
  uint32_t value_;
};

// Use a zero cost hash function. The purpose of this benchmark is to focus on
// the implementations of the containers, not the quality or speed of their hash
// functions.
struct Hash {
  size_t operator()(size_t x) const { return x; }
};

struct Eq {
  bool operator()(uint32_t x, uint32_t y) const { return x == y; }
};

#define ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, function, kValueSizeT) \
  benchmarks.push_back(REGISTER_BENCHMARK_TEMPLATE(                        \
      function, ::absl::flat_hash_set, kValueSizeT));                      \
  benchmarks.push_back(REGISTER_BENCHMARK_TEMPLATE(                        \
      function, ::absl::node_hash_set, kValueSizeT));

}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_SWISSMAP_SWISSMAP_BENCHMARK_H_
