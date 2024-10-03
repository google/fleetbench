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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message2.pb.h"

namespace fleetbench::rpc::P9::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_24(0x3c773ed30df8e78b);
  message->set_f_25(0x16ef);
  message->set_f_9(s->substr(0, 166));
  message->set_f_8(0x8);
  message->set_f_29(0x19);
  message->set_f_4(s->substr(0, 2594));
  Message2::M5* v0 = message->mutable_f_59();
  v0->set_f_3(0.585527);
  Message2::M5::E2 array_1[12] = {
      Message2::M5::E2_CONST_5, Message2::M5::E2_CONST_3,
      Message2::M5::E2_CONST_1, Message2::M5::E2_CONST_3,
      Message2::M5::E2_CONST_5, Message2::M5::E2_CONST_2,
      Message2::M5::E2_CONST_4, Message2::M5::E2_CONST_4,
      Message2::M5::E2_CONST_2, Message2::M5::E2_CONST_3,
      Message2::M5::E2_CONST_3, Message2::M5::E2_CONST_3,
  };
  for (auto v : array_1) {
    v0->add_f_2(v);
  }
  Message2::M5::M14* v1 = v0->mutable_f_9();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_0(0x5cdd0dc1c2d9bbde);
  Message2::M10* v2 = message->mutable_f_66();
  v2->set_f_0(0xc914097);
  Message2::M10::M22* v3 = v2->mutable_f_6();
  v3->set_f_0(0x413c036);
  message->set_f_11(0xcb221);
  Message2::M3* v4_0 = message->add_f_56();
  Message2::M3::M18* v5_0 = v4_0->add_f_8();
  v5_0->set_f_0(s->substr(0, 16));
  v4_0->set_f_1(0xa5d39d735b3f8);
  v4_0->set_f_0(0x43);
  v4_0->set_f_2(0x32e0);
  message->set_f_7(false);
  message->set_f_1(0x5a);
  message->set_f_19(s->substr(0, 7));
  message->set_f_27(0x5c);
  message->set_f_15(Message2::E1_CONST_3);
  Message2::M9* v6 = message->mutable_f_64();
  v6->set_f_6(s->substr(0, 2));
  v6->set_f_7(0x6e5fda2);
  v6->set_f_4(false);
  v6->set_f_2(true);
  v6->set_f_3(0x16);
  v6->set_f_5(s->substr(0, 20));
  v6->set_f_10(0x6f);
  v6->set_f_8(0x55f02);
  message->set_f_10(0x4a);
  message->set_f_3(0x5d);
  Message2::M6* v7_0 = message->add_f_60();
  v7_0->set_f_1(s->substr(0, 1));
  message->add_f_21(0x24);
  message->set_f_17(0x1c67);
  message->set_f_28(s->substr(0, 212));
  Message2::M7* v8 = message->mutable_f_61();
  v8->set_f_3(s->substr(0, 5));
  v8->set_f_0(0x26);
  v8->add_f_1(Message2::M7::E3_CONST_1);
  Message2::M7::M26* v9_0 = v8->add_f_12();
  v9_0->set_f_0(false);
  v8->set_f_5(0x73);
  v8->set_f_2(0x84664);
  Message2::M7::M25* v10_0 = v8->add_f_11();
  Message2::M7::M25::M38* v11 = v10_0->mutable_f_6();
  v11->set_f_4(0x9);
  v11->set_f_0(0x60e59a0562552ef6);
  v11->set_f_27(0x1007c1);
  v11->set_f_15(0x159f28a270ffb4b);
  v11->set_f_30(s->substr(0, 2));
  v11->set_f_8(0x67b7aea9);
  v11->set_f_28(s->substr(0, 8));
  v11->set_f_20(0x1e14d0d1);
  v11->set_f_16(0x31507ea);
  v11->set_f_26(s->substr(0, 3));
  v11->set_f_1(0x1fe387500f137c9c);
  Message2::M7::M25::M38::M45* v12 = v11->mutable_f_57();
  v12->set_f_3(0x6cd);
  v12->set_f_2(0x46);
  v12->set_f_4(0x42b6c81f26e840ae);
  v12->set_f_1(0x771573bf1f11750);
  v12->set_f_6(0x30);
  v11->set_f_19(0x3b663e3c75785a93);
  v11->set_f_25(0x6e2ef86fd2137392);
  v11->set_f_6(0xeafbd8);
  v11->add_f_18(s->substr(0, 6));
  v11->set_f_7(0x22);
  v11->set_f_2(s->substr(0, 120));
  v11->set_f_14(s->substr(0, 4));
  v11->set_f_24(true);
  v11->set_f_23(0xd4e4b);
  v11->set_f_17(s->substr(0, 38));
  v10_0->set_f_1(0x73fcc357);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M4* v0 = message->mutable_f_57();
  Message2::M4::M17* v1 = v0->mutable_f_6();
  Message2::M4::M17::M35* v2 = v1->mutable_f_6();
  v2->set_f_3(0x1b);
  v2->set_f_2(0x788c15c0);
  v2->set_f_0(s->substr(0, 2));
  v1->set_f_2(0xda2409a);
  v1->set_f_0(0x47c31b064aadfb31);
  v1->set_f_1(0x6b2ed22bc02ebee1);
  Message2::M4::M30* v3 = v0->mutable_f_9();
  v3->set_f_2(0x1e);
  v3->set_f_3(0xad0a7);
  Message2::M4::M30::M34* v4 = v3->mutable_f_10();
  Message2::M4::M30::M34::M43* v5_0 = v4->add_f_11();
  Message2::M4::M30::M34::M43::M55* v6 = v5_0->mutable_f_3();
  v6->set_f_0(0x74da4087e500edfc);
  v4->set_f_0(0x6b);
  v4->set_f_2(0x58);
  Message2::M4::M30::M34::M41* v7_0 = v4->add_f_10();
  (void)v7_0;  // Suppresses clang-tidy.
  Message2::M4::M30::M34::M50* v8 = v4->mutable_f_14();
  Message2::M4::M30::M34::M50::M56* v9 = v8->mutable_f_2();
  v9->set_f_0(0x9c21021);
  v9->set_f_3(0x32c3dfc);
  v9->set_f_5(s->substr(0, 389));
  v9->set_f_4(s->substr(0, 24));
  v9->set_f_2(0x4a25f3d);
  v4->set_f_1(0x143a283a);
  v3->set_f_1(s->substr(0, 7));
  v0->set_f_0(s->substr(0, 21));
  message->set_f_3(0x3b);
  Message2::M6* v10_0 = message->add_f_60();
  v10_0->set_f_1(s->substr(0, 7));
  message->add_f_21(0x67);
  message->set_f_28(s->substr(0, 3446));
  message->set_f_18(s->substr(0, 22));
  Message2::M3* v11_0 = message->add_f_56();
  Message2::M3::M18* v12_0 = v11_0->add_f_8();
  v12_0->set_f_0(s->substr(0, 7));
  v11_0->set_f_1(0x22b5aa6e6bcbae0d);
  v11_0->set_f_2(0xb);
  message->set_f_15(Message2::E1_CONST_4);
  message->set_f_12(0x338b);
  message->set_f_6(0xd4ce437);
  Message2::M1* v13 = message->mutable_f_54();
  Message2::M1::M13* v14 = v13->mutable_f_5();
  v14->set_f_0(0x530de8fad502d65e);
  Message2::M1::M20* v15 = v13->mutable_f_7();
  (void)v15;  // Suppresses clang-tidy.
  message->set_f_19(s->substr(0, 3));
  message->set_f_10(0xf23489c);
  Message2::M7* v16 = message->mutable_f_61();
  v16->set_f_3(s->substr(0, 149));
  Message2::M7::M25* v17_0 = v16->add_f_11();
  Message2::M7::M25::M38* v18 = v17_0->mutable_f_6();
  v18->set_f_10(0.122849);
  v18->set_f_23(0x1b03fb);
  v18->set_f_26(s->substr(0, 2));
  v18->set_f_16(0x33d2);
  v18->set_f_3(0x16f031b84c37d231);
  Message2::M7::M25::M38::M45* v19 = v18->mutable_f_57();
  v19->set_f_1(0x64cdf736d9ae50fc);
  v19->set_f_3(0xa7be8ba);
  v19->set_f_0(0x3c7ae45cce0d31a9);
  v19->set_f_4(0x18ae08d12684ed9b);
  v19->set_f_2(0x7);
  v19->set_f_5(0x4b);
  v18->set_f_27(0x3152);
  v18->set_f_29(0x7fef8f35122047c5);
  v18->add_f_11(Message2::M7::M25::M38::E9_CONST_1);
  v18->set_f_28(s->substr(0, 59));
  v18->set_f_7(0xb1136);
  v18->set_f_9(false);
  v18->set_f_6(0x1628f74);
  v18->set_f_4(0xddb6ce4);
  v18->add_f_18(s->substr(0, 3));
  v18->set_f_5(0x5b5bd3ca4ca9cceb);
  v18->set_f_12(0x6a);
  v18->set_f_17(s->substr(0, 12));
  v18->set_f_22(s->substr(0, 6));
  v18->set_f_2(s->substr(0, 22));
  v18->set_f_0(0x69524e4acfb192d0);
  v17_0->set_f_2(0x3016a828d52dfe4a);
  v16->set_f_0(0xc51c488);
  message->set_f_8(0x9e74722);
  message->set_f_25(0x26ea);
  message->set_f_24(0x12c020b1367c4d50);
  Message2::M2* v20 = message->mutable_f_55();
  Message2::M2::M11* v21_0 = v20->add_f_2();
  v21_0->set_f_0(s->substr(0, 14));
  message->set_f_16(0xe19eb5704945396);
  message->set_f_2(s->substr(0, 11));
  Message2::M9* v22 = message->mutable_f_64();
  v22->set_f_4(true);
  v22->set_f_0(s->substr(0, 5));
  v22->set_f_2(false);
  v22->set_f_1(0x147fd6bcb604f23d);
  v22->set_f_3(0x68);
  v22->set_f_10(0x1b4ce7);
  v22->set_f_9(0x261567f4ebdc640e);
  v22->set_f_7(0x44);
  v22->set_f_8(0x6e);
  message->set_f_29(0x1c7922);
  message->set_f_13(0x61);
  Message2::M8* v23 = message->mutable_f_62();
  Message2::M8::M19* v24_0 = v23->add_f_4();
  v24_0->set_f_0(0x9fc031);
  v23->set_f_0(0x120f9c878901bf30);
  message->set_f_14(true);
  message->set_f_11(0x1);
  message->set_f_17(0x44);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M7* v0 = message->mutable_f_61();
  Message2::M7::M26* v1_0 = v0->add_f_12();
  v1_0->set_f_0(true);
  v0->set_f_4(true);
  v0->set_f_2(0x65);
  v0->set_f_3(s->substr(0, 452));
  Message2::M7::M27* v2_0 = v0->add_f_15();
  v2_0->set_f_4(0x3b7);
  v2_0->set_f_23(0x7cbb4);
  v2_0->set_f_15(0x19ac6fd903637d62);
  v2_0->set_f_12(s->substr(0, 29));
  v2_0->add_f_11(Message2::M7::M27::E5_CONST_1);
  v2_0->set_f_14(0x2f);
  v2_0->set_f_3(s->substr(0, 3));
  v2_0->set_f_19(0x5c6672e5);
  v2_0->add_f_18(0x20);
  v2_0->set_f_21(0x75);
  v2_0->set_f_31(0x5484eec4661adf22);
  v2_0->set_f_2(s->substr(0, 6));
  v2_0->set_f_16(0x22b6);
  v2_0->set_f_22(0x908bb8f);
  v2_0->set_f_24(0x2ead0b02ff6d9aa);
  v2_0->set_f_9(Message2::M7::M27::E4_CONST_3);
  v2_0->set_f_29(0x277b2);
  v2_0->set_f_8(0x4);
  v2_0->set_f_28(s->substr(0, 85));
  v2_0->set_f_0(0x3e44a9c8724c0e71);
  v2_0->set_f_30(0x10f3f51fb0ba4db5);
  Message2::M7::E3 array_0[21] = {
      Message2::M7::E3_CONST_3, Message2::M7::E3_CONST_2,
      Message2::M7::E3_CONST_1, Message2::M7::E3_CONST_1,
      Message2::M7::E3_CONST_3, Message2::M7::E3_CONST_1,
      Message2::M7::E3_CONST_2, Message2::M7::E3_CONST_1,
      Message2::M7::E3_CONST_4, Message2::M7::E3_CONST_3,
      Message2::M7::E3_CONST_3, Message2::M7::E3_CONST_2,
      Message2::M7::E3_CONST_1, Message2::M7::E3_CONST_1,
      Message2::M7::E3_CONST_3, Message2::M7::E3_CONST_5,
      Message2::M7::E3_CONST_5, Message2::M7::E3_CONST_1,
      Message2::M7::E3_CONST_5, Message2::M7::E3_CONST_2,
      Message2::M7::E3_CONST_1,
  };
  for (auto v : array_0) {
    v0->add_f_1(v);
  }
  Message2::M10* v3 = message->mutable_f_66();
  Message2::M10::M15* v4 = v3->mutable_f_4();
  v4->set_f_0(0x6d);
  v4->set_f_2(0x58b6f35edbee6eed);
  v4->set_f_3(0x1b);
  v4->set_f_1(0x5c);
  v3->set_f_0(0x48);
  Message2::M10::M22* v5 = v3->mutable_f_6();
  v5->set_f_0(0x2e);
  Message2::M9* v6 = message->mutable_f_64();
  Message2::M9::M23* v7 = v6->mutable_f_21();
  v7->set_f_0(0x55);
  v6->set_f_4(false);
  v6->set_f_1(0x49dde5cdcf4924f8);
  v6->set_f_10(0x3c8f);
  v6->set_f_7(0x18c6df);
  v6->set_f_2(true);
  message->set_f_13(0x4);
  message->set_f_20(s->substr(0, 9));
  message->set_f_19(s->substr(0, 20));
  message->set_f_14(false);
  message->add_f_21(0x40);
  Message2::M8* v8 = message->mutable_f_62();
  Message2::M8::M16* v9_0 = v8->add_f_3();
  v9_0->set_f_0(s->substr(0, 254));
  Message2::M8::M16::M37* v10_0 = v9_0->add_f_2();
  v10_0->set_f_1(0x131719163c5f649f);
  v10_0->set_f_3(0xe93ba);
  v10_0->set_f_0(s->substr(0, 7));
  v10_0->set_f_4(0x458899584eb8b38a);
  Message2::M8::M16::M37::M47* v11 = v10_0->mutable_f_14();
  Message2::M8::M16::M37::M47::M54* v12_0 = v11->add_f_3();
  v12_0->set_f_0(0xffe);
  v11->set_f_0(0x2bae266ffb347be7);
  Message2::M8::M19* v13_0 = v8->add_f_4();
  v13_0->set_f_0(0x794e4ce);
  v8->set_f_0(0x4a6791060312bad4);
  Message2::M6* v14_0 = message->add_f_60();
  v14_0->set_f_1(s->substr(0, 19));
  v14_0->set_f_0(false);
  message->set_f_18(s->substr(0, 10));
  message->set_f_3(0x521);
  message->set_f_15(Message2::E1_CONST_4);
  message->set_f_12(0x54);
  Message2::M2* v15 = message->mutable_f_55();
  v15->set_f_0(0x1a92fe6c);
  message->set_f_17(0x3e63);
  message->set_f_10(0x7);
  message->set_f_25(0xe);
  Message2::M1* v16 = message->mutable_f_54();
  Message2::M1::M29* v17_0 = v16->add_f_12();
  (void)v17_0;  // Suppresses clang-tidy.
  Message2::M1::M13* v18 = v16->mutable_f_5();
  v18->set_f_0(0x70eef09a0eb3a6d6);
  Message2::M1::M20* v19 = v16->mutable_f_7();
  v19->set_f_0(0x20);
  message->set_f_6(0x77);
  message->set_f_0(0x65a2a9e8863e0473);
  message->set_f_28(s->substr(0, 80));
  message->set_f_4(s->substr(0, 232));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_55();
  Message2::M2::M12* v1_0 = v0->add_f_3();
  v1_0->set_f_0(s->substr(0, 59));
  Message2::M2::M11* v2_0 = v0->add_f_2();
  v2_0->set_f_0(s->substr(0, 1));
  message->set_f_11(0x3f);
  Message2::M6* v3_0 = message->add_f_60();
  v3_0->set_f_1(s->substr(0, 290));
  v3_0->set_f_0(true);
  message->set_f_7(true);
  Message2::M7* v4 = message->mutable_f_61();
  v4->add_f_1(Message2::M7::E3_CONST_2);
  Message2::M7::M26* v5_0 = v4->add_f_12();
  v5_0->set_f_0(false);
  v4->set_f_5(0x46);
  Message2::M7::M25* v6_0 = v4->add_f_11();
  v6_0->set_f_0(true);
  v6_0->set_f_2(0x2140b8f7233fd59d);
  Message2::M7::M25::M38* v7 = v6_0->mutable_f_6();
  v7->set_f_2(s->substr(0, 6));
  v7->set_f_20(0x1586fd69);
  v7->set_f_13(false);
  v7->set_f_14(s->substr(0, 8));
  v7->set_f_19(0x2d75b2b11d7a70be);
  v7->set_f_6(0xd);
  v7->set_f_22(s->substr(0, 7));
  v7->set_f_30(s->substr(0, 8));
  v7->set_f_24(true);
  v7->set_f_26(s->substr(0, 156));
  v7->set_f_9(true);
  v7->add_f_11(Message2::M7::M25::M38::E9_CONST_3);
  v7->add_f_18(s->substr(0, 4));
  v7->set_f_12(0x67);
  v7->set_f_7(0x41);
  v7->set_f_4(0x1fbcb6);
  v7->set_f_16(0x14322c);
  v7->set_f_21(0x1f652e);
  v7->set_f_1(0x3ddae694382877bb);
  Message2::M7::M25::M38::M45* v8 = v7->mutable_f_57();
  v8->set_f_6(0x12);
  v8->set_f_0(0x75645a41af2da078);
  v8->set_f_5(0x14);
  v8->set_f_4(0x7ede659cfaab99ff);
  v8->set_f_1(0x66dd1ed2058e0809);
  v8->set_f_3(0x2ee5);
  v7->set_f_5(0x2834327008cca7fc);
  v4->set_f_2(0x15);
  Message2::M7::M27* v9_0 = v4->add_f_15();
  v9_0->set_f_23(0x2e30);
  v9_0->set_f_2(s->substr(0, 61));
  v9_0->add_f_11(Message2::M7::M27::E5_CONST_2);
  v9_0->set_f_0(0x6d4f35e3c3a831bb);
  v9_0->set_f_6(0x50c0ea531570d940);
  v9_0->set_f_27(0x24);
  v9_0->set_f_10(0x7a);
  v9_0->set_f_25(0x2a2370adce01e7f9);
  v9_0->set_f_12(s->substr(0, 20));
  v9_0->set_f_15(0xf0920e61f2e152f);
  v9_0->set_f_14(0x37);
  v9_0->set_f_3(s->substr(0, 8));
  v9_0->set_f_19(0x64e3ac88);
  v9_0->set_f_26(false);
  v9_0->add_f_18(0x2f);
  v9_0->set_f_7(0x2253);
  v9_0->set_f_8(0x13);
  v9_0->set_f_1(s->substr(0, 118));
  v9_0->set_f_20(s->substr(0, 1));
  v9_0->set_f_30(0x6d39344dff1bffa2);
  v9_0->set_f_9(Message2::M7::M27::E4_CONST_5);
  v9_0->set_f_21(0x1bab);
  v9_0->set_f_31(0x4fa9427bf08ff5e0);
  message->set_f_4(s->substr(0, 123));
  Message2::M10* v10 = message->mutable_f_66();
  v10->set_f_0(0xb);
  Message2::M10::M22* v11 = v10->mutable_f_6();
  v11->set_f_0(0x69);
  Message2::M10::M15* v12 = v10->mutable_f_4();
  v12->set_f_0(0x52);
  v12->set_f_4(0x2d0cf6be9023a24);
  message->set_f_25(0x46);
  Message2::M9* v13 = message->mutable_f_64();
  v13->set_f_2(true);
  Message2::M9::M23* v14 = v13->mutable_f_21();
  v14->set_f_0(0x51);
  v13->set_f_6(s->substr(0, 88));
  v13->set_f_3(0x1947d7);
  v13->set_f_0(s->substr(0, 18));
  v13->set_f_4(false);
  v13->set_f_8(0x133cf4);
  message->set_f_14(false);
  message->set_f_29(0x1f505d);
  message->set_f_17(0x6d);
  message->set_f_26(0x5c);
  message->set_f_2(s->substr(0, 292));
  message->set_f_3(0x16);
  Message2::M8* v15 = message->mutable_f_62();
  Message2::M8::M16* v16_0 = v15->add_f_3();
  v16_0->set_f_0(s->substr(0, 1));
  Message2::M8::M16::M37* v17_0 = v16_0->add_f_2();
  Message2::M8::M16::M37::M47* v18 = v17_0->mutable_f_14();
  v18->set_f_0(0x69f5881a682d889c);
  v17_0->set_f_0(s->substr(0, 1490));
  v17_0->set_f_3(0x44);
  v15->set_f_0(0x7e4170c9f0459dd1);
  Message2::M8::M28* v19 = v15->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  message->set_f_20(s->substr(0, 93));
  message->set_f_16(0x3e405854addc4900);
  Message2::M1* v20 = message->mutable_f_54();
  Message2::M1::M24* v21 = v20->mutable_f_9();
  v21->set_f_0(0x4b0e637fba52ec);
  Message2::M1::M29* v22_0 = v20->add_f_12();
  v22_0->set_f_0(0.828763);
  v20->set_f_0(0x59fae7e);
  Message2::M1::M20* v23 = v20->mutable_f_7();
  v23->set_f_0(0x2272);
  message->set_f_1(0xadc);
  message->set_f_8(0x74);
  message->set_f_6(0x55);
  message->set_f_27(0xca0d21);
  message->set_f_18(s->substr(0, 8));
  message->set_f_0(0x94375dbe892cc9a);
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
}  // namespace fleetbench::rpc::P9::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
