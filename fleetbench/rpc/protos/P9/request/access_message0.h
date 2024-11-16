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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message0.pb.h"

namespace fleetbench::rpc::P9::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_15();
  v0_0->set_f_2(s->substr(0, 122));
  v0_0->set_f_1(0x7f6daa007);
  Message0::M2* v1 = message->mutable_f_12();
  Message0::M2::M4* v2 = v1->mutable_f_5();
  Message0::M2::M4::M7* v3 = v2->mutable_f_15();
  v3->set_f_28(0xa5187);
  v3->set_f_2(s->substr(0, 63));
  v3->set_f_9(0x215e37981bd558);
  v3->set_f_5(s->substr(0, 54));
  v3->set_f_15(s->substr(0, 48));
  v3->set_f_21(0x1a62797);
  v3->set_f_23(Message0::M2::M4::M7::E10_CONST_2);
  v3->set_f_24(0x8cafbdf);
  v3->set_f_16(true);
  v3->set_f_8(0x7323f5e3);
  Message0::M2::M4::M7::M9* v4_0 = v3->add_f_94();
  v4_0->set_f_0(0x216a982);
  Message0::M2::M4::M7::M9::M11* v5 = v4_0->mutable_f_5();
  v5->set_f_2(0x430b3182);
  v5->set_f_4(Message0::M2::M4::M7::M9::M11::E15_CONST_4);
  v5->set_f_1(Message0::M2::M4::M7::M9::M11::E14_CONST_2);
  v3->set_f_18(true);
  v3->set_f_20(0x73ab36df);
  v3->set_f_10(0x11);
  v3->set_f_1(Message0::M2::M4::M7::E7_CONST_2);
  v3->set_f_25(0x1f80e9);
  v3->set_f_30(0xa);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_2(Message0::E1_CONST_5);
  Message0::M3* v0_0 = message->add_f_15();
  v0_0->set_f_5(0x48);
  v0_0->set_f_3(Message0::M3::E2_CONST_2);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_15();
  v0_0->set_f_6(Message0::M3::E3_CONST_3);
  v0_0->set_f_2(s->substr(0, 54));
  Message0::M2* v1 = message->mutable_f_12();
  Message0::M2::M5* v2 = v1->mutable_f_7();
  v2->set_f_11(0x5ebba5e7);
  v2->set_f_7(0x3d);
  v2->set_f_15(0x4872c62a);
  v2->set_f_14(0x34);
  v2->set_f_0(0x7da58e39);
  v2->set_f_16(s->substr(0, 50));
  v2->set_f_3(Message0::M2::M5::E5_CONST_1);
  v2->set_f_4(0x2bee691a);
  v2->set_f_17(0x6);
  v2->set_f_13(s->substr(0, 83));
  message->set_f_0(0x1ed343);
  Message0::M1* v3_0 = message->add_f_10();
  v3_0->set_f_0(0xf0abf59f0225cc);
  Message0::M1* v3_1 = message->add_f_10();
  v3_1->set_f_0(0x4639f0be8f5608);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(0xb4b4fe5);
  message->set_f_1(false);
  Message0::M1* v0_0 = message->add_f_10();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_2(Message0::E1_CONST_2);
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
}  // namespace fleetbench::rpc::P9::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
