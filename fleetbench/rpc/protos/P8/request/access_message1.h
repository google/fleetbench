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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message1.pb.h"

namespace fleetbench::rpc::P8::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_7();
  Message1::M2::M7* v1 = v0->mutable_f_2();
  v1->set_f_0(s->substr(0, 140));
  Message1::M5* v2 = message->mutable_f_11();
  v2->set_f_8(s->substr(0, 2));
  v2->set_f_9(true);
  v2->set_f_0(s->substr(0, 6));
  v2->set_f_3(0x3f);
  v2->set_f_4(true);
  v2->set_f_1(0x3f96b6ff71a);
  v2->set_f_11(s->substr(0, 6));
  v2->set_f_5(Message1::M5::E4_CONST_4);
  v2->set_f_7(s->substr(0, 1));
  Message1::M3* v3_0 = message->add_f_8();
  v3_0->set_f_0(0xd);
  message->set_f_3(s->substr(0, 2));
  message->set_f_2(s->substr(0, 17));
  Message1::M1* v4_0 = message->add_f_6();
  v4_0->set_f_3(s->substr(0, 15));
  v4_0->set_f_1(0xf383bce);
  v4_0->set_f_7(s->substr(0, 24));
  v4_0->set_f_6(0x136524bb7613c);
  v4_0->set_f_2(0xd5e4669);
  v4_0->set_f_4(true);
  v4_0->set_f_8(Message1::M1::E2_CONST_2);
  v4_0->set_f_5(s->substr(0, 3));
  message->set_f_1(0x22);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_8();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 6));
  Message1::M4* v1 = message->mutable_f_9();
  Message1::M4::M8* v2 = v1->mutable_f_5();
  v2->set_f_13(0x40);
  v2->set_f_10(s->substr(0, 50));
  v2->set_f_11(Message1::M4::M8::E7_CONST_1);
  v2->set_f_0(0x27a43053fae);
  v2->set_f_1(s->substr(0, 7));
  v2->set_f_4(s->substr(0, 5));
  v2->set_f_9(s->substr(0, 11));
  v2->set_f_2(s->substr(0, 13));
  v2->set_f_3(s->substr(0, 47));
  v2->set_f_12(s->substr(0, 8));
  Message1::M4::M8::M9* v3 = v2->mutable_f_18();
  Message1::M4::M8::M9::M14* v4 = v3->mutable_f_2();
  v4->set_f_0(0x16ae2e2f99150);
  Message1::M4::M6* v5 = v1->mutable_f_4();
  Message1::M4::M6::M10* v6_0 = v5->add_f_3();
  v6_0->set_f_1(0x3142aeeeedb);
  Message1::M4::M6::M10* v6_1 = v5->add_f_3();
  (void)v6_1;  // Suppresses clang-tidy.
  Message1::M4::M6::M12* v7 = v5->mutable_f_5();
  v7->set_f_0(true);
  v5->set_f_0(0x1062f73daf4b5);
  v5->set_f_1(0x30a2ad1d0);
  message->set_f_3(s->substr(0, 117));
  Message1::M5* v8 = message->mutable_f_11();
  v8->set_f_3(0x1);
  v8->set_f_1(0x2836760b0);
  v8->set_f_5(Message1::M5::E4_CONST_4);
  v8->set_f_11(s->substr(0, 8));
  v8->set_f_2(0x119ccc5cd58);
  v8->set_f_10(Message1::M5::E6_CONST_5);
  v8->set_f_9(false);
  v8->set_f_6(Message1::M5::E5_CONST_3);
  v8->set_f_4(true);
  v8->set_f_0(s->substr(0, 291));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_8();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 14));
  Message1::M2* v1 = message->mutable_f_7();
  Message1::M2::M7* v2 = v1->mutable_f_2();
  v2->set_f_0(s->substr(0, 18));
  Message1::M1* v3_0 = message->add_f_6();
  v3_0->set_f_1(0xce20882);
  v3_0->set_f_5(s->substr(0, 16));
  v3_0->set_f_8(Message1::M1::E2_CONST_1);
  v3_0->set_f_7(s->substr(0, 1));
  v3_0->set_f_2(0x65a84bc85);
  v3_0->set_f_0(Message1::M1::E1_CONST_2);
  v3_0->set_f_3(s->substr(0, 8));
  v3_0->set_f_4(false);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_2(s->substr(0, 26));
  message->set_f_3(s->substr(0, 31));
  Message1::M5* v0 = message->mutable_f_11();
  v0->set_f_2(0x13f1f723d7e);
  v0->set_f_10(Message1::M5::E6_CONST_3);
  v0->set_f_5(Message1::M5::E4_CONST_3);
  v0->set_f_1(0x168541a34997c);
  v0->set_f_4(false);
  v0->set_f_9(false);
  v0->set_f_3(0x3a);
  v0->set_f_11(s->substr(0, 13));
  message->set_f_1(0x2e);
  message->set_f_0(s->substr(0, 415));
  Message1::M2* v1 = message->mutable_f_7();
  (void)v1;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P8::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
