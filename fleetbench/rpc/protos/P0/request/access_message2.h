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
  Message2::M8* v0 = message->mutable_f_59();
  Message2::M8::M33* v1 = v0->mutable_f_7();
  v1->set_f_0(0x63534c05fd7a9d58);
  Message2::M8::M21* v2 = v0->mutable_f_6();
  Message2::M8::M21::M46* v3_0 = v2->add_f_2();
  v3_0->set_f_1(true);
  v3_0->set_f_0(0x51e143bef5df2817);
  v3_0->set_f_2(0x40);
  v2->set_f_0(s->substr(0, 9));
  v0->set_f_0(0x293dc1d1a23ef41d);
  Message2::M11* v4_0 = message->add_f_63();
  Message2::M11::M27* v5 = v4_0->mutable_f_27();
  (void)v5;  // Suppresses clang-tidy.
  v4_0->set_f_6(false);
  v4_0->set_f_10(0xbf9fe7);
  v4_0->set_f_4(s->substr(0, 20));
  v4_0->set_f_11(0x62);
  v4_0->set_f_1(0x45);
  v4_0->set_f_8(0.259464);
  v4_0->set_f_5(0x17885);
  v4_0->set_f_2(0x51b39979a4075567);
  v4_0->set_f_0(0x54bfc57);
  Message2::M11::M39* v6_0 = v4_0->add_f_28();
  v6_0->set_f_0(0x1fbf);
  v6_0->set_f_2(0x3904f);
  v6_0->set_f_4(0xdbbef0d4821af61);
  v6_0->set_f_3(0x19b044368a784bdf);
  Message2::M11::M40* v7 = v4_0->mutable_f_29();
  v7->set_f_0(0x4d274ec85228e739);
  v7->set_f_1(0x18aa608fd1cac27);
  message->set_f_13(0x7b72bef2f93939ef);
  message->set_f_9(0x4);
  message->set_f_23(0xdbcea73);
  message->set_f_8(0x64);
  message->set_f_28(true);
  message->set_f_22(0x74);
  Message2::M10* v8_0 = message->add_f_61();
  Message2::M10::M15* v9_0 = v8_0->add_f_5();
  v9_0->set_f_0(s->substr(0, 331));
  Message2::M10::M26* v10 = v8_0->mutable_f_7();
  v10->set_f_0(s->substr(0, 14));
  Message2::M10::M14* v11_0 = v8_0->add_f_4();
  v11_0->set_f_0(false);
  Message2::M10::M45* v12_0 = v8_0->add_f_8();
  v12_0->set_f_0(0x41);
  v8_0->set_f_0(0x20c0af01);
  message->set_f_15(0x36be8add109bf8a5);
  Message2::M6* v13 = message->mutable_f_57();
  Message2::M6::M41* v14 = v13->mutable_f_10();
  v14->set_f_0(0x76b26a22);
  v14->set_f_1(s->substr(0, 184));
  v14->set_f_2(0x2c1aabcb4812e669);
  v14->set_f_3(0x6a8d0018);
  v13->set_f_0(0xa248242fcf0c5a3);
  v13->set_f_1(0x40e20c8a);
  v13->set_f_3(0xb);
  Message2::M6::M16* v15_0 = v13->add_f_6();
  v15_0->set_f_17(0x757ca8e6cf58d082);
  v15_0->set_f_20(s->substr(0, 22));
  v15_0->set_f_14(0x11);
  v15_0->set_f_5(0xbac10c3);
  v15_0->set_f_4(true);
  v15_0->set_f_23(0x69cd026786cf6d39);
  v15_0->set_f_26(0x5fc90fcc75e6e0fb);
  v15_0->set_f_15(0x3c11abcf);
  v15_0->set_f_29(0x2085cf1d27665dfc);
  v15_0->set_f_3(s->substr(0, 20));
  v15_0->set_f_22(0x4d);
  v15_0->add_f_30(Message2::M6::M16::E6_CONST_3);
  v15_0->set_f_11(s->substr(0, 64));
  v15_0->set_f_7(Message2::M6::M16::E4_CONST_5);
  v15_0->set_f_19(s->substr(0, 89));
  v15_0->set_f_6(0x3b);
  v15_0->set_f_9(0x1fee0c55d734bbf8);
  v15_0->set_f_12(s->substr(0, 72));
  v15_0->set_f_18(s->substr(0, 100));
  v15_0->set_f_21(s->substr(0, 72));
  v15_0->set_f_2(0x881689d);
  v15_0->set_f_1(Message2::M6::M16::E3_CONST_4);
  v15_0->set_f_13(0x1ce58818);
  v15_0->set_f_25(0x7da10c92fc3f280d);
  Message2::M6::M28* v16_0 = v13->add_f_9();
  v16_0->set_f_4(0x7bf536238c0a5d90);
  v16_0->set_f_3(0x3213572fdfee02eb);
  v16_0->set_f_0(false);
  v16_0->set_f_2(true);
  v13->set_f_2(true);
  message->set_f_16(0x2dbd72d5fc19a704);
  message->set_f_24(0x11b5ff);
  message->set_f_25(s->substr(0, 21));
  Message2::E1 array_1[21] = {
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_5,
      Message2::E1_CONST_2, Message2::E1_CONST_5, Message2::E1_CONST_2,
      Message2::E1_CONST_1, Message2::E1_CONST_4, Message2::E1_CONST_2,
      Message2::E1_CONST_3, Message2::E1_CONST_5, Message2::E1_CONST_4,
      Message2::E1_CONST_2, Message2::E1_CONST_3, Message2::E1_CONST_3,
      Message2::E1_CONST_2, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_5, Message2::E1_CONST_3, Message2::E1_CONST_4,
  };
  for (auto v : array_1) {
    message->add_f_18(v);
  }
  message->set_f_12(s->substr(0, 284));
  message->add_f_20(Message2::E2_CONST_5);
  message->set_f_11(0x22cb363c3900f31a);
  message->set_f_2(0.431069);
  Message2::M5* v17 = message->mutable_f_54();
  Message2::M5::M24* v18 = v17->mutable_f_5();
  Message2::M5::M24::M60* v19 = v18->mutable_f_2();
  v19->set_f_1(0xe);
  v19->set_f_0(0x142c83f128538fdc);
  Message2::M5::M24::M60::M83* v20_0 = v19->add_f_8();
  v20_0->set_f_5(s->substr(0, 4));
  Message2::M5::M24::M60::M83::M100* v21 = v20_0->mutable_f_11();
  v21->set_f_1(0.635595);
  v21->set_f_3(0x20);
  v21->set_f_4(true);
  Message2::M5::M24::M60::M83::M100::E18 array_2[16] = {
      Message2::M5::M24::M60::M83::M100::E18_CONST_4,
      Message2::M5::M24::M60::M83::M100::E18_CONST_5,
      Message2::M5::M24::M60::M83::M100::E18_CONST_2,
      Message2::M5::M24::M60::M83::M100::E18_CONST_5,
      Message2::M5::M24::M60::M83::M100::E18_CONST_1,
      Message2::M5::M24::M60::M83::M100::E18_CONST_4,
      Message2::M5::M24::M60::M83::M100::E18_CONST_5,
      Message2::M5::M24::M60::M83::M100::E18_CONST_2,
      Message2::M5::M24::M60::M83::M100::E18_CONST_3,
      Message2::M5::M24::M60::M83::M100::E18_CONST_3,
      Message2::M5::M24::M60::M83::M100::E18_CONST_3,
      Message2::M5::M24::M60::M83::M100::E18_CONST_3,
      Message2::M5::M24::M60::M83::M100::E18_CONST_5,
      Message2::M5::M24::M60::M83::M100::E18_CONST_5,
      Message2::M5::M24::M60::M83::M100::E18_CONST_4,
      Message2::M5::M24::M60::M83::M100::E18_CONST_2,
  };
  for (auto v : array_2) {
    v21->add_f_5(v);
  }
  v21->set_f_0(0x404bcf2ca220f1ce);
  v20_0->set_f_0(0x54365da5);
  v20_0->set_f_3(0x3c13387cd248ee8f);
  v19->set_f_2(0x69fae73);
  v19->set_f_4(0x4e);
  v19->set_f_3(s->substr(0, 16));
  Message2::M5::M24::M73* v22 = v18->mutable_f_3();
  v22->set_f_0(0x8);
  message->set_f_21(0.691440);
  message->set_f_26(0x3427);
  message->set_f_19(0x55);
  Message2::M9* v23 = message->mutable_f_60();
  v23->set_f_0(0x461e0425);
  Message2::M9::M35* v24 = v23->mutable_f_6();
  Message2::M9::M35::M53* v25 = v24->mutable_f_3();
  v25->set_f_1(0x3ba);
  v25->set_f_3(0x1af2be7);
  Message2::M9::M35::M53::M81* v26 = v25->mutable_f_10();
  (void)v26;  // Suppresses clang-tidy.
  v25->set_f_0(0xb1ff756);
  v25->set_f_2(0x3c510464cead8fe5);
  Message2::M9::M34* v27_0 = v23->add_f_5();
  Message2::M9::M34::M68* v28 = v27_0->mutable_f_2();
  v28->set_f_0(0x6c2c9fc02be1d3c7);
  Message2::M9::M42* v29_0 = v23->add_f_10();
  Message2::M9::M42::M66* v30 = v29_0->mutable_f_2();
  (void)v30;  // Suppresses clang-tidy.
  Message2::M9::M42::M75* v31 = v29_0->mutable_f_3();
  v31->set_f_0(0x26923320ff9c14d4);
  Message2::M9::M17* v32_0 = v23->add_f_3();
  v32_0->set_f_0(0x64fe6213f0804f91);
  Message2::M1* v33 = message->mutable_f_48();
  v33->set_f_4(0x2f95fdc7af1b3b14);
  Message2::M1::M12* v34_0 = v33->add_f_10();
  v34_0->set_f_0(s->substr(0, 14));
  v33->set_f_3(0x82b62d5);
  Message2::M1::M29* v35_0 = v33->add_f_12();
  (void)v35_0;  // Suppresses clang-tidy.
  v33->set_f_2(0x54fbc12);
  v33->set_f_0(s->substr(0, 16));
  v33->set_f_1(0.570053);
  message->set_f_5(0x3477dfb9bb354637);
  Message2::M2* v36_0 = message->add_f_50();
  Message2::M2::M31* v37 = v36_0->mutable_f_3();
  v37->set_f_16(0x1551);
  v37->set_f_6(s->substr(0, 8));
  v37->set_f_7(false);
  v37->set_f_20(0x7912003);
  v37->set_f_9(0x58);
  Message2::M2::M31::M76* v38 = v37->mutable_f_32();
  Message2::M2::M31::M76::M88* v39 = v38->mutable_f_9();
  Message2::M2::M31::M76::M88::M107* v40 = v39->mutable_f_5();
  v40->set_f_0(0x202ebc8c);
  v38->set_f_2(s->substr(0, 40));
  v38->set_f_5(0xa852f42);
  v38->set_f_3(s->substr(0, 76));
  v38->set_f_4(0xa4fdffc);
  v38->set_f_0(0.716702);
  v37->set_f_4(0x73);
  v37->set_f_5(0x4a1a50d4d67c412e);
  v37->set_f_2(0x54761ea1);
  v37->set_f_10(0x7c);
  v37->set_f_8(0x25);
  v37->set_f_1(0x2faf284);
  v37->set_f_0(0x98d04ddf1d5bb7f);
  v37->set_f_18(0x79c9878d3);
  v37->set_f_11(0x160f5a);
  v37->set_f_13(s->substr(0, 2));
  v37->set_f_14(0x8d86307);
  Message2::M2::M23* v41 = v36_0->mutable_f_2();
  Message2::M2::M23::M62* v42 = v41->mutable_f_4();
  v42->set_f_0(false);
  Message2::M2::M23::M70* v43 = v41->mutable_f_6();
  (void)v43;  // Suppresses clang-tidy.
  Message2::M2::M23::M58* v44 = v41->mutable_f_3();
  v44->set_f_2(0x351c486);
  Message2::M2::M23::M58::M82* v45 = v44->mutable_f_8();
  Message2::M2::M23::M58::M82::M95* v46 = v45->mutable_f_5();
  (void)v46;  // Suppresses clang-tidy.
  Message2::M2::M23::M58::M82::M97* v47 = v45->mutable_f_7();
  (void)v47;  // Suppresses clang-tidy.
  v45->set_f_1(s->substr(0, 28));
  Message2::M2::M23::M58::M82::M105* v48 = v45->mutable_f_10();
  v48->set_f_0(0.299609);
  v44->set_f_0(0x6a9bd291bf0eb6c8);
  v44->set_f_3(0x6b0a8c89eb5f7d12);
  v44->set_f_1(true);
  Message2::M2::M36* v49_0 = v36_0->add_f_5();
  v49_0->set_f_0(0x33f2);
  Message2::M2::M36::M61* v50 = v49_0->mutable_f_5();
  v50->set_f_1(true);
  v50->set_f_2(0x3014312);
  v50->set_f_0(0x57616a082089ff59);
  message->set_f_14(s->substr(0, 5));
  Message2::M4* v51_0 = message->add_f_53();
  Message2::M4::M20* v52_0 = v51_0->add_f_4();
  v52_0->set_f_4(0xfed5959);
  v52_0->set_f_10(s->substr(0, 20));
  v52_0->set_f_5(s->substr(0, 1));
  v52_0->set_f_11(0x18d19aba);
  v52_0->set_f_2(0x57e28583454bfc24);
  v52_0->set_f_6(0x7d);
  v52_0->set_f_9(s->substr(0, 16));
  v52_0->add_f_0(Message2::M4::M20::E7_CONST_4);
  v52_0->set_f_3(0x74e310f9);
  Message2::M4::M22* v53 = v51_0->mutable_f_6();
  Message2::M4::M22::M63* v54 = v53->mutable_f_5();
  Message2::M4::M22::M63::M84* v55 = v54->mutable_f_6();
  v55->set_f_0(0x5afb8acfb8518a59);
  v55->set_f_2(0x2e4ef3c7795ee959);
  v55->set_f_1(0x4c);
  v55->set_f_3(0x283e8ce04f118646);
  v54->set_f_1(s->substr(0, 125));
  v54->set_f_2(0x65e4b6aa049ce8c4);
  Message2::M4::M22::M57* v56 = v53->mutable_f_3();
  v56->set_f_0(0x1a2b7c44);
  v53->set_f_0(0xa);
  Message2::M4::M22::M55* v57 = v53->mutable_f_2();
  v57->add_f_0(Message2::M4::M22::M55::E11_CONST_3);
  Message2::M4::M22::M71* v58 = v53->mutable_f_6();
  v58->set_f_0(0xe4abad3257efb76);
  v51_0->set_f_0(0x23);
  message->set_f_7(0x112c54);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_0(true);
  Message2::E1 array_0[21] = {
      Message2::E1_CONST_2, Message2::E1_CONST_5, Message2::E1_CONST_3,
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_3,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_5,
      Message2::E1_CONST_5, Message2::E1_CONST_5, Message2::E1_CONST_2,
      Message2::E1_CONST_1, Message2::E1_CONST_2, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_5, Message2::E1_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_18(v);
  }
  message->set_f_13(0x24cd4860e3a597d4);
  message->set_f_25(s->substr(0, 139));
  Message2::M9* v0 = message->mutable_f_60();
  Message2::M9::M38* v1_0 = v0->add_f_7();
  v1_0->set_f_0(s->substr(0, 106));
  Message2::M9::M35* v2 = v0->mutable_f_6();
  v2->set_f_0(0x286c);
  v0->set_f_0(0x83f1981);
  v0->set_f_1(0x71);
  Message2::M9::M42* v3_0 = v0->add_f_10();
  v3_0->set_f_0(0x3727325707058a41);
  Message2::M9::M17* v4_0 = v0->add_f_3();
  v4_0->set_f_0(0x381b5af53ef3d9a8);
  v4_0->set_f_1(0xd901d5164abd441);
  message->set_f_17(s->substr(0, 251));
  message->set_f_12(s->substr(0, 17));
  message->set_f_7(0x5d);
  Message2::M10* v5_0 = message->add_f_61();
  Message2::M10::M45* v6_0 = v5_0->add_f_8();
  v6_0->set_f_0(0x29);
  Message2::M10::M15* v7_0 = v5_0->add_f_5();
  v7_0->set_f_0(s->substr(0, 17));
  Message2::M10::M15::M78* v8_0 = v7_0->add_f_3();
  v8_0->set_f_3(s->substr(0, 3911));
  v8_0->set_f_13(0x33fc0ca6e2a63cb1);
  v8_0->set_f_19(s->substr(0, 421));
  v8_0->set_f_14(true);
  v8_0->set_f_18(0x6f4401a60c41be7b);
  v8_0->set_f_24(0x75);
  v8_0->set_f_6(0x678a8da5174a19e1);
  v8_0->add_f_17(Message2::M10::M15::M78::E14_CONST_3);
  v8_0->set_f_23(0x17bb);
  v8_0->set_f_16(0x3c0a187faf8b5e4a);
  v8_0->set_f_8(false);
  v8_0->set_f_7(0x45);
  v8_0->set_f_20(false);
  v8_0->set_f_9(0x71);
  v8_0->set_f_11(s->substr(0, 8));
  v8_0->set_f_27(0x20);
  v8_0->set_f_2(0x41d2b);
  Message2::M10::M25* v9 = v5_0->mutable_f_6();
  v9->set_f_3(s->substr(0, 4));
  v9->set_f_2(0x268372b4e1012442);
  v9->set_f_4(0x5b54ecadcc9621d2);
  v9->set_f_0(false);
  v9->set_f_1(0x47cf94835ffedb4e);
  v5_0->set_f_0(0x184d8510);
  Message2::M10::M14* v10_0 = v5_0->add_f_4();
  v10_0->set_f_0(true);
  Message2::M4* v11_0 = message->add_f_53();
  v11_0->set_f_0(0xe8f92fb);
  Message2::M4::M20* v12_0 = v11_0->add_f_4();
  v12_0->set_f_6(0x3e);
  v12_0->set_f_1(0x28b44c9e);
  v12_0->set_f_10(s->substr(0, 148));
  v12_0->set_f_12(true);
  v12_0->set_f_11(0x5eb01a5f);
  message->set_f_26(0xf0f);
  Message2::M5* v13 = message->mutable_f_54();
  v13->set_f_0(0xee959e7);
  Message2::M5::M13* v14 = v13->mutable_f_4();
  v14->set_f_0(0xe536993e2168d48);
  Message2::M5::M13::M59* v15 = v14->mutable_f_5();
  v15->set_f_1(0x67);
  v15->set_f_0(0x3426d30);
  Message2::M5::M24* v16 = v13->mutable_f_5();
  Message2::M5::M24::M60* v17 = v16->mutable_f_2();
  Message2::M5::M24::M60::M83* v18_0 = v17->add_f_8();
  v18_0->set_f_1(0.776563);
  v18_0->set_f_4(0x50ab231e4eb7c17e);
  v18_0->set_f_5(s->substr(0, 37));
  v18_0->set_f_0(0x195c4934);
  v18_0->set_f_2(s->substr(0, 12));
  v17->set_f_3(s->substr(0, 482));
  v17->set_f_4(0x2de5);
  v17->set_f_0(0x65fa913e7b30bec6);
  v17->set_f_2(0x7c);
  v16->set_f_0(0x328e);
  message->set_f_11(0x253ad3ef799e9708);
  message->set_f_15(0x38be4a3d58c1d4e1);
  message->set_f_8(0x16dd);
  Message2::M7* v19 = message->mutable_f_58();
  v19->set_f_1(0.494769);
  v19->set_f_0(0x1e46);
  v19->set_f_2(0x75);
  message->set_f_28(true);
  message->set_f_2(0.831999);
  Message2::M3* v20 = message->mutable_f_51();
  v20->set_f_0(0x7a);
  message->set_f_27(s->substr(0, 1));
  message->set_f_19(0xe);
  message->set_f_29(0x54);
  message->set_f_9(0x4039535);
  message->set_f_24(0xf4aa5);
  message->set_f_14(s->substr(0, 7));
  message->set_f_4(0x66b6e147a96951ff);
  Message2::M2* v21_0 = message->add_f_50();
  v21_0->set_f_0(0.978778);
  Message2::M2::M36* v22_0 = v21_0->add_f_5();
  Message2::M2::M36::M51* v23 = v22_0->mutable_f_3();
  v23->set_f_0(0x6a7bd19);
  v22_0->set_f_0(0x74);
  Message2::M2::M36::M61* v24 = v22_0->mutable_f_5();
  v24->set_f_2(0xb8bfc41);
  Message2::M2::M36::M61::M89* v25_0 = v24->add_f_7();
  v25_0->set_f_1(true);
  v25_0->set_f_5(0x53afb61ddaa64957);
  v25_0->set_f_0(0x2178c170265cb6e7);
  v25_0->set_f_2(0x7c);
  Message2::M2::M23* v26 = v21_0->mutable_f_2();
  v26->set_f_0(0x53);
  Message2::M2::M23::M62* v27 = v26->mutable_f_4();
  (void)v27;  // Suppresses clang-tidy.
  Message2::M2::M31* v28 = v21_0->mutable_f_3();
  v28->set_f_11(0x6bb872a);
  v28->set_f_7(true);
  v28->set_f_9(0xda70b4d);
  v28->set_f_8(0xd928b);
  v28->set_f_6(s->substr(0, 117));
  v28->set_f_17(s->substr(0, 40));
  v28->set_f_19(0xc);
  v28->set_f_20(0x62);
  v28->set_f_12(s->substr(0, 7));
  v28->set_f_16(0x918f95a);
  v28->set_f_15(s->substr(0, 295));
  v28->set_f_13(s->substr(0, 206));
  v28->set_f_14(0xb6c7812);
  v28->set_f_10(0x5d7b2db);
  v28->set_f_1(0x169703);
  v28->set_f_5(0x790a3357a5682f59);
  Message2::M2::M31::M76* v29 = v28->mutable_f_32();
  v29->set_f_3(s->substr(0, 45));
  v29->set_f_1(s->substr(0, 17));
  Message2::M2::M31::M76::M88* v30 = v29->mutable_f_9();
  Message2::M2::M31::M76::M88::M107* v31 = v30->mutable_f_5();
  (void)v31;  // Suppresses clang-tidy.
  v28->set_f_3(true);
  v28->set_f_0(0x2b0be4fe4631f2c);
  v28->set_f_2(0x2a49bbe8);
  Message2::M8* v32 = message->mutable_f_59();
  Message2::M8::M33* v33 = v32->mutable_f_7();
  v33->set_f_0(0x110a50884e7a3dba);
  Message2::M8::M33::M52* v34_0 = v33->add_f_3();
  v34_0->set_f_0(0.578957);
  v32->set_f_0(0x349edd41960d9388);
  message->set_f_5(0x8faa4a276b34571);
  Message2::E2 array_1[20] = {
      Message2::E2_CONST_2, Message2::E2_CONST_4, Message2::E2_CONST_1,
      Message2::E2_CONST_2, Message2::E2_CONST_1, Message2::E2_CONST_3,
      Message2::E2_CONST_4, Message2::E2_CONST_4, Message2::E2_CONST_2,
      Message2::E2_CONST_2, Message2::E2_CONST_5, Message2::E2_CONST_3,
      Message2::E2_CONST_1, Message2::E2_CONST_3, Message2::E2_CONST_2,
      Message2::E2_CONST_3, Message2::E2_CONST_5, Message2::E2_CONST_1,
      Message2::E2_CONST_1, Message2::E2_CONST_1,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  message->set_f_21(0.972339);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M2* v0_0 = message->add_f_50();
  Message2::M2::M31* v1 = v0_0->mutable_f_3();
  v1->set_f_14(0x63);
  v1->set_f_4(0x174119);
  v1->set_f_6(s->substr(0, 19));
  v1->set_f_2(0x73c6dfdd);
  v1->set_f_15(s->substr(0, 21));
  v1->set_f_13(s->substr(0, 31));
  v1->set_f_5(0x255830d68d6513db);
  v1->set_f_0(0x60949fc14a924523);
  v1->set_f_17(s->substr(0, 205));
  v1->set_f_20(0x4d6ab);
  v1->set_f_8(0x27);
  v1->set_f_12(s->substr(0, 8));
  v1->set_f_3(false);
  v1->set_f_16(0x1);
  v1->set_f_7(false);
  v1->set_f_10(0x571f6dc);
  v0_0->set_f_0(0.805348);
  Message2::M2::M36* v2_0 = v0_0->add_f_5();
  v2_0->set_f_0(0x144);
  message->set_f_14(s->substr(0, 232));
  Message2::M9* v3 = message->mutable_f_60();
  Message2::M9::M34* v4_0 = v3->add_f_5();
  (void)v4_0;  // Suppresses clang-tidy.
  v3->set_f_1(0xb);
  v3->set_f_0(0x30276efd);
  Message2::M9::M35* v5 = v3->mutable_f_6();
  v5->set_f_0(0x24f9);
  Message2::M8* v6 = message->mutable_f_59();
  Message2::M8::M18* v7 = v6->mutable_f_5();
  v7->set_f_0(0x716858ca68f5637b);
  v6->set_f_0(0x2d879a093b253437);
  Message2::M8::M21* v8 = v6->mutable_f_6();
  v8->set_f_0(s->substr(0, 21));
  Message2::M8::M21::M46* v9_0 = v8->add_f_2();
  v9_0->set_f_2(0x64f2576);
  v9_0->set_f_0(0x22e6510ec2d9189f);
  v9_0->set_f_1(false);
  Message2::M8::M33* v10 = v6->mutable_f_7();
  v10->set_f_0(0x8c1228ca02913c1);
  Message2::M8::M33::M52* v11_0 = v10->add_f_3();
  (void)v11_0;  // Suppresses clang-tidy.
  message->set_f_26(0x7c);
  message->set_f_29(0x3c);
  message->set_f_6(0x6faca04c64101ac3);
  message->set_f_1(0x14a8530aefbef452);
  Message2::M3* v12 = message->mutable_f_51();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_13(0x42dec3063c46be9d);
  message->set_f_24(0x662a3a);
  message->set_f_27(s->substr(0, 329));
  message->set_f_23(0x3719f329);
  message->set_f_15(0x3b3eb766ac8ee871);
  Message2::M10* v13_0 = message->add_f_61();
  Message2::M10::M25* v14 = v13_0->mutable_f_6();
  v14->set_f_0(true);
  v13_0->set_f_0(0x2ef446c3);
  Message2::M10::M14* v15_0 = v13_0->add_f_4();
  (void)v15_0;  // Suppresses clang-tidy.
  message->set_f_22(0xb81);
  Message2::M1* v16 = message->mutable_f_48();
  Message2::M1::M29* v17_0 = v16->add_f_12();
  v17_0->set_f_0(0xd1bb475);
  v16->set_f_1(0.169483);
  v16->set_f_5(0.036508);
  Message2::M1::M12* v18_0 = v16->add_f_10();
  Message2::M1::M12::M64* v19 = v18_0->mutable_f_3();
  v19->set_f_0(0x4b75bbef21eeb6fa);
  v18_0->set_f_0(s->substr(0, 30));
  v16->set_f_0(s->substr(0, 112));
  v16->set_f_2(0x4ce32fb);
  message->set_f_0(false);
  message->set_f_19(0x60596);
  message->set_f_21(0.299098);
  message->add_f_18(Message2::E1_CONST_1);
  message->set_f_25(s->substr(0, 5));
  message->set_f_16(0x16a05694b26972db);
  Message2::M4* v20_0 = message->add_f_53();
  Message2::M4::M20* v21_0 = v20_0->add_f_4();
  v21_0->set_f_1(0x3b4722e);
  v21_0->set_f_2(0x703aed5afef05dc0);
  v21_0->set_f_12(false);
  v21_0->set_f_9(s->substr(0, 20));
  v21_0->set_f_11(0x3783fa49);
  v21_0->set_f_4(0x1da1e4);
  v21_0->set_f_6(0xa92367f);
  v21_0->set_f_3(0x3fd50046);
  v21_0->set_f_8(s->substr(0, 7));
  v21_0->set_f_5(s->substr(0, 12));
  v21_0->set_f_7(0x1d62c71683485852);
  Message2::M4::M22* v22 = v20_0->mutable_f_6();
  v22->set_f_0(0x1b);
  Message2::M4::M22::M57* v23 = v22->mutable_f_3();
  v23->set_f_1(false);
  Message2::M4::M22::M63* v24 = v22->mutable_f_5();
  v24->set_f_1(s->substr(0, 17));
  v24->set_f_2(0x5d8dd7ae1154b071);
  Message2::M4::M22::M55* v25 = v22->mutable_f_2();
  v25->add_f_0(Message2::M4::M22::M55::E11_CONST_5);
  v20_0->set_f_0(0x34);
  message->set_f_4(0x3132bc6e4884dabd);
  Message2::E2 array_0[17] = {
      Message2::E2_CONST_5, Message2::E2_CONST_3, Message2::E2_CONST_3,
      Message2::E2_CONST_5, Message2::E2_CONST_3, Message2::E2_CONST_3,
      Message2::E2_CONST_2, Message2::E2_CONST_1, Message2::E2_CONST_5,
      Message2::E2_CONST_3, Message2::E2_CONST_1, Message2::E2_CONST_5,
      Message2::E2_CONST_4, Message2::E2_CONST_2, Message2::E2_CONST_1,
      Message2::E2_CONST_4, Message2::E2_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_20(v);
  }
  message->set_f_11(0x4685025663a4e21f);
  message->set_f_28(false);
  Message2::M5* v26 = message->mutable_f_54();
  Message2::M5::M13* v27 = v26->mutable_f_4();
  v27->set_f_0(0x5c18a7041e805c2f);
  Message2::M5::M13::M59* v28 = v27->mutable_f_5();
  v28->set_f_0(0x15);
  v28->set_f_1(0x7e);
  v26->set_f_0(0x68);
  message->set_f_8(0x2cf7);
  message->set_f_10(0x33);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_15(0x106c4bd49c3d76b9);
  message->set_f_1(0x4b0ed5ead17c498);
  Message2::M7* v0 = message->mutable_f_58();
  v0->set_f_1(0.232849);
  Message2::M7::M37* v1_0 = v0->add_f_6();
  v1_0->set_f_0(0x7);
  Message2::M7::M37::M74* v2 = v1_0->mutable_f_11();
  v2->set_f_4(false);
  v2->set_f_0(s->substr(0, 26));
  v1_0->set_f_3(s->substr(0, 66));
  v1_0->set_f_1(s->substr(0, 27));
  v0->set_f_0(0x53);
  v0->set_f_2(0x2b);
  message->set_f_13(0x224d37e1a67571d8);
  message->add_f_20(Message2::E2_CONST_1);
  message->set_f_25(s->substr(0, 22));
  Message2::M4* v3_0 = message->add_f_53();
  v3_0->set_f_0(0x7d);
  Message2::M4::M22* v4 = v3_0->mutable_f_6();
  Message2::M4::M22::M71* v5 = v4->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M4::M22::M55* v6 = v4->mutable_f_2();
  v6->add_f_0(Message2::M4::M22::M55::E11_CONST_3);
  v4->set_f_0(0x3);
  Message2::M4::M22::M63* v7 = v4->mutable_f_5();
  Message2::M4::M22::M63::M84* v8 = v7->mutable_f_6();
  v8->set_f_3(0x41d66e75656d0a8e);
  v8->set_f_1(0x4c);
  v7->set_f_0(0x26495900b6b201f9);
  Message2::M4::M20* v9_0 = v3_0->add_f_4();
  v9_0->add_f_0(Message2::M4::M20::E7_CONST_2);
  v9_0->set_f_8(s->substr(0, 20));
  v9_0->set_f_12(false);
  v9_0->set_f_11(0x424a2d08);
  v9_0->set_f_6(0x11d696);
  v9_0->set_f_3(0x314eae5a);
  v9_0->set_f_10(s->substr(0, 15));
  v9_0->set_f_4(0x54435);
  v9_0->set_f_5(s->substr(0, 168));
  v9_0->set_f_9(s->substr(0, 22));
  message->set_f_10(0x12fc3eb);
  Message2::M9* v10 = message->mutable_f_60();
  Message2::M9::M17* v11_0 = v10->add_f_3();
  v11_0->set_f_0(0x2af175a56b9b4182);
  Message2::M9::M38* v12_0 = v10->add_f_7();
  v12_0->set_f_0(s->substr(0, 460));
  Message2::M9::M35* v13 = v10->mutable_f_6();
  Message2::M9::M35::M53* v14 = v13->mutable_f_3();
  v14->set_f_3(0xc262bac);
  v14->set_f_1(0x3b);
  Message2::M9::M35::M53::M81* v15 = v14->mutable_f_10();
  v15->set_f_0(0x3563b2d604b11343);
  v14->set_f_2(0x598673314f5dd774);
  v14->set_f_4(0x13);
  v14->set_f_0(0x74);
  v13->set_f_0(0x75);
  v10->set_f_1(0x8);
  Message2::M9::M34* v16_0 = v10->add_f_5();
  v16_0->set_f_0(0x6f);
  Message2::M9::M34::M68* v17 = v16_0->mutable_f_2();
  v17->set_f_0(0x727b448a0fb92a63);
  message->set_f_27(s->substr(0, 21));
  message->set_f_29(0x21);
  message->set_f_3(0x5442db42bcef8d90);
  Message2::M2* v18_0 = message->add_f_50();
  Message2::M2::M36* v19_0 = v18_0->add_f_5();
  Message2::M2::M36::M51* v20 = v19_0->mutable_f_3();
  v20->set_f_0(0x3bbdc6c);
  v19_0->set_f_0(0x1c3d);
  v18_0->set_f_0(0.116037);
  Message2::M2::M31* v21 = v18_0->mutable_f_3();
  v21->set_f_0(0x6c9126dcaee02da);
  v21->set_f_8(0xf7635);
  Message2::M2::M31::M54* v22_0 = v21->add_f_31();
  Message2::M2::M31::M54::M93* v23 = v22_0->mutable_f_3();
  Message2::M2::M31::M54::M93::M102* v24 = v23->mutable_f_3();
  v24->set_f_0(0x7604993);
  Message2::M2::M31::M54::M93::M102::M110* v25_0 = v24->add_f_3();
  v25_0->set_f_0(0x39);
  v23->set_f_0(0x46732050d5ca15d7);
  v22_0->set_f_0(0xaabaf45);
  v21->set_f_19(0x6c);
  v21->set_f_13(s->substr(0, 330));
  v21->set_f_18(0x4faa3a50c880d0);
  v21->set_f_9(0x68);
  v21->set_f_11(0x4b);
  v21->set_f_16(0xb41a8c6);
  v21->set_f_7(false);
  v21->set_f_4(0x28);
  v21->set_f_2(0xf368173);
  v21->set_f_6(s->substr(0, 6));
  v21->set_f_1(0x7e);
  Message2::M2::M23* v26 = v18_0->mutable_f_2();
  Message2::M2::M23::M70* v27 = v26->mutable_f_6();
  (void)v27;  // Suppresses clang-tidy.
  Message2::M2::M23::M58* v28 = v26->mutable_f_3();
  Message2::M2::M23::M58::M82* v29 = v28->mutable_f_8();
  v29->set_f_2(0x2ce3efbffc9f0024);
  v29->set_f_0(0x6);
  Message2::M2::M23::M58::M82::M101* v30 = v29->mutable_f_8();
  v30->set_f_0(0x1c);
  Message2::M2::M23::M58::M82::M95* v31 = v29->mutable_f_5();
  v31->set_f_0(Message2::M2::M23::M58::M82::M95::E17_CONST_3);
  v28->set_f_2(0x44);
  v28->set_f_0(0x2dddee804e62a9f3);
  v26->set_f_0(0xf605c0a);
  message->set_f_24(0x379c);
  Message2::M6* v32 = message->mutable_f_57();
  v32->set_f_3(0xda270d3);
  v32->set_f_2(true);
  Message2::M6::M16* v33_0 = v32->add_f_6();
  v33_0->set_f_22(0x49);
  v33_0->set_f_17(0x5480a654921fd16d);
  v33_0->set_f_0(0x1a4afdea402d211c);
  v33_0->set_f_4(true);
  v33_0->set_f_15(0x5f39247b);
  v33_0->set_f_23(0x6301e0a68edc982e);
  v33_0->set_f_10(0.995769);
  v33_0->set_f_7(Message2::M6::M16::E4_CONST_2);
  v33_0->set_f_19(s->substr(0, 16));
  Message2::M6::M16::M47* v34_0 = v33_0->add_f_47();
  (void)v34_0;  // Suppresses clang-tidy.
  v33_0->set_f_6(0x21df);
  v33_0->set_f_27(Message2::M6::M16::E5_CONST_1);
  v33_0->set_f_25(0x6b3220651771b70b);
  v33_0->set_f_11(s->substr(0, 211));
  Message2::M6::M16::M67* v35_0 = v33_0->add_f_49();
  Message2::M6::M16::M67::M85* v36_0 = v35_0->add_f_3();
  v36_0->set_f_0(0x661807ab5b4dbdb0);
  Message2::M6::M16::M67::M90* v37_0 = v35_0->add_f_4();
  Message2::M6::M16::M67::M90::M109* v38 = v37_0->mutable_f_3();
  v38->set_f_2(0x29df073aa208f04);
  v38->set_f_3(0x6);
  v38->set_f_1(0xb294d2db9846ecd);
  v38->set_f_0(0x284);
  Message2::M6::M16::M67::M94* v39 = v35_0->mutable_f_6();
  v39->set_f_0(0x3529b64aa10513cc);
  v33_0->set_f_24(0x3f);
  v33_0->set_f_26(0x5362aca6317dabb7);
  v33_0->set_f_5(0xdfa07e3);
  v33_0->set_f_9(0x6ec6287ab549f7ac);
  v33_0->set_f_1(Message2::M6::M16::E3_CONST_1);
  v33_0->set_f_28(true);
  v33_0->set_f_21(s->substr(0, 11));
  v33_0->set_f_12(s->substr(0, 32));
  v33_0->set_f_18(s->substr(0, 316));
  Message2::M10* v40_0 = message->add_f_61();
  Message2::M10::M15* v41_0 = v40_0->add_f_5();
  v41_0->set_f_0(s->substr(0, 270));
  Message2::M10::M26* v42 = v40_0->mutable_f_7();
  v42->set_f_0(s->substr(0, 114));
  Message2::M10::M14* v43_0 = v40_0->add_f_4();
  v43_0->set_f_0(true);
  Message2::M10::M45* v44_0 = v40_0->add_f_8();
  v44_0->set_f_0(0x79);
  Message2::M10::M45::M77* v45_0 = v44_0->add_f_3();
  v45_0->set_f_0(s->substr(0, 5));
  v40_0->set_f_0(0x2a27ee67);
  message->set_f_5(0x2f7699f4cfb1bbcd);
  message->set_f_4(0x49c14c30ccb3c353);
  message->set_f_2(0.278367);
  Message2::M3* v46 = message->mutable_f_51();
  Message2::M3::M43* v47 = v46->mutable_f_2();
  Message2::M3::M43::M69* v48_0 = v47->add_f_2();
  v48_0->set_f_4(0x1e);
  v48_0->set_f_3(0xf71ad);
  v48_0->set_f_1(0x6b9b840);
  v48_0->set_f_5(0x2b8c);
  message->set_f_12(s->substr(0, 312));
  message->set_f_6(0x643d580ac43e66b7);
  message->set_f_16(0x1a0c42543fa599e9);
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
