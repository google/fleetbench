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

#ifndef TENSORFLOW_CORE_LIB_CORE_THREADPOOL_H_
#define TENSORFLOW_CORE_LIB_CORE_THREADPOOL_H_

#include <functional>
#include <string>

// Minimal subset of tensorflow threadpool needed for Fleetbench and its
// dependencies (ScaNN).  Note this code doesn't do anything, it's merely
// a placeholder to allow the rest of the code to compile.

namespace tensorflow {
class Env {
 public:
  static Env* Default();
};

struct ThreadOptions {
  int stack_size = 0;
};

namespace thread {

class ThreadPool {
 public:
  ThreadPool(const Env* env, const ThreadOptions& options,
             const std::string& name_prefix, int num_threads)
      : num_threads_(num_threads) {}

  int NumThreads() const { return num_threads_; }
  // Schedules fn() for execution in the pool of threads.
  void Schedule(std::function<void()> fn) {}

 private:
  int num_threads_;
};

}  // namespace thread
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_LIB_CORE_THREADPOOL_H_
