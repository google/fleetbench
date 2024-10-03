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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message2.pb.h"

namespace fleetbench::rpc::P0::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_15(s->substr(0, 13));
  message->set_f_17(s->substr(0, 18));
  message->set_f_3(0x4176d2bd31b10f8d);
  message->set_f_2(s->substr(0, 6));
  message->set_f_0(0x3e889e311524419a);
  message->set_f_16(0x52ccd9a5);
  message->add_f_25(Message2::E2_CONST_4);
  message->set_f_24(0x18);
  message->set_f_10(s->substr(0, 121));
  message->set_f_13(0xbbf623f);
  message->set_f_12(0x2a5448775dff10af);
  message->set_f_23(0x79d879adb01db0d);
  message->set_f_7(0x79af394e466a1aea);
  message->set_f_6(0x4d40b9c);
  message->set_f_21(0x244162f);
  message->set_f_9(0x5f2);
  message->set_f_27(0.409508);
  message->set_f_4(false);
  message->set_f_22(0x64);
  message->set_f_28(Message2::E3_CONST_3);
  message->set_f_19(0x2);
  message->set_f_11(0x30e809e0);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_8(0x50aa3079ec064674);
  message->set_f_28(Message2::E3_CONST_1);
  message->set_f_19(0xfc88e80);
  message->set_f_7(0x614491a596b92a8a);
  message->set_f_6(0x3e);
  message->set_f_4(false);
  message->set_f_21(0x188b7519);
  message->set_f_5(0x307d821db33944a0);
  message->set_f_20(0xff03ebfde114fbd);
  message->set_f_1(false);
  message->add_f_25(Message2::E2_CONST_1);
  message->set_f_13(0x29a3);
  message->set_f_26(s->substr(0, 8));
  message->set_f_22(0x400);
  message->set_f_16(0x736b1b4);
  message->set_f_3(0x69acbf2c4dfc3d77);
  message->set_f_11(0x409934ec);
  message->set_f_15(s->substr(0, 748));
  Message2::E1 array_0[21] = {
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_4,
      Message2::E1_CONST_1, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_5, Message2::E1_CONST_2, Message2::E1_CONST_5,
      Message2::E1_CONST_2, Message2::E1_CONST_3, Message2::E1_CONST_5,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_5, Message2::E1_CONST_1,
      Message2::E1_CONST_5, Message2::E1_CONST_3, Message2::E1_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_18(v);
  }
  message->set_f_12(0x6801f46ca4e7a338);
  message->set_f_24(0xb6f4e9a);
  message->set_f_17(s->substr(0, 242));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_24(0xe01beba);
  message->set_f_9(0x1c);
  message->set_f_21(0x2b5d3da2);
  Message2::E2 array_0[10] = {
      Message2::E2_CONST_2, Message2::E2_CONST_1, Message2::E2_CONST_3,
      Message2::E2_CONST_2, Message2::E2_CONST_3, Message2::E2_CONST_4,
      Message2::E2_CONST_3, Message2::E2_CONST_2, Message2::E2_CONST_3,
      Message2::E2_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_25(v);
  }
  message->add_f_18(Message2::E1_CONST_2);
  message->set_f_1(true);
  message->set_f_3(0x73d405b0720cfc8);
  message->set_f_13(0x7b);
  message->set_f_27(0.261175);
  message->set_f_23(0x6089564f6bc69ecd);
  message->set_f_5(0x3772fb54dac4c79c);
  message->set_f_26(s->substr(0, 17));
  message->set_f_22(0x4c);
  Message2::M1* v0 = message->mutable_f_49();
  Message2::M1::M6* v1_0 = v0->add_f_65();
  v1_0->set_f_0(s->substr(0, 12));
  v1_0->set_f_2(s->substr(0, 485));
  v1_0->set_f_1(s->substr(0, 21));
  Message2::M1::M16* v2 = v0->mutable_f_78();
  v2->set_f_1(0x5dd54876278cb1c3);
  v2->set_f_3(0x4f);
  v2->set_f_2(0.413193);
  Message2::M1::E4 array_1[21] = {
      Message2::M1::E4_CONST_3, Message2::M1::E4_CONST_5,
      Message2::M1::E4_CONST_2, Message2::M1::E4_CONST_1,
      Message2::M1::E4_CONST_2, Message2::M1::E4_CONST_5,
      Message2::M1::E4_CONST_1, Message2::M1::E4_CONST_3,
      Message2::M1::E4_CONST_3, Message2::M1::E4_CONST_1,
      Message2::M1::E4_CONST_3, Message2::M1::E4_CONST_1,
      Message2::M1::E4_CONST_3, Message2::M1::E4_CONST_2,
      Message2::M1::E4_CONST_1, Message2::M1::E4_CONST_1,
      Message2::M1::E4_CONST_5, Message2::M1::E4_CONST_4,
      Message2::M1::E4_CONST_4, Message2::M1::E4_CONST_3,
      Message2::M1::E4_CONST_1,
  };
  for (auto v : array_1) {
    v0->add_f_7(v);
  }
  v0->set_f_30(s->substr(0, 379));
  v0->set_f_4(0x218ea006);
  Message2::M1::M14* v3_0 = v0->add_f_75();
  Message2::M1::M14::M43* v4 = v3_0->mutable_f_4();
  Message2::M1::M14::M43::M64* v5 = v4->mutable_f_8();
  v5->set_f_0(0x4d7c1f859a33c93c);
  v4->set_f_2(0x46);
  v4->set_f_1(0x263ce8daeeb69980);
  v4->set_f_3(0x508c79602ae14123);
  Message2::M1::M2* v6_0 = v0->add_f_59();
  v6_0->set_f_2(0x1d2afefbef8b0e26);
  v6_0->set_f_1(0x4659369ea828c8e0);
  v6_0->set_f_0(0x635fd02);
  v0->set_f_5(0.044802);
  Message2::M1::M3* v7_0 = v0->add_f_61();
  v7_0->set_f_0(0x5c);
  Message2::M1::M3::M54* v8 = v7_0->mutable_f_8();
  Message2::M1::M3::M54::E11 array_2[21] = {
      Message2::M1::M3::M54::E11_CONST_2, Message2::M1::M3::M54::E11_CONST_3,
      Message2::M1::M3::M54::E11_CONST_2, Message2::M1::M3::M54::E11_CONST_5,
      Message2::M1::M3::M54::E11_CONST_2, Message2::M1::M3::M54::E11_CONST_3,
      Message2::M1::M3::M54::E11_CONST_3, Message2::M1::M3::M54::E11_CONST_1,
      Message2::M1::M3::M54::E11_CONST_5, Message2::M1::M3::M54::E11_CONST_5,
      Message2::M1::M3::M54::E11_CONST_4, Message2::M1::M3::M54::E11_CONST_1,
      Message2::M1::M3::M54::E11_CONST_4, Message2::M1::M3::M54::E11_CONST_1,
      Message2::M1::M3::M54::E11_CONST_5, Message2::M1::M3::M54::E11_CONST_4,
      Message2::M1::M3::M54::E11_CONST_2, Message2::M1::M3::M54::E11_CONST_2,
      Message2::M1::M3::M54::E11_CONST_2, Message2::M1::M3::M54::E11_CONST_5,
      Message2::M1::M3::M54::E11_CONST_3,
  };
  for (auto v : array_2) {
    v8->add_f_3(v);
  }
  v8->set_f_0(0xc6b0046ebf40b48);
  v8->set_f_1(0xfbd07);
  v8->set_f_2(0x8df7075);
  v8->set_f_4(Message2::M1::M3::M54::E12_CONST_2);
  Message2::M1::M3::M54::M69* v9 = v8->mutable_f_16();
  v9->set_f_4(0.649600);
  v9->add_f_2(Message2::M1::M3::M54::M69::E16_CONST_3);
  Message2::M1::M3::M54::M69::M75* v10 = v9->mutable_f_19();
  v10->set_f_18(0x3fed54ca575);
  v10->set_f_27(0x31d2b4a159c0c7a4);
  v10->set_f_29(0.677913);
  v10->set_f_23(0x35f4dd0);
  v10->set_f_1(0xccc7aef);
  v10->set_f_26(s->substr(0, 2));
  v10->set_f_4(s->substr(0, 77));
  v10->set_f_30(0x16);
  v10->set_f_20(false);
  v10->set_f_3(0x26);
  Message2::M1::M3::M54::M69::M75::E17 array_3[19] = {
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_1,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_5,
      Message2::M1::M3::M54::M69::M75::E17_CONST_5,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_3,
      Message2::M1::M3::M54::M69::M75::E17_CONST_5,
      Message2::M1::M3::M54::M69::M75::E17_CONST_3,
      Message2::M1::M3::M54::M69::M75::E17_CONST_3,
      Message2::M1::M3::M54::M69::M75::E17_CONST_3,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_3,
      Message2::M1::M3::M54::M69::M75::E17_CONST_5,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
      Message2::M1::M3::M54::M69::M75::E17_CONST_1,
      Message2::M1::M3::M54::M69::M75::E17_CONST_4,
  };
  for (auto v : array_3) {
    v10->add_f_14(v);
  }
  v10->set_f_25(0x7edbd68c1144343f);
  v10->set_f_7(s->substr(0, 5));
  v10->set_f_8(0x71);
  v10->set_f_19(0x1b);
  v10->set_f_21(0x6a7261b);
  v10->set_f_10(0x1438b43);
  v10->set_f_2(s->substr(0, 6));
  v10->set_f_15(0x52e2288);
  v10->set_f_12(s->substr(0, 105));
  v10->set_f_28(0x3212d);
  v9->set_f_3(0x3020);
  Message2::M1::E6 array_4[15] = {
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_5,
      Message2::M1::E6_CONST_4, Message2::M1::E6_CONST_2,
      Message2::M1::E6_CONST_5, Message2::M1::E6_CONST_1,
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_4, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_5, Message2::M1::E6_CONST_3,
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_2,
      Message2::M1::E6_CONST_2,
  };
  for (auto v : array_4) {
    v0->add_f_17(v);
  }
  v0->set_f_22(0xeea36b3c99a2ab0);
  Message2::M1::M12* v11 = v0->mutable_f_72();
  Message2::M1::M12::M55* v12 = v11->mutable_f_3();
  v12->set_f_0(0x6c);
  v11->set_f_0(s->substr(0, 237));
  Message2::M1::M4* v13 = v0->mutable_f_63();
  v13->set_f_0(s->substr(0, 6));
  v0->set_f_13(true);
  Message2::M1::E7 array_5[21] = {
      Message2::M1::E7_CONST_5, Message2::M1::E7_CONST_4,
      Message2::M1::E7_CONST_1, Message2::M1::E7_CONST_4,
      Message2::M1::E7_CONST_1, Message2::M1::E7_CONST_2,
      Message2::M1::E7_CONST_2, Message2::M1::E7_CONST_5,
      Message2::M1::E7_CONST_2, Message2::M1::E7_CONST_3,
      Message2::M1::E7_CONST_1, Message2::M1::E7_CONST_2,
      Message2::M1::E7_CONST_3, Message2::M1::E7_CONST_2,
      Message2::M1::E7_CONST_5, Message2::M1::E7_CONST_1,
      Message2::M1::E7_CONST_5, Message2::M1::E7_CONST_3,
      Message2::M1::E7_CONST_5, Message2::M1::E7_CONST_3,
      Message2::M1::E7_CONST_1,
  };
  for (auto v : array_5) {
    v0->add_f_18(v);
  }
  v0->set_f_31(Message2::M1::E8_CONST_5);
  v0->set_f_12(0x81e);
  v0->set_f_10(0x707c69ac);
  v0->set_f_0(s->substr(0, 8));
  Message2::M1::M10* v14 = v0->mutable_f_69();
  v14->set_f_0(s->substr(0, 1));
  v14->set_f_1(0x66);
  v0->set_f_28(0xe12b9);
  Message2::M1::M18* v15 = v0->mutable_f_81();
  Message2::M1::M18::M33* v16 = v15->mutable_f_2();
  v16->set_f_0(0x6716f7ad);
  Message2::M1::M18::M61* v17 = v15->mutable_f_3();
  v17->set_f_0(Message2::M1::M18::M61::E14_CONST_3);
  v15->add_f_0(Message2::M1::M18::E9_CONST_5);
  v0->set_f_9(0x2f);
  v0->set_f_15(0x19996bd164e0aa4c);
  Message2::M1::M11* v18_0 = v0->add_f_70();
  Message2::M1::M11::M29* v19_0 = v18_0->add_f_4();
  v19_0->set_f_0(0xb1939ed7a159cbe);
  Message2::M1::M11::M29::M65* v20_0 = v19_0->add_f_5();
  (void)v20_0;  // Suppresses clang-tidy.
  Message2::M1::M11::M30* v21 = v18_0->mutable_f_5();
  (void)v21;  // Suppresses clang-tidy.
  Message2::M1::M11::M48* v22_0 = v18_0->add_f_10();
  v22_0->set_f_0(0x5efd23b912d938b3);
  Message2::M1::M11::M48::M73* v23 = v22_0->mutable_f_2();
  v23->set_f_1(0x2e42badb75ed3090);
  v23->set_f_0(0x1e72);
  Message2::M1::M11::M50* v24_0 = v18_0->add_f_13();
  (void)v24_0;  // Suppresses clang-tidy.
  v0->set_f_3(0xe);
  v0->set_f_8(s->substr(0, 50));
  v0->set_f_6(false);
  Message2::M1::M20* v25 = v0->mutable_f_85();
  v25->set_f_0(s->substr(0, 5));
  Message2::M1::M7* v26 = v0->mutable_f_66();
  v26->set_f_0(0x7e2444dc);
  Message2::M1::M7::M44* v27 = v26->mutable_f_3();
  Message2::M1::M7::M44::M66* v28 = v27->mutable_f_2();
  (void)v28;  // Suppresses clang-tidy.
  v27->set_f_0(0x45);
  Message2::M1::M21* v29 = v0->mutable_f_88();
  v29->set_f_3(0x41b);
  Message2::M1::M21::M58* v30 = v29->mutable_f_16();
  v30->set_f_0(s->substr(0, 340));
  Message2::M1::M21::M47* v31_0 = v29->add_f_14();
  v31_0->set_f_0(0x2acb72986f43eb53);
  v29->set_f_1(0x5f11a0847faf89b3);
  v0->set_f_23(s->substr(0, 17));
  Message2::M1::M19* v32_0 = v0->add_f_83();
  v32_0->set_f_0(0x13fbd90e8dedab78);
  v0->set_f_24(0x56623714f88d56df);
  Message2::M1::M26* v33 = v0->mutable_f_96();
  Message2::M1::M26::M51* v34 = v33->mutable_f_6();
  v34->set_f_0(0xff585e7);
  v34->set_f_1(0x5c);
  Message2::M1::M26::M37* v35_0 = v33->add_f_4();
  (void)v35_0;  // Suppresses clang-tidy.
  Message2::M1::M26::M53* v36 = v33->mutable_f_7();
  (void)v36;  // Suppresses clang-tidy.
  v0->set_f_20(0x35063db1f231914a);
  v0->add_f_16(Message2::M1::E5_CONST_4);
  Message2::M1::M22* v37 = v0->mutable_f_90();
  (void)v37;  // Suppresses clang-tidy.
  v0->set_f_26(s->substr(0, 13));
  Message2::M1::M8* v38 = v0->mutable_f_67();
  v38->set_f_2(0x426f635e);
  Message2::M1::M8::M41* v39_0 = v38->add_f_5();
  v39_0->set_f_0(0x11d38c0989edad1);
  v38->set_f_1(0x4fdf1bb5cade3adb);
  v38->set_f_0(0x7e9dfe1d92176e2f);
  Message2::M1::M25* v40 = v0->mutable_f_94();
  (void)v40;  // Suppresses clang-tidy.
  v0->set_f_29(0x9cef1ac);
  v0->set_f_19(0x5386527f7285cc33);
  v0->set_f_21(0x3c7ae45cce0d31a9);
  v0->set_f_2(true);
  message->set_f_19(0x6b);
  message->set_f_12(0x10fb4c661542fd91);
  message->set_f_14(false);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_7(0x84890803e9d395);
  message->set_f_5(0x21e0c3e76cf989d4);
  message->set_f_20(0x6286971ab72a00d4);
  message->add_f_18(Message2::E1_CONST_2);
  Message2::M1* v0 = message->mutable_f_49();
  v0->set_f_23(s->substr(0, 221));
  Message2::M1::M20* v1 = v0->mutable_f_85();
  v1->set_f_0(s->substr(0, 112));
  v0->set_f_22(0x626a85b73572d2a9);
  Message2::M1::M26* v2 = v0->mutable_f_96();
  Message2::M1::M26::M51* v3 = v2->mutable_f_6();
  v3->set_f_1(0x8);
  Message2::M1::M26::M53* v4 = v2->mutable_f_7();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M1::M26::M37* v5_0 = v2->add_f_4();
  Message2::M1::M26::M37::M71* v6_0 = v5_0->add_f_3();
  v6_0->set_f_0(0xcee22fc);
  v0->set_f_30(s->substr(0, 17));
  Message2::M1::M17* v7 = v0->mutable_f_79();
  v7->set_f_0(0x7493e5e9);
  Message2::M1::M17::M52* v8_0 = v7->add_f_5();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M1::M13* v9 = v0->mutable_f_74();
  v9->set_f_0(s->substr(0, 116));
  Message2::M1::M13::M46* v10 = v9->mutable_f_7();
  v10->set_f_0(0x26);
  v10->set_f_4(0x44);
  v10->set_f_5(0x30e3fdfb);
  v10->set_f_3(0xdedac7a);
  v10->set_f_1(0xf);
  v10->set_f_2(0x61);
  Message2::M1::M13::M57* v11 = v9->mutable_f_8();
  v11->set_f_0(0x859536d);
  v9->set_f_1(false);
  Message2::M1::M8* v12 = v0->mutable_f_67();
  Message2::M1::M8::M41* v13_0 = v12->add_f_5();
  (void)v13_0;  // Suppresses clang-tidy.
  v12->set_f_0(0x35e32b77fd892afd);
  v12->set_f_1(0x6ba75a39d68779b);
  v0->set_f_20(0x6a80e13f3391252f);
  v0->set_f_21(0x68e81045a7f929d1);
  v0->set_f_11(0x52758e7);
  Message2::M1::M7* v14 = v0->mutable_f_66();
  v14->set_f_0(0x43d3a695);
  v0->set_f_8(s->substr(0, 127));
  Message2::M1::M2* v15_0 = v0->add_f_59();
  v15_0->set_f_2(0x6ed17f0bdbb4c3e);
  v15_0->set_f_3(0x62);
  v15_0->set_f_0(0x432eae82);
  v15_0->set_f_1(0x246b8eb4a91cbbe4);
  v0->set_f_14(0x4f);
  v0->set_f_29(0xfb1d5dc);
  v0->set_f_9(0x1d);
  Message2::M1::M22* v16 = v0->mutable_f_90();
  Message2::M1::M22::M40* v17 = v16->mutable_f_4();
  Message2::M1::M22::M40::M72* v18_0 = v17->add_f_4();
  v18_0->set_f_0(0x5ff1529af593e70e);
  v17->set_f_0(0x4345646cf4b280bd);
  Message2::M1::E6 array_0[21] = {
      Message2::M1::E6_CONST_4, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_4, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_1, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_1,
      Message2::M1::E6_CONST_1, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_4,
      Message2::M1::E6_CONST_5, Message2::M1::E6_CONST_1,
      Message2::M1::E6_CONST_5, Message2::M1::E6_CONST_2,
      Message2::M1::E6_CONST_4, Message2::M1::E6_CONST_5,
      Message2::M1::E6_CONST_2, Message2::M1::E6_CONST_3,
      Message2::M1::E6_CONST_3,
  };
  for (auto v : array_0) {
    v0->add_f_17(v);
  }
  v0->set_f_4(0x7a7e4551);
  Message2::M1::M21* v19 = v0->mutable_f_88();
  v19->set_f_6(0x3a9573e7d6a10dde);
  v19->set_f_4(0x76cac638c5abff2b);
  v19->set_f_2(0xa1a37fa);
  v19->set_f_5(0x1b8100ee38db6775);
  v19->set_f_0(0x1487e21d);
  v19->set_f_1(0x5c6672e6b612a98e);
  Message2::M1::M21::M58* v20 = v19->mutable_f_16();
  (void)v20;  // Suppresses clang-tidy.
  Message2::M1::M21::M47* v21_0 = v19->add_f_14();
  v21_0->set_f_0(0x20d38581c76816b0);
  Message2::M1::M24* v22 = v0->mutable_f_93();
  v22->set_f_0(s->substr(0, 21));
  Message2::M1::M6* v23_0 = v0->add_f_65();
  v23_0->set_f_1(s->substr(0, 77));
  v23_0->set_f_2(s->substr(0, 25));
  v23_0->set_f_0(s->substr(0, 6));
  Message2::M1::M19* v24_0 = v0->add_f_83();
  (void)v24_0;  // Suppresses clang-tidy.
  Message2::M1::E5 array_1[22] = {
      Message2::M1::E5_CONST_5, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_2,
      Message2::M1::E5_CONST_5, Message2::M1::E5_CONST_4,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_5, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_2,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_2,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_2,
  };
  for (auto v : array_1) {
    v0->add_f_16(v);
  }
  Message2::M1::M14* v25_0 = v0->add_f_75();
  Message2::M1::M14::M49* v26 = v25_0->mutable_f_5();
  v26->set_f_0(0x1abcab);
  Message2::M1::M14::M49::M63* v27_0 = v26->add_f_2();
  (void)v27_0;  // Suppresses clang-tidy.
  v25_0->set_f_0(0x407bec5b3b8b025b);
  v0->set_f_13(true);
  Message2::M1::M5* v28 = v0->mutable_f_64();
  Message2::M1::M5::M38* v29 = v28->mutable_f_8();
  v29->set_f_0(0.541777);
  v28->set_f_0(s->substr(0, 22));
  v0->add_f_7(Message2::M1::E4_CONST_4);
  Message2::M1::M18* v30 = v0->mutable_f_81();
  v30->add_f_0(Message2::M1::M18::E9_CONST_3);
  Message2::M1::M18::M61* v31 = v30->mutable_f_3();
  v31->set_f_0(Message2::M1::M18::M61::E14_CONST_1);
  v0->set_f_6(true);
  v0->set_f_28(0x64);
  v0->set_f_3(0xacf32f9);
  v0->set_f_27(0x715a0b94);
  v0->set_f_26(s->substr(0, 20));
  v0->set_f_31(Message2::M1::E8_CONST_5);
  Message2::M1::M23* v32_0 = v0->add_f_91();
  Message2::M1::M23::M35* v33 = v32_0->mutable_f_6();
  v33->set_f_0(0xbf17f58);
  v32_0->set_f_0(0x62e1456e7d53578d);
  v32_0->set_f_2(0x72524e4);
  v0->set_f_5(0.283157);
  v0->set_f_15(0x2c2cabdcd3e062f2);
  v0->set_f_12(0x33);
  Message2::M1::M9* v34 = v0->mutable_f_68();
  v34->set_f_0(0x4d416dc488a50603);
  Message2::M1::M9::M28* v35 = v34->mutable_f_4();
  (void)v35;  // Suppresses clang-tidy.
  v0->set_f_10(0x350a82cf);
  message->set_f_23(0x4079cfdbdbf59037);
  message->set_f_6(0x737f73c);
  message->set_f_22(0x2d);
  message->set_f_14(false);
  message->set_f_8(0x23d2fbaf161c76a2);
  message->set_f_28(Message2::E3_CONST_1);
  message->set_f_26(s->substr(0, 16));
  message->set_f_11(0x7c0149cd);
  message->set_f_2(s->substr(0, 71));
  message->add_f_25(Message2::E2_CONST_1);
  message->set_f_21(0x78304cf5);
  message->set_f_1(false);
  message->set_f_9(0x1266);
  message->set_f_15(s->substr(0, 107));
  message->set_f_12(0x5d511dab9e0c3411);
  message->set_f_19(0x1d);
  message->set_f_13(0x2eac);
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
}  // namespace fleetbench::rpc::P0::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_
