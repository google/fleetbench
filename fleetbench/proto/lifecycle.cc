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

#include "fleetbench/proto/lifecycle.h"

#include <algorithm>
#include <cstddef>
#include <string>
#include <vector>

#include "fleetbench/common/common.h"
#include "fleetbench/proto/populate_protos.h"
#include "google/protobuf/arena.h"

namespace fleetbench::proto {

void ProtoLifecycle::Init(google::protobuf::Arena* arena) {
  std::string s_(kMaxValueStringSize, 'a');

  // Initialize an array of integers to use indices_ in working sets.
  for (size_t i = 0; i < indices_.size(); ++i) {
    indices_[i] = i;
  }
  // Declare variables for M1 lifecycles.
  InitMessages(m1_messages_, m1_other_messages_, arena);
  // Initialize other_message instance of M1.
  for (const auto& i : indices_) {
    M1_Set_F1(m1_other_messages_[i], &s_);
  }
  // Declare variables for M37 lifecycles.
  InitMessages(m37_messages_, m37_other_messages_, arena);
  // Initialize other_message instance of M37.
  for (const auto& i : indices_) {
    M37_Set_F1(m37_other_messages_[i], &s_);
  }
  // Declare variables for M95 lifecycles.
  InitMessages(m95_messages_, m95_other_messages_, arena);
  // Initialize other_message instance of M95.
  for (const auto& i : indices_) {
    M95_Set_F1(m95_other_messages_[i], &s_);
  }
  // Declare variables for M151 lifecycles.
  InitMessages(m151_messages_, m151_other_messages_, arena);
  // Initialize other_message instance of M151.
  for (const auto& i : indices_) {
    M151_Set_F1(m151_other_messages_[i], &s_);
  }
  // Declare variables for M204 lifecycles.
  InitMessages(m204_messages_, m204_other_messages_, arena);
  // Initialize other_message instance of M204.
  for (const auto& i : indices_) {
    M204_Set_F1(m204_other_messages_[i], &s_);
  }
  // Declare variables for M238 lifecycles.
  InitMessages(m238_messages_, m238_other_messages_, arena);
  // Initialize other_message instance of M238.
  for (const auto& i : indices_) {
    M238_Set_F1(m238_other_messages_[i], &s_);
  }
  // Declare variables for M305 lifecycles.
  InitMessages(m305_messages_, m305_other_messages_, arena);
  // Initialize other_message instance of M305.
  for (const auto& i : indices_) {
    M305_Set_F1(m305_other_messages_[i], &s_);
  }
  // Declare variables for M378 lifecycles.
  InitMessages(m378_messages_, m378_other_messages_, arena);
  // Initialize other_message instance of M378.
  for (const auto& i : indices_) {
    M378_Set_F1(m378_other_messages_[i], &s_);
  }
  // Declare variables for M437 lifecycles.
  InitMessages(m437_messages_, m437_other_messages_, arena);
  // Initialize other_message instance of M437.
  for (const auto& i : indices_) {
    M437_Set_F1(m437_other_messages_[i], &s_);
  }
  // Declare local variables for M493 lifecycles.
  InitMessages(m493_messages_, m493_other_messages_, arena);
  // Initialize other_message instance of M493.
  for (const auto& i : indices_) {
    M493_Set_F1(m493_other_messages_[i], &s_);
  }
}

template <typename T>
void ProtoLifecycle::InitMessages(std::vector<T*>& messages,
                                  std::vector<T*>& other_messages,
                                  google::protobuf::Arena* arena) {
  for (const auto& i : indices_) {
    messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
    other_messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
  }
}

void ProtoLifecycle::Run() {
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m151_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m238_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m305_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m305_messages_[i], m305_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m437_messages_[i], m437_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m95_messages_[i], m95_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m305_messages_[i], &m305_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m1_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Set_F2(m493_messages_[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m378_messages_[i], m378_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Swap(m238_messages_[i], m238_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m204_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m493_messages_[i], &m493_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m493_messages_[i], &m493_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m1_messages_[i], m1_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m437_messages_[i], &m437_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m305_messages_[i], &m305_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m437_messages_[i], &m437_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m305_other_messages_[i], &m305_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Get_F1(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m204_messages_[i], m204_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m204_messages_[i], &m204_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m204_messages_[i], m204_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m95_messages_[i], &m95_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m493_messages_[i], m493_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m204_messages_[i], &m204_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m151_messages_[i], m151_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m37_messages_[i], m37_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Descriptor(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    EnumDescriptor(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m151_messages_[i], m151_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F1(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m238_messages_[i], &m238_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M437_Get_F1(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M305_Get_F1(m305_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M204_Get_F1(m204_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m151_messages_[i], &m151_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m238_messages_[i], &m238_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m95_messages_[i], &m95_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m437_messages_[i], m437_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m151_messages_[i], &m151_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m437_messages_[i], m437_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m437_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m437_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Get_F1(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M238_Get_F1(m238_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m37_messages_[i], &m37_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m37_messages_[i], &m37_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(m1_messages_[i], &m1_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Set_F2(m95_messages_[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m1_messages_[i], &m1_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    SpaceUsed(m305_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M1_Get_F1(m1_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m305_messages_[i], m305_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m305_messages_[i], m305_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m305_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m305_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m95_other_messages_[i], &m95_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m95_messages_[i], &m95_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F2(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m238_messages_[i], m238_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F1(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m238_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m238_messages_[i], m238_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m238_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m238_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m238_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m204_messages_[i], m204_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m1_messages_[i], m1_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M151_Get_F1(m151_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(m1_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m1_messages_[i], m1_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m1_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m1_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m493_other_messages_[i], &m493_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m493_messages_[i], &m493_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Get_F2(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m95_messages_[i], m95_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m95_messages_[i], m95_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m95_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m95_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(m151_messages_[i], m151_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Get_F2(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m493_messages_[i], m493_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m493_messages_[i], m493_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m493_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m493_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Set_F2(m37_messages_[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F3(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m37_messages_[i], &m37_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m204_other_messages_[i], &m204_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m204_messages_[i], &m204_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Set_F3(m37_messages_[i], m37_other_messages_[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m37_messages_[i], &m37_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F2(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M204_Get_F2(m204_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m204_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m204_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m37_messages_[i], m37_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F4(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F3(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m151_other_messages_[i], &m151_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m37_messages_[i], m37_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m151_messages_[i], &m151_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m37_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m37_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M151_Get_F2(m151_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(m151_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m151_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m151_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F5(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F6(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(m378_messages_[i], &m378_strings_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m378_messages_[i], m378_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F7(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(m378_messages_[i], m378_other_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m378_messages_[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(m378_other_messages_[i]);
  }
}

}  // namespace fleetbench::proto
