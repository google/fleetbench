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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message2.pb.h"

namespace fleetbench::rpc::P4::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_6(0x6d);
  Message2::M2* v0 = message->mutable_f_56();
  Message2::M2::M8* v1_0 = v0->add_f_49();
  v1_0->set_f_0(s->substr(0, 15));
  Message2::M2::M8* v1_1 = v0->add_f_49();
  v1_1->set_f_0(s->substr(0, 19));
  Message2::M2::M9* v2 = v0->mutable_f_54();
  Message2::M2::M9::M13* v3_0 = v2->add_f_2();
  v3_0->set_f_7(0x2f);
  v3_0->set_f_13(s->substr(0, 15));
  v3_0->set_f_0(s->substr(0, 42));
  v3_0->set_f_15(s->substr(0, 1));
  v3_0->set_f_1(s->substr(0, 9));
  v3_0->set_f_12(0x2);
  v3_0->set_f_5(s->substr(0, 5));
  Message2::M2::M9::M13* v3_1 = v2->add_f_2();
  v3_1->set_f_2(s->substr(0, 49));
  v3_1->set_f_3(s->substr(0, 7));
  v3_1->set_f_11(0x35b0d16dd84e);
  v3_1->set_f_8(s->substr(0, 27));
  v3_1->set_f_1(s->substr(0, 7));
  v3_1->set_f_14(0x113ed78c943ed4);
  v3_1->set_f_10(false);
  v3_1->set_f_5(s->substr(0, 20));
  v3_1->set_f_15(s->substr(0, 29));
  v3_1->set_f_12(0x74);
  v3_1->set_f_9(s->substr(0, 25));
  v2->set_f_0(0x175e207186b4a);
  v0->set_f_8(s->substr(0, 28));
  v0->set_f_3(0x15);
  v0->set_f_4(s->substr(0, 22));
  v0->set_f_7(0xd);
  message->set_f_7(s->substr(0, 10));
  message->set_f_10(0xc);
  message->set_f_9(0x5f);
  message->set_f_5(s->substr(0, 20));
  message->set_f_8(s->substr(0, 5));
  message->set_f_0(0x18);
  message->set_f_3(s->substr(0, 5));
  Message2::M1* v4 = message->mutable_f_53();
  v4->set_f_0(s->substr(0, 18));
  message->set_f_4(s->substr(0, 10));
  message->set_f_11(s->substr(0, 45));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_4(s->substr(0, 8));
  message->set_f_6(0x30);
  message->set_f_8(s->substr(0, 28));
  message->set_f_3(s->substr(0, 7));
  message->set_f_2(s->substr(0, 24));
  Message2::M1* v0 = message->mutable_f_53();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_9(0x53);
  Message2::M4* v1 = message->mutable_f_62();
  v1->set_f_0(0x1b3d3cab7a2ab);
  Message2::M4::M10* v2 = v1->mutable_f_29();
  v2->set_f_0(s->substr(0, 22));
  v1->set_f_4(0x5d);
  v1->set_f_5(s->substr(0, 15));
  v1->set_f_2(s->substr(0, 3));
  v1->set_f_3(0x68);
  v1->set_f_6(s->substr(0, 18));
  v1->set_f_1(0x7c1a2d3d390d67);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_2(s->substr(0, 6));
  message->set_f_0(0x73);
  Message2::M4* v0 = message->mutable_f_62();
  v0->set_f_1(0x466ec033a47271);
  Message2::M4::M10* v1 = v0->mutable_f_29();
  v1->set_f_0(s->substr(0, 29));
  v0->set_f_0(0x18c2dbf617805);
  message->set_f_7(s->substr(0, 4));
  message->set_f_1(s->substr(0, 22));
  message->set_f_11(s->substr(0, 15));
  Message2::M3* v2 = message->mutable_f_59();
  v2->set_f_5(s->substr(0, 18));
  v2->set_f_2(0x73);
  v2->set_f_1(s->substr(0, 6));
  v2->set_f_7(s->substr(0, 5));
  v2->set_f_3(s->substr(0, 5));
  Message2::M3::M7* v3 = v2->mutable_f_53();
  v3->set_f_0(s->substr(0, 18));
  v2->set_f_0(s->substr(0, 19));
  message->set_f_4(s->substr(0, 17));
  Message2::M2* v4 = message->mutable_f_56();
  v4->set_f_7(0x40);
  v4->set_f_4(s->substr(0, 6));
  v4->set_f_8(s->substr(0, 6));
  v4->set_f_1(s->substr(0, 15));
  Message2::M2::M8* v5_0 = v4->add_f_49();
  v5_0->set_f_0(s->substr(0, 27));
  Message2::M2::M8* v5_1 = v4->add_f_49();
  (void)v5_1;  // Suppresses clang-tidy.
  message->set_f_5(s->substr(0, 6));
  message->set_f_9(0xf41);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_2(s->substr(0, 29));
  message->set_f_3(s->substr(0, 12));
  message->set_f_4(s->substr(0, 9));
  message->set_f_8(s->substr(0, 19));
  Message2::M3* v0 = message->mutable_f_59();
  Message2::M3::M6* v1_0 = v0->add_f_47();
  v1_0->set_f_0(s->substr(0, 21));
  Message2::M3::M6* v1_1 = v0->add_f_47();
  v1_1->set_f_0(s->substr(0, 52));
  v0->set_f_9(0x744);
  v0->set_f_8(0x44);
  v0->set_f_5(s->substr(0, 27));
  v0->set_f_6(s->substr(0, 32));
  Message2::M3::M5* v2 = v0->mutable_f_43();
  v2->set_f_11(s->substr(0, 1));
  v2->set_f_1(0xdd6b4624ebff75);
  v2->set_f_7(0xb65fd8de778109);
  v2->set_f_2(0x24);
  v2->set_f_9(0x1e);
  v2->set_f_3(s->substr(0, 25));
  v2->set_f_8(s->substr(0, 1));
  v2->set_f_4(s->substr(0, 6));
  v2->set_f_5(s->substr(0, 39));
  v0->set_f_2(0x31);
  v0->set_f_1(s->substr(0, 26));
  message->set_f_9(0x240e);
  message->set_f_1(s->substr(0, 16));
  Message2::M4* v3 = message->mutable_f_62();
  v3->set_f_5(s->substr(0, 15));
  v3->set_f_0(0xc7a86f035b5e85);
  v3->set_f_1(0x6a6f3d7039da3d);
  v3->set_f_6(s->substr(0, 1));
  v3->set_f_3(0x96c60);
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
}  // namespace fleetbench::rpc::P4::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
