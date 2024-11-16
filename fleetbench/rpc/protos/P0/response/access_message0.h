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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/response/Message0.pb.h"

namespace fleetbench::rpc::P0::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_5();
  v0->set_f_0(0.341407);
  Message0::M1::M3* v1 = v0->mutable_f_4();
  v1->set_f_0(0x140f);
  Message0::M1::M3::M7* v2 = v1->mutable_f_13();
  v2->set_f_0(true);
  v2->set_f_1(s->substr(0, 32));
  v1->set_f_3(0.674128);
  Message0::M1::M3::M5* v3_0 = v1->add_f_10();
  v3_0->set_f_2(0x21);
  v3_0->set_f_0(0x2ead);
  Message0::M1::M3::M5::M8* v4 = v3_0->mutable_f_5();
  v4->add_f_0(s->substr(0, 22));
  v3_0->add_f_1(s->substr(0, 21));
  Message0::M1::M3::M4* v5_0 = v1->add_f_9();
  v5_0->set_f_0(0x9);
  Message0::M1::M3::M4* v5_1 = v1->add_f_9();
  (void)v5_1;  // Suppresses clang-tidy.
  v1->set_f_2(true);
  message->set_f_0(Message0::E1_CONST_3);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_6();
  v0->set_f_4(Message0::M2::E2_CONST_5);
  v0->set_f_1(0x1b3762bed8ef1);
  v0->set_f_0(0xfb2d23a);
  Message0::M1* v1 = message->mutable_f_5();
  Message0::M1::M3* v2 = v1->mutable_f_4();
  Message0::M1::M3::M4* v3_0 = v2->add_f_9();
  v3_0->set_f_0(0xd3832);
  Message0::M1::M3::M7* v4 = v2->mutable_f_13();
  v4->set_f_1(s->substr(0, 8));
  Message0::M1::M3::M6* v5 = v2->mutable_f_11();
  (void)v5;  // Suppresses clang-tidy.
  v2->set_f_3(0.215210);
  message->set_f_0(Message0::E1_CONST_5);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_5();
  Message0::M1::M3* v1 = v0->mutable_f_4();
  Message0::M1::M3::M5* v2_0 = v1->add_f_10();
  v2_0->set_f_0(0x18e3);
  v2_0->set_f_2(0x9edfbee);
  Message0::M1::M3::M5* v2_1 = v1->add_f_10();
  v2_1->set_f_2(0x1867c6);
  Message0::M1::M3::M5::M8* v3 = v2_1->mutable_f_5();
  v3->add_f_0(s->substr(0, 56));
  v1->set_f_1(s->substr(0, 66));
  Message0::M1::M3::M7* v4 = v1->mutable_f_13();
  (void)v4;  // Suppresses clang-tidy.
  v1->set_f_3(0.919022);
  Message0::M1::M3::M4* v5_0 = v1->add_f_9();
  (void)v5_0;  // Suppresses clang-tidy.
  Message0::M1::M3::M4* v5_1 = v1->add_f_9();
  v5_1->set_f_0(0xc);
  v0->set_f_0(0.322857);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_5();
  (void)v0;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P0::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_RESPONSE_ACCESS_MESSAGE0_H_
