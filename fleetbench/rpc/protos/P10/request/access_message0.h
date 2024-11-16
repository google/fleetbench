// Copyright 2023 The Fleetbench Authors
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

// WARNING: DO NOT EDIT! This file is auto-generated.

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P10/request/Message0.pb.h"

namespace fleetbench::rpc::P10::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_2();
  (void)v0;  // Suppresses clang-tidy.
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_3();
  v0->set_f_0(s->substr(0, 4));
  message->set_f_0(s->substr(0, 8));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_5();
  (void)v0_0;  // Suppresses clang-tidy.
  Message0::M3* v0_1 = message->add_f_5();
  (void)v0_1;  // Suppresses clang-tidy.
  Message0::M1* v1 = message->mutable_f_2();
  v1->set_f_0(s->substr(0, 6));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_5();
  (void)v0_0;  // Suppresses clang-tidy.
}
const int kMessage0MaxProtoSetters = 4;
inline void Message0_Set(const int i, Message0* message, std::string* s) {
  CHECK(i < kMessage0MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message0_Set_1(message, s);
      break;
    case 1:
      Message0_Set_2(message, s);
      break;
    case 2:
      Message0_Set_3(message, s);
      break;
    case 3:
      Message0_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P10::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_
