// Copyright 2024 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an " AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stddef.h>
#include <sys/stat.h>

#include <cstdint>
#include <memory>
#include <random>
#include <string>
#include <utility>
#include <vector>

#include "scann/hashes/internal/lut16_args.h"
#include "scann/hashes/internal/lut16_interface.h"
#include "scann/utils/alignment.h"
#include "scann/utils/common.h"
#include "scann/utils/fast_top_neighbors.h"
#include "scann/utils/intrinsics/flags.h"
#include "scann/utils/threads.h"
#include "absl/random/distributions.h"
#include "absl/strings/substitute.h"
#include "absl/types/span.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"  // NOLINT
#include "fleetbench/dynamic_registrar.h"

using research_scann::asymmetric_hashing_internal::LUT16Interface;
using research_scann::asymmetric_hashing_internal::PrefetchStrategy;

namespace fleetbench::simd {
namespace {

struct BenchmarkArgs {
  int num_blocks;
  bool enable_avx512;
  bool flush_cache;

  std::string GetName() const {
    return absl::Substitute("/num_blocks:$0/enable_avx512:$1/flush_cache:$2",
                            num_blocks, enable_avx512, flush_cache);
  }
};

// Most representative subset of values for the fleet based on GWP and comments
// from the ScaM team.
const int kNumBlocks[] = {256, 512};
const int kNumDatabasePoints = 1000000;
const int kBatchSize = 1;
const int kNumNeighbors = 10;
const float kSampleEpsilonFraction = 0.01;
const float kSampleEpsilonConfidence = 0.999;
const int kThreadBlockSizes = 16384;

const bool kFlushCacheBetweenIters[] = {false, true};

const PrefetchStrategy kPrefetchStrategy = PrefetchStrategy::kSeq;

void MaybeFlushCache(research_scann::ConstSpan<uint8_t> db,
                     benchmark::State& state, bool flush_cache) {
  if (!flush_cache) return;
  state.PauseTiming();
#ifdef __x86_64__
  constexpr size_t kCacheLineSize = 64;
  for (size_t i = 0; i < db.size(); i += kCacheLineSize) {
    _mm_clflush(db.data() + i);
  }
#else
  // Use vector filling to flush cache since we don't have an intrinsic.
  std::vector<char> dummy(fleetbench::GetCacheSize(3));
#endif
  state.ResumeTiming();
}

void BM_SerialDistanceComputationImpl(benchmark::State& state,
                                      const int num_codes,
                                      const bool enable_avx512_codepath,
                                      const bool flush_cache,
                                      const int num_queries,
                                      const int num_datapoints,
                                      const PrefetchStrategy strategy) {
  const size_t num_32dp_simd_iters =
      research_scann::DivRoundUp(num_datapoints, 32);

  const size_t packed_dataset_bytes = num_32dp_simd_iters * 16 * num_codes;
  std::vector<uint8_t> original_db(packed_dataset_bytes);
  const uint8_t* packed_dataset = original_db.data();

  const size_t lut_bytes = num_codes * 16;
  std::vector<std::vector<uint8_t>> lookups_storage(num_queries);
  std::vector<uint8_t*> lookups(num_queries);
  for (size_t i : research_scann::Seq(num_queries)) {
    lookups_storage[i] = std::vector<uint8_t>(lut_bytes);
    lookups[i] = lookups_storage[i].data();
  }

  if (num_codes <= 256) {  // 16-bit distances
    std::vector<std::vector<int16_t>> distances_storage(num_queries);
    std::vector<int16_t*> distances(num_queries);
    for (size_t j : research_scann::Seq(num_queries)) {
      distances_storage[j].resize(num_32dp_simd_iters * 32);
      distances[j] = distances_storage[j].data();
    }
    for (auto _ : state) {
      research_scann::asymmetric_hashing_internal::LUT16Args<int16_t> lut16_args;
      lut16_args.packed_dataset = packed_dataset;
      lut16_args.enable_avx512_codepath = enable_avx512_codepath;
      lut16_args.num_32dp_simd_iters = num_32dp_simd_iters;
      lut16_args.num_blocks = num_codes;
      lut16_args.lookups = lookups;
      lut16_args.distances = distances;
      lut16_args.prefetch_strategy = strategy;

      LUT16Interface::GetDistances(std::move(lut16_args));
      MaybeFlushCache({packed_dataset, packed_dataset_bytes}, state,
                      flush_cache);
    }
  } else {  // 32-bit distances
    std::vector<std::vector<int32_t>> distances_storage(num_queries);
    std::vector<int32_t*> distances(num_queries);
    for (size_t j : research_scann::Seq(num_queries)) {
      distances_storage[j].resize(num_32dp_simd_iters * 32);
      distances[j] = distances_storage[j].data();
    }
    for (auto _ : state) {
      research_scann::asymmetric_hashing_internal::LUT16Args<int32_t> lut16_args;
      lut16_args.packed_dataset = packed_dataset;
      lut16_args.enable_avx512_codepath = enable_avx512_codepath;
      lut16_args.num_32dp_simd_iters = num_32dp_simd_iters;
      lut16_args.num_blocks = num_codes;
      lut16_args.lookups = lookups;
      lut16_args.distances = distances;
      lut16_args.prefetch_strategy = strategy;

      LUT16Interface::GetDistances(std::move(lut16_args));
      MaybeFlushCache({packed_dataset, packed_dataset_bytes}, state,
                      flush_cache);
    }
  }

  // Measure throughput in database points per second.
  state.SetItemsProcessed(state.iterations() * num_queries * num_datapoints);

  // Measure memory bandwidth consumed assuming lookup tables are in cache.
  state.SetBytesProcessed(state.iterations() * num_32dp_simd_iters * 16 *
                          num_codes);
}

std::unique_ptr<uint8_t[]> RandomBytes(std::default_random_engine& rng,
                                       size_t num_bytes) {
  auto bytes = std::make_unique<uint8_t[]>(num_bytes);
  for (size_t j : research_scann::Seq(num_bytes)) {
    bytes[j] = absl::Uniform<uint8_t>(rng);
  }
  return bytes;
}

void BM_SerialTopnInt16Impl(benchmark::State& state, const int num_codes,
                            const bool enable_avx512_codepath,
                            const bool flush_cache, const int num_queries,
                            const int num_datapoints,
                            const PrefetchStrategy strategy,
                            const int num_neighbors) {
  const size_t num_32dp_simd_iters =
      research_scann::DivRoundUp(num_datapoints, 32);

  // Build Random Dataset.
  const size_t database_bytes = num_32dp_simd_iters * 16 * num_codes;
  std::unique_ptr<uint8_t[]> original_db =
      RandomBytes(GetRNG(), database_bytes);
  const uint8_t* packed_dataset = original_db.get();

  // Build Random Lookup Tables.
  const size_t lut_bytes = num_codes * 16;
  std::vector<std::unique_ptr<uint8_t[]>> lookups_storage(num_queries);
  std::vector<uint8_t*> lookups(num_queries);
  for (size_t j : research_scann::Seq(num_queries)) {
    lookups_storage[j] = RandomBytes(GetRNG(), lut_bytes);
    lookups[j] = lookups_storage[j].get();
  }

  for (auto _ : state) {
    // Init TopN instances.
    std::vector<research_scann::FastTopNeighbors<int16_t>> topns(num_queries);
    std::vector<research_scann::FastTopNeighbors<int16_t>*> topn_ptrs(
        num_queries);
    for (size_t j : research_scann::Seq(num_queries)) {
      topns[j].Init(num_neighbors);
      topn_ptrs[j] = &topns[j];
    }

    research_scann::asymmetric_hashing_internal::LUT16ArgsTopN<int16_t>
        lut16_args;
    lut16_args.packed_dataset = packed_dataset;
    lut16_args.enable_avx512_codepath = enable_avx512_codepath;
    lut16_args.num_32dp_simd_iters = num_32dp_simd_iters;
    lut16_args.num_blocks = num_codes;
    lut16_args.lookups = lookups;
    lut16_args.first_dp_index = 0;
    lut16_args.prefetch_strategy = strategy;
    lut16_args.num_datapoints = num_datapoints;
    lut16_args.fast_topns = topn_ptrs;

    LUT16Interface::GetTopDistances(std::move(lut16_args));
    MaybeFlushCache({packed_dataset, database_bytes}, state, flush_cache);
  }

  // Measure throughput in database points per second.
  state.SetItemsProcessed(state.iterations() * num_queries * num_datapoints);

  // Measure memory bandwidth consumed assuming lookup tables are in cache.
  state.SetBytesProcessed(state.iterations() * num_32dp_simd_iters * 16 *
                          num_codes);
}

void BM_SerialTopnFloatImpl(benchmark::State& state, const int num_codes,
                            const bool enable_avx512_codepath,
                            const bool flush_cache, const int num_queries,
                            const int num_datapoints,
                            const PrefetchStrategy strategy,
                            const int num_neighbors) {
  const size_t num_32dp_simd_iters =
      research_scann::DivRoundUp(num_datapoints, 32);

  // Build Random Dataset.
  const size_t database_bytes = num_32dp_simd_iters * 16 * num_codes;
  std::unique_ptr<uint8_t[]> original_db =
      RandomBytes(GetRNG(), database_bytes);
  const uint8_t* packed_dataset = original_db.get();

  // Build Random Lookup Tables.
  const size_t lut_bytes = num_codes * 16;
  std::vector<std::unique_ptr<uint8_t[]>> lookups_storage(num_queries);
  std::vector<uint8_t*> lookups(num_queries);
  for (size_t j : research_scann::Seq(num_queries)) {
    lookups_storage[j] = RandomBytes(GetRNG(), lut_bytes);
    lookups[j] = lookups_storage[j].get();
  }

  using TopN = research_scann::FastTopNeighbors<float>;
  for (auto _ : state) {
    // Init TopN instances.
    std::vector<TopN> topns(num_queries);
    std::vector<TopN*> topn_ptrs(num_queries);
    for (size_t j : research_scann::Seq(num_queries)) {
      topns[j].Init(num_neighbors);
      topn_ptrs[j] = &topns[j];
    }
    std::vector<float> bias(num_queries, 0);
    std::vector<float> multipliers(num_queries, 0.1);
    research_scann::asymmetric_hashing_internal::LUT16ArgsTopN<float, TopN>
        lut16_args;
    lut16_args.packed_dataset = packed_dataset;
    lut16_args.enable_avx512_codepath = enable_avx512_codepath;
    lut16_args.num_32dp_simd_iters = num_32dp_simd_iters;
    lut16_args.num_blocks = num_codes;
    lut16_args.lookups = lookups;
    lut16_args.first_dp_index = 0;
    lut16_args.biases = bias;
    lut16_args.fixed_point_multipliers = multipliers;
    lut16_args.prefetch_strategy = strategy;
    lut16_args.num_datapoints = num_datapoints;
    lut16_args.fast_topns = topn_ptrs;

    LUT16Interface::GetTopFloatDistances(std::move(lut16_args));
    MaybeFlushCache({packed_dataset, database_bytes}, state, flush_cache);
  }

  // Measure throughput in database points per second.
  state.SetItemsProcessed(state.iterations() * num_queries * num_datapoints);

  // Measure memory bandwidth consumed assuming lookup tables are in cache.
  state.SetBytesProcessed(state.iterations() * num_32dp_simd_iters * 16 *
                          num_codes);
}

std::string GetBenchmarkName(const std::string& bm_base_name,
                             const BenchmarkArgs& args) {
  return bm_base_name + args.GetName();
}

std::vector<bool> GetEnableAvx512Codepath() {
  if (research_scann::RuntimeSupportsAvx512()) {
    LOG(INFO) << "RuntimeSupportsAvx512";
    return {true, false};
  }
  LOG(INFO) << "Avx512 not supported";
  return {false};
}

std::vector<BenchmarkArgs> GetBenchmarkArgs() {
  std::vector<BenchmarkArgs> args;
  std::vector<bool> enable_avx512_codepath = GetEnableAvx512Codepath();

  for (int num_blocks : kNumBlocks) {
    for (bool enable_avx512 : enable_avx512_codepath) {
      for (bool flush_cache : kFlushCacheBetweenIters) {
        args.push_back(BenchmarkArgs{.num_blocks = num_blocks,
                                     .enable_avx512 = enable_avx512,
                                     .flush_cache = flush_cache});
      }
    }
  }
  return args;
}

void RegisterSerialDistanceComputationBenchmark() {
  for (const auto& args : GetBenchmarkArgs()) {
    std::string bm_name =
        GetBenchmarkName("BM_SIMD_SerialDistanceComputation", args);

    benchmark::RegisterBenchmark(bm_name, BM_SerialDistanceComputationImpl,
                                 args.num_blocks, args.enable_avx512,
                                 args.flush_cache, kBatchSize,
                                 kNumDatabasePoints, kPrefetchStrategy);
  }
}

void RegisterSerialTopnBenchmark() {
  for (const auto& args : GetBenchmarkArgs()) {
    std::string bm_name = GetBenchmarkName("BM_SIMD_SerialTopn", args);

    benchmark::RegisterBenchmark(
        bm_name, BM_SerialTopnInt16Impl, args.num_blocks, args.enable_avx512,
        args.flush_cache, kBatchSize, kNumDatabasePoints, kPrefetchStrategy,
        kNumNeighbors);
  }
}

void RegisterSerialFloatTopnBenchmark() {
  for (const auto& args : GetBenchmarkArgs()) {
    std::string bm_name = GetBenchmarkName("BM_SIMD_SerialTopnFloat", args);

    benchmark::RegisterBenchmark(
        bm_name, BM_SerialTopnFloatImpl, args.num_blocks, args.enable_avx512,
        args.flush_cache, kBatchSize, kNumDatabasePoints, kPrefetchStrategy,
        kNumNeighbors);
  }
}

}  // namespace

void RegisterBenchmarks() {
  RegisterSerialDistanceComputationBenchmark();
  RegisterSerialTopnBenchmark();
  RegisterSerialFloatTopnBenchmark();
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    fleetbench::DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
    fleetbench::DynamicRegistrar::Get()->AddDefaultFilter(
        ".*num_blocks:256/enable_avx512:false/flush_cache:false");
  }
};

BenchmarkRegisterer br;

}  // namespace fleetbench::simd
