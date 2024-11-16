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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message2.pb.h"

namespace fleetbench::rpc::P9::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_0(0x1f2b9b92);
  message->set_f_3(Message2::E1_CONST_3);
  Message2::M1* v0 = message->mutable_f_17();
  Message2::M1::M18* v1 = v0->mutable_f_10();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M7* v2 = message->mutable_f_31();
  v2->set_f_0(Message2::M7::E2_CONST_4);
  message->set_f_5(0x4f641f08);
  message->set_f_1(0x404d7268);
  Message2::M4* v3 = message->mutable_f_20();
  Message2::M4::M17* v4 = v3->mutable_f_10();
  v4->set_f_0(0xdfa9f47);
  Message2::M4::M10* v5_0 = v3->add_f_5();
  v5_0->set_f_0(0x71);
  v3->set_f_0(0x535ad9f);
  Message2::M4::M20* v6 = v3->mutable_f_12();
  (void)v6;  // Suppresses clang-tidy.
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M8* v0 = message->mutable_f_32();
  v0->set_f_0(Message2::M8::E3_CONST_3);
  message->set_f_5(0x151a8225);
  message->set_f_3(Message2::E1_CONST_2);
  message->set_f_0(0x3dcb3a32);
  Message2::M5* v1_0 = message->add_f_21();
  (void)v1_0;  // Suppresses clang-tidy.
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M4* v0 = message->mutable_f_20();
  v0->set_f_0(0xac413);
  Message2::M4::M20* v1 = v0->mutable_f_12();
  v1->set_f_0(0xe50e9);
  Message2::M4::M17* v2 = v0->mutable_f_10();
  v2->set_f_0(0xedc4a);
  Message2::M3* v3 = message->mutable_f_19();
  v3->set_f_0(s->substr(0, 48));
  message->set_f_0(0x5e584448);
  message->set_f_1(0x44250207);
  Message2::M2* v4 = message->mutable_f_18();
  v4->set_f_1(0x2e7727c4);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_18();
  v0->set_f_3(s->substr(0, 38));
  v0->set_f_2(0x5eebace2);
  message->set_f_3(Message2::E1_CONST_2);
  Message2::M4* v1 = message->mutable_f_20();
  v1->set_f_0(0x36d2);
  Message2::M4::M16* v2 = v1->mutable_f_9();
  Message2::M4::M16::M23* v3 = v2->mutable_f_4();
  v3->set_f_0(true);
  v3->set_f_6(0xeca2e918ea9ee0);
  v3->set_f_10(0x7ac49957a41c18);
  v3->set_f_12(0xcd4);
  Message2::M1* v4 = message->mutable_f_17();
  Message2::M1::M18* v5 = v4->mutable_f_10();
  (void)v5;  // Suppresses clang-tidy.
  message->set_f_5(0x78289fb6);
  message->set_f_4(0x559ef4a3);
  Message2::M5* v6_0 = message->add_f_21();
  v6_0->set_f_0(0x691623bc);
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
}  // namespace fleetbench::rpc::P9::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
