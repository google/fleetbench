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

#include <cstddef>
#include <vector>

#include "fleetbench/proto/populate_protos.h"
#include "google/protobuf/arena.h"

namespace fleetbench::proto {

void ProtoLifecycle::Init(google::protobuf::Arena* arena) {
  // Declare variables for lifecycles.
  InitMessages(message0_.message, message0_.other_message, arena);
  InitMessages(message1_.message, message1_.other_message, arena);
  InitMessages(message2_.message, message2_.other_message, arena);
  InitMessages(message3_.message, message3_.other_message, arena);
  InitMessages(message4_.message, message4_.other_message, arena);
  InitMessages(message5_.message, message5_.other_message, arena);
  InitMessages(message6_.message, message6_.other_message, arena);
  InitMessages(message7_.message, message7_.other_message, arena);
  InitMessages(message8_.message, message8_.other_message, arena);
  InitMessages(message9_.message, message9_.other_message, arena);

  // Initialize other_message instance of M1.
  for (size_t i = 0; i < working_set_size_; i++) {
    M1_Set_F1(message0_.other_message[i], &s_);
    M37_Set_F1(message1_.other_message[i], &s_);
    M95_Set_F1(message2_.other_message[i], &s_);
    M151_Set_F1(message3_.other_message[i], &s_);
    M204_Set_F1(message4_.other_message[i], &s_);
    M238_Set_F1(message5_.other_message[i], &s_);
    M305_Set_F1(message6_.other_message[i], &s_);
    M378_Set_F1(message7_.other_message[i], &s_);
    M437_Set_F1(message8_.other_message[i], &s_);
    M493_Set_F1(message9_.other_message[i], &s_);
  }
}

template <typename T>
void ProtoLifecycle::InitMessages(std::vector<T*>& messages,
                                  std::vector<T*>& other_messages,
                                  google::protobuf::Arena* arena) {
  for (size_t i = 0; i < working_set_size_; i++) {
    messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
    other_messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
  }
}

void ProtoLifecycle::Run() {
  for (size_t i = 0; i < working_set_size_; i++) {
    Create(message9_.message[i]);
    Create(message3_.message[i]);
    Create(message5_.message[i]);
    Create(message8_.message[i]);
    Create(message7_.message[i]);
    Create(message6_.message[i]);
    Create(message2_.message[i]);
    Copy(message6_.message[i], message6_.other_message[i]);
    Copy(message8_.message[i], message8_.other_message[i]);
    Copy(message2_.message[i], message2_.other_message[i]);
    Serialize(message6_.message[i], &message6_.string[i]);
    ByteSize(message2_.message[i]);
    Reflection(message8_.message[i]);
    Create(message0_.message[i]);
    M493_Set_F2(message9_.message[i], &s_);
    Reflection(message2_.message[i]);
    Copy(message7_.message[i], message7_.other_message[i]);
    Swap(message5_.message[i], message5_.other_message[i]);
    Create(message4_.message[i]);
    Serialize(message9_.message[i], &message9_.string[i]);
    Deserialize(message9_.message[i], &message9_.string[i]);
    Copy(message0_.message[i], message0_.other_message[i]);
    Serialize(message7_.message[i], &message7_.string[i]);
    Serialize(message8_.message[i], &message8_.string[i]);
    Deserialize(message6_.message[i], &message6_.string[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Deserialize(message6_.other_message[i], &message6_.string[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    M493_Get_F1(message9_.message[i]);
    Merge(message4_.message[i], message4_.other_message[i]);
    ByteSize(message9_.message[i]);
    Serialize(message4_.message[i], &message4_.string[i]);
    Merge(message4_.message[i], message4_.other_message[i]);
    Reflection(message9_.message[i]);
    Serialize(message2_.message[i], &message2_.string[i]);
    Copy(message9_.message[i], message9_.other_message[i]);
    ByteSize(message8_.message[i]);
    Create(message1_.message[i]);
    Deserialize(message4_.message[i], &message4_.string[i]);
    Merge(message3_.message[i], message3_.other_message[i]);
    Copy(message1_.message[i], message1_.other_message[i]);
    Descriptor(message8_.message[i]);
    EnumDescriptor(message1_.message[i]);
    Merge(message3_.message[i], message3_.other_message[i]);
    M378_Get_F1(message7_.message[i]);
    Serialize(message5_.message[i], &message5_.string[i]);
    M437_Get_F1(message8_.message[i]);
    M305_Get_F1(message6_.message[i]);
    M204_Get_F1(message4_.message[i]);
    Serialize(message3_.message[i], &message3_.string[i]);
    Deserialize(message5_.message[i], &message5_.string[i]);
    Deserialize(message2_.message[i], &message2_.string[i]);
    Clear(message8_.message[i]);
    Merge(message8_.message[i], message8_.other_message[i]);
    Deserialize(message3_.message[i], &message3_.string[i]);
    Merge(message8_.message[i], message8_.other_message[i]);
    Destroy(message8_.message[i]);
    Destroy(message8_.other_message[i]);
    M95_Get_F1(message2_.message[i]);
    M238_Get_F1(message5_.message[i]);
    Serialize(message1_.message[i], &message1_.string[i]);
    Deserialize(message1_.message[i], &message1_.string[i]);
    Serialize(message0_.message[i], &message0_.string[i]);
    ByteSize(message1_.message[i]);
    M95_Set_F2(message2_.message[i], &s_);
    Deserialize(message0_.message[i], &message0_.string[i]);
    SpaceUsed(message6_.message[i]);
    Reflection(message1_.message[i]);
    M1_Get_F1(message0_.message[i]);
    Merge(message6_.message[i], message6_.other_message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    Merge(message6_.message[i], message6_.other_message[i]);
    Destroy(message6_.message[i]);
    Destroy(message6_.other_message[i]);
    Deserialize(message2_.other_message[i], &message2_.string[i]);
    Deserialize(message2_.message[i], &message2_.string[i]);
    M378_Get_F2(message7_.message[i]);
    Merge(message5_.message[i], message5_.other_message[i]);
    M37_Get_F1(message1_.message[i]);
    ByteSize(message5_.message[i]);
    Merge(message5_.message[i], message5_.other_message[i]);
    ByteSize(message7_.message[i]);
    Reflection(message5_.message[i]);
    Destroy(message5_.message[i]);
    Destroy(message5_.other_message[i]);
    Reflection(message7_.message[i]);
    Copy(message4_.message[i], message4_.other_message[i]);
    Merge(message0_.message[i], message0_.other_message[i]);
    M151_Get_F1(message3_.message[i]);
    Clear(message0_.message[i]);
    Merge(message0_.message[i], message0_.other_message[i]);
    Destroy(message0_.message[i]);
    Destroy(message0_.other_message[i]);
    Deserialize(message9_.other_message[i], &message9_.string[i]);
    Deserialize(message9_.message[i], &message9_.string[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    M95_Get_F2(message2_.message[i]);
    Merge(message2_.message[i], message2_.other_message[i]);
    Merge(message2_.message[i], message2_.other_message[i]);
    Destroy(message2_.message[i]);
    Destroy(message2_.other_message[i]);
    Copy(message3_.message[i], message3_.other_message[i]);
    M493_Get_F2(message9_.message[i]);
    Merge(message9_.message[i], message9_.other_message[i]);
    Merge(message9_.message[i], message9_.other_message[i]);
    Destroy(message9_.message[i]);
    Destroy(message9_.other_message[i]);
    M37_Set_F2(message1_.message[i], &s_);
    M378_Get_F3(message7_.message[i]);
    Deserialize(message1_.message[i], &message1_.string[i]);
    Deserialize(message4_.other_message[i], &message4_.string[i]);
    Deserialize(message4_.message[i], &message4_.string[i]);
    Clear(message1_.message[i]);
    M37_Set_F3(message1_.message[i], message1_.other_message[i], &s_);
    Deserialize(message1_.message[i], &message1_.string[i]);
    M37_Get_F2(message1_.message[i]);
    M204_Get_F2(message4_.other_message[i]);
    Destroy(message4_.message[i]);
    Destroy(message4_.other_message[i]);
    Merge(message1_.message[i], message1_.other_message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    M378_Get_F4(message7_.message[i]);
    M37_Get_F3(message1_.message[i]);
    Deserialize(message3_.other_message[i], &message3_.string[i]);
    Merge(message1_.message[i], message1_.other_message[i]);
    Deserialize(message3_.message[i], &message3_.string[i]);
    Destroy(message1_.message[i]);
    Destroy(message1_.other_message[i]);
    M151_Get_F2(message3_.other_message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    Clear(message3_.message[i]);
    Destroy(message3_.message[i]);
    Destroy(message3_.other_message[i]);
    M378_Get_F5(message7_.message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    M378_Get_F6(message7_.message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    Merge(message7_.message[i], message7_.other_message[i]);
    M378_Get_F7(message7_.message[i]);
    Merge(message7_.message[i], message7_.other_message[i]);
    Destroy(message7_.message[i]);
    Destroy(message7_.other_message[i]);
  }
}
}  // namespace fleetbench::proto
