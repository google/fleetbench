// Copyright 2025 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: DO NOT EDIT! This file is auto-generated.

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/proto/Message3.pb.h"

namespace fleetbench::proto {
void Message3_Set_1(Message3* message, std::string* s);
void Message3_Set_2(Message3* message, std::string* s);
void Message3_Set_3(Message3* message, std::string* s);
void Message3_Set_4(Message3* message, std::string* s);
const int kMessage3MaxProtoSetters = 4;
inline void Message3_Set(const int i, Message3* message, std::string* s) {
  CHECK(i < kMessage3MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message3_Set_1(message, s);
      break;
    case 1:
      Message3_Set_2(message, s);
      break;
    case 2:
      Message3_Set_3(message, s);
      break;
    case 3:
      Message3_Set_4(message, s);
      break;
    default:
      break;
  }
}
void Message3_Get_1(Message3* message);
void Message3_Get_2(Message3* message);
void Message3_Get_3(Message3* message);
void Message3_Get_4(Message3* message);
const int kMessage3MaxProtoGetters = 4;
inline void Message3_Get(const int i, Message3* message) {
  CHECK(i < kMessage3MaxProtoGetters) << "Invalid i";
  switch (i) {
    case 0:
      Message3_Get_1(message);
      break;
    case 1:
      Message3_Get_2(message);
      break;
    case 2:
      Message3_Get_3(message);
      break;
    case 3:
      Message3_Get_4(message);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_
