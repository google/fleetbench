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
#include <limits>
#include <map>
#include <memory>
#include <optional>
#include <thread>  // NOLINT(build/c++11)
#include <vector>

#include "absl/base/internal/spinlock.h"
#include "absl/base/internal/sysinfo.h"
#include "absl/log/check.h"
#include "absl/strings/str_format.h"
#include "absl/synchronization/barrier.h"
#include "absl/time/clock.h"
#include "absl/time/time.h"
#include "benchmark/benchmark.h"
#include "fleetbench/tcmalloc/empirical.h"
#include "fleetbench/tcmalloc/empirical_distributions.h"
#include "tcmalloc/malloc_extension.h"

namespace fleetbench {
namespace tcmalloc {

namespace {

void* alloc(size_t s) { return ::operator new(s); }

// The constants below represent the defaults in the benchmark construction
// parameters.

static constexpr int64_t kBatch = 100;
// Total size of base heap.
static constexpr uint64_t kBaseHeapSize = 16ul << 30;
// Additional size of data allocated at program start, then freed before running
// main benchmark.
static constexpr uint64_t kTransientHeapSize = kBaseHeapSize * 0.0001;
// When non-zero, empirical driver will simulate tick of ReleaseMemoryToOS
// iteration, given number of bytes allocated.
static constexpr int64_t kSimulatedBytesPerSec = 0;
// The total number of allocs / deallocs to precalculate for later replay.
// Memory required to store replay buffers scales with the number of threads.
static constexpr size_t kRecordAndReplayBufferSize = 100000000;
// Number of bytes to try to release from the page heap per second.
static constexpr int64_t kEmpiricalMallocReleaseBytesPerSec = 0;
// Constants for spikes.
// 1/QPS for spikes.
static constexpr absl::Duration kSpikeRate = absl::Milliseconds(10);
// Processing time for spikes.
static constexpr absl::Duration kSpikeLifetime = absl::Milliseconds(30);
// Probability a spike freed by the thread which created it.
static constexpr double kSpikeLocality = 0.90;
// Additional memory allocated periodically. Could model per-query memory or
// diurnal variation, etc.
static constexpr size_t kSpikeBytes = 0;

enum class DistributionProfile {
  kBeta = 0,
  kBravo,
  kCharlie,
  kDelta,
  kEcho,
  kFoxtrot,
  kMerced,
  kSierra,
  kSigma,
  kUniform,
};

// Which source of profiled allocation to use for the base load.
// This can be beta, bravo, charlie, delta, echo, foxtrot, merced, sierra,
// sigma, or uniform.
const EmpiricalProfile& Profile(DistributionProfile profile) {
  static const auto* choices = []() {
    return new std::map<DistributionProfile, const EmpiricalProfile>{
        {DistributionProfile::kBeta, Beta()},
        {DistributionProfile::kBravo, Bravo()},
        {DistributionProfile::kCharlie, Charlie()},
        {DistributionProfile::kDelta, Delta()},
        {DistributionProfile::kEcho, Echo()},
        {DistributionProfile::kFoxtrot, Foxtrot()},
        {DistributionProfile::kMerced, Merced()},
        {DistributionProfile::kSierra, Sierra()},
        {DistributionProfile::kSigma, Sigma()},
        {DistributionProfile::kUniform, Uniform()}};
  }();

  auto i = choices->find(profile);
  CHECK(i != choices->end());
  return i->second;
}

const EmpiricalProfile& SpikeProfile(const DistributionProfile& spike_profile) {
  return Profile(spike_profile);
}

const EmpiricalProfile& TransientProfile(
    const DistributionProfile& transient_profile) {
  return Profile(transient_profile);
}

class SequenceNumber {
 public:
  constexpr SequenceNumber() : value_(0) {}
  SequenceNumber(const SequenceNumber&) = delete;
  SequenceNumber& operator=(const SequenceNumber&) = delete;

  intptr_t GetNext() { return value_.fetch_add(1, std::memory_order_relaxed); }

 private:
  std::atomic<intptr_t> value_;
};

ABSL_CONST_INIT SequenceNumber seeds;
ABSL_CONST_INIT StatsCounter live_spikes;
ABSL_CONST_INIT StatsCounter spike_usage;
ABSL_CONST_INIT StatsCounter dead_spikes;
ABSL_CONST_INIT StatsCounter reps;

// This represents a sudden increase in usage (think of it as the allocation
// required to serve a query) which lives for a while, then dies.
class Spike {
 public:
  explicit Spike(size_t size, DistributionProfile profile)
      : data_(seeds.GetNext(), SpikeProfile(profile), size, alloc,
              sized_delete) {
    spike_usage.Add(data_.usage());
    live_spikes.Add(1);
  }

  ~Spike() {
    spike_usage.Add(-static_cast<ssize_t>(data_.usage()));
    dead_spikes.Add(1);
  }

  size_t bytes_allocated() const { return data_.total_bytes_allocated(); }

 private:
  EmpiricalData data_;
};

// Generates an overall average of (lifetime/rate) live spikes of size
// <spike_bytes>:
//
// Each thread independently generates full size spikes with random
// timing.  Each thread has an indepedent Poisson process; the Spike
// objects have size spike_bytes; each thread's interarrival is scaled
// down so the overall rate is spike_rate.
absl::Duration SpikeInterarrival(uint64_t num_threads) {
  // Remember, high scale, since this is an interarrival mean, decreases rate.
  static size_t scale = num_threads;
  return kSpikeRate * scale;
}

absl::Duration Exp(absl::BitGen* random, absl::Duration mean) {
  return std::exponential_distribution<double>()(*random) * mean;
}

absl::Duration SpikeLifetime(absl::BitGen* random) {
  return Exp(random, kSpikeLifetime);
}

// On the n-th call to this function from a given thread, returns the proper
// time for the n-th spike from that thread.
absl::Time SpikeTime(uint64_t num_threads) {
  // Don't allow skew in thread creation time.
  static absl::Time begin = absl::Now();
  thread_local size_t i = 0;
  i++;

  // Have a thread local generator for interarrival times.  If we're shared,
  // they should all have the same seed (we still use local generators for
  // scalability.)
  thread_local absl::BitGen local_gen(
      absl::SeedSeq{[]() -> size_t { return seeds.GetNext(); }()});

  thread_local absl::Time last = begin;
  last += Exp(&local_gen, SpikeInterarrival(num_threads));
  return last;
}

class SimThread {
 public:
  SimThread(int n, absl::Barrier* startup,
            absl::Barrier* record_and_replay_barrier,
            absl::Span<const std::unique_ptr<SimThread>> siblings, size_t bytes,
            size_t transient, DistributionProfile profile)
      : n_(n),
        thread_is_done_(false),
        startup_(startup),
        record_and_replay_barrier_(record_and_replay_barrier),
        siblings_(siblings),
        bytes_(bytes),
        transient_(transient),
        spike_is_local_(kSpikeLocality),
        nthreads_(siblings.size()),
        profile_(profile) {
    if (n == 0) {
      run_release_each_bytes_ =
          (kSimulatedBytesPerSec + nthreads_ - 1) / nthreads_;
    }
  }

  void mark_thread_done() {
    thread_is_done_.store(true, std::memory_order_release);
  }

  size_t total_bytes_allocated() {
    return load_bytes_allocated_.load(std::memory_order_relaxed) +
           spike_bytes_allocated_.load(std::memory_order_relaxed);
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

  void Run() {
    EmpiricalData load(n_, Profile(profile_), bytes_, alloc, sized_delete);

    CHECK_GT(transient_, 0);
    auto transient = std::make_unique<EmpiricalData>(
        n_, TransientProfile(profile_), transient_, alloc, sized_delete);
    startup_->Block();
    transient.reset(nullptr);
    {
      absl::base_internal::SpinLockHolder h(&lock_);
      next_spike_ = FirstSpike();
    }

    RecordBirthsAndDeaths(&load);
    // Block until all threads have finished building their traces.  It is
    // possible that some threads will complete this process before others.
    record_and_replay_barrier_->Block();

    // Phase 2: Loop through this thread's trace over and over.
    while (!thread_is_done_.load(std::memory_order_acquire)) {
      // Every so often we need to do something else (i.e. spawn a spike) but I
      // don't want to go through the overhead of computing times every
      // iteration.  100 reps means something like 150usec, which is still
      // plenty good resolution, but very low overhead.
      for (int i = 0; i < kBatch; i++) {
        load.ReplayNext();
      }
      load.RestartTraceIfNecessary();
      absl::Time t = absl::Now();
      reps.Add(kBatch);
      auto allocated = load.total_bytes_allocated();
      load_bytes_allocated_.store(allocated, std::memory_order_relaxed);
      auto total_num_allocated = load.total_num_allocated();
      load_allocations_.store(total_num_allocated, std::memory_order_relaxed);

      if (run_release_each_bytes_ != 0 && allocated >= next_release_boundary_) {
        next_release_boundary_ += run_release_each_bytes_;
        ::tcmalloc::MallocExtension::ReleaseMemoryToSystem(
            kEmpiricalMallocReleaseBytesPerSec);
      }

      load_usage_.store(load.usage(), std::memory_order_relaxed);
      if (KillSpikesCheckNew(t)) {
        MakeSpike(t, load.rng());
      }
    }
  }

 private:
  // returns true if we should make a new spike too!
  bool KillSpikesCheckNew(absl::Time t) {
    std::vector<Spike*> dead;
    bool ready_for_new;
    {
      absl::base_internal::SpinLockHolder h(&lock_);
      ready_for_new = t >= next_spike_;

      auto it = to_kill_.begin();
      for (; it != to_kill_.end() && t >= it->first; ++it) {
        dead.insert(dead.end(), it->second.begin(), it->second.end());
      }
      to_kill_.erase(to_kill_.begin(), it);
    }

    for (auto* d : dead) {
      delete d;
    }

    return ready_for_new;
  }

  absl::Time FirstSpike() {
    if (kSpikeBytes == 0) return absl::InfiniteFuture();

    return SpikeTime(nthreads_);
  }

  void MakeSpike(absl::Time t, absl::BitGen* random) {
    // First, compute next spike times.
    {
      absl::Time when = SpikeTime(nthreads_);
      absl::base_internal::SpinLockHolder h(&lock_);
      next_spike_ = when;
    }

    Spike* s = new Spike(kSpikeBytes, profile_);
    spike_bytes_allocated_.fetch_add(s->bytes_allocated());
    absl::Duration life = SpikeLifetime(random);
    absl::Time death = absl::Now() + life;
    SimThread* killer = this;
    // This slightly overselects ourselves, since we might be the random
    // sibling, but that's minor.
    if (!spike_is_local_(*random)) {
      size_t i = absl::uniform_int_distribution<size_t>(
          0, siblings_.size() - 1)(*random);
      killer = siblings_[i].get();
    }

    absl::base_internal::SpinLockHolder h(&killer->lock_);
    killer->to_kill_[death].push_back(s);
  }

  size_t n_;
  std::atomic<bool> thread_is_done_;
  absl::Time next_spike_ ABSL_GUARDED_BY(lock_);
  absl::Barrier* startup_;
  absl::Barrier* record_and_replay_barrier_;
  const absl::Span<const std::unique_ptr<SimThread>> siblings_;
  size_t bytes_, transient_;
  absl::bernoulli_distribution spike_is_local_;
  uint64_t nthreads_;
  DistributionProfile profile_;
  std::atomic<size_t> load_bytes_allocated_{0};
  std::atomic<size_t> load_allocations_{0};
  std::atomic<size_t> spike_bytes_allocated_{0};
  std::atomic<size_t> load_usage_{0};
  absl::base_internal::SpinLock lock_;
  std::map<absl::Time, std::vector<Spike*>> to_kill_ ABSL_GUARDED_BY(lock_);
  size_t run_release_each_bytes_{};
  size_t next_release_boundary_{};
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

template <DistributionProfile kProfile, uint64_t kHeapSize>
static void BM_TCMalloc_Empirical_Driver(benchmark::State& state) {
  //  Initialize the profile now before startup so we get early errors.
  Profile(kProfile);

  const size_t nthreads = state.range(0);
  const size_t per_thread_size = kHeapSize / nthreads;
  const size_t per_thread_transient =
      std::max(kTransientHeapSize / nthreads, 1ul);

  absl::Barrier b(nthreads + 1);
  absl::Barrier record_and_replay_barrier(nthreads + 1);
  std::vector<std::unique_ptr<SimThread>> sim_threads(nthreads);
  std::vector<std::thread> threads;
  threads.reserve(nthreads);
  for (size_t i = 0; i < nthreads; ++i) {
    sim_threads[i] = std::make_unique<SimThread>(
        i, &b, &record_and_replay_barrier, sim_threads, per_thread_size,
        per_thread_transient, kProfile);
    threads.push_back(std::thread(&SimThread::Run, sim_threads[i].get()));
  }

  // Initialize the counters.
  size_t bytes = 0;
  size_t allocations = 0;
  size_t in_use = 0;
  size_t local = 0;
  size_t pageheap = 0;
  size_t released = 0;
  size_t waste = 0;
  size_t central = 0;

  b.Block();
  // Block until all threads have precalculated the birth / death sequence.
  record_and_replay_barrier.Block();

  for (auto _ : state) {
    in_use = GetProp("generic.current_allocated_bytes");
    local = GetProp("tcmalloc.local_bytes");
    pageheap = GetProp("tcmalloc.pageheap_free_bytes");
    released = GetProp("tcmalloc.pageheap_unmapped_bytes");
    waste = GetProp("tcmalloc.external_fragmentation_bytes");
    central = waste - local - pageheap;
  }
  for (const auto& st : sim_threads) {
    st->mark_thread_done();
    bytes += st->total_bytes_allocated();
    allocations += st->load_allocations();
  }
  for (auto& t : threads) {
    t.join();
  }

  // Counters of total for the entire execution of the benchmark.
  state.counters["SpikesBytes"] =
      benchmark::Counter(spike_usage.value(), benchmark::Counter::kDefaults,
                         benchmark::Counter::OneK::kIs1024);

  // Bytes and allocations per second is most useful for applications.
  state.counters["RateBytes"] = benchmark::Counter(
      bytes, benchmark::Counter::kIsRate, benchmark::Counter::OneK::kIs1024);
  state.counters["RateAllocations"] =
      benchmark::Counter(allocations, benchmark::Counter::kIsRate,
                         benchmark::Counter::OneK::kIs1000);
  state.counters["SpikesRate"] =
      benchmark::Counter(dead_spikes.value(), benchmark::Counter::kIsRate,
                         benchmark::Counter::OneK::kIs1000);

  // All other counters are per-iteration.
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

#ifdef SAN
// This benchmark is only useful for sanitizer tests.
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kBeta,
                   16ul << 10)
    ->Arg(4);
#else
// If it's necessary to benchmark with a multiplier of NumCPUs(), e.g. 2x, use:
// ->RangeMultiplier(2)->Range(1, 2 * absl::base_internal::NumCPUs())
// NOTE: this will result in ~2 hour runtime for the benchmark with
// --benchmark_filter=all.
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kBeta,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kBravo,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(2);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kCharlie,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kDelta,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kEcho,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kFoxtrot,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kMerced,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kSierra,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kSigma,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
BENCHMARK_TEMPLATE(BM_TCMalloc_Empirical_Driver, DistributionProfile::kUniform,
                   kBaseHeapSize)
    ->ArgName("CPU_nums")
    ->Range(1, absl::base_internal::NumCPUs())
    ->MinWarmUpTime(0.5);
#endif

}  // namespace tcmalloc
}  // namespace fleetbench
