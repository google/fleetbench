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
  GetRNG() = MakeRNG();
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

// Returns a vector v, such that v[i] contains the number of sets in the input
// that have at least i elements. The input must be sorted by size in
// descending order.
template <class Set>
std::vector<size_t> GetNumSetsOfSize(const std::vector<Set>& sets) {
  std::vector<size_t> n_sets_of_size(sets.front().size() + 1);
  for (size_t i = 0; i < sets.front().size() + 1; ++i) {
    size_t j = 0;
    for (; j < sets.size() && i <= sets[j].size(); ++j) {
    }
    n_sets_of_size[i] = j;
  }
  return n_sets_of_size;
}

// Returns the size of the largest set in the input. The input must be sorted by
// size in descending order.
template <class Set>
size_t GetLargestSetSize(const std::vector<Set>& sets) {
  return sets.front().size();
}

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

}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_SWISSMAP_SWISSMAP_BENCHMARK_H_
