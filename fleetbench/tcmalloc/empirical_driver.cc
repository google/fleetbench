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
// This file defines the skeleton of generated benchmark files. It contains
// the includes, gunit benchmark code, and main entrypoint.

#include "fleetbench/tcmalloc/empirical_driver.h"

#include <algorithm>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <filesystem>  //NOLINT
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <thread>  // NOLINT(build/c++11)
#include <vector>

#include "absl/base/attributes.h"
#include "absl/base/internal/spinlock.h"
#include "absl/log/check.h"
#include "absl/strings/match.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_replace.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/tcmalloc/empirical.h"
#include "tcmalloc/malloc_extension.h"

namespace fleetbench {
namespace tcmalloc {

namespace {

void* alloc(size_t s) { return ::operator new(s); }

// The constants below represent the defaults in the benchmark construction
// parameters.

static constexpr int64_t kBatch = 100;
// When non-zero, empirical driver will simulate tick of ReleaseMemoryToOS
// iteration, given number of bytes allocated.
static constexpr int64_t kSimulatedBytesPerSec = 0;
// The total number of allocs / deallocs to precalculate for later replay.
// Memory required to store replay buffers scales with the number of threads.
static constexpr size_t kRecordAndReplayBufferSize = 1'000'000;
// Number of bytes to try to release from the page heap per second.
static constexpr int64_t kEmpiricalMallocReleaseBytesPerSec = 0;
// Number of iterations to warm up the benchmark before the main benchmark loop.
static constexpr size_t kNumWarmUpIterations = 500000;

class SequenceNumber {
 public:
  constexpr SequenceNumber() : value_(0) {}
  SequenceNumber(const SequenceNumber&) = delete;
  SequenceNumber& operator=(const SequenceNumber&) = delete;

  intptr_t GetNext() { return value_.fetch_add(1, std::memory_order_relaxed); }

 private:
  std::atomic<intptr_t> value_;
};

ABSL_CONST_INIT StatsCounter reps;

class SimThread {
 public:
  SimThread(int n, absl::Span<const std::unique_ptr<SimThread>> siblings,
            size_t bytes, size_t transient, absl::string_view profile)
      : n_(n),
        thread_is_done_(false),
        siblings_(siblings),
        bytes_(bytes),
        transient_(transient),
        nthreads_(siblings.size()),
        profile_((GetEmpiricalDataEntries(profile))),
        load_(GetRNG()(), profile_, bytes_, alloc, sized_delete),
        done_recording_(false) {
    if (n == 0) {
      run_release_each_bytes_ =
          (kSimulatedBytesPerSec + nthreads_ - 1) / nthreads_;
    }
  }

  void mark_thread_done() {
    thread_is_done_.store(true, std::memory_order_release);
  }

  size_t total_bytes_allocated() {
    return load_bytes_allocated_.load(std::memory_order_relaxed);
  }

  size_t load_allocations() {
    return load_allocations_.load(std::memory_order_relaxed);
  }

  size_t usage() { return load_usage_.load(std::memory_order_relaxed); }

  void RecordBirthsAndDeaths(EmpiricalData* load) {
    // Round number of births / deaths to record down to a multiple of kBatch.
    const int buffer_size = (kRecordAndReplayBufferSize / kBatch) * kBatch;
    for (int i = 0; i < buffer_size; ++i) {
      load->RecordNext();
    }

    load->RestoreSnapshot();
    load->BuildDeathObjectPointers();
  }

  void RecordTraceIfNeeded() {
    if (done_recording_) {
      return;
    }

    CHECK_GT(transient_, 0);
    auto transient = std::make_unique<EmpiricalData>(n_, profile_, transient_,
                                                     alloc, sized_delete);
    transient.reset(nullptr);

    RecordBirthsAndDeaths(&load_);
    done_recording_ = true;
  }

  void ReplayTrace() {
    DCHECK(done_recording_);
    for (int i = 0; i < kBatch; i++) {
      load_.ReplayNext();
    }
    load_.RestartTraceIfNecessary();
    reps.Add(kBatch);
    auto allocated = load_.total_bytes_allocated();
    load_bytes_allocated_.store(allocated, std::memory_order_relaxed);
    auto total_num_allocated = load_.total_num_allocated();
    load_allocations_.store(total_num_allocated, std::memory_order_relaxed);

    if (run_release_each_bytes_ != 0 && allocated >= next_release_boundary_) {
      next_release_boundary_ += run_release_each_bytes_;
      ::tcmalloc::MallocExtension::ReleaseMemoryToSystem(
          kEmpiricalMallocReleaseBytesPerSec);
    }

    load_usage_.store(load_.usage(), std::memory_order_relaxed);
  }

 private:
  size_t n_;
  std::atomic<bool> thread_is_done_;
  const absl::Span<const std::unique_ptr<SimThread>> siblings_;
  size_t bytes_, transient_;
  uint64_t nthreads_;
  std::vector<EmpiricalData::Entry> profile_;
  std::atomic<size_t> load_bytes_allocated_{0};
  std::atomic<size_t> load_allocations_{0};
  std::atomic<size_t> load_usage_{0};
  absl::base_internal::SpinLock lock_;
  size_t run_release_each_bytes_{};
  size_t next_release_boundary_{};
  EmpiricalData load_;
  bool done_recording_;
};

size_t GetProp(absl::string_view name) {
  std::optional<size_t> x =
      ::tcmalloc::MallocExtension::GetNumericProperty(name);
  // If we are running under a sanitizer, we may not get every property exposed
  // to us.
#if !(defined(ABSL_HAVE_ADDRESS_SANITIZER) || \
      defined(ABSL_HAVE_MEMORY_SANITIZER) ||  \
      defined(ABSL_HAVE_THREAD_SANITIZER) ||  \
      defined(UNDEFINED_BEHAVIOR_SANITIZER))
  CHECK(x.has_value());
#endif
  return x.value_or(0);
}

}  // namespace

std::vector<std::unique_ptr<SimThread>>& GetSimThreads() {
  static auto* sim_threads = new std::vector<std::unique_ptr<SimThread>>();
  return *sim_threads;
}

// Gets a list of distribution file paths.
static std::vector<std::filesystem::path> GetDistributionFilesPath() {
  return GetMatchingFiles(GetFleetbenchRuntimePath("tcmalloc/distributions"),
                          "TCMALLOC");
}

// Gets a single file that matches the input file key word
static std::filesystem::path GetFilePath(absl::string_view file_key_word) {
  return GetMatchingFiles(GetFleetbenchRuntimePath("tcmalloc/distributions"),
                          file_key_word)[0];
}

void BM_TCMalloc_Empirical_Driver_Setup(const benchmark::State& state) {
  // Gets distribution name
  std::string distribution_name = state.name();
  std::string prefix = "BM_TCMALLOC_";
  QCHECK(absl::StrContains(distribution_name, prefix));
  distribution_name.replace(0, prefix.size(), "");

  // Gets distribution profile
  std::string profile_path =
      GetFilePath(absl::StrCat("TCMALLOC_", distribution_name));

  // Gets heap size
  std::string heap_size_file = GetFilePath("heap_size");

  const size_t nthreads = state.threads();
  GetSimThreads().resize(nthreads);

  // Total size of base heap
  uint64_t base_heap_size =
      uint64_t{GetHeapSizes(heap_size_file)[distribution_name]} << 20;
  const size_t per_thread_size = base_heap_size / nthreads;

  // Additional size of data allocated at program start, then freed before
  // running main benchmark.
  size_t transient_heap_size = base_heap_size * 0.0001;
  const size_t per_thread_transient =
      std::max(transient_heap_size / nthreads, 1ul);

  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

  for (size_t i = 0; i < nthreads; ++i) {
    auto& sim_threads = GetSimThreads();
    sim_threads[i] = std::make_unique<SimThread>(
        i, sim_threads, per_thread_size, per_thread_transient, profile_path);
  }
}

void BM_TCMalloc_Empirical_Driver_Teardown(const benchmark::State& state) {
  GetSimThreads().clear();
}

static void BM_TCMalloc_Empirical_Driver(benchmark::State& state) {
  const size_t thread_idx = state.thread_index();
  auto& sim_threads = GetSimThreads();
  sim_threads[thread_idx]->RecordTraceIfNeeded();

  // We do not use the MinWarmUpTime feature of the benchmark framework here,
  // as that feature calls Teardown and Setup after the warm-up phase, which
  // resets the state that we want to establish with the warm-up.
  for (int i = 0; i < kNumWarmUpIterations; i++) {
    sim_threads[thread_idx]->ReplayTrace();
  }

  size_t bytes_warm_up = sim_threads[thread_idx]->total_bytes_allocated();
  size_t allocations_warm_up = sim_threads[thread_idx]->load_allocations();

  for (auto _ : state) {
    sim_threads[thread_idx]->ReplayTrace();
  }

  size_t bytes =
      sim_threads[thread_idx]->total_bytes_allocated() - bytes_warm_up;
  size_t allocations =
      sim_threads[thread_idx]->load_allocations() - allocations_warm_up;
  double bytes_per_allocation = bytes / allocations;

  // Bytes and allocations per second is most useful for applications.
  state.counters["RateBytes"] = benchmark::Counter(
      bytes, benchmark::Counter::kIsRate, benchmark::Counter::OneK::kIs1024);
  state.counters["RateAllocations"] =
      benchmark::Counter(allocations, benchmark::Counter::kIsRate,
                         benchmark::Counter::OneK::kIs1000);

  // Bytes per allocation is useful to compare with application behaviors.
  state.counters["BytesPerAllocation"] =
      benchmark::Counter(bytes_per_allocation, benchmark::Counter::kAvgThreads,
                         benchmark::Counter::OneK::kIs1024);

  // Collects interested counters
  // NOTE: All counters below are estimations of per-iteration and per-thread.
  size_t in_use = GetProp("generic.current_allocated_bytes");
  size_t local = GetProp("tcmalloc.local_bytes");
  size_t pageheap = GetProp("tcmalloc.pageheap_free_bytes");
  size_t released = GetProp("tcmalloc.pageheap_unmapped_bytes");
  size_t waste = GetProp("tcmalloc.external_fragmentation_bytes");
  size_t central = waste - local - pageheap;

  state.counters["AllocatedBytes"] = benchmark::Counter(
      in_use, benchmark::Counter::kDefaults, benchmark::Counter::OneK::kIs1024);
  state.counters["WasteTotal"] = benchmark::Counter(
      waste, benchmark::Counter::kDefaults, benchmark::Counter::OneK::kIs1024);
  state.counters["WasteLocal"] = benchmark::Counter(
      local, benchmark::Counter::kDefaults, benchmark::Counter::OneK::kIs1024);
  state.counters["WasteCentral"] =
      benchmark::Counter(central, benchmark::Counter::kDefaults,
                         benchmark::Counter::OneK::kIs1024);
  state.counters["WastePageheap"] =
      benchmark::Counter(pageheap, benchmark::Counter::kDefaults,
                         benchmark::Counter::OneK::kIs1024);
  state.counters["SpaceReleased"] =
      benchmark::Counter(released, benchmark::Counter::kDefaults,
                         benchmark::Counter::OneK::kIs1024);
}

#ifdef EMPIRICAL_DRIVER_SMOKETEST
BENCHMARK(BM_TCMalloc_Empirical_Driver)
    ->Name("BM_TCMALLOC_5")
    ->Setup(BM_TCMalloc_Empirical_Driver_Setup)
    ->Teardown(BM_TCMalloc_Empirical_Driver_Teardown)
    ->Threads(4);
#else
// If it's necessary to benchmark with a multiplier of NumCPUs(), e.g. 2x, use:
// ->RangeMultiplier(2)->Range(1, 2 * std::thread::hardware_concurrency())
// NOTE: this will result in ~2 hour runtime for the benchmark with
// --benchmark_filter=all.
// We apply UseRealTime() here to correctly present `RateBytes` and
// `RateAllocation`. The rate values will increase as thread number grows,
// otherwise, we will see flat rate, and even decreased values when more threads
// introduce contention.
void RegisterBenchmarks() {
  const auto& files = GetDistributionFilesPath();

  for (size_t i = 0; i < files.size(); ++i) {
    auto distribution_name = files[i].filename().string();
    distribution_name.erase(distribution_name.find(".csv"));

    auto* benchmark = benchmark::RegisterBenchmark(
        absl::StrCat("BM_", distribution_name).c_str(),
        BM_TCMalloc_Empirical_Driver);
    benchmark->Setup(BM_TCMalloc_Empirical_Driver_Setup)
        ->Teardown(BM_TCMalloc_Empirical_Driver_Teardown)
        ->ThreadRange(1, std::thread::hardware_concurrency())
        ->UseRealTime();
  }
}
#endif

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
#ifndef EMPIRICAL_DRIVER_SMOKETEST
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
#endif
    DynamicRegistrar::Get()->AddDefaultFilter("BM_TCMALLOC_5.*/threads:1$");
  }
};

BenchmarkRegisterer br;

}  // namespace tcmalloc
}  // namespace fleetbench
