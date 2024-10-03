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
  Message1::M4* v0_0 = message->add_f_28();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M4* v0_1 = message->add_f_28();
  v0_1->set_f_0(0x2c);
  message->set_f_12(s->substr(0, 122));
  message->set_f_21(s->substr(0, 103));
  Message1::M6* v1_0 = message->add_f_31();
  v1_0->set_f_0(0x6b4a61);
  v1_0->set_f_1(0x684e6ef225b4022d);
  v1_0->set_f_2(0.348184);
  Message1::M6* v1_1 = message->add_f_31();
  v1_1->set_f_1(0x27322e06dcd03cbc);
  v1_1->set_f_2(0.822359);
  Message1::M3* v2 = message->mutable_f_27();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M5* v3 = message->mutable_f_29();
  v3->set_f_0(0.283187);
  message->set_f_1(0x5c);
  message->add_f_18(Message1::E1_CONST_3);
  message->set_f_23(0.930485);
  message->set_f_0(0x2b966a8622695e29);
  message->set_f_16(0x64);
  message->set_f_11(0x70);
  message->set_f_15(s->substr(0, 11));
  Message1::M12* v4_0 = message->add_f_37();
  v4_0->set_f_0(0.066153);
  Message1::M12::M13* v5 = v4_0->mutable_f_2();
  v5->set_f_4(0.649636);
  v5->set_f_5(0.737498);
  v5->set_f_1(Message1::M12::M13::E5_CONST_4);
  v5->set_f_0(Message1::M12::M13::E4_CONST_4);
  Message1::M12* v4_1 = message->add_f_37();
  (void)v4_1;  // Suppresses clang-tidy.
  Message1::M2* v6 = message->mutable_f_26();
  Message1::M2::M22* v7 = v6->mutable_f_2();
  v7->set_f_0(0.786913);
  Message1::M2::M22::M23* v8 = v7->mutable_f_2();
  v8->set_f_0(0.018996);
  Message1::M2::M22::M23::M33* v9 = v8->mutable_f_2();
  v9->set_f_4(0x50df5dccc009ee30);
  v9->set_f_2(s->substr(0, 17));
  v9->set_f_0(0x2f);
  Message1::M2::M22::M30* v10 = v7->mutable_f_3();
  (void)v10;  // Suppresses clang-tidy.
  v6->set_f_0(0.900779);
  Message1::M10* v11 = message->mutable_f_35();
  v11->set_f_0(0x7b5cf587d9fc2eb3);
  Message1::M9* v12 = message->mutable_f_34();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_5(0.439930);
  message->set_f_4(s->substr(0, 17));
  message->set_f_13(0.132782);
  message->set_f_8(0x1ebb);
  message->set_f_9(s->substr(0, 18));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_1(0x37);
  message->set_f_0(0x7d067cf65ad1bbcb);
  message->set_f_11(0x3c4c);
  message->set_f_13(0.010250);
  message->set_f_8(0x3cef);
  Message1::M4* v0_0 = message->add_f_28();
  v0_0->set_f_0(0x5e);
  Message1::M4* v0_1 = message->add_f_28();
  v0_1->set_f_0(0x38);
  message->set_f_3(0.813810);
  Message1::M6* v1_0 = message->add_f_31();
  v1_0->set_f_0(0x3ec80e3e85e);
  v1_0->set_f_2(0.818992);
  Message1::M6* v1_1 = message->add_f_31();
  v1_1->set_f_1(0x55faf2935469bd8f);
  v1_1->set_f_0(0x2a5449c6b30);
  v1_1->set_f_2(0.093008);
  Message1::M9* v2 = message->mutable_f_34();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_14(s->substr(0, 11));
  message->set_f_9(s->substr(0, 120));
  message->set_f_19(0x7a4b347e0e1374a7);
  Message1::M8* v3 = message->mutable_f_33();
  Message1::M8::M19* v4_0 = v3->add_f_6();
  (void)v4_0;  // Suppresses clang-tidy.
  Message1::M8::M19* v4_1 = v3->add_f_6();
  v4_1->set_f_0(0.658991);
  v3->set_f_3(0.354545);
  message->set_f_12(s->substr(0, 39));
  Message1::M1* v5_0 = message->add_f_25();
  v5_0->set_f_0(0x3b7d9bd135e63de5);
  Message1::M1* v5_1 = message->add_f_25();
  v5_1->set_f_2(0x56);
  v5_1->set_f_1(0x6d1d43a1bb53e956);
  Message1::M11* v6 = message->mutable_f_36();
  Message1::M11::M18* v7 = v6->mutable_f_5();
  v7->set_f_0(0x47);
  v6->set_f_2(s->substr(0, 47));
  v6->set_f_1(0x36f9b0b1ca2f6170);
  v6->set_f_3(0.883487);
  message->set_f_2(s->substr(0, 32));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_3(0.206388);
  message->set_f_6(0x2dd64ffe33228841);
  Message1::M6* v0_0 = message->add_f_31();
  v0_0->set_f_1(0x18c45c64a381d23b);
  v0_0->set_f_0(0x1c8278945b8);
  Message1::M6* v0_1 = message->add_f_31();
  v0_1->set_f_2(0.046607);
  Message1::M9* v1 = message->mutable_f_34();
  v1->set_f_0(Message1::M9::E3_CONST_2);
  Message1::M9::M15* v2_0 = v1->add_f_2();
  v2_0->set_f_0(0x2301459831974c6);
  Message1::M9::M15* v2_1 = v1->add_f_2();
  v2_1->set_f_0(0x4331d52cb6e9b7cb);
  message->set_f_7(s->substr(0, 10));
  Message1::M7* v3 = message->mutable_f_32();
  v3->set_f_2(Message1::M7::E2_CONST_5);
  message->set_f_2(s->substr(0, 4));
  message->set_f_22(0x5e);
  message->set_f_23(0.949463);
  Message1::M3* v4 = message->mutable_f_27();
  v4->set_f_0(0.188180);
  message->set_f_17(s->substr(0, 16));
  Message1::E1 array_0[11] = {
      Message1::E1_CONST_2, Message1::E1_CONST_4, Message1::E1_CONST_2,
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_1,
      Message1::E1_CONST_4, Message1::E1_CONST_2, Message1::E1_CONST_2,
      Message1::E1_CONST_3, Message1::E1_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_18(v);
  }
  Message1::M8* v5 = message->mutable_f_33();
  v5->set_f_1(0x33);
  Message1::M8::M19* v6_0 = v5->add_f_6();
  v6_0->set_f_0(0.508552);
  Message1::M8::M19* v6_1 = v5->add_f_6();
  v6_1->set_f_0(0.609435);
  v5->set_f_0(0xfcf5812617);
  v5->set_f_2(s->substr(0, 75));
  Message1::M8::M14* v7 = v5->mutable_f_5();
  v7->set_f_0(0x73);
  v7->set_f_2(0.049960);
  v7->set_f_1(0x62);
  v7->set_f_3(0.915936);
  Message1::M8::M14::M27* v8 = v7->mutable_f_6();
  v8->set_f_0(0x76d70664740d9e67);
  Message1::M8::M14::M25* v9 = v7->mutable_f_5();
  v9->set_f_0(Message1::M8::M14::M25::E7_CONST_1);
  message->set_f_5(0.843137);
  message->set_f_4(s->substr(0, 11));
  Message1::M4* v10_0 = message->add_f_28();
  v10_0->set_f_0(0x45);
  Message1::M4* v10_1 = message->add_f_28();
  (void)v10_1;  // Suppresses clang-tidy.
  message->set_f_11(0x6d);
  message->set_f_9(s->substr(0, 2));
  message->set_f_10(0x3273012b6b17ce91);
  Message1::M11* v11 = message->mutable_f_36();
  v11->set_f_0(0x14a90b6d23e71);
  v11->set_f_3(0.881139);
  v11->set_f_2(s->substr(0, 128));
  message->set_f_12(s->substr(0, 102));
  message->set_f_15(s->substr(0, 98));
  Message1::M5* v12 = message->mutable_f_29();
  Message1::M5::M16* v13 = v12->mutable_f_2();
  v13->set_f_1(0x1f);
  v13->set_f_2(0x1b);
  Message1::M5::M16::M26* v14 = v13->mutable_f_4();
  (void)v14;  // Suppresses clang-tidy.
  v13->set_f_0(0x21);
  message->set_f_13(0.609782);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M4* v0_0 = message->add_f_28();
  v0_0->set_f_0(0x57);
  Message1::M4* v0_1 = message->add_f_28();
  v0_1->set_f_0(0x76);
  message->set_f_9(s->substr(0, 78));
  message->set_f_4(s->substr(0, 21));
  message->set_f_2(s->substr(0, 344));
  message->set_f_15(s->substr(0, 91));
  message->set_f_14(s->substr(0, 17));
  Message1::M7* v1 = message->mutable_f_32();
  v1->set_f_0(0x7ccd2f3d0469a919);
  Message1::M3* v2 = message->mutable_f_27();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_11(0x3d);
  message->set_f_0(0xea866e77b06f226);
  message->set_f_3(0.889534);
  message->set_f_13(0.509413);
  Message1::M12* v3_0 = message->add_f_37();
  v3_0->set_f_0(0.203950);
  Message1::M12* v3_1 = message->add_f_37();
  v3_1->set_f_0(0.968630);
  Message1::M12::M13* v4 = v3_1->mutable_f_2();
  v4->set_f_1(Message1::M12::M13::E5_CONST_3);
  v4->set_f_5(0.327354);
  v4->set_f_4(0.943271);
  v4->set_f_2(s->substr(0, 19));
  message->set_f_1(0x30);
  message->set_f_10(0x6da3fd7950573b91);
  message->set_f_17(s->substr(0, 314));
  Message1::M1* v5_0 = message->add_f_25();
  v5_0->set_f_1(0x147a6ac9e9da4da3);
  v5_0->set_f_2(0x4d);
  Message1::M1* v5_1 = message->add_f_25();
  v5_1->set_f_1(0x2069434bdf6e194e);
  Message1::M5* v6 = message->mutable_f_29();
  Message1::M5::M21* v7 = v6->mutable_f_5();
  (void)v7;  // Suppresses clang-tidy.
  Message1::M5::M17* v8 = v6->mutable_f_3();
  Message1::M5::M17::M28* v9_0 = v8->add_f_3();
  Message1::M5::M17::M28::E9 array_0[12] = {
      Message1::M5::M17::M28::E9_CONST_3, Message1::M5::M17::M28::E9_CONST_3,
      Message1::M5::M17::M28::E9_CONST_5, Message1::M5::M17::M28::E9_CONST_1,
      Message1::M5::M17::M28::E9_CONST_2, Message1::M5::M17::M28::E9_CONST_5,
      Message1::M5::M17::M28::E9_CONST_5, Message1::M5::M17::M28::E9_CONST_5,
      Message1::M5::M17::M28::E9_CONST_4, Message1::M5::M17::M28::E9_CONST_2,
      Message1::M5::M17::M28::E9_CONST_3, Message1::M5::M17::M28::E9_CONST_2,
  };
  for (auto v : array_0) {
    v9_0->add_f_1(v);
  }
  v9_0->set_f_2(Message1::M5::M17::M28::E10_CONST_5);
  Message1::M5::M17::M28* v9_1 = v8->add_f_3();
  v9_1->set_f_3(0x55);
  v9_1->set_f_2(Message1::M5::M17::M28::E10_CONST_4);
  v9_1->add_f_1(Message1::M5::M17::M28::E9_CONST_5);
  v9_1->set_f_0(s->substr(0, 13));
  Message1::M5::M17::M24* v10 = v8->mutable_f_2();
  v10->set_f_0(0.726281);
  v8->set_f_0(0x7c);
  message->set_f_16(0x5c);
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
