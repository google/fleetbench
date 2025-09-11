// Copyright 2023 The Fleetbench Authors
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

#include "fleetbench/dynamic_registrar.h"

#include <functional>
#include <string>
#include <utility>

namespace fleetbench {

DynamicRegistrar* DynamicRegistrar::Get() {
  static DynamicRegistrar* dr = new DynamicRegistrar();
  return dr;
}

void DynamicRegistrar::AddCallback(std::function<void()> callback) {
  callbacks_.push_back(std::move(callback));
}

void DynamicRegistrar::Run() {
  for (auto& callback : callbacks_) {
    callback();
  }
  callbacks_.clear();
}

void DynamicRegistrar::AddDefaultFilter(std::string filter,
                                        ThreadingMode mode) {
  if (mode == ThreadingMode::kSingleThreaded || mode == ThreadingMode::kBoth) {
    if (!default_single_threaded_filter_.empty()) {
      default_single_threaded_filter_.push_back('|');
    }
    default_single_threaded_filter_.append(filter);
  }
  if (mode == ThreadingMode::kMultiThreaded || mode == ThreadingMode::kBoth) {
    if (!default_multi_threaded_filter_.empty()) {
      default_multi_threaded_filter_.push_back('|');
    }
    default_multi_threaded_filter_.append(filter);
  }
}

std::string DynamicRegistrar::GetDefaultFilter(ThreadingMode mode) const {
  if (mode == ThreadingMode::kSingleThreaded) {
    return default_single_threaded_filter_;
  }
  return default_multi_threaded_filter_;
}

}  // namespace fleetbench
