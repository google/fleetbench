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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message0.pb.h"

namespace fleetbench::rpc::P3::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_8(0x14e5eb);
  message->set_f_18(0x31638163ede6c353);
  message->add_f_25(Message0::E5_CONST_2);
  message->set_f_21(0x4f0992242);
  message->set_f_3(s->substr(0, 1600));
  message->set_f_17(false);
  Message0::E3 array_1[22] = {
      Message0::E3_CONST_4, Message0::E3_CONST_1, Message0::E3_CONST_4,
      Message0::E3_CONST_1, Message0::E3_CONST_1, Message0::E3_CONST_2,
      Message0::E3_CONST_1, Message0::E3_CONST_3, Message0::E3_CONST_2,
      Message0::E3_CONST_1, Message0::E3_CONST_2, Message0::E3_CONST_3,
      Message0::E3_CONST_5, Message0::E3_CONST_1, Message0::E3_CONST_5,
      Message0::E3_CONST_5, Message0::E3_CONST_5, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_5, Message0::E3_CONST_4,
      Message0::E3_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_16(v);
  }
  message->add_f_7(Message0::E1_CONST_4);
  Message0::M5* v0 = message->mutable_f_63();
  v0->set_f_0(0x65f7e83ae83e24dd);
  Message0::M9* v1_0 = message->add_f_72();
  v1_0->set_f_0(0x1c04);
  Message0::M3* v2 = message->mutable_f_59();
  v2->set_f_2(true);
  v2->set_f_0(0x56e0acbee1b2b2f);
  Message0::M4* v3 = message->mutable_f_61();
  v3->set_f_2(0x1ec088a9d4dcd134);
  v3->set_f_3(0xa);
  v3->set_f_0(0xc7ac9f7);
  v3->set_f_5(0x50);
  v3->set_f_1(s->substr(0, 912));
  message->set_f_27(0x5a);
  message->set_f_10(0x44);
  message->set_f_28(0x535e29e20ee13fd5);
  message->set_f_4(0xa52aa);
  message->set_f_5(0x50bc4f3687acb220);
  message->set_f_13(0x1622f12306b575b);
  message->set_f_14(0x1b5db9);
  message->set_f_23(0x8);
  Message0::M6* v4 = message->mutable_f_65();
  v4->set_f_2(true);
  v4->set_f_0(0x617477c8);
  v4->set_f_3(0x7d6b679278ae3543);
  Message0::M6::M21* v5 = v4->mutable_f_8();
  Message0::M6::M21::M40* v6 = v5->mutable_f_2();
  v6->set_f_0(0x5f);
  Message0::M10* v7 = message->mutable_f_76();
  Message0::M10::M16* v8 = v7->mutable_f_7();
  Message0::M10::M16::M34* v9 = v8->mutable_f_5();
  v9->set_f_0(s->substr(0, 16));
  v9->set_f_1(0x69);
  v9->set_f_5(0x73);
  v9->set_f_3(false);
  v9->set_f_4(Message0::M10::M16::M34::E15_CONST_1);
  v9->set_f_2(s->substr(0, 29));
  Message0::M10::M16::M32* v10_0 = v8->add_f_4();
  Message0::M10::M16::M32::M63* v11 = v10_0->mutable_f_4();
  v11->set_f_2(0x72ef259);
  v11->set_f_0(0x204178e1);
  v11->set_f_1(0x2bba5644673060b5);
  v11->set_f_3(0xe1214d1);
  v11->set_f_4(0x3dfe);
  Message0::M10::M16::M48* v12 = v8->mutable_f_7();
  (void)v12;  // Suppresses clang-tidy.
  v8->set_f_1(s->substr(0, 61));
  v7->set_f_2(0x7a00eecdaa6876ee);
  v7->set_f_3(0x7baaa332f0582454);
  Message0::M11* v13 = message->mutable_f_77();
  v13->set_f_3(0x3f9642f94a0ed685);
  Message0::M11::M17* v14 = v13->mutable_f_13();
  v14->set_f_4(0x30);
  v14->set_f_3(0x2302a8275dcbe4f5);
  v14->set_f_2(s->substr(0, 28));
  Message0::M11::M17::M33* v15 = v14->mutable_f_9();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_0(0x7a);
  v14->set_f_1(s->substr(0, 73));
  Message0::M11::M15* v16 = v13->mutable_f_12();
  v16->set_f_0(0x5f12797d2d695d60);
  Message0::M11::M15::M51* v17 = v16->mutable_f_18();
  v17->set_f_25(0x76);
  v17->set_f_9(0x4354330);
  v17->set_f_30(0x68bfe79620e486a3);
  v17->set_f_5(0x300dbf9699e92568);
  v17->set_f_8(0x197e4ac);
  v17->set_f_7(0x7);
  v17->set_f_18(Message0::M11::M15::M51::E19_CONST_1);
  v17->set_f_2(0x6b6ba0834d48ea53);
  v17->set_f_22(s->substr(0, 28));
  v17->set_f_10(s->substr(0, 8));
  v17->set_f_24(0x652ca26b);
  v17->set_f_17(true);
  v17->set_f_0(0x54a7d87e694004e9);
  v17->set_f_19(0x41d5b9e76395a95f);
  Message0::M11::M15::M51::M54* v18 = v17->mutable_f_53();
  v18->set_f_0(0x3ec35433c0387fa0);
  v17->set_f_29(0x72);
  v17->set_f_6(0x19);
  v17->set_f_26(0x44);
  v17->set_f_4(0x5539414c);
  v17->set_f_12(0x2dbc8);
  v17->set_f_27(0x55);
  v17->set_f_11(0x2ad327ef6637919d);
  v17->set_f_23(s->substr(0, 103));
  v16->set_f_4(s->substr(0, 3));
  Message0::M11::M15::M50* v19_0 = v16->add_f_15();
  v19_0->set_f_0(0x29339f765a563aba);
  v19_0->add_f_1(0x26);
  v19_0->set_f_5(0x1e92);
  v19_0->set_f_6(0x1cb776c2a931926);
  v19_0->set_f_4(0x16c7ade);
  v16->set_f_2(0x28);
  v16->set_f_3(0x4e);
  v13->set_f_0(0x2151e626368df359);
  v13->set_f_1(0x33e4cc415294cbf2);
  Message0::M7* v20 = message->mutable_f_68();
  v20->set_f_0(s->substr(0, 69));
  v20->set_f_2(0x12);
  v20->set_f_1(0x1b);
  Message0::M7::M22* v21 = v20->mutable_f_7();
  Message0::M7::M22::M27* v22 = v21->mutable_f_4();
  v22->set_f_0(0x15e463ac52d88258);
  v22->set_f_1(0x32529a48);
  Message0::M7::M22::M27::M66* v23 = v22->mutable_f_7();
  Message0::M7::M22::M27::M66::E22 array_2[14] = {
      Message0::M7::M22::M27::M66::E22_CONST_2,
      Message0::M7::M22::M27::M66::E22_CONST_2,
      Message0::M7::M22::M27::M66::E22_CONST_4,
      Message0::M7::M22::M27::M66::E22_CONST_3,
      Message0::M7::M22::M27::M66::E22_CONST_3,
      Message0::M7::M22::M27::M66::E22_CONST_1,
      Message0::M7::M22::M27::M66::E22_CONST_1,
      Message0::M7::M22::M27::M66::E22_CONST_1,
      Message0::M7::M22::M27::M66::E22_CONST_4,
      Message0::M7::M22::M27::M66::E22_CONST_5,
      Message0::M7::M22::M27::M66::E22_CONST_4,
      Message0::M7::M22::M27::M66::E22_CONST_1,
      Message0::M7::M22::M27::M66::E22_CONST_2,
      Message0::M7::M22::M27::M66::E22_CONST_3,
  };
  for (auto v : array_2) {
    v23->add_f_0(v);
  }
  Message0::M7::M22::M26* v24 = v21->mutable_f_3();
  Message0::M7::M22::M26::M65* v25_0 = v24->add_f_3();
  v25_0->set_f_0(0x3e39a4dc9cea6017);
  Message0::M7::M22::M26::M53* v26_0 = v24->add_f_2();
  v26_0->set_f_1(false);
  v26_0->set_f_0(0x5047f5a5);
  v26_0->set_f_2(0x5353814105d4087);
  v24->set_f_0(0x53fe390616ed6684);
  Message0::M7::M22::M26::M68* v27 = v24->mutable_f_4();
  v27->set_f_4(s->substr(0, 39));
  Message0::M7::M22::M26::M68::M72* v28 = v27->mutable_f_12();
  v28->set_f_0(0x25df5d930ab47bef);
  v27->add_f_6(Message0::M7::M22::M26::M68::E24_CONST_2);
  v27->set_f_1(0x43);
  v21->set_f_0(s->substr(0, 14));
  Message0::M7::M20* v29_0 = v20->add_f_5();
  v29_0->set_f_0(s->substr(0, 359));
  message->set_f_0(s->substr(0, 21));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(0x72);
  message->set_f_18(0x49de9e08924953d3);
  Message0::M5* v0 = message->mutable_f_63();
  v0->set_f_0(0x133edf695364cbf1);
  message->set_f_8(0x64eaf8d);
  Message0::M8* v1 = message->mutable_f_70();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_2(0x5b9edee650265c28);
  message->set_f_5(0x3e78edbea1a12663);
  message->set_f_9(0x5ddd332c510978);
  message->set_f_6(0x40);
  message->set_f_22(false);
  Message0::M9* v2_0 = message->add_f_72();
  v2_0->set_f_0(0x94876);
  Message0::M9::M23* v3 = v2_0->mutable_f_4();
  v3->set_f_2(0x1e);
  v3->set_f_1(0x1134a);
  v3->set_f_3(0x1b3e);
  Message0::M9::M23::M38* v4_0 = v3->add_f_16();
  v4_0->set_f_1(0x1c);
  Message0::M9::M23::M38::M55* v5 = v4_0->mutable_f_7();
  v5->set_f_0(0x35758da72379f836);
  v4_0->set_f_2(0x1c);
  v4_0->set_f_3(true);
  v4_0->set_f_0(true);
  message->set_f_0(s->substr(0, 4));
  message->set_f_4(0x130afc8);
  Message0::E2 array_0[9] = {
      Message0::E2_CONST_1, Message0::E2_CONST_5, Message0::E2_CONST_2,
      Message0::E2_CONST_3, Message0::E2_CONST_5, Message0::E2_CONST_5,
      Message0::E2_CONST_5, Message0::E2_CONST_1, Message0::E2_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_11(v);
  }
  message->set_f_3(s->substr(0, 7));
  message->set_f_26(0x5d622e2b120d8ee3);
  message->set_f_13(0x4e3a7107c58224c5);
  Message0::M3* v6 = message->mutable_f_59();
  v6->set_f_0(0x7dde8a02ba829530);
  v6->set_f_1(0xedd56d2);
  Message0::M6* v7 = message->mutable_f_65();
  v7->set_f_1(Message0::M6::E7_CONST_1);
  v7->set_f_2(false);
  v7->set_f_0(0x3dad5617);
  v7->set_f_3(0x62ebcb6d67c9cf6f);
  Message0::M6::M13* v8 = v7->mutable_f_7();
  v8->set_f_0(s->substr(0, 365));
  Message0::M6::M13::M47* v9 = v8->mutable_f_4();
  v9->set_f_1(0x461587b1b15a594b);
  v9->set_f_2(0x38);
  v9->set_f_0(0x27);
  Message0::M6::M13::M37* v10 = v8->mutable_f_3();
  v10->set_f_1(0x46381f8b66b98ae2);
  v10->set_f_2(0x54f5551068f55180);
  Message0::E3 array_1[21] = {
      Message0::E3_CONST_2, Message0::E3_CONST_5, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_1, Message0::E3_CONST_5,
      Message0::E3_CONST_4, Message0::E3_CONST_4, Message0::E3_CONST_1,
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_3,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_3,
      Message0::E3_CONST_4, Message0::E3_CONST_1, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_2, Message0::E3_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_16(v);
  }
  message->add_f_24(Message0::E4_CONST_5);
  message->set_f_14(0x93668c0);
  message->set_f_12(0x5348925);
  message->set_f_15(0x3cf7d489);
  message->set_f_27(0xc21f4f6);
  Message0::M10* v11 = message->mutable_f_76();
  (void)v11;  // Suppresses clang-tidy.
  Message0::M7* v12 = message->mutable_f_68();
  Message0::M7::M20* v13_0 = v12->add_f_5();
  v13_0->set_f_0(s->substr(0, 274));
  v12->set_f_0(s->substr(0, 445));
  Message0::M7::M22* v14 = v12->mutable_f_7();
  Message0::M7::M22::M26* v15 = v14->mutable_f_3();
  Message0::M7::M22::M26::M68* v16 = v15->mutable_f_4();
  v16->set_f_0(0.830755);
  v16->set_f_1(0x366);
  v16->set_f_4(s->substr(0, 80));
  v16->add_f_6(Message0::M7::M22::M26::M68::E24_CONST_3);
  v15->set_f_0(0x7a862fe7b9abb738);
  Message0::M7::M22::M26::M65* v17_0 = v15->add_f_3();
  v17_0->set_f_0(0x40df8739347e5fbb);
  Message0::M7::M22::M26::M53* v18_0 = v15->add_f_2();
  v18_0->set_f_0(0x77e1a57e);
  v18_0->set_f_1(true);
  v14->set_f_0(s->substr(0, 1));
  Message0::M7::M22::M27* v19 = v14->mutable_f_4();
  v19->set_f_2(0x7ff0219);
  v19->set_f_1(0x528ce0a7);
  Message0::M4* v20 = message->mutable_f_61();
  v20->set_f_0(0x2c);
  Message0::M4::M24* v21 = v20->mutable_f_8();
  Message0::M4::M24::M30* v22_0 = v21->add_f_2();
  v22_0->set_f_3(0x198219d);
  v22_0->set_f_9(0x9cb4be);
  v22_0->add_f_7(Message0::M4::M24::M30::E13_CONST_4);
  v22_0->set_f_1(0x5d179d6);
  v22_0->set_f_0(0x4c);
  v22_0->set_f_13(0x60c990d5ce1b5599);
  v22_0->add_f_5(Message0::M4::M24::M30::E12_CONST_2);
  v22_0->set_f_12(s->substr(0, 6));
  v22_0->set_f_11(0x61a7fb5d3114d9de);
  Message0::M4::M24::M30::M57* v23_0 = v22_0->add_f_22();
  (void)v23_0;  // Suppresses clang-tidy.
  Message0::M4::M24::M35* v24 = v21->mutable_f_6();
  v24->set_f_0(0x7f1e10d446aa7d0f);
  v21->set_f_0(0x8d25114);
  v20->set_f_1(s->substr(0, 71));
  v20->set_f_3(0x16);
  message->set_f_23(0xa);
  message->set_f_10(0x53);
  message->add_f_25(Message0::E5_CONST_3);
  Message0::M2* v25 = message->mutable_f_58();
  v25->set_f_0(0xe4fae7b);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_12(0x13);
  message->set_f_19(s->substr(0, 4));
  message->set_f_27(0x1fc68a);
  Message0::M8* v0 = message->mutable_f_70();
  v0->set_f_0(s->substr(0, 2));
  Message0::M2* v1 = message->mutable_f_58();
  v1->set_f_0(0x2a3c);
  Message0::M2::M14* v2 = v1->mutable_f_4();
  v2->set_f_2(s->substr(0, 18));
  v2->set_f_4(0x2f2f7dee9f04d424);
  v2->set_f_5(0xe465a60);
  v2->set_f_0(0x4e);
  Message0::M2::M14::E8 array_0[13] = {
      Message0::M2::M14::E8_CONST_4, Message0::M2::M14::E8_CONST_2,
      Message0::M2::M14::E8_CONST_2, Message0::M2::M14::E8_CONST_4,
      Message0::M2::M14::E8_CONST_5, Message0::M2::M14::E8_CONST_3,
      Message0::M2::M14::E8_CONST_5, Message0::M2::M14::E8_CONST_1,
      Message0::M2::M14::E8_CONST_2, Message0::M2::M14::E8_CONST_4,
      Message0::M2::M14::E8_CONST_4, Message0::M2::M14::E8_CONST_4,
      Message0::M2::M14::E8_CONST_2,
  };
  for (auto v : array_0) {
    v2->add_f_3(v);
  }
  Message0::M2::M19* v3 = v1->mutable_f_6();
  Message0::M2::M19::M39* v4_0 = v3->add_f_3();
  v4_0->set_f_0(0xbad62e0a5c569d0);
  v3->set_f_0(s->substr(0, 11));
  Message0::M2::M19::M43* v5_0 = v3->add_f_5();
  Message0::M2::M19::M43::M59* v6_0 = v5_0->add_f_7();
  v6_0->set_f_0(0x50);
  Message0::M2::M19::M43::M56* v7_0 = v5_0->add_f_5();
  v7_0->set_f_0(s->substr(0, 24));
  v5_0->set_f_0(0x478d97a669ef85d9);
  Message0::M2::M19::M46* v8_0 = v3->add_f_7();
  v8_0->set_f_3(0x4799176625158846);
  v8_0->set_f_1(0x7f6dd2bdbc79c9a5);
  v8_0->set_f_2(0x55);
  Message0::M2::M19::M44* v9 = v3->mutable_f_6();
  Message0::M2::M19::M44::M67* v10_0 = v9->add_f_9();
  Message0::M2::M19::M44::M67::E23 array_1[22] = {
      Message0::M2::M19::M44::M67::E23_CONST_4,
      Message0::M2::M19::M44::M67::E23_CONST_1,
      Message0::M2::M19::M44::M67::E23_CONST_3,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_1,
      Message0::M2::M19::M44::M67::E23_CONST_3,
      Message0::M2::M19::M44::M67::E23_CONST_3,
      Message0::M2::M19::M44::M67::E23_CONST_5,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_4,
      Message0::M2::M19::M44::M67::E23_CONST_3,
      Message0::M2::M19::M44::M67::E23_CONST_4,
      Message0::M2::M19::M44::M67::E23_CONST_4,
      Message0::M2::M19::M44::M67::E23_CONST_5,
      Message0::M2::M19::M44::M67::E23_CONST_1,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_2,
      Message0::M2::M19::M44::M67::E23_CONST_3,
      Message0::M2::M19::M44::M67::E23_CONST_3,
  };
  for (auto v : array_1) {
    v10_0->add_f_0(v);
  }
  Message0::M2::M19::M44::M52* v11 = v9->mutable_f_6();
  (void)v11;  // Suppresses clang-tidy.
  v9->set_f_2(0xc04aa0a);
  message->add_f_24(Message0::E4_CONST_2);
  Message0::M5* v12 = message->mutable_f_63();
  v12->set_f_0(0x17eb2886a5e48eb5);
  message->set_f_20(0x1787b2);
  message->set_f_18(0x61a42cf42050cdec);
  Message0::M1* v13_0 = message->add_f_53();
  Message0::M1::M12* v14_0 = v13_0->add_f_11();
  v14_0->set_f_2(0x1f);
  v14_0->set_f_3(s->substr(0, 87));
  v13_0->set_f_0(s->substr(0, 60));
  message->set_f_14(0x11ca24);
  message->set_f_4(0xf3d);
  message->set_f_5(0x1c418b5de72d4ab7);
  message->set_f_13(0x5f23bf3047f36b41);
  message->set_f_10(0xb7bea93);
  message->set_f_3(s->substr(0, 20));
  message->set_f_21(0x5637705f2);
  Message0::M4* v15 = message->mutable_f_61();
  Message0::M4::M24* v16 = v15->mutable_f_8();
  Message0::M4::M24::M30* v17_0 = v16->add_f_2();
  Message0::M4::M24::M30::E12 array_2[18] = {
      Message0::M4::M24::M30::E12_CONST_5, Message0::M4::M24::M30::E12_CONST_2,
      Message0::M4::M24::M30::E12_CONST_5, Message0::M4::M24::M30::E12_CONST_1,
      Message0::M4::M24::M30::E12_CONST_4, Message0::M4::M24::M30::E12_CONST_3,
      Message0::M4::M24::M30::E12_CONST_4, Message0::M4::M24::M30::E12_CONST_5,
      Message0::M4::M24::M30::E12_CONST_4, Message0::M4::M24::M30::E12_CONST_1,
      Message0::M4::M24::M30::E12_CONST_5, Message0::M4::M24::M30::E12_CONST_5,
      Message0::M4::M24::M30::E12_CONST_1, Message0::M4::M24::M30::E12_CONST_3,
      Message0::M4::M24::M30::E12_CONST_1, Message0::M4::M24::M30::E12_CONST_5,
      Message0::M4::M24::M30::E12_CONST_5, Message0::M4::M24::M30::E12_CONST_4,
  };
  for (auto v : array_2) {
    v17_0->add_f_5(v);
  }
  Message0::M4::M24::M30::M57* v18_0 = v17_0->add_f_22();
  v18_0->set_f_0(s->substr(0, 95));
  v17_0->set_f_3(0x57);
  v17_0->set_f_1(0x5);
  v17_0->set_f_14(0x6a0f16b0a67be1e6);
  v17_0->set_f_11(0x4a51ed835305cb15);
  v17_0->set_f_9(0x8ab1ed2);
  v17_0->add_f_2(Message0::M4::M24::M30::E11_CONST_3);
  v17_0->set_f_8(0x24c0d11c0ef703bc);
  v17_0->set_f_6(0x1e);
  Message0::M4::M24::M35* v19 = v16->mutable_f_6();
  v19->set_f_1(s->substr(0, 19));
  v19->set_f_2(s->substr(0, 342));
  Message0::M4::M24::M36* v20 = v16->mutable_f_8();
  v20->set_f_1(0x1a5942446a290cf8);
  v20->set_f_2(Message0::M4::M24::M36::E16_CONST_5);
  v15->set_f_3(0x8);
  v15->set_f_0(0x62);
  v15->set_f_4(s->substr(0, 18));
  message->set_f_26(0x6582fb3bab7147bb);
  message->set_f_15(0x117d50b);
  message->set_f_29(s->substr(0, 17));
  Message0::E5 array_3[22] = {
      Message0::E5_CONST_5, Message0::E5_CONST_5, Message0::E5_CONST_5,
      Message0::E5_CONST_5, Message0::E5_CONST_2, Message0::E5_CONST_1,
      Message0::E5_CONST_5, Message0::E5_CONST_1, Message0::E5_CONST_5,
      Message0::E5_CONST_1, Message0::E5_CONST_5, Message0::E5_CONST_1,
      Message0::E5_CONST_3, Message0::E5_CONST_1, Message0::E5_CONST_5,
      Message0::E5_CONST_4, Message0::E5_CONST_4, Message0::E5_CONST_4,
      Message0::E5_CONST_4, Message0::E5_CONST_5, Message0::E5_CONST_3,
      Message0::E5_CONST_1,
  };
  for (auto v : array_3) {
    message->add_f_25(v);
  }
  Message0::M7* v21 = message->mutable_f_68();
  v21->set_f_1(0x1a4dc0b);
  v21->set_f_2(0x18);
  Message0::M7::M22* v22 = v21->mutable_f_7();
  v22->set_f_0(s->substr(0, 55));
  Message0::M7::M22::M42* v23 = v22->mutable_f_7();
  v23->set_f_0(0x34);
  Message0::M7::M22::M26* v24 = v22->mutable_f_3();
  Message0::M7::M22::M26::M65* v25_0 = v24->add_f_3();
  v25_0->set_f_0(0x27154fe0ca9dcf87);
  v24->set_f_0(0x3bce01a996f2d032);
  Message0::M7::M22::M26::M68* v26 = v24->mutable_f_4();
  v26->set_f_3(true);
  v26->set_f_5(0x40752880);
  Message0::M7::M22::M26::M68::M72* v27 = v26->mutable_f_12();
  v27->set_f_0(0x39eb9b1590cdd503);
  v26->set_f_0(0.055330);
  v26->set_f_4(s->substr(0, 56));
  v26->set_f_2(false);
  Message0::M7::M20* v28_0 = v21->add_f_5();
  v28_0->set_f_0(s->substr(0, 6));
  message->set_f_2(0x6f97dae83cf24cd6);
  Message0::M9* v29_0 = message->add_f_72();
  Message0::M9::M18* v30_0 = v29_0->add_f_3();
  Message0::M9::M18::M28* v31 = v30_0->mutable_f_3();
  v31->set_f_0(0x436795e7f8bd21c2);
  v29_0->set_f_0(0x34);
  Message0::M9::M25* v32 = v29_0->mutable_f_6();
  v32->set_f_18(s->substr(0, 2685));
  v32->set_f_13(s->substr(0, 1));
  v32->set_f_3(0x86e828a);
  v32->set_f_28(0x7e);
  v32->set_f_22(0x71fa8120b12dc815);
  v32->set_f_16(0x64);
  v32->set_f_19(0x5b);
  v32->set_f_8(0x4cc51e2);
  v32->set_f_2(s->substr(0, 7));
  v32->set_f_1(0x76);
  v32->set_f_24(0x41);
  v32->set_f_11(0x68f456b);
  v32->set_f_15(0xd6b193a);
  v32->set_f_10(0x2a1cddea);
  v32->set_f_21(0x239c248f15bfe402);
  v32->set_f_23(0x2069ef4b);
  v32->set_f_26(0x3776571ec171728b);
  v32->set_f_17(Message0::M9::M25::E10_CONST_4);
  v32->set_f_0(0x4f);
  v32->set_f_6(0x63);
  v32->set_f_5(0x1e8008950a0ae065);
  v32->set_f_9(0x22a5edc461f2eb74);
  Message0::M6* v33 = message->mutable_f_65();
  Message0::M6::M13* v34 = v33->mutable_f_7();
  v34->set_f_0(s->substr(0, 6));
  Message0::M6::M13::M37* v35 = v34->mutable_f_3();
  v35->set_f_2(0x3c02418c6acfb5cd);
  v35->set_f_0(s->substr(0, 21));
  Message0::M6::M13::M47* v36 = v34->mutable_f_4();
  Message0::M6::M13::M47::M61* v37 = v36->mutable_f_5();
  (void)v37;  // Suppresses clang-tidy.
  v36->set_f_2(0x68);
  v36->set_f_0(0x33);
  Message0::M6::M21* v38 = v33->mutable_f_8();
  Message0::M6::M21::M40* v39 = v38->mutable_f_2();
  v39->set_f_0(0x2fb09f4);
  v33->set_f_0(0x6f6c35b5);
  message->set_f_1(0xe607b);
  Message0::E2 array_4[19] = {
      Message0::E2_CONST_3, Message0::E2_CONST_5, Message0::E2_CONST_1,
      Message0::E2_CONST_4, Message0::E2_CONST_4, Message0::E2_CONST_4,
      Message0::E2_CONST_5, Message0::E2_CONST_2, Message0::E2_CONST_5,
      Message0::E2_CONST_3, Message0::E2_CONST_4, Message0::E2_CONST_2,
      Message0::E2_CONST_4, Message0::E2_CONST_3, Message0::E2_CONST_4,
      Message0::E2_CONST_2, Message0::E2_CONST_1, Message0::E2_CONST_5,
      Message0::E2_CONST_2,
  };
  for (auto v : array_4) {
    message->add_f_11(v);
  }
  message->set_f_23(0xfc2e2);
  message->set_f_17(false);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_12(0x1e2ecd);
  message->set_f_17(false);
  Message0::M3* v0 = message->mutable_f_59();
  v0->set_f_1(0x346ac187);
  v0->set_f_2(false);
  v0->set_f_0(0x74d0d725a555120);
  message->set_f_2(0x5d469385227300ab);
  message->set_f_5(0x70c15be63147a7da);
  message->set_f_15(0x5710a2da);
  message->set_f_23(0xa);
  Message0::M9* v1_0 = message->add_f_72();
  Message0::M9::M25* v2 = v1_0->mutable_f_6();
  v2->set_f_30(0x7a9b443e);
  v2->set_f_14(s->substr(0, 26));
  v2->set_f_11(0x72);
  v2->set_f_22(0x59e294f4bf24e89e);
  v2->set_f_17(Message0::M9::M25::E10_CONST_1);
  v2->set_f_5(0x4bca472941814c88);
  v2->set_f_18(s->substr(0, 26));
  v2->set_f_1(0x5);
  v2->set_f_29(s->substr(0, 5));
  v2->set_f_15(0x6c);
  v2->set_f_7(0x93fcc15);
  v2->set_f_26(0x736b1b4776e58f4);
  v2->set_f_4(true);
  v2->set_f_8(0x409934ec);
  v2->set_f_28(0x897542b);
  v2->set_f_9(0x79998da0974fb803);
  v2->set_f_25(s->substr(0, 22));
  v2->set_f_13(s->substr(0, 32));
  v2->set_f_16(0x3a294);
  v2->set_f_19(0x1d7363);
  v2->set_f_3(0x39d9);
  v2->set_f_2(s->substr(0, 24));
  v1_0->set_f_0(0x1d16);
  Message0::M9::M18* v3_0 = v1_0->add_f_3();
  Message0::M9::M18::M28* v4 = v3_0->mutable_f_3();
  (void)v4;  // Suppresses clang-tidy.
  Message0::M9::M18::M45* v5 = v3_0->mutable_f_4();
  v5->set_f_1(0x6de8caec485cc711);
  message->set_f_6(0x6f);
  Message0::E4 array_0[22] = {
      Message0::E4_CONST_3, Message0::E4_CONST_2, Message0::E4_CONST_5,
      Message0::E4_CONST_4, Message0::E4_CONST_3, Message0::E4_CONST_5,
      Message0::E4_CONST_2, Message0::E4_CONST_4, Message0::E4_CONST_3,
      Message0::E4_CONST_3, Message0::E4_CONST_5, Message0::E4_CONST_2,
      Message0::E4_CONST_1, Message0::E4_CONST_3, Message0::E4_CONST_2,
      Message0::E4_CONST_3, Message0::E4_CONST_4, Message0::E4_CONST_3,
      Message0::E4_CONST_2, Message0::E4_CONST_3, Message0::E4_CONST_2,
      Message0::E4_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_24(v);
  }
  message->set_f_19(s->substr(0, 70));
  message->set_f_9(0x73d405b0720cfc8);
  message->add_f_11(Message0::E2_CONST_2);
  message->set_f_1(0x7733010);
  message->set_f_20(0x1b3d);
  message->set_f_13(0x34f674aeb15f6f5d);
  message->set_f_18(0x39359bb97dd536a);
  Message0::M5* v6 = message->mutable_f_63();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_14(0x1);
  message->set_f_29(s->substr(0, 14));
  Message0::E1 array_1[21] = {
      Message0::E1_CONST_3, Message0::E1_CONST_3, Message0::E1_CONST_2,
      Message0::E1_CONST_4, Message0::E1_CONST_4, Message0::E1_CONST_4,
      Message0::E1_CONST_2, Message0::E1_CONST_5, Message0::E1_CONST_5,
      Message0::E1_CONST_3, Message0::E1_CONST_4, Message0::E1_CONST_4,
      Message0::E1_CONST_1, Message0::E1_CONST_2, Message0::E1_CONST_5,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_2,
      Message0::E1_CONST_2, Message0::E1_CONST_1, Message0::E1_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_7(v);
  }
  Message0::M7* v7 = message->mutable_f_68();
  v7->set_f_2(0x7e);
  Message0::M7::M20* v8_0 = v7->add_f_5();
  (void)v8_0;  // Suppresses clang-tidy.
  v7->set_f_0(s->substr(0, 6));
  Message0::M8* v9 = message->mutable_f_70();
  (void)v9;  // Suppresses clang-tidy.
  Message0::M2* v10 = message->mutable_f_58();
  Message0::M2::M19* v11 = v10->mutable_f_6();
  v11->set_f_0(s->substr(0, 16));
  Message0::M2::M19::M43* v12_0 = v11->add_f_5();
  v12_0->set_f_0(0x658e20f33afceaa5);
  Message0::M2::M19::M43::M59* v13_0 = v12_0->add_f_7();
  v13_0->set_f_0(0x35);
  Message0::M2::M19::M43::M59::M73* v14 = v13_0->mutable_f_3();
  v14->set_f_0(0x59ece1a29887ef1a);
  Message0::M2::M19::M43::M56* v15_0 = v12_0->add_f_5();
  v15_0->set_f_0(s->substr(0, 28));
  Message0::M2::M19::M49* v16 = v11->mutable_f_9();
  v16->set_f_0(s->substr(0, 2922));
  Message0::M2::M19::M49::M58* v17_0 = v16->add_f_11();
  v17_0->set_f_1(0x62);
  v17_0->set_f_0(0x281de2f3498ff4c2);
  v16->set_f_3(0x3);
  v16->set_f_4(s->substr(0, 3));
  Message0::M2::M19::M49::E17 array_2[21] = {
      Message0::M2::M19::M49::E17_CONST_3, Message0::M2::M19::M49::E17_CONST_4,
      Message0::M2::M19::M49::E17_CONST_4, Message0::M2::M19::M49::E17_CONST_1,
      Message0::M2::M19::M49::E17_CONST_3, Message0::M2::M19::M49::E17_CONST_4,
      Message0::M2::M19::M49::E17_CONST_1, Message0::M2::M19::M49::E17_CONST_5,
      Message0::M2::M19::M49::E17_CONST_1, Message0::M2::M19::M49::E17_CONST_2,
      Message0::M2::M19::M49::E17_CONST_1, Message0::M2::M19::M49::E17_CONST_3,
      Message0::M2::M19::M49::E17_CONST_4, Message0::M2::M19::M49::E17_CONST_3,
      Message0::M2::M19::M49::E17_CONST_3, Message0::M2::M19::M49::E17_CONST_5,
      Message0::M2::M19::M49::E17_CONST_3, Message0::M2::M19::M49::E17_CONST_2,
      Message0::M2::M19::M49::E17_CONST_1, Message0::M2::M19::M49::E17_CONST_5,
      Message0::M2::M19::M49::E17_CONST_5,
  };
  for (auto v : array_2) {
    v16->add_f_1(v);
  }
  Message0::M2::M19::M39* v18_0 = v11->add_f_3();
  v18_0->set_f_0(0x6e11bc2de07a0c1f);
  Message0::M2::M14* v19 = v10->mutable_f_4();
  v19->add_f_3(Message0::M2::M14::E8_CONST_1);
  v19->set_f_1(0x6f);
  v19->set_f_2(s->substr(0, 10));
  v19->set_f_0(0x1352);
  v19->set_f_4(0x127cb0ceb74bfc3);
  message->set_f_0(s->substr(0, 2));
  message->set_f_26(0x68889dd680955d25);
  Message0::E5 array_3[22] = {
      Message0::E5_CONST_4, Message0::E5_CONST_4, Message0::E5_CONST_5,
      Message0::E5_CONST_3, Message0::E5_CONST_5, Message0::E5_CONST_3,
      Message0::E5_CONST_1, Message0::E5_CONST_1, Message0::E5_CONST_1,
      Message0::E5_CONST_5, Message0::E5_CONST_1, Message0::E5_CONST_3,
      Message0::E5_CONST_3, Message0::E5_CONST_1, Message0::E5_CONST_1,
      Message0::E5_CONST_4, Message0::E5_CONST_2, Message0::E5_CONST_4,
      Message0::E5_CONST_2, Message0::E5_CONST_2, Message0::E5_CONST_4,
      Message0::E5_CONST_5,
  };
  for (auto v : array_3) {
    message->add_f_25(v);
  }
  message->set_f_27(0x1a777b);
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
}  // namespace fleetbench::rpc::P3::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
