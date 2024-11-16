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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_

#include <cstddef>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/response/Message1.pb.h"

namespace fleetbench::rpc::P5::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_2(0x621829725);
  message->set_f_0(s->substr(0, 13920));
  Message1::M1* v0_0 = message->add_f_6();
  v0_0->set_f_0(0x5a);
  Message1::M1::M13* v1_0 = v0_0->add_f_2();
  Message1::M1::M13::M25* v2_0 = v1_0->add_f_4();
  v2_0->set_f_2(0x9f00158599c5);
  v2_0->set_f_1(0x2d20e2ed);
  v2_0->set_f_5(0x45e6ae80a);
  v1_0->set_f_0(false);
  Message1::M1::M15* v3 = v0_0->mutable_f_3();
  v3->set_f_2(s->substr(0, 19));
  v3->set_f_1(0x3a70d843);
  Message1::M1* v0_1 = message->add_f_6();
  Message1::M1::M18* v4 = v0_1->mutable_f_4();
  v4->set_f_0(0x35);
  Message1::M1::M13* v5_0 = v0_1->add_f_2();
  Message1::M1::M13::M25* v6_0 = v5_0->add_f_4();
  v6_0->set_f_1(0x5cfc9798);
  v6_0->set_f_4(0x73);
  v5_0->set_f_1(Message1::M1::M13::E5_CONST_3);
  Message1::M1::M13* v5_1 = v0_1->add_f_2();
  v5_1->set_f_0(false);
  Message1::M1::M13::M25* v7_0 = v5_1->add_f_4();
  v7_0->set_f_2(0x37807f5c2bf);
  v7_0->set_f_0(0x7);
  v7_0->set_f_4(0x3a4a353d2);
  v7_0->set_f_3(0x3abd5f27);
  v7_0->set_f_5(0x539ca41);
  Message1::M9* v8 = message->mutable_f_16();
  (void)v8;  // Suppresses clang-tidy.
  Message1::M10* v9 = message->mutable_f_17();
  v9->set_f_0(0xf);
  Message1::M8* v10_0 = message->add_f_15();
  Message1::M8::M20* v11 = v10_0->mutable_f_2();
  v11->set_f_9(0xde66c89);
  v11->set_f_10(Message1::M8::M20::E7_CONST_2);
  v11->set_f_12(0x5075966f);
  v11->set_f_1(s->substr(0, 20));
  v11->set_f_2(s->substr(0, 3009));
  v11->set_f_8(0.718032);
  Message1::M8::M20::M24* v12_0 = v11->add_f_16();
  Message1::M8::M20::M24::M28* v13 = v12_0->mutable_f_4();
  v13->set_f_3(0x8b0ae1f);
  v13->set_f_2(0x43);
  v13->set_f_1(s->substr(0, 1729));
  v13->set_f_0(0x6f);
  v12_0->set_f_0(0x5a);
  v11->set_f_7(s->substr(0, 14));
  v11->set_f_3(false);
  Message1::M8* v10_1 = message->add_f_15();
  (void)v10_1;  // Suppresses clang-tidy.
  Message1::M4* v14 = message->mutable_f_9();
  v14->set_f_0(0.509045);
  Message1::M5* v15 = message->mutable_f_10();
  (void)v15;  // Suppresses clang-tidy.
  Message1::M3* v16_0 = message->add_f_8();
  (void)v16_0;  // Suppresses clang-tidy.
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_1(Message1::E1_CONST_1);
  Message1::M2* v0 = message->mutable_f_7();
  Message1::M2::M14* v1_0 = v0->add_f_5();
  v1_0->set_f_0(0x22340ecb);
  Message1::M2::M14* v1_1 = v0->add_f_5();
  (void)v1_1;  // Suppresses clang-tidy.
  v0->set_f_2(0x6c9267e);
  v0->set_f_3(0x2740d61);
  v0->set_f_0(0x1c05ec1e);
  Message1::M9* v2 = message->mutable_f_16();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M4* v3 = message->mutable_f_9();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M7* v4 = message->mutable_f_13();
  Message1::M7::M19* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M6* v6_0 = message->add_f_12();
  v6_0->set_f_1(0.778572);
  Message1::M10* v7 = message->mutable_f_17();
  v7->set_f_0(0x50);
  Message1::M1* v8_0 = message->add_f_6();
  Message1::M1::M18* v9 = v8_0->mutable_f_4();
  (void)v9;  // Suppresses clang-tidy.
  v8_0->set_f_0(0x1293d28b5c32b);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_2(0x43250e3cd);
  Message1::M1* v0_0 = message->add_f_6();
  Message1::M1::M15* v1 = v0_0->mutable_f_3();
  v1->set_f_5(0xb9da154);
  v1->set_f_3(0x32b305c);
  Message1::M1::M18* v2 = v0_0->mutable_f_4();
  v2->set_f_0(0xed49e84);
  Message1::M1* v0_1 = message->add_f_6();
  Message1::M1::M15* v3 = v0_1->mutable_f_3();
  v3->set_f_3(0x62);
  v3->set_f_5(0x2878);
  v3->set_f_1(0x6ae1205c);
  Message1::M1::M13* v4_0 = v0_1->add_f_2();
  Message1::M1::M13::M25* v5_0 = v4_0->add_f_4();
  v5_0->set_f_2(0x3ce015e8495);
  v5_0->set_f_4(0xe1d4946a259a95);
  Message1::M1::M13::M25* v5_1 = v4_0->add_f_4();
  v5_1->set_f_5(0x6f);
  v5_1->set_f_1(0x41145a75);
  v5_1->set_f_2(0xe1500aded3);
  v5_1->set_f_0(0x3);
  v4_0->set_f_0(false);
  Message1::M1::M18* v6 = v0_1->mutable_f_4();
  v6->set_f_0(0x601d58e);
  Message1::M4* v7 = message->mutable_f_9();
  v7->set_f_0(0.360048);
  Message1::M9* v8 = message->mutable_f_16();
  Message1::M9::M12* v9_0 = v8->add_f_3();
  Message1::M9::M12::M21* v10 = v9_0->mutable_f_2();
  v10->set_f_6(0xe553aa4d88);
  v10->set_f_1(s->substr(0, 3763));
  v10->add_f_4(s->substr(0, 510));
  v10->set_f_2(s->substr(0, 18));
  v10->set_f_3(0x30c4e7561);
  Message1::M5* v11 = message->mutable_f_10();
  v11->set_f_0(0x29);
  Message1::M6* v12_0 = message->add_f_12();
  v12_0->add_f_0(s->substr(0, 30));
  v12_0->set_f_2(0x785b6c2a7be4ef);
  Message1::M6::M16* v13 = v12_0->mutable_f_6();
  v13->set_f_0(s->substr(0, 21));
  v13->set_f_2(0x10);
  v12_0->set_f_1(0.795359);
  Message1::M10* v14 = message->mutable_f_17();
  (void)v14;  // Suppresses clang-tidy.
  Message1::M3* v15_0 = message->add_f_8();
  (void)v15_0;  // Suppresses clang-tidy.
  Message1::M3* v15_1 = message->add_f_8();
  Message1::M3::M11* v16 = v15_1->mutable_f_2();
  v16->set_f_0(Message1::M3::M11::E4_CONST_3);
  Message1::M3::M11::M22* v17 = v16->mutable_f_3();
  v17->set_f_0(0x141af876);
  Message1::M3::M11::M23* v18_0 = v16->add_f_4();
  Message1::M3::M11::M23::M27* v19 = v18_0->mutable_f_3();
  v19->set_f_0(0x556c7c2b4);
  Message1::M3::M11::M23::M27::M31* v20 = v19->mutable_f_3();
  v20->set_f_0(s->substr(0, 17));
  Message1::M7* v21 = message->mutable_f_13();
  Message1::M7::M17* v22 = v21->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
  v21->set_f_0(0x5d189072);
  message->set_f_0(s->substr(0, 18));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M4* v0 = message->mutable_f_9();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_3(0x7c);
  Message1::M3* v1_0 = message->add_f_8();
  v1_0->set_f_0(s->substr(0, 21));
  message->set_f_1(Message1::E1_CONST_2);
  Message1::M5* v2 = message->mutable_f_10();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M1* v3_0 = message->add_f_6();
  Message1::M1::M18* v4 = v3_0->mutable_f_4();
  v4->set_f_0(0x75d8b);
  Message1::M1::M15* v5 = v3_0->mutable_f_3();
  v5->set_f_4(s->substr(0, 34));
  v5->set_f_2(s->substr(0, 618));
  Message1::M1::M13* v6_0 = v3_0->add_f_2();
  v6_0->set_f_1(Message1::M1::M13::E5_CONST_1);
  Message1::M1* v3_1 = message->add_f_6();
  Message1::M1::M18* v7 = v3_1->mutable_f_4();
  (void)v7;  // Suppresses clang-tidy.
  v3_1->set_f_0(0x36);
  Message1::M9* v8 = message->mutable_f_16();
  Message1::M9::M12* v9_0 = v8->add_f_3();
  v9_0->set_f_0(0x1ecfb1fc);
  Message1::M9::M12::M21* v10 = v9_0->mutable_f_2();
  v10->set_f_1(s->substr(0, 98));
  v10->set_f_5(0x1e20);
  v10->set_f_3(0x7b58e72606ed0b);
  v10->set_f_2(s->substr(0, 9));
  int array_0[184] = {
      505,  62,  493,   10,   23,   620,   14,  115,  418,   173,  186, 47,
      24,   23,  62,    17,   28,   1247,  42,  19,   29,    21,   782, 233,
      1839, 32,  979,   49,   137,  195,   73,  13,   25,    29,   83,  24,
      496,  393, 14737, 8,    42,   26,    25,  10,   61,    51,   18,  24,
      15,   34,  132,   43,   18,   1940,  113, 14,   3544,  7,    36,  31,
      47,   59,  15,    114,  1326, 3627,  91,  48,   3032,  15,   330, 17,
      14,   22,  35,    3155, 14,   112,   62,  291,  53,    17,   109, 44,
      427,  56,  122,   112,  15,   77,    26,  1723, 62,    17,   60,  24923,
      20,   6,   30,    61,   298,  187,   114, 115,  19,    16,   18,  33,
      45,   276, 19,    38,   28,   46,    450, 27,   2667,  24,   371, 1,
      70,   10,  113,   9,    40,   126,   56,  27,   23,    1735, 342, 74,
      46,   6,   29,    13,   64,   282,   27,  30,   13953, 80,   9,   9,
      261,  15,  73,    32,   32,   20,    27,  32,   30,    33,   189, 42,
      30,   30,  17,    23,   65,   24902, 19,  13,   16,    91,   43,  46,
      23,   6,   28,    303,  123,  47,    309, 42,   14,    35,   24,  22,
      2,    27,  13,    28,
  };
  for (size_t i = 0; i < 184; ++i) {
    v10->add_f_7(s->substr(0, array_0[i]));
  }
  message->set_f_0(s->substr(0, 2949));
  message->set_f_2(0x1e);
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
}  // namespace fleetbench::rpc::P5::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_
