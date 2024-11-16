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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/response/Message1.pb.h"

namespace fleetbench::rpc::P8::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M4* v0_0 = message->add_f_16();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M6* v1_0 = message->add_f_20();
  (void)v1_0;  // Suppresses clang-tidy.
  Message1::M6* v1_1 = message->add_f_20();
  (void)v1_1;  // Suppresses clang-tidy.
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0_0 = message->add_f_9();
  v0_0->set_f_0(0xd605b0ceb50d);
  Message1::M5* v1 = message->mutable_f_18();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M6* v2_0 = message->add_f_20();
  (void)v2_0;  // Suppresses clang-tidy.
  message->set_f_1(0x2f);
  Message1::M7* v3 = message->mutable_f_23();
  v3->set_f_1(0xef66606a1f97e2);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M2* v0_0 = message->add_f_9();
  v0_0->set_f_0(0x9583bf152997);
  Message1::M2::M8* v1 = v0_0->mutable_f_4();
  v1->set_f_0(0x21b38972);
  Message1::M2* v0_1 = message->add_f_9();
  v0_1->set_f_0(0x1f675af4ea374d);
  Message1::M2::M8* v2 = v0_1->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M7* v3 = message->mutable_f_23();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_1(0x3a);
  Message1::M6* v4_0 = message->add_f_20();
  v4_0->set_f_0(s->substr(0, 30));
  Message1::M1* v5 = message->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M4* v6_0 = message->add_f_16();
  v6_0->set_f_0(false);
  Message1::M4::M9* v7 = v6_0->mutable_f_3();
  v7->set_f_4(0xb5925246e033);
  v7->set_f_0(s->substr(0, 7));
  Message1::M4* v6_1 = message->add_f_16();
  Message1::M4::M9* v8 = v6_1->mutable_f_3();
  v8->set_f_2(true);
  v8->set_f_1(0x3ad1b00d2e60);
  v8->set_f_0(s->substr(0, 4));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M4* v0_0 = message->add_f_16();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M4* v0_1 = message->add_f_16();
  v0_1->set_f_0(false);
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
}  // namespace fleetbench::rpc::P8::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE1_H_
