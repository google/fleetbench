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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message1.pb.h"

namespace fleetbench::rpc::P2::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_5(s->substr(0, 6));
  message->set_f_1(0xd5f4cee);
  message->set_f_4(0xca8046614177d2);
  Message1::M1* v0 = message->mutable_f_20();
  v0->add_f_1(0x1bdf11);
  v0->set_f_0(0xc03a9c260f9c7);
  message->set_f_0(s->substr(0, 20));
  Message1::M3* v1 = message->mutable_f_33();
  v1->set_f_5(0x3aa42a91ecf65e78);
  v1->set_f_1(0x298c4e0a94b4b06f);
  v1->set_f_3(0x1);
  message->set_f_3(0x1041757783cd4d);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_26();
  v0->set_f_1(true);
  Message1::M2::M5* v1 = v0->mutable_f_6();
  v1->set_f_0(0x199291);
  message->set_f_2(Message1::E1_CONST_3);
  message->set_f_3(0xd997392d73df0f);
  message->set_f_5(s->substr(0, 18));
  Message1::M3* v2 = message->mutable_f_33();
  v2->set_f_5(0x4dbc97604c5bc6bc);
  v2->set_f_1(0x1c4a4f0a834d9982);
  v2->set_f_2(0xd2b2cf3527c9b9);
  v2->set_f_3(0x60);
  v2->add_f_4(s->substr(0, 15));
  message->set_f_0(s->substr(0, 13));
  message->set_f_4(0x12);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_5(s->substr(0, 20));
  message->set_f_4(0xa9585331a23920);
  Message1::M3* v0 = message->mutable_f_33();
  v0->set_f_0(0x72761ab863bb6e);
  Message1::M3::M6* v1 = v0->mutable_f_21();
  v1->set_f_6(0x1f);
  v1->set_f_7(s->substr(0, 1));
  v1->set_f_5(0x3d17092f0cbe81);
  v1->set_f_4(0x54387427537d543c);
  v1->set_f_1(Message1::M3::M6::E2_CONST_5);
  v1->set_f_2(0x3a738c2a);
  v1->set_f_3(0x3eb176daced0d206);
  v0->set_f_3(0x8);
  v0->set_f_5(0x413273d3ea0d87c8);
  Message1::M1* v2 = message->mutable_f_20();
  v2->add_f_1(0xe9c9fd2);
  v2->set_f_0(0xe574ad1e931e);
  Message1::M4* v3 = message->mutable_f_36();
  v3->set_f_5(s->substr(0, 24));
  v3->set_f_3(0xf);
  v3->set_f_2(s->substr(0, 31));
  v3->set_f_4(0x14);
  v3->set_f_0(0x25a1606a);
  v3->set_f_6(0x57);
  v3->set_f_7(0xd27fffeee10149);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_0(s->substr(0, 10));
  message->set_f_3(0xfd147b9cac51fa);
  message->set_f_4(0x33622ce69b58a5);
  Message1::M1* v0 = message->mutable_f_20();
  v0->add_f_1(0x1e813e);
  Message1::M4* v1 = message->mutable_f_36();
  v1->set_f_7(0x746ca643a408b1);
  v1->set_f_2(s->substr(0, 29));
  v1->set_f_4(0x3dbb);
  v1->set_f_3(0x7dd1c);
  Message1::M3* v2 = message->mutable_f_33();
  v2->set_f_3(0xb2dda53);
  v2->set_f_0(0x656efe881535);
  v2->set_f_2(0x1a182dfb25fdd);
  Message1::M3::M6* v3 = v2->mutable_f_21();
  v3->add_f_0(s->substr(0, 24));
  v3->set_f_2(0x421d2f00);
  v3->set_f_1(Message1::M3::M6::E2_CONST_5);
  v3->set_f_9(0xf);
  v3->set_f_7(s->substr(0, 14));
  v3->set_f_8(s->substr(0, 27));
  v3->set_f_4(0x4110d5bdf1aaa9ee);
  v3->set_f_6(0x21);
  v2->set_f_5(0x541209bbac49ce7c);
  v2->set_f_1(0x1466028b7e128703);
  message->set_f_1(0x1cc7bb51295c4);
  message->set_f_2(Message1::E1_CONST_2);
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
}  // namespace fleetbench::rpc::P2::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_
