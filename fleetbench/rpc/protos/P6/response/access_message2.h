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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/response/Message2.pb.h"

namespace fleetbench::rpc::P6::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_6();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_2(0x89c281c);
  message->set_f_1(0x32b6e4a);
  message->set_f_0(0x66);
  Message2::M1* v1 = message->mutable_f_5();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M3* v2 = message->mutable_f_7();
  v2->set_f_0(s->substr(0, 510));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_2(0xefa7c);
  Message2::M1* v0 = message->mutable_f_5();
  v0->set_f_0(Message2::M1::E1_CONST_5);
  message->set_f_1(0x1d14ceb3c3560);
  Message2::M3* v1 = message->mutable_f_7();
  v1->set_f_0(s->substr(0, 97));
  Message2::M2* v2 = message->mutable_f_6();
  (void)v2;  // Suppresses clang-tidy.
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_1(0x49b100d);
  message->set_f_0(0x9);
  message->set_f_2(0x1ca7);
  Message2::M1* v0 = message->mutable_f_5();
  v0->set_f_0(Message2::M1::E1_CONST_2);
  Message2::M3* v1 = message->mutable_f_7();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M2* v2 = message->mutable_f_6();
  v2->set_f_0(s->substr(0, 32));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_1(0xf6476);
  Message2::M2* v0 = message->mutable_f_6();
  v0->set_f_0(s->substr(0, 20));
  Message2::M1* v1 = message->mutable_f_5();
  v1->set_f_0(Message2::M1::E1_CONST_2);
  message->set_f_2(0x1553d05d7348b);
  message->set_f_0(0x66);
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
}  // namespace fleetbench::rpc::P6::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE2_H_
