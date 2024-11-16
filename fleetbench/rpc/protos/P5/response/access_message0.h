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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/response/Message0.pb.h"

namespace fleetbench::rpc::P5::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_2(0x1e);
  message->set_f_0(0xcf);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 15985));
  message->set_f_2(0xcf6cbbd2);
  Message0::M3* v0 = message->mutable_f_7();
  v0->set_f_10(Message0::M3::E3_CONST_1);
  v0->set_f_0(s->substr(0, 15));
  v0->set_f_5(0x28f2736d);
  v0->set_f_6(0x13ae7d2d);
  v0->add_f_13(s->substr(0, 2810));
  v0->set_f_11(0x4a48e870);
  v0->set_f_9(s->substr(0, 48));
  Message0::M2* v1 = message->mutable_f_5();
  Message0::M2::M4* v2 = v1->mutable_f_3();
  Message0::M2::M4::M15* v3 = v2->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M2::M4::M13* v4 = v2->mutable_f_3();
  Message0::M2::M4::M13::M16* v5_0 = v4->add_f_3();
  (void)v5_0;  // Suppresses clang-tidy.
  v2->set_f_0(0x2d8df0eeb78);
  Message0::M1* v6 = message->mutable_f_4();
  Message0::M1::M6* v7 = v6->mutable_f_3();
  v7->set_f_3(s->substr(0, 38));
  v7->set_f_2(0x3652b4ed0fb1d1);
  v7->add_f_9(s->substr(0, 25));
  v7->set_f_1(0x228f);
  v7->set_f_12(s->substr(0, 3));
  v7->set_f_5(0xd86864f);
  v7->set_f_4(0x644a860d);
  v7->add_f_13(s->substr(0, 400));
  Message0::M1::M6::M10* v8 = v7->mutable_f_22();
  Message0::M1::M6::M10::M17* v9_0 = v8->add_f_3();
  v9_0->set_f_4(0x4f);
  Message0::M1::M6::M10::M17::M18* v10 = v9_0->mutable_f_7();
  Message0::M1::M6::M10::M17::M18::M19* v11 = v10->mutable_f_8();
  Message0::M1::M6::M10::M17::M18::M19::M20* v12_0 = v11->add_f_4();
  Message0::M1::M6::M10::M17::M18::M19::M20::M22* v13 = v12_0->mutable_f_5();
  v13->set_f_1(0x1d4c848c);
  v13->set_f_0(Message0::M1::M6::M10::M17::M18::M19::M20::M22::E7_CONST_3);
  Message0::M1::M6::M10::M17::M18::M19::M20::M21* v14 = v12_0->mutable_f_3();
  (void)v14;  // Suppresses clang-tidy.
  v11->set_f_0(0x395b8e52);
  v9_0->add_f_0(s->substr(0, 25408));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_0(0x73);
  message->set_f_1(s->substr(0, 18));
  message->set_f_2(0x61);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 18));
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
}  // namespace fleetbench::rpc::P5::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE0_H_
