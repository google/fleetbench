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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/response/Message2.pb.h"

namespace fleetbench::rpc::P8::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_22(0.369966);
  message->set_f_0(0x7d);
  Message2::M2* v0 = message->mutable_f_31();
  Message2::M2::M14* v1 = v0->mutable_f_2();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M2::M19* v2 = v0->mutable_f_3();
  v2->set_f_0(0xee18770ff0da3d0);
  Message2::M2::M19::M24* v3_0 = v2->add_f_2();
  v3_0->set_f_0(0.489494);
  Message2::M2::M19::M24* v3_1 = v2->add_f_2();
  Message2::M2::M19::M24::M30* v4_0 = v3_1->add_f_2();
  v4_0->set_f_3(s->substr(0, 20));
  v4_0->set_f_2(0.815307);
  v4_0->set_f_0(0.414715);
  Message2::M2::M19::M24::M30* v4_1 = v3_1->add_f_2();
  v4_1->set_f_0(0.228789);
  v4_1->set_f_2(0.171196);
  v4_1->set_f_1(s->substr(0, 115));
  v4_1->set_f_3(s->substr(0, 18));
  v3_1->set_f_0(0.692353);
  message->set_f_20(0x3d);
  message->set_f_3(0xee1b8092b02d8d34);
  Message2::M6* v5 = message->mutable_f_35();
  v5->set_f_4(Message2::M6::E3_CONST_5);
  Message2::M6::M20* v6 = v5->mutable_f_22();
  Message2::M6::M20::M23* v7 = v6->mutable_f_7();
  v7->set_f_5(Message2::M6::M20::M23::E10_CONST_4);
  v7->set_f_6(0.987267);
  v7->set_f_0(0x25fe);
  Message2::M6::M20::M23::M31* v8 = v7->mutable_f_9();
  v8->set_f_0(0.769700);
  v7->set_f_1(0x13);
  v7->set_f_7(0.892108);
  v6->set_f_4(s->substr(0, 22));
  v6->set_f_1(0x4e);
  v5->set_f_10(0x1e22);
  v5->set_f_0(0x2cabe2347455e48d);
  v5->set_f_7(0x1a2c38dc56be3592);
  v5->set_f_14(s->substr(0, 125));
  v5->set_f_5(0.211584);
  message->set_f_4(0.046079);
  message->set_f_19(0.045867);
  Message2::M1* v9 = message->mutable_f_30();
  v9->set_f_0(0x7);
  Message2::M1::M10* v10_0 = v9->add_f_3();
  v10_0->set_f_9(0x4f19f327120d9726);
  v10_0->set_f_11(0.970470);
  v10_0->set_f_1(0.175703);
  v10_0->set_f_5(0x4485934a9adee3f1);
  v10_0->set_f_0(0.417765);
  Message2::M1::M10::M21* v11_0 = v10_0->add_f_15();
  v11_0->set_f_1(0xae9355fd24821fc4);
  v11_0->set_f_0(0xcb5c910be0);
  Message2::M1::M10::M21* v11_1 = v10_0->add_f_15();
  (void)v11_1;  // Suppresses clang-tidy.
  v10_0->set_f_4(Message2::M1::M10::E5_CONST_4);
  v10_0->set_f_8(0.630893);
  v10_0->set_f_6(0xa4459d20a2bd2dae);
  v10_0->set_f_10(0.645240);
  Message2::M1::M10* v10_1 = v9->add_f_3();
  v10_1->set_f_11(0.672050);
  v10_1->set_f_2(s->substr(0, 10));
  v10_1->set_f_9(0x6d73bd71e9a16eb0);
  Message2::M1::M10::M21* v12_0 = v10_1->add_f_15();
  v12_0->set_f_1(0xd6729b82f138e562);
  v12_0->set_f_0(0xe2ecc568499d);
  Message2::M1::M10::M21* v12_1 = v10_1->add_f_15();
  v12_1->set_f_1(0xc5b24534ced575d2);
  v10_1->set_f_10(0.585158);
  v10_1->set_f_1(0.482456);
  v10_1->set_f_5(0x947456f1b39d72f5);
  v10_1->set_f_7(0x6c);
  v10_1->set_f_8(0.565131);
  Message2::M1::M9* v13_0 = v9->add_f_2();
  Message2::M1::M9::M22* v14 = v13_0->mutable_f_5();
  v14->set_f_0(s->substr(0, 383));
  v13_0->set_f_1(s->substr(0, 75));
  v13_0->set_f_0(false);
  v13_0->set_f_3(0.095152);
  Message2::M1::M9* v13_1 = v9->add_f_2();
  v13_1->set_f_0(false);
  Message2::M1::M9::M22* v15 = v13_1->mutable_f_5();
  v15->set_f_0(s->substr(0, 313));
  Message2::M1::M9::M27* v16 = v13_1->mutable_f_6();
  v16->set_f_1(0xe74a01da43860c9b);
  v13_1->set_f_3(0.273088);
  v13_1->set_f_1(s->substr(0, 35));
  message->set_f_17(s->substr(0, 361));
  message->set_f_13(0.409195);
  message->set_f_9(0.033426);
  message->set_f_5(Message2::E1_CONST_3);
  message->set_f_8(Message2::E2_CONST_4);
  message->set_f_2(0x4d);
  Message2::M3* v17 = message->mutable_f_32();
  v17->set_f_2(s->substr(0, 106));
  v17->set_f_16(0x62340734c17cd419);
  v17->set_f_10(0.734348);
  v17->set_f_9(0x84725b77e7c52f8d);
  v17->set_f_17(0.651354);
  v17->set_f_1(0x5a011b5c384d6fa5);
  v17->set_f_6(s->substr(0, 204));
  v17->set_f_8(0x59);
  Message2::M3::M15* v18 = v17->mutable_f_22();
  v18->set_f_1(0x2acdbc7e0bcbeebc);
  Message2::M3::M15::M25* v19 = v18->mutable_f_6();
  v19->set_f_0(0.517779);
  v19->set_f_1(0x8d51899087f0cd2);
  v18->set_f_0(0x97f4758992dbdc62);
  v17->set_f_7(0.686331);
  v17->set_f_4(0x5da5a781bde66e02);
  message->set_f_21(s->substr(0, 500));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_22(0.552359);
  message->set_f_13(0.619956);
  message->set_f_14(0.011648);
  message->set_f_4(0.171520);
  Message2::M1* v0 = message->mutable_f_30();
  Message2::M1::M10* v1_0 = v0->add_f_3();
  v1_0->set_f_2(s->substr(0, 12));
  Message2::M1::M10::M21* v2_0 = v1_0->add_f_15();
  v2_0->set_f_1(0x955fb8a01d625ad5);
  Message2::M1::M10::M21* v2_1 = v1_0->add_f_15();
  (void)v2_1;  // Suppresses clang-tidy.
  v1_0->set_f_8(0.485108);
  v1_0->set_f_4(Message2::M1::M10::E5_CONST_5);
  v1_0->set_f_6(0xefa57bba91cd6d63);
  v1_0->set_f_10(0.918934);
  v1_0->set_f_11(0.125498);
  v1_0->set_f_9(0x72910ce2ce88090f);
  Message2::M1::M10* v1_1 = v0->add_f_3();
  v1_1->set_f_5(0x496d85cb3bd0e29c);
  v1_1->set_f_6(0x5ddec834017143c3);
  v1_1->set_f_9(0xe129edb4fb3730b5);
  v1_1->set_f_2(s->substr(0, 14));
  v1_1->set_f_10(0.444162);
  v1_1->set_f_0(0.378752);
  v1_1->set_f_4(Message2::M1::M10::E5_CONST_4);
  Message2::M1::M12* v3 = v0->mutable_f_5();
  v3->set_f_2(Message2::M1::M12::E7_CONST_2);
  v3->set_f_4(s->substr(0, 14));
  v3->set_f_0(0x2165);
  v3->set_f_3(0.590664);
  Message2::M1::M11* v4 = v0->mutable_f_4();
  v4->set_f_0(0.163010);
  v4->set_f_1(s->substr(0, 65));
  Message2::M1::M9* v5_0 = v0->add_f_2();
  v5_0->set_f_0(true);
  Message2::M1::M9::M22* v6 = v5_0->mutable_f_5();
  v6->set_f_0(s->substr(0, 127));
  v5_0->set_f_2(0x8f52b52c79366728);
  v5_0->set_f_3(0.025860);
  Message2::M1::M9::M27* v7 = v5_0->mutable_f_6();
  v7->set_f_0(0.069390);
  Message2::M1::M9* v5_1 = v0->add_f_2();
  v5_1->set_f_0(false);
  v5_1->set_f_1(s->substr(0, 19));
  v5_1->set_f_2(0x4463a3109a5f80f9);
  Message2::M1::M9::M27* v8 = v5_1->mutable_f_6();
  v8->set_f_1(0x9e0f495c5bedbd94);
  v8->set_f_0(0.033863);
  message->set_f_19(0.941253);
  Message2::M6* v9 = message->mutable_f_35();
  Message2::M6::M20* v10 = v9->mutable_f_22();
  v10->set_f_1(0x72);
  Message2::M6::M20::M23* v11 = v10->mutable_f_7();
  v11->set_f_6(0.593041);
  v11->set_f_7(0.612961);
  v11->set_f_5(Message2::M6::M20::M23::E10_CONST_2);
  v11->set_f_4(0x2f);
  v11->set_f_3(0.368056);
  v10->set_f_0(0xbd8e9dc17f1a8a36);
  v10->set_f_4(s->substr(0, 25));
  v10->set_f_2(0x71);
  v9->set_f_5(0.084083);
  v9->set_f_6(0xe3bc80dbffb5769a);
  Message2::M6::M16* v12 = v9->mutable_f_21();
  (void)v12;  // Suppresses clang-tidy.
  v9->set_f_2(0.298444);
  v9->set_f_12(Message2::M6::E4_CONST_4);
  v9->set_f_13(0.870603);
  v9->set_f_14(s->substr(0, 77));
  v9->set_f_3(0x68aebc8035ae82e0);
  v9->set_f_1(false);
  v9->set_f_7(0x3c037ebb8467989c);
  v9->set_f_0(0x4658971e4fe92eb6);
  message->set_f_6(0.114381);
  message->set_f_23(0.997400);
  message->set_f_11(0.467024);
  message->set_f_3(0xb2df4b63ba8bc30f);
  Message2::M4* v13 = message->mutable_f_33();
  v13->set_f_0(0xc7555405ddbeb1a7);
  message->set_f_10(0x64);
  Message2::M5* v14 = message->mutable_f_34();
  (void)v14;  // Suppresses clang-tidy.
  message->set_f_20(0x3a);
  message->set_f_1(true);
  message->set_f_8(Message2::E2_CONST_1);
  message->set_f_7(0x1aac);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_20(0x78);
  message->set_f_19(0.223555);
  message->set_f_22(0.948387);
  message->set_f_8(Message2::E2_CONST_5);
  message->set_f_0(0x35);
  message->set_f_16(0xa91792de4fd5a777);
  message->set_f_10(0x70);
  message->set_f_7(0x25fd);
  Message2::M6* v0 = message->mutable_f_35();
  v0->set_f_4(Message2::M6::E3_CONST_3);
  v0->set_f_0(0x95041c4ec94bdb12);
  Message2::M6::M13* v1 = v0->mutable_f_20();
  v1->set_f_0(s->substr(0, 66));
  v1->set_f_1(0.178811);
  Message2::M6::M20* v2 = v0->mutable_f_22();
  v2->set_f_0(0xf43483ad714df683);
  v2->set_f_1(0x7a);
  v2->set_f_3(0.446425);
  Message2::M6::M20::M23* v3 = v2->mutable_f_7();
  v3->set_f_5(Message2::M6::M20::M23::E10_CONST_2);
  v3->set_f_2(false);
  v3->set_f_0(0x7);
  v3->set_f_4(0x6e);
  Message2::M6::M20::M23::M31* v4 = v3->mutable_f_9();
  v4->set_f_0(0.175599);
  v4->set_f_2(s->substr(0, 90));
  v3->set_f_3(0.596804);
  v0->set_f_8(true);
  v0->set_f_12(Message2::M6::E4_CONST_4);
  Message2::M6::M16* v5 = v0->mutable_f_21();
  v5->set_f_0(0x432dc9b282388433);
  v0->set_f_3(0x821f6c8903408f38);
  v0->set_f_6(0x818d986a47b5fa3);
  v0->set_f_13(0.027493);
  v0->set_f_11(0xe56ca67ab3);
  v0->set_f_2(0.144778);
  v0->set_f_1(true);
  v0->set_f_5(0.856409);
  Message2::M4* v6 = message->mutable_f_33();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_3(0x223629a0a945f704);
  Message2::M1* v7 = message->mutable_f_30();
  Message2::M1::M10* v8_0 = v7->add_f_3();
  v8_0->set_f_5(0x913247c3d38dbb5a);
  Message2::M1::M10::M21* v9_0 = v8_0->add_f_15();
  v9_0->set_f_0(0x23a3df68b72);
  v9_0->set_f_1(0x5fe1f8d7014a62aa);
  Message2::M1::M10::M21* v9_1 = v8_0->add_f_15();
  v9_1->set_f_1(0xee4081b016158370);
  v8_0->set_f_7(0x35);
  v8_0->set_f_4(Message2::M1::M10::E5_CONST_5);
  v8_0->set_f_6(0xe8ddc71f1abfccd6);
  v8_0->set_f_10(0.245639);
  v8_0->set_f_1(0.264737);
  v8_0->set_f_9(0xef809331834389d5);
  v8_0->set_f_2(s->substr(0, 9));
  Message2::M1::M10* v8_1 = v7->add_f_3();
  v8_1->set_f_1(0.861264);
  Message2::M1::M10::M21* v10_0 = v8_1->add_f_15();
  v10_0->set_f_0(0x29ffd25e79b);
  v10_0->set_f_1(0xcd605f12a3fa8582);
  Message2::M1::M10::M21* v10_1 = v8_1->add_f_15();
  v10_1->set_f_0(0x715f1613e7);
  v8_1->set_f_10(0.570913);
  v8_1->set_f_4(Message2::M1::M10::E5_CONST_1);
  v8_1->set_f_3(0x14);
  v8_1->set_f_0(0.196392);
  v8_1->set_f_6(0xe0b4beca28302cf4);
  Message2::M1::M9* v11_0 = v7->add_f_2();
  v11_0->set_f_2(0x6f7aed058a0b2e20);
  Message2::M1::M9::M27* v12 = v11_0->mutable_f_6();
  v12->set_f_0(0.198871);
  v12->set_f_1(0x59834593104b8558);
  v11_0->set_f_3(0.523342);
  v11_0->set_f_0(false);
  Message2::M1::M9* v11_1 = v7->add_f_2();
  v11_1->set_f_0(false);
  Message2::M1::M9::M22* v13 = v11_1->mutable_f_5();
  (void)v13;  // Suppresses clang-tidy.
  v11_1->set_f_1(s->substr(0, 126));
  Message2::M1::M11* v14 = v7->mutable_f_4();
  (void)v14;  // Suppresses clang-tidy.
  v7->set_f_0(0x60);
  Message2::M3* v15 = message->mutable_f_32();
  Message2::M3::M17* v16_0 = v15->add_f_23();
  v16_0->set_f_1(0.488860);
  v16_0->set_f_4(0.851190);
  v16_0->set_f_3(0xd22e569123);
  Message2::M3::M17* v16_1 = v15->add_f_23();
  v16_1->set_f_4(0.292783);
  v16_1->set_f_1(0.053986);
  v15->set_f_0(s->substr(0, 89));
  v15->set_f_8(0x54);
  v15->set_f_7(0.077364);
  v15->set_f_12(0.130807);
  v15->set_f_3(0xf7b047b063716a26);
  Message2::M3::M18* v17 = v15->mutable_f_24();
  v17->set_f_1(0.211415);
  v17->set_f_0(0xe37b5766cc54c416);
  v17->set_f_2(0x16);
  v17->set_f_4(Message2::M3::M18::E9_CONST_3);
  v15->set_f_1(0x443a47aba6a5850e);
  v15->set_f_9(0x5afc4f424baf0c49);
  v15->set_f_4(0x9f79bb9a96959ad3);
  v15->set_f_10(0.741915);
  v15->set_f_15(s->substr(0, 66));
  v15->set_f_2(s->substr(0, 101));
  v15->set_f_13(0x4ac5fecb6ac9);
  message->set_f_5(Message2::E1_CONST_5);
  message->set_f_23(0.479257);
  message->set_f_12(0.139888);
  Message2::M2* v18 = message->mutable_f_31();
  Message2::M2::M14* v19 = v18->mutable_f_2();
  v19->set_f_0(0x1a);
  v18->set_f_0(0xf8ffd987b29d8096);
  message->set_f_15(s->substr(0, 261));
  message->set_f_4(0.748536);
  message->set_f_2(0x2d);
  message->set_f_13(0.761817);
  message->set_f_17(s->substr(0, 11));
  message->set_f_6(0.731174);
  message->set_f_21(s->substr(0, 90));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_9(0.504922);
  message->set_f_19(0.067907);
  message->set_f_8(Message2::E2_CONST_4);
  message->set_f_11(0.889633);
  message->set_f_15(s->substr(0, 16));
  message->set_f_16(0xa93f67f457368e41);
  message->set_f_0(0x28a9);
  message->set_f_2(0x51);
  message->set_f_22(0.615645);
  message->set_f_1(true);
  Message2::M1* v0 = message->mutable_f_30();
  Message2::M1::M12* v1 = v0->mutable_f_5();
  v1->set_f_4(s->substr(0, 20));
  v1->set_f_0(0x60);
  v1->set_f_3(0.332308);
  v1->set_f_2(Message2::M1::M12::E7_CONST_1);
  Message2::M1::M10* v2_0 = v0->add_f_3();
  v2_0->set_f_6(0xef2911590f06a6d);
  Message2::M1::M10::M21* v3_0 = v2_0->add_f_15();
  v3_0->set_f_0(0xee2a5d);
  v3_0->set_f_1(0xc087b0b2fc7eec35);
  Message2::M1::M10::M21* v3_1 = v2_0->add_f_15();
  v3_1->set_f_1(0xc2dfebdb5c25561c);
  v3_1->set_f_0(0x1eb791);
  v2_0->set_f_8(0.284018);
  v2_0->set_f_10(0.129150);
  v2_0->set_f_11(0.434472);
  v2_0->set_f_5(0x15fa6c293776d096);
  v2_0->set_f_1(0.524172);
  v2_0->set_f_9(0x7dc3919c82b68531);
  v2_0->set_f_2(s->substr(0, 14));
  Message2::M1::M10* v2_1 = v0->add_f_3();
  v2_1->set_f_1(0.506620);
  v2_1->set_f_2(s->substr(0, 19));
  v2_1->set_f_5(0x9050898553a7361a);
  v2_1->set_f_4(Message2::M1::M10::E5_CONST_2);
  v2_1->set_f_8(0.396229);
  v2_1->set_f_3(0x78b6e);
  v2_1->set_f_9(0x1e3dc6bfb418702e);
  Message2::M1::M10::M21* v4_0 = v2_1->add_f_15();
  v4_0->set_f_1(0xea8f4964231c6126);
  Message2::M1::M10::M21* v4_1 = v2_1->add_f_15();
  v4_1->set_f_0(0x34d6b947bab);
  v2_1->set_f_7(0x5e);
  v2_1->set_f_10(0.999682);
  v2_1->set_f_11(0.442454);
  v2_1->set_f_0(0.475854);
  Message2::M1::M9* v5_0 = v0->add_f_2();
  v5_0->set_f_3(0.914156);
  Message2::M1::M9::M22* v6 = v5_0->mutable_f_5();
  (void)v6;  // Suppresses clang-tidy.
  Message2::M1::M9* v5_1 = v0->add_f_2();
  Message2::M1::M9::M27* v7 = v5_1->mutable_f_6();
  Message2::M1::M9::M27::M29* v8 = v7->mutable_f_4();
  v8->set_f_2(0x170ab66820cef13e);
  v8->set_f_1(0.880563);
  v8->set_f_0(s->substr(0, 160));
  v7->set_f_1(0xe24241539c518560);
  Message2::M1::M9::M22* v9 = v5_1->mutable_f_5();
  (void)v9;  // Suppresses clang-tidy.
  v5_1->set_f_2(0x368010bb4b53f5ab);
  message->set_f_23(0.243124);
  Message2::M4* v10 = message->mutable_f_33();
  v10->set_f_0(0xa029f3035420e698);
  message->set_f_18(0x2f);
  Message2::M3* v11 = message->mutable_f_32();
  v11->set_f_5(0.193185);
  v11->set_f_4(0x816320ffd3fd38d2);
  v11->set_f_7(0.190095);
  v11->set_f_6(s->substr(0, 11));
  Message2::M3::M18* v12 = v11->mutable_f_24();
  v12->set_f_3(0.616234);
  v12->set_f_2(0x141f);
  v11->set_f_11(0xc69dffa3f4);
  v11->set_f_10(0.176460);
  Message2::M3::M15* v13 = v11->mutable_f_22();
  v13->set_f_4(s->substr(0, 168));
  v13->set_f_0(0xa2d26f2a7180537c);
  Message2::M3::M15::M25* v14 = v13->mutable_f_6();
  v14->set_f_0(0.100293);
  v11->set_f_17(0.228931);
  v11->set_f_8(0x66);
  v11->set_f_1(0xf3227245233a9261);
  v11->set_f_3(0x20f7312cd0e34091);
  v11->set_f_2(s->substr(0, 414));
  message->set_f_17(s->substr(0, 354));
  message->set_f_5(Message2::E1_CONST_4);
  Message2::M2* v15 = message->mutable_f_31();
  v15->set_f_0(0xe8c4601787326b42);
  Message2::M2::M19* v16 = v15->mutable_f_3();
  v16->set_f_0(0x59902fd0f5675fe1);
  Message2::M2::M19::M24* v17_0 = v16->add_f_2();
  v17_0->set_f_0(0.382048);
  Message2::M2::M19::M24* v17_1 = v16->add_f_2();
  v17_1->set_f_0(0.607368);
  Message2::M2::M19::M24::M30* v18_0 = v17_1->add_f_2();
  v18_0->set_f_3(s->substr(0, 9));
  v18_0->set_f_1(s->substr(0, 50));
  v18_0->set_f_2(0.395060);
  v18_0->set_f_0(0.440324);
  Message2::M2::M19::M24::M30* v18_1 = v17_1->add_f_2();
  v18_1->set_f_0(0.093124);
  v18_1->set_f_2(0.744691);
  Message2::M2::M14* v19 = v15->mutable_f_2();
  Message2::M2::M14::M26* v20 = v19->mutable_f_2();
  v20->set_f_3(0x10);
  v20->set_f_1(true);
  v20->set_f_2(0.233133);
  v19->set_f_0(0x14);
  message->set_f_10(0x78);
  message->set_f_14(0.241422);
  Message2::M6* v21 = message->mutable_f_35();
  v21->set_f_13(0.180427);
  v21->set_f_3(0xe8b9599356675c5c);
  v21->set_f_11(0x2c43996539e);
  Message2::M6::M13* v22 = v21->mutable_f_20();
  v22->set_f_1(0.572442);
  v21->set_f_1(true);
  v21->set_f_6(0x1814428840e3b8b6);
  Message2::M6::M20* v23 = v21->mutable_f_22();
  v23->set_f_1(0x41);
  v23->set_f_2(0x2);
  v23->set_f_0(0x7e553ce6c4d35919);
  v23->set_f_3(0.365034);
  Message2::M6::M20::M23* v24 = v23->mutable_f_7();
  v24->set_f_5(Message2::M6::M20::M23::E10_CONST_4);
  v24->set_f_0(0x3a);
  v24->set_f_4(0x7d);
  v24->set_f_1(0x69);
  v24->set_f_3(0.419017);
  v23->set_f_4(s->substr(0, 111));
  v21->set_f_8(false);
  v21->set_f_12(Message2::M6::E4_CONST_4);
  Message2::M6::M8* v25 = v21->mutable_f_19();
  v25->set_f_0(0x23);
  v25->set_f_1(0xa3c18ed4cd876659);
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
}  // namespace fleetbench::rpc::P8::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
