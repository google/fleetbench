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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P10/request/Message1.pb.h"

namespace fleetbench::rpc::P10::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->add_f_11(0x5c);
  message->set_f_20(s->substr(0, 15));
  Message1::M4* v0 = message->mutable_f_55();
  Message1::M4::M31* v1 = v0->mutable_f_6();
  Message1::M4::M31::M59* v2 = v1->mutable_f_6();
  v2->set_f_0(s->substr(0, 27));
  v1->set_f_0(0x306c79c8d44cdfb0);
  Message1::M4::M31::M75* v3 = v1->mutable_f_7();
  Message1::M4::M31::M75::M77* v4 = v3->mutable_f_4();
  v4->set_f_3(Message1::M4::M31::M75::M77::E12_CONST_5);
  v4->set_f_0(0x4ecd4a5590a0c0ec);
  v4->set_f_1(s->substr(0, 26));
  v4->set_f_2(0x27bb9ff040cbb5e7);
  v0->set_f_2(0x13cc178b);
  v0->set_f_0(s->substr(0, 1));
  v0->set_f_1(s->substr(0, 31));
  Message1::M4::M36* v5_0 = v0->add_f_7();
  Message1::M4::M36::M61* v6 = v5_0->mutable_f_4();
  v6->set_f_0(0x2d0f22273c97c2a);
  v5_0->set_f_0(0x15a984d1859cfde1);
  Message1::M9* v7_0 = message->add_f_63();
  v7_0->set_f_0(s->substr(0, 18));
  Message1::M9::M46* v8 = v7_0->mutable_f_3();
  v8->set_f_0(0x2e);
  message->set_f_9(0x14a3124fe48a4967);
  message->set_f_31(0x54);
  Message1::M19* v9 = message->mutable_f_76();
  v9->set_f_0(s->substr(0, 14));
  Message1::M19::M35* v10 = v9->mutable_f_4();
  Message1::M19::M35::M65* v11 = v10->mutable_f_9();
  v11->set_f_0(false);
  Message1::M19::M35::M65::M92* v12_0 = v11->add_f_2();
  v12_0->set_f_2(0x8);
  v12_0->set_f_0(true);
  v10->set_f_0(0x6322c75ccb28a931);
  v10->set_f_1(0x7dee634e);
  v10->set_f_2(s->substr(0, 30));
  v10->set_f_3(0x4a9f1023afd4aaec);
  message->set_f_17(0x15);
  Message1::M1* v13 = message->mutable_f_52();
  v13->set_f_1(0x75);
  v13->set_f_0(0x7fe6bb2524115510);
  message->set_f_24(false);
  message->set_f_5(0x579c3);
  Message1::M13* v14 = message->mutable_f_67();
  v14->set_f_0(s->substr(0, 65));
  message->set_f_23(0x6013415);
  Message1::M14* v15 = message->mutable_f_69();
  v15->set_f_0(0x23);
  Message1::M14::M40* v16_0 = v15->add_f_5();
  v16_0->set_f_0(false);
  message->set_f_30(0x246f2bfcb244bdbf);
  message->set_f_27(true);
  Message1::M12* v17 = message->mutable_f_66();
  v17->set_f_0(0x1568c5);
  Message1::M12::M38* v18 = v17->mutable_f_8();
  Message1::M12::M38::M54* v19 = v18->mutable_f_2();
  v19->set_f_18(s->substr(0, 23));
  v19->set_f_4(s->substr(0, 8));
  v19->set_f_14(s->substr(0, 1486));
  v19->set_f_24(0x49);
  v19->set_f_22(0x59);
  v19->set_f_10(0x7ab6a995529c7484);
  v19->set_f_13(Message1::M12::M38::M54::E10_CONST_1);
  v19->set_f_25(s->substr(0, 53));
  v19->set_f_15(s->substr(0, 8));
  v19->set_f_5(s->substr(0, 19));
  v19->set_f_26(0x5ecb7b20);
  v19->set_f_21(true);
  v19->set_f_9(0xeec29df);
  v19->set_f_6(0x730ca0796a071e0d);
  v19->set_f_27(0x4d);
  v19->set_f_17(0x6c2cf7a7c2a7192a);
  v19->set_f_7(0x5d87e052cce36932);
  v19->set_f_19(0x76);
  v19->set_f_23(s->substr(0, 21));
  v19->set_f_3(0x4);
  v19->set_f_16(0.581423);
  v19->set_f_0(0x28);
  v19->set_f_30(0x519f7eb);
  v19->set_f_20(0x12bb3bc);
  v19->set_f_29(0.135501);
  v19->set_f_8(0.696906);
  Message1::M12::M38::M74* v20_0 = v18->add_f_4();
  v20_0->set_f_0(s->substr(0, 27));
  v18->set_f_0(0x18314196fbe1d530);
  Message1::M12::M24* v21 = v17->mutable_f_7();
  Message1::M12::M24::M51* v22 = v21->mutable_f_3();
  v22->set_f_0(0x34);
  v21->set_f_0(0x74);
  v17->set_f_1(0x1d6f28b223e7e630);
  v17->set_f_3(0x3b336ab4);
  v17->set_f_2(0x37);
  message->set_f_18(0x66);
  message->set_f_2(s->substr(0, 20));
  message->set_f_10(true);
  Message1::M5* v23 = message->mutable_f_57();
  Message1::M5::M26* v24 = v23->mutable_f_4();
  Message1::M5::M26::M73* v25 = v24->mutable_f_14();
  v25->set_f_0(0x4adf4a7d709b55c4);
  v25->set_f_2(0xc);
  v25->set_f_1(false);
  Message1::M5::M26::M62* v26 = v24->mutable_f_12();
  v26->add_f_2(Message1::M5::M26::M62::E11_CONST_3);
  v26->set_f_4(0x402072e);
  v26->set_f_0(s->substr(0, 4));
  Message1::M5::M26::M62::M87* v27_0 = v26->add_f_9();
  v27_0->set_f_3(0x1d418de);
  Message1::M5::M26::M62::M87::M99* v28_0 = v27_0->add_f_8();
  v28_0->set_f_29(s->substr(0, 18));
  v28_0->set_f_7(s->substr(0, 107));
  v28_0->set_f_12(0xe);
  v28_0->set_f_1(s->substr(0, 18));
  v28_0->set_f_28(0x3b);
  v28_0->add_f_32(Message1::M5::M26::M62::M87::M99::E19_CONST_3);
  v28_0->set_f_20(0x1a8644);
  v28_0->set_f_23(0x4390c8aae0717e28);
  v28_0->set_f_9(0.698576);
  v28_0->set_f_4(0x20c4cdb);
  v28_0->set_f_2(s->substr(0, 32));
  v28_0->set_f_31(0x3755756f);
  v28_0->set_f_27(0x30);
  v28_0->set_f_22(0.841400);
  v28_0->set_f_3(0x6f1ce65fe09228cd);
  v28_0->set_f_17(s->substr(0, 3));
  v28_0->set_f_15(0x48f22095cbb57b06);
  v28_0->set_f_11(true);
  v28_0->set_f_13(s->substr(0, 62));
  v28_0->set_f_18(0x695824bcfc9cb7eb);
  v28_0->set_f_24(0xc4622f2f9331b1c);
  v28_0->set_f_30(0x6d5b02f);
  v28_0->set_f_10(0x2fe047a4);
  v28_0->set_f_6(0x8);
  v28_0->set_f_33(0x44);
  v28_0->set_f_25(Message1::M5::M26::M62::M87::M99::E17_CONST_5);
  v28_0->set_f_14(true);
  v28_0->set_f_21(s->substr(0, 5));
  Message1::M5::M26::M62::M87::M99::E16 array_1[21] = {
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_5,
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_5,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
  };
  for (auto v : array_1) {
    v28_0->add_f_8(v);
  }
  v28_0->set_f_5(0x6aaa469f8876d89);
  v28_0->set_f_16(true);
  v27_0->set_f_5(0x24ccbb5339c8259b);
  v27_0->set_f_4(0x52);
  v27_0->set_f_2(0xa70d187);
  v27_0->set_f_0(0x57);
  v26->set_f_1(0x133b31cfec735aa5);
  v24->set_f_1(true);
  v24->set_f_5(0xc78e0);
  v24->set_f_4(0.694606);
  v24->set_f_3(0x93df5e1);
  Message1::M5::M26::M56* v29 = v24->mutable_f_10();
  (void)v29;  // Suppresses clang-tidy.
  v23->set_f_0(0x1e9150);
  Message1::M5::M43* v30 = v23->mutable_f_5();
  (void)v30;  // Suppresses clang-tidy.
  Message1::M16* v31 = message->mutable_f_72();
  v31->set_f_0(false);
  message->set_f_25(0x4dd7fce185809bff);
  Message1::M11* v32 = message->mutable_f_65();
  v32->set_f_0(0xe68ab5ff1e149ff);
  message->set_f_14(0x40e484ac0103c7ed);
  message->set_f_3(0x3459050f7d1e4188);
  Message1::M8* v33 = message->mutable_f_62();
  Message1::M8::M29* v34 = v33->mutable_f_2();
  v34->set_f_0(s->substr(0, 8));
  v34->set_f_2(0.511339);
  v34->set_f_1(s->substr(0, 26));
  Message1::M8::M47* v35 = v33->mutable_f_5();
  Message1::M8::M47::M50* v36_0 = v35->add_f_7();
  (void)v36_0;  // Suppresses clang-tidy.
  v35->set_f_0(0x61962f3);
  Message1::M8::M47::M58* v37_0 = v35->add_f_8();
  v37_0->set_f_1(s->substr(0, 3));
  v37_0->set_f_3(s->substr(0, 18));
  v37_0->set_f_0(0x1ce8682);
  v37_0->set_f_2(0x6fe15c21b8ba1252);
  v35->set_f_2(0x5d1873b1f1d841bd);
  v35->set_f_1(s->substr(0, 49));
  v33->set_f_0(s->substr(0, 19));
  message->set_f_6(0x2f);
  message->set_f_22(0x5d);
  message->set_f_19(0x48);
  Message1::M7* v38 = message->mutable_f_61();
  Message1::M7::M22* v39_0 = v38->add_f_7();
  v39_0->set_f_1(0x1d);
  v39_0->set_f_0(0x6209fce69a286b36);
  v38->set_f_0(Message1::M7::E5_CONST_5);
  Message1::M7::M37* v40 = v38->mutable_f_9();
  v40->set_f_0(s->substr(0, 5));
  Message1::M7::M32* v41_0 = v38->add_f_8();
  v41_0->add_f_0(0x8);
  Message1::M7::M21* v42 = v38->mutable_f_3();
  v42->set_f_3(0x6d);
  v42->set_f_2(true);
  Message1::M7::M21::M64* v43 = v42->mutable_f_8();
  v43->set_f_3(s->substr(0, 8));
  v43->set_f_0(0.141568);
  v43->set_f_2(0x25f7986a);
  Message1::M7::M21::M64::M84* v44 = v43->mutable_f_8();
  v44->set_f_0(0x4bcbdc813f8bd035);
  v43->set_f_1(0x47);
  v42->set_f_0(0x3adf98ce28840c1e);
  v42->set_f_1(s->substr(0, 18));
  v38->set_f_1(0x1c53b0b);
  message->add_f_21(Message1::E4_CONST_3);
  Message1::M17* v45_0 = message->add_f_73();
  Message1::M17::M28* v46 = v45_0->mutable_f_3();
  v46->set_f_0(0x3a9c23470bb59a6f);
  Message1::M17::M28::M55* v47 = v46->mutable_f_3();
  Message1::M17::M28::M55::M86* v48 = v47->mutable_f_2();
  v48->set_f_0(false);
  v47->set_f_0(0.731347);
  Message1::M17::M28::M55::M94* v49_0 = v47->add_f_3();
  v49_0->set_f_0(s->substr(0, 37));
  Message1::M17::M28::M67* v50 = v46->mutable_f_4();
  v50->set_f_0(0x131de5e);
  v45_0->set_f_0(s->substr(0, 5));
  Message1::M17::M30* v51 = v45_0->mutable_f_6();
  v51->set_f_1(0x3507854110df22f6);
  Message1::M17::M30::M63* v52 = v51->mutable_f_6();
  v52->set_f_0(0x38);
  v51->set_f_2(0x74);
  Message1::M17::M33* v53 = v45_0->mutable_f_7();
  v53->add_f_0(Message1::M17::M33::E8_CONST_4);
  message->set_f_8(s->substr(0, 462));
  Message1::M15* v54_0 = message->add_f_71();
  v54_0->set_f_2(s->substr(0, 3));
  v54_0->set_f_1(0xc5032e0);
  v54_0->set_f_3(0x2b8d40a07143956b);
  v54_0->set_f_0(0x29);
  message->set_f_26(0.622843);
  message->set_f_0(s->substr(0, 2));
  Message1::M6* v55 = message->mutable_f_59();
  v55->add_f_0(s->substr(0, 7));
  Message1::M10* v56 = message->mutable_f_64();
  v56->set_f_0(0x4327f2eab965796c);
  Message1::M10::M42* v57 = v56->mutable_f_2();
  v57->set_f_0(0x216c4dbea9c96194);
  Message1::M2* v58 = message->mutable_f_53();
  (void)v58;  // Suppresses clang-tidy.
  message->set_f_7(Message1::E2_CONST_2);
  Message1::M20* v59 = message->mutable_f_78();
  Message1::M20::M39* v60 = v59->mutable_f_4();
  v60->set_f_0(s->substr(0, 9));
  v60->set_f_1(0x40cf1655);
  Message1::M20::M25* v61 = v59->mutable_f_2();
  v61->set_f_2(0xb);
  Message1::M20::M25::M66* v62_0 = v61->add_f_4();
  v62_0->set_f_3(0x1a38c69);
  Message1::M20::M25::M66::M89* v63 = v62_0->mutable_f_8();
  (void)v63;  // Suppresses clang-tidy.
  v62_0->set_f_1(s->substr(0, 180));
  v61->add_f_0(Message1::M20::M25::E6_CONST_2);
  v61->set_f_1(s->substr(0, 67));
  v59->set_f_0(s->substr(0, 28));
  message->set_f_4(Message1::E1_CONST_1);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M17* v0_0 = message->add_f_73();
  Message1::M17::M30* v1 = v0_0->mutable_f_6();
  v1->set_f_0(0x4f3bc13ae0b3eceb);
  v1->set_f_1(0x73df0009a55b6946);
  Message1::M17::M30::M63* v2 = v1->mutable_f_6();
  v2->set_f_0(0x3a9ad14);
  Message1::M17::M28* v3 = v0_0->mutable_f_3();
  Message1::M17::M28::M55* v4 = v3->mutable_f_3();
  Message1::M17::M28::M55::M86* v5 = v4->mutable_f_2();
  v5->set_f_0(true);
  v4->set_f_0(0.797046);
  Message1::M17::M28::M55::M94* v6_0 = v4->add_f_3();
  v6_0->set_f_0(s->substr(0, 316));
  Message1::M17::M28::M69* v7 = v3->mutable_f_6();
  Message1::M17::M28::M69::M91* v8 = v7->mutable_f_8();
  v8->set_f_0(true);
  v7->set_f_1(s->substr(0, 16));
  v7->set_f_0(true);
  v7->set_f_2(0x42068169f12d9e74);
  Message1::M17::M28::M67* v9 = v3->mutable_f_4();
  v9->set_f_0(0x15b04080);
  v3->set_f_0(0x4f4d340a85b0b7c5);
  Message1::M17::M33* v10 = v0_0->mutable_f_7();
  v10->add_f_0(Message1::M17::M33::E8_CONST_1);
  Message1::M17::M41* v11_0 = v0_0->add_f_8();
  Message1::M17::M41::M68* v12 = v11_0->mutable_f_7();
  Message1::M17::M41::M68::M90* v13_0 = v12->add_f_7();
  Message1::M17::M41::M68::M90::M96* v14_0 = v13_0->add_f_3();
  v14_0->set_f_2(s->substr(0, 18));
  Message1::M17::M41::M68::M90::M96::M102* v15 = v14_0->mutable_f_11();
  v15->set_f_1(false);
  v15->set_f_0(s->substr(0, 471));
  v15->set_f_2(true);
  Message1::M17::M41::M68::M90::M96::M100* v16_0 = v14_0->add_f_10();
  v16_0->set_f_0(false);
  Message1::M17::M41::M68::M90::M96::M103* v17 = v14_0->mutable_f_13();
  v17->set_f_19(0.799094);
  v17->set_f_4(s->substr(0, 7));
  v17->set_f_15(0x3);
  v17->set_f_16(Message1::M17::M41::M68::M90::M96::M103::E22_CONST_4);
  v17->set_f_23(0xc636dd2);
  v17->set_f_8(s->substr(0, 7));
  v17->set_f_6(0.630548);
  v17->set_f_9(0xf07552);
  v17->set_f_7(0x1d);
  Message1::M17::M41::M68::M90::M96::M103::E20 array_0[21] = {
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_4,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_4,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_3,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_4,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_2,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_1,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_1,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_2,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_3,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_3,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_4,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_1,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_2,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_3,
      Message1::M17::M41::M68::M90::M96::M103::E20_CONST_5,
  };
  for (auto v : array_0) {
    v17->add_f_2(v);
  }
  v17->set_f_30(0.770135);
  v17->set_f_20(0x148ed71abf627e96);
  v17->set_f_24(0x7686c16fb7509500);
  v17->set_f_31(0x2d4e1138);
  v17->set_f_33(0x2ee27825);
  v17->set_f_28(s->substr(0, 5));
  v17->set_f_32(0x36c0b90db22674a0);
  v17->set_f_17(s->substr(0, 340));
  v17->set_f_13(0x3a303f8df798c3e0);
  v17->set_f_18(0x2);
  v17->set_f_1(0xdc45b2ac68b3100);
  v17->set_f_27(true);
  v17->set_f_10(Message1::M17::M41::M68::M90::M96::M103::E21_CONST_1);
  v17->set_f_12(0x993e06f);
  v17->set_f_25(0x7e);
  v17->set_f_14(0x8e3ea1d);
  v14_0->set_f_0(0x5aed85e9);
  v14_0->set_f_1(0x3c6);
  v14_0->set_f_3(0.621952);
  Message1::M17::M41::M68::M90::M98* v18_0 = v13_0->add_f_4();
  v18_0->set_f_0(0x19cb6a702a1e7ad5);
  v18_0->set_f_1(0x567f0d18f9e23292);
  v18_0->set_f_2(0.062841);
  v12->set_f_2(0.277644);
  v12->set_f_1(0x30497b8b);
  Message1::M17::M41::M68::M93* v19 = v12->mutable_f_9();
  v19->set_f_0(0xe);
  v11_0->add_f_3(Message1::M17::M41::E9_CONST_4);
  v11_0->set_f_2(s->substr(0, 273));
  v11_0->set_f_0(0x6f761);
  Message1::M18* v20 = message->mutable_f_74();
  v20->set_f_1(0xecf515);
  Message1::M18::M44* v21 = v20->mutable_f_6();
  v21->set_f_1(0x6577151a7010b901);
  v21->set_f_6(false);
  v21->set_f_2(0x5e);
  v21->set_f_0(0x35e60863);
  v21->set_f_5(0xa29b2);
  v21->set_f_4(0x67);
  v21->set_f_3(false);
  Message1::M20* v22 = message->mutable_f_78();
  Message1::M20::M39* v23 = v22->mutable_f_4();
  v23->set_f_3(0x1b23);
  v23->set_f_2(s->substr(0, 23));
  v23->set_f_0(s->substr(0, 2));
  Message1::M20::M25* v24 = v22->mutable_f_2();
  v24->set_f_1(s->substr(0, 113));
  v24->add_f_0(Message1::M20::M25::E6_CONST_5);
  v24->add_f_0(Message1::M20::M25::E6_CONST_2);
  v24->set_f_2(0x52);
  Message1::M20::M25::M66* v25_0 = v24->add_f_4();
  v25_0->add_f_0(0x6b);
  v25_0->set_f_2(s->substr(0, 2));
  Message1::M20::M25::M66::M89* v26 = v25_0->mutable_f_8();
  v26->set_f_0(0x39);
  Message1::M20::M25::M66::M83* v27_0 = v25_0->add_f_5();
  v27_0->set_f_0(0x365f3a90588ee20f);
  v25_0->set_f_1(s->substr(0, 3));
  v22->set_f_0(s->substr(0, 7));
  message->set_f_10(false);
  Message1::M6* v28 = message->mutable_f_59();
  v28->add_f_0(s->substr(0, 3));
  Message1::M16* v29 = message->mutable_f_72();
  (void)v29;  // Suppresses clang-tidy.
  message->set_f_7(Message1::E2_CONST_3);
  message->set_f_30(0x1dab4b053a4b59c1);
  Message1::M5* v30 = message->mutable_f_57();
  Message1::M5::M26* v31 = v30->mutable_f_4();
  v31->set_f_0(0x5b2889a1);
  Message1::M5::M26::M62* v32 = v31->mutable_f_12();
  v32->add_f_2(Message1::M5::M26::M62::E11_CONST_3);
  v32->set_f_0(s->substr(0, 5));
  v32->set_f_4(0xec35a5);
  v32->set_f_3(0x7fe6a76abda38ac);
  v32->set_f_1(0x23f68d539f5b062e);
  Message1::M5::M26::M62::M87* v33_0 = v32->add_f_9();
  v33_0->set_f_3(0x5a);
  v33_0->set_f_5(0x1655241bc7d98b52);
  v33_0->set_f_1(Message1::M5::M26::M62::M87::E14_CONST_1);
  v33_0->set_f_4(0x1d3674);
  v33_0->set_f_2(0x25cb161c);
  v31->set_f_1(false);
  v31->set_f_2(0xe7c2e8d);
  Message1::M5::M26::M73* v34 = v31->mutable_f_14();
  v34->set_f_0(0x1df6f8f1cdf9a78d);
  v31->set_f_4(0.323225);
  Message1::M5::M26::M56* v35 = v31->mutable_f_10();
  v35->set_f_0(0x72ecac2ce360c3a4);
  v30->set_f_0(0x162c9b);
  Message1::M14* v36 = message->mutable_f_69();
  Message1::M14::M40* v37_0 = v36->add_f_5();
  v37_0->set_f_0(true);
  v36->set_f_0(0x47d);
  Message1::M8* v38 = message->mutable_f_62();
  v38->set_f_0(s->substr(0, 30));
  Message1::M8::M29* v39 = v38->mutable_f_2();
  v39->set_f_0(s->substr(0, 18));
  v39->set_f_2(0.356761);
  v39->set_f_1(s->substr(0, 20));
  message->set_f_14(0x39b76b9655afe6d6);
  message->set_f_29(0x10);
  Message1::M10* v40 = message->mutable_f_64();
  Message1::M10::M42* v41 = v40->mutable_f_2();
  v41->set_f_0(0x7f2c1f93ee8bd510);
  v40->set_f_0(0x51e57e57d7146b86);
  Message1::M12* v42 = message->mutable_f_66();
  v42->set_f_3(0x619b176f);
  v42->set_f_1(0x7b35cec4053dbbc1);
  Message1::M12::M24* v43 = v42->mutable_f_7();
  Message1::M12::M24::M51* v44 = v43->mutable_f_3();
  v44->set_f_0(0x2a);
  v43->set_f_0(0x140d);
  Message1::M12::M38* v45 = v42->mutable_f_8();
  v45->set_f_0(0x79bbbf0d8539b5c6);
  Message1::M12::M38::M54* v46 = v45->mutable_f_2();
  v46->set_f_27(0x4c);
  v46->set_f_4(s->substr(0, 6));
  v46->set_f_29(0.909745);
  v46->set_f_20(0x17);
  v46->set_f_0(0x71);
  v46->set_f_25(s->substr(0, 7));
  v46->set_f_10(0x316d2e5f76cac355);
  v46->set_f_18(s->substr(0, 13));
  v46->set_f_17(0x72ee3d5da89cf432);
  v46->set_f_24(0x16);
  v46->set_f_19(0x64f385);
  v46->set_f_12(0x3d37acd1a0cd336e);
  v46->set_f_5(s->substr(0, 5));
  v46->set_f_6(0x774c454949f95b18);
  v46->set_f_23(s->substr(0, 2));
  v46->set_f_11(0x1b8c705a8f8040aa);
  v46->set_f_28(0x35);
  v46->set_f_22(0xaafc839);
  v46->set_f_3(0x34);
  v46->set_f_13(Message1::M12::M38::M54::E10_CONST_3);
  v46->set_f_14(s->substr(0, 455));
  v46->set_f_1(0x3d45baa9092);
  v46->set_f_9(0x60);
  v46->set_f_7(0x1d1a8e1e4577df7f);
  v46->set_f_30(0x2d19be8);
  v42->set_f_0(0x67adad5);
  v42->set_f_2(0x53);
  Message1::M13* v47 = message->mutable_f_67();
  v47->set_f_0(s->substr(0, 1));
  Message1::E4 array_1[16] = {
      Message1::E4_CONST_3, Message1::E4_CONST_1, Message1::E4_CONST_5,
      Message1::E4_CONST_3, Message1::E4_CONST_2, Message1::E4_CONST_2,
      Message1::E4_CONST_1, Message1::E4_CONST_4, Message1::E4_CONST_4,
      Message1::E4_CONST_2, Message1::E4_CONST_4, Message1::E4_CONST_5,
      Message1::E4_CONST_1, Message1::E4_CONST_4, Message1::E4_CONST_4,
      Message1::E4_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_21(v);
  }
  message->set_f_28(false);
  message->set_f_20(s->substr(0, 7));
  message->set_f_1(0x408d7fdd958adf60);
  message->set_f_23(0x4d);
  message->set_f_4(Message1::E1_CONST_1);
  message->add_f_11(0x22);
  Message1::M4* v48 = message->mutable_f_55();
  Message1::M4::M36* v49_0 = v48->add_f_7();
  Message1::M4::M36::M61* v50 = v49_0->mutable_f_4();
  v50->set_f_0(0x57a2f92a35b8648c);
  v49_0->set_f_0(0x686da2df211c11a8);
  v48->set_f_0(s->substr(0, 21));
  v48->set_f_1(s->substr(0, 123));
  Message1::M4::M31* v51 = v48->mutable_f_6();
  v51->set_f_0(0x1c25e0743a0eba74);
  Message1::M4::M31::M75* v52 = v51->mutable_f_7();
  v52->set_f_0(0.473360);
  Message1::M4::M31::M75::M77* v53 = v52->mutable_f_4();
  v53->set_f_1(s->substr(0, 21));
  v53->set_f_2(0x5f43491f67116580);
  v53->set_f_3(Message1::M4::M31::M75::M77::E12_CONST_1);
  v53->set_f_0(0x78964df7c75f9a83);
  message->set_f_24(false);
  message->set_f_5(0x1168b8);
  message->set_f_6(0x2f);
  message->set_f_9(0x18d8fdf517f62e8e);
  Message1::M7* v54 = message->mutable_f_61();
  Message1::M7::M21* v55 = v54->mutable_f_3();
  v55->set_f_2(true);
  Message1::M7::M21::M60* v56_0 = v55->add_f_7();
  v56_0->set_f_2(0x61);
  v56_0->set_f_1(0xf214b4d754a2368);
  v56_0->set_f_3(s->substr(0, 1));
  v56_0->set_f_0(0x70d0efb33dba1234);
  v55->set_f_3(0x61);
  Message1::M7::M21::M64* v57 = v55->mutable_f_8();
  v57->set_f_2(0x32cd5d9d);
  v57->set_f_1(0x20);
  v57->set_f_3(s->substr(0, 32));
  Message1::M7::M21::M64::M84* v58 = v57->mutable_f_8();
  v58->set_f_1(0x277ba8984200e2d);
  v57->set_f_0(0.662338);
  v55->set_f_0(0x7c34f63ee07839fa);
  v55->set_f_1(s->substr(0, 1));
  v54->set_f_0(Message1::M7::E5_CONST_2);
  Message1::M7::M37* v59 = v54->mutable_f_9();
  v59->set_f_0(s->substr(0, 4));
  Message1::M7::M32* v60_0 = v54->add_f_8();
  v60_0->add_f_0(0x6e);
  v54->set_f_1(0x8);
  Message1::M15* v61_0 = message->add_f_71();
  v61_0->set_f_0(0xaf1a49c);
  v61_0->set_f_2(s->substr(0, 32));
  v61_0->set_f_1(0x77);
  v61_0->set_f_3(0x6e2e9205b03ab56d);
  Message1::M1* v62 = message->mutable_f_52();
  v62->set_f_0(0x7f7ac301b2c588f5);
  v62->set_f_1(0x10837e);
  Message1::M9* v63_0 = message->add_f_63();
  Message1::M9::M46* v64 = v63_0->mutable_f_3();
  v64->set_f_0(0x55);
  v63_0->set_f_0(s->substr(0, 4));
  message->set_f_18(0xe);
  Message1::M2* v65 = message->mutable_f_53();
  v65->set_f_0(s->substr(0, 5));
  message->set_f_8(s->substr(0, 7));
  message->set_f_31(0x1021);
  message->set_f_22(0x77);
  message->set_f_17(0x2784d90);
  Message1::M19* v66 = message->mutable_f_76();
  Message1::M19::M45* v67 = v66->mutable_f_5();
  Message1::M19::M45::M49* v68_0 = v67->add_f_4();
  v68_0->set_f_0(0x3);
  Message1::M19::M45::M49::M82* v69_0 = v68_0->add_f_3();
  v69_0->set_f_0(0x7d80bd55);
  v69_0->set_f_2(false);
  v69_0->set_f_1(0x4c8be40d);
  Message1::M19::M45::M49::M79* v70 = v68_0->mutable_f_2();
  v70->set_f_0(0x21);
  v70->set_f_1(0xe9bf188263c9fdb);
  Message1::M19::M45::M53* v71 = v67->mutable_f_5();
  v71->set_f_0(0.831949);
  v71->set_f_1(0x43);
  v67->set_f_0(s->substr(0, 29));
  Message1::M19::M45::M57* v72 = v67->mutable_f_6();
  v72->set_f_0(0x52b2d456aeb32d45);
  Message1::M19::M45::M57::M78* v73 = v72->mutable_f_6();
  v73->add_f_0(Message1::M19::M45::M57::M78::E13_CONST_5);
  v73->set_f_3(s->substr(0, 27));
  v73->set_f_4(s->substr(0, 40));
  v73->set_f_1(0x14);
  v73->set_f_2(0x76baf50d42ce50f1);
  Message1::M19::M35* v74 = v66->mutable_f_4();
  v74->set_f_2(s->substr(0, 23));
  Message1::M19::M35::M65* v75 = v74->mutable_f_9();
  v75->set_f_0(false);
  Message1::M19::M35::M65::M92* v76_0 = v75->add_f_2();
  (void)v76_0;  // Suppresses clang-tidy.
  v74->set_f_0(0x35acc965ed6f8aa);
  v74->set_f_3(0xec769ace570945a);
  v74->set_f_1(0x1c805158);
  v66->set_f_0(s->substr(0, 2263));
  message->set_f_15(s->substr(0, 59));
  message->set_f_2(s->substr(0, 11));
  message->set_f_25(0x247e24468bf91d36);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_9(0x75d5ae038ae8675d);
  Message1::M13* v0 = message->mutable_f_67();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 3));
  Message1::M8* v1 = message->mutable_f_62();
  v1->set_f_0(s->substr(0, 114));
  Message1::M8::M29* v2 = v1->mutable_f_2();
  v2->set_f_1(s->substr(0, 2));
  v2->set_f_2(0.172769);
  Message1::M8::M47* v3 = v1->mutable_f_5();
  v3->set_f_2(0x6553049df41e61d6);
  v3->set_f_1(s->substr(0, 21));
  v3->set_f_3(0.301407);
  Message1::M8::M47::M50* v4_0 = v3->add_f_7();
  v4_0->set_f_0(0x2844d468e1e24e55);
  Message1::M12* v5 = message->mutable_f_66();
  v5->set_f_3(0x5009a670);
  v5->set_f_0(0x34);
  Message1::M12::M38* v6 = v5->mutable_f_8();
  v6->set_f_0(0x1c7814d49cb78d35);
  Message1::M12::M38::M54* v7 = v6->mutable_f_2();
  v7->set_f_24(0x1797cf);
  v7->set_f_8(0.898768);
  v7->set_f_25(s->substr(0, 1));
  v7->set_f_13(Message1::M12::M38::M54::E10_CONST_3);
  v7->set_f_27(0x32f4d7d);
  v7->set_f_1(0x2d);
  v7->set_f_11(0x7502404116f54a6d);
  v7->set_f_12(0x4ad886acfca10813);
  v7->set_f_28(0x9a97e);
  v7->set_f_7(0x64962bd788a755b1);
  v7->set_f_18(s->substr(0, 7));
  v7->set_f_5(s->substr(0, 3));
  v7->set_f_17(0x1dbfe055c35d8ca9);
  v7->set_f_29(0.064682);
  v7->set_f_6(0x40496ed133c3f071);
  v7->set_f_15(s->substr(0, 8));
  v7->set_f_26(0x6e1a29c9);
  v7->set_f_21(true);
  v7->set_f_3(0x1c3f97);
  v7->set_f_0(0x194b7bd38);
  v7->set_f_4(s->substr(0, 1));
  v7->set_f_2(true);
  v7->set_f_9(0x3d56);
  v7->set_f_19(0x99c5009);
  v7->set_f_16(0.479498);
  v7->set_f_30(0x1b);
  v7->set_f_10(0x47ffe952267501d7);
  v7->set_f_14(s->substr(0, 11));
  v7->set_f_20(0xc60d3);
  v7->set_f_22(0x32);
  v7->set_f_23(s->substr(0, 11));
  Message1::M12::M38::M74* v8_0 = v6->add_f_4();
  v8_0->set_f_0(s->substr(0, 17));
  v5->set_f_2(0xe5dbc9e);
  Message1::M12::M24* v9 = v5->mutable_f_7();
  v9->set_f_0(0x5e);
  Message1::M12::M24::M51* v10 = v9->mutable_f_3();
  v10->set_f_0(0xd1a);
  v5->set_f_1(0x52edcfcb02815b74);
  Message1::M4* v11 = message->mutable_f_55();
  v11->set_f_0(s->substr(0, 29));
  v11->set_f_1(s->substr(0, 1));
  Message1::M4::M36* v12_0 = v11->add_f_7();
  v12_0->set_f_0(0x7d05937b834a2bb4);
  Message1::M4::M36::M61* v13 = v12_0->mutable_f_4();
  v13->set_f_0(0x4dae36ba83dc4470);
  v11->set_f_2(0x33f63ef6);
  Message1::M4::M31* v14 = v11->mutable_f_6();
  Message1::M4::M31::M59* v15 = v14->mutable_f_6();
  v15->set_f_0(s->substr(0, 105));
  Message1::M4::M31::M59::M88* v16_0 = v15->add_f_4();
  v16_0->set_f_0(0x33940847);
  v16_0->set_f_4(s->substr(0, 32));
  v16_0->set_f_1(true);
  v16_0->set_f_3(0x6a7026a6155a334b);
  v16_0->set_f_2(0x61f4dc736180d598);
  v14->set_f_0(0x13e93b50270a0ba9);
  Message1::M4::M31::M75* v17 = v14->mutable_f_7();
  Message1::M4::M31::M75::M77* v18 = v17->mutable_f_4();
  v18->set_f_1(s->substr(0, 1));
  v18->set_f_0(0x221a6ba3807ae6e8);
  v18->set_f_2(0x1b19a3ceb4440111);
  v18->set_f_3(Message1::M4::M31::M75::M77::E12_CONST_1);
  v17->set_f_0(0.694586);
  Message1::M3* v19_0 = message->add_f_54();
  v19_0->set_f_0(0xb3b);
  Message1::M3::M34* v20_0 = v19_0->add_f_5();
  Message1::M3::M34::M52* v21 = v20_0->mutable_f_4();
  v21->set_f_0(s->substr(0, 8));
  v20_0->set_f_0(0x59d74237af9869ef);
  Message1::M5* v22 = message->mutable_f_57();
  Message1::M5::M26* v23 = v22->mutable_f_4();
  v23->set_f_3(0x4deb5f5);
  v23->set_f_5(0x63);
  v23->set_f_1(true);
  v23->set_f_4(0.716123);
  Message1::M5::M26::M62* v24 = v23->mutable_f_12();
  v24->set_f_1(0x3e5d8445abc4be47);
  v24->set_f_4(0x32);
  v24->set_f_3(0x46e05ef95e2a5f5b);
  Message1::M5::M26::M62::M87* v25_0 = v24->add_f_9();
  v25_0->set_f_0(0x10);
  Message1::M5::M26::M62::M87::M99* v26_0 = v25_0->add_f_8();
  v26_0->set_f_23(0x6265fefef717d00a);
  v26_0->set_f_24(0x538026197ed5b31a);
  v26_0->set_f_16(false);
  v26_0->set_f_28(0x9f1af76);
  v26_0->set_f_20(0x2e61e61);
  v26_0->set_f_14(true);
  v26_0->set_f_7(s->substr(0, 34));
  v26_0->set_f_2(s->substr(0, 6));
  v26_0->set_f_0(s->substr(0, 18));
  v26_0->set_f_21(s->substr(0, 26));
  v26_0->set_f_29(s->substr(0, 21));
  v26_0->set_f_31(0x23d31872);
  v26_0->set_f_5(0xdb1de43ee8cd44f);
  v26_0->set_f_15(0x62b76abfbfb804b1);
  v26_0->set_f_27(0x1f7953);
  v26_0->set_f_25(Message1::M5::M26::M62::M87::M99::E17_CONST_4);
  v26_0->set_f_33(0x304de0176c7e50);
  Message1::M5::M26::M62::M87::M99::E16 array_0[15] = {
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_1,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_3,
      Message1::M5::M26::M62::M87::M99::E16_CONST_4,
      Message1::M5::M26::M62::M87::M99::E16_CONST_5,
      Message1::M5::M26::M62::M87::M99::E16_CONST_2,
  };
  for (auto v : array_0) {
    v26_0->add_f_8(v);
  }
  v26_0->set_f_13(s->substr(0, 21));
  v26_0->set_f_9(0.208726);
  v26_0->set_f_17(s->substr(0, 17));
  Message1::M5::M26::M62::M87::M99::E18 array_1[22] = {
      Message1::M5::M26::M62::M87::M99::E18_CONST_5,
      Message1::M5::M26::M62::M87::M99::E18_CONST_4,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_1,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_4,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_2,
      Message1::M5::M26::M62::M87::M99::E18_CONST_5,
      Message1::M5::M26::M62::M87::M99::E18_CONST_1,
      Message1::M5::M26::M62::M87::M99::E18_CONST_1,
      Message1::M5::M26::M62::M87::M99::E18_CONST_1,
      Message1::M5::M26::M62::M87::M99::E18_CONST_4,
      Message1::M5::M26::M62::M87::M99::E18_CONST_5,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_2,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_4,
      Message1::M5::M26::M62::M87::M99::E18_CONST_2,
      Message1::M5::M26::M62::M87::M99::E18_CONST_3,
      Message1::M5::M26::M62::M87::M99::E18_CONST_5,
      Message1::M5::M26::M62::M87::M99::E18_CONST_5,
  };
  for (auto v : array_1) {
    v26_0->add_f_26(v);
  }
  v26_0->set_f_30(0x1a);
  v26_0->set_f_11(true);
  v26_0->set_f_3(0x188c0472607b59bf);
  v26_0->set_f_6(0x4eca9ae);
  v26_0->set_f_19(0x21e47df5);
  v25_0->set_f_2(0x60f0cc09);
  v25_0->set_f_4(0xa9aeef0);
  v25_0->set_f_5(0x79bb1318d8a84ed4);
  v25_0->set_f_3(0x5348cb3);
  v25_0->set_f_1(Message1::M5::M26::M62::M87::E14_CONST_5);
  v24->set_f_0(s->substr(0, 18));
  v23->set_f_0(0xbe1e043);
  Message1::M5::M26::M73* v27 = v23->mutable_f_14();
  v27->set_f_0(0x5247673658922200);
  v27->set_f_1(true);
  v27->set_f_2(0xaf7336c);
  v22->set_f_0(0xff2a49c);
  Message1::M5::M43* v28 = v22->mutable_f_5();
  v28->set_f_0(false);
  Message1::M5::M43::M48* v29_0 = v28->add_f_3();
  v29_0->set_f_0(0x387ca0c12979d65d);
  v29_0->set_f_1(0x7ab);
  v29_0->set_f_2(0x92d);
  v29_0->set_f_3(s->substr(0, 4));
  message->set_f_30(0x681d102bc900e0e3);
  Message1::M9* v30_0 = message->add_f_63();
  v30_0->set_f_0(s->substr(0, 26));
  Message1::M9::M46* v31 = v30_0->mutable_f_3();
  (void)v31;  // Suppresses clang-tidy.
  message->set_f_8(s->substr(0, 5));
  message->set_f_19(0x56);
  message->set_f_13(0x2f9e6782);
  message->set_f_10(true);
  Message1::M10* v32 = message->mutable_f_64();
  v32->set_f_0(0x1c69f17f696eea28);
  Message1::M10::M42* v33 = v32->mutable_f_2();
  v33->set_f_0(0x65603242678d1ecc);
  message->set_f_3(0x2048d43e52df0b02);
  message->set_f_2(s->substr(0, 115));
  Message1::M20* v34 = message->mutable_f_78();
  Message1::M20::M25* v35 = v34->mutable_f_2();
  v35->set_f_1(s->substr(0, 3));
  v35->set_f_2(0x70b992d);
  v34->set_f_0(s->substr(0, 24));
  message->set_f_1(0x301e03601a78d1b5);
  message->set_f_17(0x10);
  message->set_f_20(s->substr(0, 11));
  message->set_f_23(0x9);
  Message1::M16* v36 = message->mutable_f_72();
  v36->set_f_0(false);
  message->set_f_31(0x6d5bff);
  message->set_f_22(0x75);
  Message1::M19* v37 = message->mutable_f_76();
  Message1::M19::M45* v38 = v37->mutable_f_5();
  Message1::M19::M45::M53* v39 = v38->mutable_f_5();
  v39->set_f_0(0.368412);
  v39->set_f_1(0x41);
  Message1::M19::M45::M49* v40_0 = v38->add_f_4();
  Message1::M19::M45::M49::M82* v41_0 = v40_0->add_f_3();
  v41_0->set_f_1(0x323a5b63);
  v41_0->set_f_2(false);
  v41_0->set_f_0(0x204b6f9a);
  Message1::M19::M45::M49::M79* v42 = v40_0->mutable_f_2();
  v42->set_f_0(0x1b4ff2);
  v42->set_f_1(0x433baf26741f4ab7);
  Message1::M19::M45::M72* v43 = v38->mutable_f_7();
  v43->set_f_0(true);
  Message1::M19::M45::M57* v44 = v38->mutable_f_6();
  Message1::M19::M45::M57::M76* v45 = v44->mutable_f_4();
  v45->set_f_0(0x2542791ba8381622);
  v44->set_f_0(0x13966f6f60a929c1);
  Message1::M19::M45::M57::M78* v46 = v44->mutable_f_6();
  v46->set_f_3(s->substr(0, 106));
  v46->set_f_1(0x23);
  v46->add_f_0(Message1::M19::M45::M57::M78::E13_CONST_1);
  v46->add_f_0(Message1::M19::M45::M57::M78::E13_CONST_3);
  v46->set_f_2(0x68597c281e93ebff);
  v38->set_f_0(s->substr(0, 20));
  Message1::M19::M35* v47 = v37->mutable_f_4();
  v47->set_f_3(0x2692f3c5870a9dfe);
  Message1::M19::M35::M65* v48 = v47->mutable_f_9();
  Message1::M19::M35::M65::M92* v49_0 = v48->add_f_2();
  v49_0->set_f_1(0x621bc19b04331b14);
  v48->set_f_0(true);
  v47->set_f_0(0x297a7d0e9ae425e8);
  v47->set_f_2(s->substr(0, 1));
  v47->set_f_1(0x221c52e8);
  v37->set_f_0(s->substr(0, 27));
  Message1::M17* v50_0 = message->add_f_73();
  Message1::M17::M33* v51 = v50_0->mutable_f_7();
  (void)v51;  // Suppresses clang-tidy.
  v50_0->set_f_0(s->substr(0, 11));
  Message1::M17::M41* v52_0 = v50_0->add_f_8();
  Message1::M17::M41::M68* v53 = v52_0->mutable_f_7();
  Message1::M17::M41::M68::M80* v54 = v53->mutable_f_6();
  Message1::M17::M41::M68::M80::M97* v55 = v54->mutable_f_2();
  v55->set_f_0(0xec159f3406953fe);
  v54->set_f_0(0x1105a5);
  v53->set_f_0(s->substr(0, 4));
  v53->set_f_1(0xf3fd748);
  v53->set_f_2(0.497536);
  Message1::M17::M41::M68::M93* v56 = v53->mutable_f_9();
  v56->set_f_0(0x608130b);
  Message1::M17::M41::M68::M90* v57_0 = v53->add_f_7();
  Message1::M17::M41::M68::M90::M98* v58_0 = v57_0->add_f_4();
  v58_0->set_f_0(0x24947fee3e808b03);
  v58_0->set_f_2(0.597385);
  v58_0->set_f_1(0x2c9a1cde7436d4a3);
  v57_0->set_f_0(false);
  Message1::M17::M41::M68::M90::M96* v59_0 = v57_0->add_f_3();
  v59_0->set_f_3(0.997667);
  v59_0->set_f_2(s->substr(0, 22));
  v59_0->set_f_1(0xa6fd5c8b92);
  Message1::M17::M41::M68::M90::M96::M100* v60_0 = v59_0->add_f_10();
  v60_0->set_f_0(true);
  Message1::M17::M41::M68::M90::M96::M103* v61 = v59_0->mutable_f_13();
  v61->set_f_31(0x2adac8f0);
  v61->set_f_17(s->substr(0, 3));
  v61->set_f_3(s->substr(0, 32));
  v61->set_f_8(s->substr(0, 32));
  v61->set_f_24(0x750491e22eef9772);
  v61->set_f_19(0.708795);
  v61->set_f_13(0x3306f910924f5b7d);
  v61->set_f_5(0.359292);
  v61->set_f_21(0x19);
  v61->set_f_16(Message1::M17::M41::M68::M90::M96::M103::E22_CONST_4);
  v61->set_f_1(0x346ae24e4e7dbead);
  v61->set_f_14(0x5d);
  v61->set_f_29(0x47);
  v61->set_f_20(0x259c5ac136b8e0c0);
  v61->set_f_10(Message1::M17::M41::M68::M90::M96::M103::E21_CONST_5);
  v61->add_f_2(Message1::M17::M41::M68::M90::M96::M103::E20_CONST_3);
  v61->set_f_28(s->substr(0, 11));
  v61->set_f_0(s->substr(0, 22));
  v61->set_f_4(s->substr(0, 4));
  v61->set_f_23(0x43);
  v61->set_f_12(0x52);
  v61->set_f_26(0x5d1d9e331b2a5279);
  v61->set_f_25(0x3f);
  v61->set_f_15(0x32);
  v61->set_f_27(true);
  v61->set_f_6(0.497783);
  v61->set_f_9(0x7e);
  v61->set_f_11(s->substr(0, 88));
  v52_0->set_f_1(s->substr(0, 64));
  v52_0->set_f_0(0x2ea7f);
  v52_0->set_f_2(s->substr(0, 6));
  Message1::M17::M41::E9 array_2[14] = {
      Message1::M17::M41::E9_CONST_2, Message1::M17::M41::E9_CONST_3,
      Message1::M17::M41::E9_CONST_2, Message1::M17::M41::E9_CONST_1,
      Message1::M17::M41::E9_CONST_1, Message1::M17::M41::E9_CONST_5,
      Message1::M17::M41::E9_CONST_1, Message1::M17::M41::E9_CONST_2,
      Message1::M17::M41::E9_CONST_5, Message1::M17::M41::E9_CONST_4,
      Message1::M17::M41::E9_CONST_3, Message1::M17::M41::E9_CONST_3,
      Message1::M17::M41::E9_CONST_5, Message1::M17::M41::E9_CONST_3,
  };
  for (auto v : array_2) {
    v52_0->add_f_3(v);
  }
  Message1::M17::M28* v62 = v50_0->mutable_f_3();
  Message1::M17::M28::M69* v63 = v62->mutable_f_6();
  v63->set_f_2(0x3e11574e0634f24d);
  v63->set_f_1(s->substr(0, 1654));
  v63->set_f_0(true);
  Message1::M17::M28::M69::M91* v64 = v63->mutable_f_8();
  (void)v64;  // Suppresses clang-tidy.
  Message1::M17::M28::M67* v65 = v62->mutable_f_4();
  v65->set_f_0(0x29b5477c);
  v62->set_f_0(0x4ca9f53d7be1b179);
  Message1::M17::M28::M55* v66 = v62->mutable_f_3();
  Message1::M17::M28::M55::M86* v67 = v66->mutable_f_2();
  v67->set_f_0(false);
  Message1::M17::M28::M55::M94* v68_0 = v66->add_f_3();
  v68_0->set_f_0(s->substr(0, 2));
  v66->set_f_0(0.344167);
  Message1::M17::M30* v69 = v50_0->mutable_f_6();
  v69->set_f_2(0x5c);
  v69->set_f_1(0x3631aa0d99ba3c26);
  Message1::M17::M30::M63* v70 = v69->mutable_f_6();
  v70->set_f_0(0x12a127);
  v69->set_f_0(0x3ae76ae9760cecf1);
  Message1::M15* v71_0 = message->add_f_71();
  v71_0->set_f_0(0x51);
  v71_0->set_f_2(s->substr(0, 4));
  v71_0->set_f_1(0xcc49e99);
  v71_0->set_f_3(0x1adfa619cf93bbd9);
  message->add_f_11(0x7b);
  Message1::M6* v72 = message->mutable_f_59();
  v72->add_f_0(s->substr(0, 4));
  message->set_f_7(Message1::E2_CONST_2);
  message->set_f_4(Message1::E1_CONST_5);
  Message1::M2* v73 = message->mutable_f_53();
  v73->set_f_0(s->substr(0, 32));
  Message1::M1* v74 = message->mutable_f_52();
  v74->set_f_0(0x35b8b51666cb76);
  v74->set_f_1(0x4175544);
  message->set_f_25(0x43c0405ac122c1de);
  Message1::M18* v75 = message->mutable_f_74();
  Message1::M18::M44* v76 = v75->mutable_f_6();
  v76->set_f_2(0x591c66f);
  v76->set_f_4(0x27);
  v76->set_f_6(true);
  v76->set_f_5(0xe61016f);
  v76->set_f_1(0x426aafa07625fbf4);
  v75->set_f_2(0x34f28);
  message->set_f_15(s->substr(0, 28));
  Message1::E3 array_3[22] = {
      Message1::E3_CONST_3, Message1::E3_CONST_1, Message1::E3_CONST_3,
      Message1::E3_CONST_1, Message1::E3_CONST_3, Message1::E3_CONST_1,
      Message1::E3_CONST_1, Message1::E3_CONST_3, Message1::E3_CONST_2,
      Message1::E3_CONST_2, Message1::E3_CONST_4, Message1::E3_CONST_5,
      Message1::E3_CONST_3, Message1::E3_CONST_2, Message1::E3_CONST_1,
      Message1::E3_CONST_4, Message1::E3_CONST_1, Message1::E3_CONST_3,
      Message1::E3_CONST_2, Message1::E3_CONST_5, Message1::E3_CONST_2,
      Message1::E3_CONST_1,
  };
  for (auto v : array_3) {
    message->add_f_16(v);
  }
  message->set_f_5(0x7c);
  message->set_f_29(0x64);
  message->set_f_6(0x25);
  Message1::M7* v77 = message->mutable_f_61();
  v77->set_f_1(0x58);
  Message1::M7::M21* v78 = v77->mutable_f_3();
  Message1::M7::M21::M64* v79 = v78->mutable_f_8();
  Message1::M7::M21::M64::M84* v80 = v79->mutable_f_8();
  v80->set_f_1(0x6fbe248f29597711);
  v79->set_f_1(0x48);
  v79->set_f_3(s->substr(0, 6));
  v79->set_f_2(0xc4bab8a);
  Message1::M7::M21::M60* v81_0 = v78->add_f_7();
  v81_0->set_f_2(0x1bdb31);
  v81_0->set_f_1(0x633947f7bd5a0e7c);
  v81_0->set_f_0(0x5571e2f7ab182115);
  v78->set_f_3(0x5f);
  v78->set_f_1(s->substr(0, 26));
  v78->set_f_2(false);
  Message1::M7::M32* v82_0 = v77->add_f_8();
  v82_0->add_f_0(0x29);
  v77->set_f_0(Message1::M7::E5_CONST_2);
  Message1::M7::M37* v83 = v77->mutable_f_9();
  v83->set_f_0(s->substr(0, 327));
  Message1::M7::M22* v84_0 = v77->add_f_7();
  v84_0->set_f_0(0x60aba2753657b0b);
  v84_0->set_f_1(0x46);
  message->add_f_21(Message1::E4_CONST_3);
  message->set_f_28(true);
  Message1::M11* v85 = message->mutable_f_65();
  v85->set_f_0(0x326ce53f7b13d231);
  Message1::M11::M23* v86_0 = v85->add_f_2();
  v86_0->set_f_3(0x274de566bbb91118);
  v86_0->set_f_2(s->substr(0, 16));
  v86_0->set_f_1(0.101299);
  message->set_f_12(0x4ca1254096f7e501);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_29(0x6810bd);
  message->set_f_13(0x148ab2b1);
  Message1::M15* v0_0 = message->add_f_71();
  v0_0->set_f_1(0x70);
  v0_0->set_f_0(0x75);
  v0_0->set_f_2(s->substr(0, 22));
  v0_0->set_f_3(0x580943e754716829);
  message->set_f_5(0x1b874c);
  message->set_f_24(true);
  Message1::M11* v1 = message->mutable_f_65();
  v1->set_f_0(0x61764a8abf200f45);
  message->set_f_18(0x6a5bd);
  message->set_f_8(s->substr(0, 90));
  message->set_f_23(0x46);
  message->set_f_14(0x1c0916b700117776);
  message->set_f_0(s->substr(0, 274));
  message->set_f_9(0x4d5f76b4a62440fb);
  Message1::M12* v2 = message->mutable_f_66();
  Message1::M12::M24* v3 = v2->mutable_f_7();
  Message1::M12::M24::M51* v4 = v3->mutable_f_3();
  v4->set_f_0(0x20);
  v3->set_f_0(0xd);
  v2->set_f_3(0x628caf02);
  Message1::M12::M38* v5 = v2->mutable_f_8();
  Message1::M12::M38::M74* v6_0 = v5->add_f_4();
  v6_0->set_f_0(s->substr(0, 110));
  Message1::M12::M38::M54* v7 = v5->mutable_f_2();
  v7->set_f_10(0x30d3e7284a07cbcb);
  v7->set_f_11(0x647300a2e87701d0);
  v7->set_f_7(0x6b6ef82854520804);
  v7->set_f_23(s->substr(0, 11));
  v7->set_f_21(false);
  v7->set_f_25(s->substr(0, 3));
  v7->set_f_17(0x67177ec4a5b69a5f);
  v7->set_f_28(0x91d);
  v7->set_f_8(0.995265);
  v7->set_f_12(0x63f7aded3fc9f9cd);
  v7->set_f_26(0x4f8a2723);
  v7->set_f_18(s->substr(0, 25));
  v7->set_f_13(Message1::M12::M38::M54::E10_CONST_2);
  v7->set_f_22(0x47);
  v7->set_f_29(0.082565);
  v7->set_f_24(0x3);
  v7->set_f_5(s->substr(0, 54));
  v7->set_f_15(s->substr(0, 7));
  v7->set_f_3(0x4e);
  v7->set_f_14(s->substr(0, 22));
  v7->set_f_20(0xbe6c9d7);
  v7->set_f_9(0x62);
  v7->set_f_27(0x3cd8637);
  v7->set_f_0(0x3f50);
  v7->set_f_30(0xd1c8d);
  v7->set_f_2(false);
  v7->set_f_1(0x13c12b921);
  v5->set_f_0(0x6f3ef30f01294f37);
  v2->set_f_0(0x47);
  Message1::M7* v8 = message->mutable_f_61();
  Message1::M7::M37* v9 = v8->mutable_f_9();
  v9->set_f_0(s->substr(0, 21));
  Message1::M7::M32* v10_0 = v8->add_f_8();
  v10_0->add_f_0(0x16);
  Message1::M7::M22* v11_0 = v8->add_f_7();
  v11_0->set_f_0(0xe18043b0e6ea84c);
  v11_0->set_f_1(0xc70cabd);
  v8->set_f_0(Message1::M7::E5_CONST_1);
  v8->set_f_1(0x3d);
  Message1::M7::M21* v12 = v8->mutable_f_3();
  Message1::M7::M21::M64* v13 = v12->mutable_f_8();
  v13->set_f_3(s->substr(0, 25));
  v13->set_f_2(0x4df1fe11);
  v13->set_f_0(0.525125);
  Message1::M7::M21::M64::M84* v14 = v13->mutable_f_8();
  v14->set_f_0(0x1aee6d3691e327bc);
  v12->set_f_1(s->substr(0, 3));
  v12->set_f_3(0x3b45);
  v12->set_f_2(true);
  message->set_f_25(0x4911e3b408b022a0);
  message->set_f_28(false);
  message->set_f_27(false);
  message->set_f_26(0.169662);
  message->set_f_15(s->substr(0, 13));
  message->add_f_11(0x24);
  Message1::M8* v15 = message->mutable_f_62();
  Message1::M8::M47* v16 = v15->mutable_f_5();
  v16->set_f_3(0.472500);
  v16->set_f_0(0x2a);
  v16->set_f_1(s->substr(0, 19));
  Message1::M8::M47::M58* v17_0 = v16->add_f_8();
  v17_0->set_f_2(0x337082f076be4f34);
  v17_0->set_f_1(s->substr(0, 31));
  v17_0->set_f_0(0x1e78);
  v17_0->set_f_3(s->substr(0, 21));
  Message1::M8::M47::M50* v18_0 = v16->add_f_7();
  (void)v18_0;  // Suppresses clang-tidy.
  message->set_f_4(Message1::E1_CONST_3);
  Message1::M20* v19 = message->mutable_f_78();
  Message1::M20::M39* v20 = v19->mutable_f_4();
  v20->set_f_2(s->substr(0, 8));
  v20->set_f_0(s->substr(0, 433));
  v20->set_f_1(0x5780fcf0);
  Message1::M20::M25* v21 = v19->mutable_f_2();
  v21->set_f_1(s->substr(0, 10));
  v21->set_f_2(0xd946cd8);
  v21->add_f_0(Message1::M20::M25::E6_CONST_4);
  Message1::M20::M25::M66* v22_0 = v21->add_f_4();
  Message1::M20::M25::M66::M89* v23 = v22_0->mutable_f_8();
  v23->set_f_0(0x39);
  v22_0->set_f_3(0x45);
  Message1::M20::M25::M66::M83* v24_0 = v22_0->add_f_5();
  v24_0->set_f_0(0x66098c36314a2cd7);
  Message1::M17* v25_0 = message->add_f_73();
  Message1::M17::M30* v26 = v25_0->mutable_f_6();
  v26->set_f_1(0x2d743a002ee29305);
  v26->set_f_2(0x5b);
  v26->set_f_0(0x65973e9f66fac366);
  Message1::M17::M30::M63* v27 = v26->mutable_f_6();
  v27->set_f_0(0x79);
  v25_0->set_f_0(s->substr(0, 5));
  Message1::M17::M41* v28_0 = v25_0->add_f_8();
  v28_0->set_f_1(s->substr(0, 27));
  v28_0->set_f_0(0x6e);
  v28_0->set_f_2(s->substr(0, 31));
  Message1::M17::M41::M68* v29 = v28_0->mutable_f_7();
  Message1::M17::M41::M68::M93* v30 = v29->mutable_f_9();
  v30->set_f_0(0x79);
  v29->set_f_2(0.796120);
  v29->set_f_0(s->substr(0, 18));
  v28_0->add_f_3(Message1::M17::M41::E9_CONST_4);
  Message1::M17::M28* v31 = v25_0->mutable_f_3();
  Message1::M17::M28::M69* v32 = v31->mutable_f_6();
  v32->set_f_1(s->substr(0, 6));
  v32->set_f_0(true);
  Message1::M17::M28::M69::M91* v33 = v32->mutable_f_8();
  v33->set_f_0(false);
  v32->set_f_2(0x48e7d3dbbf41614b);
  Message1::M17::M28::M55* v34 = v31->mutable_f_3();
  Message1::M17::M28::M55::M86* v35 = v34->mutable_f_2();
  v35->set_f_0(true);
  v34->set_f_0(0.513020);
  Message1::M17::M28::M55::M94* v36_0 = v34->add_f_3();
  v36_0->set_f_0(s->substr(0, 4));
  v31->set_f_0(0x277d6d6d7a98ee42);
  Message1::M17::M28::M67* v37 = v31->mutable_f_4();
  v37->set_f_0(0x1e3b995b);
  message->set_f_22(0x4b);
  message->add_f_16(Message1::E3_CONST_1);
  message->add_f_16(Message1::E3_CONST_4);
  message->set_f_20(s->substr(0, 40));
  Message1::M3* v38_0 = message->add_f_54();
  Message1::M3::M34* v39_0 = v38_0->add_f_5();
  Message1::M3::M34::M52* v40 = v39_0->mutable_f_4();
  v40->set_f_0(s->substr(0, 9));
  v39_0->set_f_0(0x3ecdf2a54524fdea);
  v38_0->set_f_0(0x39);
  Message1::M5* v41 = message->mutable_f_57();
  v41->set_f_0(0x41533e9);
  Message1::M5::M43* v42 = v41->mutable_f_5();
  Message1::M5::M43::M48* v43_0 = v42->add_f_3();
  v43_0->set_f_1(0x79);
  v43_0->set_f_2(0x19);
  v43_0->set_f_3(s->substr(0, 2));
  v42->set_f_0(false);
  Message1::M5::M26* v44 = v41->mutable_f_4();
  v44->set_f_5(0x674dc51);
  v44->set_f_3(0x1a);
  v44->set_f_1(false);
  v44->set_f_0(0x681aeb6e);
  v44->set_f_4(0.828678);
  Message1::M5::M26::M56* v45 = v44->mutable_f_10();
  (void)v45;  // Suppresses clang-tidy.
  Message1::M5::M26::M73* v46 = v44->mutable_f_14();
  v46->set_f_1(true);
  v46->set_f_2(0x7770a2e);
  v46->set_f_0(0x1fec73da7ccb1e32);
  Message1::M5::M26::M62* v47 = v44->mutable_f_12();
  v47->set_f_3(0x19ff9e01e0c0e838);
  v47->add_f_2(Message1::M5::M26::M62::E11_CONST_5);
  v47->set_f_1(0x3767f26813eb5140);
  v47->set_f_0(s->substr(0, 71));
  v47->set_f_4(0x16);
  Message1::M5::M26::M62::M87* v48_0 = v47->add_f_9();
  v48_0->set_f_5(0x71ea5e0d12dcee5f);
  Message1::M5::M26::M62::M87::M99* v49_0 = v48_0->add_f_8();
  v49_0->set_f_21(s->substr(0, 7));
  v49_0->set_f_19(0x2a2aa717);
  v49_0->set_f_29(s->substr(0, 21));
  v49_0->set_f_20(0x2);
  v49_0->set_f_31(0x492079a9);
  v49_0->set_f_3(0x3fc70e923d12949a);
  v49_0->add_f_26(Message1::M5::M26::M62::M87::M99::E18_CONST_5);
  v49_0->set_f_23(0xf1067bf8cce1267);
  v49_0->set_f_4(0xcf7b589);
  v49_0->set_f_7(s->substr(0, 8));
  v49_0->set_f_1(s->substr(0, 6));
  v49_0->set_f_2(s->substr(0, 27));
  v49_0->set_f_27(0x11d3d0308b9);
  v49_0->set_f_0(s->substr(0, 3263));
  v49_0->set_f_5(0x705cdbb429a133f1);
  v49_0->set_f_33(0x13);
  v49_0->set_f_13(s->substr(0, 12));
  v49_0->set_f_16(true);
  v49_0->set_f_9(0.918245);
  v49_0->set_f_6(0x357e);
  v49_0->set_f_11(true);
  v49_0->add_f_32(Message1::M5::M26::M62::M87::M99::E19_CONST_2);
  v49_0->set_f_22(0.183899);
  v49_0->set_f_24(0x21d829437e35d73a);
  v49_0->set_f_12(0x35);
  v49_0->set_f_15(0x1928d47a7ee6ff9e);
  v49_0->set_f_28(0xf42ccc1);
  v49_0->set_f_30(0x12606c);
  v49_0->set_f_10(0x12d819e1);
  v48_0->set_f_1(Message1::M5::M26::M62::M87::E14_CONST_2);
  v48_0->set_f_3(0x35);
  v48_0->set_f_4(0xa70b549);
  v48_0->set_f_0(0x3a);
  v48_0->set_f_2(0x43c616ad);
  Message1::M18* v50 = message->mutable_f_74();
  Message1::M18::M44* v51 = v50->mutable_f_6();
  v51->set_f_5(0x14);
  v51->set_f_1(0x619a675e4e4d3e87);
  v51->set_f_2(0x1431903);
  v51->set_f_0(0x57dca0fb);
  v51->set_f_6(true);
  v51->set_f_3(true);
  v51->set_f_4(0xded7ec94def918);
  v50->set_f_1(0x44);
  v50->set_f_2(0x558e9);
  v50->set_f_0(0x27);
  message->set_f_6(0xdc0d07f);
  message->set_f_7(Message1::E2_CONST_1);
  Message1::M16* v52 = message->mutable_f_72();
  (void)v52;  // Suppresses clang-tidy.
  message->set_f_3(0x3a96552a8490f341);
  Message1::M13* v53 = message->mutable_f_67();
  v53->set_f_0(s->substr(0, 2));
  message->set_f_10(false);
  Message1::M2* v54 = message->mutable_f_53();
  v54->set_f_0(s->substr(0, 20));
  message->set_f_17(0x70);
  message->set_f_19(0x71);
  message->set_f_2(s->substr(0, 8));
  Message1::M1* v55 = message->mutable_f_52();
  v55->set_f_0(0x794e8373f485de19);
  v55->set_f_1(0x1c9619);
  Message1::M10* v56 = message->mutable_f_64();
  v56->set_f_0(0x366616f353de406d);
  Message1::M10::M42* v57 = v56->mutable_f_2();
  v57->set_f_0(0x6d5fbb695b41b96);
  Message1::M6* v58 = message->mutable_f_59();
  v58->add_f_0(s->substr(0, 4));
  Message1::M19* v59 = message->mutable_f_76();
  Message1::M19::M45* v60 = v59->mutable_f_5();
  Message1::M19::M45::M49* v61_0 = v60->add_f_4();
  Message1::M19::M45::M49::M82* v62_0 = v61_0->add_f_3();
  v62_0->set_f_0(0x1d0af63c);
  v62_0->set_f_2(true);
  v61_0->set_f_0(0x25);
  Message1::M19::M45::M49::M79* v63 = v61_0->mutable_f_2();
  v63->set_f_0(0xfa1035b);
  v63->set_f_1(0x2aab61a30da0cc1d);
  Message1::M19::M45::M53* v64 = v60->mutable_f_5();
  v64->set_f_0(0.642321);
  v64->set_f_1(0x8d81fdc);
  Message1::M19::M45::M57* v65 = v60->mutable_f_6();
  Message1::M19::M45::M57::M78* v66 = v65->mutable_f_6();
  v66->set_f_2(0x6da151beb1c0ba2f);
  v66->set_f_3(s->substr(0, 344));
  v66->add_f_0(Message1::M19::M45::M57::M78::E13_CONST_2);
  v66->set_f_1(0x18516d);
  v66->set_f_4(s->substr(0, 21));
  v65->set_f_0(0x5d4e2423c6979d51);
  Message1::M19::M45::M57::M76* v67 = v65->mutable_f_4();
  v67->set_f_0(0x6a6a792be5b14a05);
  v60->set_f_0(s->substr(0, 32));
  Message1::M19::M45::M72* v68 = v60->mutable_f_7();
  v68->set_f_0(false);
  Message1::M19::M35* v69 = v59->mutable_f_4();
  v69->set_f_3(0x170d7a431d64a100);
  v69->set_f_0(0x670f9c6261ab3e80);
  v69->set_f_2(s->substr(0, 1));
  Message1::M19::M35::M65* v70 = v69->mutable_f_9();
  Message1::M19::M35::M65::M92* v71_0 = v70->add_f_2();
  v71_0->set_f_1(0x30fb992c566d2d41);
  v71_0->set_f_2(0x7a6cb);
  v71_0->set_f_0(true);
  v70->set_f_0(false);
  v69->set_f_1(0x70ab668b);
  message->set_f_30(0x55ff60bf9af36efb);
  Message1::M14* v72 = message->mutable_f_69();
  Message1::M14::M40* v73_0 = v72->add_f_5();
  (void)v73_0;  // Suppresses clang-tidy.
  message->set_f_1(0x66d344d04bc05b79);
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
}  // namespace fleetbench::rpc::P10::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE1_H_
