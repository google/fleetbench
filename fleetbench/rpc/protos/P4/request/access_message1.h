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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message1.pb.h"

namespace fleetbench::rpc::P4::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_0(0x49);
  message->set_f_1(s->substr(0, 3));
  message->set_f_29(0xecea2a8ad1862e33);
  Message1::M6* v0 = message->mutable_f_49();
  Message1::M6::M26* v1_0 = v0->add_f_2();
  v1_0->set_f_21(true);
  v1_0->set_f_0(0x4b);
  v1_0->set_f_12(0x22);
  v1_0->set_f_23(0x45);
  v1_0->set_f_3(0xb);
  v1_0->set_f_25(false);
  v1_0->set_f_19(true);
  v1_0->set_f_18(0x2290c3c);
  v1_0->add_f_22(Message1::M6::M26::E9_CONST_2);
  v1_0->set_f_26(0xd29);
  v1_0->set_f_11(s->substr(0, 9));
  v1_0->set_f_30(0xd);
  v1_0->set_f_10(0.642884);
  v1_0->set_f_5(0x919d642);
  v1_0->set_f_8(0x51c48f634abc36da);
  v1_0->set_f_7(0.258118);
  v1_0->set_f_6(0x21);
  v1_0->set_f_20(0xeb740);
  v1_0->set_f_24(0x10);
  v1_0->set_f_2(0x5c32cf3);
  v1_0->set_f_16(0xa6f8cf2c01ee32d2);
  Message1::M6::M26::E7 array_1[21] = {
      Message1::M6::M26::E7_CONST_2, Message1::M6::M26::E7_CONST_1,
      Message1::M6::M26::E7_CONST_1, Message1::M6::M26::E7_CONST_2,
      Message1::M6::M26::E7_CONST_1, Message1::M6::M26::E7_CONST_2,
      Message1::M6::M26::E7_CONST_4, Message1::M6::M26::E7_CONST_2,
      Message1::M6::M26::E7_CONST_1, Message1::M6::M26::E7_CONST_5,
      Message1::M6::M26::E7_CONST_5, Message1::M6::M26::E7_CONST_1,
      Message1::M6::M26::E7_CONST_5, Message1::M6::M26::E7_CONST_1,
      Message1::M6::M26::E7_CONST_3, Message1::M6::M26::E7_CONST_5,
      Message1::M6::M26::E7_CONST_5, Message1::M6::M26::E7_CONST_4,
      Message1::M6::M26::E7_CONST_3, Message1::M6::M26::E7_CONST_5,
      Message1::M6::M26::E7_CONST_2,
  };
  for (auto v : array_1) {
    v1_0->add_f_9(v);
  }
  v1_0->add_f_17(Message1::M6::M26::E8_CONST_2);
  v1_0->set_f_1(0x16);
  Message1::M6::M49* v2 = v0->mutable_f_4();
  v2->set_f_1(0x8fb321bc1dea6ecf);
  Message1::M6::M47* v3 = v0->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M6::M51* v4_0 = v0->add_f_5();
  v4_0->set_f_0(0x629a10b);
  message->set_f_28(0x3ee0e1ef);
  message->set_f_25(0x73978dd284a66847);
  message->set_f_14(0x1ab63d0);
  message->set_f_31(s->substr(0, 30));
  message->set_f_16(s->substr(0, 18));
  message->set_f_11(0x72);
  message->set_f_12(0x7b);
  message->set_f_9(0xa);
  message->set_f_21(s->substr(0, 27));
  message->set_f_8(0x2003f645);
  message->add_f_18(Message1::E2_CONST_2);
  message->add_f_18(Message1::E2_CONST_2);
  Message1::M10* v5 = message->mutable_f_54();
  Message1::M10::M46* v6_0 = v5->add_f_12();
  v6_0->set_f_1(0xa259fff5a4685d3);
  v6_0->set_f_0(0x3a);
  Message1::M10::M52* v7 = v5->mutable_f_13();
  v7->set_f_0(0x15);
  Message1::M10::M11* v8 = v5->mutable_f_10();
  v8->set_f_0(s->substr(0, 18));
  v5->set_f_0(s->substr(0, 21));
  v5->set_f_3(0.981563);
  v5->set_f_1(0x51437bf);
  v5->set_f_2(0x6a99174adfb49005);
  Message1::M10::M41* v9_0 = v5->add_f_11();
  v9_0->set_f_4(Message1::M10::M41::E13_CONST_5);
  v9_0->set_f_2(0x86ad8ad7699636c);
  message->set_f_27(0.922252);
  message->set_f_13(0x7154089f2e566380);
  Message1::M2* v10_0 = message->add_f_45();
  Message1::M2::M55* v11 = v10_0->mutable_f_17();
  v11->set_f_0(0x30);
  v10_0->set_f_3(s->substr(0, 1041));
  Message1::M2::M22* v12 = v10_0->mutable_f_10();
  v12->set_f_1(0.347631);
  v12->set_f_0(0.584340);
  Message1::M2::M36* v13 = v10_0->mutable_f_12();
  v13->add_f_0(Message1::M2::M36::E12_CONST_3);
  v13->add_f_0(Message1::M2::M36::E12_CONST_4);
  v13->add_f_0(Message1::M2::M36::E12_CONST_2);
  v13->add_f_0(Message1::M2::M36::E12_CONST_4);
  Message1::M2::M40* v14 = v10_0->mutable_f_15();
  Message1::M2::M40::M57* v15 = v14->mutable_f_5();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_0(0x65e51cd4713dcc91);
  Message1::M2::E3 array_2[19] = {
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_1, Message1::M2::E3_CONST_2,
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_1,
      Message1::M2::E3_CONST_4, Message1::M2::E3_CONST_4,
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_4, Message1::M2::E3_CONST_2,
      Message1::M2::E3_CONST_1, Message1::M2::E3_CONST_3,
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_3,
      Message1::M2::E3_CONST_1,
  };
  for (auto v : array_2) {
    v10_0->add_f_4(v);
  }
  v10_0->set_f_1(0x9389d17);
  v10_0->set_f_2(0x59729df78393b2bb);
  message->set_f_6(s->substr(0, 30));
  message->set_f_7(0x1a);
  Message1::M7* v16 = message->mutable_f_50();
  Message1::M7::M38* v17 = v16->mutable_f_4();
  Message1::M7::M38::M65* v18_0 = v17->add_f_3();
  v18_0->set_f_0(s->substr(0, 23));
  Message1::M7::M38::M65::M79* v19 = v18_0->mutable_f_7();
  v19->set_f_2(0x32ba);
  v19->set_f_1(0x52bbac06);
  v17->set_f_0(false);
  v16->set_f_0(0.419110);
  Message1::M1* v20 = message->mutable_f_44();
  Message1::M1::M34* v21 = v20->mutable_f_9();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M1::M27* v22 = v20->mutable_f_6();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M1::M23* v23 = v20->mutable_f_4();
  Message1::M1::M23::M64* v24 = v23->mutable_f_5();
  v24->set_f_3(0x14);
  Message1::M1::M23::M64::M87* v25_0 = v24->add_f_8();
  v25_0->set_f_0(0x82957);
  v25_0->set_f_1(Message1::M1::M23::M64::M87::E21_CONST_1);
  v24->set_f_0(false);
  v24->set_f_2(0xdc01b32);
  Message1::M1::M23::M67* v26 = v23->mutable_f_8();
  v26->set_f_3(true);
  v26->set_f_2(false);
  v26->set_f_1(s->substr(0, 20));
  Message1::M1::M23::M67::M82* v27_0 = v26->add_f_7();
  v27_0->set_f_0(s->substr(0, 2107));
  v27_0->set_f_1(0xda40aed901b8d8a1);
  v26->set_f_0(s->substr(0, 504));
  v23->set_f_0(true);
  Message1::M1::M32* v28 = v20->mutable_f_8();
  (void)v28;  // Suppresses clang-tidy.
  Message1::M1::M45* v29 = v20->mutable_f_11();
  v29->set_f_0(0x7aec);
  message->set_f_19(0x39);
  message->set_f_4(Message1::E1_CONST_5);
  message->set_f_33(0x5c150c7c8b2f0d3);
  message->set_f_5(false);
  Message1::M5* v30_0 = message->add_f_48();
  Message1::M5::M25* v31 = v30_0->mutable_f_8();
  v31->set_f_0(0.735668);
  Message1::M5::M15* v32 = v30_0->mutable_f_6();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M5::M43* v33_0 = v30_0->add_f_12();
  (void)v33_0;  // Suppresses clang-tidy.
  Message1::M5::M21* v34 = v30_0->mutable_f_7();
  (void)v34;  // Suppresses clang-tidy.
  v30_0->set_f_3(s->substr(0, 4));
  v30_0->set_f_2(0xaac68e3717a777a6);
  message->set_f_17(0x7c6c289bcbf16ec7);
  message->set_f_30(0x1774);
  message->set_f_15(s->substr(0, 27));
  message->set_f_32(0xbe99cb6);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->add_f_18(Message1::E2_CONST_5);
  message->set_f_12(0x76);
  Message1::M6* v0 = message->mutable_f_49();
  Message1::M6::M49* v1 = v0->mutable_f_4();
  v1->set_f_2(0x4958bab4f4d5708c);
  v1->set_f_1(0x515b5d40fc4d8750);
  v1->set_f_0(0xfdb7e6f3ef8a4165);
  Message1::M6::M26* v2_0 = v0->add_f_2();
  v2_0->set_f_5(0xb8f1bfb);
  v2_0->set_f_15(true);
  v2_0->set_f_14(s->substr(0, 27));
  v2_0->set_f_25(false);
  v2_0->add_f_22(Message1::M6::M26::E9_CONST_1);
  v2_0->add_f_22(Message1::M6::M26::E9_CONST_1);
  v2_0->set_f_6(0xc2d5756);
  v2_0->set_f_30(0x40);
  v2_0->add_f_9(Message1::M6::M26::E7_CONST_3);
  v2_0->set_f_28(true);
  v2_0->set_f_27(0x175);
  v2_0->set_f_4(0x1b3838);
  v2_0->set_f_29(0x8854196);
  v2_0->set_f_13(0xa458446);
  v2_0->set_f_18(0x395);
  v2_0->set_f_3(0x3fd4);
  v2_0->set_f_23(0xaafb56a);
  Message1::M6::M51* v3_0 = v0->add_f_5();
  v3_0->set_f_0(0x10b4);
  v0->set_f_0(s->substr(0, 3254));
  message->set_f_30(0x5a);
  message->set_f_5(true);
  message->set_f_33(0x59f1c0a2f2405412);
  message->set_f_24(0.220954);
  message->set_f_28(0x6f5d4b4a);
  Message1::M8* v4 = message->mutable_f_52();
  v4->set_f_2(s->substr(0, 18));
  Message1::M8::M48* v5 = v4->mutable_f_26();
  v5->set_f_0(0x1f2a9a6);
  Message1::M8::M42* v6 = v4->mutable_f_22();
  v6->set_f_0(0x45);
  v4->set_f_7(0xfd0c9e61b6ea8a52);
  v4->set_f_8(0x987e731c82aa232);
  v4->set_f_10(s->substr(0, 58));
  Message1::M8::M39* v7_0 = v4->add_f_20();
  Message1::M8::M39::M69* v8_0 = v7_0->add_f_3();
  v8_0->set_f_8(0.672856);
  v8_0->set_f_0(0x313bbd24284ed53a);
  v8_0->set_f_6(s->substr(0, 28));
  v8_0->set_f_1(0xf444206e19117295);
  v8_0->set_f_7(0xba609bbf94a55a0b);
  v8_0->set_f_10(false);
  v7_0->set_f_0(0x4992924752db25e3);
  v4->set_f_13(false);
  v4->set_f_1(0xbf1);
  Message1::M8::M24* v9_0 = v4->add_f_19();
  v9_0->add_f_0(Message1::M8::M24::E6_CONST_3);
  Message1::M8::M44* v10_0 = v4->add_f_24();
  v10_0->set_f_0(0xe1c9b204bb7fc62e);
  Message1::M8::M44::M61* v11 = v10_0->mutable_f_11();
  v11->set_f_0(s->substr(0, 26));
  v10_0->set_f_1(false);
  v10_0->set_f_4(0x78);
  v10_0->set_f_3(0x4634854);
  v4->set_f_12(s->substr(0, 23));
  message->set_f_7(0x3a);
  message->set_f_11(0x5f);
  message->set_f_1(s->substr(0, 49));
  message->set_f_25(0xc1932a6ff77b5a00);
  message->set_f_8(0x7d9bd897);
  message->set_f_19(0x51);
  message->set_f_10(0x60);
  message->set_f_17(0xb648d7a891727c80);
  message->set_f_27(0.573019);
  message->set_f_32(0x33e5);
  Message1::M4* v12 = message->mutable_f_47();
  Message1::M4::M17* v13 = v12->mutable_f_9();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_2(0xbf19b49);
  Message1::M4::M30* v14 = v12->mutable_f_10();
  v14->set_f_0(false);
  Message1::M4::M33* v15 = v12->mutable_f_15();
  v15->set_f_0(0x18);
  v12->set_f_0(0x160e);
  Message1::M4::M16* v16 = v12->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  Message1::M10* v17 = message->mutable_f_54();
  v17->set_f_0(s->substr(0, 121));
  Message1::M10::M52* v18 = v17->mutable_f_13();
  v18->set_f_0(0x2b75);
  Message1::M10::M52::M60* v19 = v18->mutable_f_2();
  v19->set_f_2(0xdd0e0e51af711f1e);
  v19->set_f_1(false);
  Message1::M10::M52::M60::M81* v20 = v19->mutable_f_8();
  v20->set_f_1(0xf83e35c7291ea5ad);
  v20->set_f_0(0.376100);
  Message1::M10::M52::M60::M81::M91* v21_0 = v20->add_f_5();
  v21_0->set_f_0(0.506354);
  Message1::M10::M46* v22_0 = v17->add_f_12();
  v22_0->set_f_0(0xa);
  v17->set_f_1(0xc80c819);
  Message1::M10::M41* v23_0 = v17->add_f_11();
  v23_0->set_f_1(0x7c06c48);
  v23_0->set_f_0(0x97be17d8dfba4677);
  v23_0->set_f_3(s->substr(0, 27));
  v17->set_f_2(0xecc47597d2cf9d22);
  Message1::M7* v24 = message->mutable_f_50();
  Message1::M7::M13* v25_0 = v24->add_f_3();
  v25_0->set_f_0(false);
  message->set_f_2(s->substr(0, 28));
  message->set_f_21(s->substr(0, 352));
  message->set_f_0(0x8053c63);
  Message1::M5* v26_0 = message->add_f_48();
  Message1::M5::M21* v27 = v26_0->mutable_f_7();
  v27->set_f_0(false);
  v26_0->set_f_0(0xaa95ac2);
  v26_0->set_f_1(0x15c126891324f134);
  Message1::M5::M43* v28_0 = v26_0->add_f_12();
  v28_0->set_f_0(0x1c722bc4);
  v26_0->set_f_3(s->substr(0, 32));
  Message1::M5::M29* v29 = v26_0->mutable_f_9();
  v29->set_f_0(0.041028);
  Message1::M5::M15* v30 = v26_0->mutable_f_6();
  (void)v30;  // Suppresses clang-tidy.
  Message1::M5::M25* v31 = v26_0->mutable_f_8();
  Message1::M5::M25::M58* v32 = v31->mutable_f_3();
  Message1::M5::M25::M58::M84* v33 = v32->mutable_f_7();
  v33->set_f_8(false);
  v33->set_f_3(0xfdc371c62974fd24);
  v33->set_f_6(0x2391);
  v33->set_f_9(0xfbd7868abd369f91);
  v33->set_f_4(0x93dcda7ded0ee98c);
  v33->set_f_7(0x3d431d919);
  Message1::M5::M25::M58::M70* v34 = v32->mutable_f_2();
  Message1::M5::M25::M58::M70::M89* v35_0 = v34->add_f_5();
  v35_0->add_f_5(Message1::M5::M25::M58::M70::M89::E23_CONST_3);
  v35_0->set_f_9(s->substr(0, 1));
  v35_0->set_f_6(s->substr(0, 11));
  v35_0->set_f_7(0xeb2e06fe386a3151);
  v35_0->set_f_15(0x44b510fbce65e85a);
  v35_0->set_f_3(0x7c1879a663d590);
  v35_0->set_f_1(s->substr(0, 63));
  v35_0->set_f_14(0x18);
  v35_0->set_f_4(0x1b);
  v35_0->set_f_13(true);
  v35_0->set_f_0(0xdda605a433d17795);
  v35_0->set_f_10(0.895791);
  Message1::M5::M25::M58::M70::M95* v36 = v34->mutable_f_8();
  (void)v36;  // Suppresses clang-tidy.
  v32->set_f_0(0x42107b1a);
  Message1::M3* v37 = message->mutable_f_46();
  v37->set_f_0(s->substr(0, 31));
  Message1::M3::M12* v38_0 = v37->add_f_2();
  v38_0->set_f_0(s->substr(0, 12));
  Message1::M3::M35* v39 = v37->mutable_f_5();
  (void)v39;  // Suppresses clang-tidy.
  Message1::M3::M18* v40_0 = v37->add_f_3();
  v40_0->set_f_0(true);
  message->set_f_3(0xb065845f712ee592);
  Message1::M1* v41 = message->mutable_f_44();
  v41->set_f_0(0xb3ce363e3e114b3);
  Message1::M1::M27* v42 = v41->mutable_f_6();
  (void)v42;  // Suppresses clang-tidy.
  Message1::M1::M23* v43 = v41->mutable_f_4();
  Message1::M1::M23::M64* v44 = v43->mutable_f_5();
  Message1::M1::M23::M64::M87* v45_0 = v44->add_f_8();
  v45_0->set_f_0(0x3714ac9);
  v45_0->set_f_1(Message1::M1::M23::M64::M87::E21_CONST_3);
  Message1::M1::M23::M64::M80* v46 = v44->mutable_f_6();
  v46->set_f_4(false);
  v44->set_f_0(true);
  Message1::M1::M20* v47_0 = v41->add_f_3();
  v47_0->set_f_2(s->substr(0, 270));
  v47_0->set_f_1(0xc175b31430b26);
  v47_0->set_f_4(0.987896);
  Message1::M1::M54* v48_0 = v41->add_f_12();
  v48_0->set_f_0(s->substr(0, 10));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_12(0x34);
  message->set_f_1(s->substr(0, 31));
  message->set_f_0(0x23);
  Message1::M5* v0_0 = message->add_f_48();
  Message1::M5::M43* v1_0 = v0_0->add_f_12();
  (void)v1_0;  // Suppresses clang-tidy.
  Message1::M5::M29* v2 = v0_0->mutable_f_9();
  (void)v2;  // Suppresses clang-tidy.
  v0_0->set_f_0(0x34);
  Message1::M5::M15* v3 = v0_0->mutable_f_6();
  v3->set_f_0(s->substr(0, 26));
  v0_0->set_f_2(0xcde8eeb998bf682a);
  v0_0->set_f_3(s->substr(0, 24));
  message->set_f_31(s->substr(0, 191));
  message->set_f_19(0x14a3);
  message->set_f_3(0xc94586dd986e84a5);
  Message1::M10* v4 = message->mutable_f_54();
  v4->set_f_0(s->substr(0, 14));
  v4->set_f_3(0.733788);
  Message1::M10::M41* v5_0 = v4->add_f_11();
  v5_0->set_f_1(0x609b2c6);
  v5_0->set_f_3(s->substr(0, 26));
  v5_0->set_f_4(Message1::M10::M41::E13_CONST_1);
  Message1::M10::M46* v6_0 = v4->add_f_12();
  v6_0->set_f_0(0x1cce5d);
  v6_0->set_f_1(0x277ee74582d940ab);
  Message1::M10::M11* v7 = v4->mutable_f_10();
  v7->set_f_0(s->substr(0, 21));
  message->set_f_20(s->substr(0, 37));
  message->add_f_18(Message1::E2_CONST_2);
  message->set_f_24(0.559113);
  message->set_f_11(0x61);
  message->set_f_17(0x4cde795c3c9ba533);
  message->set_f_33(0xcf6091aab01e58fc);
  Message1::M2* v8_0 = message->add_f_45();
  v8_0->set_f_3(s->substr(0, 509));
  Message1::M2::M36* v9 = v8_0->mutable_f_12();
  Message1::M2::M36::E12 array_0[21] = {
      Message1::M2::M36::E12_CONST_3, Message1::M2::M36::E12_CONST_1,
      Message1::M2::M36::E12_CONST_2, Message1::M2::M36::E12_CONST_2,
      Message1::M2::M36::E12_CONST_5, Message1::M2::M36::E12_CONST_4,
      Message1::M2::M36::E12_CONST_5, Message1::M2::M36::E12_CONST_3,
      Message1::M2::M36::E12_CONST_1, Message1::M2::M36::E12_CONST_5,
      Message1::M2::M36::E12_CONST_3, Message1::M2::M36::E12_CONST_1,
      Message1::M2::M36::E12_CONST_4, Message1::M2::M36::E12_CONST_4,
      Message1::M2::M36::E12_CONST_5, Message1::M2::M36::E12_CONST_2,
      Message1::M2::M36::E12_CONST_4, Message1::M2::M36::E12_CONST_1,
      Message1::M2::M36::E12_CONST_5, Message1::M2::M36::E12_CONST_5,
      Message1::M2::M36::E12_CONST_2,
  };
  for (auto v : array_0) {
    v9->add_f_0(v);
  }
  v8_0->set_f_1(0x211c9db6);
  Message1::M2::M22* v10 = v8_0->mutable_f_10();
  v10->set_f_0(0.541749);
  v10->set_f_1(0.598014);
  Message1::M2::E3 array_1[22] = {
      Message1::M2::E3_CONST_1, Message1::M2::E3_CONST_2,
      Message1::M2::E3_CONST_3, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_5, Message1::M2::E3_CONST_3,
      Message1::M2::E3_CONST_2, Message1::M2::E3_CONST_1,
      Message1::M2::E3_CONST_2, Message1::M2::E3_CONST_3,
      Message1::M2::E3_CONST_3, Message1::M2::E3_CONST_2,
      Message1::M2::E3_CONST_4, Message1::M2::E3_CONST_1,
      Message1::M2::E3_CONST_1, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_4, Message1::M2::E3_CONST_1,
      Message1::M2::E3_CONST_1, Message1::M2::E3_CONST_5,
      Message1::M2::E3_CONST_4, Message1::M2::E3_CONST_5,
  };
  for (auto v : array_1) {
    v8_0->add_f_4(v);
  }
  Message1::M2::M28* v11_0 = v8_0->add_f_11();
  (void)v11_0;  // Suppresses clang-tidy.
  Message1::M2::M37* v12 = v8_0->mutable_f_13();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_30(0x52);
  message->set_f_9(0x1f);
  message->set_f_8(0x494e56ad);
  Message1::M1* v13 = message->mutable_f_44();
  Message1::M1::M32* v14 = v13->mutable_f_8();
  v14->set_f_0(0x41de8370);
  Message1::M1::M54* v15_0 = v13->add_f_12();
  v15_0->set_f_0(s->substr(0, 85));
  v13->set_f_0(0x1fcee410b80584d9);
  Message1::M1::M45* v16 = v13->mutable_f_11();
  (void)v16;  // Suppresses clang-tidy.
  Message1::M1::M23* v17 = v13->mutable_f_4();
  v17->set_f_0(true);
  Message1::M1::M23::M64* v18 = v17->mutable_f_5();
  Message1::M1::M23::M64::M80* v19 = v18->mutable_f_6();
  v19->set_f_3(0xe1c9345013a9fb55);
  v19->set_f_4(false);
  v19->set_f_0(0x4c0bc70);
  v19->set_f_1(0x8);
  v19->set_f_2(s->substr(0, 912));
  v18->set_f_0(false);
  v18->set_f_3(0x13f50e);
  v18->set_f_2(0x170eac);
  Message1::M1::M20* v20_0 = v13->add_f_3();
  v20_0->set_f_2(s->substr(0, 25));
  v20_0->set_f_3(0x3b);
  v20_0->set_f_0(s->substr(0, 3));
  v20_0->set_f_4(0.190737);
  Message1::M1::M27* v21 = v13->mutable_f_6();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_32(0x5c);
  Message1::M3* v22 = message->mutable_f_46();
  Message1::M3::M18* v23_0 = v22->add_f_3();
  v23_0->set_f_0(false);
  Message1::M3::M35* v24 = v22->mutable_f_5();
  (void)v24;  // Suppresses clang-tidy.
  Message1::M3::M12* v25_0 = v22->add_f_2();
  (void)v25_0;  // Suppresses clang-tidy.
  Message1::M8* v26 = message->mutable_f_52();
  v26->add_f_6(Message1::M8::E5_CONST_2);
  Message1::M8::E4 array_2[21] = {
      Message1::M8::E4_CONST_3, Message1::M8::E4_CONST_2,
      Message1::M8::E4_CONST_3, Message1::M8::E4_CONST_2,
      Message1::M8::E4_CONST_1, Message1::M8::E4_CONST_4,
      Message1::M8::E4_CONST_5, Message1::M8::E4_CONST_2,
      Message1::M8::E4_CONST_4, Message1::M8::E4_CONST_1,
      Message1::M8::E4_CONST_3, Message1::M8::E4_CONST_2,
      Message1::M8::E4_CONST_2, Message1::M8::E4_CONST_5,
      Message1::M8::E4_CONST_2, Message1::M8::E4_CONST_5,
      Message1::M8::E4_CONST_3, Message1::M8::E4_CONST_4,
      Message1::M8::E4_CONST_4, Message1::M8::E4_CONST_2,
      Message1::M8::E4_CONST_2,
  };
  for (auto v : array_2) {
    v26->add_f_0(v);
  }
  Message1::M8::M53* v27 = v26->mutable_f_27();
  v27->set_f_0(0xe90ea906745e42e3);
  v26->set_f_3(s->substr(0, 59));
  v26->set_f_4(0x4f);
  v26->set_f_1(0x5b);
  Message1::M8::M44* v28_0 = v26->add_f_24();
  Message1::M8::M44::M61* v29 = v28_0->mutable_f_11();
  v29->set_f_0(s->substr(0, 54));
  Message1::M8::M44::M61::M74* v30 = v29->mutable_f_4();
  (void)v30;  // Suppresses clang-tidy.
  v28_0->set_f_2(0x41);
  v28_0->set_f_4(0x6a);
  v28_0->set_f_3(0xe);
  v28_0->set_f_0(0x423bd55e94e43f16);
  Message1::M8::M39* v31_0 = v26->add_f_20();
  v31_0->set_f_0(0x9d33551890bfd8f7);
  Message1::M8::M39::M69* v32_0 = v31_0->add_f_3();
  v32_0->set_f_4(s->substr(0, 376));
  v32_0->set_f_7(0xa8d5fecaf22706ae);
  v32_0->set_f_3(0x6e);
  v32_0->set_f_9(Message1::M8::M39::M69::E18_CONST_1);
  v32_0->set_f_6(s->substr(0, 28));
  v32_0->set_f_2(0x5757057e2f819848);
  v32_0->set_f_13(s->substr(0, 7));
  v26->set_f_8(0x438e57e1a8835320);
  v26->set_f_5(0xbccd8ae6498db54e);
  v26->set_f_9(0x968421f49d4bfd19);
  v26->set_f_13(false);
  v26->set_f_7(0x6c573b5f8a44f90b);
  v26->set_f_10(s->substr(0, 29));
  message->set_f_23(0xda6922c56ec9826b);
  message->set_f_27(0.324773);
  message->set_f_6(s->substr(0, 5));
  Message1::M9* v33_0 = message->add_f_53();
  Message1::M9::M19* v34_0 = v33_0->add_f_3();
  v34_0->set_f_0(true);
  v34_0->set_f_1(true);
  Message1::M9::M56* v35 = v33_0->mutable_f_5();
  Message1::M9::M56::M66* v36 = v35->mutable_f_18();
  v36->set_f_4(false);
  Message1::M9::M56::M66::M72* v37_0 = v36->add_f_10();
  v37_0->set_f_0(0xb0a2680aa9d97dd);
  v35->set_f_7(0xa3bd0ea09305eb5e);
  v35->set_f_4(0x39);
  Message1::M9::M56::M62* v38_0 = v35->add_f_17();
  Message1::M9::M56::M62::M85* v39 = v38_0->mutable_f_5();
  v39->set_f_3(s->substr(0, 53));
  v39->set_f_6(true);
  v39->set_f_2(0x34);
  v39->set_f_4(s->substr(0, 2083));
  v39->set_f_0(0xbc46e42b44856654);
  v35->set_f_0(s->substr(0, 7));
  v35->set_f_8(0x6eb7616db1e12e97);
  v35->set_f_3(0xaf2b199);
  v35->set_f_5(0xfe7e157ffc8a8677);
  message->set_f_21(s->substr(0, 33));
  Message1::M7* v40 = message->mutable_f_50();
  Message1::M7::M13* v41_0 = v40->add_f_3();
  v41_0->set_f_0(false);
  Message1::M7::M38* v42 = v40->mutable_f_4();
  Message1::M7::M38::M63* v43 = v42->mutable_f_2();
  Message1::M7::M38::M63::M78* v44_0 = v43->add_f_3();
  Message1::M7::M38::M63::M78::M93* v45 = v44_0->mutable_f_3();
  v45->set_f_0(0x17);
  v44_0->set_f_0(0x10);
  v42->set_f_0(false);
  message->set_f_10(0x3288877);
  message->set_f_26(s->substr(0, 9));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_25(0x5ae8d394fa26dd4a);
  message->set_f_30(0x19);
  message->set_f_11(0x12);
  message->set_f_28(0x5614ee23);
  message->set_f_16(s->substr(0, 27));
  message->set_f_6(s->substr(0, 18));
  Message1::M1* v0 = message->mutable_f_44();
  Message1::M1::M20* v1_0 = v0->add_f_3();
  v1_0->set_f_4(0.416626);
  v1_0->set_f_2(s->substr(0, 15));
  v1_0->set_f_1(0x89434fb7126a9eb0);
  v1_0->set_f_3(0x10);
  Message1::M1::M34* v2 = v0->mutable_f_9();
  v2->set_f_0(0x26525ed20de24654);
  Message1::M1::M45* v3 = v0->mutable_f_11();
  v3->set_f_0(0x8);
  Message1::M1::M32* v4 = v0->mutable_f_8();
  (void)v4;  // Suppresses clang-tidy.
  Message1::M2* v5_0 = message->add_f_45();
  v5_0->set_f_0(0x10f9);
  Message1::M2::M28* v6_0 = v5_0->add_f_11();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M2::M22* v7 = v5_0->mutable_f_10();
  v7->set_f_0(0.839312);
  v7->set_f_1(0.039122);
  v5_0->add_f_4(Message1::M2::E3_CONST_4);
  Message1::M2::M36* v8 = v5_0->mutable_f_12();
  v8->add_f_0(Message1::M2::M36::E12_CONST_3);
  v5_0->set_f_3(s->substr(0, 50));
  v5_0->set_f_1(0x569c9f0f);
  message->set_f_19(0x1659);
  message->set_f_24(0.635673);
  message->set_f_13(0x4070b72c63d5b407);
  Message1::M8* v9 = message->mutable_f_52();
  v9->add_f_6(Message1::M8::E5_CONST_1);
  v9->set_f_1(0x39);
  Message1::M8::M24* v10_0 = v9->add_f_19();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->set_f_13(true);
  v9->set_f_11(true);
  v9->set_f_7(0xf735f774c81834ee);
  v9->set_f_4(0x5b);
  v9->set_f_10(s->substr(0, 127));
  v9->add_f_0(Message1::M8::E4_CONST_1);
  v9->set_f_2(s->substr(0, 17));
  Message1::M8::M48* v11 = v9->mutable_f_26();
  (void)v11;  // Suppresses clang-tidy.
  message->add_f_18(Message1::E2_CONST_5);
  message->set_f_15(s->substr(0, 10));
  Message1::M6* v12 = message->mutable_f_49();
  Message1::M6::M49* v13 = v12->mutable_f_4();
  v13->set_f_0(0xecd2e6fe8a167f2c);
  v13->set_f_2(0x158caabb3bc2d7c0);
  v13->set_f_1(0x2fad7a232662ee8b);
  Message1::M6::M26* v14_0 = v12->add_f_2();
  v14_0->add_f_17(Message1::M6::M26::E8_CONST_3);
  v14_0->set_f_1(0x5e);
  v14_0->set_f_10(0.074231);
  v14_0->set_f_15(true);
  v14_0->set_f_11(s->substr(0, 42));
  v14_0->set_f_29(0xc7da3);
  v14_0->set_f_3(0xef31b99);
  v14_0->set_f_25(true);
  v14_0->set_f_4(0xc9852);
  v14_0->set_f_28(true);
  v14_0->set_f_12(0x7d);
  v14_0->set_f_0(0x16);
  v14_0->set_f_8(0x58032682c78fd35c);
  v14_0->set_f_19(false);
  v14_0->set_f_2(0x1);
  v14_0->set_f_24(0x67);
  v14_0->set_f_7(0.842708);
  v14_0->set_f_18(0xe690eef);
  Message1::M6::M47* v15 = v12->mutable_f_3();
  (void)v15;  // Suppresses clang-tidy.
  Message1::M6::M51* v16_0 = v12->add_f_5();
  v16_0->set_f_0(0x4abadc3);
  message->set_f_29(0x577f5b2de13390f0);
  message->set_f_17(0x3a03cb06ed27faf8);
  message->set_f_5(true);
  message->set_f_10(0x61);
  Message1::M7* v17 = message->mutable_f_50();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_20(s->substr(0, 56));
  message->set_f_22(s->substr(0, 347));
  message->set_f_27(0.759840);
  message->set_f_8(0x225ac444);
  Message1::M10* v18 = message->mutable_f_54();
  v18->set_f_2(0x9414a23445a1d5ec);
  Message1::M10::M52* v19 = v18->mutable_f_13();
  v19->set_f_0(0x346ac35);
  Message1::M10::M52::M60* v20 = v19->mutable_f_2();
  v20->set_f_0(0x78);
  v20->set_f_1(true);
  Message1::M10::M41* v21_0 = v18->add_f_11();
  v21_0->set_f_4(Message1::M10::M41::E13_CONST_3);
  v21_0->set_f_1(0x5);
  v21_0->set_f_0(0xbde5b513324dcad9);
  v18->set_f_4(s->substr(0, 19));
  Message1::M10::M46* v22_0 = v18->add_f_12();
  v22_0->set_f_1(0x519a879da8a973df);
  v22_0->set_f_0(0x198e);
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
}  // namespace fleetbench::rpc::P4::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
