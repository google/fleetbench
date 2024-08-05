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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message2.pb.h"

namespace fleetbench::rpc::P5::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_7(s->substr(0, 17));
  message->set_f_27(true);
  message->set_f_20(false);
  message->add_f_2(Message2::E1_CONST_5);
  message->add_f_2(Message2::E1_CONST_3);
  message->add_f_2(Message2::E1_CONST_5);
  message->add_f_2(Message2::E1_CONST_3);
  message->set_f_18(0x1011f6f3abb1fe98);
  message->set_f_21(0x302f4fb0);
  message->set_f_25(0x57a8c25f389f9e8c);
  message->set_f_19(0x6e);
  message->set_f_4(0x683b5abfd045304e);
  message->set_f_16(0x34);
  message->set_f_10(0x62e00f1eb42b4b59);
  message->set_f_15(0x17);
  message->set_f_23(s->substr(0, 20));
  Message2::M1* v0 = message->mutable_f_45();
  Message2::M1::M22* v1_0 = v0->add_f_16();
  v1_0->set_f_4(0x15c0f4);
  v1_0->set_f_3(0x36);
  v1_0->set_f_0(0xe94dad5);
  v1_0->set_f_2(0x3971a513c4a8ea8a);
  Message2::M1::M23* v2 = v0->mutable_f_17();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M1::M39* v3 = v0->mutable_f_28();
  v3->set_f_0(true);
  Message2::M1::M42* v4 = v0->mutable_f_32();
  Message2::M1::M42::M67* v5 = v4->mutable_f_2();
  v5->set_f_0(0.836634);
  Message2::M1::M35* v6_0 = v0->add_f_27();
  v6_0->set_f_1(0x36);
  Message2::M1::M35::M72* v7 = v6_0->mutable_f_8();
  v7->set_f_1(true);
  v7->set_f_3(true);
  v7->set_f_0(s->substr(0, 25));
  v6_0->add_f_2(Message2::M1::M35::E15_CONST_4);
  Message2::M1::M40* v8_0 = v0->add_f_29();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M1::M17* v9 = v0->mutable_f_10();
  v9->set_f_0(0x41);
  Message2::M1::M15* v10_0 = v0->add_f_9();
  v10_0->set_f_0(s->substr(0, 5));
  Message2::M1::M21* v11 = v0->mutable_f_15();
  v11->set_f_2(s->substr(0, 25));
  v11->set_f_10(false);
  v11->set_f_4(0x46d471c876daf1b3);
  v11->set_f_14(false);
  v11->set_f_19(0x4f);
  v11->set_f_20(false);
  v11->set_f_0(0x6d);
  v11->add_f_8(Message2::M1::M21::E12_CONST_5);
  v11->set_f_17(0x43ac142e6fdd3d3b);
  v11->set_f_15(s->substr(0, 354));
  v11->set_f_5(true);
  v11->set_f_18(0.994905);
  Message2::M1::M41* v12 = v0->mutable_f_30();
  v12->set_f_2(false);
  v12->set_f_1(0xf1246dd7dc595f2);
  v12->set_f_0(0x3);
  Message2::M1::M41::M63* v13 = v12->mutable_f_12();
  Message2::M1::M41::M63::M81* v14 = v13->mutable_f_4();
  v14->set_f_0(0x31c3d83995ce644b);
  Message2::M1::M41::M54* v15 = v12->mutable_f_10();
  v15->set_f_2(0x1a02f98b8d7e9ba);
  v15->set_f_0(0x75a77824);
  v15->set_f_3(0x178bc95285fc6a49);
  v15->set_f_4(s->substr(0, 219));
  v12->set_f_3(0x4cbfc88fccca8411);
  Message2::M1::M28* v16 = v0->mutable_f_20();
  Message2::M1::M28::M58* v17 = v16->mutable_f_2();
  v17->set_f_0(true);
  Message2::M1::M12* v18 = v0->mutable_f_7();
  v18->set_f_0(0xb0bd9a6fd5335d2);
  Message2::M1::M19* v19 = v0->mutable_f_12();
  v19->set_f_0(0x2e6498068f1f0099);
  Message2::M1::M53* v20 = v0->mutable_f_40();
  v20->set_f_7(false);
  v20->set_f_10(0x6cfb8d15ebbb82e4);
  v20->set_f_1(0x23f7d0dd3af746a8);
  v20->set_f_9(0x56d13ac214b66a35);
  v20->set_f_11(0x6ecbbfaa);
  v20->set_f_16(s->substr(0, 19));
  v20->set_f_2(0x7bcc1c51);
  v20->set_f_15(0x2aee5b57915c5415);
  v20->set_f_8(0x10d77b4406771815);
  v20->set_f_6(0x6781eeb5c3f7e12e);
  v20->set_f_12(0x69);
  v20->set_f_14(0.794363);
  Message2::M1::M52* v21_0 = v0->add_f_39();
  v21_0->set_f_5(s->substr(0, 286));
  v21_0->set_f_0(Message2::M1::M52::E18_CONST_5);
  v21_0->set_f_3(0x857371f);
  v21_0->set_f_2(true);
  v21_0->set_f_1(0x70);
  message->set_f_17(0x2224e90b091208dc);
  message->set_f_6(0x55e26169a74abf1b);
  message->set_f_13(0xf);
  message->set_f_12(false);
  message->add_f_26(Message2::E3_CONST_3);
  message->set_f_3(0x20cc69e);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_10(0x7bd32d331ec0155a);
  message->set_f_11(s->substr(0, 25));
  message->set_f_17(0x24f6809a041a02f6);
  message->set_f_16(0x3832);
  Message2::M1* v0 = message->mutable_f_45();
  Message2::M1::M50* v1_0 = v0->add_f_34();
  v1_0->add_f_3(Message2::M1::M50::E17_CONST_5);
  v1_0->set_f_1(false);
  Message2::M1::M9* v2_0 = v0->add_f_4();
  (void)v2_0;  // Suppresses clang-tidy.
  Message2::M1::M42* v3 = v0->mutable_f_32();
  v3->set_f_0(s->substr(0, 4));
  Message2::M1::M17* v4 = v0->mutable_f_10();
  Message2::M1::M17::E10 array_0[22] = {
      Message2::M1::M17::E10_CONST_1, Message2::M1::M17::E10_CONST_1,
      Message2::M1::M17::E10_CONST_1, Message2::M1::M17::E10_CONST_5,
      Message2::M1::M17::E10_CONST_1, Message2::M1::M17::E10_CONST_3,
      Message2::M1::M17::E10_CONST_3, Message2::M1::M17::E10_CONST_1,
      Message2::M1::M17::E10_CONST_5, Message2::M1::M17::E10_CONST_5,
      Message2::M1::M17::E10_CONST_3, Message2::M1::M17::E10_CONST_4,
      Message2::M1::M17::E10_CONST_4, Message2::M1::M17::E10_CONST_4,
      Message2::M1::M17::E10_CONST_3, Message2::M1::M17::E10_CONST_1,
      Message2::M1::M17::E10_CONST_1, Message2::M1::M17::E10_CONST_3,
      Message2::M1::M17::E10_CONST_1, Message2::M1::M17::E10_CONST_2,
      Message2::M1::M17::E10_CONST_5, Message2::M1::M17::E10_CONST_4,
  };
  for (auto v : array_0) {
    v4->add_f_1(v);
  }
  Message2::M1::M35* v5_0 = v0->add_f_27();
  v5_0->add_f_2(Message2::M1::M35::E15_CONST_3);
  v5_0->set_f_1(0x5dd16e7);
  v5_0->set_f_0(0x371fb010e4501b29);
  Message2::M1::M35::M61* v6 = v5_0->mutable_f_7();
  Message2::M1::M35::M61::M77* v7 = v6->mutable_f_4();
  v7->set_f_3(0x545d1);
  v7->set_f_11(true);
  v7->set_f_7(0x761813844f00e0cd);
  v7->set_f_8(0x4d);
  v7->add_f_20(Message2::M1::M35::M61::M77::E23_CONST_1);
  v7->set_f_12(0xaaa);
  v7->set_f_9(0x115cbd);
  v7->set_f_14(true);
  v7->set_f_24(true);
  v7->set_f_25(0x623c093e47b93f88);
  v7->set_f_15(false);
  v7->set_f_0(0x164d68627cf7914d);
  v7->set_f_4(0x20259a1678588f5);
  v7->set_f_10(0x12);
  v7->set_f_22(true);
  v7->set_f_23(s->substr(0, 18));
  v7->set_f_2(false);
  v7->set_f_1(s->substr(0, 32));
  v7->set_f_16(0x5e);
  Message2::M1::M28* v8 = v0->mutable_f_20();
  v8->set_f_0(0x2c352fbf2c49c700);
  Message2::M1::M39* v9 = v0->mutable_f_28();
  (void)v9;  // Suppresses clang-tidy.
  Message2::M1::M46* v10 = v0->mutable_f_33();
  v10->set_f_0(true);
  Message2::M1::M46::M69* v11 = v10->mutable_f_4();
  v11->set_f_0(true);
  Message2::M1::M53* v12 = v0->mutable_f_40();
  v12->set_f_8(0x1362a558b76f44ec);
  v12->set_f_3(s->substr(0, 4));
  v12->set_f_1(0x457c54ec1e7e97df);
  v12->set_f_10(0xf266cc55d453f94);
  v12->set_f_2(0x412f320f);
  v12->set_f_11(0x2d73f171);
  v12->set_f_13(0x4c5);
  v12->set_f_0(0x75d938ca23a5bff1);
  v12->set_f_14(0.558100);
  v12->set_f_7(true);
  v12->set_f_6(0x45c821a80194460d);
  v12->set_f_5(0x3d4f1589567816eb);
  v12->set_f_12(0x3a0e);
  v12->set_f_17(0x265c922);
  Message2::M1::M21* v13 = v0->mutable_f_15();
  v13->set_f_2(s->substr(0, 80));
  v13->set_f_16(0x1405e);
  v13->set_f_4(0x70cfe9e593ea11b1);
  v13->set_f_19(0x2);
  v13->add_f_6(Message2::M1::M21::E11_CONST_5);
  v13->add_f_8(Message2::M1::M21::E12_CONST_3);
  v13->set_f_10(true);
  v13->set_f_9(0x2a64b77092a30097);
  v13->set_f_3(s->substr(0, 272));
  v13->set_f_20(false);
  v13->set_f_1(0x5d30ac5);
  v13->set_f_14(false);
  v13->set_f_15(s->substr(0, 88));
  v13->set_f_13(0x12da);
  v13->set_f_17(0x38782d8ba0013c23);
  Message2::M1::M31* v14 = v0->mutable_f_24();
  (void)v14;  // Suppresses clang-tidy.
  Message2::M1::M33* v15 = v0->mutable_f_26();
  v15->set_f_2(s->substr(0, 70));
  v15->set_f_0(s->substr(0, 17));
  v15->set_f_1(s->substr(0, 17));
  v15->set_f_4(Message2::M1::M33::E14_CONST_2);
  Message2::M1::M30* v16 = v0->mutable_f_23();
  Message2::M1::M30::M56* v17 = v16->mutable_f_4();
  v17->set_f_1(0x2d);
  Message2::M1::M19* v18 = v0->mutable_f_12();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M1::M22* v19_0 = v0->add_f_16();
  v19_0->set_f_0(0x75);
  v19_0->set_f_2(0x1e835a0004a6b0f9);
  v19_0->set_f_4(0xe6b698);
  v0->set_f_0(0x17);
  Message2::M1::M52* v20_0 = v0->add_f_39();
  v20_0->set_f_0(Message2::M1::M52::E18_CONST_3);
  v20_0->set_f_2(false);
  v20_0->set_f_5(s->substr(0, 25));
  Message2::M1::M12* v21 = v0->mutable_f_7();
  v21->set_f_0(0x1bbe1cd880c04e3b);
  Message2::M1::M27* v22_0 = v0->add_f_18();
  v22_0->set_f_0(0x8ffadb1);
  v22_0->set_f_1(0x5841cbe70d343e5f);
  v22_0->set_f_2(true);
  Message2::M1::M23* v23 = v0->mutable_f_17();
  v23->set_f_0(0x1a);
  Message2::M1::M41* v24 = v0->mutable_f_30();
  v24->set_f_1(0x72300ce1dccd1011);
  Message2::M1::M41::M54* v25 = v24->mutable_f_10();
  v25->set_f_4(s->substr(0, 3));
  v25->set_f_2(0x759df1be9fb29654);
  v25->set_f_3(0x238215f571e39697);
  v25->set_f_0(0x72b90a8f);
  v25->set_f_1(s->substr(0, 3));
  v24->set_f_0(0x71);
  Message2::M1::M41::M63* v26 = v24->mutable_f_12();
  Message2::M1::M41::M63::M81* v27 = v26->mutable_f_4();
  v27->set_f_0(0x10fdaf11c26fed65);
  v24->set_f_3(0x3381eee4d7a0e1b8);
  v24->set_f_2(false);
  v24->set_f_4(s->substr(0, 6));
  Message2::M1::M15* v28_0 = v0->add_f_9();
  (void)v28_0;  // Suppresses clang-tidy.
  Message2::M1::M40* v29_0 = v0->add_f_29();
  Message2::M1::M40::M70* v30_0 = v29_0->add_f_2();
  v30_0->set_f_0(s->substr(0, 29));
  Message2::M1::M7* v31_0 = v0->add_f_3();
  Message2::M1::M7::M65* v32 = v31_0->mutable_f_4();
  v32->set_f_1(0x7f19e3a32);
  v32->set_f_0(s->substr(0, 26));
  v31_0->set_f_0(s->substr(0, 3));
  message->set_f_22(0x54d2bffb);
  message->set_f_14(false);
  message->set_f_18(0x3789119509b958a6);
  message->set_f_20(false);
  message->set_f_8(0x7ef22a6c07bebeb1);
  message->set_f_29(0x29);
  message->set_f_5(0xf065fd7);
  message->set_f_0(0x2597e2caa0556299);
  message->set_f_9(0xf413d27ecc06eca);
  message->set_f_12(true);
  message->set_f_27(true);
  message->set_f_1(0.169604);
  message->set_f_23(s->substr(0, 493));
  message->add_f_2(Message2::E1_CONST_1);
  message->set_f_19(0x1741d7);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_15(0x6f);
  message->set_f_25(0x227b6540e7ebfc19);
  message->set_f_17(0x64b9d475691bae33);
  message->set_f_5(0xce3b326);
  message->set_f_23(s->substr(0, 56));
  message->set_f_16(0x71);
  message->set_f_7(s->substr(0, 13));
  message->set_f_14(true);
  message->set_f_9(0x25d00d2aa5647339);
  message->set_f_8(0x1c6e331ae69d99a3);
  message->set_f_19(0x21ae);
  message->set_f_20(false);
  message->set_f_29(0x2f);
  message->set_f_18(0x41a3c3966009514a);
  message->set_f_4(0x637ee0ee0adbae22);
  message->add_f_26(Message2::E3_CONST_3);
  message->set_f_6(0x3f09c8a7cd13c8fa);
  message->set_f_0(0x2b5ffba51caf79b8);
  message->set_f_11(s->substr(0, 478));
  message->add_f_24(Message2::E2_CONST_4);
  Message2::E1 array_0[21] = {
      Message2::E1_CONST_4, Message2::E1_CONST_1, Message2::E1_CONST_4,
      Message2::E1_CONST_2, Message2::E1_CONST_2, Message2::E1_CONST_5,
      Message2::E1_CONST_1, Message2::E1_CONST_2, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_2,
      Message2::E1_CONST_4, Message2::E1_CONST_4, Message2::E1_CONST_1,
      Message2::E1_CONST_3, Message2::E1_CONST_2, Message2::E1_CONST_5,
      Message2::E1_CONST_2, Message2::E1_CONST_4, Message2::E1_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_2(v);
  }
  message->set_f_10(0x479f5822dcb202b3);
  message->set_f_28(0x1e26147ee84505c3);
  message->set_f_21(0x30e37220);
  Message2::M1* v0 = message->mutable_f_45();
  Message2::M1::M18* v1 = v0->mutable_f_11();
  v1->set_f_0(0x5bfe7841a9987b30);
  Message2::M1::M39* v2 = v0->mutable_f_28();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M1::M52* v3_0 = v0->add_f_39();
  v3_0->set_f_4(0x25);
  v3_0->set_f_6(0x59);
  v3_0->set_f_3(0x58);
  v3_0->set_f_0(Message2::M1::M52::E18_CONST_4);
  v3_0->set_f_1(0xf13090d);
  v3_0->set_f_5(s->substr(0, 288));
  Message2::M1::M40* v4_0 = v0->add_f_29();
  v4_0->set_f_0(s->substr(0, 1));
  Message2::M1::M40::M70* v5_0 = v4_0->add_f_2();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M1::M19* v6 = v0->mutable_f_12();
  v6->set_f_0(0x51278ec30f15e99c);
  v0->set_f_0(0x2d);
  Message2::M1::M21* v7 = v0->mutable_f_15();
  v7->set_f_16(0xf609645);
  v7->set_f_5(true);
  v7->set_f_2(s->substr(0, 20));
  v7->set_f_11(0x4b595665ddbdbcfb);
  v7->set_f_3(s->substr(0, 363));
  v7->set_f_19(0xd);
  v7->set_f_4(0x4206dc631c143b25);
  v7->set_f_17(0x54d517a36da7ae19);
  v7->add_f_6(Message2::M1::M21::E11_CONST_3);
  v7->add_f_8(Message2::M1::M21::E12_CONST_3);
  v7->add_f_8(Message2::M1::M21::E12_CONST_3);
  v7->add_f_8(Message2::M1::M21::E12_CONST_3);
  v7->add_f_8(Message2::M1::M21::E12_CONST_4);
  v7->set_f_14(true);
  v7->set_f_0(0x5428ef4);
  v7->set_f_13(0x3169b);
  Message2::M1::M46* v8 = v0->mutable_f_33();
  Message2::M1::M46::M69* v9 = v8->mutable_f_4();
  Message2::M1::M46::M69::M79* v10_0 = v9->add_f_4();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->set_f_0(false);
  Message2::M1::M42* v11 = v0->mutable_f_32();
  v11->set_f_0(s->substr(0, 407));
  Message2::M1::M35* v12_0 = v0->add_f_27();
  Message2::M1::M35::M72* v13 = v12_0->mutable_f_8();
  v13->set_f_0(s->substr(0, 1));
  v13->set_f_1(true);
  v13->set_f_3(false);
  v12_0->set_f_1(0xed4d4d);
  v12_0->set_f_0(0x3a2397bbb2e73f4d);
  Message2::M1::M53* v14 = v0->mutable_f_40();
  v14->set_f_6(0x612a7db9c19444e8);
  v14->set_f_0(0x310e6111ecb1301e);
  v14->set_f_14(0.611744);
  v14->set_f_2(0x1a40bd16);
  v14->set_f_16(s->substr(0, 19));
  v14->set_f_13(0xc32424b);
  v14->set_f_1(0x4a816ff9cabcafc9);
  v14->set_f_10(0x23fcdc74ac79b388);
  v14->set_f_8(0x1aa162338b4a40d6);
  Message2::M1::M15* v15_0 = v0->add_f_9();
  (void)v15_0;  // Suppresses clang-tidy.
  Message2::M1::M50* v16_0 = v0->add_f_34();
  v16_0->set_f_0(s->substr(0, 8));
  Message2::M1::M31* v17 = v0->mutable_f_24();
  v17->set_f_0(0x6a6410ba56638dee);
  Message2::M1::M7* v18_0 = v0->add_f_3();
  v18_0->set_f_0(s->substr(0, 13));
  Message2::M1::M7::M65* v19 = v18_0->mutable_f_4();
  v19->set_f_0(s->substr(0, 19));
  v19->set_f_1(0x3edb447a432);
  Message2::M1::M12* v20 = v0->mutable_f_7();
  v20->set_f_0(0x1a366e53d91468f8);
  Message2::M1::M27* v21_0 = v0->add_f_18();
  v21_0->set_f_0(0x7a);
  v21_0->set_f_1(0x8eef67ac6639381);
  Message2::M1::M27::M76* v22_0 = v21_0->add_f_5();
  v22_0->set_f_7(s->substr(0, 13));
  v22_0->set_f_14(0x1d4a9d);
  v22_0->set_f_10(0.413712);
  v22_0->set_f_24(0x15455a);
  v22_0->set_f_30(0x106);
  v22_0->set_f_0(true);
  v22_0->set_f_15(s->substr(0, 6));
  v22_0->set_f_29(false);
  v22_0->set_f_1(0x53d8e);
  v22_0->set_f_21(0x3f530d5cf75a21f2);
  v22_0->set_f_4(0x19dd6553);
  v22_0->set_f_16(0x17c486);
  v22_0->set_f_25(0xf);
  v22_0->set_f_26(s->substr(0, 16));
  v22_0->set_f_28(0x7781109e2fe69191);
  v22_0->set_f_23(0x1e0612fa13ae7ef8);
  v22_0->set_f_6(0x5686e61ffca62fad);
  v22_0->set_f_8(0x35ef9b5f8e8cf941);
  v22_0->set_f_18(0x7c429fb6779d13c1);
  v22_0->set_f_13(0xf99f820f07c6dac);
  v22_0->set_f_17(0.282381);
  v22_0->set_f_2(0x21a5477ed21d92c1);
  v22_0->set_f_22(0x1656e875e67f79b6);
  v22_0->set_f_27(0x73ee1e8fc57a6f05);
  Message2::M1::M22* v23_0 = v0->add_f_16();
  v23_0->set_f_3(0x2f0b1ae);
  v23_0->add_f_1(Message2::M1::M22::E13_CONST_4);
  v23_0->set_f_4(0x6098297);
  v23_0->set_f_0(0x66);
  v23_0->set_f_2(0x3cc91314a5c5a4c5);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_12(false);
  message->set_f_14(true);
  message->set_f_5(0x2ac343e5);
  message->set_f_29(0xe93dd9d);
  message->set_f_4(0xa81138c599712a);
  Message2::M2* v0_0 = message->add_f_48();
  Message2::M2::M3* v1 = v0_0->mutable_f_47();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M2::M38* v2 = v0_0->mutable_f_81();
  v2->set_f_0(0x50587ec);
  v2->set_f_1(0x41);
  v0_0->set_f_19(true);
  Message2::M2::M37* v3_0 = v0_0->add_f_80();
  v3_0->set_f_0(0x404d6);
  v0_0->set_f_21(0x8af353a3);
  Message2::M2::E6 array_0[21] = {
      Message2::M2::E6_CONST_1, Message2::M2::E6_CONST_3,
      Message2::M2::E6_CONST_3, Message2::M2::E6_CONST_3,
      Message2::M2::E6_CONST_2, Message2::M2::E6_CONST_5,
      Message2::M2::E6_CONST_5, Message2::M2::E6_CONST_3,
      Message2::M2::E6_CONST_2, Message2::M2::E6_CONST_1,
      Message2::M2::E6_CONST_4, Message2::M2::E6_CONST_1,
      Message2::M2::E6_CONST_1, Message2::M2::E6_CONST_1,
      Message2::M2::E6_CONST_2, Message2::M2::E6_CONST_1,
      Message2::M2::E6_CONST_4, Message2::M2::E6_CONST_5,
      Message2::M2::E6_CONST_3, Message2::M2::E6_CONST_5,
      Message2::M2::E6_CONST_1,
  };
  for (auto v : array_0) {
    v0_0->add_f_15(v);
  }
  v0_0->add_f_24(Message2::M2::E8_CONST_2);
  v0_0->set_f_28(0x4a);
  v0_0->set_f_26(false);
  Message2::M2::M48* v4_0 = v0_0->add_f_87();
  v4_0->set_f_0(true);
  v4_0->set_f_1(0.696181);
  Message2::M2::M48::M66* v5 = v4_0->mutable_f_7();
  v5->set_f_0(true);
  v0_0->set_f_27(0x435cfe0f525323a1);
  Message2::M2::M36* v6_0 = v0_0->add_f_79();
  (void)v6_0;  // Suppresses clang-tidy.
  v0_0->set_f_9(0x1b12d1f842d1ef3c);
  Message2::M2::M11* v7 = v0_0->mutable_f_56();
  v7->set_f_3(true);
  v0_0->set_f_3(0x3519f);
  Message2::M2::M49* v8 = v0_0->mutable_f_88();
  v8->set_f_0(0xb86371b);
  v0_0->set_f_13(true);
  Message2::M2::M29* v9_0 = v0_0->add_f_74();
  v9_0->set_f_0(s->substr(0, 8));
  v9_0->set_f_1(false);
  Message2::M2::M44* v10_0 = v0_0->add_f_83();
  Message2::M2::M44::M74* v11 = v10_0->mutable_f_6();
  v11->set_f_2(0x5d901886c9ded61c);
  v11->set_f_3(true);
  v11->set_f_4(s->substr(0, 9));
  v11->set_f_0(0x646eb80e);
  v11->set_f_5(false);
  v10_0->set_f_3(false);
  v10_0->set_f_1(0x16f0e1);
  Message2::M2::M20* v12_0 = v0_0->add_f_65();
  v12_0->set_f_0(0x62106589da7f2405);
  Message2::M2::M20::M68* v13 = v12_0->mutable_f_2();
  v13->set_f_4(false);
  v13->set_f_5(0x1d6d9c6d09075b8a);
  v13->set_f_2(0x4e);
  v0_0->set_f_17(0x16ad24e7bb2bd849);
  v0_0->set_f_1(0.616663);
  v0_0->set_f_10(s->substr(0, 11));
  Message2::M2::M16* v14_0 = v0_0->add_f_63();
  v14_0->set_f_3(0x77dce7cb4dfe0f08);
  v14_0->set_f_4(0x260d9050f6cfffe1);
  v14_0->set_f_0(s->substr(0, 218));
  v14_0->set_f_2(0x17c479da5a27fef9);
  v0_0->set_f_6(0x53ace4f);
  Message2::M2::M10* v15 = v0_0->mutable_f_54();
  Message2::M2::M10::M75* v16 = v15->mutable_f_5();
  v16->set_f_0(false);
  Message2::M2::M10::M75::M80* v17_0 = v16->add_f_5();
  (void)v17_0;  // Suppresses clang-tidy.
  v15->set_f_0(0x47d47b988912d528);
  Message2::M2::M8* v18_0 = v0_0->add_f_51();
  Message2::M2::M8::M60* v19 = v18_0->mutable_f_4();
  Message2::M2::M8::M60::M82* v20 = v19->mutable_f_3();
  v20->set_f_9(false);
  v20->set_f_7(0x4e85797a9faa8cd4);
  v20->set_f_10(0.880262);
  v20->set_f_6(s->substr(0, 143));
  v20->set_f_11(false);
  v20->set_f_2(s->substr(0, 18));
  v20->set_f_3(false);
  v20->set_f_5(0x28);
  v20->set_f_8(0x65929dd8ed105d1e);
  v20->set_f_0(0x1434fe716ed0fe4c);
  v20->set_f_1(0x39);
  v18_0->set_f_0(s->substr(0, 14));
  Message2::M2::M32* v21 = v0_0->mutable_f_77();
  Message2::M2::M32::M55* v22 = v21->mutable_f_2();
  v22->set_f_0(s->substr(0, 26));
  v21->set_f_0(s->substr(0, 297));
  Message2::M2::M6* v23 = v0_0->mutable_f_50();
  v23->set_f_5(0x633d67cc13ca2e2d);
  v23->set_f_3(0x4897cd065e7e369c);
  Message2::M2::M43* v24 = v0_0->mutable_f_82();
  (void)v24;  // Suppresses clang-tidy.
  Message2::M2::M5* v25_0 = v0_0->add_f_48();
  v25_0->set_f_0(0x10ab4ac8);
  Message2::M2::M5::M73* v26_0 = v25_0->add_f_3();
  v26_0->set_f_0(s->substr(0, 5));
  v0_0->set_f_5(0x1c7df10);
  v0_0->set_f_23(0x3d348c67879f9160);
  v0_0->add_f_18(Message2::M2::E7_CONST_2);
  Message2::M2::M34* v27_0 = v0_0->add_f_78();
  v27_0->set_f_0(0x12a2b3881247052);
  Message2::M2::M51* v28 = v0_0->mutable_f_91();
  Message2::M2::M51::M62* v29 = v28->mutable_f_4();
  v29->set_f_1(0x1a43bb);
  v29->set_f_0(true);
  v28->set_f_2(s->substr(0, 294));
  v28->set_f_1(0x1e1c6062b4791dd9);
  v0_0->set_f_30(true);
  message->set_f_18(0x1611113719c35e45);
  message->set_f_11(s->substr(0, 2));
  message->set_f_0(0x716cc2e7462741a4);
  message->set_f_1(0.006634);
  message->set_f_25(0x1b5add197685a97a);
  message->set_f_28(0x730796eb5feabb97);
  message->add_f_2(Message2::E1_CONST_1);
  message->set_f_17(0x4027b9f77f659006);
  message->set_f_16(0x22);
  message->set_f_10(0x70ea8af8f49249e5);
  message->set_f_8(0x2e478162ee4db37d);
  message->set_f_22(0x72972fa6);
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
}  // namespace fleetbench::rpc::P5::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
