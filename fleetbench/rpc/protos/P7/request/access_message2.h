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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message2.pb.h"

namespace fleetbench::rpc::P7::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_20(s->substr(0, 2));
  message->set_f_47(0x45);
  message->set_f_17(s->substr(0, 2));
  message->set_f_4(Message2::E1_CONST_4);
  Message2::M38* v0 = message->mutable_f_132();
  (void)v0;  // Suppresses clang-tidy.
  Message2::M43* v1 = message->mutable_f_141();
  Message2::M43::M49* v2_0 = v1->add_f_2();
  Message2::M43::M49::M153* v3 = v2_0->mutable_f_2();
  v3->set_f_0(0x75eab95);
  Message2::M43::M58* v4 = v1->mutable_f_3();
  v4->set_f_0(0x30);
  message->set_f_12(s->substr(0, 3));
  Message2::M6* v5 = message->mutable_f_85();
  Message2::M6::M76* v6 = v5->mutable_f_3();
  v6->set_f_2(0x5d8f2a8);
  v6->set_f_1(s->substr(0, 18));
  v6->set_f_0(0.053481);
  v5->set_f_0(Message2::M6::E7_CONST_5);
  message->set_f_34(s->substr(0, 406));
  message->set_f_30(s->substr(0, 4));
  Message2::M33* v7 = message->mutable_f_124();
  v7->set_f_5(0x74);
  v7->set_f_2(false);
  v7->set_f_1(s->substr(0, 6));
  v7->set_f_6(true);
  message->set_f_24(0x49);
  Message2::M19* v8 = message->mutable_f_105();
  v8->set_f_0(0x1b4f023b6);
  Message2::M2* v9 = message->mutable_f_78();
  v9->set_f_0(0x67);
  message->set_f_36(s->substr(0, 14));
  message->set_f_41(s->substr(0, 2));
  Message2::M42* v10_0 = message->add_f_139();
  Message2::M42::M74* v11 = v10_0->mutable_f_4();
  v11->set_f_0(0.945917);
  message->set_f_28(s->substr(0, 13));
  message->set_f_32(s->substr(0, 4));
  Message2::M27* v12 = message->mutable_f_118();
  v12->set_f_0(0x755167fe1);
  message->set_f_1(s->substr(0, 12));
  Message2::M39* v13_0 = message->add_f_135();
  v13_0->set_f_0(Message2::M39::E12_CONST_2);
  Message2::M39::M98* v14 = v13_0->mutable_f_6();
  v14->set_f_7(0x2d7af03c7);
  v14->set_f_0(0x3869157);
  v14->set_f_4(s->substr(0, 26));
  v14->set_f_3(s->substr(0, 7));
  v14->set_f_6(s->substr(0, 11));
  v14->set_f_1(s->substr(0, 3));
  v14->set_f_8(0x8e0c034);
  v14->set_f_2(s->substr(0, 15));
  v14->set_f_5(false);
  Message2::M39::M50* v15 = v13_0->mutable_f_3();
  v15->set_f_0(0x76);
  Message2::M16* v16 = message->mutable_f_101();
  (void)v16;  // Suppresses clang-tidy.
  message->set_f_10(s->substr(0, 6));
  Message2::M4* v17 = message->mutable_f_82();
  v17->set_f_3(s->substr(0, 25));
  v17->set_f_0(s->substr(0, 16));
  v17->set_f_4(s->substr(0, 5));
  v17->set_f_1(s->substr(0, 4));
  Message2::M35* v18 = message->mutable_f_129();
  Message2::M35::M52* v19_0 = v18->add_f_4();
  v19_0->set_f_0(0x3b45d83);
  v18->set_f_0(0x44);
  message->set_f_19(s->substr(0, 2));
  Message2::M36* v20 = message->mutable_f_130();
  Message2::M36::M93* v21 = v20->mutable_f_2();
  Message2::M36::M93::M131* v22 = v21->mutable_f_9();
  v22->set_f_0(0xde55646);
  v21->set_f_0(false);
  v20->set_f_0(s->substr(0, 5));
  message->set_f_39(s->substr(0, 120));
  Message2::M23* v23 = message->mutable_f_112();
  v23->set_f_0(0xd8a04042e42b31);
  Message2::M23::M60* v24 = v23->mutable_f_5();
  v24->set_f_0(s->substr(0, 14));
  v24->set_f_3(Message2::M23::M60::E17_CONST_5);
  v24->set_f_2(false);
  v24->set_f_1(s->substr(0, 13));
  Message2::M23::M65* v25 = v23->mutable_f_7();
  Message2::M23::M65::M126* v26 = v25->mutable_f_2();
  (void)v26;  // Suppresses clang-tidy.
  Message2::M23::M72* v27 = v23->mutable_f_11();
  v27->set_f_4(s->substr(0, 4));
  v27->set_f_3(0xb01);
  v27->set_f_1(0xc68244f);
  message->set_f_23(Message2::E3_CONST_2);
  message->set_f_35(s->substr(0, 14));
  Message2::M28* v28 = message->mutable_f_119();
  (void)v28;  // Suppresses clang-tidy.
  message->add_f_51(0xf3b5b);
  message->add_f_51(0x9177d77);
  message->add_f_51(0x6300ee3);
  Message2::M7* v29 = message->mutable_f_88();
  (void)v29;  // Suppresses clang-tidy.
  message->set_f_27(s->substr(0, 20));
  message->set_f_37(s->substr(0, 4));
  message->set_f_53(true);
  message->set_f_5(s->substr(0, 64));
  message->set_f_46(0xc);
  message->set_f_6(s->substr(0, 21));
  Message2::M34* v30_0 = message->add_f_126();
  Message2::M34::M59* v31 = v30_0->mutable_f_3();
  Message2::M34::M59::M142* v32 = v31->mutable_f_3();
  v32->set_f_0(s->substr(0, 15));
  Message2::M1* v33 = message->mutable_f_77();
  v33->set_f_1(s->substr(0, 6));
  v33->set_f_0(s->substr(0, 1));
  Message2::M10* v34 = message->mutable_f_95();
  Message2::M10::M64* v35_0 = v34->add_f_2();
  v35_0->set_f_0(Message2::M10::M64::E18_CONST_4);
  Message2::M10::M64::M106* v36 = v35_0->mutable_f_3();
  v36->set_f_0(s->substr(0, 50));
  message->set_f_22(s->substr(0, 3));
  Message2::M8* v37_0 = message->add_f_91();
  (void)v37_0;  // Suppresses clang-tidy.
  Message2::M18* v38 = message->mutable_f_104();
  Message2::M18::M88* v39 = v38->mutable_f_4();
  v39->set_f_0(s->substr(0, 12));
  v39->set_f_1(s->substr(0, 6));
  v38->set_f_0(0xe);
  Message2::M18::M102* v40 = v38->mutable_f_6();
  v40->set_f_0(s->substr(0, 31));
  message->set_f_18(s->substr(0, 2));
  message->set_f_31(Message2::E4_CONST_5);
  message->set_f_21(s->substr(0, 13));
  Message2::M32* v41 = message->mutable_f_123();
  Message2::M32::M62* v42_0 = v41->add_f_3();
  v42_0->set_f_0(0xf246e9f);
  v41->set_f_0(s->substr(0, 2));
  Message2::M14* v43 = message->mutable_f_99();
  Message2::M14::M54* v44_0 = v43->add_f_3();
  v44_0->set_f_0(s->substr(0, 12));
  v43->set_f_1(0x24d9a8d);
  Message2::M14::M81* v45_0 = v43->add_f_7();
  v45_0->set_f_5(s->substr(0, 7));
  v45_0->set_f_2(0.267535);
  v45_0->set_f_4(true);
  v45_0->set_f_3(s->substr(0, 7));
  v45_0->set_f_1(s->substr(0, 13));
  v45_0->set_f_0(false);
  v43->set_f_0(s->substr(0, 6));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_0(s->substr(0, 4));
  Message2::M7* v0 = message->mutable_f_88();
  (void)v0;  // Suppresses clang-tidy.
  Message2::M12* v1_0 = message->add_f_97();
  Message2::M12::M45* v2 = v1_0->mutable_f_4();
  Message2::M12::M45::M121* v3 = v2->mutable_f_9();
  v3->set_f_3(0xeb307bc);
  v3->set_f_0(Message2::M12::M45::M121::E34_CONST_3);
  v3->set_f_1(s->substr(0, 2));
  v2->set_f_1(Message2::M12::M45::E14_CONST_3);
  v2->set_f_3(s->substr(0, 16));
  v2->set_f_0(s->substr(0, 2));
  v1_0->set_f_0(0x11);
  Message2::M12::M67* v4 = v1_0->mutable_f_5();
  v4->set_f_5(s->substr(0, 6));
  v4->set_f_2(0.365016);
  v4->set_f_7(Message2::M12::M67::E22_CONST_3);
  v4->set_f_3(Message2::M12::M67::E21_CONST_5);
  v4->set_f_0(Message2::M12::M67::E20_CONST_1);
  message->set_f_32(s->substr(0, 16));
  Message2::M26* v5_0 = message->add_f_117();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_37(s->substr(0, 5));
  Message2::M10* v6 = message->mutable_f_95();
  v6->set_f_0(s->substr(0, 5));
  message->set_f_43(0x1c);
  message->set_f_12(s->substr(0, 8));
  message->set_f_47(0xa53f784f7229);
  message->set_f_30(s->substr(0, 8));
  Message2::M34* v7_0 = message->add_f_126();
  (void)v7_0;  // Suppresses clang-tidy.
  Message2::M36* v8 = message->mutable_f_130();
  Message2::M36::M93* v9 = v8->mutable_f_2();
  v9->set_f_4(s->substr(0, 2));
  v9->set_f_0(false);
  v9->set_f_1(0x106645c);
  v9->set_f_5(s->substr(0, 12));
  v9->set_f_2(0x76f16fe);
  message->set_f_22(s->substr(0, 8));
  Message2::M16* v10 = message->mutable_f_101();
  v10->set_f_0(s->substr(0, 10));
  Message2::M3* v11 = message->mutable_f_80();
  v11->set_f_0(0x267b);
  Message2::M3::M96* v12 = v11->mutable_f_5();
  v12->set_f_0(0x44);
  Message2::M33* v13 = message->mutable_f_124();
  v13->set_f_0(Message2::M33::E9_CONST_1);
  v13->set_f_3(false);
  v13->set_f_5(0x447f68d);
  v13->set_f_6(false);
  v13->set_f_4(0x43);
  v13->set_f_1(s->substr(0, 4));
  Message2::M8* v14_0 = message->add_f_91();
  Message2::M8::M87* v15_0 = v14_0->add_f_2();
  (void)v15_0;  // Suppresses clang-tidy.
  Message2::M8::M87* v15_1 = v14_0->add_f_2();
  v15_1->set_f_0(0x65);
  Message2::M35* v16 = message->mutable_f_129();
  Message2::M35::M95* v17 = v16->mutable_f_5();
  v17->set_f_2(0.113458);
  v17->set_f_1(0xec7c518);
  v17->set_f_3(true);
  v17->set_f_5(false);
  message->set_f_20(s->substr(0, 2));
  Message2::M19* v18 = message->mutable_f_105();
  v18->set_f_0(0x7c6c1ec);
  message->set_f_34(s->substr(0, 21));
  message->set_f_50(s->substr(0, 9));
  message->add_f_51(0x13dbd0);
  Message2::M30* v19 = message->mutable_f_121();
  v19->set_f_0(0x8de216c);
  Message2::M22* v20 = message->mutable_f_109();
  Message2::M22::M48* v21 = v20->mutable_f_2();
  (void)v21;  // Suppresses clang-tidy.
  Message2::M22::M100* v22 = v20->mutable_f_3();
  Message2::M22::M100::M149* v23 = v22->mutable_f_6();
  v23->set_f_0(false);
  v23->set_f_1(s->substr(0, 14));
  Message2::M22::M100::M129* v24 = v22->mutable_f_4();
  v24->set_f_0(s->substr(0, 8));
  Message2::M22::M100::M129::M161* v25_0 = v24->add_f_5();
  v25_0->set_f_13(0x41bb3e7);
  v25_0->set_f_1(s->substr(0, 3));
  Message2::M22::M100::M129::M161::M177* v26 = v25_0->mutable_f_35();
  v26->set_f_0(s->substr(0, 20));
  Message2::M22::M100::M129::M161::M177::M223* v27 = v26->mutable_f_3();
  Message2::M22::M100::M129::M161::M177::M223::M250* v28 = v27->mutable_f_3();
  Message2::M22::M100::M129::M161::M177::M223::M250::M269* v29 =
      v28->mutable_f_2();
  v29->set_f_0(0x7e);
  v29->set_f_2(s->substr(0, 17));
  v29->set_f_3(s->substr(0, 5));
  v25_0->set_f_10(Message2::M22::M100::M129::M161::E49_CONST_3);
  Message2::M22::M100::M129::M161::M181* v30 = v25_0->mutable_f_36();
  v30->set_f_0(0xc7030e2);
  v25_0->set_f_12(0x354b8b);
  Message2::M22::M100::M129::M161::M195* v31 = v25_0->mutable_f_43();
  Message2::M22::M100::M129::M161::M195::M238* v32 = v31->mutable_f_4();
  v32->set_f_5(0xff09b9f);
  v32->set_f_2(s->substr(0, 31));
  v32->set_f_1(s->substr(0, 22));
  v31->set_f_0(0x43bde5d06);
  v25_0->set_f_17(s->substr(0, 82));
  v25_0->set_f_16(s->substr(0, 4));
  Message2::M22::M100::M129::M161::M185* v33 = v25_0->mutable_f_37();
  Message2::M22::M100::M129::M161::M185::M233* v34_0 = v33->add_f_6();
  v34_0->set_f_5(0x20da522);
  Message2::M22::M100::M129::M161::M185::M233::M245* v35_0 = v34_0->add_f_10();
  v35_0->set_f_4(
      Message2::M22::M100::M129::M161::M185::M233::M245::E76_CONST_3);
  v35_0->set_f_1(false);
  v35_0->set_f_2(s->substr(0, 13));
  Message2::M22::M100::M129::M161::M185::M233::M245::M283* v36 =
      v35_0->mutable_f_8();
  v36->set_f_6(0x855502e);
  v36->set_f_4(false);
  v36->set_f_7(0x131b2d);
  Message2::M22::M100::M129::M161::M185::M233::M245::M283::M288* v37_0 =
      v36->add_f_18();
  (void)v37_0;  // Suppresses clang-tidy.
  v36->set_f_1(s->substr(0, 22));
  v35_0->set_f_0(0.573470);
  v34_0->set_f_3(0x1a94bb8ba);
  v34_0->set_f_1(0x654ab8aee);
  v34_0->set_f_2(s->substr(0, 3));
  Message2::M22::M100::M129::M161::M185::M228* v38_0 = v33->add_f_5();
  v38_0->set_f_4(0x709f94e);
  v38_0->set_f_1(s->substr(0, 14));
  v33->set_f_0(s->substr(0, 5));
  v25_0->set_f_3(0x891bc39);
  v25_0->set_f_8(s->substr(0, 4));
  v25_0->set_f_2(0x75);
  Message2::M22::M100::M129::M161::M192* v39_0 = v25_0->add_f_41();
  v39_0->set_f_0(s->substr(0, 8));
  Message2::M22::M100::M129::M161::M170* v40 = v25_0->mutable_f_34();
  v40->set_f_2(s->substr(0, 6));
  Message2::M22::M100::M129::M161::M164* v41 = v25_0->mutable_f_32();
  v41->set_f_15(0x1e);
  v41->set_f_0(s->substr(0, 5));
  v41->set_f_12(s->substr(0, 4));
  v41->set_f_8(0x76e15edb);
  v41->set_f_11(s->substr(0, 4));
  v41->set_f_5(s->substr(0, 9));
  v41->set_f_10(s->substr(0, 15));
  v41->set_f_13(s->substr(0, 3));
  v41->set_f_16(0x2530);
  v41->set_f_18(0x29eafa6d487903);
  v41->set_f_17(s->substr(0, 1));
  v41->set_f_2(0x4f);
  v22->set_f_0(false);
  Message2::M31* v42_0 = message->add_f_122();
  Message2::M31::M91* v43 = v42_0->mutable_f_6();
  Message2::M31::M91::M117* v44 = v43->mutable_f_4();
  v44->set_f_0(s->substr(0, 22));
  v43->set_f_0(0.242547);
  Message2::M31::M91::M146* v45_0 = v43->add_f_6();
  v45_0->set_f_0(0x41);
  Message2::M31::M91::M146* v45_1 = v43->add_f_6();
  v45_1->set_f_2(true);
  v45_1->set_f_1(0x70);
  v45_1->set_f_3(0xadac0d1);
  v45_1->set_f_5(0x7e9bc28f7);
  Message2::M31::M91::M147* v46 = v43->mutable_f_7();
  v46->set_f_2(s->substr(0, 18));
  v46->set_f_5(s->substr(0, 14));
  v46->set_f_4(0xf);
  v46->set_f_3(0x65);
  v42_0->set_f_2(0x42);
  v42_0->set_f_0(s->substr(0, 8));
  message->set_f_21(s->substr(0, 6));
  Message2::M9* v47 = message->mutable_f_93();
  v47->set_f_3(s->substr(0, 13));
  v47->set_f_2(0.133094);
  v47->set_f_0(s->substr(0, 3));
  v47->set_f_1(s->substr(0, 18));
  message->set_f_49(Message2::E6_CONST_4);
  message->set_f_28(s->substr(0, 7));
  Message2::M18* v48 = message->mutable_f_104();
  Message2::M18::M102* v49 = v48->mutable_f_6();
  v49->set_f_0(s->substr(0, 18));
  message->set_f_3(s->substr(0, 9));
  Message2::M39* v50_0 = message->add_f_135();
  Message2::M39::M98* v51 = v50_0->mutable_f_6();
  v51->set_f_0(0x2a);
  v51->set_f_6(s->substr(0, 5));
  v51->set_f_5(false);
  Message2::M39::M98::M155* v52 = v51->mutable_f_20();
  v52->set_f_2(s->substr(0, 6));
  v51->set_f_8(0x46a882b);
  v51->set_f_2(s->substr(0, 1));
  v51->set_f_4(s->substr(0, 23));
  v51->set_f_3(s->substr(0, 1));
  Message2::M24* v53_0 = message->add_f_115();
  v53_0->set_f_0(s->substr(0, 3));
  message->set_f_38(s->substr(0, 2));
  Message2::M21* v54 = message->mutable_f_108();
  Message2::M21::M94* v55 = v54->mutable_f_3();
  (void)v55;  // Suppresses clang-tidy.
  v54->set_f_0(0x4b);
  message->set_f_9(s->substr(0, 1));
  message->set_f_46(0xbf2508f);
  message->set_f_39(s->substr(0, 7));
  message->set_f_10(s->substr(0, 5));
  Message2::M32* v56 = message->mutable_f_123();
  v56->set_f_0(s->substr(0, 30));
  Message2::M17* v57 = message->mutable_f_102();
  Message2::M17::M73* v58 = v57->mutable_f_5();
  (void)v58;  // Suppresses clang-tidy.
  Message2::M17::M103* v59_0 = v57->add_f_6();
  v59_0->set_f_1(s->substr(0, 6));
  v59_0->set_f_2(0x64ec15846);
  Message2::M17::M103::M132* v60_0 = v59_0->add_f_6();
  (void)v60_0;  // Suppresses clang-tidy.
  Message2::M17::M103::M132* v60_1 = v59_0->add_f_6();
  (void)v60_1;  // Suppresses clang-tidy.
  v59_0->set_f_0(0xd4baefa);
  Message2::M17::M66* v61 = v57->mutable_f_3();
  v61->set_f_0(Message2::M17::M66::E19_CONST_2);
  v61->set_f_4(false);
  v61->set_f_2(0x18dba5);
  v61->set_f_3(false);
  v61->set_f_1(0x35a9a5c926aa7b);
  v57->set_f_0(0x3e);
  message->set_f_45(s->substr(0, 5));
  message->set_f_6(s->substr(0, 4));
  message->set_f_26(0xafe26);
  message->set_f_36(s->substr(0, 21));
  Message2::M13* v62 = message->mutable_f_98();
  v62->set_f_1(0xf49439d);
  Message2::M13::M75* v63 = v62->mutable_f_10();
  v63->set_f_3(s->substr(0, 11));
  v63->set_f_14(0x6d91d62c5);
  v63->set_f_5(0x8bcdbe6);
  v63->set_f_8(s->substr(0, 2));
  v63->set_f_2(true);
  v63->set_f_0(0x83405);
  v63->set_f_9(s->substr(0, 14));
  v63->set_f_11(Message2::M13::M75::E27_CONST_4);
  v63->set_f_10(s->substr(0, 9));
  v63->set_f_1(0x3b33fa2);
  v62->set_f_2(0xdf67163);
  v62->set_f_3(true);
  Message2::M25* v64 = message->mutable_f_116();
  Message2::M25::M61* v65 = v64->mutable_f_9();
  v65->set_f_0(0.771425);
  v64->set_f_0(0x4160d3d);
  v64->set_f_1(s->substr(0, 24));
  v64->set_f_4(s->substr(0, 8));
  Message2::M5* v66 = message->mutable_f_83();
  Message2::M5::M78* v67 = v66->mutable_f_5();
  Message2::M5::M78::M152* v68 = v67->mutable_f_3();
  (void)v68;  // Suppresses clang-tidy.
  Message2::M5::M78::M112* v69_0 = v67->add_f_2();
  v69_0->set_f_0(0.286836);
  Message2::M5::M99* v70 = v66->mutable_f_6();
  (void)v70;  // Suppresses clang-tidy.
  v66->set_f_0(s->substr(0, 9));
  message->set_f_41(s->substr(0, 13));
  Message2::M44* v71_0 = message->add_f_143();
  v71_0->set_f_4(s->substr(0, 11));
  v71_0->set_f_0(s->substr(0, 2));
  v71_0->set_f_19(0xbf89e4a);
  v71_0->set_f_1(s->substr(0, 7));
  v71_0->set_f_20(s->substr(0, 7));
  v71_0->set_f_2(0x37e09e1);
  v71_0->set_f_3(0xf84a286);
  Message2::M44::M55* v72_0 = v71_0->add_f_28();
  v72_0->set_f_0(s->substr(0, 4));
  Message2::M44::M55::M124* v73 = v72_0->mutable_f_4();
  v73->set_f_2(s->substr(0, 4));
  v73->set_f_0(s->substr(0, 11));
  v73->set_f_3(true);
  v73->set_f_6(s->substr(0, 7));
  Message2::M44::M55* v72_1 = v71_0->add_f_28();
  (void)v72_1;  // Suppresses clang-tidy.
  Message2::M44::M105* v74 = v71_0->mutable_f_30();
  v74->set_f_10(0x4e);
  v74->set_f_12(true);
  v74->set_f_17(0x1c);
  v74->set_f_14(s->substr(0, 6));
  v74->set_f_8(s->substr(0, 14));
  v74->set_f_6(s->substr(0, 7));
  v74->set_f_1(0.834658);
  v74->set_f_16(0x1ace79d);
  v74->set_f_19(0x6ce4f3c);
  v74->set_f_2(0.892096);
  v74->set_f_15(s->substr(0, 7));
  v74->set_f_11(0x1b22939);
  v71_0->set_f_6(s->substr(0, 18));
  v71_0->set_f_13(s->substr(0, 4));
  message->set_f_42(0x46);
  message->set_f_4(Message2::E1_CONST_4);
  message->set_f_7(0xeabd379);
  Message2::M28* v75 = message->mutable_f_119();
  v75->set_f_0(s->substr(0, 1));
  v75->set_f_2(0x1d3b9f);
  Message2::M38* v76 = message->mutable_f_132();
  (void)v76;  // Suppresses clang-tidy.
  message->set_f_5(s->substr(0, 22));
  message->set_f_15(0x31dc14);
  Message2::M6* v77 = message->mutable_f_85();
  (void)v77;  // Suppresses clang-tidy.
  message->set_f_27(s->substr(0, 16));
  message->set_f_8(s->substr(0, 7));
  message->set_f_19(s->substr(0, 49));
  Message2::M29* v78 = message->mutable_f_120();
  (void)v78;  // Suppresses clang-tidy.
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M30* v0 = message->mutable_f_121();
  v0->set_f_0(0x42);
  message->set_f_14(s->substr(0, 7));
  message->set_f_33(true);
  message->set_f_8(s->substr(0, 1));
  Message2::M31* v1_0 = message->add_f_122();
  v1_0->set_f_2(0x8df460);
  v1_0->set_f_3(0x1d1b02);
  v1_0->set_f_1(s->substr(0, 10));
  Message2::M35* v2 = message->mutable_f_129();
  Message2::M35::M95* v3 = v2->mutable_f_5();
  v3->set_f_1(0x98f035a);
  Message2::M35::M95::M125* v4 = v3->mutable_f_7();
  int64_t array_0[20] = {
      0x71, 0x5b, 0x7c, 0x61, 0x41, 0x72, 0x7a, 0x5c, 0x70, 0x2c,
      0x5c, 0xc,  0x53, 0x74, 0x6,  0x2e, 0x39, 0x12, 0x48, 0x4f,
  };
  for (auto v : array_0) {
    v4->add_f_5(v);
  }
  v4->set_f_1(0xb760369);
  v4->set_f_6(s->substr(0, 11));
  v4->set_f_4(s->substr(0, 49));
  v4->set_f_2(s->substr(0, 11));
  v3->set_f_0(true);
  message->set_f_16(0x558f345a3);
  message->set_f_52(s->substr(0, 10));
  message->set_f_40(s->substr(0, 5));
  message->set_f_21(s->substr(0, 11));
  message->set_f_42(0x6e85b6c);
  message->set_f_35(s->substr(0, 5));
  message->set_f_17(s->substr(0, 7));
  message->set_f_27(s->substr(0, 2));
  Message2::M39* v5_0 = message->add_f_135();
  Message2::M39::M86* v6 = v5_0->mutable_f_5();
  v6->set_f_1(true);
  v6->set_f_0(0x9390fa8);
  Message2::M39::M50* v7 = v5_0->mutable_f_3();
  v7->set_f_0(0xc458a91);
  Message2::M39::M50::M114* v8 = v7->mutable_f_2();
  v8->set_f_0(0.482396);
  v8->set_f_3(0.412727);
  v8->set_f_2(0.717853);
  v8->set_f_5(false);
  v8->set_f_8(s->substr(0, 21));
  Message2::M39::M98* v9 = v5_0->mutable_f_6();
  v9->set_f_6(s->substr(0, 1));
  v9->set_f_4(s->substr(0, 21));
  Message2::M39::M98::M155* v10 = v9->mutable_f_20();
  v10->set_f_0(s->substr(0, 6));
  v10->set_f_1(s->substr(0, 1));
  v10->set_f_3(s->substr(0, 3));
  v10->set_f_4(true);
  Message2::M39::M98::M155::M159* v11_0 = v10->add_f_9();
  Message2::M39::M98::M155::M159::M201* v12_0 = v11_0->add_f_16();
  v12_0->set_f_0(s->substr(0, 5));
  Message2::M39::M98::M155::M159::M197* v13 = v11_0->mutable_f_15();
  (void)v13;  // Suppresses clang-tidy.
  v9->set_f_1(s->substr(0, 4));
  v9->set_f_5(false);
  Message2::M21* v14 = message->mutable_f_108();
  v14->set_f_0(0x44);
  Message2::M21::M94* v15 = v14->mutable_f_3();
  (void)v15;  // Suppresses clang-tidy.
  Message2::M21::M69* v16 = v14->mutable_f_2();
  v16->add_f_5(0xa119496);
  v16->add_f_5(0x7c5f3);
  v16->add_f_5(0x30bc2);
  Message2::M21::M69::M141* v17 = v16->mutable_f_16();
  v17->set_f_0(s->substr(0, 3));
  v16->set_f_3(s->substr(0, 3));
  v16->set_f_4(0x6b014654);
  Message2::M21::M69::M135* v18 = v16->mutable_f_12();
  v18->set_f_0(0x72);
  v18->set_f_1(s->substr(0, 3));
  v18->set_f_3(s->substr(0, 6));
  Message2::M21::M69::M119* v19 = v16->mutable_f_10();
  v19->set_f_0(s->substr(0, 3));
  Message2::M21::M69::M136* v20 = v16->mutable_f_14();
  v20->set_f_0(s->substr(0, 12));
  message->set_f_2(s->substr(0, 14));
  message->set_f_30(s->substr(0, 2));
  Message2::M14* v21 = message->mutable_f_99();
  v21->set_f_0(s->substr(0, 13));
  Message2::M14::M54* v22_0 = v21->add_f_3();
  v22_0->set_f_0(s->substr(0, 13));
  v21->set_f_1(0x5c100b7);
  Message2::M14::M77* v23 = v21->mutable_f_5();
  v23->set_f_1(s->substr(0, 4));
  v23->set_f_2(false);
  message->set_f_22(s->substr(0, 19));
  Message2::M20* v24 = message->mutable_f_107();
  v24->set_f_2(0x31ecf8e83);
  Message2::M20::M83* v25 = v24->mutable_f_10();
  Message2::M20::M83::M154* v26_0 = v25->add_f_6();
  v26_0->set_f_16(s->substr(0, 7));
  v26_0->set_f_14(s->substr(0, 7));
  v26_0->set_f_1(Message2::M20::M83::M154::E41_CONST_1);
  v26_0->set_f_29(s->substr(0, 23));
  v26_0->set_f_28(s->substr(0, 2));
  v26_0->set_f_36(0xba30807);
  v26_0->set_f_23(s->substr(0, 14));
  int64_t array_1[21] = {
      0x12, 0x26, 0x55, 0x1e6965, 0x44, 0x5c, 0xb,  0x39, 0x6,  0x60, 0x10,
      0x49, 0x37, 0x14, 0x2,      0x6f, 0x25, 0x3a, 0x26, 0x1c, 0x40,
  };
  for (auto v : array_1) {
    v26_0->add_f_19(v);
  }
  v26_0->set_f_17(0x29);
  v26_0->set_f_5(0x43dfcea);
  v26_0->set_f_8(s->substr(0, 3));
  v26_0->set_f_39(s->substr(0, 20));
  v26_0->set_f_13(0x3bd126db3);
  v26_0->set_f_22(0x170da88);
  v26_0->set_f_31(s->substr(0, 3));
  v26_0->set_f_2(0xabb8b5f);
  v26_0->set_f_15(0xee0);
  v26_0->set_f_45(0xde79a2a);
  v26_0->set_f_46(s->substr(0, 5));
  v26_0->set_f_26(0x4286430);
  v26_0->set_f_47(0x230048);
  v26_0->set_f_18(s->substr(0, 15));
  v26_0->set_f_42(Message2::M20::M83::M154::E44_CONST_5);
  v26_0->set_f_4(s->substr(0, 1));
  v26_0->set_f_38(0xc381033);
  v26_0->set_f_11(s->substr(0, 29));
  Message2::M20::M83::M128* v27_0 = v25->add_f_5();
  (void)v27_0;  // Suppresses clang-tidy.
  Message2::M20::M47* v28_0 = v24->add_f_9();
  v28_0->set_f_0(0x107a956);
  v24->set_f_4(0xae62fa8);
  v24->set_f_1(s->substr(0, 8));
  Message2::M22* v29 = message->mutable_f_109();
  (void)v29;  // Suppresses clang-tidy.
  message->set_f_13(Message2::E2_CONST_2);
  message->set_f_3(s->substr(0, 26));
  message->set_f_11(0xc131e4);
  Message2::M32* v30 = message->mutable_f_123();
  v30->set_f_0(s->substr(0, 3));
  message->set_f_1(s->substr(0, 5));
  Message2::M9* v31 = message->mutable_f_93();
  v31->set_f_1(s->substr(0, 1));
  message->set_f_10(s->substr(0, 64));
  Message2::M12* v32_0 = message->add_f_97();
  Message2::M12::M45* v33 = v32_0->mutable_f_4();
  v33->set_f_3(s->substr(0, 2));
  v32_0->set_f_0(0x2d);
  message->set_f_15(0x1e7ac4);
  message->set_f_4(Message2::E1_CONST_3);
  Message2::M6* v34 = message->mutable_f_85();
  v34->set_f_0(Message2::M6::E7_CONST_5);
  message->set_f_9(s->substr(0, 5));
  message->add_f_51(0x59c4fc6);
  message->add_f_51(0xfb9b2);
  message->set_f_19(s->substr(0, 5));
  Message2::M4* v35 = message->mutable_f_82();
  v35->set_f_4(s->substr(0, 6));
  v35->set_f_3(s->substr(0, 8));
  Message2::M1* v36 = message->mutable_f_77();
  Message2::M1::M82* v37 = v36->mutable_f_5();
  v37->set_f_3(s->substr(0, 4));
  v37->set_f_2(0x88a9529);
  v36->set_f_1(s->substr(0, 15));
  message->set_f_36(s->substr(0, 1));
  message->set_f_18(s->substr(0, 3));
  Message2::M29* v38 = message->mutable_f_120();
  v38->set_f_0(0xec44c7a);
  message->set_f_29(0x7640a28d9);
  Message2::M33* v39 = message->mutable_f_124();
  v39->set_f_2(true);
  v39->set_f_4(0x1f561c);
  v39->set_f_0(Message2::M33::E9_CONST_4);
  v39->set_f_6(true);
  Message2::M40* v40 = message->mutable_f_136();
  v40->set_f_0(s->substr(0, 12));
  message->set_f_7(0xd0dbc74);
  message->set_f_41(s->substr(0, 10));
  message->set_f_43(0x17bc51d6e);
  message->set_f_45(s->substr(0, 1));
  Message2::M17* v41 = message->mutable_f_102();
  Message2::M17::M73* v42 = v41->mutable_f_5();
  v42->set_f_0(Message2::M17::M73::E26_CONST_3);
  v41->set_f_0(0x194804);
  message->set_f_46(0xb07a15d);
  Message2::M26* v43_0 = message->add_f_117();
  Message2::M26::M97* v44_0 = v43_0->add_f_7();
  v44_0->set_f_0(s->substr(0, 4));
  Message2::M26::M97::M134* v45_0 = v44_0->add_f_4();
  v45_0->set_f_0(Message2::M26::M97::M134::E36_CONST_4);
  message->set_f_48(s->substr(0, 10));
  Message2::M10* v46 = message->mutable_f_95();
  Message2::M10::M64* v47_0 = v46->add_f_2();
  (void)v47_0;  // Suppresses clang-tidy.
  v46->set_f_0(s->substr(0, 4));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M27* v0 = message->mutable_f_118();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_42(0xaf99ee8);
  message->set_f_50(s->substr(0, 1));
  message->set_f_5(s->substr(0, 4));
  Message2::M10* v1 = message->mutable_f_95();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_29(0x60db62ad0);
  message->set_f_10(s->substr(0, 1));
  Message2::M35* v2 = message->mutable_f_129();
  Message2::M35::M52* v3_0 = v2->add_f_4();
  (void)v3_0;  // Suppresses clang-tidy.
  v2->set_f_0(0x899acde);
  Message2::M22* v4 = message->mutable_f_109();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M39* v5_0 = message->add_f_135();
  v5_0->set_f_0(Message2::M39::E12_CONST_5);
  Message2::M39::M86* v6 = v5_0->mutable_f_5();
  v6->set_f_1(true);
  v6->set_f_0(0x3359296);
  Message2::M39::M98* v7 = v5_0->mutable_f_6();
  Message2::M39::M98::M155* v8 = v7->mutable_f_20();
  v8->set_f_2(s->substr(0, 22));
  v8->set_f_3(s->substr(0, 21));
  v8->set_f_4(true);
  Message2::M39::M98::M155::M159* v9_0 = v8->add_f_9();
  v9_0->set_f_0(s->substr(0, 8));
  Message2::M39::M98::M155::M159::M197* v10 = v9_0->mutable_f_15();
  v10->set_f_0(s->substr(0, 5));
  Message2::M39::M98::M155::M159::M196* v11 = v9_0->mutable_f_14();
  v11->set_f_2(0x7ee346);
  v11->set_f_0(0.501868);
  v11->set_f_6(Message2::M39::M98::M155::M159::M196::E62_CONST_1);
  v11->set_f_1(s->substr(0, 4));
  Message2::M39::M98::M155::M159::M178* v12_0 = v9_0->add_f_7();
  (void)v12_0;  // Suppresses clang-tidy.
  v8->set_f_1(s->substr(0, 4));
  Message2::M39::M98::M148* v13 = v7->mutable_f_19();
  Message2::M39::M98::M148::M157* v14_0 = v13->add_f_3();
  Message2::M39::M98::M148::M157::M179* v15_0 = v14_0->add_f_13();
  v15_0->set_f_0(0x520dc76);
  v15_0->set_f_3(Message2::M39::M98::M148::M157::M179::E60_CONST_5);
  v14_0->set_f_6(0.192216);
  Message2::M39::M98::M148::M157::M184* v16 = v14_0->mutable_f_19();
  v16->set_f_0(0x6b67bc2);
  Message2::M39::M98::M148::M157::M169* v17_0 = v14_0->add_f_10();
  Message2::M39::M98::M148::M157::M169::M206* v18 = v17_0->mutable_f_13();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M39::M98::M148::M157::M169::M208* v19 = v17_0->mutable_f_15();
  v19->set_f_0(0x72);
  Message2::M39::M98::M148::M157::M169::M208::M266* v20 = v19->mutable_f_3();
  v20->set_f_0(s->substr(0, 1));
  v20->set_f_3(s->substr(0, 62));
  Message2::M39::M98::M148::M157::M169::M216* v21 = v17_0->mutable_f_16();
  v21->set_f_3(s->substr(0, 2));
  v21->set_f_5(0xd5e6d82);
  v21->set_f_4(s->substr(0, 32));
  v21->set_f_7(0xd196f);
  Message2::M39::M98::M148::M157::M169::M216::M243* v22_0 = v21->add_f_13();
  v22_0->set_f_2(0x72);
  v22_0->set_f_3(0x373ba7);
  v22_0->set_f_4(true);
  v22_0->set_f_0(0x55e16ae01);
  v21->set_f_6(0x74);
  v17_0->set_f_7(true);
  v17_0->set_f_1(true);
  v17_0->set_f_4(0.437114);
  v17_0->set_f_5(s->substr(0, 2));
  v17_0->set_f_2(0.583793);
  v14_0->set_f_2(s->substr(0, 17));
  v14_0->set_f_5(s->substr(0, 10));
  Message2::M39::M98::M148::M157::M183* v23 = v14_0->mutable_f_17();
  Message2::M39::M98::M148::M157::M183::M213* v24_0 = v23->add_f_8();
  (void)v24_0;  // Suppresses clang-tidy.
  v23->set_f_2(s->substr(0, 8));
  Message2::M39::M98::M148::M157::M183::M241* v25 = v23->mutable_f_11();
  (void)v25;  // Suppresses clang-tidy.
  v23->set_f_3(false);
  Message2::M39::M98::M148::M157::M183::M214* v26 = v23->mutable_f_10();
  v26->set_f_0(0xd9f0a81);
  v13->set_f_0(false);
  v7->set_f_7(0x3600);
  v7->set_f_4(s->substr(0, 15));
  v7->set_f_8(0x1bf6ee);
  Message2::M6* v27 = message->mutable_f_85();
  v27->set_f_0(Message2::M6::E7_CONST_1);
  message->set_f_32(s->substr(0, 2));
  message->set_f_46(0xbe2b04);
  Message2::M41* v28 = message->mutable_f_137();
  v28->set_f_0(0x1d00d7d);
  Message2::M41::M90* v29_0 = v28->add_f_5();
  v29_0->set_f_1(0x9754a9);
  v29_0->add_f_2(0x3f);
  v29_0->set_f_0(s->substr(0, 2));
  Message2::M41::M63* v30_0 = v28->add_f_3();
  v30_0->set_f_1(s->substr(0, 7));
  v30_0->set_f_2(s->substr(0, 25));
  Message2::M41::M63* v30_1 = v28->add_f_3();
  v30_1->set_f_1(s->substr(0, 2));
  v30_1->set_f_0(0.778082);
  Message2::M9* v31 = message->mutable_f_93();
  v31->set_f_0(s->substr(0, 6));
  message->set_f_47(0x5c);
  message->set_f_18(s->substr(0, 13));
  Message2::M38* v32 = message->mutable_f_132();
  (void)v32;  // Suppresses clang-tidy.
  message->set_f_49(Message2::E6_CONST_3);
  message->set_f_26(0x16129);
  Message2::M23* v33 = message->mutable_f_112();
  Message2::M23::M51* v34 = v33->mutable_f_4();
  v34->set_f_0(s->substr(0, 13));
  Message2::M23::M70* v35 = v33->mutable_f_8();
  v35->set_f_0(s->substr(0, 12));
  Message2::M23::M60* v36 = v33->mutable_f_5();
  v36->set_f_5(s->substr(0, 7));
  v36->set_f_4(0x14);
  v36->set_f_0(s->substr(0, 2));
  message->set_f_39(s->substr(0, 79));
  Message2::M11* v37 = message->mutable_f_96();
  Message2::M11::M53* v38 = v37->mutable_f_2();
  v38->set_f_0(0x453a6e9);
  Message2::M16* v39 = message->mutable_f_101();
  v39->set_f_0(s->substr(0, 5));
  Message2::M28* v40 = message->mutable_f_119();
  v40->set_f_1(s->substr(0, 9));
  Message2::M15* v41_0 = message->add_f_100();
  Message2::M15::M56* v42 = v41_0->mutable_f_4();
  (void)v42;  // Suppresses clang-tidy.
  Message2::M15::M80* v43 = v41_0->mutable_f_5();
  v43->set_f_16(0.944315);
  v43->set_f_11(0x6de7db5);
  v43->set_f_13(true);
  v43->set_f_2(s->substr(0, 210));
  v43->set_f_12(0.224464);
  v43->set_f_4(s->substr(0, 14));
  v41_0->set_f_0(s->substr(0, 5));
  int32_t array_0[6] = {
      0x6f6b5bc, 0x1caaaa, 0x19a872, 0x1cbd3c, 0x1eaa01, 0x951fc,
  };
  for (auto v : array_0) {
    message->add_f_51(v);
  }
  message->set_f_13(Message2::E2_CONST_5);
  Message2::M13* v44 = message->mutable_f_98();
  Message2::M13::M75* v45 = v44->mutable_f_10();
  v45->set_f_9(s->substr(0, 5));
  v45->set_f_15(0x9e9226a);
  v45->set_f_10(s->substr(0, 6));
  v45->set_f_1(0x47);
  v45->set_f_2(true);
  v45->set_f_11(Message2::M13::M75::E27_CONST_5);
  v45->set_f_0(0x1a4270959);
  v45->set_f_12(s->substr(0, 11));
  v45->set_f_6(false);
  v45->set_f_5(0x108ab6);
  v45->set_f_4(s->substr(0, 3));
  v44->set_f_2(0x53);
  v44->set_f_4(0.837417);
  v44->set_f_3(true);
  v44->set_f_0(s->substr(0, 7));
  v44->set_f_5(s->substr(0, 15));
  message->set_f_11(0x69);
  Message2::M36* v46 = message->mutable_f_130();
  Message2::M36::M93* v47 = v46->mutable_f_2();
  v47->set_f_5(s->substr(0, 12));
  Message2::M36::M93::M131* v48 = v47->mutable_f_9();
  (void)v48;  // Suppresses clang-tidy.
  v47->set_f_2(0xd1ce1dd);
  v47->set_f_3(0x6b);
  v47->set_f_4(s->substr(0, 10));
  Message2::M36::M93::M140* v49 = v47->mutable_f_10();
  v49->set_f_1(s->substr(0, 6));
  v49->set_f_0(Message2::M36::M93::M140::E38_CONST_4);
  v49->set_f_5(0x9328605);
  v46->set_f_0(s->substr(0, 10));
  Message2::M26* v50_0 = message->add_f_117();
  v50_0->set_f_0(s->substr(0, 5));
  Message2::M26::M89* v51_0 = v50_0->add_f_5();
  Message2::M26::M89::M138* v52 = v51_0->mutable_f_3();
  v52->set_f_0(s->substr(0, 26));
  Message2::M26::M97* v53_0 = v50_0->add_f_7();
  v53_0->set_f_0(s->substr(0, 5));
  Message2::M12* v54_0 = message->add_f_97();
  Message2::M12::M45* v55 = v54_0->mutable_f_4();
  v55->set_f_3(s->substr(0, 17));
  v55->set_f_1(Message2::M12::M45::E14_CONST_3);
  v55->set_f_0(s->substr(0, 4));
  v54_0->set_f_0(0x72);
  message->set_f_30(s->substr(0, 3));
  Message2::M14* v56 = message->mutable_f_99();
  v56->set_f_1(0x7feb5f2fc);
  Message2::M14::M77* v57 = v56->mutable_f_5();
  v57->set_f_1(s->substr(0, 62));
  v57->set_f_4(s->substr(0, 15));
  Message2::M14::M77::M113* v58 = v57->mutable_f_13();
  (void)v58;  // Suppresses clang-tidy.
  v57->set_f_0(s->substr(0, 9));
  Message2::M14::M92* v59_0 = v56->add_f_9();
  Message2::M14::M92::M122* v60 = v59_0->mutable_f_5();
  v60->set_f_4(true);
  v60->set_f_5(s->substr(0, 7));
  v60->set_f_6(false);
  v60->set_f_1(s->substr(0, 7));
  v59_0->set_f_0(s->substr(0, 6));
  message->set_f_16(0x540d4e3);
  message->set_f_9(s->substr(0, 2));
  Message2::M25* v61 = message->mutable_f_116();
  v61->set_f_4(s->substr(0, 23));
  Message2::M25::M61* v62 = v61->mutable_f_9();
  v62->set_f_0(0.556469);
  v61->set_f_2(s->substr(0, 5));
  message->set_f_12(s->substr(0, 10));
  message->set_f_7(0x2c87b61b1);
  Message2::M44* v63_0 = message->add_f_143();
  v63_0->set_f_9(s->substr(0, 21));
  Message2::M44::M105* v64 = v63_0->mutable_f_30();
  v64->set_f_11(0x74f77f00056b88);
  v64->set_f_14(s->substr(0, 20));
  v64->set_f_15(s->substr(0, 1));
  v64->set_f_6(s->substr(0, 3));
  v64->set_f_17(0x1e5ad1815);
  v64->set_f_0(0x5094221ef);
  v64->set_f_10(0x1a8d);
  v64->set_f_7(s->substr(0, 63));
  v64->set_f_13(s->substr(0, 11));
  v64->set_f_2(0.353293);
  v64->set_f_1(0.223316);
  v64->set_f_16(0x14d1f2);
  v64->set_f_5(s->substr(0, 10));
  v63_0->set_f_20(s->substr(0, 12));
  v63_0->set_f_12(Message2::M44::E13_CONST_4);
  v63_0->set_f_18(s->substr(0, 30));
  v63_0->set_f_1(s->substr(0, 15));
  v63_0->set_f_7(s->substr(0, 9));
  Message2::M44::M46* v65 = v63_0->mutable_f_26();
  v65->set_f_1(0x2e0ed00);
  v65->set_f_0(true);
  v63_0->set_f_14(0x6b563f8);
  Message2::M44::M85* v66_0 = v63_0->add_f_29();
  Message2::M44::M85::M139* v67 = v66_0->mutable_f_13();
  (void)v67;  // Suppresses clang-tidy.
  v66_0->set_f_3(s->substr(0, 7));
  v66_0->set_f_0(false);
  v66_0->set_f_1(s->substr(0, 9));
  Message2::M44::M85::M156* v68 = v66_0->mutable_f_15();
  v68->set_f_11(false);
  v68->set_f_16(0x24);
  v68->set_f_12(Message2::M44::M85::M156::E45_CONST_4);
  v68->set_f_14(false);
  v68->set_f_20(Message2::M44::M85::M156::E46_CONST_4);
  v68->set_f_0(s->substr(0, 5));
  v68->set_f_13(0x7a00c0d);
  v68->set_f_3(0x43caf116d);
  v68->set_f_9(s->substr(0, 30));
  v68->set_f_7(0xf6ec749);
  v68->set_f_2(s->substr(0, 8));
  v68->set_f_21(s->substr(0, 18));
  v68->set_f_1(s->substr(0, 3));
  v68->set_f_6(s->substr(0, 11));
  v63_0->set_f_15(0x55);
  v63_0->set_f_5(0xee94e28);
  Message2::M44::M55* v69_0 = v63_0->add_f_28();
  Message2::M44::M55::M137* v70 = v69_0->mutable_f_6();
  v70->set_f_0(s->substr(0, 15));
  Message2::M44::M55::M111* v71 = v69_0->mutable_f_3();
  v71->set_f_0(0.755381);
  Message2::M44::M55::M124* v72 = v69_0->mutable_f_4();
  v72->set_f_4(0x43b5d9e);
  v72->set_f_1(s->substr(0, 5));
  v72->set_f_5(s->substr(0, 13));
  Message2::M42* v73_0 = message->add_f_139();
  v73_0->set_f_0(s->substr(0, 6));
  Message2::M42::M74* v74 = v73_0->mutable_f_4();
  (void)v74;  // Suppresses clang-tidy.
  message->set_f_22(s->substr(0, 4));
  message->set_f_48(s->substr(0, 9));
  message->set_f_38(s->substr(0, 21));
  Message2::M37* v75 = message->mutable_f_131();
  Message2::M37::M104* v76_0 = v75->add_f_21();
  int64_t array_1[20] = {
      0x4a, 0x7d, 0x1b, 0x11, 0x4b, 0x10, 0x69, 0x18, 0x64, 0x5d,
      0x7c, 0xf,  0x79, 0xd,  0x3f, 0x74, 0x5e, 0x14, 0x5a, 0x5f,
  };
  for (auto v : array_1) {
    v76_0->add_f_2(v);
  }
  v76_0->set_f_1(0.739275);
  v75->set_f_9(Message2::M37::E10_CONST_3);
  v75->set_f_0(s->substr(0, 4));
  v75->set_f_7(0x46e1d37);
  v75->set_f_10(s->substr(0, 5));
  v75->set_f_2(false);
  v75->set_f_1(true);
  v75->set_f_3(s->substr(0, 9));
  Message2::M7* v77 = message->mutable_f_88();
  Message2::M7::M68* v78 = v77->mutable_f_3();
  v78->set_f_4(s->substr(0, 2));
  v78->set_f_2(s->substr(0, 4));
  v78->set_f_1(Message2::M7::M68::E24_CONST_2);
  v78->set_f_3(s->substr(0, 11));
  v77->set_f_0(0x1a);
  message->set_f_27(s->substr(0, 8));
  Message2::M4* v79 = message->mutable_f_82();
  v79->set_f_5(s->substr(0, 78));
  v79->set_f_1(s->substr(0, 3));
  Message2::M24* v80_0 = message->add_f_115();
  v80_0->set_f_0(s->substr(0, 3));
  Message2::M2* v81 = message->mutable_f_78();
  v81->set_f_0(0x1b97d7eae);
  message->set_f_8(s->substr(0, 10));
  Message2::M40* v82 = message->mutable_f_136();
  (void)v82;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 7));
  message->set_f_41(s->substr(0, 8));
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
}  // namespace fleetbench::rpc::P7::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_
