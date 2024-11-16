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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message0.pb.h"

namespace fleetbench::rpc::P0::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_0(0x3d97);
  Message0::M1* v0 = message->mutable_f_14();
  v0->set_f_0(false);
  Message0::M1::M7* v1 = v0->mutable_f_4();
  v1->set_f_11(s->substr(0, 260));
  v1->set_f_6(0x7b4);
  v1->set_f_9(0x193bbf);
  v1->set_f_0(s->substr(0, 364));
  v1->set_f_14(0x24);
  v1->set_f_4(0xa);
  v1->set_f_13(Message0::M1::M7::E2_CONST_5);
  v1->set_f_3(0x7a);
  v1->set_f_2(s->substr(0, 9));
  v1->set_f_1(0x1cda6e8d);
  message->set_f_1(s->substr(0, 18));
  message->set_f_3(true);
  message->set_f_5(s->substr(0, 5));
  message->set_f_4(0x2c);
  message->set_f_6(0xc0d67d8dbf26c7);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M3* v0 = message->mutable_f_18();
  v0->set_f_2(0x1a1d2467b66);
  v0->set_f_6(true);
  v0->set_f_3(s->substr(0, 5));
  v0->set_f_4(0x626);
  v0->set_f_14(0x3b);
  v0->set_f_16(0.478396);
  v0->set_f_11(0x4d);
  v0->set_f_9(0x415fa212b69a897d);
  v0->set_f_0(0x50);
  v0->set_f_15(0x32d1);
  v0->set_f_5(0x181a);
  v0->set_f_10(0x36);
  Message0::M3::M4* v1 = v0->mutable_f_31();
  v1->set_f_0(0x322da479cc07d878);
  Message0::M3::M4::M8* v2 = v1->mutable_f_6();
  Message0::M3::M4::M8::M11* v3 = v2->mutable_f_6();
  v3->set_f_0(s->substr(0, 13));
  v2->set_f_0(0x64343ed8054aa32e);
  v2->set_f_2(0.347856);
  Message0::M3::M4::M8::M12* v4 = v2->mutable_f_7();
  v4->set_f_11(0x46);
  v4->set_f_12(0x39);
  v4->set_f_1(0x430);
  v4->set_f_3(0x5561b7bbdc7fcff3);
  v4->set_f_13(0x59511);
  v4->set_f_0(0x70d);
  v4->set_f_9(Message0::M3::M4::M8::M12::E4_CONST_3);
  Message0::M3::M4::M8::M12::M13* v5 = v4->mutable_f_33();
  (void)v5;  // Suppresses clang-tidy.
  v4->set_f_5(false);
  v4->set_f_8(0x53);
  v4->set_f_14(s->substr(0, 1));
  v4->set_f_4(0x31);
  v4->set_f_10(0x1139);
  v2->set_f_1(s->substr(0, 123));
  v0->set_f_8(s->substr(0, 6));
  v0->set_f_12(s->substr(0, 19));
  message->set_f_3(false);
  message->set_f_6(0x3b7597cfdf6);
  Message0::M1* v6 = message->mutable_f_14();
  Message0::M1::M7* v7 = v6->mutable_f_4();
  v7->set_f_7(0x1d3e);
  v7->set_f_6(0x21);
  v7->set_f_14(0x3e9a);
  v7->set_f_5(0x808b28eeb8);
  v7->set_f_2(s->substr(0, 21));
  v7->set_f_13(Message0::M1::M7::E2_CONST_1);
  v7->set_f_3(0x1013);
  v7->set_f_12(Message0::M1::M7::E1_CONST_5);
  v7->set_f_15(s->substr(0, 6));
  v7->set_f_1(0x26ce2aa7788);
  v7->set_f_9(0x2b51);
  v7->set_f_0(s->substr(0, 62));
  v7->set_f_11(s->substr(0, 73));
  message->set_f_0(0x70);
  message->set_f_4(0x25fb);
  message->set_f_2(0x2eb1);
  Message0::M2* v8 = message->mutable_f_16();
  Message0::M2::M5* v9 = v8->mutable_f_3();
  v9->set_f_1(0x40);
  v9->set_f_2(0x3c);
  v9->set_f_0(0.263254);
  v8->set_f_0(false);
  message->set_f_5(s->substr(0, 2));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_5(s->substr(0, 3));
  message->set_f_1(s->substr(0, 30));
  message->set_f_4(0x1e71);
  message->set_f_6(0x1b55b44675ba35);
  Message0::M1* v0 = message->mutable_f_14();
  Message0::M1::M7* v1 = v0->mutable_f_4();
  v1->set_f_4(0x3f);
  v1->set_f_7(0x6f);
  v1->set_f_1(0x288986fd0ed3);
  v1->set_f_12(Message0::M1::M7::E1_CONST_1);
  v1->set_f_13(Message0::M1::M7::E2_CONST_1);
  v1->set_f_10(0.282239);
  v1->set_f_3(0x3b);
  v1->set_f_15(s->substr(0, 51));
  v1->set_f_2(s->substr(0, 43));
  v1->set_f_14(0x692a8422f34);
  v0->set_f_0(true);
  message->set_f_3(true);
  message->set_f_0(0x1a);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_16();
  v0->set_f_0(false);
  message->set_f_4(0x2d33);
  message->set_f_0(0x37);
  message->set_f_5(s->substr(0, 52));
  message->set_f_1(s->substr(0, 5));
  Message0::M1* v1 = message->mutable_f_14();
  v1->set_f_0(true);
  message->set_f_3(true);
  Message0::M3* v2 = message->mutable_f_18();
  v2->set_f_13(0x26);
  v2->set_f_2(0x71d7c5f35);
  v2->set_f_3(s->substr(0, 3));
  v2->set_f_1(0x8b);
  v2->set_f_11(0x56);
  v2->set_f_12(s->substr(0, 4));
  v2->set_f_0(0x1b);
  v2->set_f_10(0x2e);
  v2->set_f_16(0.551899);
  v2->set_f_14(0x43);
  v2->set_f_7(0x3a);
  Message0::M3::M4* v3 = v2->mutable_f_31();
  v3->set_f_1(0x740538d1f);
  v3->set_f_0(0x1086d20c1634aec7);
  v2->set_f_15(0x31f5);
  v2->set_f_9(0x72485be5db8ae758);
  v2->set_f_5(0x6f);
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
}  // namespace fleetbench::rpc::P0::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
