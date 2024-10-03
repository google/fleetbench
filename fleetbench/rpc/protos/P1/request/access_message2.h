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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message2.pb.h"

namespace fleetbench::rpc::P1::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_4(s->substr(0, 104));
  Message2::M7* v0 = message->mutable_f_59();
  v0->set_f_0(0x46e1b2d2);
  message->set_f_17(0x48915c79eac5df7);
  message->set_f_27(0x3660031e5c881061);
  message->set_f_13(0x4794a54fc85b0db4);
  message->set_f_28(s->substr(0, 19));
  message->set_f_24(s->substr(0, 5));
  Message2::M10* v1 = message->mutable_f_66();
  Message2::M10::M22* v2 = v1->mutable_f_4();
  v2->set_f_6(s->substr(0, 3));
  v2->set_f_2(0x351b);
  v2->set_f_0(0.140326);
  v2->set_f_5(0x75d01507);
  v2->set_f_1(0x2ef3a13a664b6004);
  v2->set_f_3(0.698550);
  Message2::M10::M21* v3 = v1->mutable_f_3();
  Message2::M10::M21::M33* v4 = v3->mutable_f_4();
  v4->set_f_0(0x60);
  v4->set_f_1(0x79af394d);
  v4->set_f_3(false);
  v4->set_f_4(s->substr(0, 6));
  Message2::M10::M21::M33::M34* v5 = v4->mutable_f_11();
  v5->set_f_0(0x432b7383b0815f63);
  Message2::M4* v6 = message->mutable_f_56();
  Message2::M4::M15* v7 = v6->mutable_f_4();
  Message2::M4::M15::M26* v8 = v7->mutable_f_3();
  v8->set_f_1(s->substr(0, 43));
  v8->set_f_2(0x1e67eb8850b6e11);
  v8->set_f_0(0x13b6);
  Message2::M4::M15::M29* v9 = v7->mutable_f_4();
  v9->set_f_1(0x9f9b8);
  Message2::M4::M15::M29::M37* v10 = v9->mutable_f_6();
  v10->set_f_5(s->substr(0, 2));
  v10->set_f_4(0x5a02e34c055e0358);
  v10->set_f_3(0xf8b9b63);
  Message2::M4::M15::M29::M37::M42* v11 = v10->mutable_f_11();
  (void)v11;  // Suppresses clang-tidy.
  v10->set_f_2(0x1aa4);
  Message2::M4::M15::M29::M37::M41* v12 = v10->mutable_f_9();
  v12->set_f_2(false);
  v12->set_f_3(0x2afac57ae7c7e918);
  v12->set_f_0(s->substr(0, 2));
  v12->add_f_1(Message2::M4::M15::M29::M37::M41::E11_CONST_3);
  v10->set_f_1(0x240d7c7f81faff77);
  Message2::M4::M15::M29::M35* v13 = v9->mutable_f_5();
  Message2::M4::M15::M29::M35::M45* v14 = v13->mutable_f_10();
  (void)v14;  // Suppresses clang-tidy.
  v13->set_f_2(0x7cce108189a665ea);
  Message2::M4::M15::M29::M35::M44* v15 = v13->mutable_f_9();
  v15->set_f_0(false);
  v15->set_f_1(0x736b1b4776e58f4);
  Message2::M4::M15::M29::M35::M40* v16 = v13->mutable_f_6();
  v16->set_f_0(0x823004f);
  v13->set_f_3(s->substr(0, 462));
  v13->add_f_0(Message2::M4::M15::M29::M35::E9_CONST_3);
  v9->set_f_0(0x2b79);
  v7->set_f_0(0x361e9dd71e0564b1);
  v6->set_f_0(true);
  Message2::M11* v17 = message->mutable_f_68();
  Message2::M11::M17* v18 = v17->mutable_f_4();
  v18->set_f_0(0x75b9052c65eae450);
  v18->set_f_1(0.477350);
  v18->set_f_2(0x6ba68fa75e2ef720);
  v17->set_f_0(0x7ca0fed986aa2712);
  Message2::M11::M18* v19 = v17->mutable_f_6();
  v19->set_f_0(0x707a203d3b069c7d);
  Message2::M11::M18::M30* v20 = v19->mutable_f_2();
  v20->set_f_0(0x9fea9);
  v20->set_f_1(s->substr(0, 8));
  message->set_f_26(0xccd8402);
  message->set_f_22(0x25bc98ce00ff579e);
  message->set_f_3(s->substr(0, 466));
  message->set_f_20(0x6fedd17fe0ff01ad);
  Message2::M1* v21 = message->mutable_f_51();
  v21->set_f_0(s->substr(0, 23));
  message->set_f_15(Message2::E2_CONST_3);
  message->set_f_12(0x29c6892ab061f3cd);
  message->set_f_18(s->substr(0, 13));
  message->set_f_29(s->substr(0, 9));
  Message2::M6* v22 = message->mutable_f_58();
  v22->set_f_0(s->substr(0, 504));
  Message2::M12* v23 = message->mutable_f_70();
  v23->set_f_2(s->substr(0, 2922));
  Message2::M12::M19* v24 = v23->mutable_f_12();
  v24->set_f_0(s->substr(0, 6));
  v23->set_f_0(0x34f674aeb15f6f5d);
  v23->set_f_4(0x39359bb);
  message->set_f_16(s->substr(0, 350));
  Message2::M5* v25 = message->mutable_f_57();
  (void)v25;  // Suppresses clang-tidy.
  message->set_f_6(false);
  message->set_f_5(0x6d34f745778ee2de);
  message->add_f_8(Message2::E1_CONST_4);
  message->set_f_23(0x267d95f2);
  Message2::M3* v26 = message->mutable_f_54();
  Message2::M3::M16* v27 = v26->mutable_f_4();
  v27->set_f_1(0x33b35cf41a1e627c);
  v27->set_f_0(s->substr(0, 9));
  Message2::M3::M16::M27* v28 = v27->mutable_f_9();
  v28->set_f_1(0x12f6646a3c5ed428);
  v28->set_f_4(0x5abd3d56826cb32b);
  v28->set_f_2(s->substr(0, 8));
  v28->set_f_3(0x8e06a6);
  v28->set_f_0(0x1e10cd37);
  Message2::M3::M16::M25* v29 = v27->mutable_f_6();
  v29->set_f_1(0x5bbf41bf0f446283);
  v29->set_f_0(0x7fb6107b6f2ad381);
  v29->set_f_2(0x31b29f8260833323);
  Message2::M3::M16::M24* v30 = v27->mutable_f_5();
  Message2::M3::M16::M24::M36* v31 = v30->mutable_f_9();
  v31->set_f_0(0xcfa90);
  v30->set_f_1(0x6f68fec722cb6b58);
  v30->set_f_0(0x42038bdeec9d4748);
  v30->set_f_2(0x7ff3d00);
  v27->set_f_2(0.977558);
  v26->set_f_0(true);
  message->set_f_11(s->substr(0, 174));
  message->add_f_19(Message2::E3_CONST_1);
  message->set_f_10(s->substr(0, 292));
  Message2::M9* v32 = message->mutable_f_64();
  v32->set_f_0(0x8a9fd);
  v32->set_f_3(0x4c6add705d79f6e7);
  v32->set_f_1(0x7fa616453e5a2b9a);
  v32->set_f_2(s->substr(0, 1));
  message->set_f_25(0x5c7040b252a1c17c);
  message->set_f_7(0x43ea2f6956ff486a);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M5* v0 = message->mutable_f_57();
  v0->set_f_0(s->substr(0, 5));
  message->set_f_9(s->substr(0, 1));
  message->set_f_20(0x7f2c81dccdf69ff2);
  message->set_f_18(s->substr(0, 22));
  Message2::M2* v1 = message->mutable_f_52();
  Message2::M2::E4 array_0[21] = {
      Message2::M2::E4_CONST_1, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_2, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_3, Message2::M2::E4_CONST_5,
      Message2::M2::E4_CONST_1, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_4, Message2::M2::E4_CONST_5,
      Message2::M2::E4_CONST_3, Message2::M2::E4_CONST_4,
      Message2::M2::E4_CONST_4, Message2::M2::E4_CONST_4,
      Message2::M2::E4_CONST_5, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_5, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_1, Message2::M2::E4_CONST_1,
      Message2::M2::E4_CONST_1,
  };
  for (auto v : array_0) {
    v1->add_f_0(v);
  }
  message->set_f_17(0x351708aeefd7ce1f);
  message->set_f_12(0x6330058241e11bed);
  Message2::M11* v2 = message->mutable_f_68();
  Message2::M11::M18* v3 = v2->mutable_f_6();
  Message2::M11::M18::M30* v4 = v3->mutable_f_2();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M11::M13* v5 = v2->mutable_f_3();
  v5->set_f_6(0x76);
  v5->set_f_19(0x3f9e463f2c885efe);
  v5->set_f_23(0x4a);
  v5->set_f_18(true);
  v5->set_f_10(s->substr(0, 111));
  v5->set_f_17(0x1f2205);
  v5->set_f_13(s->substr(0, 91));
  v5->set_f_20(s->substr(0, 2914));
  v5->set_f_30(s->substr(0, 2));
  v5->set_f_8(0x5bd1271f7bc63b4f);
  v5->set_f_0(s->substr(0, 11));
  v5->set_f_2(0x15c7cb3059a80384);
  v5->add_f_7(Message2::M11::M13::E6_CONST_1);
  v5->set_f_4(0x263984d6ef7ffb42);
  v5->set_f_11(0x9e75455);
  v5->set_f_3(false);
  v5->set_f_1(0x6e2ef86fd2137392);
  v5->set_f_22(0x76560a6b63fdb63f);
  v5->set_f_31(s->substr(0, 11));
  v5->set_f_5(0x32ddca6c2fe70b7e);
  v5->set_f_25(s->substr(0, 6));
  v5->set_f_16(s->substr(0, 20));
  v5->set_f_28(0x38a4d5a433d35115);
  v2->set_f_0(0x6944ffcdff0df47b);
  Message2::M11::M17* v6 = v2->mutable_f_4();
  v6->set_f_3(s->substr(0, 14));
  v6->set_f_1(0.303084);
  v6->set_f_0(0x6756c39fe61d628d);
  message->set_f_6(true);
  message->set_f_2(0x449607ff76bbcd0f);
  Message2::M10* v7 = message->mutable_f_66();
  v7->add_f_0(Message2::M10::E5_CONST_1);
  Message2::M10::M21* v8 = v7->mutable_f_3();
  v8->set_f_0(0x20);
  Message2::M10::M21::M32* v9 = v8->mutable_f_3();
  Message2::M10::M21::M32::M39* v10 = v9->mutable_f_2();
  v10->set_f_1(0x1aac1d);
  v10->set_f_0(s->substr(0, 12));
  Message2::M10::M21::M32::M39::M43* v11 = v10->mutable_f_3();
  v11->set_f_0(0xad98804);
  v9->add_f_0(Message2::M10::M21::M32::E8_CONST_5);
  Message2::M10::M21::M33* v12 = v8->mutable_f_4();
  Message2::M10::M21::M33::M34* v13 = v12->mutable_f_11();
  v13->set_f_0(0xcaa0fc460b70415);
  v12->set_f_4(s->substr(0, 15));
  v12->set_f_2(false);
  v12->set_f_3(true);
  v12->set_f_1(0x6cebdc8f);
  v12->set_f_0(0x11ddc2);
  Message2::M6* v14 = message->mutable_f_58();
  v14->set_f_0(s->substr(0, 9));
  message->set_f_7(0x2a22109155f16387);
  message->set_f_15(Message2::E2_CONST_3);
  message->set_f_10(s->substr(0, 15));
  message->set_f_5(0x2a97ce51d92d4f4c);
  message->add_f_19(Message2::E3_CONST_5);
  Message2::M1* v15 = message->mutable_f_51();
  v15->set_f_0(s->substr(0, 2));
  Message2::M1::M20* v16 = v15->mutable_f_3();
  Message2::M1::M20::M28* v17 = v16->mutable_f_4();
  v17->set_f_0(s->substr(0, 30));
  v16->add_f_0(Message2::M1::M20::E7_CONST_5);
  message->set_f_23(0x607df335);
  message->set_f_29(s->substr(0, 8));
  message->set_f_13(0x3f5bce8bd1c92cea);
  message->set_f_21(0x5);
  message->set_f_3(s->substr(0, 16));
  Message2::M8* v18 = message->mutable_f_62();
  Message2::M8::M23* v19 = v18->mutable_f_2();
  v19->set_f_15(0x61f);
  v19->set_f_17(s->substr(0, 4));
  v19->set_f_8(0x143a283ace41f3d3);
  v19->set_f_1(0x2ebd2c5aaf5e1f05);
  v19->set_f_4(0x3d709828b48dd428);
  v19->set_f_13(true);
  v19->set_f_5(0x5ea2dbcaf760af4c);
  v19->set_f_0(0x3a29c571);
  v19->set_f_7(0x65d02e1b3cf823e8);
  v19->set_f_10(0.240394);
  v19->set_f_16(0x1ea130037d687ee8);
  v19->set_f_11(0x3bbda548206cfe17);
  v19->set_f_3(s->substr(0, 13));
  v19->set_f_12(s->substr(0, 36));
  v19->set_f_6(0x1a7659aecd1d314d);
  v19->set_f_2(0x7e2e335979d1eec1);
  v18->set_f_0(0x2cef52e8);
  message->set_f_28(s->substr(0, 16));
  message->set_f_25(0x1e4735ce421b57ee);
  message->set_f_27(0x22b5aa6e6bcbae0d);
  Message2::M7* v20 = message->mutable_f_59();
  v20->set_f_0(0xa56d065);
  Message2::M12* v21 = message->mutable_f_70();
  v21->set_f_1(0x49);
  Message2::M12::M19* v22 = v21->mutable_f_12();
  v22->set_f_0(s->substr(0, 18));
  v21->set_f_4(0x4fa1eb34);
  v21->set_f_2(s->substr(0, 240));
  Message2::M9* v23 = message->mutable_f_64();
  v23->set_f_1(0xc0d231bfcea12ac);
  v23->set_f_2(s->substr(0, 14));
  Message2::M3* v24 = message->mutable_f_54();
  Message2::M3::M16* v25 = v24->mutable_f_4();
  v25->set_f_2(0.000480);
  Message2::M3::M16::M31* v26 = v25->mutable_f_10();
  v26->set_f_0(0xb6a3717dda4cbfa);
  v25->set_f_1(0x7275cfb912783b82);
  Message2::M3::M16::M25* v27 = v25->mutable_f_6();
  v27->set_f_1(0x410ba731f0f7cb3c);
  v27->set_f_0(0x7e9af028e100f242);
  v27->set_f_2(0x57bd8436154de8f);
  Message2::M3::M16::M27* v28 = v25->mutable_f_9();
  v28->set_f_0(0x688745ec);
  v28->set_f_2(s->substr(0, 18));
  v28->set_f_1(0x3b44dd843cd69385);
  v28->set_f_4(0xa15ae037e19ddf);
  Message2::M3::M16::M24* v29 = v25->mutable_f_5();
  v29->set_f_1(0x1d3f987dcc00d8c4);
  v29->set_f_2(0x85d5092);
  v29->set_f_0(0x554cb7f0993fefb5);
  v25->set_f_0(s->substr(0, 3));
  v24->set_f_0(true);
  message->set_f_1(0xde6dc);
  message->set_f_14(s->substr(0, 5));
  message->set_f_22(0x62e4f7266facdb65);
  message->add_f_8(Message2::E1_CONST_5);
  message->set_f_4(s->substr(0, 2));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(0x99c0a);
  message->set_f_3(s->substr(0, 22));
  message->set_f_5(0x600b125cf5384aee);
  message->set_f_22(0x7ced9e62755cef70);
  message->set_f_11(s->substr(0, 122));
  Message2::M7* v0 = message->mutable_f_59();
  v0->set_f_0(0x68ebfb5c);
  message->set_f_26(0xb74a383);
  Message2::M1* v1 = message->mutable_f_51();
  v1->set_f_0(s->substr(0, 5));
  Message2::M1::M20* v2 = v1->mutable_f_3();
  v2->add_f_0(Message2::M1::M20::E7_CONST_2);
  Message2::M1::M20::M28* v3 = v2->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  message->add_f_19(Message2::E3_CONST_5);
  Message2::M8* v4 = message->mutable_f_62();
  Message2::M8::M23* v5 = v4->mutable_f_2();
  v5->set_f_11(0x56686bb49aeee602);
  v5->set_f_8(0x33b48bdaaa20df2a);
  v5->set_f_10(0.393660);
  v5->set_f_13(false);
  v5->set_f_6(0x25c2ac96f44f56c3);
  v5->set_f_5(0x55605baff101821c);
  v5->set_f_15(0x295d);
  v5->set_f_17(s->substr(0, 3));
  v5->set_f_1(0x229cb77023468fdb);
  v5->set_f_14(true);
  v5->set_f_4(0x62c86f149ea469a0);
  v5->set_f_7(0x1eb2a6db8f173cf7);
  v4->set_f_0(0x1b7a5597);
  Message2::M10* v6 = message->mutable_f_66();
  v6->add_f_0(Message2::M10::E5_CONST_4);
  Message2::M10::M22* v7 = v6->mutable_f_4();
  v7->set_f_0(0.160151);
  v7->set_f_5(0x3a499d18);
  v7->set_f_3(0.524398);
  v7->set_f_6(s->substr(0, 125));
  v7->set_f_4(s->substr(0, 33));
  v7->set_f_1(0x449e27df3e3dc3f0);
  v7->set_f_2(0x183763);
  Message2::M10::M21* v8 = v6->mutable_f_3();
  Message2::M10::M21::M33* v9 = v8->mutable_f_4();
  v9->set_f_4(s->substr(0, 42));
  v9->set_f_3(true);
  v9->set_f_1(0x5f07d2b1);
  v9->set_f_0(0x6a8f42d);
  Message2::M10::M21::M33::M34* v10 = v9->mutable_f_11();
  (void)v10;  // Suppresses clang-tidy.
  v8->set_f_0(0x5b);
  Message2::M10::M21::M32* v11 = v8->mutable_f_3();
  Message2::M10::M21::M32::M39* v12 = v11->mutable_f_2();
  v12->set_f_1(0x1eeb7b);
  v12->set_f_0(s->substr(0, 4));
  v11->add_f_0(Message2::M10::M21::M32::E8_CONST_5);
  message->set_f_14(s->substr(0, 3));
  message->set_f_13(0x6d65caf8cb69c8a1);
  Message2::M5* v13 = message->mutable_f_57();
  v13->set_f_0(s->substr(0, 3));
  Message2::M9* v14 = message->mutable_f_64();
  v14->set_f_1(0x62d26dfa2bec816e);
  v14->set_f_3(0x432eae831b4d8d94);
  v14->set_f_0(0x4e);
  v14->set_f_2(s->substr(0, 18));
  message->set_f_18(s->substr(0, 7));
  message->set_f_17(0x4cb02de31463a078);
  message->set_f_15(Message2::E2_CONST_2);
  message->set_f_12(0x16d2c8807b3959db);
  message->set_f_7(0x763d0f24594bfe29);
  message->set_f_28(s->substr(0, 5));
  message->set_f_27(0x739f54eabf3eacb2);
  message->set_f_29(s->substr(0, 6));
  Message2::M6* v15 = message->mutable_f_58();
  v15->set_f_0(s->substr(0, 301));
  message->set_f_24(s->substr(0, 1));
  Message2::M4* v16 = message->mutable_f_56();
  Message2::M4::M15* v17 = v16->mutable_f_4();
  Message2::M4::M15::M26* v18 = v17->mutable_f_3();
  v18->set_f_1(s->substr(0, 361));
  v18->set_f_2(0x54cc8ccd637f640c);
  v18->set_f_0(0xee9903);
  v17->set_f_0(0x155bdd4ab8f9f5a);
  Message2::M3* v19 = message->mutable_f_54();
  Message2::M3::M16* v20 = v19->mutable_f_4();
  v20->set_f_1(0x43b48b45b8cef826);
  Message2::M3::M16::M25* v21 = v20->mutable_f_6();
  v21->set_f_0(0x18c7e9497e2359ee);
  v21->set_f_3(0x2e);
  v21->set_f_2(0x76a18314400dac89);
  v21->set_f_1(0x5484eec4661adf22);
  Message2::M3::M16::M27* v22 = v20->mutable_f_9();
  v22->set_f_3(0x22);
  v22->set_f_2(s->substr(0, 3544));
  v22->set_f_4(0x718013bcf3554f5d);
  v22->set_f_0(0x1605fdb6);
  v20->set_f_0(s->substr(0, 25));
  Message2::M3::M16::M31* v23 = v20->mutable_f_10();
  v23->set_f_0(0x3fac75cfd9cc96ed);
  Message2::M3::M16::M24* v24 = v20->mutable_f_5();
  v24->set_f_1(0x21c612aa95cd95dd);
  v24->set_f_0(0x25fc50381998e523);
  v24->set_f_2(0x72);
  Message2::M3::M16::M24::M36* v25 = v24->mutable_f_9();
  v25->set_f_0(0x187b93d);
  v19->set_f_0(true);
  message->set_f_10(s->substr(0, 3));
  message->set_f_4(s->substr(0, 9));
  message->set_f_6(true);
  Message2::M2* v26 = message->mutable_f_52();
  v26->add_f_0(Message2::M2::E4_CONST_1);
  message->set_f_1(0x26);
  Message2::M11* v27 = message->mutable_f_68();
  Message2::M11::M18* v28 = v27->mutable_f_6();
  Message2::M11::M18::M30* v29 = v28->mutable_f_2();
  v29->set_f_1(s->substr(0, 2));
  v28->set_f_0(0x737771d6bf8ec27c);
  Message2::M11::M13* v30 = v27->mutable_f_3();
  v30->add_f_15(0x6a);
  v30->set_f_28(0x729cc1415b9b52ee);
  v30->set_f_11(0x2d);
  v30->set_f_29(0x44);
  v30->set_f_3(false);
  v30->set_f_21(true);
  v30->add_f_7(Message2::M11::M13::E6_CONST_3);
  v30->set_f_27(0xadca53b);
  v30->set_f_8(0x389a5bdc4c307d41);
  v30->set_f_25(s->substr(0, 17));
  v30->set_f_1(0x1ed3a961655f734f);
  v30->set_f_5(0x33113d97cc276e78);
  v30->set_f_10(s->substr(0, 52));
  v30->set_f_2(0x3847a488f116a300);
  v30->set_f_13(s->substr(0, 35));
  v30->set_f_0(s->substr(0, 5));
  v30->set_f_12(0x4079cfdbdbf59037);
  v30->set_f_18(true);
  v30->set_f_31(s->substr(0, 2));
  v30->set_f_16(s->substr(0, 408));
  v30->set_f_26(0x32fa8bca);
  v30->set_f_20(s->substr(0, 325));
  v30->set_f_14(0x5976f6c4);
  v30->set_f_19(0x75313d20979262e2);
  v30->set_f_23(0x9228de);
  Message2::E1 array_0[21] = {
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_1,
      Message2::E1_CONST_1, Message2::E1_CONST_4, Message2::E1_CONST_3,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_5,
      Message2::E1_CONST_2, Message2::E1_CONST_5, Message2::E1_CONST_1,
      Message2::E1_CONST_1, Message2::E1_CONST_5, Message2::E1_CONST_2,
      Message2::E1_CONST_3, Message2::E1_CONST_5, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_2, Message2::E1_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_8(v);
  }
  message->set_f_2(0x77e9ea3529ca1e61);
  message->set_f_21(0x76);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M1* v0 = message->mutable_f_51();
  Message2::M1::M20* v1 = v0->mutable_f_3();
  Message2::M1::M20::M28* v2 = v1->mutable_f_4();
  v2->set_f_0(s->substr(0, 7));
  Message2::M1::M20::E7 array_0[22] = {
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_1,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_3,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_5,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_3,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_2, Message2::M1::M20::E7_CONST_1,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_3, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_4, Message2::M1::M20::E7_CONST_3,
      Message2::M1::M20::E7_CONST_4, Message2::M1::M20::E7_CONST_2,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_2,
  };
  for (auto v : array_0) {
    v1->add_f_0(v);
  }
  Message2::M10* v3 = message->mutable_f_66();
  v3->add_f_0(Message2::M10::E5_CONST_4);
  Message2::M10::M21* v4 = v3->mutable_f_3();
  Message2::M10::M21::M32* v5 = v4->mutable_f_3();
  Message2::M10::M21::M32::M39* v6 = v5->mutable_f_2();
  v6->set_f_0(s->substr(0, 171));
  v6->set_f_1(0x317d056);
  Message2::M10::M21::M32::E8 array_1[21] = {
      Message2::M10::M21::M32::E8_CONST_2, Message2::M10::M21::M32::E8_CONST_2,
      Message2::M10::M21::M32::E8_CONST_4, Message2::M10::M21::M32::E8_CONST_4,
      Message2::M10::M21::M32::E8_CONST_1, Message2::M10::M21::M32::E8_CONST_3,
      Message2::M10::M21::M32::E8_CONST_1, Message2::M10::M21::M32::E8_CONST_3,
      Message2::M10::M21::M32::E8_CONST_2, Message2::M10::M21::M32::E8_CONST_1,
      Message2::M10::M21::M32::E8_CONST_3, Message2::M10::M21::M32::E8_CONST_3,
      Message2::M10::M21::M32::E8_CONST_2, Message2::M10::M21::M32::E8_CONST_1,
      Message2::M10::M21::M32::E8_CONST_1, Message2::M10::M21::M32::E8_CONST_2,
      Message2::M10::M21::M32::E8_CONST_5, Message2::M10::M21::M32::E8_CONST_3,
      Message2::M10::M21::M32::E8_CONST_5, Message2::M10::M21::M32::E8_CONST_4,
      Message2::M10::M21::M32::E8_CONST_4,
  };
  for (auto v : array_1) {
    v5->add_f_0(v);
  }
  v4->set_f_0(0x2236f9e);
  Message2::M10::M22* v7 = v3->mutable_f_4();
  v7->set_f_6(s->substr(0, 31));
  v7->set_f_1(0x1118a552e2af874d);
  v7->set_f_4(s->substr(0, 215));
  v7->set_f_2(0xdee9fb6);
  v7->set_f_5(0x10c7e99f);
  Message2::M8* v8 = message->mutable_f_62();
  Message2::M8::M23* v9 = v8->mutable_f_2();
  v9->set_f_5(0x2ec0b952dfb67cc4);
  v9->set_f_10(0.286703);
  v9->set_f_6(0x3bea7547d010111c);
  v9->set_f_14(false);
  v9->set_f_9(s->substr(0, 8));
  v9->set_f_2(0x694258495a6dddf9);
  v9->set_f_4(0x2912e29563bb1c45);
  v9->set_f_11(0x1b3c12b96673910f);
  v9->set_f_8(0x2140b8f7233fd59d);
  v9->set_f_17(s->substr(0, 8));
  v9->set_f_7(0xada9cefff56840e);
  v9->set_f_3(s->substr(0, 4));
  v9->set_f_13(true);
  v9->set_f_12(s->substr(0, 17));
  v9->set_f_15(0x372e);
  v8->set_f_0(0x3a4a44ef);
  message->set_f_17(0x2e9f859bc7b311d3);
  message->set_f_9(s->substr(0, 17));
  message->set_f_13(0x6ade85024dc61eb5);
  message->set_f_26(0x18);
  message->set_f_4(s->substr(0, 22));
  message->set_f_22(0xc9cf28bbd6cf31e);
  message->set_f_28(s->substr(0, 6));
  Message2::M9* v10 = message->mutable_f_64();
  v10->set_f_2(s->substr(0, 7));
  v10->set_f_0(0x7b);
  v10->set_f_1(0x59369fa24b6c9f5e);
  message->set_f_7(0x3de7913dfd1e6711);
  message->set_f_1(0x3e83);
  Message2::M2* v11 = message->mutable_f_52();
  v11->add_f_0(Message2::M2::E4_CONST_3);
  message->set_f_27(0x47af8bb97bde5a52);
  Message2::M5* v12 = message->mutable_f_57();
  v12->set_f_0(s->substr(0, 1928));
  Message2::M5::M14* v13 = v12->mutable_f_3();
  v13->set_f_0(0x2a48);
  message->set_f_12(0x1b1776ff5e581d5a);
  message->set_f_2(0x47111606f8418827);
  message->add_f_19(Message2::E3_CONST_3);
  Message2::M3* v14 = message->mutable_f_54();
  Message2::M3::M16* v15 = v14->mutable_f_4();
  v15->set_f_0(s->substr(0, 452));
  v15->set_f_2(0.684368);
  Message2::M3::M16::M27* v16 = v15->mutable_f_9();
  v16->set_f_1(0x6e19f0884aecdba2);
  v16->set_f_2(s->substr(0, 29));
  v16->set_f_0(0x2a4c8ad3);
  v16->set_f_3(0x3);
  v15->set_f_1(0x63eb056d9203d1a);
  Message2::M3::M16::M25* v17 = v15->mutable_f_6();
  v17->set_f_0(0x73d8238b51bbbeed);
  v17->set_f_3(0xf5026);
  v17->set_f_1(0x2cf387ad426a96dd);
  v17->set_f_2(0x117d62e49f2ab6e7);
  Message2::M3::M16::M24* v18 = v15->mutable_f_5();
  v18->set_f_1(0x4ed24fdfa867018b);
  v18->set_f_0(0x7c31342b3a8d1107);
  v18->set_f_2(0x65);
  Message2::M3::M16::M24::M36* v19 = v18->mutable_f_9();
  v19->set_f_0(0x38bd376);
  v14->set_f_0(false);
  message->set_f_3(s->substr(0, 6));
  Message2::M6* v20 = message->mutable_f_58();
  (void)v20;  // Suppresses clang-tidy.
  message->set_f_29(s->substr(0, 2));
  message->set_f_23(0x682c5e42);
  message->set_f_15(Message2::E2_CONST_3);
  message->set_f_0(0x38);
  message->set_f_21(0x1fd61d4);
  message->set_f_16(s->substr(0, 9));
  message->set_f_10(s->substr(0, 1));
  message->set_f_11(s->substr(0, 29));
  message->set_f_20(0x6f9a59acbb74c61e);
  message->add_f_8(Message2::E1_CONST_1);
  message->set_f_18(s->substr(0, 3068));
  Message2::M11* v21 = message->mutable_f_68();
  Message2::M11::M18* v22 = v21->mutable_f_6();
  Message2::M11::M18::M30* v23 = v22->mutable_f_2();
  v23->set_f_1(s->substr(0, 336));
  v22->set_f_0(0x7747a611ce1d6542);
  Message2::M11::M17* v24 = v21->mutable_f_4();
  v24->set_f_2(0x6d39344dff1bffa2);
  v24->set_f_3(s->substr(0, 17));
  Message2::M11::M13* v25 = v21->mutable_f_3();
  Message2::M11::M13::E6 array_2[9] = {
      Message2::M11::M13::E6_CONST_5, Message2::M11::M13::E6_CONST_3,
      Message2::M11::M13::E6_CONST_2, Message2::M11::M13::E6_CONST_4,
      Message2::M11::M13::E6_CONST_5, Message2::M11::M13::E6_CONST_3,
      Message2::M11::M13::E6_CONST_1, Message2::M11::M13::E6_CONST_2,
      Message2::M11::M13::E6_CONST_3,
  };
  for (auto v : array_2) {
    v25->add_f_7(v);
  }
  v25->set_f_1(0x2d0cf6be9023a24);
  v25->set_f_14(0x1698c283);
  v25->set_f_0(s->substr(0, 14));
  v25->set_f_10(s->substr(0, 3));
  v25->set_f_31(s->substr(0, 4));
  v25->set_f_27(0x75cde00);
  v25->set_f_25(s->substr(0, 2));
  v25->set_f_13(s->substr(0, 260));
  v25->set_f_21(false);
  v25->set_f_19(0x1d7aac8781eccbf3);
  v25->set_f_20(s->substr(0, 216));
  v25->set_f_6(0x230f5ac);
  v25->set_f_16(s->substr(0, 5));
  v25->set_f_24(true);
  v25->set_f_29(0x1d294f);
  v25->set_f_22(0x7d3befd5cba87eb0);
  v25->set_f_30(s->substr(0, 1));
  v25->set_f_2(0x6a86d864f5730f96);
  v25->set_f_9(0x2465f9dccb0e343b);
  v25->set_f_18(true);
  v25->set_f_12(0x51fef4693ff7366b);
  v25->set_f_11(0x22e4);
  v25->add_f_15(0x55);
  v25->set_f_17(0xc);
  v25->set_f_26(0x1236a273);
  v25->set_f_23(0x16);
  v21->set_f_0(0x6a9f7561e871e144);
  message->set_f_5(0x361eeb85c5f4b512);
  Message2::M12* v26 = message->mutable_f_70();
  v26->set_f_4(0x7c94f3da);
  v26->set_f_3(0x1b71);
  v26->set_f_1(0x3f21);
  v26->set_f_0(0x8ab157bbb7a9ba);
  v26->set_f_2(s->substr(0, 93));
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
}  // namespace fleetbench::rpc::P1::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
