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

#include "fleetbench/proto/Message0.pb.h"
#include "fleetbench/proto/Message1.pb.h"
#include "fleetbench/proto/Message2.pb.h"
#include "fleetbench/proto/Message3.pb.h"
#include "fleetbench/proto/Message4.pb.h"
#include "fleetbench/proto/Message5.pb.h"
#include "fleetbench/proto/Message6.pb.h"
#include "fleetbench/proto/Message7.pb.h"
#include "fleetbench/proto/Message8.pb.h"
#include "fleetbench/proto/Message9.pb.h"
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

  Message<Message0> message0_;
  Message<Message1> message1_;
  Message<Message2> message2_;
  Message<Message3> message3_;
  Message<Message4> message4_;
  Message<Message5> message5_;
  Message<Message6> message6_;
  Message<Message7> message7_;
  Message<Message8> message8_;
  Message<Message9> message9_;
};

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_LIFECYCLE_H_
