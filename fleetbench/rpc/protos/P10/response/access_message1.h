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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P10/response/Message1.pb.h"

namespace fleetbench::rpc::P10::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M4* v0 = message->mutable_f_14();
  (void)v0;  // Suppresses clang-tidy.
  Message1::M8* v1 = message->mutable_f_18();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M7* v2 = message->mutable_f_17();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_0(0x73b1ea084);
  Message1::M13* v3 = message->mutable_f_28();
  v3->set_f_25(0x24);
  v3->set_f_5(Message1::M13::E2_CONST_3);
  v3->set_f_15(s->substr(0, 1));
  v3->set_f_10(0x1f);
  v3->set_f_23(Message1::M13::E8_CONST_3);
  v3->set_f_6(Message1::M13::E3_CONST_3);
  Message1::M2* v4 = message->mutable_f_8();
  v4->set_f_1(true);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_1(0x53);
  Message1::M3* v0_0 = message->add_f_12();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_0(0x1a);
  Message1::M1* v1_0 = message->add_f_6();
  v1_0->set_f_0(0x3);
  Message1::M7* v2 = message->mutable_f_17();
  (void)v2;  // Suppresses clang-tidy.
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_12();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M12* v1 = message->mutable_f_27();
  v1->set_f_0(true);
  Message1::M9* v2 = message->mutable_f_20();
  (void)v2;  // Suppresses clang-tidy.
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_12();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M11* v1 = message->mutable_f_26();
  v1->set_f_0(0x49);
  Message1::M6* v2 = message->mutable_f_16();
  v2->set_f_0(s->substr(0, 2));
  Message1::M13* v3 = message->mutable_f_28();
  v3->set_f_16(0x70db4b5e8);
  v3->set_f_10(0x49);
  v3->set_f_21(0x13ffca);
  v3->set_f_25(0x7c);
  v3->set_f_17(Message1::M13::E7_CONST_2);
  v3->set_f_0(0x50);
  v3->set_f_8(0.873058);
  v3->set_f_22(0x6);
  Message1::M8* v4 = message->mutable_f_18();
  (void)v4;  // Suppresses clang-tidy.
  Message1::M2* v5 = message->mutable_f_8();
  (void)v5;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P10::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_RESPONSE_ACCESS_MESSAGE1_H_
