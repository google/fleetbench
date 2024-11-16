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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/response/Message2.pb.h"

namespace fleetbench::rpc::P5::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_4();
  Message2::M2::M4* v1 = v0->mutable_f_9();
  Message2::M2::M4::M5* v2 = v1->mutable_f_8();
  v2->set_f_0(0x13f9a55156c37);
  v1->set_f_0(0x183a6366);
  v1->set_f_3(s->substr(0, 28));
  v0->set_f_1(Message2::M2::E1_CONST_1);
  Message2::M2::M3* v3 = v0->mutable_f_8();
  v3->set_f_0(0x1920fb33fb846);
  Message2::M2::M3::M6* v4 = v3->mutable_f_3();
  v4->set_f_8(0x2284adcc);
  v4->set_f_6(0xfe214);
  v4->set_f_15(s->substr(0, 15));
  v4->set_f_3(0x2f6f18c8);
  v4->set_f_11(0x3b33);
  v4->set_f_12(0x9ec);
  v4->set_f_5(true);
  v4->set_f_16(0x789a0c11);
  v4->set_f_0(s->substr(0, 52));
  v4->set_f_7(0xb);
  v4->set_f_17(s->substr(0, 24));
  v4->set_f_2(0x46);
  v0->set_f_2(s->substr(0, 9256));
  v0->set_f_3(0x4ed66401);
  v0->set_f_0(0x6bec4a91);
  Message2::M1* v5 = message->mutable_f_2();
  v5->set_f_1(0x23302843);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M1* v0 = message->mutable_f_2();
  v0->set_f_0(0.438963);
  v0->set_f_1(0xd82b46c);
  message->set_f_0(s->substr(0, 10));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_4();
  Message2::M2::M3* v1 = v0->mutable_f_8();
  v1->set_f_0(0xabd1d);
  v0->set_f_1(Message2::M2::E1_CONST_4);
  v0->set_f_3(0x3a44311f);
  Message2::M1* v2 = message->mutable_f_2();
  v2->set_f_0(0.289727);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_4();
  v0->set_f_4(s->substr(0, 14412));
  Message2::M2::M3* v1 = v0->mutable_f_8();
  Message2::M2::M3::M6* v2 = v1->mutable_f_3();
  v2->set_f_12(0x7a6c0e17f);
  v2->set_f_1(Message2::M2::M3::M6::E3_CONST_1);
  v2->set_f_7(0x2e);
  v2->set_f_5(true);
  v2->set_f_0(s->substr(0, 5));
  v2->set_f_16(0x4d12cf05);
  v2->set_f_14(0x7adb86ca);
  v2->set_f_8(0x6d87e3dd);
  v0->set_f_0(0x6ccc6724);
  Message2::M2::M4* v3 = v0->mutable_f_9();
  v3->set_f_3(s->substr(0, 52));
  v3->set_f_0(0x682c7aed);
  Message2::M2::M4::M5* v4 = v3->mutable_f_8();
  v4->set_f_0(0x5522b68);
  Message2::M2::M4::M5::M7* v5_0 = v4->add_f_3();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 10));
  Message2::M1* v6 = message->mutable_f_2();
  v6->set_f_1(0x223e97ab);
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
}  // namespace fleetbench::rpc::P5::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE2_H_
