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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message2.pb.h"

namespace fleetbench::rpc::P4::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M9* v0 = message->mutable_f_61();
  v0->set_f_0(0xe7b93ec);
  Message2::M9::M43* v1 = v0->mutable_f_3();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_19(false);
  message->set_f_3(false);
  message->set_f_9(0x6d7dacce9b5f65fc);
  message->set_f_21(false);
  message->set_f_8(s->substr(0, 298));
  Message2::M10* v2 = message->mutable_f_62();
  v2->set_f_0(false);
  message->set_f_33(true);
  Message2::M6* v3 = message->mutable_f_56();
  v3->set_f_0(0x7805ca9c);
  Message2::M6::M41* v4 = v3->mutable_f_9();
  Message2::M6::M41::M53* v5 = v4->mutable_f_9();
  Message2::M6::M41::M53::M79* v6_0 = v5->add_f_5();
  v6_0->set_f_2(0xefd9fb2);
  v6_0->set_f_1(0xb17483a997aeca7e);
  v6_0->set_f_4(0x58440f11bffc129b);
  v6_0->set_f_3(s->substr(0, 19));
  Message2::M6::M41::M53::E20 array_1[18] = {
      Message2::M6::M41::M53::E20_CONST_5, Message2::M6::M41::M53::E20_CONST_5,
      Message2::M6::M41::M53::E20_CONST_3, Message2::M6::M41::M53::E20_CONST_4,
      Message2::M6::M41::M53::E20_CONST_1, Message2::M6::M41::M53::E20_CONST_1,
      Message2::M6::M41::M53::E20_CONST_2, Message2::M6::M41::M53::E20_CONST_1,
      Message2::M6::M41::M53::E20_CONST_3, Message2::M6::M41::M53::E20_CONST_2,
      Message2::M6::M41::M53::E20_CONST_5, Message2::M6::M41::M53::E20_CONST_2,
      Message2::M6::M41::M53::E20_CONST_1, Message2::M6::M41::M53::E20_CONST_1,
      Message2::M6::M41::M53::E20_CONST_2, Message2::M6::M41::M53::E20_CONST_1,
      Message2::M6::M41::M53::E20_CONST_4, Message2::M6::M41::M53::E20_CONST_5,
  };
  for (auto v : array_1) {
    v5->add_f_0(v);
  }
  v4->set_f_2(0x7);
  v4->set_f_0(0x2332b9d05f1d4f1f);
  v4->set_f_4(0xf6ebf5d);
  v3->set_f_1(s->substr(0, 2026));
  message->set_f_29(0x3b);
  message->set_f_17(0x250c17b);
  message->set_f_31(0xff116ed8f28558a1);
  Message2::M13* v7_0 = message->add_f_65();
  Message2::M13::M25* v8 = v7_0->mutable_f_2();
  v8->set_f_0(0xf19bb77fff43cbfc);
  v7_0->add_f_0(Message2::M13::E4_CONST_1);
  Message2::M13::M40* v9 = v7_0->mutable_f_3();
  Message2::M13::M40::M56* v10 = v9->mutable_f_5();
  (void)v10;  // Suppresses clang-tidy.
  v9->set_f_1(0x28c4f0d0);
  Message2::M13::M45* v11 = v7_0->mutable_f_4();
  v11->set_f_14(0x56b2d8a0);
  v11->set_f_8(0x3c59ec2b64aaffe7);
  v11->set_f_4(true);
  v11->set_f_9(0x40);
  v11->set_f_5(0x3d233534);
  v11->set_f_11(0x38ab3b7);
  v11->set_f_13(s->substr(0, 49));
  v11->set_f_7(true);
  v11->set_f_6(0x17923e);
  Message2::M12* v12 = message->mutable_f_64();
  v12->set_f_0(0x7);
  message->set_f_2(0x95d8bfa21ed386f4);
  message->set_f_0(0x83edcae);
  Message2::M15* v13_0 = message->add_f_67();
  (void)v13_0;  // Suppresses clang-tidy.
  message->add_f_27(Message2::E2_CONST_1);
  message->set_f_22(0x6e);
  Message2::M5* v14 = message->mutable_f_55();
  Message2::M5::M24* v15_0 = v14->add_f_10();
  v15_0->set_f_0(Message2::M5::M24::E9_CONST_2);
  v14->set_f_5(0x1974480b08731012);
  v14->set_f_2(0x21f53e4);
  v14->set_f_1(s->substr(0, 105));
  Message2::M5::M31* v16 = v14->mutable_f_11();
  Message2::M5::M31::M65* v17 = v16->mutable_f_3();
  v17->set_f_2(0xcb514e214dc423cb);
  v17->set_f_0(0x75);
  v17->set_f_6(0xa);
  v17->set_f_5(false);
  Message2::M5::M31::M65::M80* v18 = v17->mutable_f_19();
  v18->set_f_0(0x409a9c0a87f5075e);
  v17->set_f_8(0.174442);
  v17->set_f_10(0xab9464c);
  Message2::M5::M31::M65::M76* v19 = v17->mutable_f_17();
  v19->add_f_0(Message2::M5::M31::M65::M76::E24_CONST_4);
  v17->set_f_9(0x25);
  v14->set_f_0(0x241e);
  message->set_f_16(0x80f11344435bf0ea);
  message->set_f_5(0x1785133f05ab510d);
  message->set_f_10(0.272049);
  message->set_f_23(0xa1cc37a0200ae370);
  message->set_f_20(0x7b661ec806cac17b);
  message->set_f_6(0.955459);
  message->set_f_18(0xf821e50be1b958ad);
  message->set_f_11(0xa669504);
  message->set_f_4(0x7321a846d437720b);
  message->set_f_15(0x31);
  Message2::M3* v20 = message->mutable_f_52();
  Message2::M3::M42* v21_0 = v20->add_f_3();
  v21_0->set_f_1(0x44);
  v21_0->set_f_3(0x34f689ed);
  Message2::M3::M42::M49* v22 = v21_0->mutable_f_6();
  Message2::M3::M42::M49::M72* v23_0 = v22->add_f_2();
  v23_0->set_f_1(0xcf1d5c551652b739);
  v23_0->set_f_3(0x1f2e42);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M13* v0_0 = message->add_f_65();
  Message2::M13::M25* v1 = v0_0->mutable_f_2();
  (void)v1;  // Suppresses clang-tidy.
  v0_0->add_f_0(Message2::M13::E4_CONST_5);
  Message2::M8* v2 = message->mutable_f_60();
  Message2::M8::M46* v3 = v2->mutable_f_4();
  v3->set_f_2(0x1082);
  v3->set_f_4(false);
  v3->set_f_3(0x8c7a9756d57646c1);
  v3->set_f_1(0xdda55e3);
  Message2::M8::M39* v4 = v2->mutable_f_3();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_31(0x61005015e9c58fbd);
  Message2::M3* v5 = message->mutable_f_52();
  Message2::M3::M42* v6_0 = v5->add_f_3();
  v6_0->set_f_0(0x1cbddd36a1eec253);
  v6_0->set_f_1(0x51);
  v6_0->set_f_2(0xc69c9b6);
  v6_0->set_f_3(0x6874b547);
  Message2::M3::M42::M49* v7 = v6_0->mutable_f_6();
  v7->set_f_0(0x842ac89b8a7c4752);
  v5->set_f_0(0x38218844);
  message->set_f_20(0xda3038874bf726ef);
  message->set_f_32(0x47);
  message->set_f_15(0x7d8);
  message->set_f_9(0x813783e0e8ec90f);
  message->set_f_18(0xb5bbf26dea2f34e8);
  message->set_f_12(s->substr(0, 18));
  message->set_f_4(0x9e961bdc92b2e32d);
  message->set_f_7(0x1e4bdd9);
  Message2::M16* v8_0 = message->add_f_69();
  Message2::M16::M35* v9_0 = v8_0->add_f_5();
  (void)v9_0;  // Suppresses clang-tidy.
  v8_0->set_f_2(true);
  v8_0->set_f_0(true);
  Message2::M10* v10 = message->mutable_f_62();
  v10->set_f_0(true);
  message->set_f_6(0.214863);
  message->set_f_19(true);
  Message2::M15* v11_0 = message->add_f_67();
  v11_0->set_f_0(s->substr(0, 8));
  message->add_f_27(Message2::E2_CONST_3);
  message->set_f_14(0xba7ec17f38ac705a);
  message->set_f_2(0xe32dbbad994ea252);
  message->set_f_33(true);
  Message2::M4* v12 = message->mutable_f_53();
  v12->set_f_6(s->substr(0, 2));
  v12->set_f_0(true);
  v12->set_f_1(s->substr(0, 17));
  v12->set_f_5(s->substr(0, 201));
  v12->set_f_3(0x13fdbf6);
  v12->set_f_4(s->substr(0, 27844));
  v12->set_f_2(s->substr(0, 17));
  Message2::M2* v13 = message->mutable_f_51();
  Message2::M2::M36* v14_0 = v13->add_f_9();
  Message2::M2::M36::M52* v15_0 = v14_0->add_f_4();
  v15_0->set_f_1(0x8f41337d09455fe4);
  v15_0->set_f_0(0.407076);
  Message2::M2::M36::M52::M88* v16 = v15_0->mutable_f_9();
  Message2::M2::M36::M52::M88::M99* v17_0 = v16->add_f_2();
  v17_0->set_f_3(0x6a);
  v17_0->set_f_2(0x7dff2239);
  v17_0->set_f_0(s->substr(0, 32));
  Message2::M2::M36::M52::M88::E27 array_0[21] = {
      Message2::M2::M36::M52::M88::E27_CONST_5,
      Message2::M2::M36::M52::M88::E27_CONST_3,
      Message2::M2::M36::M52::M88::E27_CONST_4,
      Message2::M2::M36::M52::M88::E27_CONST_5,
      Message2::M2::M36::M52::M88::E27_CONST_5,
      Message2::M2::M36::M52::M88::E27_CONST_4,
      Message2::M2::M36::M52::M88::E27_CONST_2,
      Message2::M2::M36::M52::M88::E27_CONST_4,
      Message2::M2::M36::M52::M88::E27_CONST_4,
      Message2::M2::M36::M52::M88::E27_CONST_1,
      Message2::M2::M36::M52::M88::E27_CONST_2,
      Message2::M2::M36::M52::M88::E27_CONST_1,
      Message2::M2::M36::M52::M88::E27_CONST_2,
      Message2::M2::M36::M52::M88::E27_CONST_2,
      Message2::M2::M36::M52::M88::E27_CONST_5,
      Message2::M2::M36::M52::M88::E27_CONST_1,
      Message2::M2::M36::M52::M88::E27_CONST_4,
      Message2::M2::M36::M52::M88::E27_CONST_1,
      Message2::M2::M36::M52::M88::E27_CONST_1,
      Message2::M2::M36::M52::M88::E27_CONST_3,
      Message2::M2::M36::M52::M88::E27_CONST_1,
  };
  for (auto v : array_0) {
    v16->add_f_0(v);
  }
  v15_0->set_f_2(0x8bceff001907a41c);
  v15_0->set_f_4(0x6f);
  v14_0->set_f_0(0x6acc7);
  v13->set_f_1(0x1e81);
  v13->set_f_0(Message2::M2::E3_CONST_1);
  Message2::M2::M30* v18 = v13->mutable_f_8();
  v18->set_f_0(0x30);
  v18->set_f_2(0x203b);
  Message2::M2::M30::M64* v19_0 = v18->add_f_43();
  Message2::M2::M30::M64::M81* v20_0 = v19_0->add_f_3();
  (void)v20_0;  // Suppresses clang-tidy.
  v19_0->set_f_0(0x8ec21926260f10fb);
  v18->set_f_11(Message2::M2::M30::E12_CONST_3);
  v18->set_f_3(0x68);
  v18->set_f_19(0x78);
  v18->set_f_30(s->substr(0, 21));
  Message2::M2::M30::E11 array_1[21] = {
      Message2::M2::M30::E11_CONST_1, Message2::M2::M30::E11_CONST_1,
      Message2::M2::M30::E11_CONST_3, Message2::M2::M30::E11_CONST_4,
      Message2::M2::M30::E11_CONST_2, Message2::M2::M30::E11_CONST_1,
      Message2::M2::M30::E11_CONST_2, Message2::M2::M30::E11_CONST_1,
      Message2::M2::M30::E11_CONST_4, Message2::M2::M30::E11_CONST_2,
      Message2::M2::M30::E11_CONST_3, Message2::M2::M30::E11_CONST_1,
      Message2::M2::M30::E11_CONST_2, Message2::M2::M30::E11_CONST_1,
      Message2::M2::M30::E11_CONST_1, Message2::M2::M30::E11_CONST_3,
      Message2::M2::M30::E11_CONST_3, Message2::M2::M30::E11_CONST_3,
      Message2::M2::M30::E11_CONST_5, Message2::M2::M30::E11_CONST_5,
      Message2::M2::M30::E11_CONST_2,
  };
  for (auto v : array_1) {
    v18->add_f_9(v);
  }
  v18->set_f_5(true);
  v18->set_f_7(true);
  v18->set_f_16(0x1);
  v18->set_f_4(0x73);
  v18->set_f_1(s->substr(0, 19));
  v18->set_f_14(false);
  v18->add_f_28(Message2::M2::M30::E16_CONST_1);
  v18->add_f_28(Message2::M2::M30::E16_CONST_1);
  v18->set_f_8(0x6aae04ff5690c892);
  v18->set_f_21(0x39);
  v18->set_f_6(false);
  v18->set_f_17(0x6b);
  v18->set_f_15(0xab56064687e7c7a2);
  v18->set_f_29(0x5e);
  v18->set_f_25(0x7d735b3e5754ac1d);
  Message2::M2::M17* v21 = v13->mutable_f_7();
  v21->set_f_0(s->substr(0, 116));
  v21->set_f_1(0x961c2a6b13ac593);
  v21->set_f_2(0x57c1240);
  v13->set_f_2(0xf3282df);
  message->set_f_28(0x21);
  message->set_f_21(true);
  message->set_f_16(0x4c96dc0dba4082a0);
  message->set_f_0(0x43);
  Message2::M14* v22 = message->mutable_f_66();
  Message2::M14::M28* v23 = v22->mutable_f_5();
  v23->set_f_3(false);
  v23->set_f_5(0xea7fb0fe062f4339);
  v23->set_f_4(s->substr(0, 15));
  Message2::M14::M32* v24_0 = v22->add_f_6();
  Message2::M14::M32::M54* v25 = v24_0->mutable_f_2();
  v25->set_f_0(s->substr(0, 3166));
  Message2::M14::M32::M55* v26 = v24_0->mutable_f_3();
  v26->set_f_1(0xfd861c193b702cc8);
  Message2::M14::M32::M55::M66* v27_0 = v26->add_f_6();
  v27_0->add_f_2(s->substr(0, 8));
  v27_0->set_f_5(0x999a7f78ff6f2a45);
  v27_0->set_f_3(0.803907);
  Message2::M14::M32::M55::M82* v28 = v26->mutable_f_8();
  v28->set_f_0(0xd738beb);
  Message2::M14::M27* v29 = v22->mutable_f_4();
  (void)v29;  // Suppresses clang-tidy.
  Message2::M14::M20* v30 = v22->mutable_f_2();
  (void)v30;  // Suppresses clang-tidy.
  Message2::M9* v31 = message->mutable_f_61();
  Message2::M9::M29* v32 = v31->mutable_f_2();
  (void)v32;  // Suppresses clang-tidy.
  message->set_f_10(0.875560);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(0x81606);
  message->set_f_32(0x1b);
  message->set_f_9(0x27643b7a1dcd339);
  message->set_f_7(0x43);
  message->set_f_21(true);
  message->set_f_18(0x66bb757c80014c81);
  Message2::M13* v0_0 = message->add_f_65();
  Message2::M13::M25* v1 = v0_0->mutable_f_2();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M13::M40* v2 = v0_0->mutable_f_3();
  v2->set_f_1(0x2203c50);
  Message2::M13::M40::M56* v3 = v2->mutable_f_5();
  Message2::M13::M40::M56::M86* v4 = v3->mutable_f_3();
  (void)v4;  // Suppresses clang-tidy.
  v3->set_f_0(s->substr(0, 5));
  v2->set_f_0(0x36bf);
  Message2::M13::M45* v5 = v0_0->mutable_f_4();
  v5->set_f_5(0x7e415fb0);
  v5->set_f_0(0x21a847a8);
  v5->set_f_3(0x56a3e25bb7135dc6);
  v5->set_f_12(0.237797);
  v5->set_f_2(s->substr(0, 63));
  v5->set_f_10(0x8ae1f0d772);
  v5->set_f_14(0x6c09d6ad);
  v5->set_f_6(0x7b);
  v5->set_f_13(s->substr(0, 6));
  message->set_f_10(0.833898);
  Message2::M3* v6 = message->mutable_f_52();
  Message2::M3::M42* v7_0 = v6->add_f_3();
  v7_0->set_f_0(0x3c4e8987c4324d4e);
  v7_0->set_f_3(0x169b34f1);
  Message2::M12* v8 = message->mutable_f_64();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_15(0x4dac6f5);
  Message2::M8* v9 = message->mutable_f_60();
  Message2::M8::M46* v10 = v9->mutable_f_4();
  v10->set_f_2(0x53);
  v10->set_f_6(0xbfadf);
  v10->set_f_5(0.880732);
  v10->set_f_1(0x1e9061);
  v10->set_f_0(0xd4444bf1178a626f);
  v9->set_f_0(0x4e);
  message->add_f_27(Message2::E2_CONST_2);
  message->set_f_4(0xbd66e59500e12706);
  message->set_f_30(0x1a);
  message->set_f_3(false);
  Message2::M15* v11_0 = message->add_f_67();
  v11_0->set_f_0(s->substr(0, 1));
  message->set_f_31(0x6021a509dedd91f6);
  Message2::M5* v12 = message->mutable_f_55();
  v12->set_f_1(s->substr(0, 19));
  v12->set_f_5(0x6e4e170069386d3c);
  v12->set_f_2(0x54c40da);
  Message2::M5::M24* v13_0 = v12->add_f_10();
  v13_0->set_f_0(Message2::M5::M24::E9_CONST_2);
  Message2::M5::M24::M58* v14 = v13_0->mutable_f_3();
  Message2::M5::M24::M58::M67* v15_0 = v14->add_f_5();
  v15_0->set_f_0(0x3c9c3961bc8c);
  v14->set_f_1(true);
  v14->set_f_2(0x5ce4f8b);
  message->set_f_17(0xf82b445);
  message->set_f_20(0xd9f5987206af4a54);
  message->set_f_19(true);
  message->set_f_13(0xaad1a3c4eb875003);
  Message2::M11* v16 = message->mutable_f_63();
  Message2::M11::M26* v17 = v16->mutable_f_4();
  v17->add_f_0(Message2::M11::M26::E10_CONST_5);
  v17->add_f_0(Message2::M11::M26::E10_CONST_1);
  v16->set_f_2(false);
  Message2::M11::M33* v18_0 = v16->add_f_6();
  v18_0->add_f_0(Message2::M11::M33::E17_CONST_3);
  Message2::M11::M33::M59* v19_0 = v18_0->add_f_5();
  v19_0->set_f_0(true);
  Message2::M11::M33::M59::M92* v20 = v19_0->mutable_f_4();
  v20->set_f_4(0x4aad244a9db58943);
  v20->set_f_3(0x14f5b6);
  v20->set_f_1(0x1f);
  v20->set_f_0(false);
  message->set_f_24(0.535122);
  message->set_f_12(s->substr(0, 4));
  Message2::M9* v21 = message->mutable_f_61();
  v21->set_f_0(0x1c);
  Message2::M9::M43* v22 = v21->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
  Message2::M10* v23 = message->mutable_f_62();
  Message2::M10::M18* v24 = v23->mutable_f_2();
  Message2::M10::M18::M61* v25 = v24->mutable_f_5();
  (void)v25;  // Suppresses clang-tidy.
  v24->set_f_1(0x7e);
  Message2::M2* v26 = message->mutable_f_51();
  v26->set_f_3(0x616f0fea6601cf47);
  Message2::M2::M30* v27 = v26->mutable_f_8();
  v27->set_f_25(0xae9759a1f3238b9e);
  v27->set_f_19(0x7a);
  v27->set_f_21(0x9519403);
  v27->set_f_29(0x9df0716);
  v27->add_f_28(Message2::M2::M30::E16_CONST_2);
  v27->set_f_17(0x1fcd);
  v27->set_f_11(Message2::M2::M30::E12_CONST_4);
  v27->set_f_27(0xcf7a4);
  v27->set_f_1(s->substr(0, 33));
  v27->set_f_20(0x61);
  v27->set_f_5(false);
  v27->add_f_9(Message2::M2::M30::E11_CONST_4);
  Message2::M2::M30::M64* v28_0 = v27->add_f_43();
  Message2::M2::M30::M64::M81* v29_0 = v28_0->add_f_3();
  v29_0->set_f_0(0.158659);
  Message2::M2::M30::M64::M81::M103* v30 = v29_0->mutable_f_7();
  v30->set_f_2(0xed57bef);
  v30->set_f_0(0x9aee);
  v30->set_f_5(s->substr(0, 17));
  v30->set_f_1(0x68);
  v30->set_f_4(Message2::M2::M30::M64::M81::M103::E31_CONST_3);
  v30->set_f_3(0xd8b75f381d1e4c31);
  v28_0->set_f_0(0x9094c08b8a10df17);
  v27->set_f_18(0x53f722ab);
  v27->set_f_15(0xddca99459124e502);
  v27->set_f_2(0x45);
  v27->set_f_8(0xce1b8226d8fd095);
  v27->add_f_12(Message2::M2::M30::E13_CONST_4);
  v27->set_f_10(0xb11e2d5);
  v27->set_f_0(0x70);
  v27->add_f_22(Message2::M2::M30::E14_CONST_2);
  v27->set_f_7(false);
  v26->set_f_1(0x5e);
  v26->set_f_4(0xc3bb5b25e0f45bc5);
  v26->set_f_0(Message2::M2::E3_CONST_5);
  Message2::M2::M38* v31_0 = v26->add_f_10();
  v31_0->set_f_2(0.697755);
  Message2::M2::M38::M47* v32 = v31_0->mutable_f_7();
  v32->set_f_0(false);
  v32->set_f_2(0x7ceeaa7c2b5933f7);
  v32->set_f_1(Message2::M2::M38::M47::E19_CONST_2);
  Message2::M2::M38::M62* v33 = v31_0->mutable_f_10();
  Message2::M2::M38::M62::M78* v34 = v33->mutable_f_3();
  Message2::M2::M38::M62::M78::M107* v35 = v34->mutable_f_4();
  v35->set_f_0(0.933384);
  v33->add_f_0(Message2::M2::M38::M62::E21_CONST_3);
  v31_0->set_f_3(Message2::M2::M38::E18_CONST_3);
  message->set_f_14(0x881dbc91f5d023b);
  message->set_f_26(s->substr(0, 2663));
  Message2::M4* v36 = message->mutable_f_53();
  v36->set_f_5(s->substr(0, 31));
  v36->set_f_3(0x79);
  v36->set_f_0(true);
  v36->set_f_2(s->substr(0, 2114));
  Message2::M4::M37* v37 = v36->mutable_f_15();
  Message2::M4::M37::M60* v38 = v37->mutable_f_3();
  Message2::M4::M37::M60::M70* v39 = v38->mutable_f_3();
  v39->set_f_0(0x4f);
  Message2::M4::M37::M60::M70::M106* v40_0 = v39->add_f_4();
  (void)v40_0;  // Suppresses clang-tidy.
  v39->set_f_1(0x48);
  v36->set_f_6(s->substr(0, 18));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M16* v0_0 = message->add_f_69();
  v0_0->set_f_1(0x69a6c7f77009a3e8);
  Message2::M16::M35* v1_0 = v0_0->add_f_5();
  Message2::M16::M35::M51* v2 = v1_0->mutable_f_2();
  Message2::M16::M35::M51::M87* v3_0 = v2->add_f_3();
  Message2::M16::M35::M51::M87::M102* v4_0 = v3_0->add_f_6();
  v4_0->set_f_0(0xe);
  v3_0->add_f_0(Message2::M16::M35::M51::M87::E26_CONST_1);
  Message2::M16::M35::M51::M91* v5_0 = v2->add_f_5();
  (void)v5_0;  // Suppresses clang-tidy.
  v1_0->set_f_0(s->substr(0, 24));
  v0_0->set_f_2(true);
  Message2::M16::M44* v6 = v0_0->mutable_f_6();
  v6->set_f_2(0.065127);
  v6->set_f_1(0x6f);
  v6->set_f_3(0xc);
  message->set_f_11(0xc);
  message->set_f_28(0xaccc84e);
  message->add_f_1(Message2::E1_CONST_5);
  message->set_f_31(0x9ddc51812bab4793);
  Message2::M8* v7 = message->mutable_f_60();
  v7->set_f_0(0x7d);
  Message2::M8::M46* v8 = v7->mutable_f_4();
  v8->set_f_0(0xc81b13b19a0c0160);
  v8->set_f_5(0.197640);
  v8->set_f_2(0x6e);
  message->set_f_2(0xd9e78b608a551b87);
  Message2::M9* v9 = message->mutable_f_61();
  Message2::M9::M43* v10 = v9->mutable_f_3();
  v10->set_f_0(s->substr(0, 24));
  Message2::M9::M29* v11 = v9->mutable_f_2();
  v11->set_f_0(0x6f);
  message->set_f_24(0.727077);
  message->set_f_9(0x413e6653a4c8c255);
  Message2::M11* v12 = message->mutable_f_63();
  v12->set_f_2(false);
  Message2::M11::M26* v13 = v12->mutable_f_4();
  (void)v13;  // Suppresses clang-tidy.
  Message2::M11::M33* v14_0 = v12->add_f_6();
  Message2::M11::M33::M59* v15_0 = v14_0->add_f_5();
  Message2::M11::M33::M59::M90* v16_0 = v15_0->add_f_3();
  (void)v16_0;  // Suppresses clang-tidy.
  v15_0->set_f_0(true);
  Message2::M11::M33::M59::M92* v17 = v15_0->mutable_f_4();
  v17->set_f_2(0x2b03b4e);
  v17->set_f_5(0x9cae1c09721e3e3d);
  v17->set_f_0(true);
  v17->set_f_4(0x426e658d953cdfeb);
  v17->set_f_1(0x4c);
  v17->set_f_3(0x83331);
  Message2::M12* v18 = message->mutable_f_64();
  Message2::M12::M34* v19_0 = v18->add_f_4();
  v19_0->set_f_0(s->substr(0, 27));
  message->set_f_17(0x30cb1);
  Message2::M10* v20 = message->mutable_f_62();
  Message2::M10::M18* v21 = v20->mutable_f_2();
  v21->set_f_0(0x6a61406bf);
  v21->set_f_1(0x25);
  v20->set_f_0(false);
  Message2::M14* v22 = message->mutable_f_66();
  Message2::M14::M28* v23 = v22->mutable_f_5();
  v23->set_f_3(false);
  v23->set_f_1(0x5719173);
  v23->set_f_5(0x8e86b80a304d69e5);
  v23->set_f_2(0x4201598);
  Message2::M14::M20* v24 = v22->mutable_f_2();
  (void)v24;  // Suppresses clang-tidy.
  Message2::M14::M27* v25 = v22->mutable_f_4();
  (void)v25;  // Suppresses clang-tidy.
  Message2::M14::M23* v26 = v22->mutable_f_3();
  v26->set_f_0(0x55706165);
  message->set_f_32(0xf9b3a);
  message->set_f_16(0xfee2c40a0d401e5e);
  Message2::M7* v27 = message->mutable_f_57();
  v27->set_f_0(0x3ca0);
  message->set_f_12(s->substr(0, 23));
  message->set_f_0(0x229c0ca);
  message->set_f_13(0xefd3901bc757a8ab);
  message->set_f_7(0x76);
  message->set_f_33(false);
  Message2::M2* v28 = message->mutable_f_51();
  Message2::M2::M38* v29_0 = v28->add_f_10();
  v29_0->set_f_1(s->substr(0, 25));
  Message2::M2::M38::M62* v30 = v29_0->mutable_f_10();
  Message2::M2::M38::M62::M78* v31 = v30->mutable_f_3();
  v31->set_f_0(0x4033e27a8ca91eba);
  v29_0->set_f_2(0.776664);
  v29_0->set_f_3(Message2::M2::M38::E18_CONST_5);
  Message2::M2::M17* v32 = v28->mutable_f_7();
  v32->set_f_0(s->substr(0, 20));
  v32->set_f_3(0.050372);
  v28->set_f_4(0x17de8bd9b646d77c);
  v28->set_f_3(0xb047dc3216ef8d96);
  Message2::M2::M36* v33_0 = v28->add_f_9();
  v33_0->set_f_0(0x2d);
  v28->set_f_1(0x8cd914c);
  v28->set_f_2(0x20);
  message->set_f_29(0x66);
  Message2::M15* v34_0 = message->add_f_67();
  (void)v34_0;  // Suppresses clang-tidy.
  message->set_f_18(0x6fb1ac2c2c48fc1);
  message->set_f_10(0.589306);
  message->set_f_14(0xd5dc9721dd2f2aa9);
  Message2::M6* v35 = message->mutable_f_56();
  Message2::M6::M41* v36 = v35->mutable_f_9();
  v36->set_f_0(0xc020d951c81d9ba2);
  v36->set_f_1(0x66);
  v36->set_f_4(0x46);
  Message2::M6::M41::M53* v37 = v36->mutable_f_9();
  Message2::M6::M41::M53::M79* v38_0 = v37->add_f_5();
  v38_0->set_f_0(s->substr(0, 4));
  v38_0->set_f_3(s->substr(0, 23));
  v38_0->set_f_4(0x4a104c8624770c46);
  v38_0->set_f_1(0x32faec7e26d6a30f);
  Message2::M6::M41::M53::M74* v39 = v37->mutable_f_4();
  (void)v39;  // Suppresses clang-tidy.
  v37->add_f_0(Message2::M6::M41::M53::E20_CONST_4);
  v35->set_f_2(0x1db396);
  v35->set_f_0(0x52f70e5f);
  Message2::M6::M22* v40 = v35->mutable_f_7();
  v40->set_f_0(0xe1f90c1f4be90514);
  message->set_f_19(true);
  message->set_f_22(0x78);
  message->set_f_23(0xb391c789700a8795);
  message->set_f_6(0.018410);
  message->set_f_21(true);
  message->set_f_4(0xd1307d8bcd2751bc);
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
