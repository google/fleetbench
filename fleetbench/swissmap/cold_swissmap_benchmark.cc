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
#include <utility>
#include <vector>

#include "absl/container/flat_hash_set.h"
#include "absl/container/node_hash_set.h"
#include "benchmark/benchmark.h"
#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/swissmap/swissmap_benchmark.h"

// All benchmarks in this file are for cold lookups.
namespace fleetbench {

using ::benchmark::DoNotOptimize;

// Measures the time it takes to `find` an nonexistent element.
//
// assert(set.find(key) == set.end());
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_FindMiss_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 256 << 20;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& sets = sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                                   static_cast<Density>(state.range(1)));
  auto& keys = sc.GetNonExistingKeys(sets);

  while (true) {
    for (uint32_t key : keys) {
      if (!state.KeepRunningBatch(sets.size())) return;
      for (Set& set : sets) {
        DoNotOptimize(set);
        DoNotOptimize(key);
        auto res = set.find(key);
        DoNotOptimize(res);
      }
    }
  }
}

// Helper function used to implement two similar benchmarks defined below.
template <template <class...> class SetT, size_t kValueSizeT, class Lookup>
void LookupHit_Cold(benchmark::State& state, Lookup lookup) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes to
  // run.
  static constexpr size_t kMinTotalBytes = 256 << 20;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& sets = sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                                   static_cast<Density>(state.range(1)));
  auto& keys = sc.GetTransposedRandomizedKeys(sets);
  auto& n_sets_of_size = sc.GetNumSetsOfSize(sets);

  while (true) {
    for (size_t i = 0; i != GetLargestSetSize(sets); ++i) {
      if (!state.KeepRunningBatch(n_sets_of_size[i + 1])) return;
      for (size_t j = 0; j < n_sets_of_size[i + 1]; ++j) {
        lookup(&sets[j], keys[i * sets.size() + j]);
      }
    }
  }
}

// Measures the time it takes to `find` an existent element.
//
//   asssert(set.find(key) != set.end());
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_FindHit_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Cold<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    auto res = set->find(key);
    DoNotOptimize(res);
  });
}

// Measures the time it takes to `insert` an existent element.
//
//   assert(!set.insert(key).second);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_InsertHit_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Cold<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    auto res = set->insert(key);
    DoNotOptimize(res);
  });
}

// Measures the time it takes to iterate over a set and read its every element.
// The reported time is per element. In other words, the pseudo code below
// counts as `set.size()` iterations.
//
//   for (const auto& elem : set) {
//     Read(elem);
//   }
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_Iterate_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;
  static constexpr size_t kStride = 16;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& sets = sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                                   static_cast<Density>(state.range(1)));

  // `sets.back()` has the minimum size.
  const size_t num_strides = sets.back().size() / kStride;
  assert(num_strides > 0);

  size_t total_num_sets = sets.size();
  std::vector<std::vector<typename Set::const_iterator>> set_iterators;
  set_iterators.reserve(total_num_sets);

  alignas(Value<kValueSizeT>) char data[kValueSizeT];

  while (true) {
    set_iterators.clear();
    // This construction ensures cold setup for each of the generated sets.
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
    for (size_t i = 0; i != kStride; ++i) {
      for (size_t j = 0; j != num_strides; ++j) {
        if (!state.KeepRunningBatch(total_num_sets)) return;
        // Iterate over sets in the inner loop to reduce caching and ensure cold
        // environment.
        for (size_t k = 0; k != total_num_sets; ++k) {
          std::vector<typename Set::const_iterator>& curr_set_iterators =
              set_iterators[k];
          auto& iter = curr_set_iterators[j];
          memcpy(data, &*iter, kValueSizeT);
          DoNotOptimize(data);
          ++iter;
        }
      }
    }
  }
}

// Microbenchmarks below exercise behavior in pathological conditions.

// Measures the time it takes to `erase` an existent element and then `insert`
// a new element. The element is re-inserted immediately after erase to
// prevent sets from shrinking. Newly inserted element is different from
// existent, to ensure tombstones are created by implementations that use
// them.
//
// Depending on the set implementation, erased elements may create tombstones
// which affect performance on insertion and frequency of rehashing, which is
// what this microbenchmark is capturing.
//
// Only operates on low density hashset. It may in the future be extended to
// also run for high density.
//
//   assert(set.erase(key1));
//   assert(set.insert(key2).second);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_EraseInsert_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& sets = sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                                   Density::kMin);
  auto& keys = sc.GetExtendedKeys(sets);
  const size_t largest_set_size = GetLargestSetSize(sets);

  while (true) {
    // We create a copy of 'sets' so that the condition that existent elements
    // are erased holds in every iteration of the outer loop.
    std::vector<Set> sets_copy = sets;
    for (size_t i = 0; i != largest_set_size; ++i) {
      // Iterate over sets in the inner loop to reduce caching and ensure cold
      // environment.
      if (!state.KeepRunningBatch(sets_copy.size())) return;
      for (size_t j = 0; j != sets_copy.size(); ++j) {
        Set& curr_set = sets_copy[j];
        // skip over out-of-bounds access for smaller sets
        if (i >= curr_set.size()) continue;
        auto erase_result = curr_set.erase(keys[j][i]);
        DoNotOptimize(erase_result);
        auto insert_result = curr_set.insert(keys[j][i + curr_set.size()]);
        DoNotOptimize(insert_result);
      }
    }
  }
}

// Measures the time it takes to `clear` a set and then `insert` the same
// elements in the order they were in the set. The reported time is per
// element. In other words, the pseudo code below counts as N iterations.
//
//   set.clear();
//   set.insert(key1);
//   ...
//   set.insert(keyN);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_InsertManyOrdered_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& cached_sets =
      sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                          static_cast<Density>(state.range(1)));
  auto& keys = sc.GetTransposedKeys(cached_sets);
  auto& n_sets_of_size = sc.GetNumSetsOfSize(cached_sets);

  // create a copy because 'sets' is modified in the loop below
  auto sets = cached_sets;
  size_t largest_set_size = GetLargestSetSize(sets);

  while (true) {
    for (Set& set : sets) {
      set.erase(set.begin(), set.end());
    }
    for (size_t i = 0; i != largest_set_size; ++i) {
      if (!state.KeepRunningBatch(n_sets_of_size[i + 1])) return;
      for (size_t j = 0; j < n_sets_of_size[i + 1]; ++j) {
        auto insert_result = sets[j].insert(keys[i * sets.size() + j]);
        DoNotOptimize(insert_result);
      }
    }
  }
}

// Measures the time it takes to `clear` a set and then `insert` the same
// elements back in random order. The reported time is per element. In other
// words, the pseudo code below counts as N iterations.
//
//   set.clear();
//   set.insert(key1);
//   ...
//   set.insert(keyN);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_SWISSMAP_InsertManyUnordered_Cold(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the colder the benchmark and the longer it takes
  // to run.
  static constexpr size_t kMinTotalBytes = 128 << 20;

  auto& sc = SetsCache<Set>::GetInstance();
  auto& cached_sets =
      sc.GetGeneratedSets(state.range(0), kMinTotalBytes / kValueSizeT,
                          static_cast<Density>(state.range(1)));
  auto& keys = sc.GetTransposedRandomizedKeys(cached_sets);
  auto& n_sets_of_size = sc.GetNumSetsOfSize(cached_sets);

  // create a copy because 'sets' is modified in the loop below
  auto sets = cached_sets;
  size_t largest_set_size = GetLargestSetSize(sets);

  while (true) {
    for (Set& set : sets) {
      set.erase(set.begin(), set.end());
    }
    for (size_t i = 0; i != largest_set_size; ++i) {
      if (!state.KeepRunningBatch(n_sets_of_size[i + 1])) return;
      for (size_t j = 0; j < n_sets_of_size[i + 1]; ++j) {
        auto insert_result = sets[j].insert(keys[i * sets.size() + j]);
        DoNotOptimize(insert_result);
      }
    }
  }
}

void RegisterColdBenchmarks() {
  std::vector<benchmark::internal::Benchmark*> benchmarks;
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_FindMiss_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_FindMiss_Cold, 64);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_FindHit_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_FindHit_Cold, 64);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_InsertHit_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_InsertHit_Cold, 64);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_Iterate_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks, BM_SWISSMAP_Iterate_Cold, 64);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks,
                                  BM_SWISSMAP_InsertManyOrdered_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks,
                                  BM_SWISSMAP_InsertManyOrdered_Cold, 64);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks,
                                  BM_SWISSMAP_InsertManyUnordered_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(benchmarks,
                                  BM_SWISSMAP_InsertManyUnordered_Cold, 64);
  for (auto* benchmark : benchmarks) {
    benchmark->ArgNames({"set_size", "density"})
        ->Ranges({
            {1 << 4, 1 << 20},
            {static_cast<int64_t>(Density::kMin),
             static_cast<int64_t>(Density::kMax)},
        });
  }

  std::vector<benchmark::internal::Benchmark*> erase_insert_benchmarks;
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(erase_insert_benchmarks,
                                  BM_SWISSMAP_EraseInsert_Cold, 4);
  ADD_SWISSMAP_BENCHMARKS_TO_LIST(erase_insert_benchmarks,
                                  BM_SWISSMAP_EraseInsert_Cold, 64);
  for (auto* benchmark : erase_insert_benchmarks) {
    benchmark->ArgNames({"set_size"})
        ->Ranges({
            {1 << 4, 1 << 20},
        });
  }
}

class ColdBenchmarkRegisterer {
 public:
  ColdBenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterColdBenchmarks);
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_SWISSMAP_InsertHit_Cold.*::absl::flat_hash_set.*64.*set_size:64.*"
        "density:0");
  }
};

ColdBenchmarkRegisterer cbr;

}  // namespace fleetbench
