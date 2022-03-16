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

#include <cstddef>
#include <cstdint>

#include "absl/container/flat_hash_set.h"
#include "absl/container/node_hash_set.h"
#include "benchmark/benchmark.h"
#include "fleetbench/swissmap/swissmap_benchmark.h"

// All benchmarks in this file are for cold lookups.
namespace fleetbench {

using ::benchmark::DoNotOptimize;

// Measures the time it takes to `find` an nonexistent element.
//
// assert(set.find(key) == set.end());
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_FindMiss_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 256 << 20;
  std::vector<Set> sets =
      GenerateSets<Set>(state.range(0), kMinTotalBytes / kValueSizeT,
                        static_cast<Density>(state.range(1)));
  std::vector<uint32_t> keys(sets.front().size());
  for (uint32_t& key : keys) key = RandomNonexistent();

  while (state.KeepRunningBatch(keys.size() * sets.size())) {
    for (uint32_t key : keys) {
      for (const Set& set : sets) {
        DoNotOptimize(set);
        DoNotOptimize(key);
        DoNotOptimize(set.find(key));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_FindMiss_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Helper function used to implement two similar benchmarks defined below.
template <template <class...> class SetT, size_t kValueSizeT, class Lookup>
void LookupHit_Cold(benchmark::State& state, Lookup lookup) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes to
  // run.
  static constexpr size_t kMinTotalBytes = 256 << 20;

  std::vector<Set> sets =
      GenerateSets<Set>(state.range(0), kMinTotalBytes / kValueSizeT,
                        static_cast<Density>(state.range(1)));

  std::vector<std::vector<uint32_t>> set_elements_randomized =
      ToVectorRandomized(sets);
  const size_t total_num_elements = GetTotalSize(set_elements_randomized);
  // Transpose to ensure access is cold.
  std::vector<uint32_t> keys = Transpose(std::move(set_elements_randomized));

  while (state.KeepRunningBatch(total_num_elements)) {
    for (size_t i = 0; i != sets.front().size(); ++i) {
      for (size_t j = 0; j != sets.size() && i != sets[j].size(); ++j) {
        lookup(&sets[j], keys[i * sets.size() + j]);
      }
    }
  }
}

// Measures the time it takes to `find` an existent element.
//
//   asssert(set.find(key) != set.end());
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_FindHit_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Cold<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    DoNotOptimize(set->find(key));
  });
}

BENCHMARK_TEMPLATE(BM_FindHit_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Measures the time it takes to `insert` an existent element.
//
//   assert(!set.insert(key).second);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_InsertHit_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Cold<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    DoNotOptimize(set->insert(key));
  });
}

BENCHMARK_TEMPLATE(BM_InsertHit_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Measures the time it takes to iterate over a set and read its every element.
// The reported time is per element. In other words, the pseudo code below
// counts as `set.size()` iterations.
//
//   for (const auto& elem : set) {
//     Read(elem);
//   }
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_Iterate_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;
  static constexpr size_t kStride = 16;

  std::vector<Set> sets =
      GenerateSets<Set>(state.range(0), kMinTotalBytes / kValueSizeT,
                        static_cast<Density>(state.range(1)));

  // `sets.back()` has the minimum size.
  const size_t num_strides = sets.back().size() / kStride;
  assert(num_strides > 0);

  size_t total_num_sets = sets.size();
  // This construction ensures cold setup for each of the generated sets.
  std::vector<std::vector<typename Set::const_iterator>> set_iterators;
  set_iterators.reserve(total_num_sets);
  for (const Set& set : sets) {
    auto it = set.begin();
    std::vector<typename Set::const_iterator> iters;
    iters.reserve(num_strides);
    for (size_t i = 0; i != num_strides; ++i) {
      iters.push_back(it);
      std::advance(it, kStride);
    }
    set_iterators.push_back(std::move(iters));
  }
  const size_t total_size = GetTotalSize(set_iterators);
  alignas(Value<kValueSizeT>) char data[kValueSizeT];

  while (state.KeepRunningBatch(total_size * kStride)) {
    for (size_t i = 0; i != kStride; ++i) {
      for (size_t j = 0; j != num_strides; ++j) {
        // Iterate over sets in the inner loop to reduce caching and ensure cold
        // environment.
        for (size_t k = 0; k != total_num_sets; ++k) {
          std::vector<typename Set::const_iterator> curr_set_iterators =
              set_iterators[k];
          // skip over out-of-bounds access for smaller sets
          if (j >= curr_set_iterators.size()) continue;
          auto& iter = curr_set_iterators[j];
          DoNotOptimize(iter == sets[k].end());
          memcpy(data, &*iter, kValueSizeT);
          DoNotOptimize(data);
          ++iter;
        }
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_Iterate_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Microbenchmarks below exercise behavior in pathological conditions.

// Measures the time it takes to `erase` an existent element and then `insert`
// a new element. The element is re-inserted immediately after erase to
// prevent sets from shrinking. Newly inserted element is different from
// existent, to ensure tombstones are created by implementations that use
// them.
//
// Depending on the set implementation, erased elemenets may create tombstones
// which affect performance on insertion and frequency of rehashing, which is
// what this microbenchmark is capturing.
//
// Only operates on low density hashset. It may in the future be extended to
// also run for high density.
//
//   assert(set.erase(key1));
//   assert(set.insert(key2).second);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_EraseInsert_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  std::vector<Set> sets = GenerateSets<Set>(
      state.range(0), kMinTotalBytes / kValueSizeT, Density::kMin);

  const size_t largest_set_size = sets.front().size();
  const size_t num_keys = 3 * largest_set_size;
  std::vector<std::vector<uint32_t>> keys(sets.size());
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

  while (state.KeepRunningBatch(num_keys * sets.size())) {
    for (size_t i = 0; i != largest_set_size; ++i) {
      // Iterate over sets in the inner loop to reduce caching and ensure cold
      // environment.
      for (size_t j = 0; j != sets.size(); ++j) {
        Set curr_set = sets[j];
        // skip over out-of-bounds access for smaller sets
        if (i >= curr_set.size()) continue;
        DoNotOptimize(curr_set.erase(keys[j][i]));
        DoNotOptimize(curr_set.insert(keys[j][i + curr_set.size()]));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_EraseInsert_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });

// Measures the time it takes to `clear` a set and then `insert` the same
// elements in the order they were in the set. The reported time is per
// element. In other words, the pseudo code below counts as N iterations.
//
//   set.clear();
//   set.insert(key1);
//   ...
//   set.insert(keyN);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_InsertManyOrdered_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  std::vector<Set> sets =
      GenerateSets<Set>(state.range(0), kMinTotalBytes / kValueSizeT,
                        static_cast<Density>(state.range(1)));

  std::vector<std::vector<uint32_t>> set_elements(sets.size());
  for (size_t i = 0; i != sets.size(); ++i) {
    set_elements[i] = ToVector(sets[i]);
  }

  const size_t num_keys = GetTotalSize(set_elements);
  std::vector<uint32_t> keys = Transpose(std::move(set_elements));
  size_t largest_set_size = sets.front().size();
  while (state.KeepRunningBatch(num_keys)) {
    for (Set& set : sets) {
      set.erase(set.begin(), set.end());
    }
    for (size_t i = 0; i != largest_set_size; ++i) {
      for (size_t j = 0; j != sets.size() && i != sets[j].size(); ++j) {
        DoNotOptimize(sets[j].insert(keys[i * sets.size() + j]));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Measures the time it takes to `clear` a set and then `insert` the same
// elements back in random order. The reported time is per element. In other
// words, the pseudo code below counts as N iterations.
//
//   set.clear();
//   set.insert(key1);
//   ...
//   set.insert(keyN);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_InsertManyUnordered_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  std::vector<Set> sets =
      GenerateSets<Set>(state.range(0), kMinTotalBytes / kValueSizeT,
                        static_cast<Density>(state.range(1)));

  std::vector<std::vector<uint32_t>> set_elements = ToVectorRandomized(sets);

  const size_t num_keys = GetTotalSize(set_elements);
  std::vector<uint32_t> keys = Transpose(std::move(set_elements));
  size_t largest_set_size = sets.front().size();
  while (state.KeepRunningBatch(num_keys)) {
    for (Set& set : sets) {
      set.erase(set.begin(), set.end());
    }
    for (size_t i = 0; i != largest_set_size; ++i) {
      for (size_t j = 0; j != sets.size() && i != sets[j].size(); ++j) {
        DoNotOptimize(sets[j].insert(keys[i * sets.size() + j]));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Cold, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Cold, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Cold, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Cold, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

}  // namespace fleetbench
