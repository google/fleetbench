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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message2.pb.h"

namespace fleetbench::rpc::P1::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M1* v0 = message->mutable_f_2();
  Message2::M1::M2* v1 = v0->mutable_f_6();
  v1->set_f_2(true);
  v0->set_f_0(false);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M1* v0 = message->mutable_f_2();
  v0->set_f_0(false);
  Message2::M1::M2* v1 = v0->mutable_f_6();
  v1->set_f_0(s->substr(0, 3));
  v0->set_f_1(true);
  message->add_f_0(s->substr(0, 17));
}
const int kMessage2MaxProtoSetters = 4;
inline void Message2_Set(const int i, Message2* message, std::string* s) {
  CHECK(i < kMessage2MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message2_Set_1(message, s);
      break;
    case 1:
      Message2_Set_2(message, s);
      break;
    case 2:
      Message2_Set_3(message, s);
      break;
    case 3:
      Message2_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P1::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
