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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message1.pb.h"

namespace fleetbench::rpc::P0::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M7* v0_0 = message->add_f_53();
  Message1::M7::M43* v1 = v0_0->mutable_f_8();
  Message1::M7::M43::M52* v2 = v1->mutable_f_3();
  Message1::M7::M43::M52::E10 array_1[21] = {
      Message1::M7::M43::M52::E10_CONST_5, Message1::M7::M43::M52::E10_CONST_1,
      Message1::M7::M43::M52::E10_CONST_5, Message1::M7::M43::M52::E10_CONST_3,
      Message1::M7::M43::M52::E10_CONST_2, Message1::M7::M43::M52::E10_CONST_3,
      Message1::M7::M43::M52::E10_CONST_1, Message1::M7::M43::M52::E10_CONST_5,
      Message1::M7::M43::M52::E10_CONST_3, Message1::M7::M43::M52::E10_CONST_1,
      Message1::M7::M43::M52::E10_CONST_4, Message1::M7::M43::M52::E10_CONST_5,
      Message1::M7::M43::M52::E10_CONST_3, Message1::M7::M43::M52::E10_CONST_2,
      Message1::M7::M43::M52::E10_CONST_2, Message1::M7::M43::M52::E10_CONST_5,
      Message1::M7::M43::M52::E10_CONST_2, Message1::M7::M43::M52::E10_CONST_2,
      Message1::M7::M43::M52::E10_CONST_4, Message1::M7::M43::M52::E10_CONST_5,
      Message1::M7::M43::M52::E10_CONST_5,
  };
  for (auto v : array_1) {
    v2->add_f_0(v);
  }
  Message1::M7::M43::M52::M83* v3 = v2->mutable_f_4();
  Message1::M7::M43::M52::M83::M109* v4_0 = v3->add_f_5();
  (void)v4_0;  // Suppresses clang-tidy.
  v3->set_f_2(s->substr(0, 483));
  v3->set_f_1(0.295715);
  v3->set_f_0(s->substr(0, 89));
  Message1::M7::M43::M52::M99* v5_0 = v2->add_f_6();
  v5_0->set_f_0(0x7bc2338e20f570db);
  Message1::M7::M43::M79* v6 = v1->mutable_f_6();
  v6->set_f_1(0xb);
  v6->set_f_0(0x3a);
  Message1::M7::M43::M80* v7 = v1->mutable_f_7();
  Message1::M7::M43::M80::M85* v8_0 = v7->add_f_2();
  v8_0->set_f_0(s->substr(0, 2));
  Message1::M7::M43::M80::M85::M103* v9 = v8_0->mutable_f_3();
  v9->set_f_1(0x3959823b);
  Message1::M7::M43::M80::M85::M103::E24 array_2[5] = {
      Message1::M7::M43::M80::M85::M103::E24_CONST_2,
      Message1::M7::M43::M80::M85::M103::E24_CONST_4,
      Message1::M7::M43::M80::M85::M103::E24_CONST_3,
      Message1::M7::M43::M80::M85::M103::E24_CONST_2,
      Message1::M7::M43::M80::M85::M103::E24_CONST_3,
  };
  for (auto v : array_2) {
    v9->add_f_0(v);
  }
  v7->set_f_0(s->substr(0, 454));
  v1->set_f_0(0x14);
  Message1::M7::M43::M70* v10 = v1->mutable_f_4();
  Message1::M7::M43::M70::M92* v11 = v10->mutable_f_4();
  Message1::M7::M43::M70::M92::M102* v12 = v11->mutable_f_3();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M7::M43::M70::M92::M117* v13 = v11->mutable_f_5();
  v13->set_f_0(0x5c0ae2f);
  v13->set_f_1(0x38);
  Message1::M7::M43::M70::M92::M118* v14 = v11->mutable_f_7();
  v14->set_f_0(0.385544);
  Message1::M7::M43::M70::M92::M115* v15 = v11->mutable_f_4();
  v15->set_f_0(true);
  Message1::M7::M43::M70::M92::M115::M120* v16 = v15->mutable_f_4();
  v16->set_f_1(0.704482);
  v11->set_f_0(0x4f);
  v10->set_f_0(s->substr(0, 520));
  Message1::M7::M43::M70::M88* v17 = v10->mutable_f_3();
  v17->set_f_3(0x22);
  v17->set_f_4(0x6a);
  v17->set_f_2(0x70);
  Message1::M7::M22* v18_0 = v0_0->add_f_4();
  v18_0->set_f_0(0xecc20d5);
  Message1::M7::M36* v19 = v0_0->mutable_f_7();
  v19->set_f_1(0.122118);
  v19->set_f_6(0.628714);
  v19->set_f_4(0x7994d4de24c5a08f);
  v19->set_f_5(true);
  v19->set_f_11(0x1f3c8fdd15edcd45);
  v19->set_f_12(s->substr(0, 4));
  Message1::M7::M36::M64* v20_0 = v19->add_f_31();
  v20_0->set_f_0(0x26);
  v20_0->set_f_1(0x61);
  v19->set_f_21(0x5bc6f195bc82f059);
  v19->set_f_19(0x10611555);
  v19->set_f_2(0x19);
  v19->set_f_16(0.033202);
  v19->set_f_9(s->substr(0, 97));
  v19->set_f_7(s->substr(0, 13));
  v19->set_f_8(0x21);
  v19->set_f_18(0x10);
  v19->set_f_0(0x34346acde47fb3c5);
  v19->set_f_17(0x6aedcb63174ff498);
  Message1::M7::M27* v21 = v0_0->mutable_f_6();
  v21->set_f_1(0xb3513e);
  v21->set_f_0(s->substr(0, 25));
  Message1::M7::M27::M77* v22 = v21->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_11(0.863906);
  message->set_f_21(0x61fe5c5e);
  Message1::M9* v23 = message->mutable_f_56();
  Message1::M9::M38* v24 = v23->mutable_f_7();
  v24->set_f_0(Message1::M9::M38::E4_CONST_5);
  v24->set_f_7(0xaf23073571ead8c);
  v24->set_f_4(0x428410ab);
  v24->add_f_3(Message1::M9::M38::E6_CONST_2);
  v24->set_f_6(0.311354);
  Message1::M9::M38::M73* v25_0 = v24->add_f_14();
  (void)v25_0;  // Suppresses clang-tidy.
  v24->set_f_5(s->substr(0, 15));
  Message1::M9::M38::M74* v26 = v24->mutable_f_15();
  v26->set_f_1(Message1::M9::M38::M74::E19_CONST_4);
  v26->set_f_3(false);
  v26->set_f_4(false);
  v26->set_f_0(0x5d);
  Message1::M9::M38::M74::M89* v27 = v26->mutable_f_8();
  Message1::M9::M38::M74::M89::E22 array_3[21] = {
      Message1::M9::M38::M74::M89::E22_CONST_1,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_2,
      Message1::M9::M38::M74::M89::E22_CONST_4,
      Message1::M9::M38::M74::M89::E22_CONST_1,
      Message1::M9::M38::M74::M89::E22_CONST_4,
      Message1::M9::M38::M74::M89::E22_CONST_2,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_3,
      Message1::M9::M38::M74::M89::E22_CONST_1,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_3,
      Message1::M9::M38::M74::M89::E22_CONST_4,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_1,
      Message1::M9::M38::M74::M89::E22_CONST_2,
      Message1::M9::M38::M74::M89::E22_CONST_4,
      Message1::M9::M38::M74::M89::E22_CONST_5,
      Message1::M9::M38::M74::M89::E22_CONST_3,
      Message1::M9::M38::M74::M89::E22_CONST_5,
  };
  for (auto v : array_3) {
    v27->add_f_0(v);
  }
  v27->set_f_3(0x1f4dba5338b0f3f2);
  v27->set_f_1(0x5194061cca8af231);
  v27->set_f_4(0x11);
  v26->set_f_2(0x322c5be24e7766f1);
  Message1::M9::M18* v28 = v23->mutable_f_4();
  v28->set_f_0(0x11);
  Message1::M9::M18::M62* v29 = v28->mutable_f_4();
  v29->set_f_1(s->substr(0, 148));
  Message1::M9::M18::M65* v30_0 = v28->add_f_5();
  Message1::M9::M18::M65::M86* v31_0 = v30_0->add_f_4();
  Message1::M9::M18::M65::M86::M111* v32_0 = v31_0->add_f_2();
  v32_0->set_f_0(true);
  message->set_f_26(0x52e6cfa5);
  message->set_f_24(true);
  message->set_f_25(0x6a);
  message->set_f_23(s->substr(0, 32));
  message->set_f_3(s->substr(0, 71));
  message->set_f_6(0x5bafc9d3e6d7f1d9);
  message->set_f_4(0x66ce25e577e255ff);
  message->set_f_14(0x9);
  Message1::M10* v33_0 = message->add_f_58();
  Message1::M10::M45* v34 = v33_0->mutable_f_11();
  Message1::M10::M45::M60* v35_0 = v34->add_f_7();
  v35_0->set_f_0(0x260bb98e);
  v34->set_f_1(0x469a7b8);
  v34->set_f_0(0x1405);
  Message1::M10::M34* v36_0 = v33_0->add_f_8();
  v36_0->set_f_1(s->substr(0, 7));
  v36_0->set_f_22(s->substr(0, 93));
  v36_0->set_f_30(0x4c49e62c3007a7e5);
  v36_0->set_f_17(0xea126ba5b1718a);
  v36_0->set_f_29(0x122d0136d36da00a);
  v36_0->set_f_4(s->substr(0, 16));
  v36_0->set_f_27(0x5c4872b);
  v36_0->set_f_26(0x2d);
  v36_0->set_f_10(0x54);
  v36_0->set_f_0(0.270858);
  v36_0->set_f_3(0x19);
  v36_0->set_f_19(0x3d7ca93d510fe27f);
  v36_0->set_f_24(0x16efed2246336b50);
  v36_0->set_f_14(0x4fcdf19c565f22d5);
  v36_0->set_f_23(0xc8e8282);
  v36_0->set_f_25(0x75daaeff161e1e0);
  v36_0->set_f_20(0x62);
  v36_0->set_f_7(0x4a);
  Message1::M10::M25* v37 = v33_0->mutable_f_7();
  Message1::M10::M25::M75* v38 = v37->mutable_f_2();
  (void)v38;  // Suppresses clang-tidy.
  v33_0->set_f_0(0x57036bc5);
  Message1::M10::M41* v39 = v33_0->mutable_f_9();
  Message1::M10::M41::M57* v40_0 = v39->add_f_2();
  v40_0->set_f_0(0x75f169aa62ee2c7b);
  Message1::M10::M41::M57::M91* v41_0 = v40_0->add_f_4();
  v41_0->set_f_0(0x6e);
  Message1::M10::M41::M57::M91::M119* v42_0 = v41_0->add_f_2();
  v42_0->set_f_4(false);
  v42_0->set_f_1(true);
  v42_0->set_f_5(true);
  v42_0->set_f_2(0x1eacc4af3d826ed1);
  v39->add_f_0(Message1::M10::M41::E7_CONST_5);
  Message1::M11* v43_0 = message->add_f_59();
  Message1::M11::M29* v44 = v43_0->mutable_f_11();
  v44->set_f_0(true);
  Message1::M11::M23* v45_0 = v43_0->add_f_10();
  Message1::M11::M23::M51* v46 = v45_0->mutable_f_3();
  v46->set_f_0(0x2e);
  Message1::M11::M23::M82* v47 = v45_0->mutable_f_4();
  v47->set_f_1(0.461242);
  v47->add_f_2(Message1::M11::M23::M82::E21_CONST_1);
  v47->set_f_0(s->substr(0, 4));
  v47->set_f_4(0x4d);
  v47->set_f_3(s->substr(0, 2));
  v43_0->set_f_0(0x333ebf0af76b0c36);
  v43_0->set_f_1(0x6f62ca0);
  message->set_f_1(0x2b74cf0);
  Message1::M3* v48 = message->mutable_f_46();
  Message1::M3::M24* v49 = v48->mutable_f_5();
  Message1::M3::M24::M55* v50 = v49->mutable_f_3();
  v50->set_f_0(0x70678cd339d831fa);
  Message1::M3::M48* v51 = v48->mutable_f_7();
  v51->set_f_0(0x6d4c7fe);
  Message1::M3::M48::M71* v52 = v51->mutable_f_2();
  v52->add_f_0(Message1::M3::M48::M71::E17_CONST_1);
  Message1::M3::M31* v53_0 = v48->add_f_6();
  (void)v53_0;  // Suppresses clang-tidy.
  message->set_f_5(Message1::E1_CONST_3);
  message->set_f_8(s->substr(0, 219));
  message->set_f_2(0x4);
  message->set_f_27(true);
  Message1::M6* v54 = message->mutable_f_50();
  v54->set_f_0(0x37ebf63a);
  Message1::M12* v55 = message->mutable_f_61();
  v55->set_f_0(s->substr(0, 345));
  Message1::M12::M49* v56 = v55->mutable_f_2();
  v56->set_f_0(0x1c5979);
  Message1::M8* v57 = message->mutable_f_54();
  Message1::M8::M28* v58_0 = v57->add_f_3();
  v58_0->set_f_0(s->substr(0, 90));
  Message1::M8::M39* v59 = v57->mutable_f_5();
  v59->set_f_0(0x2db2e12a);
  message->set_f_20(0.922401);
  Message1::M4* v60 = message->mutable_f_47();
  v60->set_f_0(s->substr(0, 16));
  Message1::M2* v61 = message->mutable_f_45();
  Message1::M2::M46* v62_0 = v61->add_f_3();
  (void)v62_0;  // Suppresses clang-tidy.
  v61->set_f_0(0.190805);
  message->set_f_29(0x6);
  message->set_f_10(0x1f05);
  message->set_f_9(0x244c);
  message->set_f_17(0.643422);
  message->set_f_19(0x4b77b05ca526fb7f);
  Message1::M1* v63_0 = message->add_f_44();
  v63_0->set_f_0(s->substr(0, 454));
  Message1::M1::M35* v64 = v63_0->mutable_f_3();
  v64->set_f_0(0x76);
  Message1::M1::M35::M66* v65 = v64->mutable_f_5();
  v65->set_f_0(0x33);
  v65->set_f_3(0x7724e928);
  v65->set_f_2(0x46ff1caa71381df);
  v65->set_f_4(false);
  Message1::M1::M35::M56* v66_0 = v64->add_f_4();
  Message1::M1::M35::M56::M96* v67 = v66_0->mutable_f_3();
  Message1::M1::M35::M56::M96::M116* v68 = v67->mutable_f_4();
  v68->set_f_0(s->substr(0, 107));
  v67->set_f_0(s->substr(0, 111));
  message->set_f_16(s->substr(0, 507));
  message->set_f_12(Message1::E2_CONST_3);
  Message1::M13* v69 = message->mutable_f_62();
  v69->set_f_3(s->substr(0, 424));
  v69->set_f_2(0x1bd9a8b183a39a2e);
  message->set_f_7(0x7a5566d747af907f);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_11(0.058954);
  message->set_f_18(0x2f46);
  message->set_f_14(0x38b8f9);
  message->set_f_16(s->substr(0, 92));
  message->set_f_7(0x1b62ad4e44bcee60);
  message->set_f_4(0x2ebacb403f585ae0);
  message->set_f_3(s->substr(0, 5));
  Message1::M6* v0 = message->mutable_f_50();
  Message1::M6::M47* v1_0 = v0->add_f_4();
  Message1::M6::M47::M59* v2 = v1_0->mutable_f_6();
  v2->set_f_2(false);
  v2->set_f_0(0x6af9cf19713d0396);
  Message1::M6::M47::M67* v3 = v1_0->mutable_f_7();
  v3->add_f_0(Message1::M6::M47::M67::E14_CONST_2);
  v1_0->set_f_3(0xf162212f707f6d1);
  v0->set_f_0(0x64f2e24a);
  Message1::M6::M17* v4 = v0->mutable_f_2();
  Message1::M6::M17::M69* v5 = v4->mutable_f_4();
  v5->set_f_20(true);
  v5->set_f_12(0x1c);
  v5->set_f_16(s->substr(0, 122));
  v5->set_f_2(s->substr(0, 80));
  v5->set_f_18(true);
  v5->set_f_6(s->substr(0, 9));
  v5->set_f_21(s->substr(0, 385));
  v5->set_f_11(s->substr(0, 22));
  v5->set_f_19(0x3cef4375429f36a3);
  v5->set_f_8(0x5173ae4bd3ab3f6c);
  v5->set_f_14(Message1::M6::M17::M69::E15_CONST_5);
  v5->set_f_0(0x7d9ce1e7);
  v5->set_f_9(s->substr(0, 1));
  v5->set_f_1(s->substr(0, 113));
  v5->set_f_17(0x38);
  v5->set_f_3(0x4f);
  v5->set_f_5(0x13d8d49178338c2e);
  v5->set_f_7(0x1d3192);
  Message1::M10* v6_0 = message->add_f_58();
  Message1::M10::M34* v7_0 = v6_0->add_f_8();
  v7_0->set_f_8(0x52);
  v7_0->set_f_30(0x24ae77152fd7257);
  v7_0->set_f_20(0x72);
  v7_0->set_f_19(0x4493de98fba0f1fb);
  v7_0->set_f_7(0x7110d17);
  v7_0->set_f_12(true);
  v7_0->set_f_26(0x31);
  v7_0->set_f_17(0x75);
  v7_0->set_f_18(false);
  v7_0->set_f_5(0x6a);
  v7_0->set_f_2(0x2a);
  v7_0->set_f_29(0xddc4045356c2d25);
  v7_0->set_f_11(s->substr(0, 1384));
  Message1::M10::M34::E3 array_0[13] = {
      Message1::M10::M34::E3_CONST_5, Message1::M10::M34::E3_CONST_2,
      Message1::M10::M34::E3_CONST_4, Message1::M10::M34::E3_CONST_4,
      Message1::M10::M34::E3_CONST_3, Message1::M10::M34::E3_CONST_2,
      Message1::M10::M34::E3_CONST_5, Message1::M10::M34::E3_CONST_3,
      Message1::M10::M34::E3_CONST_1, Message1::M10::M34::E3_CONST_1,
      Message1::M10::M34::E3_CONST_1, Message1::M10::M34::E3_CONST_4,
      Message1::M10::M34::E3_CONST_4,
  };
  for (auto v : array_0) {
    v7_0->add_f_6(v);
  }
  v7_0->set_f_25(0x47c9594307c5fb70);
  v7_0->set_f_14(0x487b9cb98309a37a);
  v7_0->set_f_0(0.120319);
  v7_0->set_f_16(0.129908);
  v7_0->set_f_24(0x6e38cb77de1e7a3b);
  v7_0->set_f_15(s->substr(0, 3));
  v7_0->set_f_9(0x6d47930e05ac09ae);
  v7_0->set_f_3(0x2839);
  v7_0->set_f_13(0x4223e03bc00ae451);
  v6_0->set_f_1(s->substr(0, 63));
  Message1::M10::M41* v8 = v6_0->mutable_f_9();
  Message1::M10::M41::E7 array_1[20] = {
      Message1::M10::M41::E7_CONST_2, Message1::M10::M41::E7_CONST_2,
      Message1::M10::M41::E7_CONST_2, Message1::M10::M41::E7_CONST_1,
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_5,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_1,
      Message1::M10::M41::E7_CONST_2, Message1::M10::M41::E7_CONST_3,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_1,
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_4,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_5,
      Message1::M10::M41::E7_CONST_1, Message1::M10::M41::E7_CONST_5,
      Message1::M10::M41::E7_CONST_3, Message1::M10::M41::E7_CONST_3,
  };
  for (auto v : array_1) {
    v8->add_f_0(v);
  }
  Message1::M10::M41::M57* v9_0 = v8->add_f_2();
  v9_0->set_f_0(0x24c16e410b0ccd81);
  Message1::M10::M45* v10 = v6_0->mutable_f_11();
  Message1::M10::M45::M60* v11_0 = v10->add_f_7();
  (void)v11_0;  // Suppresses clang-tidy.
  v10->set_f_1(0xf4c7d86);
  v10->set_f_0(0x39);
  Message1::M10::M25* v12 = v6_0->mutable_f_7();
  Message1::M10::M25::M75* v13 = v12->mutable_f_2();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_0(s->substr(0, 23));
  message->set_f_13(0x57);
  Message1::M5* v14 = message->mutable_f_48();
  Message1::M5::M16* v15_0 = v14->add_f_3();
  v15_0->set_f_1(0xd163c5c);
  v15_0->set_f_2(s->substr(0, 3));
  v15_0->set_f_0(0xb9d8931);
  Message1::M5::M33* v16 = v14->mutable_f_5();
  v16->set_f_0(s->substr(0, 397));
  Message1::M9* v17 = message->mutable_f_56();
  v17->set_f_0(0x388816ba71c22c24);
  Message1::M9::M18* v18 = v17->mutable_f_4();
  Message1::M9::M18::M68* v19_0 = v18->add_f_7();
  Message1::M9::M18::M68::M97* v20_0 = v19_0->add_f_4();
  v20_0->set_f_0(0x2baaa4dd70325887);
  v19_0->set_f_0(0x16d5);
  Message1::M9::M18::M68::M87* v21_0 = v19_0->add_f_3();
  (void)v21_0;  // Suppresses clang-tidy.
  Message1::M9::M18::M65* v22_0 = v18->add_f_5();
  Message1::M9::M18::M65::M86* v23_0 = v22_0->add_f_4();
  v23_0->set_f_0(0x72eab4dcb9333b59);
  Message1::M9::M18::M65::M86::M111* v24_0 = v23_0->add_f_2();
  (void)v24_0;  // Suppresses clang-tidy.
  v22_0->set_f_0(Message1::M9::M18::M65::E13_CONST_3);
  v18->set_f_0(0x36);
  Message1::M9::M18::M62* v25 = v18->mutable_f_4();
  (void)v25;  // Suppresses clang-tidy.
  Message1::M9::M38* v26 = v17->mutable_f_7();
  v26->set_f_4(0x1ab0c10a);
  v26->set_f_0(Message1::M9::M38::E4_CONST_4);
  v26->set_f_6(0.947892);
  v26->add_f_3(Message1::M9::M38::E6_CONST_4);
  v26->set_f_2(Message1::M9::M38::E5_CONST_4);
  Message1::M9::M38::M73* v27_0 = v26->add_f_14();
  v27_0->add_f_0(Message1::M9::M38::M73::E18_CONST_2);
  Message1::M9::M38::M73::M101* v28 = v27_0->mutable_f_3();
  v28->set_f_12(0x7e67927cc6c60028);
  v28->set_f_4(0x5cc8d8a);
  v28->set_f_15(Message1::M9::M38::M73::M101::E23_CONST_3);
  v28->set_f_31(s->substr(0, 39));
  v28->set_f_16(s->substr(0, 19));
  v28->set_f_27(s->substr(0, 5));
  v28->set_f_9(0x4bb72e8);
  v28->set_f_21(0x13d5b706e70b58f7);
  v28->set_f_30(0xb1fee29);
  v28->set_f_13(0x5db);
  v28->set_f_19(0x493);
  v28->set_f_17(0x3b);
  v28->set_f_18(0xf);
  v28->set_f_5(0.723515);
  v28->set_f_3(s->substr(0, 100));
  v28->set_f_0(0x2b);
  v28->set_f_28(0x53);
  v28->set_f_23(0x76493706b7d4b3d0);
  v28->set_f_7(0x67c9fa1ac0297b8e);
  v28->set_f_2(0x37);
  v28->set_f_26(0x70);
  v28->set_f_24(false);
  v28->set_f_20(true);
  v26->set_f_5(s->substr(0, 94));
  v26->set_f_7(0x7af342524f73a2ac);
  Message1::M9::M38::M76* v29 = v26->mutable_f_16();
  v29->set_f_0(s->substr(0, 6));
  v29->set_f_2(0x67917f7680545401);
  v29->set_f_3(0x79bcb49);
  v29->set_f_6(s->substr(0, 93));
  v29->set_f_13(0x1a9c04d0);
  v29->add_f_8(Message1::M9::M38::M76::E20_CONST_1);
  v29->set_f_9(0x75);
  v29->set_f_4(0x423718f9);
  v29->set_f_5(0x74);
  v29->set_f_10(0x10);
  Message1::M9::M38::M74* v30 = v26->mutable_f_15();
  v30->set_f_1(Message1::M9::M38::M74::E19_CONST_2);
  v30->set_f_2(0x6e335c20907cf770);
  message->set_f_8(s->substr(0, 463));
  message->set_f_28(s->substr(0, 19));
  Message1::M13* v31 = message->mutable_f_62();
  v31->set_f_1(0x50f661e684decf9);
  v31->set_f_0(s->substr(0, 350));
  v31->set_f_3(s->substr(0, 15));
  message->set_f_29(0x42);
  message->set_f_0(0xe);
  message->set_f_22(false);
  Message1::M1* v32_0 = message->add_f_44();
  v32_0->set_f_0(s->substr(0, 374));
  Message1::M1::M32* v33_0 = v32_0->add_f_2();
  v33_0->set_f_2(0x1040d4c976ac46c6);
  message->set_f_25(0x10a92);
  message->set_f_27(false);
  message->set_f_19(0x118607434158b6fa);
  message->set_f_10(0x49);
  Message1::M7* v34_0 = message->add_f_53();
  Message1::M7::M27* v35 = v34_0->mutable_f_6();
  Message1::M7::M27::M77* v36 = v35->mutable_f_3();
  v36->set_f_1(0x54);
  v36->set_f_0(0.870944);
  Message1::M15* v37_0 = message->add_f_64();
  Message1::M15::M44* v38_0 = v37_0->add_f_7();
  v38_0->set_f_3(0x5a08049c944b0105);
  v38_0->set_f_0(Message1::M15::M44::E8_CONST_3);
  v38_0->set_f_8(0x36b7f9fa7d008d07);
  v38_0->set_f_7(0x4d5553c0d5f6052c);
  v38_0->set_f_11(0x441a9371d249d7cf);
  v38_0->set_f_12(0xf252a0e);
  v38_0->set_f_2(0x2);
  v38_0->set_f_4(s->substr(0, 349));
  v37_0->set_f_3(0x40);
  v37_0->set_f_1(s->substr(0, 15));
  message->set_f_26(0x36d27745);
  message->set_f_2(0x235e0);
  message->set_f_15(0x2ef2c51429530307);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M7* v0_0 = message->add_f_53();
  v0_0->set_f_0(0x1762ee21);
  Message1::M7::M22* v1_0 = v0_0->add_f_4();
  v1_0->set_f_0(0x78);
  Message1::M7::M36* v2 = v0_0->mutable_f_7();
  v2->set_f_6(0.466130);
  v2->set_f_18(0xa);
  v2->set_f_2(0x9fc15a7);
  v2->set_f_8(0xb87b333);
  v2->set_f_15(s->substr(0, 5));
  v2->set_f_3(0x40);
  v2->set_f_17(0x7649e156fdd4383b);
  v2->set_f_1(0.581173);
  v2->set_f_5(false);
  v2->set_f_10(s->substr(0, 84));
  v2->set_f_20(0x6a46aa13);
  v2->set_f_11(0xe4644797441ae82);
  v2->set_f_12(s->substr(0, 33));
  v2->set_f_7(s->substr(0, 8));
  v2->set_f_16(0.428331);
  v2->set_f_9(s->substr(0, 11));
  v2->set_f_21(0x349c3467bc5d4f1e);
  message->set_f_27(false);
  Message1::M10* v3_0 = message->add_f_58();
  Message1::M10::M34* v4_0 = v3_0->add_f_8();
  v4_0->set_f_18(false);
  v4_0->set_f_10(0x2d14);
  v4_0->set_f_3(0x75);
  v4_0->set_f_25(0x503cd1809acdf9fb);
  v4_0->set_f_2(0x400bbc);
  v4_0->set_f_7(0x44);
  v4_0->set_f_21(0x5e2b5123f39512bb);
  v4_0->set_f_27(0xf012eb8);
  v4_0->set_f_5(0x1192df);
  v4_0->set_f_9(0x55d03532b339088a);
  v4_0->set_f_17(0x2548bf7d941);
  v4_0->set_f_1(s->substr(0, 12));
  v4_0->set_f_28(0x34);
  v4_0->set_f_22(s->substr(0, 23));
  v4_0->set_f_23(0x1b);
  v4_0->set_f_29(0x7ecfd6bbfff537bb);
  v4_0->set_f_26(0x5a);
  v4_0->set_f_15(s->substr(0, 25));
  v4_0->set_f_14(0x3336bcae8cb796fc);
  v4_0->set_f_16(0.712109);
  v3_0->set_f_1(s->substr(0, 18));
  Message1::M10::M41* v5 = v3_0->mutable_f_9();
  Message1::M10::M41::E7 array_0[20] = {
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_2,
      Message1::M10::M41::E7_CONST_1, Message1::M10::M41::E7_CONST_2,
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_4,
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_2,
      Message1::M10::M41::E7_CONST_4, Message1::M10::M41::E7_CONST_3,
      Message1::M10::M41::E7_CONST_2, Message1::M10::M41::E7_CONST_4,
      Message1::M10::M41::E7_CONST_2, Message1::M10::M41::E7_CONST_4,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_1,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_4,
      Message1::M10::M41::E7_CONST_5, Message1::M10::M41::E7_CONST_2,
  };
  for (auto v : array_0) {
    v5->add_f_0(v);
  }
  Message1::M10::M41::M57* v6_0 = v5->add_f_2();
  Message1::M10::M41::M57::M91* v7_0 = v6_0->add_f_4();
  v7_0->set_f_0(0xbd2c854);
  v3_0->set_f_0(0x8051966);
  Message1::M10::M45* v8 = v3_0->mutable_f_11();
  v8->set_f_1(0x8e395aa);
  Message1::M10::M25* v9 = v3_0->mutable_f_7();
  Message1::M10::M25::M75* v10 = v9->mutable_f_2();
  (void)v10;  // Suppresses clang-tidy.
  Message1::M10::M19* v11 = v3_0->mutable_f_6();
  v11->set_f_3(0.519625);
  v11->set_f_1(s->substr(0, 19));
  v11->set_f_2(0x6a);
  v11->set_f_0(0x8401a33);
  v11->set_f_4(s->substr(0, 37));
  message->set_f_15(0x202f3644a8a42b08);
  message->set_f_14(0x65);
  message->set_f_0(0xe3aff89);
  Message1::M13* v12 = message->mutable_f_62();
  v12->set_f_3(s->substr(0, 13));
  v12->set_f_2(0x6174d4240adc3f95);
  Message1::M9* v13 = message->mutable_f_56();
  v13->set_f_0(0x1cf681a547b983d0);
  Message1::M2* v14 = message->mutable_f_45();
  Message1::M2::M46* v15_0 = v14->add_f_3();
  v15_0->set_f_0(0xfdf9e88);
  Message1::M2::M46::M81* v16 = v15_0->mutable_f_5();
  v16->set_f_1(0x13745036ce2d3268);
  Message1::M2::M46::M81::M84* v17 = v16->mutable_f_9();
  Message1::M2::M46::M81::M84::M113* v18 = v17->mutable_f_5();
  Message1::M2::M46::M81::M84::M113::E25 array_1[8] = {
      Message1::M2::M46::M81::M84::M113::E25_CONST_5,
      Message1::M2::M46::M81::M84::M113::E25_CONST_4,
      Message1::M2::M46::M81::M84::M113::E25_CONST_4,
      Message1::M2::M46::M81::M84::M113::E25_CONST_3,
      Message1::M2::M46::M81::M84::M113::E25_CONST_3,
      Message1::M2::M46::M81::M84::M113::E25_CONST_2,
      Message1::M2::M46::M81::M84::M113::E25_CONST_5,
      Message1::M2::M46::M81::M84::M113::E25_CONST_3,
  };
  for (auto v : array_1) {
    v18->add_f_0(v);
  }
  v16->set_f_0(0x142d7a);
  v16->set_f_2(0xa0c83b462ce29b6);
  v16->set_f_3(0x26);
  message->set_f_23(s->substr(0, 44));
  Message1::M4* v19 = message->mutable_f_47();
  v19->set_f_1(0x296ac89fd1129eec);
  v19->set_f_0(s->substr(0, 8));
  message->set_f_25(0x3f);
  Message1::M3* v20 = message->mutable_f_46();
  Message1::M3::M48* v21 = v20->mutable_f_7();
  v21->set_f_0(0x784117a);
  Message1::M3::M48::M71* v22 = v21->mutable_f_2();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M3::M31* v23_0 = v20->add_f_6();
  v23_0->set_f_0(s->substr(0, 7));
  message->set_f_9(0x14);
  Message1::M1* v24_0 = message->add_f_44();
  Message1::M1::M35* v25 = v24_0->mutable_f_3();
  Message1::M1::M35::M56* v26_0 = v25->add_f_4();
  v26_0->set_f_0(0x3f4d5bd1cc434c02);
  v24_0->set_f_0(s->substr(0, 327));
  Message1::M1::M32* v27_0 = v24_0->add_f_2();
  v27_0->set_f_0(s->substr(0, 488));
  v27_0->set_f_1(s->substr(0, 315));
  v27_0->set_f_2(0xf68dd2c510f4c9);
  message->set_f_19(0x5414e64a3333092a);
  message->set_f_8(s->substr(0, 307));
  message->set_f_22(true);
  message->set_f_2(0x124e);
  message->set_f_13(0x6c);
  message->set_f_10(0x1c0f60);
  message->set_f_5(Message1::E1_CONST_3);
  message->set_f_17(0.136379);
  message->set_f_12(Message1::E2_CONST_4);
  Message1::M15* v28_0 = message->add_f_64();
  v28_0->set_f_2(s->substr(0, 23));
  v28_0->set_f_3(0x9b73624);
  v28_0->set_f_1(s->substr(0, 125));
  Message1::M14* v29 = message->mutable_f_63();
  Message1::M14::M30* v30 = v29->mutable_f_16();
  v30->set_f_0(0.769960);
  Message1::M14::M37* v31 = v29->mutable_f_17();
  Message1::M14::M37::M50* v32 = v31->mutable_f_2();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M14::M42* v33 = v29->mutable_f_24();
  (void)v33;  // Suppresses clang-tidy.
  v29->set_f_3(s->substr(0, 7));
  v29->set_f_0(0x4f7afffdb14d2326);
  v29->set_f_6(0x2783563c3a466849);
  Message1::M14::M26* v34 = v29->mutable_f_15();
  Message1::M14::M26::M54* v35_0 = v34->add_f_3();
  v35_0->set_f_0(0x53c9f5a02e43977e);
  Message1::M14::M26::M54::M94* v36_0 = v35_0->add_f_2();
  v36_0->set_f_1(s->substr(0, 118));
  v36_0->set_f_2(0x5);
  v34->set_f_0(0x4efdd5db3955d0b8);
  Message1::M14::M26::M63* v37 = v34->mutable_f_4();
  Message1::M14::M26::M63::E12 array_2[19] = {
      Message1::M14::M26::M63::E12_CONST_4,
      Message1::M14::M26::M63::E12_CONST_4,
      Message1::M14::M26::M63::E12_CONST_4,
      Message1::M14::M26::M63::E12_CONST_5,
      Message1::M14::M26::M63::E12_CONST_4,
      Message1::M14::M26::M63::E12_CONST_3,
      Message1::M14::M26::M63::E12_CONST_5,
      Message1::M14::M26::M63::E12_CONST_5,
      Message1::M14::M26::M63::E12_CONST_5,
      Message1::M14::M26::M63::E12_CONST_1,
      Message1::M14::M26::M63::E12_CONST_2,
      Message1::M14::M26::M63::E12_CONST_5,
      Message1::M14::M26::M63::E12_CONST_2,
      Message1::M14::M26::M63::E12_CONST_1,
      Message1::M14::M26::M63::E12_CONST_4,
      Message1::M14::M26::M63::E12_CONST_2,
      Message1::M14::M26::M63::E12_CONST_2,
      Message1::M14::M26::M63::E12_CONST_3,
      Message1::M14::M26::M63::E12_CONST_1,
  };
  for (auto v : array_2) {
    v37->add_f_0(v);
  }
  Message1::M14::M26::M63::M98* v38 = v37->mutable_f_2();
  Message1::M14::M26::M63::M98::M110* v39 = v38->mutable_f_11();
  v39->set_f_0(s->substr(0, 22));
  Message1::M14::M26::M63::M98::M106* v40 = v38->mutable_f_8();
  v40->set_f_0(0x68d3d5b);
  v40->set_f_1(0x74405f9c1242c109);
  v40->set_f_2(s->substr(0, 486));
  v38->set_f_3(s->substr(0, 36));
  v38->set_f_4(0x25f24ba);
  v38->set_f_0(0x26);
  v38->set_f_2(0x37);
  v29->set_f_4(s->substr(0, 12));
  v29->set_f_2(s->substr(0, 29));
  v29->set_f_5(true);
  v29->set_f_1(0x4f5eed7d5af70db0);
  message->set_f_7(0x607f38bc307db527);
  message->set_f_26(0x71fea336);
  message->set_f_1(0x7);
  message->set_f_18(0x563b04b);
  message->set_f_24(false);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_21(0x582784e5);
  Message1::M13* v0 = message->mutable_f_62();
  v0->set_f_0(s->substr(0, 31));
  v0->set_f_1(0x5044342110b77975);
  v0->set_f_3(s->substr(0, 3111));
  v0->set_f_2(0x20c7924b679bc14a);
  message->set_f_3(s->substr(0, 41));
  Message1::M8* v1 = message->mutable_f_54();
  Message1::M8::M28* v2_0 = v1->add_f_3();
  v2_0->set_f_2(0.964956);
  v2_0->set_f_0(s->substr(0, 96));
  v2_0->set_f_1(0xa5fbddb);
  message->set_f_9(0x3895);
  message->set_f_1(0xbd31c1b);
  Message1::M2* v3 = message->mutable_f_45();
  Message1::M2::M46* v4_0 = v3->add_f_3();
  v4_0->set_f_0(0x3c);
  Message1::M2::M46::M81* v5 = v4_0->mutable_f_5();
  Message1::M2::M46::M81::M84* v6 = v5->mutable_f_9();
  Message1::M2::M46::M81::M84::M113* v7 = v6->mutable_f_5();
  (void)v7;  // Suppresses clang-tidy.
  v6->set_f_0(0x2c854097);
  Message1::M2::M46::M81::M84::M104* v8 = v6->mutable_f_4();
  v8->set_f_0(0x5fd6089317ac0aa9);
  v5->set_f_0(0x28);
  v5->set_f_3(0x6333786c0);
  v5->set_f_1(0x75247c275cf0500a);
  Message1::M2::M21* v9 = v3->mutable_f_2();
  v9->set_f_0(0x10dac00);
  v3->set_f_0(0.112620);
  message->set_f_5(Message1::E1_CONST_3);
  Message1::M11* v10_0 = message->add_f_59();
  v10_0->set_f_3(s->substr(0, 333));
  v10_0->set_f_1(0x10);
  Message1::M11::M29* v11 = v10_0->mutable_f_11();
  v11->set_f_0(true);
  v11->set_f_2(s->substr(0, 27));
  v11->set_f_1(0x7780e54e);
  v10_0->set_f_0(0x4b02869310673b7e);
  Message1::M11::M23* v12_0 = v10_0->add_f_10();
  Message1::M11::M23::M82* v13 = v12_0->mutable_f_4();
  Message1::M11::M23::M82::M100* v14 = v13->mutable_f_10();
  Message1::M11::M23::M82::M100::M114* v15 = v14->mutable_f_5();
  (void)v15;  // Suppresses clang-tidy.
  Message1::M11::M23::M82::E21 array_0[22] = {
      Message1::M11::M23::M82::E21_CONST_3,
      Message1::M11::M23::M82::E21_CONST_1,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_3,
      Message1::M11::M23::M82::E21_CONST_4,
      Message1::M11::M23::M82::E21_CONST_4,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_4,
      Message1::M11::M23::M82::E21_CONST_5,
      Message1::M11::M23::M82::E21_CONST_3,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_3,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_1,
      Message1::M11::M23::M82::E21_CONST_3,
      Message1::M11::M23::M82::E21_CONST_5,
      Message1::M11::M23::M82::E21_CONST_5,
      Message1::M11::M23::M82::E21_CONST_5,
      Message1::M11::M23::M82::E21_CONST_2,
      Message1::M11::M23::M82::E21_CONST_4,
  };
  for (auto v : array_0) {
    v13->add_f_2(v);
  }
  v13->set_f_4(0x48);
  v10_0->set_f_4(s->substr(0, 484));
  v10_0->set_f_2(s->substr(0, 101));
  Message1::M6* v16 = message->mutable_f_50();
  Message1::M6::M47* v17_0 = v16->add_f_4();
  Message1::M6::M47::M67* v18 = v17_0->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  v17_0->set_f_1(0x4d4435464bab81f3);
  Message1::M6::M47::M59* v19 = v17_0->mutable_f_6();
  v19->set_f_2(true);
  v19->set_f_0(0x52a77b0ff60c50cd);
  v19->set_f_1(0x40994192);
  v19->set_f_3(0x42d17bf8);
  v17_0->set_f_3(0x13473e1a2b7afe8f);
  v16->set_f_0(0x179467f2);
  message->set_f_11(0.586388);
  message->set_f_24(false);
  message->set_f_22(true);
  message->set_f_0(0x24);
  message->set_f_14(0x39);
  Message1::M1* v20_0 = message->add_f_44();
  Message1::M1::M35* v21 = v20_0->mutable_f_3();
  Message1::M1::M35::M66* v22 = v21->mutable_f_5();
  v22->set_f_3(0x74c65b47);
  v22->set_f_0(0xfcf6137);
  v22->set_f_2(0x1a720c1665a54882);
  v22->set_f_1(false);
  v22->set_f_4(true);
  Message1::M1::M35::M56* v23_0 = v21->add_f_4();
  Message1::M1::M35::M56::M96* v24 = v23_0->mutable_f_3();
  Message1::M1::M35::M56::M96::M116* v25 = v24->mutable_f_4();
  v25->set_f_0(s->substr(0, 12));
  v24->set_f_0(s->substr(0, 22));
  Message1::M1::M32* v26_0 = v20_0->add_f_2();
  v26_0->set_f_1(s->substr(0, 115));
  v26_0->set_f_2(0x6412ebc98e84e05c);
  Message1::M4* v27 = message->mutable_f_47();
  v27->set_f_0(s->substr(0, 7));
  Message1::M7* v28_0 = message->add_f_53();
  v28_0->set_f_0(0x2d728060);
  Message1::M7::M22* v29_0 = v28_0->add_f_4();
  v29_0->set_f_0(0x34);
  message->set_f_18(0x7b);
  message->set_f_17(0.906129);
  message->set_f_20(0.307306);
  Message1::M9* v30 = message->mutable_f_56();
  v30->set_f_0(0x4e5394d83837ad25);
  Message1::M9::M18* v31 = v30->mutable_f_4();
  v31->set_f_0(0x1b);
  Message1::M9::M18::M65* v32_0 = v31->add_f_5();
  v32_0->set_f_0(Message1::M9::M18::M65::E13_CONST_4);
  Message1::M14* v33 = message->mutable_f_63();
  Message1::M14::M37* v34 = v33->mutable_f_17();
  Message1::M14::M37::M50* v35 = v34->mutable_f_2();
  v35->set_f_0(0x21);
  v34->set_f_0(false);
  Message1::M14::M40* v36 = v33->mutable_f_22();
  v36->set_f_0(0x2d5e);
  v36->set_f_2(0x39);
  Message1::M14::M42* v37 = v33->mutable_f_24();
  v37->set_f_0(0x8437261);
  Message1::M14::M26* v38 = v33->mutable_f_15();
  Message1::M14::M26::M63* v39 = v38->mutable_f_4();
  (void)v39;  // Suppresses clang-tidy.
  v38->set_f_0(0x1535dba8e5f27142);
  v33->set_f_4(s->substr(0, 5));
  v33->set_f_1(0x3232c3d0b7ea069e);
  v33->set_f_6(0x60d56b508fa143db);
  Message1::M5* v40 = message->mutable_f_48();
  v40->set_f_0(true);
  Message1::M5::M16* v41_0 = v40->add_f_3();
  v41_0->set_f_2(s->substr(0, 24));
  v41_0->set_f_0(0x2cd75ff);
  v41_0->set_f_1(0xc3cfae5);
  Message1::M5::M33* v42 = v40->mutable_f_5();
  v42->set_f_0(s->substr(0, 18));
  message->set_f_25(0x3e);
  message->set_f_6(0xcccded177a5b96f);
  message->set_f_19(0x50753f469aed783a);
  message->set_f_23(s->substr(0, 27));
  Message1::M3* v43 = message->mutable_f_46();
  v43->set_f_0(s->substr(0, 358));
  Message1::M3::M24* v44 = v43->mutable_f_5();
  v44->set_f_0(0x7ea0d626acc1b6e1);
  Message1::M3::M24::M55* v45 = v44->mutable_f_3();
  v45->set_f_0(0x7be1d4922537ce51);
  Message1::M3::M48* v46 = v43->mutable_f_7();
  Message1::M3::M48::M71* v47 = v46->mutable_f_2();
  (void)v47;  // Suppresses clang-tidy.
  message->set_f_2(0x15);
  message->set_f_10(0x6a);
  message->set_f_12(Message1::E2_CONST_3);
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
}  // namespace fleetbench::rpc::P0::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
