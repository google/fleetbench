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

#include <cstddef>
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
#include "google/protobuf/arena.h"

namespace fleetbench::proto {

const int kMaxValueStringSize = 1 << 20;

template <typename MessageType>
struct Message {
  std::vector<MessageType*> message;
  std::vector<MessageType*> other_message;
  std::vector<std::string> string;
};

class ProtoLifecycle {
 public:
  explicit ProtoLifecycle(uint32_t working_set_size)
      : working_set_size_(working_set_size),
        s_(kMaxValueStringSize, 'a'),
        indices_(working_set_size) {
    Resize(message0_);
    Resize(message1_);
    Resize(message2_);
    Resize(message3_);
    Resize(message4_);
    Resize(message5_);
    Resize(message6_);
    Resize(message7_);
    Resize(message8_);
    Resize(message9_);

    // Initialize an array of integers to use indices_ in working sets.
    for (size_t i = 0; i < indices_.size(); ++i) {
      indices_[i] = i;
    }
  }
  // Messages are allocated on the arena, and are freed automatically when
  // arena goes out of scope, so no need to `delete` them explicitly.
  ~ProtoLifecycle() {}
  void Init(google::protobuf::Arena* arena);
  void Run();
  uint32_t GetWorkingSetSize() { return working_set_size_; }

 private:
  template <typename T>
  void InitMessages(std::vector<T*>& messages, std::vector<T*>& other_messages,
                    google::protobuf::Arena* arena);

  template <typename T>
  void Resize(T& messages) {
    messages.message.resize(working_set_size_);
    messages.other_message.resize(working_set_size_);
    messages.string.resize(working_set_size_);
  }

  uint32_t working_set_size_;
  std::string s_;
  std::vector<int> indices_;

  Message<M1> message0_;
  Message<M37> message1_;
  Message<M95> message2_;
  Message<M151> message3_;
  Message<M204> message4_;
  Message<M238> message5_;
  Message<M305> message6_;
  Message<M378> message7_;
  Message<M437> message8_;
  Message<M493> message9_;
};

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_LIFECYCLE_H_
