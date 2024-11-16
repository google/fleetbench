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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message1.pb.h"

namespace fleetbench::rpc::P5::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_8(0.259590);
  Message1::M4* v0 = message->mutable_f_18();
  Message1::M4::M7* v1 = v0->mutable_f_3();
  Message1::M4::M7::M12* v2_0 = v1->add_f_2();
  (void)v2_0;  // Suppresses clang-tidy.
  Message1::M4::M9* v3_0 = v0->add_f_6();
  v3_0->set_f_0(0x67);
  Message1::M4::M9* v3_1 = v0->add_f_6();
  Message1::M4::M9::M14* v4 = v3_1->mutable_f_2();
  v4->set_f_0(0x41d90564);
  Message1::M5* v5_0 = message->add_f_19();
  v5_0->set_f_0(Message1::M5::E2_CONST_4);
  v5_0->set_f_3(0x41);
  v5_0->set_f_8(0x28fa623d);
  v5_0->set_f_2(0x483e17a5);
  v5_0->set_f_5(s->substr(0, 48));
  v5_0->set_f_9(0x183297);
  message->set_f_7(0x79);
  message->set_f_11(s->substr(0, 74));
  message->set_f_3(s->substr(0, 6));
  message->set_f_6(0x7e);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_9(0x1603);
  message->set_f_7(0x23a3);
  message->set_f_1(0x22);
  message->set_f_5(0x63);
  Message1::M5* v0_0 = message->add_f_19();
  v0_0->set_f_6(s->substr(0, 3));
  v0_0->set_f_9(0x6f);
  v0_0->set_f_2(0x3f3b7c24);
  v0_0->set_f_7(0x2459);
  message->set_f_3(s->substr(0, 6));
  message->set_f_6(0x54);
  message->set_f_2(0x1bfb16);
  message->set_f_8(0.923554);
  Message1::M1* v1_0 = message->add_f_15();
  (void)v1_0;  // Suppresses clang-tidy.
  Message1::M4* v2 = message->mutable_f_18();
  (void)v2;  // Suppresses clang-tidy.
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_9(0x85557ce);
  message->set_f_5(0xf);
  Message1::M1* v0_0 = message->add_f_15();
  Message1::M1::M10* v1 = v0_0->mutable_f_2();
  v1->set_f_0(0x12);
  Message1::M1* v0_1 = message->add_f_15();
  (void)v0_1;  // Suppresses clang-tidy.
  message->set_f_11(s->substr(0, 25));
  message->set_f_1(0x1a);
  Message1::M3* v2 = message->mutable_f_17();
  Message1::M3::M11* v3_0 = v2->add_f_3();
  Message1::M3::M11::M15* v4 = v3_0->mutable_f_4();
  v4->set_f_0(0x6638a9d0);
  Message1::M4* v5 = message->mutable_f_18();
  Message1::M4::M9* v6_0 = v5->add_f_6();
  v6_0->set_f_0(0x6);
  Message1::M4::M7* v7 = v5->mutable_f_3();
  Message1::M4::M7::M12* v8_0 = v7->add_f_2();
  v8_0->set_f_0(0x4068dbe8);
  v7->set_f_0(true);
  Message1::M4::M8* v9_0 = v5->add_f_5();
  Message1::M4::M8::M17* v10_0 = v9_0->add_f_2();
  (void)v10_0;  // Suppresses clang-tidy.
  v9_0->set_f_0(0xa);
  message->set_f_3(s->substr(0, 2));
  message->set_f_4(0x7d);
  message->set_f_7(0xe);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M5* v0_0 = message->add_f_19();
  v0_0->set_f_6(s->substr(0, 93));
  v0_0->set_f_4(Message1::M5::E3_CONST_1);
  v0_0->set_f_1(0x14948cd5);
  v0_0->set_f_7(0x20e4);
  v0_0->set_f_0(Message1::M5::E2_CONST_2);
  Message1::M5* v0_1 = message->add_f_19();
  v0_1->set_f_0(Message1::M5::E2_CONST_5);
  v0_1->set_f_1(0x3ee4c950);
  v0_1->set_f_7(0xd);
  v0_1->set_f_8(0x48cb4bba);
  Message1::M3* v1 = message->mutable_f_17();
  v1->set_f_0(0x6d84d5e0);
  message->set_f_1(0x1b);
  message->set_f_9(0x50);
  message->set_f_7(0x68);
  message->set_f_2(0x1d);
  message->set_f_5(0x7c);
}
const int kMessage1MaxProtoSetters = 4;
inline void Message1_Set(const int i, Message1* message, std::string* s) {
  CHECK(i < kMessage1MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message1_Set_1(message, s);
      break;
    case 1:
      Message1_Set_2(message, s);
      break;
    case 2:
      Message1_Set_3(message, s);
      break;
    case 3:
      Message1_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P5::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
