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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message1.pb.h"

namespace fleetbench::rpc::P3::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_11(0x56c5da3a5dde6528);
  Message1::M10* v0 = message->mutable_f_70();
  v0->set_f_0(0x5cbc9a87f913c299);
  message->set_f_9(0x7b4468e45322fafc);
  message->set_f_6(s->substr(0, 8));
  message->set_f_19(s->substr(0, 28));
  message->set_f_5(0x26);
  message->set_f_10(s->substr(0, 19));
  message->set_f_26(0x65);
  Message1::M6* v1 = message->mutable_f_64();
  v1->set_f_0(s->substr(0, 2944));
  Message1::M6::M28* v2_0 = v1->add_f_3();
  v2_0->set_f_0(0x30);
  Message1::M6::M28::M31* v3 = v2_0->mutable_f_5();
  Message1::M6::M28::M31::M46* v4 = v3->mutable_f_3();
  v4->set_f_2(0x4d6c7f6c);
  v4->set_f_0(0x538fb1b3d612e42b);
  v3->set_f_0(false);
  Message1::M6::M22* v5_0 = v1->add_f_2();
  v5_0->set_f_0(0x60);
  v5_0->set_f_2(s->substr(0, 17));
  Message1::M6::M22::M34* v6 = v5_0->mutable_f_4();
  v6->set_f_1(s->substr(0, 2022));
  v6->set_f_0(s->substr(0, 397));
  v6->set_f_2(0x6b1476d406651852);
  v6->set_f_3(0x73c683adbfcc2519);
  Message1::M14* v7_0 = message->add_f_77();
  v7_0->set_f_0(0xa69bc);
  Message1::M14::M26* v8 = v7_0->mutable_f_9();
  v8->set_f_0(0x7625f70c);
  v8->set_f_1(0x4972ced34479762f);
  v7_0->set_f_3(true);
  v7_0->set_f_1(0xbf24563);
  Message1::M14::M20* v9 = v7_0->mutable_f_6();
  v9->set_f_0(true);
  v9->set_f_1(0x233df59cd2342105);
  v9->set_f_2(0x357960397384110e);
  message->set_f_1(0xe6ecf);
  message->set_f_27(0x3820b2f9e3a38d76);
  Message1::M5* v10 = message->mutable_f_63();
  v10->set_f_0(0x71);
  message->set_f_3(0x9f42f1d);
  message->set_f_15(0x75);
  message->set_f_29(Message1::E1_CONST_5);
  message->set_f_28(0x20);
  message->set_f_20(0x41c86771866ceb80);
  message->set_f_24(0x8bbd6a8075552f9);
  message->set_f_12(0x672dfc7ec797324);
  Message1::M7* v11 = message->mutable_f_66();
  Message1::M7::M27* v12 = v11->mutable_f_9();
  (void)v12;  // Suppresses clang-tidy.
  v11->set_f_0(s->substr(0, 210));
  v11->set_f_4(0x41a9db643f7ed41f);
  Message1::M7::M21* v13 = v11->mutable_f_7();
  v13->set_f_0(0xb6c9364);
  message->add_f_22(s->substr(0, 6));
  Message1::M3* v14_0 = message->add_f_60();
  (void)v14_0;  // Suppresses clang-tidy.
  Message1::M13* v15_0 = message->add_f_76();
  v15_0->set_f_0(0x32c3dfc);
  message->set_f_0(0x7a2c9c2a932fc7e4);
  message->set_f_4(0x21);
  message->set_f_2(false);
  Message1::M4* v16_0 = message->add_f_62();
  v16_0->set_f_0(false);
  message->set_f_13(0x143a283ace41f3d3);
  Message1::M11* v17 = message->mutable_f_72();
  Message1::M11::E4 array_1[18] = {
      Message1::M11::E4_CONST_2, Message1::M11::E4_CONST_4,
      Message1::M11::E4_CONST_5, Message1::M11::E4_CONST_1,
      Message1::M11::E4_CONST_4, Message1::M11::E4_CONST_3,
      Message1::M11::E4_CONST_2, Message1::M11::E4_CONST_1,
      Message1::M11::E4_CONST_5, Message1::M11::E4_CONST_3,
      Message1::M11::E4_CONST_2, Message1::M11::E4_CONST_4,
      Message1::M11::E4_CONST_5, Message1::M11::E4_CONST_2,
      Message1::M11::E4_CONST_5, Message1::M11::E4_CONST_5,
      Message1::M11::E4_CONST_3, Message1::M11::E4_CONST_3,
  };
  for (auto v : array_1) {
    v17->add_f_0(v);
  }
  message->set_f_16(0x29040f3f861c3dac);
  message->set_f_17(s->substr(0, 21));
  Message1::M15* v18 = message->mutable_f_80();
  Message1::M15::M19* v19 = v18->mutable_f_3();
  v19->set_f_2(0xf7612cdec7af0f0);
  v19->set_f_0(0x71ba1);
  Message1::M15::M18* v20 = v18->mutable_f_2();
  v20->set_f_1(s->substr(0, 19));
  v20->set_f_0(0xd);
  v18->set_f_0(s->substr(0, 3));
  message->set_f_18(0x49);
  message->set_f_14(0x58);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_24(0x7275cfb912783b82);
  message->set_f_2(true);
  Message1::M4* v0_0 = message->add_f_62();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_28(0xb);
  message->set_f_21(s->substr(0, 21));
  Message1::M12* v1 = message->mutable_f_74();
  v1->set_f_0(0x52);
  Message1::M12::M17* v2 = v1->mutable_f_3();
  v2->set_f_7(0x2c56);
  v2->set_f_15(0x1a);
  v2->set_f_4(true);
  v2->set_f_23(0x3d);
  v2->set_f_20(0x277e36d);
  v2->set_f_18(0xb99c34c6a981809);
  v2->set_f_13(s->substr(0, 5));
  v2->set_f_5(0x35336fff68213995);
  v2->set_f_6(0xd);
  v2->set_f_9(s->substr(0, 49));
  v2->set_f_26(s->substr(0, 3));
  v2->set_f_11(s->substr(0, 8));
  v2->set_f_10(false);
  v2->set_f_14(0x62869719);
  v2->set_f_21(0x4918ab9e6d67be6d);
  message->set_f_4(0x7a);
  message->set_f_25(s->substr(0, 18));
  message->set_f_23(s->substr(0, 1));
  message->set_f_0(0x157d81869704da27);
  message->set_f_16(0x1ef3e74cac08ffb2);
  Message1::M14* v3_0 = message->add_f_77();
  v3_0->set_f_1(0x2);
  Message1::M14::M20* v4 = v3_0->mutable_f_6();
  v4->set_f_2(0x14de950ecba3a1e9);
  v4->set_f_1(0x76935fb980dd26e4);
  v4->set_f_0(false);
  Message1::M14::M26* v5 = v3_0->mutable_f_9();
  v5->set_f_0(0x12c020b1);
  v5->set_f_1(0xb53e37dc5616f49);
  v3_0->set_f_3(false);
  message->set_f_15(0x2502);
  Message1::M1* v6_0 = message->add_f_54();
  v6_0->set_f_0(0x7e);
  Message1::M1::M16* v7_0 = v6_0->add_f_2();
  Message1::M1::M16::M30* v8_0 = v7_0->add_f_3();
  v8_0->set_f_3(0x4f7e5db2a98dcab4);
  v8_0->set_f_2(false);
  Message1::M1::M16::M30::M48* v9_0 = v8_0->add_f_6();
  v9_0->set_f_0(s->substr(0, 8));
  v8_0->set_f_1(0x16624b);
  Message1::M8* v10 = message->mutable_f_67();
  v10->set_f_1(0x431f7d142d0db078);
  v10->set_f_0(s->substr(0, 125));
  message->add_f_22(s->substr(0, 4));
  message->set_f_18(0x306e);
  Message1::M9* v11 = message->mutable_f_69();
  Message1::M9::M29* v12_0 = v11->add_f_13();
  v12_0->add_f_10(0x3d);
  v12_0->set_f_12(s->substr(0, 32));
  v12_0->set_f_0(s->substr(0, 6));
  v12_0->set_f_15(0x73b4a25824e9bdf8);
  v12_0->set_f_16(0x88a);
  v12_0->set_f_3(0x22);
  v12_0->set_f_21(s->substr(0, 21));
  Message1::M9::M29::E7 array_0[19] = {
      Message1::M9::M29::E7_CONST_2, Message1::M9::M29::E7_CONST_1,
      Message1::M9::M29::E7_CONST_4, Message1::M9::M29::E7_CONST_3,
      Message1::M9::M29::E7_CONST_5, Message1::M9::M29::E7_CONST_1,
      Message1::M9::M29::E7_CONST_3, Message1::M9::M29::E7_CONST_5,
      Message1::M9::M29::E7_CONST_3, Message1::M9::M29::E7_CONST_1,
      Message1::M9::M29::E7_CONST_1, Message1::M9::M29::E7_CONST_3,
      Message1::M9::M29::E7_CONST_1, Message1::M9::M29::E7_CONST_4,
      Message1::M9::M29::E7_CONST_4, Message1::M9::M29::E7_CONST_2,
      Message1::M9::M29::E7_CONST_3, Message1::M9::M29::E7_CONST_5,
      Message1::M9::M29::E7_CONST_1,
  };
  for (auto v : array_0) {
    v12_0->add_f_24(v);
  }
  v12_0->set_f_9(s->substr(0, 12));
  v12_0->set_f_7(0xee4);
  v12_0->set_f_14(s->substr(0, 2));
  v12_0->set_f_23(0x170c76);
  v12_0->set_f_25(0x43);
  v12_0->set_f_22(0x739f54eabf3eacb2);
  v12_0->set_f_1(0x5a);
  Message1::M9::M29::M35* v13 = v12_0->mutable_f_42();
  v13->set_f_17(0x61491433);
  Message1::M9::M29::M35::M49* v14 = v13->mutable_f_49();
  Message1::M9::M29::M35::M49::E19 array_1[22] = {
      Message1::M9::M29::M35::M49::E19_CONST_3,
      Message1::M9::M29::M35::M49::E19_CONST_4,
      Message1::M9::M29::M35::M49::E19_CONST_5,
      Message1::M9::M29::M35::M49::E19_CONST_5,
      Message1::M9::M29::M35::M49::E19_CONST_2,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_2,
      Message1::M9::M29::M35::M49::E19_CONST_3,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_5,
      Message1::M9::M29::M35::M49::E19_CONST_5,
      Message1::M9::M29::M35::M49::E19_CONST_5,
      Message1::M9::M29::M35::M49::E19_CONST_2,
      Message1::M9::M29::M35::M49::E19_CONST_3,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_1,
      Message1::M9::M29::M35::M49::E19_CONST_4,
      Message1::M9::M29::M35::M49::E19_CONST_1,
  };
  for (auto v : array_1) {
    v14->add_f_0(v);
  }
  v13->set_f_0(0x75);
  v13->set_f_25(0x1c912);
  v13->set_f_19(s->substr(0, 6));
  v13->set_f_15(0x4b6aa7a81a99e109);
  v13->set_f_24(Message1::M9::M29::M35::E10_CONST_3);
  v13->set_f_29(0x3bd7964097e);
  v13->set_f_5(0x6ebf794);
  v13->set_f_28(s->substr(0, 6));
  v13->set_f_6(0x3a);
  v13->set_f_12(s->substr(0, 64));
  v13->set_f_21(0x25fc50381998e523);
  Message1::M9::M29::M35::M47* v15_0 = v13->add_f_48();
  v15_0->set_f_2(s->substr(0, 509));
  v15_0->set_f_0(0.912256);
  v13->set_f_10(s->substr(0, 24));
  v13->set_f_22(0x2b8e29e932daa821);
  v13->set_f_14(s->substr(0, 19));
  v13->set_f_9(0x407bec5b3b8b025b);
  v13->set_f_2(s->substr(0, 490));
  Message1::M9::M29::M35::M54* v16_0 = v13->add_f_51();
  v16_0->set_f_0(0x22e6);
  v13->set_f_23(0x6b);
  v13->set_f_1(0xb17cc4d);
  v13->set_f_13(Message1::M9::M29::M35::E9_CONST_3);
  v13->set_f_3(0x5cf348ca339bbb04);
  v13->set_f_27(s->substr(0, 7));
  v13->set_f_18(0x1c8e);
  v12_0->set_f_4(s->substr(0, 24));
  v12_0->set_f_11(0x655bc845626c92b9);
  v12_0->set_f_8(0x55);
  v12_0->set_f_19(0xb5c497c);
  Message1::M9::M29::M39* v17 = v12_0->mutable_f_47();
  v17->add_f_0(Message1::M9::M29::M39::E11_CONST_4);
  v17->set_f_30(0x13ebbe4);
  v17->set_f_27(false);
  v17->set_f_32(0x69e12564096b7b1);
  v17->set_f_21(0x2b);
  v17->set_f_23(0x5816b30974a0462f);
  v17->set_f_29(0x2dfe01ecd796a14f);
  v17->set_f_9(s->substr(0, 463));
  v17->set_f_1(0x737f73c);
  v17->set_f_10(s->substr(0, 16));
  v17->set_f_8(0x366f7e60c0b6b63b);
  v17->set_f_4(0x40581d53);
  Message1::M9::M29::M39::E14 array_2[12] = {
      Message1::M9::M29::M39::E14_CONST_2, Message1::M9::M29::M39::E14_CONST_4,
      Message1::M9::M29::M39::E14_CONST_4, Message1::M9::M29::M39::E14_CONST_4,
      Message1::M9::M29::M39::E14_CONST_3, Message1::M9::M29::M39::E14_CONST_1,
      Message1::M9::M29::M39::E14_CONST_5, Message1::M9::M29::M39::E14_CONST_3,
      Message1::M9::M29::M39::E14_CONST_2, Message1::M9::M29::M39::E14_CONST_3,
      Message1::M9::M29::M39::E14_CONST_3, Message1::M9::M29::M39::E14_CONST_5,
  };
  for (auto v : array_2) {
    v17->add_f_13(v);
  }
  v17->add_f_25(Message1::M9::M29::M39::E16_CONST_3);
  v17->set_f_16(0x45b8fe796217789d);
  Message1::M9::M29::M39::E12 array_3[7] = {
      Message1::M9::M29::M39::E12_CONST_5, Message1::M9::M29::M39::E12_CONST_2,
      Message1::M9::M29::M39::E12_CONST_3, Message1::M9::M29::M39::E12_CONST_5,
      Message1::M9::M29::M39::E12_CONST_5, Message1::M9::M29::M39::E12_CONST_3,
      Message1::M9::M29::M39::E12_CONST_2,
  };
  for (auto v : array_3) {
    v17->add_f_6(v);
  }
  v17->set_f_26(0x46);
  v17->set_f_15(Message1::M9::M29::M39::E15_CONST_1);
  v17->set_f_14(0x4a6791060312bad4);
  v17->set_f_22(0x6b);
  v17->set_f_24(s->substr(0, 25));
  Message1::M9::M29::M39::M45* v18 = v17->mutable_f_54();
  v18->set_f_0(0x4b);
  v17->set_f_3(true);
  v17->set_f_17(0x45);
  v17->set_f_5(0x2f1755e);
  Message1::M9::M29::M36* v19 = v12_0->mutable_f_45();
  v19->set_f_0(0x58867ddd9238b17c);
  v12_0->set_f_13(0x1f3265);
  v12_0->set_f_2(0x7);
  v11->set_f_7(0xe);
  v11->set_f_1(true);
  Message1::M9::E3 array_4[14] = {
      Message1::M9::E3_CONST_4, Message1::M9::E3_CONST_5,
      Message1::M9::E3_CONST_4, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_1, Message1::M9::E3_CONST_1,
      Message1::M9::E3_CONST_2, Message1::M9::E3_CONST_2,
      Message1::M9::E3_CONST_2, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_1, Message1::M9::E3_CONST_5,
      Message1::M9::E3_CONST_1, Message1::M9::E3_CONST_4,
  };
  for (auto v : array_4) {
    v11->add_f_3(v);
  }
  v11->set_f_2(0x3318fdfcf11);
  v11->set_f_5(0x7d6c1fbf5a99ff7e);
  v11->set_f_4(0x34ec032d1557a218);
  v11->set_f_6(0x17ee5f71ecaa489a);
  message->set_f_29(Message1::E1_CONST_3);
  Message1::M10* v20 = message->mutable_f_70();
  v20->set_f_0(0x4d2452378d74056f);
  message->set_f_26(0xc3f11ac);
  Message1::M6* v21 = message->mutable_f_64();
  v21->set_f_0(s->substr(0, 22));
  Message1::M6::M28* v22_0 = v21->add_f_3();
  v22_0->set_f_0(0x21);
  message->set_f_3(0x1ae8b77b);
  message->set_f_27(0x6332f6c05a0e982f);
  Message1::M5* v23 = message->mutable_f_63();
  v23->set_f_0(0xd0d98e7);
  message->set_f_20(0x885140a9adefa09);
  message->set_f_12(0x56ec550664b26953);
  message->set_f_8(s->substr(0, 45));
  message->set_f_13(0x2d25864a2a5a33ad);
  message->set_f_10(s->substr(0, 57));
  message->set_f_14(0x1e);
  message->set_f_6(s->substr(0, 34));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_27(0x1d4ac641071e4430);
  message->set_f_9(0x365ec3c9740b3f7b);
  message->set_f_11(0x57d4169dfc3e491b);
  message->set_f_1(0x67a7033);
  message->set_f_18(0x3a);
  Message1::M9* v0 = message->mutable_f_69();
  v0->set_f_7(0x5);
  Message1::M9::E3 array_0[21] = {
      Message1::M9::E3_CONST_5, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_2, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_1, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_1, Message1::M9::E3_CONST_1,
      Message1::M9::E3_CONST_3, Message1::M9::E3_CONST_2,
      Message1::M9::E3_CONST_2, Message1::M9::E3_CONST_2,
      Message1::M9::E3_CONST_4, Message1::M9::E3_CONST_2,
      Message1::M9::E3_CONST_2, Message1::M9::E3_CONST_5,
      Message1::M9::E3_CONST_5, Message1::M9::E3_CONST_3,
      Message1::M9::E3_CONST_3, Message1::M9::E3_CONST_1,
      Message1::M9::E3_CONST_2,
  };
  for (auto v : array_0) {
    v0->add_f_3(v);
  }
  v0->set_f_2(0x39a90f0dbe9);
  Message1::M9::M29* v1_0 = v0->add_f_13();
  v1_0->set_f_17(0xa19168a);
  Message1::M9::M29::E7 array_1[17] = {
      Message1::M9::M29::E7_CONST_2, Message1::M9::M29::E7_CONST_4,
      Message1::M9::M29::E7_CONST_1, Message1::M9::M29::E7_CONST_3,
      Message1::M9::M29::E7_CONST_5, Message1::M9::M29::E7_CONST_1,
      Message1::M9::M29::E7_CONST_2, Message1::M9::M29::E7_CONST_4,
      Message1::M9::M29::E7_CONST_2, Message1::M9::M29::E7_CONST_5,
      Message1::M9::M29::E7_CONST_1, Message1::M9::M29::E7_CONST_3,
      Message1::M9::M29::E7_CONST_3, Message1::M9::M29::E7_CONST_2,
      Message1::M9::M29::E7_CONST_4, Message1::M9::M29::E7_CONST_2,
      Message1::M9::M29::E7_CONST_2,
  };
  for (auto v : array_1) {
    v1_0->add_f_24(v);
  }
  v1_0->set_f_8(0x6b);
  v1_0->set_f_20(0x371e);
  v1_0->set_f_22(0x5ad7c1a9c4ea1aab);
  v1_0->set_f_11(0x6003e82ed3254990);
  v1_0->add_f_10(0x4d);
  v1_0->set_f_12(s->substr(0, 119));
  v1_0->set_f_13(0x465cf23);
  v1_0->set_f_9(s->substr(0, 17));
  v1_0->set_f_14(s->substr(0, 32));
  Message1::M9::M29::M36* v2 = v1_0->mutable_f_45();
  v2->set_f_0(0x447df635d78a05dd);
  Message1::M9::M29::M36::M40* v3_0 = v2->add_f_2();
  Message1::M9::M29::M36::M40::M58* v4_0 = v3_0->add_f_4();
  v4_0->set_f_0(0x171865);
  v3_0->set_f_0(0x636ff21d);
  Message1::M9::M29::M36::M50* v5 = v2->mutable_f_4();
  v5->set_f_0(0x26d174296992f814);
  v5->set_f_2(0x16);
  v5->set_f_1(0x4a);
  v1_0->set_f_0(s->substr(0, 5));
  v1_0->set_f_18(0x62);
  v1_0->set_f_25(0x29);
  v1_0->set_f_5(0xd1005ec);
  v1_0->set_f_19(0x4ecab34);
  v1_0->set_f_23(0x35);
  v1_0->set_f_1(0x26);
  v1_0->set_f_21(s->substr(0, 65));
  v1_0->set_f_3(0xb6f72a8);
  v0->set_f_6(0x385531bcb16f0cd);
  Message1::M9::M24* v6 = v0->mutable_f_12();
  v6->add_f_0(Message1::M9::M24::E6_CONST_4);
  v0->set_f_1(false);
  message->set_f_4(0x2e);
  Message1::M6* v7 = message->mutable_f_64();
  v7->set_f_0(s->substr(0, 23));
  message->set_f_10(s->substr(0, 2));
  message->set_f_14(0x3c);
  Message1::M7* v8 = message->mutable_f_66();
  v8->set_f_2(0x4c);
  Message1::M7::M21* v9 = v8->mutable_f_7();
  v9->set_f_0(0x58762ad);
  v8->set_f_4(0x699902e5a45c2d09);
  v8->set_f_0(s->substr(0, 8));
  v8->set_f_1(0x41);
  Message1::M4* v10_0 = message->add_f_62();
  (void)v10_0;  // Suppresses clang-tidy.
  Message1::M2* v11 = message->mutable_f_57();
  v11->set_f_2(0x6a6858a96aa42c56);
  v11->set_f_1(Message1::M2::E2_CONST_3);
  Message1::M2::M23* v12 = v11->mutable_f_7();
  v12->set_f_0(0x5fa2928aeb628a22);
  v12->set_f_3(s->substr(0, 2));
  v12->set_f_1(0x7b3052731ab7ed6f);
  v11->set_f_0(0x137385);
  Message1::M8* v13 = message->mutable_f_67();
  v13->set_f_0(s->substr(0, 11));
  message->set_f_5(0x3a51);
  Message1::M12* v14 = message->mutable_f_74();
  Message1::M12::M17* v15 = v14->mutable_f_3();
  v15->set_f_29(s->substr(0, 39));
  v15->set_f_22(s->substr(0, 32));
  v15->set_f_20(0x6a9f7561);
  v15->set_f_30(0x58);
  v15->set_f_5(0x34d0762276358e2);
  v15->set_f_25(0x359687e4);
  v15->set_f_21(0x7d1229b284808e94);
  v15->set_f_26(s->substr(0, 5));
  v15->set_f_18(0x2af775ea6eddbcfa);
  v15->set_f_3(0x5d635502e107f3d0);
  v15->set_f_17(0x4722aa531bb9111);
  v15->set_f_2(0xe337dd);
  v15->set_f_8(0x6b0d71e);
  v15->set_f_28(0x5b);
  v15->set_f_7(0x18);
  v15->set_f_24(0x1d);
  v15->set_f_23(0x9745e54);
  v15->set_f_9(s->substr(0, 21));
  v15->set_f_10(true);
  v15->set_f_15(0x5a99c71);
  v15->set_f_14(0x630d9aaf);
  v15->set_f_6(0x13);
  v14->set_f_0(0x5c57fdb);
  message->set_f_23(s->substr(0, 106));
  Message1::M11* v16 = message->mutable_f_72();
  (void)v16;  // Suppresses clang-tidy.
  message->set_f_26(0x52);
  message->set_f_20(0x5b93632c32cc5134);
  Message1::M1* v17_0 = message->add_f_54();
  Message1::M1::M16* v18_0 = v17_0->add_f_2();
  v18_0->set_f_1(0x3830da2f9e94b145);
  Message1::M1::M16::M30* v19_0 = v18_0->add_f_3();
  Message1::M1::M16::M30::M48* v20_0 = v19_0->add_f_6();
  (void)v20_0;  // Suppresses clang-tidy.
  v19_0->set_f_0(0x1aaa9);
  v19_0->set_f_3(0x3255d12fffc70898);
  v19_0->set_f_2(false);
  v18_0->set_f_0(0x7d);
  v17_0->set_f_0(0x3b);
  message->set_f_16(0x43b53f799416ff23);
  Message1::M15* v21 = message->mutable_f_80();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_3(0xfc50409);
  message->set_f_25(s->substr(0, 7));
  message->set_f_0(0x38a5ec0adb6d660d);
  message->set_f_8(s->substr(0, 5));
  message->set_f_13(0x69a430cb951d422b);
  message->set_f_17(s->substr(0, 2));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M9* v0 = message->mutable_f_69();
  v0->set_f_4(0x711af80100438b09);
  v0->set_f_7(0x38);
  v0->set_f_0(0xe9891);
  v0->set_f_1(true);
  v0->set_f_2(0x6f);
  v0->set_f_5(0x72abf2bf69390c7b);
  Message1::M9::M24* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M14* v2_0 = message->add_f_77();
  v2_0->set_f_1(0x62);
  v2_0->set_f_3(true);
  v2_0->set_f_2(s->substr(0, 13));
  message->set_f_20(0x2caf87025b257469);
  message->set_f_9(0x40af73e7d0af435e);
  Message1::M11* v3 = message->mutable_f_72();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M2* v4 = message->mutable_f_57();
  v4->set_f_1(Message1::M2::E2_CONST_5);
  v4->set_f_0(0x72d1078);
  message->set_f_8(s->substr(0, 3));
  message->set_f_11(0x7f5b7335daa49f3);
  message->set_f_21(s->substr(0, 1));
  message->set_f_16(0x4a86b48ef5c1f950);
  message->set_f_5(0x3a47d);
  message->set_f_28(0xac09f4b);
  message->set_f_27(0x648b22d6af6b7fea);
  message->set_f_29(Message1::E1_CONST_1);
  message->set_f_17(s->substr(0, 25));
  message->set_f_26(0xf);
  message->set_f_7(0x5649b6bf);
  message->add_f_22(s->substr(0, 3));
  Message1::M1* v5_0 = message->add_f_54();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_10(s->substr(0, 21));
  message->set_f_6(s->substr(0, 506));
  Message1::M4* v6_0 = message->add_f_62();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M15* v7 = message->mutable_f_80();
  Message1::M15::M19* v8 = v7->mutable_f_3();
  v8->set_f_1(true);
  v7->set_f_0(s->substr(0, 28));
  Message1::M15::M18* v9 = v7->mutable_f_2();
  Message1::M15::M18::M38* v10 = v9->mutable_f_4();
  Message1::M15::M18::M38::M56* v11 = v10->mutable_f_2();
  Message1::M15::M18::M38::M56::M60* v12 = v11->mutable_f_4();
  v12->set_f_0(true);
  v11->set_f_0(0x1d7a);
  v10->set_f_0(0x7965870c);
  v9->set_f_1(s->substr(0, 114));
  v9->set_f_0(0xc7d377b);
  message->set_f_4(0x10);
  message->set_f_25(s->substr(0, 45));
  message->set_f_15(0xf);
  message->set_f_19(s->substr(0, 173));
  Message1::M5* v13 = message->mutable_f_63();
  v13->set_f_0(0x76);
  message->set_f_23(s->substr(0, 12));
  message->set_f_18(0xd081b);
  Message1::M8* v14 = message->mutable_f_67();
  v14->set_f_0(s->substr(0, 23));
  v14->set_f_1(0x6a3e387ba4b87322);
  message->set_f_12(0x41cd3bd10f03e0c3);
  Message1::M6* v15 = message->mutable_f_64();
  Message1::M6::M22* v16_0 = v15->add_f_2();
  v16_0->set_f_0(0x1b7b);
  v16_0->set_f_2(s->substr(0, 15));
  v16_0->set_f_1(0x5);
  v15->set_f_0(s->substr(0, 89));
  Message1::M6::M28* v17_0 = v15->add_f_3();
  v17_0->set_f_0(0x109672c);
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
}  // namespace fleetbench::rpc::P3::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
