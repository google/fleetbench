// Copyright 2023 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
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

// WARNING: DO NOT EDIT! This file is auto-generated.
#include "fleetbench/proto/lifecycle.h"

#include <cstddef>
#include <vector>

#include "fleetbench/proto/access_message0.h"
#include "fleetbench/proto/access_message1.h"
#include "fleetbench/proto/access_message2.h"
#include "fleetbench/proto/access_message3.h"
#include "fleetbench/proto/access_message4.h"
#include "fleetbench/proto/access_message5.h"
#include "fleetbench/proto/access_message6.h"
#include "fleetbench/proto/access_message7.h"
#include "fleetbench/proto/access_message8.h"
#include "fleetbench/proto/access_message9.h"
#include "fleetbench/proto/receiver.h"
#include "google/protobuf/arena.h"
namespace fleetbench::proto {
template <typename T>
void ProtoLifecycle::InitMessages(std::vector<T*>& messages,
                                  std::vector<T*>& other_messages,
                                  google::protobuf::Arena* arena) {
  for (size_t i = 0; i < working_set_size_; i++) {
    messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
    other_messages[i] = google::protobuf::Arena::CreateMessage<T>(arena);
  }
}
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
  // Initialize other_message instance of messages
  for (size_t i = 0; i < working_set_size_; i++) {
    Message0_Set_1(message0_.other_message[i], &s_);
    Message1_Set_1(message1_.other_message[i], &s_);
    Message2_Set_1(message2_.other_message[i], &s_);
    Message3_Set_1(message3_.other_message[i], &s_);
    Message4_Set_1(message4_.other_message[i], &s_);
    Message5_Set_1(message5_.other_message[i], &s_);
    Message6_Set_1(message6_.other_message[i], &s_);
    Message7_Set_1(message7_.other_message[i], &s_);
    Message8_Set_1(message8_.other_message[i], &s_);
    Message9_Set_1(message9_.other_message[i], &s_);
  }
}

void ProtoLifecycle::Run() {
  for (size_t i = 0; i < working_set_size_; i++) {
    Create(message4_.message[i]);
    Create(message7_.message[i]);
    Serialize(message4_.other_message[i], &message4_.string[i]);
    Create(message8_.message[i]);
    Create(message1_.message[i]);
    Message8_Set_2(message8_.other_message[i], &s_);
    Deserialize(message7_.message[i], &message7_.string[i]);
    Serialize(message4_.other_message[i], &message4_.string[i]);
    Create(message3_.message[i]);
    Create(message6_.message[i]);
    Create(message2_.message[i]);
    Create(message0_.message[i]);
    Message3_Get_1(message3_.message[i]);
    Serialize(message1_.message[i], &message1_.string[i]);
    Merge(message7_.message[i], message7_.other_message[i]);
    Reflection(message8_.message[i]);
    Create(message9_.message[i]);
    Deserialize(message4_.other_message[i], &message4_.string[i]);
    Create(message5_.message[i]);
    Serialize(message1_.other_message[i], &message1_.string[i]);
    Message8_Get_1(message8_.message[i]);
    Message0_Set_2(message0_.other_message[i], &s_);
    Message3_Set_2(message3_.other_message[i], &s_);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Message8_Get_2(message8_.message[i]);
    Copy(message9_.message[i], message9_.other_message[i]);
    Message7_Get_1(message7_.message[i]);
    Deserialize(message8_.other_message[i], &message8_.string[i]);
    Deserialize(message1_.other_message[i], &message1_.string[i]);
    Copy(message7_.message[i], message7_.other_message[i]);
    Message7_Get_2(message7_.message[i]);
    Message7_Get_3(message7_.message[i]);
    Message6_Set_2(message6_.message[i], &s_);
    Descriptor(message7_.message[i]);
    Message5_Get_1(message5_.message[i]);
    Copy(message1_.message[i], message1_.other_message[i]);
    Copy(message2_.message[i], message2_.other_message[i]);
    Message9_Get_1(message9_.message[i]);
    Serialize(message6_.other_message[i], &message6_.string[i]);
    Merge(message6_.message[i], message6_.other_message[i]);
    Message1_Get_1(message1_.message[i]);
    Serialize(message7_.message[i], &message7_.string[i]);
    Message8_Get_3(message8_.message[i]);
    Message6_Get_1(message6_.message[i]);
    Message6_Set_3(message6_.other_message[i], &s_);
    Deserialize(message0_.message[i], &message0_.string[i]);
    Message5_Set_2(message5_.message[i], &s_);
    Message9_Get_2(message9_.message[i]);
    Message1_Get_2(message1_.message[i]);
    Deserialize(message7_.message[i], &message7_.string[i]);
    Deserialize(message1_.other_message[i], &message1_.string[i]);
    Clear(message6_.message[i]);
    Message9_Get_3(message9_.message[i]);
    Message1_Get_3(message1_.message[i]);
    Message8_Get_4(message8_.message[i]);
    Serialize(message6_.message[i], &message6_.string[i]);
    Deserialize(message3_.other_message[i], &message3_.string[i]);
    Serialize(message0_.message[i], &message0_.string[i]);
    ByteSize(message9_.message[i]);
    Message7_Get_4(message7_.message[i]);
    Merge(message3_.message[i], message3_.other_message[i]);
    Deserialize(message4_.other_message[i], &message4_.string[i]);
    Deserialize(message9_.other_message[i], &message9_.string[i]);
    Message9_Set_2(message9_.other_message[i], &s_);
    Merge(message6_.message[i], message6_.other_message[i]);
    Deserialize(message2_.message[i], &message2_.string[i]);
    Serialize(message5_.other_message[i], &message5_.string[i]);
    Copy(message6_.message[i], message6_.other_message[i]);
    Message1_Set_2(message1_.other_message[i], &s_);
    Merge(message8_.message[i], message8_.other_message[i]);
    Message1_Set_3(message1_.other_message[i], &s_);
    Deserialize(message1_.message[i], &message1_.string[i]);
    Message5_Get_2(message5_.message[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Serialize(message7_.message[i], &message7_.string[i]);
    ByteSize(message9_.message[i]);
    Message5_Set_3(message5_.other_message[i], &s_);
    Message2_Get_1(message2_.message[i]);
    Message9_Get_4(message9_.message[i]);
    Descriptor(message1_.message[i]);
    Message9_Get_4(message9_.message[i]);
    Message2_Set_2(message2_.other_message[i], &s_);
    Deserialize(message6_.message[i], &message6_.string[i]);
    Deserialize(message7_.other_message[i], &message7_.string[i]);
    Copy(message7_.message[i], message7_.other_message[i]);
    Deserialize(message1_.message[i], &message1_.string[i]);
    Merge(message2_.message[i], message2_.other_message[i]);
    Deserialize(message6_.other_message[i], &message6_.string[i]);
    Merge(message4_.message[i], message4_.other_message[i]);
    Deserialize(message3_.message[i], &message3_.string[i]);
    Serialize(message5_.other_message[i], &message5_.string[i]);
    Message4_Get_1(message4_.message[i]);
    Merge(message6_.message[i], message6_.other_message[i]);
    Deserialize(message1_.other_message[i], &message1_.string[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    ByteSize(message3_.message[i]);
    SpaceUsed(message1_.message[i]);
    Deserialize(message6_.message[i], &message6_.string[i]);
    Deserialize(message5_.message[i], &message5_.string[i]);
    Message8_Set_3(message8_.message[i], &s_);
    Message3_Set_3(message3_.other_message[i], &s_);
    Serialize(message7_.other_message[i], &message7_.string[i]);
    Serialize(message2_.other_message[i], &message2_.string[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Message1_Set_4(message1_.message[i], &s_);
    Reflection(message5_.message[i]);
    Deserialize(message6_.message[i], &message6_.string[i]);
    Message7_Set_2(message7_.other_message[i], &s_);
    Deserialize(message2_.message[i], &message2_.string[i]);
    Serialize(message6_.message[i], &message6_.string[i]);
    Descriptor(message9_.message[i]);
    Reflection(message4_.message[i]);
    Descriptor(message7_.message[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Copy(message9_.message[i], message9_.other_message[i]);
    Message4_Get_2(message4_.message[i]);
    Deserialize(message8_.other_message[i], &message8_.string[i]);
    Serialize(message2_.message[i], &message2_.string[i]);
    Reflection(message8_.message[i]);
    Descriptor(message7_.message[i]);
    Serialize(message5_.other_message[i], &message5_.string[i]);
    Message5_Set_4(message5_.other_message[i], &s_);
    Message4_Get_3(message4_.message[i]);
    Destroy(message7_.message[i]);
    Destroy(message7_.other_message[i]);
    Deserialize(message6_.other_message[i], &message6_.string[i]);
    Message2_Get_2(message2_.message[i]);
    Deserialize(message4_.message[i], &message4_.string[i]);
    ByteSize(message6_.message[i]);
    Reflection(message6_.message[i]);
    Copy(message3_.message[i], message3_.other_message[i]);
    Clear(message2_.message[i]);
    Copy(message2_.message[i], message2_.other_message[i]);
    Reflection(message4_.message[i]);
    Deserialize(message9_.message[i], &message9_.string[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Destroy(message5_.message[i]);
    Destroy(message5_.other_message[i]);
    Serialize(message9_.other_message[i], &message9_.string[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Destroy(message6_.message[i]);
    Destroy(message6_.other_message[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Message3_Set_4(message3_.message[i], &s_);
    Message0_Set_3(message0_.message[i], &s_);
    Serialize(message9_.message[i], &message9_.string[i]);
    Deserialize(message8_.message[i], &message8_.string[i]);
    Deserialize(message3_.other_message[i], &message3_.string[i]);
    Message2_Get_3(message2_.message[i]);
    Reflection(message0_.message[i]);
    Message2_Get_4(message2_.message[i]);
    Message8_Set_4(message8_.message[i], &s_);
    Message9_Set_3(message9_.message[i], &s_);
    Message3_Set_4(message3_.message[i], &s_);
    Message0_Set_4(message0_.other_message[i], &s_);
    Serialize(message2_.other_message[i], &message2_.string[i]);
    Destroy(message9_.message[i]);
    Destroy(message9_.other_message[i]);
    Destroy(message8_.message[i]);
    Destroy(message8_.other_message[i]);
    Copy(message0_.message[i], message0_.other_message[i]);
    Copy(message3_.message[i], message3_.other_message[i]);
    Destroy(message1_.message[i]);
    Destroy(message1_.other_message[i]);
    Copy(message2_.message[i], message2_.other_message[i]);
    Deserialize(message3_.other_message[i], &message3_.string[i]);
    Message2_Get_4(message2_.message[i]);
    Copy(message3_.message[i], message3_.other_message[i]);
    Message4_Get_4(message4_.message[i]);
    Message4_Get_4(message4_.message[i]);
    Destroy(message3_.message[i]);
    Destroy(message3_.other_message[i]);
    Deserialize(message4_.other_message[i], &message4_.string[i]);
    Message4_Set_2(message4_.message[i], &s_);
    Destroy(message2_.message[i]);
    Destroy(message2_.other_message[i]);
    ByteSize(message0_.message[i]);
    Swap(message4_.message[i], message4_.other_message[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Deserialize(message0_.message[i], &message0_.string[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Deserialize(message0_.other_message[i], &message0_.string[i]);
    Copy(message4_.message[i], message4_.other_message[i]);
    Message0_Get_1(message0_.message[i]);
    Deserialize(message4_.other_message[i], &message4_.string[i]);
    Reflection(message4_.message[i]);
    Destroy(message4_.message[i]);
    Destroy(message4_.other_message[i]);
    Message0_Get_2(message0_.message[i]);
    ByteSize(message0_.message[i]);
    Reflection(message0_.message[i]);
    Deserialize(message0_.message[i], &message0_.string[i]);
    Merge(message0_.message[i], message0_.other_message[i]);
    Destroy(message0_.message[i]);
    Destroy(message0_.other_message[i]);
  }
}

}  // namespace fleetbench::proto
