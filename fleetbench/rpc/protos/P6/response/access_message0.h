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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/response/Message0.pb.h"

namespace fleetbench::rpc::P6::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_3();
  v0->set_f_15(Message0::M2::E4_CONST_5);
  v0->set_f_8(0x86fe5fa);
  v0->set_f_19(s->substr(0, 6));
  v0->set_f_10(Message0::M2::E3_CONST_1);
  v0->set_f_12(s->substr(0, 156));
  v0->set_f_17(Message0::M2::E5_CONST_1);
  v0->set_f_7(s->substr(0, 8));
  v0->set_f_3(0x52);
  v0->set_f_6(Message0::M2::E1_CONST_2);
  v0->set_f_11(0xb0ec3da);
  v0->set_f_5(0x1b);
  v0->set_f_9(Message0::M2::E2_CONST_4);
  v0->set_f_14(0x12b35a3b184eb);
  v0->set_f_18(Message0::M2::E6_CONST_4);
  v0->set_f_4(s->substr(0, 110));
  Message0::M1* v1_0 = message->add_f_2();
  v1_0->set_f_0(0x4dcd209);
  Message0::M1* v1_1 = message->add_f_2();
  v1_1->set_f_0(0x64caff9f1);
  message->set_f_0(0x51);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M1* v0_0 = message->add_f_2();
  (void)v0_0;  // Suppresses clang-tidy.
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_3();
  v0->set_f_1(0x23f5f1bc01e6337a);
  v0->set_f_0(0xf84669e4b9b22d);
  v0->set_f_2(0x45);
  v0->set_f_17(Message0::M2::E5_CONST_4);
  v0->set_f_9(Message0::M2::E2_CONST_2);
  v0->set_f_10(Message0::M2::E3_CONST_3);
  v0->set_f_13(0x933a057);
  v0->set_f_11(0x5c);
  v0->set_f_20(0x13b8c9);
  v0->set_f_5(0x3ac6);
  v0->set_f_18(Message0::M2::E6_CONST_1);
  message->set_f_0(0x24);
  Message0::M1* v1_0 = message->add_f_2();
  (void)v1_0;  // Suppresses clang-tidy.
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_3();
  v0->set_f_12(s->substr(0, 11));
  v0->set_f_19(s->substr(0, 63));
  v0->set_f_10(Message0::M2::E3_CONST_1);
  v0->set_f_2(0x14);
  v0->set_f_16(false);
  v0->set_f_8(0x140c);
  v0->set_f_14(0xf59c970);
  v0->set_f_5(0xc702840);
  v0->set_f_1(0x34ee133fedfe3b27);
  v0->set_f_0(0x8e7b276);
  v0->set_f_22(true);
  v0->set_f_3(0x60);
  v0->set_f_17(Message0::M2::E5_CONST_2);
  Message0::M1* v1_0 = message->add_f_2();
  v1_0->set_f_0(0x4c02d28);
  Message0::M1* v1_1 = message->add_f_2();
  v1_1->set_f_0(0xb58f3);
  message->set_f_0(0x31);
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
}  // namespace fleetbench::rpc::P6::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_
