// Copyright 2023 The Fleetbench Authors
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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_GENERATOR_PROCESS_H_
#define THIRD_PARTY_FLEETBENCH_RPC_GENERATOR_PROCESS_H_

#include <algorithm>
#include <memory>
#include <string>
#include <vector>

#include "absl/random/distributions.h"
#include "absl/random/random.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "fleetbench/rpc/distributionargs.pb.h"

namespace fleetbench::rpc {

template <typename URBG>
class ThreadLocalURBG {
 public:
  using result_type = typename URBG::result_type;

  // Default constructor
  ThreadLocalURBG() = default;

  // Copy disallowed, move allowed.
  // This is an arbitrary choice since all "copies" reference the same bitgen.
  ThreadLocalURBG(const ThreadLocalURBG&) = delete;
  ThreadLocalURBG& operator=(const ThreadLocalURBG&) = delete;
  ThreadLocalURBG(ThreadLocalURBG&&) = default;
  ThreadLocalURBG& operator=(ThreadLocalURBG&&) = default;

  static constexpr result_type(min)() { return (URBG::min)(); }
  static constexpr result_type(max)() { return (URBG::max)(); }

  result_type operator()() {
    thread_local URBG bitgen;
    return bitgen();
  }
};

class EntropySource {
 public:
  template <typename T>
  static T exponential(T lambda) {
    ThreadLocalURBG<absl::BitGen> gen;
    return absl::Exponential(gen, lambda);
  }

  template <typename T>
  static T gaussian(T mean, T stdev) {
    ThreadLocalURBG<absl::BitGen> gen;
    return absl::Gaussian(gen, mean, stdev);
  }

  template <typename T>
  static T uniform(T lo, T hi) {
    ThreadLocalURBG<absl::BitGen> gen;
    return absl::Uniform(gen, lo, hi);
  }

  template <typename T>
  static T poisson(T mean) {
    ThreadLocalURBG<absl::BitGen> gen;
    return absl::Poisson<T>(gen, mean);
  }

  template <typename T>
  static T empirical(const std::vector<T>& dist) {
    return dist[uniform<T>(0, dist.size())];
  }
};

class RandomDistribution {
 public:
  virtual ~RandomDistribution() = default;
  virtual int sample() const = 0;
  virtual int sample_clamped() const {
    // Subclass will override if clamping makes sense.
    // It is not needed for uniform, empirical and constant distributions.
    return sample();
  }
  virtual int clamp_value() const = 0;
  virtual const char* DistName() const = 0;
  virtual std::string Description() const { return std::string(DistName()); }
};

class Constant : public RandomDistribution {
 public:
  explicit Constant(int value) : value_(value) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    return std::make_unique<Constant>(args.constant_value());
  }
  int sample() const override { return value_; }
  int clamp_value() const override { return value_; }
  static constexpr char kName[] = "constant";
  const char* DistName() const override { return kName; }
  std::string Description() const override {
    return absl::StrCat(kName, "=", value_);
  };

 private:
  int value_;
};

class Uniform : public RandomDistribution {
 public:
  Uniform(int lo, int hi) : lo_(lo), hi_(hi) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    return std::make_unique<Uniform>(args.uniform_min(), args.uniform_max());
  }
  int sample() const override { return EntropySource::uniform(lo_, hi_); }
  int clamp_value() const override { return hi_; }
  static constexpr char kName[] = "uniform";
  const char* DistName() const override { return kName; }
  std::string Description() const override {
    return absl::StrCat(kName, "=[", lo_, ",", hi_, "]");
  };

 private:
  int lo_;
  int hi_;
};

class Empirical : public RandomDistribution {
 public:
  explicit Empirical(const std::vector<int>& values) : values_(values) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    auto& arg_values = args.empirical();
    std::vector<int> values;
    values.insert(values.begin(), arg_values.begin(), arg_values.end());
    if (values.empty()) {
      values.push_back(0);
    }
    return std::make_unique<Empirical>(values);
  }
  int sample() const override { return EntropySource::empirical(values_); }
  int clamp_value() const override {
    return *std::max_element(values_.begin(), values_.end());
  }
  static constexpr char kName[] = "empirical";
  const char* DistName() const override { return kName; }

 private:
  std::vector<int> values_;
};

class Exponential : public RandomDistribution {
 public:
  Exponential(double lambda, int max) : lambda_(lambda), max_(max) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    return std::make_unique<Exponential>(args.exponential_lambda(),
                                         args.exponential_max());
  }
  int sample() const override {
    return static_cast<int>(EntropySource::exponential(lambda_));
  }
  int sample_clamped() const override { return std::min(max_, sample()); }
  int clamp_value() const override { return max_; }
  static constexpr char kName[] = "exponential";
  const char* DistName() const override { return kName; }
  std::string Description() const override {
    return absl::StrCat(kName, "=[lambda:", lambda_, ", max:", max_, "]");
  };

 private:
  double lambda_;
  int max_;
};

class Gaussian : public RandomDistribution {
 public:
  Gaussian(double mean, double stdev, int max)
      : mean_(mean), stdev_(stdev), max_(max) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    return std::make_unique<Gaussian>(
        args.gaussian_mean(), args.gaussian_stdev(), args.gaussian_max());
  }
  int sample() const override {
    return static_cast<int>(EntropySource::gaussian(mean_, stdev_));
  }
  int sample_clamped() const override { return std::min(max_, sample()); }
  int clamp_value() const override { return max_; }
  static constexpr char kName[] = "gaussian";
  const char* DistName() const override { return kName; }
  std::string Description() const override {
    return absl::StrCat(kName, "=[mean:", mean_, ", stdev:", stdev_,
                        ", max:", max_, "]");
  };

 private:
  double mean_;
  double stdev_;
  int max_;
};

class Poisson : public RandomDistribution {
 public:
  Poisson(int mean, int max) : mean_(mean), max_(max) {}
  static std::unique_ptr<RandomDistribution> Get(const DistributionArgs& args) {
    return std::make_unique<Poisson>(args.poisson_mean(), args.poisson_max());
  }
  int sample() const override { return EntropySource::poisson(mean_); }
  int sample_clamped() const override { return std::min(max_, sample()); }
  int clamp_value() const override { return max_; }
  static constexpr char kName[] = "poisson";
  const char* DistName() const override { return kName; }
  std::string Description() const override {
    return absl::StrCat(kName, "=[mean:", mean_, ", max:", max_, "]");
  };

 private:
  int mean_;
  int max_;
};

enum class DelayProcess { NO_DELAY, RANDOM_DELAY, FIXED_LOAD };

enum class SizeProcess { FIXED_SIZE, RANDOM_SIZE };

std::unique_ptr<RandomDistribution> GetDistribution(
    const DistributionArgs& args, absl::string_view tag);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_GENERATOR_PROCESS_H_
