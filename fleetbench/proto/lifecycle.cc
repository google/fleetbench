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
  // Declare variables for M1 lifecycles.
  InitMessages(message0_.message, message0_.other_message, arena);
  // Initialize other_message instance of M1.
  for (const auto& i : indices_) {
    M1_Set_F1(message0_.other_message[i], &s_);
  }
  // Declare variables for M37 lifecycles.
  InitMessages(message1_.message, message1_.other_message, arena);
  // Initialize other_message instance of M37.
  for (const auto& i : indices_) {
    M37_Set_F1(message1_.other_message[i], &s_);
  }
  // Declare variables for M95 lifecycles.
  InitMessages(message2_.message, message2_.other_message, arena);
  // Initialize other_message instance of M95.
  for (const auto& i : indices_) {
    M95_Set_F1(message2_.other_message[i], &s_);
  }
  // Declare variables for M151 lifecycles.
  InitMessages(message3_.message, message3_.other_message, arena);
  // Initialize other_message instance of M151.
  for (const auto& i : indices_) {
    M151_Set_F1(message3_.other_message[i], &s_);
  }
  // Declare variables for M204 lifecycles.
  InitMessages(message4_.message, message4_.other_message, arena);
  // Initialize other_message instance of M204.
  for (const auto& i : indices_) {
    M204_Set_F1(message4_.other_message[i], &s_);
  }
  // Declare variables for M238 lifecycles.
  InitMessages(message5_.message, message5_.other_message, arena);
  // Initialize other_message instance of M238.
  for (const auto& i : indices_) {
    M238_Set_F1(message5_.other_message[i], &s_);
  }
  // Declare variables for M305 lifecycles.
  InitMessages(message6_.message, message6_.other_message, arena);
  // Initialize other_message instance of M305.
  for (const auto& i : indices_) {
    M305_Set_F1(message6_.other_message[i], &s_);
  }
  // Declare variables for M378 lifecycles.
  InitMessages(message7_.message, message7_.other_message, arena);
  // Initialize other_message instance of M378.
  for (const auto& i : indices_) {
    M378_Set_F1(message7_.other_message[i], &s_);
  }
  // Declare variables for M437 lifecycles.
  InitMessages(message8_.message, message8_.other_message, arena);
  // Initialize other_message instance of M437.
  for (const auto& i : indices_) {
    M437_Set_F1(message8_.other_message[i], &s_);
  }
  // Declare local variables for M493 lifecycles.
  InitMessages(message9_.message, message9_.other_message, arena);
  // Initialize other_message instance of M493.
  for (const auto& i : indices_) {
    M493_Set_F1(message9_.other_message[i], &s_);
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
    Create(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message3_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message5_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message6_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message6_.message[i], message6_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message8_.message[i], message8_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message2_.message[i], message2_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message6_.message[i], &message6_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message0_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Set_F2(message9_.message[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message7_.message[i], message7_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Swap(message5_.message[i], message5_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message4_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message9_.message[i], &message9_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message9_.message[i], &message9_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message0_.message[i], message0_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message8_.message[i], &message8_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message6_.message[i], &message6_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message8_.message[i], &message8_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message6_.other_message[i], &message6_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Get_F1(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message4_.message[i], message4_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message4_.message[i], &message4_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message4_.message[i], message4_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message2_.message[i], &message2_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message9_.message[i], message9_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Create(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message4_.message[i], &message4_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message3_.message[i], message3_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message1_.message[i], message1_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Descriptor(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    EnumDescriptor(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message3_.message[i], message3_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F1(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message5_.message[i], &message5_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M437_Get_F1(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M305_Get_F1(message6_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M204_Get_F1(message4_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message3_.message[i], &message3_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message5_.message[i], &message5_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message2_.message[i], &message2_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message8_.message[i], message8_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message3_.message[i], &message3_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message8_.message[i], message8_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message8_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message8_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Get_F1(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M238_Get_F1(message5_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message1_.message[i], &message1_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message1_.message[i], &message1_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Serialize(message0_.message[i], &message0_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Set_F2(message2_.message[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message0_.message[i], &message0_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    SpaceUsed(message6_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M1_Get_F1(message0_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message6_.message[i], message6_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message6_.message[i], message6_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message6_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message6_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message2_.other_message[i], &message2_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message2_.message[i], &message2_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F2(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message5_.message[i], message5_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F1(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message5_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message5_.message[i], message5_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    ByteSize(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message5_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message5_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message5_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Reflection(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message4_.message[i], message4_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message0_.message[i], message0_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M151_Get_F1(message3_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(message0_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message0_.message[i], message0_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message0_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message0_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message9_.other_message[i], &message9_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message9_.message[i], &message9_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M95_Get_F2(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message2_.message[i], message2_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message2_.message[i], message2_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message2_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message2_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Copy(message3_.message[i], message3_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M493_Get_F2(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message9_.message[i], message9_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message9_.message[i], message9_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message9_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message9_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Set_F2(message1_.message[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F3(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message1_.message[i], &message1_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message4_.other_message[i], &message4_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message4_.message[i], &message4_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Set_F3(message1_.message[i], message1_.other_message[i], &s_);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message1_.message[i], &message1_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F2(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M204_Get_F2(message4_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message4_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message4_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message1_.message[i], message1_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F4(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M37_Get_F3(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message3_.other_message[i], &message3_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message1_.message[i], message1_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message3_.message[i], &message3_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message1_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message1_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M151_Get_F2(message3_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Clear(message3_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message3_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message3_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F5(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F6(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Deserialize(message7_.message[i], &message7_.string[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message7_.message[i], message7_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    M378_Get_F7(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Merge(message7_.message[i], message7_.other_message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message7_.message[i]);
  }
  std::shuffle(indices_.begin(), indices_.end(), GetRNG());
  for (const auto& i : indices_) {
    Destroy(message7_.other_message[i]);
  }
}

}  // namespace fleetbench::proto
