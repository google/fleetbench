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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_LIFECYCLE_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_LIFECYCLE_H_

#include <cstdint>
#include <string>
#include <vector>

#include "fleetbench/proto/representative1.pb.h"
#include "fleetbench/proto/representative10.pb.h"
#include "fleetbench/proto/representative2.pb.h"
#include "fleetbench/proto/representative3.pb.h"
#include "fleetbench/proto/representative4.pb.h"
#include "fleetbench/proto/representative5.pb.h"
#include "fleetbench/proto/representative6.pb.h"
#include "fleetbench/proto/representative7.pb.h"
#include "fleetbench/proto/representative8.pb.h"
#include "fleetbench/proto/representative9.pb.h"

namespace fleetbench::proto {

const int kMaxValueStringSize = 1 << 20;

class ProtoLifecycle {
 public:
  ProtoLifecycle(uint32_t working_set_size)
      : working_set_size_(working_set_size),
        indices_(working_set_size),
        m1_messages_(working_set_size),
        m1_other_messages_(working_set_size),
        m1_strings_(working_set_size),
        m37_messages_(working_set_size),
        m37_other_messages_(working_set_size),
        m37_strings_(working_set_size),
        m95_messages_(working_set_size),
        m95_other_messages_(working_set_size),
        m95_strings_(working_set_size),
        m151_messages_(working_set_size),
        m151_other_messages_(working_set_size),
        m151_strings_(working_set_size),
        m204_messages_(working_set_size),
        m204_other_messages_(working_set_size),
        m204_strings_(working_set_size),
        m238_messages_(working_set_size),
        m238_other_messages_(working_set_size),
        m238_strings_(working_set_size),
        m305_messages_(working_set_size),
        m305_other_messages_(working_set_size),
        m305_strings_(working_set_size),
        m378_messages_(working_set_size),
        m378_other_messages_(working_set_size),
        m378_strings_(working_set_size),
        m437_messages_(working_set_size),
        m437_other_messages_(working_set_size),
        m437_strings_(working_set_size),
        m493_messages_(working_set_size),
        m493_other_messages_(working_set_size),
        m493_strings_(working_set_size) {}
  // Messages are allocated on the arena, and are freed automatically when arena
  // goes out of scope, so no need to `delete` them explicitly.
  ~ProtoLifecycle() {}
  void Init(google::protobuf::Arena* arena);
  void Run();
  uint32_t GetWorkingSetSize() { return working_set_size_; }

 private:
  template <typename T>
  void InitMessages(std::vector<T*>& messages, std::vector<T*>& other_messages,
                    google::protobuf::Arena* arena);

  uint32_t working_set_size_;
  std::string s_;
  std::vector<int> indices_;

  std::vector<M1*> m1_messages_;
  std::vector<M1*> m1_other_messages_;
  std::vector<std::string> m1_strings_;
  std::vector<M37*> m37_messages_;
  std::vector<M37*> m37_other_messages_;
  std::vector<std::string> m37_strings_;
  std::vector<M95*> m95_messages_;
  std::vector<M95*> m95_other_messages_;
  std::vector<std::string> m95_strings_;
  std::vector<M151*> m151_messages_;
  std::vector<M151*> m151_other_messages_;
  std::vector<std::string> m151_strings_;
  std::vector<M204*> m204_messages_;
  std::vector<M204*> m204_other_messages_;
  std::vector<std::string> m204_strings_;
  std::vector<M238*> m238_messages_;
  std::vector<M238*> m238_other_messages_;
  std::vector<std::string> m238_strings_;
  std::vector<M305*> m305_messages_;
  std::vector<M305*> m305_other_messages_;
  std::vector<std::string> m305_strings_;
  std::vector<M378*> m378_messages_;
  std::vector<M378*> m378_other_messages_;
  std::vector<std::string> m378_strings_;
  std::vector<M437*> m437_messages_;
  std::vector<M437*> m437_other_messages_;
  std::vector<std::string> m437_strings_;
  std::vector<M493*> m493_messages_;
  std::vector<M493*> m493_other_messages_;
  std::vector<std::string> m493_strings_;
};

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_LIFECYCLE_H_
