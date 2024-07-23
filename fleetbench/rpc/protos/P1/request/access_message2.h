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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message2.pb.h"

namespace fleetbench::rpc::P1::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_1(0x75);
  message->set_f_9(s->substr(0, 39));
  message->set_f_0(0x530f1d69);
  message->set_f_26(0x8af88fb);
  Message2::M1* v0 = message->mutable_f_50();
  Message2::M1::M24* v1 = v0->mutable_f_6();
  v1->set_f_0(0x3c);
  v0->set_f_0(false);
  Message2::M1::M21* v2 = v0->mutable_f_4();
  v2->set_f_0(0x911e4a2);
  Message2::M1::M21::M34* v3 = v2->mutable_f_3();
  v3->set_f_0(0xfeb4bf3a19379c7);
  Message2::M1::M21::M34::M41* v4_0 = v3->add_f_5();
  v4_0->set_f_2(s->substr(0, 5));
  Message2::M1::M21::M34::M41::M44* v5 = v4_0->mutable_f_8();
  v5->set_f_30(0x52);
  v5->set_f_0(s->substr(0, 16));
  v5->set_f_23(0x950ce3a);
  v5->set_f_17(0x957a2a0b6d845abd);
  v5->set_f_14(0x7e);
  v5->set_f_21(0xe3d5b68b388a5e2);
  v5->set_f_28(0x1bd44aa2);
  v5->set_f_16(0x3dce06e654e733c2);
  v5->set_f_18(0xa712f4ef88a1a627);
  v5->set_f_7(false);
  v5->set_f_1(0x5613bb50);
  v5->set_f_10(0x2d9b8b2);
  v5->set_f_19(true);
  v5->set_f_29(0xa1eaa7);
  v5->set_f_9(0.098444);
  v5->set_f_26(s->substr(0, 8));
  v5->set_f_12(s->substr(0, 6));
  v5->set_f_24(0x19aabade8bc);
  v5->set_f_3(0x1d);
  v5->set_f_20(s->substr(0, 9));
  v5->set_f_8(s->substr(0, 1));
  v5->set_f_5(0x147c8496c599647);
  v5->set_f_13(0xce34379725dedf2d);
  v4_0->set_f_0(0x13b67a58);
  v4_0->set_f_3(false);
  Message2::M1::M21::M34::M40* v6 = v3->mutable_f_2();
  v6->set_f_0(0x1d172f6e2);
  v6->set_f_3(s->substr(0, 18));
  v6->set_f_1(0x2ff141d5ec7abd3b);
  v6->set_f_2(0x70b39614);
  Message2::M1::M22* v7 = v0->mutable_f_5();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_6(s->substr(0, 1));
  message->set_f_14(0x7d4151c);
  message->set_f_21(0x43f8faa157cc6376);
  message->set_f_25(0x9ed734712ad0d920);
  Message2::M8* v8 = message->mutable_f_64();
  v8->set_f_2(0xb46e2535d2d607aa);
  Message2::M8::M30* v9 = v8->mutable_f_8();
  v9->set_f_0(0x196d);
  v9->add_f_3(Message2::M8::M30::E2_CONST_1);
  v9->set_f_1(0xe54059fcc644ca7);
  Message2::M8::M29* v10 = v8->mutable_f_7();
  (void)v10;  // Suppresses clang-tidy.
  Message2::M8::M17* v11 = v8->mutable_f_6();
  v11->set_f_0(s->substr(0, 372));
  v11->set_f_1(0xaeb0276995147563);
  v11->set_f_3(s->substr(0, 16));
  v8->set_f_1(true);
  v8->set_f_0(s->substr(0, 13));
  message->set_f_7(0xdd9b17076b3a57);
  message->set_f_16(0x7a520300);
  message->set_f_13(0xc83cc36eec549e6f);
  message->set_f_8(s->substr(0, 2));
  message->set_f_19(0x7a83a45d925779c3);
  Message2::M6* v12 = message->mutable_f_61();
  Message2::M6::M13* v13_0 = v12->add_f_10();
  v13_0->set_f_5(0xb8dca);
  v13_0->set_f_0(true);
  v13_0->set_f_3(0x64010b33);
  v13_0->set_f_2(0x7313a32247c5469a);
  v13_0->set_f_4(0x2f4bf46b);
  Message2::M6::M11* v14 = v12->mutable_f_6();
  (void)v14;  // Suppresses clang-tidy.
  v12->add_f_2(Message2::M6::E1_CONST_2);
  v12->add_f_2(Message2::M6::E1_CONST_5);
  v12->add_f_2(Message2::M6::E1_CONST_4);
  v12->add_f_2(Message2::M6::E1_CONST_3);
  v12->set_f_0(0x14);
  Message2::M5* v15 = message->mutable_f_59();
  Message2::M5::M19* v16_0 = v15->add_f_2();
  v16_0->set_f_2(false);
  v16_0->set_f_1(0x9a4580835c76c6a2);
  v16_0->set_f_0(0.788986);
  Message2::M5::M23* v17 = v15->mutable_f_3();
  v17->set_f_0(s->substr(0, 28));
  Message2::M5::M28* v18 = v15->mutable_f_4();
  v18->set_f_0(0x1171e88);
  message->add_f_11(s->substr(0, 6));
  message->set_f_12(0x1eeaf);
  Message2::M4* v19 = message->mutable_f_56();
  v19->set_f_1(s->substr(0, 59));
  Message2::M4::M16* v20_0 = v19->add_f_6();
  v20_0->set_f_0(0x2312881bc11a4684);
  Message2::M4::M9* v21 = v19->mutable_f_4();
  v21->set_f_0(0x55d9b);
  v19->set_f_0(s->substr(0, 3));
  message->set_f_18(s->substr(0, 7));
  message->set_f_22(0x1f65f4d4051d44f8);
  message->set_f_28(0xbb87535316f017c8);
  message->set_f_3(0x69c104ae1c1344df);
  message->set_f_29(0.669621);
  message->set_f_15(0x9dc5047e93c922fb);
  Message2::M7* v22_0 = message->add_f_62();
  Message2::M7::M15* v23 = v22_0->mutable_f_6();
  v23->set_f_3(0x6d479d5bf094033f);
  v23->set_f_1(s->substr(0, 13));
  v23->set_f_0(s->substr(0, 2));
  v22_0->set_f_0(0x524c26b);
  Message2::M7::M18* v24 = v22_0->mutable_f_10();
  v24->set_f_0(0xa9607e013805e563);
  v24->set_f_2(0xa0703a1d6ea3e113);
  v24->set_f_1(0x6436ad45f98b5c1a);
  Message2::M7::M27* v25 = v22_0->mutable_f_12();
  v25->set_f_3(0xc235b66);
  v25->set_f_2(0x8c1d7c390af5ac4a);
  v25->set_f_1(false);
  v22_0->set_f_3(0x65c4c71250686728);
  Message2::M7::M25* v26 = v22_0->mutable_f_11();
  v26->set_f_0(0xa9ef0ebaa9968563);
  v26->set_f_4(0xaa7a777d0a9f2522);
  v22_0->set_f_2(0xf7e6e);
  Message2::M7::M14* v27 = v22_0->mutable_f_5();
  v27->set_f_0(0x42976b8d);
  v22_0->set_f_1(s->substr(0, 10));
  Message2::M3* v28_0 = message->add_f_55();
  Message2::M3::M10* v29_0 = v28_0->add_f_3();
  v29_0->set_f_1(0x18b64fb);
  v29_0->set_f_7(s->substr(0, 4));
  v29_0->set_f_4(0x440eeab1);
  v29_0->set_f_8(0xcdc964f594c2eba1);
  v29_0->set_f_2(s->substr(0, 33));
  v29_0->set_f_0(s->substr(0, 9));
  v29_0->set_f_6(0x1ab0572);
  v29_0->set_f_3(0x30);
  v29_0->set_f_5(s->substr(0, 8));
  Message2::M3::M12* v30_0 = v28_0->add_f_6();
  Message2::M3::M12::M33* v31 = v30_0->mutable_f_3();
  v31->set_f_0(0xddd5594d84a04951);
  v30_0->set_f_0(s->substr(0, 16));
  v28_0->set_f_0(0xe9e4d4c4fe506026);
  message->set_f_20(0x40af4383e7fafd86);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_5(s->substr(0, 9));
  Message2::M5* v0 = message->mutable_f_59();
  Message2::M5::M23* v1 = v0->mutable_f_3();
  v1->set_f_0(s->substr(0, 29));
  v0->set_f_0(0x42635622);
  Message2::M5::M28* v2 = v0->mutable_f_4();
  Message2::M5::M28::M35* v3 = v2->mutable_f_2();
  v3->set_f_0(0x6e827501);
  v2->set_f_0(0x9);
  Message2::M5::M19* v4_0 = v0->add_f_2();
  v4_0->set_f_0(0.023041);
  v4_0->set_f_1(0x4f2bcc8d8dc92652);
  message->set_f_3(0xaab5678f3d0f89a1);
  message->set_f_17(0xe0ccfa3956d7f2e);
  message->set_f_2(0x35);
  message->set_f_9(s->substr(0, 6));
  message->set_f_15(0xc6cbbb3e8d04c72);
  message->set_f_0(0x386e5b4f);
  message->set_f_14(0x38e9);
  message->set_f_24(s->substr(0, 8));
  message->set_f_10(0.762227);
  message->set_f_12(0x36418c6);
  message->set_f_13(0x5f5a54e9b1311);
  Message2::M4* v5 = message->mutable_f_56();
  v5->set_f_0(s->substr(0, 8));
  Message2::M4::M9* v6 = v5->mutable_f_4();
  Message2::M4::M9::M37* v7_0 = v6->add_f_3();
  v7_0->set_f_22(0x2);
  v7_0->set_f_13(0xfaf3fd0b2cd652fa);
  v7_0->set_f_3(s->substr(0, 20));
  v7_0->add_f_23(Message2::M4::M9::M37::E4_CONST_3);
  v7_0->set_f_7(0xfc055d7faa4bf5ff);
  v7_0->set_f_20(0x52);
  v7_0->set_f_2(0x68);
  v7_0->set_f_17(0x52e1340c);
  v7_0->set_f_16(0xd7e8328fda18ac79);
  v7_0->set_f_21(0x98e032d48679d931);
  v7_0->set_f_6(0x698626f4969fb21c);
  v7_0->set_f_8(false);
  v7_0->set_f_18(0xccb51a92105d6b86);
  Message2::M4::M9::M37::M38* v8 = v7_0->mutable_f_35();
  v8->set_f_0(0x3f620e73);
  v8->set_f_3(0x60);
  v8->set_f_1(s->substr(0, 3));
  v7_0->set_f_11(0x6de3f6e);
  v7_0->set_f_14(0x89374a7fbf920b8);
  v7_0->set_f_9(0x2d760fb3e730ff5);
  v7_0->set_f_12(0x41db7f18);
  v7_0->set_f_15(s->substr(0, 60));
  v7_0->set_f_1(0x682ecc62);
  v7_0->set_f_24(0xc4bb9fd);
  v7_0->set_f_0(0x3e6a15ca);
  v7_0->set_f_5(0xec03af5);
  v7_0->set_f_19(true);
  v6->set_f_0(0x2b84);
  Message2::M4::M16* v9_0 = v5->add_f_6();
  (void)v9_0;  // Suppresses clang-tidy.
  v5->set_f_1(s->substr(0, 24));
  message->set_f_21(0x9fbbd4e3ad5d486d);
  message->set_f_27(0xa3df4165ab546f28);
  message->add_f_11(s->substr(0, 1));
  message->set_f_23(0x29);
  Message2::M3* v10_0 = message->add_f_55();
  Message2::M3::M10* v11_0 = v10_0->add_f_3();
  v11_0->set_f_2(s->substr(0, 13));
  v11_0->set_f_9(0xfc0227a664fe916d);
  v11_0->set_f_0(s->substr(0, 12));
  v11_0->set_f_1(0x1b);
  v11_0->set_f_4(0x1ce403c8);
  v11_0->set_f_5(s->substr(0, 14));
  v11_0->set_f_8(0x4a293215c439eaad);
  Message2::M3::M20* v12_0 = v10_0->add_f_7();
  v12_0->set_f_2(true);
  v12_0->set_f_0(0x85c9ccbe829ae7cb);
  v12_0->set_f_1(s->substr(0, 4));
  v12_0->set_f_3(0x34b0d5f);
  Message2::M3::M12* v13_0 = v10_0->add_f_6();
  v13_0->set_f_0(s->substr(0, 1));
  v10_0->set_f_0(0xfafc4f3d828ee23e);
  message->set_f_28(0x55d38b000360056c);
  Message2::M7* v14_0 = message->add_f_62();
  Message2::M7::M18* v15 = v14_0->mutable_f_10();
  v15->set_f_2(0xf7e184fba008bf90);
  v15->set_f_1(0x67b0b1e88764e2e0);
  Message2::M7::M25* v16 = v14_0->mutable_f_11();
  v16->set_f_1(0xf7e75766da6357d9);
  v16->set_f_4(0x645e6a1e7fdb7fcc);
  v16->set_f_3(0x12f73c);
  v16->set_f_0(0xa75f047def351bef);
  v14_0->set_f_1(s->substr(0, 2));
  v14_0->set_f_2(0x50d8e099);
  v14_0->set_f_3(0x6a003f995a507ad3);
  Message2::M7::M14* v17 = v14_0->mutable_f_5();
  v17->set_f_0(0x520ae998);
  Message2::M7::M15* v18 = v14_0->mutable_f_6();
  v18->set_f_1(s->substr(0, 88));
  v18->set_f_3(0x8536e25cd4dac579);
  v18->set_f_0(s->substr(0, 128));
  Message2::M7::M27* v19 = v14_0->mutable_f_12();
  v19->set_f_4(0x32c49f82c8b238e8);
  v19->set_f_1(true);
  v19->set_f_3(0x18);
  v19->set_f_0(s->substr(0, 14));
  message->set_f_6(s->substr(0, 12));
  Message2::M8* v20 = message->mutable_f_64();
  Message2::M8::M17* v21 = v20->mutable_f_6();
  v21->set_f_0(s->substr(0, 28));
  v21->set_f_2(0x51e72b6e98efc20);
  v21->set_f_3(s->substr(0, 13));
  Message2::M8::M17::M36* v22 = v21->mutable_f_8();
  v22->set_f_0(s->substr(0, 10));
  v22->set_f_1(s->substr(0, 2));
  v22->set_f_2(0xb5719);
  Message2::M8::M17::M36::M42* v23 = v22->mutable_f_12();
  v23->set_f_1(0.630374);
  v23->set_f_3(0x6ac5243668679656);
  v23->set_f_2(0xdde9c9277ad2a82b);
  v23->set_f_0(0xda55241de4a556e8);
  v20->set_f_2(0xd2d46380a7dd6308);
  v20->set_f_0(s->substr(0, 7));
  v20->set_f_1(false);
  Message2::M8::M30* v24 = v20->mutable_f_8();
  v24->set_f_4(0x20ba9986431f28e7);
  v24->add_f_3(Message2::M8::M30::E2_CONST_2);
  v24->set_f_1(0x62d421b4a9196fe4);
  v24->set_f_2(0x6693ee83eda455ba);
  message->set_f_22(0x8098a6be4039ebd1);
  message->set_f_19(0x55894f0f10d120e6);
  message->set_f_4(s->substr(0, 4));
  message->set_f_1(0x2a);
  message->set_f_25(0x6365d90f581592df);
  Message2::M6* v25 = message->mutable_f_61();
  v25->set_f_0(0x754001a);
  v25->add_f_2(Message2::M6::E1_CONST_1);
  Message2::M2* v26 = message->mutable_f_52();
  v26->set_f_0(false);
  Message2::M2::M26* v27 = v26->mutable_f_3();
  Message2::M2::M26::M32* v28 = v27->mutable_f_3();
  v28->set_f_0(0x39b0d08918063bdc);
  v28->set_f_1(0xd7c03a99711877c9);
  Message2::M2::M26::M32::M39* v29 = v28->mutable_f_8();
  v29->set_f_0(true);
  v28->set_f_3(0xbd9cc3e);
  v27->set_f_0(0xa388f04);
  Message2::M2::M31* v30_0 = v26->add_f_5();
  v30_0->set_f_1(0xb5e7f);
  v30_0->set_f_16(s->substr(0, 4));
  v30_0->set_f_9(s->substr(0, 4));
  v30_0->set_f_0(0x1ba383);
  v30_0->set_f_23(0xbaa010c87360a5df);
  v30_0->set_f_10(s->substr(0, 7));
  v30_0->set_f_7(0x3c08);
  v30_0->set_f_12(0x45f0090cd438daf1);
  v30_0->set_f_14(0x720096e);
  v30_0->set_f_13(0.776935);
  v30_0->set_f_24(0x3322db6b9013cc68);
  v30_0->set_f_17(0xb8474a7);
  v30_0->set_f_22(0x2078dcc7558b9e44);
  v30_0->set_f_8(0xe88871b);
  v30_0->set_f_3(0x82c9795618eab12c);
  v30_0->set_f_11(s->substr(0, 14));
  v30_0->set_f_6(s->substr(0, 5));
  v30_0->set_f_19(0xd7b8dc6640eff43e);
  v30_0->set_f_5(0x6f117d0b1918b4ce);
  v30_0->set_f_21(0xd6d98);
  message->set_f_16(0xbb7fb9a);
  message->set_f_7(0x194db0fd42bf297a);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M3* v0_0 = message->add_f_55();
  Message2::M3::M20* v1_0 = v0_0->add_f_7();
  v1_0->set_f_3(0x40f10c7);
  v1_0->set_f_1(s->substr(0, 6));
  v1_0->set_f_0(0x5350f8c87da41cf3);
  Message2::M3::M12* v2_0 = v0_0->add_f_6();
  v2_0->set_f_0(s->substr(0, 6));
  v0_0->set_f_0(0x7a231dd9159643cb);
  Message2::M3::M10* v3_0 = v0_0->add_f_3();
  v3_0->set_f_0(s->substr(0, 11));
  v3_0->set_f_7(s->substr(0, 317));
  v3_0->set_f_8(0xe082dadf529676f6);
  v3_0->set_f_9(0x43b0cd79920a46bb);
  v3_0->set_f_1(0x7ed8814);
  v3_0->set_f_2(s->substr(0, 125));
  v3_0->set_f_3(0x170aaf);
  v3_0->set_f_4(0x60b7252e);
  message->set_f_2(0x123c1d);
  message->add_f_11(s->substr(0, 8));
  message->set_f_5(s->substr(0, 8));
  message->set_f_6(s->substr(0, 13));
  message->set_f_20(0x881ca39002a40a13);
  message->set_f_14(0xd99b1f);
  message->set_f_0(0x12e64f36);
  message->set_f_25(0xf78bc8a72fd30219);
  message->set_f_19(0xb4525f5eee091538);
  message->set_f_13(0xf2a5a1e82162fdd1);
  message->set_f_18(s->substr(0, 8));
  message->set_f_24(s->substr(0, 3));
  message->set_f_22(0x93e59ef097b1097e);
  Message2::M6* v4 = message->mutable_f_61();
  Message2::M6::M11* v5 = v4->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M6::M13* v6_0 = v4->add_f_10();
  v6_0->set_f_5(0x7b);
  v6_0->set_f_1(s->substr(0, 1));
  v6_0->set_f_4(0x2a7e4cf6);
  v6_0->set_f_3(0x2c74b34d);
  v6_0->set_f_0(true);
  v6_0->set_f_2(0xdf3f3551eb20cd63);
  v4->set_f_1(0.668816);
  message->set_f_26(0xa4a8a0c);
  message->set_f_27(0x84fc070ca6037bc6);
  message->set_f_4(s->substr(0, 7));
  Message2::M8* v7 = message->mutable_f_64();
  v7->set_f_1(false);
  Message2::M8::M29* v8 = v7->mutable_f_7();
  v8->set_f_0(s->substr(0, 21));
  v8->set_f_1(s->substr(0, 15));
  v7->set_f_2(0x32972e43ca7b4993);
  Message2::M8::M30* v9 = v7->mutable_f_8();
  v9->set_f_1(0x8211d0d42aabfa8d);
  v9->set_f_0(0xc);
  v9->set_f_2(0xace96be5fd686a9a);
  Message2::M8::M30::E2 array_0[17] = {
      Message2::M8::M30::E2_CONST_3, Message2::M8::M30::E2_CONST_3,
      Message2::M8::M30::E2_CONST_5, Message2::M8::M30::E2_CONST_1,
      Message2::M8::M30::E2_CONST_1, Message2::M8::M30::E2_CONST_4,
      Message2::M8::M30::E2_CONST_4, Message2::M8::M30::E2_CONST_2,
      Message2::M8::M30::E2_CONST_1, Message2::M8::M30::E2_CONST_4,
      Message2::M8::M30::E2_CONST_3, Message2::M8::M30::E2_CONST_5,
      Message2::M8::M30::E2_CONST_3, Message2::M8::M30::E2_CONST_4,
      Message2::M8::M30::E2_CONST_5, Message2::M8::M30::E2_CONST_5,
      Message2::M8::M30::E2_CONST_2,
  };
  for (auto v : array_0) {
    v9->add_f_3(v);
  }
  Message2::M8::M17* v10 = v7->mutable_f_6();
  Message2::M8::M17::M36* v11 = v10->mutable_f_8();
  Message2::M8::M17::M36::M42* v12 = v11->mutable_f_12();
  v12->set_f_0(0xd23e3da75b9783c7);
  v12->set_f_2(0x4eea31dfca3df251);
  v12->set_f_1(0.261721);
  v11->set_f_4(0xbf4a8c0);
  v11->set_f_1(s->substr(0, 2));
  v11->set_f_3(0xf4822be9a3df97fd);
  v10->set_f_0(s->substr(0, 15));
  v10->set_f_2(0x5739da04d57a97e6);
  v10->set_f_3(s->substr(0, 2));
  v10->set_f_1(0x27678ef9de0ee042);
  v7->set_f_0(s->substr(0, 13));
  message->set_f_7(0x2304a8c38769e39a);
  Message2::M4* v13 = message->mutable_f_56();
  Message2::M4::M16* v14_0 = v13->add_f_6();
  v14_0->set_f_0(0x144917fef1fef2d7);
  Message2::M4::M9* v15 = v13->mutable_f_4();
  Message2::M4::M9::M37* v16_0 = v15->add_f_3();
  Message2::M4::M9::M37::M38* v17 = v16_0->mutable_f_35();
  v17->set_f_2(0x382fa51);
  v17->set_f_3(0x1e0f63);
  v17->set_f_4(0x6be4dce34);
  v17->set_f_1(s->substr(0, 2));
  v16_0->set_f_12(0x62bbd5bd);
  v16_0->set_f_18(0x75fe6714c277b01);
  v16_0->set_f_3(s->substr(0, 36));
  v16_0->set_f_15(s->substr(0, 5));
  v16_0->set_f_0(0x61f26846);
  v16_0->set_f_10(true);
  v16_0->set_f_4(0x30);
  v16_0->set_f_24(0x3a);
  v16_0->set_f_2(0x4409f6d);
  v16_0->set_f_20(0xfcc0ca2);
  v16_0->set_f_16(0xca6ef16dccec5964);
  v16_0->set_f_1(0x414418d);
  Message2::M4::M9::M37::M43* v18 = v16_0->mutable_f_36();
  v18->set_f_0(0x5a39ccac);
  v16_0->set_f_17(0x6be27930);
  v16_0->set_f_7(0x119ec52ab3982794);
  v16_0->set_f_14(0xf47e09c5569942b5);
  v16_0->set_f_9(0xe608d656ffdbe074);
  v16_0->set_f_21(0x7e9da5781ebc19a8);
  v16_0->set_f_5(0x54b0411e);
  v16_0->set_f_11(0xda3e942);
  v16_0->set_f_13(0x5d5bd9f9fd2f098c);
  v16_0->set_f_19(false);
  v13->set_f_1(s->substr(0, 368));
  v13->set_f_0(s->substr(0, 104));
  Message2::M5* v19 = message->mutable_f_59();
  v19->set_f_0(0x408500d9);
  Message2::M5::M28* v20 = v19->mutable_f_4();
  v20->set_f_0(0x4c2b419);
  Message2::M5::M28::M35* v21 = v20->mutable_f_2();
  v21->set_f_0(0xb3a3521);
  Message2::M5::M23* v22 = v19->mutable_f_3();
  v22->set_f_0(s->substr(0, 63));
  message->set_f_9(s->substr(0, 22));
  message->set_f_29(0.198680);
  message->set_f_16(0x5811e0d8);
  message->set_f_1(0xe04ac0f);
  Message2::M7* v23_0 = message->add_f_62();
  v23_0->set_f_2(0x1b7c731a);
  v23_0->set_f_0(0x5e);
  Message2::M7::M27* v24 = v23_0->mutable_f_12();
  v24->set_f_3(0x2682);
  v24->set_f_2(0x1ec295c5b60c4847);
  v24->set_f_4(0xbf39e2440f4ae038);
  v24->set_f_1(false);
  v24->set_f_0(s->substr(0, 299));
  Message2::M7::M14* v25 = v23_0->mutable_f_5();
  v25->set_f_0(0x46accaae);
  Message2::M7::M15* v26 = v23_0->mutable_f_6();
  v26->set_f_2(s->substr(0, 57));
  v26->set_f_1(s->substr(0, 144));
  v26->set_f_0(s->substr(0, 3));
  v26->set_f_3(0x2083549ae466f3df);
  v23_0->set_f_1(s->substr(0, 4));
  Message2::M7::M18* v27 = v23_0->mutable_f_10();
  v27->set_f_0(0x447d5734c3e10a88);
  v27->set_f_1(0xea533e858cf93452);
  message->set_f_3(0xbabc01fbe8de44ac);
  message->set_f_8(s->substr(0, 6));
  Message2::M2* v28 = message->mutable_f_52();
  v28->set_f_0(true);
  Message2::M2::M31* v29_0 = v28->add_f_5();
  v29_0->set_f_11(s->substr(0, 12));
  v29_0->set_f_15(s->substr(0, 10));
  v29_0->set_f_20(0x28b6f8c1);
  v29_0->set_f_7(0x53b7);
  v29_0->set_f_0(0x40);
  v29_0->set_f_17(0x6290b2b);
  v29_0->set_f_4(0x25);
  v29_0->set_f_13(0.300825);
  v29_0->set_f_24(0xe7e4b6d72a961d99);
  v29_0->set_f_5(0x5794798eb8adc1d2);
  v29_0->set_f_19(0xf32029d858ec1642);
  v29_0->set_f_1(0x71);
  v29_0->set_f_10(s->substr(0, 16));
  v29_0->set_f_14(0x7a19670);
  v29_0->set_f_16(s->substr(0, 16));
  v29_0->set_f_23(0x42fd11120e612f92);
  v29_0->set_f_2(0x4e80778c0e21fc4c);
  v29_0->set_f_18(0x418603fd);
  v29_0->set_f_22(0x777a685bc798eae9);
  v29_0->set_f_8(0x19cd59e);
  v29_0->set_f_3(0xa4c409d53e9f5807);
  Message2::M2::M26* v30 = v28->mutable_f_3();
  Message2::M2::M26::M32* v31 = v30->mutable_f_3();
  v31->add_f_2(Message2::M2::M26::M32::E3_CONST_1);
  v31->set_f_1(0x6284cf8a872e673e);
  Message2::M2::M26::M32::M39* v32 = v31->mutable_f_8();
  v32->set_f_0(false);
  v31->set_f_0(0x50421c78a64d6da1);
  v30->set_f_0(0x5cc3685);
  Message2::M1* v33 = message->mutable_f_50();
  Message2::M1::M24* v34 = v33->mutable_f_6();
  v34->set_f_0(0x8e34757);
  Message2::M1::M21* v35 = v33->mutable_f_4();
  Message2::M1::M21::M34* v36 = v35->mutable_f_3();
  Message2::M1::M21::M34::M41* v37_0 = v36->add_f_5();
  Message2::M1::M21::M34::M41::M44* v38 = v37_0->mutable_f_8();
  v38->set_f_11(0x4469acb);
  v38->set_f_8(s->substr(0, 1));
  v38->set_f_0(s->substr(0, 19));
  v38->set_f_29(0x393dc9);
  v38->set_f_16(0x302305a71b2cff50);
  v38->set_f_27(0x45);
  v38->set_f_24(0x201ab0f1a);
  v38->set_f_18(0x6f84ad184e4a96ed);
  v38->set_f_22(0x106ef3b284003238);
  v38->set_f_6(true);
  v38->set_f_15(0x1af736);
  v38->set_f_3(0x18eebe);
  v38->set_f_4(0x49);
  v38->set_f_25(0.577332);
  v38->set_f_28(0x3dc1a56c);
  v38->set_f_9(0.833567);
  v38->set_f_2(0xe205168cdbf34764);
  v38->set_f_17(0x38a20230d58c05b9);
  v38->set_f_13(0x82204368ab5c113d);
  v38->set_f_21(0x8dc2a1797603b09);
  v38->set_f_7(false);
  v37_0->set_f_2(s->substr(0, 17));
  v37_0->add_f_1(Message2::M1::M21::M34::M41::E5_CONST_2);
  v37_0->set_f_3(true);
  v37_0->set_f_0(0xe1c2d44);
  message->set_f_23(0x966);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_5(s->substr(0, 14));
  message->set_f_28(0xca91532f58d4fa7e);
  Message2::M6* v0 = message->mutable_f_61();
  Message2::M6::M11* v1 = v0->mutable_f_6();
  v1->set_f_0(0x2473b6d);
  v0->set_f_0(0x505707);
  Message2::M6::M13* v2_0 = v0->add_f_10();
  v2_0->set_f_4(0x30cdec2e);
  v2_0->set_f_1(s->substr(0, 8));
  v2_0->set_f_0(false);
  message->set_f_6(s->substr(0, 1));
  Message2::M2* v3 = message->mutable_f_52();
  Message2::M2::M31* v4_0 = v3->add_f_5();
  v4_0->set_f_19(0xdd421fa4820ad9fe);
  v4_0->set_f_16(s->substr(0, 6));
  v4_0->set_f_10(s->substr(0, 13));
  v4_0->set_f_6(s->substr(0, 8));
  v4_0->set_f_14(0x2f);
  v4_0->set_f_8(0x8ef4);
  v4_0->set_f_9(s->substr(0, 2));
  v4_0->set_f_2(0x8ff889cb347116e4);
  v4_0->set_f_18(0x2c6b86c1);
  v4_0->set_f_3(0x1b90979f3058d0a);
  v4_0->set_f_7(0x1b23b9);
  v4_0->set_f_20(0x1395fef3);
  v4_0->set_f_21(0xb1a6357);
  v4_0->set_f_11(s->substr(0, 21));
  v4_0->set_f_0(0xeefd4b);
  v4_0->set_f_15(s->substr(0, 27));
  v4_0->set_f_17(0xc012ee0);
  v4_0->set_f_5(0xc3cea623d49717a2);
  v4_0->set_f_4(0x4bbcd7c);
  v3->set_f_0(false);
  Message2::M2::M26* v5 = v3->mutable_f_3();
  v5->set_f_0(0x174a32);
  Message2::M2::M26::M32* v6 = v5->mutable_f_3();
  v6->set_f_0(0xbc60737a8b64d6b8);
  v6->set_f_3(0x48);
  v6->add_f_2(Message2::M2::M26::M32::E3_CONST_5);
  v6->set_f_1(0xf1e232a793006bfc);
  message->set_f_24(s->substr(0, 4));
  message->set_f_0(0x2da862d4);
  Message2::M7* v7_0 = message->add_f_62();
  v7_0->set_f_3(0x227fb997de293ec5);
  Message2::M7::M27* v8 = v7_0->mutable_f_12();
  v8->set_f_1(true);
  v8->set_f_4(0x475df13e1400dd14);
  v8->set_f_0(s->substr(0, 98));
  v8->set_f_3(0x6a);
  v8->set_f_2(0x409121a26145037);
  v7_0->set_f_2(0x6c462adc);
  Message2::M7::M25* v9 = v7_0->mutable_f_11();
  (void)v9;  // Suppresses clang-tidy.
  Message2::M7::M14* v10 = v7_0->mutable_f_5();
  v10->set_f_0(0x5964cfeb);
  v7_0->set_f_1(s->substr(0, 15));
  v7_0->set_f_0(0xe);
  Message2::M7::M15* v11 = v7_0->mutable_f_6();
  v11->set_f_3(0xda9928446cb39d39);
  v11->set_f_1(s->substr(0, 15));
  v11->set_f_2(s->substr(0, 32));
  v11->set_f_0(s->substr(0, 8));
  Message2::M7::M18* v12 = v7_0->mutable_f_10();
  v12->set_f_2(0xbf59afce5ecac3fe);
  v12->set_f_0(0xa2518746e560bcb5);
  Message2::M8* v13 = message->mutable_f_64();
  Message2::M8::M17* v14 = v13->mutable_f_6();
  v14->set_f_0(s->substr(0, 8));
  v14->set_f_1(0x95bc3ae7e89676d1);
  Message2::M8::M29* v15 = v13->mutable_f_7();
  v15->set_f_1(s->substr(0, 20));
  v13->set_f_0(s->substr(0, 55));
  v13->set_f_1(false);
  Message2::M8::M30* v16 = v13->mutable_f_8();
  v16->set_f_1(0xc4064fa33e2c2823);
  v16->set_f_0(0x65821ad);
  v16->set_f_2(0x52ebef164848e66);
  v16->set_f_4(0xdfd21d0017348d01);
  Message2::M8::M30::E2 array_0[7] = {
      Message2::M8::M30::E2_CONST_5, Message2::M8::M30::E2_CONST_3,
      Message2::M8::M30::E2_CONST_2, Message2::M8::M30::E2_CONST_4,
      Message2::M8::M30::E2_CONST_1, Message2::M8::M30::E2_CONST_4,
      Message2::M8::M30::E2_CONST_2,
  };
  for (auto v : array_0) {
    v16->add_f_3(v);
  }
  v13->set_f_2(0x5e3dc9c52d6ed28c);
  message->set_f_19(0xde7a18f9b4fbfa15);
  message->set_f_14(0x33dec50);
  message->set_f_8(s->substr(0, 5));
  message->set_f_18(s->substr(0, 3));
  message->set_f_4(s->substr(0, 2694));
  message->set_f_13(0x84bb5ec291fda323);
  message->set_f_27(0x96cee21d0fd08af6);
  message->set_f_20(0xf0cb63cf1109890c);
  message->set_f_25(0x822212b0564bde20);
  message->set_f_1(0xf643997);
  message->set_f_29(0.563606);
  Message2::M1* v17 = message->mutable_f_50();
  Message2::M1::M22* v18 = v17->mutable_f_5();
  v18->set_f_0(0xeac78cfc50b47f69);
  Message2::M1::M21* v19 = v17->mutable_f_4();
  v19->set_f_0(0x1d);
  Message2::M1::M21::M34* v20 = v19->mutable_f_3();
  Message2::M1::M21::M34::M40* v21 = v20->mutable_f_2();
  v21->set_f_3(s->substr(0, 9));
  v21->set_f_0(0x1542a0b73af);
  v21->set_f_2(0x72c49b0e);
  v20->set_f_0(0xe87afc11da106c85);
  Message2::M1::M21::M34::M41* v22_0 = v20->add_f_5();
  Message2::M1::M21::M34::M41::E5 array_1[17] = {
      Message2::M1::M21::M34::M41::E5_CONST_3,
      Message2::M1::M21::M34::M41::E5_CONST_3,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_5,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_1,
      Message2::M1::M21::M34::M41::E5_CONST_1,
      Message2::M1::M21::M34::M41::E5_CONST_2,
      Message2::M1::M21::M34::M41::E5_CONST_3,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_4,
      Message2::M1::M21::M34::M41::E5_CONST_2,
  };
  for (auto v : array_1) {
    v22_0->add_f_1(v);
  }
  v22_0->set_f_0(0x62dc922d);
  v22_0->set_f_2(s->substr(0, 30));
  Message2::M1::M21::M34::M41::M44* v23 = v22_0->mutable_f_8();
  v23->set_f_16(0x8f05682e1aee3c9b);
  v23->set_f_17(0x3aceaf4b5450f63e);
  v23->set_f_30(0x65fbc4e);
  v23->set_f_10(0x26);
  v23->set_f_22(0x627f2d45ef8ec69e);
  v23->set_f_2(0x202f0dddd297367e);
  v23->set_f_8(s->substr(0, 20));
  v23->set_f_15(0xfc79c1e);
  v23->set_f_5(0xd4e3c47d905244a7);
  v23->set_f_23(0x1025);
  v23->set_f_27(0x49);
  v23->set_f_21(0xe91374689d2a804c);
  v23->set_f_25(0.637949);
  v23->set_f_9(0.825281);
  v23->set_f_28(0x75973166);
  v23->set_f_29(0x39);
  v23->set_f_26(s->substr(0, 7));
  v23->set_f_1(0x4e78cb94);
  v23->set_f_18(0x86d1aadc27b82635);
  v23->set_f_20(s->substr(0, 273));
  v23->set_f_24(0x49);
  v23->set_f_3(0x63298);
  v23->set_f_13(0xd0f0bd0c244d2df8);
  v23->set_f_7(true);
  v23->set_f_4(0x204f);
  v23->set_f_12(s->substr(0, 9));
  v23->set_f_14(0x3d);
  Message2::M1::M24* v24 = v17->mutable_f_6();
  (void)v24;  // Suppresses clang-tidy.
  v17->set_f_0(false);
  message->set_f_2(0x76);
  message->set_f_15(0xf412ab847aaca488);
  message->set_f_17(0xb55e9d7bb65479c8);
  message->set_f_12(0x110fbdc);
  message->set_f_26(0x2a45);
  message->set_f_3(0x74bd756abc003c6a);
  message->set_f_22(0xb5335b7abdf95d3e);
  message->add_f_11(s->substr(0, 4));
  message->set_f_21(0x82163f3e11e5e3f8);
  message->set_f_10(0.556073);
  message->set_f_9(s->substr(0, 16));
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
