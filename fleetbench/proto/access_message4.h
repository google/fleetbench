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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/proto/Message4.pb.h"

namespace fleetbench::proto {
void Message4_Set_1(Message4* message, std::string* s);
void Message4_Set_2(Message4* message, std::string* s);
void Message4_Set_3(Message4* message, std::string* s);
void Message4_Set_4(Message4* message, std::string* s);
const int kMessage4MaxProtoSetters = 4;
inline void Message4_Set(const int i, Message4* message, std::string* s) {
  CHECK(i < kMessage4MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message4_Set_1(message, s);
      break;
    case 1:
      Message4_Set_2(message, s);
      break;
    case 2:
      Message4_Set_3(message, s);
      break;
    case 3:
      Message4_Set_4(message, s);
      break;
    default:
      break;
  }
}
void Message4_Get_1(Message4* message);
void Message4_Get_2(Message4* message);
void Message4_Get_3(Message4* message);
void Message4_Get_4(Message4* message);
const int kMessage4MaxProtoGetters = 4;
inline void Message4_Get(const int i, Message4* message) {
  CHECK(i < kMessage4MaxProtoGetters) << "Invalid i";
  switch (i) {
    case 0:
      Message4_Get_1(message);
      break;
    case 1:
      Message4_Get_2(message);
      break;
    case 2:
      Message4_Get_3(message);
      break;
    case 3:
      Message4_Get_4(message);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_
