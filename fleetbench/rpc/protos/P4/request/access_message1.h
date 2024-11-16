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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message1.pb.h"

namespace fleetbench::rpc::P4::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_0(s->substr(0, 34));
  Message1::M1* v0 = message->mutable_f_10();
  Message1::M1::M2* v1_0 = v0->add_f_8();
  v1_0->set_f_3(s->substr(0, 16));
  v1_0->set_f_6(s->substr(0, 17));
  v1_0->set_f_2(0x3f);
  v1_0->set_f_5(0x5f);
  Message1::M1::M2* v1_1 = v0->add_f_8();
  v1_1->set_f_1(0x19396d1bdb342);
  v1_1->set_f_4(s->substr(0, 15));
  v1_1->set_f_3(s->substr(0, 9));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_0(s->substr(0, 19));
  Message1::M1* v0 = message->mutable_f_10();
  Message1::M1::M2* v1_0 = v0->add_f_8();
  v1_0->set_f_2(0x6d);
  v1_0->set_f_5(0x1a);
  v1_0->set_f_6(s->substr(0, 18));
  v1_0->set_f_0(s->substr(0, 9));
  Message1::M1::M2* v1_1 = v0->add_f_8();
  v1_1->set_f_0(s->substr(0, 28));
  v1_1->set_f_6(s->substr(0, 17));
  v1_1->set_f_1(0xc6f7172fb8c83b);
  v1_1->set_f_4(s->substr(0, 27));
  v1_1->set_f_2(0x34);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_0(s->substr(0, 70));
  Message1::M1* v0 = message->mutable_f_10();
  (void)v0;  // Suppresses clang-tidy.
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_10();
  Message1::M1::M2* v1_0 = v0->add_f_8();
  v1_0->set_f_4(s->substr(0, 31));
  v1_0->set_f_5(0x6b);
  v1_0->set_f_1(0x8f5d0da53ad809);
  v1_0->set_f_0(s->substr(0, 22));
  v1_0->set_f_2(0x64);
  v1_0->set_f_3(s->substr(0, 3));
  v1_0->set_f_6(s->substr(0, 35));
  Message1::M1::M2* v1_1 = v0->add_f_8();
  v1_1->set_f_3(s->substr(0, 13));
  v1_1->set_f_1(0x355c3590b864);
  v1_1->set_f_4(s->substr(0, 34));
  v1_1->set_f_6(s->substr(0, 18));
  v1_1->set_f_2(0xf);
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
}  // namespace fleetbench::rpc::P4::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
