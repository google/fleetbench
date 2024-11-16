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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message0.pb.h"

namespace fleetbench::rpc::P1::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_11();
  v0->set_f_3(0x52);
  Message0::M3* v1_0 = message->add_f_12();
  v1_0->set_f_0(s->substr(0, 8));
  Message0::M5* v2 = message->mutable_f_14();
  v2->set_f_1(false);
  message->set_f_1(true);
  message->set_f_0(0x3772d7be90f);
  Message0::M4* v3 = message->mutable_f_13();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M1* v4 = message->mutable_f_8();
  v4->set_f_0(s->substr(0, 1));
  message->set_f_2(true);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_8();
  v0->set_f_0(s->substr(0, 8));
  Message0::M3* v1_0 = message->add_f_12();
  v1_0->set_f_0(s->substr(0, 21));
  Message0::M2* v2 = message->mutable_f_11();
  v2->set_f_1(true);
  v2->set_f_0(Message0::M2::E2_CONST_3);
  message->set_f_1(false);
  message->set_f_0(0x1cba);
  Message0::M5* v3 = message->mutable_f_14();
  v3->set_f_0(0x6b);
  Message0::M6* v4 = message->mutable_f_15();
  v4->set_f_3(false);
  v4->set_f_0(false);
  v4->set_f_2(s->substr(0, 6));
  v4->set_f_1(s->substr(0, 5));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_8();
  Message0::M1::M7* v1_0 = v0->add_f_2();
  v1_0->set_f_5(s->substr(0, 6));
  v1_0->set_f_8(s->substr(0, 46));
  v1_0->set_f_7(s->substr(0, 21));
  v1_0->set_f_0(0xb588cd43c95c65);
  Message0::M1::M7::M8* v2 = v1_0->mutable_f_18();
  v2->set_f_1(s->substr(0, 1));
  v2->set_f_0(s->substr(0, 23));
  v2->set_f_3(s->substr(0, 31));
  v2->set_f_4(s->substr(0, 16));
  v2->set_f_2(s->substr(0, 2023));
  v1_0->set_f_4(0x4c);
  v1_0->set_f_11(true);
  v1_0->set_f_6(s->substr(0, 18));
  Message0::M4* v3 = message->mutable_f_13();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M5* v4 = message->mutable_f_14();
  v4->set_f_0(0x9);
  message->set_f_0(0x318a13039b4);
  Message0::M2* v5 = message->mutable_f_11();
  v5->set_f_2(false);
  v5->set_f_3(0x1c3f);
  v5->set_f_0(Message0::M2::E2_CONST_3);
  message->set_f_1(false);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M5* v0 = message->mutable_f_14();
  v0->set_f_0(0x6f42e);
  v0->set_f_1(false);
  message->set_f_1(true);
  message->set_f_2(false);
  Message0::M4* v1 = message->mutable_f_13();
  v1->set_f_0(0x49356);
  Message0::M2* v2 = message->mutable_f_11();
  v2->set_f_1(true);
  v2->set_f_2(false);
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
}  // namespace fleetbench::rpc::P1::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE0_H_
