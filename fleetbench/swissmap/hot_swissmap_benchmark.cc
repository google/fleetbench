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
static void BM_FindMiss_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the less the results will depend on randomness and
  // the longer the benchmark will run.
  static constexpr size_t kMinTotalKeyCount = 64 << 10;
  // The larger this value, the hotter the benchmark and the longer it will
  // run.
  static constexpr size_t kOpsPerKey = 512;

  std::vector<Set> sets = GenerateSets<Set>(
      state.range(0), kMinTotalKeyCount, static_cast<Density>(state.range(1)));
  const size_t keys_per_set = kMinTotalKeyCount / sets.size();

  while (state.KeepRunningBatch(sets.size() * keys_per_set * kOpsPerKey)) {
    for (const auto& set : sets) {
      for (size_t i = 0; i != keys_per_set; ++i) {
        const uint32_t key = RandomNonexistent();
        for (size_t j = 0; j != kOpsPerKey; ++j) {
          DoNotOptimize(set);
          DoNotOptimize(key);
          DoNotOptimize(set.find(key));
        }
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_FindMiss_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindMiss_Hot, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Helper function used to implement two similar benchmarks defined below.
template <template <class...> class SetT, size_t kValueSizeT, class Lookup>
void LookupHit_Hot(benchmark::State& state, Lookup lookup) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  static constexpr size_t kMinTotalKeyCount = 64 << 10;
  static constexpr size_t kOpsPerKey = 512;

  std::vector<Set> sets = GenerateSets<Set>(
      state.range(0), kMinTotalKeyCount, static_cast<Density>(state.range(1)));

  if (sets.size() == 1) {
    // Make sure this executes for long enough by adding additional keys and
    // randomize to make it more robust.
    std::vector<uint32_t> keys = ToVector(sets.front());
    std::shuffle(keys.begin(), keys.end(), GetRNG());
    keys.resize(kMinTotalKeyCount);
    Set key_set(keys.begin(), keys.end());
    sets[0] = key_set;
  }

  while (
      state.KeepRunningBatch(sets.size() * sets.front().size() * kOpsPerKey)) {
    for (auto& set : sets) {
      for (uint32_t key : set) {
        for (size_t i = 0; i != kOpsPerKey; ++i) {
          lookup(&set, key);
        }
      }
    }
  }
}

// Measures the time it takes to `find` an existent element.
//
//   asssert(set.find(key) != set.end());
// template <class Set>
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_FindHit_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Hot<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    DoNotOptimize(set->find(key));
  });
}

BENCHMARK_TEMPLATE(BM_FindHit_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_FindHit_Hot, ::absl::node_hash_set, 64)
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
static void BM_InsertHit_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;
  return LookupHit_Hot<SetT, kValueSizeT>(state, [](Set* set, uint32_t key) {
    DoNotOptimize(set);
    DoNotOptimize(key);
    DoNotOptimize(set->insert(key));
  });
}

BENCHMARK_TEMPLATE(BM_InsertHit_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertHit_Hot, ::absl::node_hash_set, 64)
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
static void BM_Iterate_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the hotter the benchmark and the longer it will
  // run.
  static constexpr size_t kRepetitions = 64;
  // The larger this value, the less the results will depend on randomness and
  // the longer the benchmark will run.
  static constexpr size_t kMinTotalKeyCount = 256 << 10;

  std::vector<Set> sets = GenerateSets<Set>(
      state.range(0), kMinTotalKeyCount, static_cast<Density>(state.range(1)));
  alignas(Value<kValueSizeT>) char data[kValueSizeT];
  while (state.KeepRunningBatch(sets.size() * sets.front().size() *
                                kRepetitions)) {
    for (const auto& set : sets) {
      for (size_t i = 0; i != kRepetitions; ++i) {
        for (const auto& elem : set) {
          memcpy(data, &elem, kValueSizeT);
          DoNotOptimize(data);
        }
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_Iterate_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_Iterate_Hot, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

// Microbenchmarks below exercise behavior in pathological conditions.

// Measures the time it takes to `erase` an existent element and then `insert`
// a new element. The element is re-inserted immediately after erase to prevent
// sets from shrinking. Newly inserted element is different from existent, to
// ensure tombstones are created by implementations that use them.
//
// Depending on the set implementation, erased elemenets may create tombstones
// which affect performance on insertion and frequency of rehashing, which is
// what this microbenchmark is capturing.
//
// Only operates on low density hashset. It may in the future be extended to
// also run for high density.
//
//   CHECK(set.erase(key1));
//   CHECK(set.insert(key2).second);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_EraseInsert_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The larger this value, the less the results will depend on randomness and
  // the longer the benchmark will run.
  static constexpr size_t kMinKeyCount = 1 << 20;

  Set s = GenerateSet<Set>(state.range(0), Density::kMin);
  const size_t set_size = s.size();
  std::vector<uint32_t> keys = ToVector(s);
  std::shuffle(keys.begin(), keys.end(), GetRNG());

  // Generate unique keys that haven't been inserted into original set before.
  absl::flat_hash_set<uint32_t> extra_keys;
  while (keys.size() < kMinKeyCount || keys.size() < 3 * s.size()) {
    uint32_t key = RandomExistent();
    // Generate a unique key that hasn't been inserted before.
    if (!s.count(key) && extra_keys.insert(key).second) keys.push_back(key);
  }

  while (state.KeepRunningBatch(keys.size())) {
    for (size_t i = 0; i != set_size; ++i) {
      DoNotOptimize(s);
      DoNotOptimize(s.erase(keys[i]));
      DoNotOptimize(s.insert(keys[i + set_size]));
    }
  }
}

BENCHMARK_TEMPLATE(BM_EraseInsert_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });
BENCHMARK_TEMPLATE(BM_EraseInsert_Hot, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size"})
    ->Ranges({
        {1 << 4, 1 << 20},
    });

// Measures the time it takes to `clear` a set and then `insert` the same
// elements in the order they were in the set. The reported time is per element.
// In other words, the pseudo code below counts as N iterations.
//
//   set.clear();
//   set.insert(key1);
//   ...
//   set.insert(keyN);
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_InsertManyOrdered_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The higher the value, the less contribution std::shuffle makes. The price
  // is longer benchmarking time. With 64 std::shuffle adds around 0.3 ns to
  // the benchmark results.
  static constexpr size_t kRepetitions = 64;
  // The larger this value, the less the results will depend on randomness and
  // the longer the benchmark will run.
  static constexpr size_t kMinTotalKeyCount = 256 << 10;

  std::vector<Set> sets = GenerateSets<Set>(
      state.range(0), kMinTotalKeyCount, static_cast<Density>(state.range(1)));
  std::vector<std::vector<uint32_t>> keys(sets.size());
  for (size_t i = 0; i != sets.size(); ++i) {
    keys[i] = ToVector(sets[i]);
  }

  while (state.KeepRunningBatch(sets.size() * sets.front().size() *
                                kRepetitions)) {
    for (size_t i = 0; i != sets.size(); ++i) {
      for (size_t j = 0; j != kRepetitions; ++j) {
        sets[i].erase(sets[i].begin(), sets[i].end());
        for (uint32_t key : keys[i]) DoNotOptimize(sets[i].insert(key));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyOrdered_Hot, ::absl::node_hash_set, 64)
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
//   set.reserve(N);
//   set.insert(key1);
//   ...
//   set.insert(keyN);
//
// What we really need is to clear the container without releasing memory. For
// most containers this can be expressed as `set.clear()` but for SwissTable
// containers this call can release memory.
template <template <class...> class SetT, size_t kValueSizeT>
static void BM_InsertManyUnordered_Hot(benchmark::State& state) {
  using Set = SetT<Value<kValueSizeT>, Hash, Eq>;

  // The higher the value, the less contribution std::shuffle makes. The price
  // is longer benchmarking time. With 64 std::shuffle adds around 0.3 ns to
  // the benchmark results.
  static constexpr size_t kRepetitions = 64;
  // The larger this value, the less the results will depend on randomness and
  // the longer the benchmark will run.
  static constexpr size_t kMinInsertions = 256 << 10;

  Set s =
      GenerateSet<Set>(state.range(0), static_cast<Density>(state.range(1)));
  std::vector<uint32_t> keys = ToVector(s);

  const size_t n = std::max(size_t{1}, kMinInsertions / keys.size());
  while (state.KeepRunningBatch(keys.size() * n * kRepetitions)) {
    for (size_t i = 0; i != n; ++i) {
      std::shuffle(keys.begin(), keys.end(), GetRNG());
      for (size_t j = 0; j != kRepetitions; ++j) {
        s.erase(s.begin(), s.end());
        for (uint32_t key : keys) DoNotOptimize(s.insert(key));
      }
    }
  }
}

BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Hot, ::absl::flat_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Hot, ::absl::flat_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Hot, ::absl::node_hash_set, 4)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });
BENCHMARK_TEMPLATE(BM_InsertManyUnordered_Hot, ::absl::node_hash_set, 64)
    ->ArgNames({"set_size", "density"})
    ->Ranges({
        {1 << 4, 1 << 20},
        {static_cast<int64_t>(Density::kMin),
         static_cast<int64_t>(Density::kMax)},
    });

}  // namespace fleetbench
