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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message1.pb.h"

namespace fleetbench::rpc::P9::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_49();
  Message1::M3::M32* v1 = v0_0->mutable_f_10();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M3::M13* v2 = v0_0->mutable_f_7();
  v2->set_f_3(0x10ba);
  v2->set_f_0(0x1ec3d);
  v2->set_f_11(0.673974);
  v2->set_f_2(0.329367);
  v2->set_f_7(0x58);
  v2->set_f_6(0.380274);
  v2->set_f_5(0x14f319);
  v2->set_f_4(0x67c641ac2f4a1197);
  v2->set_f_9(s->substr(0, 2));
  Message1::M3::M46* v3 = v0_0->mutable_f_15();
  v3->set_f_2(0x4ddab28c518dde7e);
  Message1::M3::M14* v4 = v0_0->mutable_f_8();
  v4->set_f_0(0x30);
  Message1::M3::M34* v5_0 = v0_0->add_f_12();
  (void)v5_0;  // Suppresses clang-tidy.
  Message1::M3::M28* v6 = v0_0->mutable_f_9();
  v6->set_f_4(0x7645ec);
  v6->set_f_7(0x7716dbdc5716ea5d);
  v6->set_f_0(s->substr(0, 1));
  v6->set_f_5(Message1::M3::M28::E7_CONST_4);
  v6->set_f_6(0.000343);
  Message1::M3::M5* v7 = v0_0->mutable_f_4();
  v7->set_f_0(s->substr(0, 6));
  v7->set_f_2(0x2f53b5923b67a9bb);
  Message1::M3::M54* v8_0 = v0_0->add_f_17();
  (void)v8_0;  // Suppresses clang-tidy.
  Message1::M3::M65* v9 = v0_0->mutable_f_19();
  v9->set_f_4(true);
  v9->set_f_0(0x3b18e49cce35a477);
  v9->set_f_2(s->substr(0, 1209));
  v9->set_f_3(0x5d85e46a4cabc619);
  Message1::M3::M9* v10 = v0_0->mutable_f_5();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_30(0x67);
  message->set_f_4(s->substr(0, 4));
  message->set_f_15(0x5a);
  Message1::M4* v11 = message->mutable_f_51();
  Message1::M4::M10* v12 = v11->mutable_f_48();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M4::M6* v13 = v11->mutable_f_46();
  (void)v13;  // Suppresses clang-tidy.
  v11->set_f_4(s->substr(0, 1));
  Message1::M4::M26* v14 = v11->mutable_f_55();
  v14->set_f_0(0x2481);
  v11->set_f_12(Message1::M4::E4_CONST_5);
  v11->set_f_3(0x7561a51f946c669a);
  Message1::M4::M73* v15_0 = v11->add_f_76();
  v15_0->add_f_0(Message1::M4::M73::E12_CONST_2);
  v11->set_f_10(0xf0f9be8);
  Message1::M4::M42* v16_0 = v11->add_f_64();
  v16_0->set_f_1(0x213041ca);
  v16_0->set_f_3(false);
  v16_0->set_f_0(0x2a);
  v16_0->add_f_2(0x15d434c);
  v16_0->set_f_5(0x33);
  v16_0->set_f_4(0xf9291e1);
  Message1::M4::M24* v17 = v11->mutable_f_54();
  v17->set_f_2(s->substr(0, 18));
  Message1::M4::M24::M80* v18_0 = v17->add_f_15();
  v18_0->set_f_7(s->substr(0, 30));
  v18_0->set_f_19(0x393e67ceb3d978b3);
  v18_0->set_f_31(0x632fb960166cca4c);
  v18_0->set_f_1(0x6c6d1f062068f560);
  v18_0->set_f_13(0x49);
  v18_0->set_f_20(0x9beaa);
  v18_0->set_f_4(s->substr(0, 58));
  v18_0->set_f_25(s->substr(0, 7));
  v18_0->set_f_0(s->substr(0, 478));
  v18_0->set_f_22(0xbfc8a02);
  v18_0->set_f_14(0x47);
  v18_0->set_f_12(s->substr(0, 29));
  v18_0->set_f_11(0x48);
  v18_0->set_f_5(s->substr(0, 221));
  v18_0->set_f_17(0x6f);
  v18_0->set_f_6(0x1a5860f560207414);
  v18_0->set_f_2(0x440b9073074ad44);
  v18_0->set_f_8(s->substr(0, 8));
  v18_0->set_f_3(s->substr(0, 6));
  v18_0->set_f_21(0x119a79e);
  v17->set_f_3(s->substr(0, 9));
  v17->set_f_1(0x6378bc5c0397fe98);
  v17->set_f_0(0x4f);
  Message1::M4::M40* v19 = v11->mutable_f_62();
  v19->set_f_0(Message1::M4::M40::E8_CONST_5);
  Message1::M4::M8* v20 = v11->mutable_f_47();
  v20->set_f_0(0x6700c563c54cf1df);
  v11->set_f_26(0x71);
  Message1::M4::M16* v21_0 = v11->add_f_52();
  Message1::M4::M16::M82* v22 = v21_0->mutable_f_2();
  v22->set_f_0(0x79b8042e494d4119);
  v11->set_f_27(s->substr(0, 7));
  Message1::M4::M68* v23 = v11->mutable_f_74();
  v23->set_f_4(0x15);
  v23->set_f_0(0x7a);
  v23->set_f_2(s->substr(0, 175));
  v11->set_f_9(0x11);
  v11->set_f_1(Message1::M4::E2_CONST_4);
  v11->set_f_5(0x5061537ed4611a);
  Message1::M4::M37* v24_0 = v11->add_f_61();
  v24_0->set_f_0(0x533eafe176cf0008);
  v11->set_f_2(0x6cd43cf);
  v11->set_f_16(0x141dd5b3418c8cd9);
  Message1::M4::M64* v25 = v11->mutable_f_73();
  (void)v25;  // Suppresses clang-tidy.
  v11->set_f_7(0x65);
  v11->set_f_17(0x230a7f31f88112de);
  v11->set_f_28(s->substr(0, 6));
  v11->set_f_13(s->substr(0, 25));
  v11->set_f_31(0x36a5);
  v11->set_f_30(0x2c);
  Message1::M4::M11* v26 = v11->mutable_f_50();
  (void)v26;  // Suppresses clang-tidy.
  v11->set_f_19(s->substr(0, 78));
  v11->set_f_22(s->substr(0, 4));
  v11->set_f_25(s->substr(0, 105));
  Message1::M4::M29* v27 = v11->mutable_f_56();
  Message1::M4::M29::M93* v28 = v27->mutable_f_2();
  v28->set_f_0(0x6b);
  v11->set_f_0(0x65);
  v11->set_f_29(0x17);
  Message1::M4::M52* v29 = v11->mutable_f_69();
  v29->set_f_0(0.465061);
  message->set_f_6(true);
  message->set_f_23(false);
  Message1::M1* v30 = message->mutable_f_46();
  Message1::M1::M41* v31_0 = v30->add_f_14();
  v31_0->set_f_1(s->substr(0, 14));
  Message1::M1::M49* v32 = v30->mutable_f_22();
  v32->set_f_0(0.919147);
  Message1::M1::M48* v33 = v30->mutable_f_20();
  v33->set_f_2(0xf8076033dc647c1);
  v33->set_f_5(s->substr(0, 92));
  v33->set_f_4(0x7216c17428d4e72f);
  v33->set_f_0(0x65);
  v33->set_f_3(0x6ddc7dbb);
  Message1::M1::M63* v34 = v30->mutable_f_31();
  v34->set_f_0(0x34406c9a0d4fde16);
  Message1::M1::M57* v35_0 = v30->add_f_27();
  v35_0->set_f_0(0.998177);
  Message1::M1::M56* v36 = v30->mutable_f_25();
  (void)v36;  // Suppresses clang-tidy.
  Message1::M1::M44* v37 = v30->mutable_f_17();
  v37->set_f_4(false);
  v37->set_f_3(s->substr(0, 13));
  Message1::M1::M66* v38 = v30->mutable_f_33();
  (void)v38;  // Suppresses clang-tidy.
  Message1::M1::M43* v39_0 = v30->add_f_15();
  (void)v39_0;  // Suppresses clang-tidy.
  Message1::M1::M67* v40_0 = v30->add_f_34();
  (void)v40_0;  // Suppresses clang-tidy.
  Message1::M1::M7* v41 = v30->mutable_f_3();
  v41->set_f_0(0.657749);
  Message1::M1::M55* v42 = v30->mutable_f_23();
  Message1::M1::M55::M78* v43_0 = v42->add_f_2();
  Message1::M1::M55::M78::M95* v44_0 = v43_0->add_f_3();
  v44_0->set_f_0(0x1c);
  v42->set_f_0(0x1d);
  Message1::M1::M39* v45_0 = v30->add_f_12();
  v45_0->set_f_0(0x2f18e1668ca4229c);
  Message1::M1::M70* v46 = v30->mutable_f_38();
  v46->set_f_0(0x17b5);
  Message1::M1::M62* v47 = v30->mutable_f_30();
  (void)v47;  // Suppresses clang-tidy.
  message->set_f_11(0x17);
  message->set_f_28(0x11368e2803ec06bf);
  message->add_f_1(Message1::E1_CONST_4);
  message->set_f_9(0x2bbbde2b426b936f);
  message->set_f_20(s->substr(0, 6));
  message->set_f_8(0.121328);
  message->set_f_26(s->substr(0, 8));
  message->set_f_0(0x3c03);
  message->set_f_22(0x2968e9e0094d787c);
  Message1::M2* v48_0 = message->add_f_47();
  Message1::M2::M12* v49 = v48_0->mutable_f_2();
  (void)v49;  // Suppresses clang-tidy.
  v48_0->set_f_0(0xa4012);
  Message1::M2::M59* v50_0 = v48_0->add_f_12();
  Message1::M2::M59::M91* v51 = v50_0->mutable_f_2();
  (void)v51;  // Suppresses clang-tidy.
  v50_0->set_f_0(0x13f2a005bef8f182);
  Message1::M2::M27* v52 = v48_0->mutable_f_9();
  Message1::M2::M27::M81* v53_0 = v52->add_f_3();
  (void)v53_0;  // Suppresses clang-tidy.
  v52->set_f_0(0xcbd5545);
  Message1::M2::M36* v54 = v48_0->mutable_f_10();
  (void)v54;  // Suppresses clang-tidy.
  Message1::M2::M51* v55 = v48_0->mutable_f_11();
  Message1::M2::M51::M79* v56 = v55->mutable_f_2();
  Message1::M2::M51::M79::M97* v57_0 = v56->add_f_3();
  Message1::M2::M51::M79::M97::M110* v58 = v57_0->mutable_f_7();
  (void)v58;  // Suppresses clang-tidy.
  v57_0->set_f_0(s->substr(0, 1));
  v56->set_f_0(s->substr(0, 8));
  message->set_f_3(true);
  message->set_f_27(0xbf47763);
  message->set_f_7(s->substr(0, 3));
  message->set_f_31(s->substr(0, 5));
  message->set_f_12(s->substr(0, 7));
  message->add_f_29(0x47);
  message->set_f_25(0x16);
  message->set_f_17(0xd94);
  message->set_f_19(false);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_11(0x991d5a);
  message->set_f_13(s->substr(0, 5));
  message->set_f_17(0x61);
  message->set_f_28(0x3e47fe51eddef1ae);
  message->set_f_9(0x21e242c114817fff);
  message->set_f_16(s->substr(0, 212));
  message->set_f_6(true);
  message->set_f_32(s->substr(0, 8));
  message->set_f_31(s->substr(0, 5));
  message->set_f_7(s->substr(0, 1));
  message->set_f_4(s->substr(0, 10));
  Message1::M3* v0_0 = message->add_f_49();
  Message1::M3::M5* v1 = v0_0->mutable_f_4();
  v1->set_f_2(0x66899b5b597643dc);
  Message1::M3::M54* v2_0 = v0_0->add_f_17();
  Message1::M3::M54::M92* v3 = v2_0->mutable_f_2();
  v3->set_f_28(0x8);
  v3->set_f_5(s->substr(0, 2));
  v3->set_f_8(false);
  v3->set_f_20(0x7c6b558bf8649f96);
  v3->set_f_2(0x48fa2f0b219270d4);
  v3->set_f_14(false);
  v3->set_f_1(s->substr(0, 17));
  v3->set_f_15(s->substr(0, 8));
  v3->set_f_9(s->substr(0, 27));
  v3->set_f_18(0xb529d);
  v3->set_f_26(0x55fc9cce);
  v3->set_f_30(false);
  v3->set_f_3(0x216c13f2a72a8d85);
  v3->set_f_16(0x1be656);
  v3->set_f_19(0x70);
  v3->set_f_21(s->substr(0, 2));
  v3->set_f_13(0x7a5ad258bd3ec9ac);
  v3->set_f_29(0x19543f);
  v3->set_f_6(0x1ce5c1);
  v3->set_f_11(0x18);
  v3->set_f_27(true);
  v3->set_f_4(s->substr(0, 3));
  v3->set_f_12(0x1699);
  v0_0->add_f_0(s->substr(0, 4));
  Message1::M3::M32* v4 = v0_0->mutable_f_10();
  int32_t array_0[5] = {
      0x1ff829, 0x4f, 0x5b, 0x43, 0x58,
  };
  for (auto v : array_0) {
    v4->add_f_0(v);
  }
  v4->set_f_1(false);
  Message1::M3::M9* v5 = v0_0->mutable_f_5();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M3::M34* v6_0 = v0_0->add_f_12();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M3::M65* v7 = v0_0->mutable_f_19();
  v7->set_f_3(0x1a5135cd3e5de941);
  v7->set_f_1(false);
  v7->set_f_0(0x507e6e936e4dca09);
  v7->set_f_2(s->substr(0, 4));
  Message1::M3::M14* v8 = v0_0->mutable_f_8();
  v8->set_f_0(0x27);
  Message1::M3::M38* v9 = v0_0->mutable_f_14();
  v9->set_f_1(s->substr(0, 1));
  v9->set_f_0(s->substr(0, 1));
  Message1::M3::M60* v10 = v0_0->mutable_f_18();
  v10->set_f_0(0x12);
  Message1::M3::M46* v11 = v0_0->mutable_f_15();
  v11->set_f_0(0x147019);
  Message1::M3::M13* v12 = v0_0->mutable_f_7();
  v12->set_f_6(0.269367);
  v12->set_f_0(0x4e);
  v12->set_f_5(0x36);
  v12->set_f_11(0.090450);
  v12->set_f_10(s->substr(0, 29));
  v12->set_f_9(s->substr(0, 17));
  v12->set_f_4(0x626faf700734e2c1);
  v12->set_f_2(0.515303);
  Message1::M3::M75* v13_0 = v0_0->add_f_22();
  v13_0->set_f_1(0x14);
  v13_0->set_f_0(0x68fe192dfaad5705);
  message->set_f_27(0x1843);
  message->set_f_22(0x30d189524e131ae);
  message->set_f_0(0x8129f0d);
  message->set_f_14(0xd749185);
  message->set_f_10(0x965d854);
  message->set_f_26(s->substr(0, 5));
  int32_t array_1[18] = {
      0x29b6a9c, 0x29, 0x55, 0x1d, 0x4d, 0x1e762f, 0x50, 0x35, 0x9,
      0xc,       0x5f, 0x19, 0x11, 0x6f, 0xd,      0x37, 0x18, 0xd,
  };
  for (auto v : array_1) {
    message->add_f_29(v);
  }
  message->set_f_5(0x232cb6f);
  Message1::M2* v14_0 = message->add_f_47();
  Message1::M2::M23* v15 = v14_0->mutable_f_7();
  v15->set_f_0(false);
  Message1::M2::M27* v16 = v14_0->mutable_f_9();
  v16->set_f_0(0x16ff1f4);
  message->set_f_30(0x1);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_26(s->substr(0, 1));
  int32_t array_0[5] = {
      0x4abed, 0x2b, 0x12, 0x70, 0x8,
  };
  for (auto v : array_0) {
    message->add_f_29(v);
  }
  Message1::E1 array_1[17] = {
      Message1::E1_CONST_3, Message1::E1_CONST_4, Message1::E1_CONST_4,
      Message1::E1_CONST_5, Message1::E1_CONST_1, Message1::E1_CONST_5,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_4, Message1::E1_CONST_4,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_2,
      Message1::E1_CONST_2, Message1::E1_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_1(v);
  }
  message->set_f_30(0x1ee608);
  message->set_f_7(s->substr(0, 1));
  message->set_f_3(false);
  message->add_f_2(s->substr(0, 7));
  message->add_f_2(s->substr(0, 6));
  message->add_f_2(s->substr(0, 6));
  message->set_f_23(true);
  message->set_f_10(0x5);
  message->set_f_6(true);
  message->set_f_14(0x29);
  Message1::M2* v0_0 = message->add_f_47();
  v0_0->set_f_0(0x6164e91);
  Message1::M2::M27* v1 = v0_0->mutable_f_9();
  v1->set_f_0(0x40b0a9b);
  Message1::M2::M36* v2 = v0_0->mutable_f_10();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M2::M51* v3 = v0_0->mutable_f_11();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M2::M17* v4_0 = v0_0->add_f_3();
  Message1::M2::M17::M76* v5 = v4_0->mutable_f_3();
  v5->set_f_0(0x256d);
  Message1::M2::M20* v6 = v0_0->mutable_f_4();
  v6->set_f_0(0x70573858bf7b60b6);
  Message1::M1* v7 = message->mutable_f_46();
  Message1::M1::M69* v8_0 = v7->add_f_36();
  v8_0->set_f_4(0x75f618a31f5bfc23);
  v8_0->set_f_2(false);
  Message1::M1::M69::M77* v9_0 = v8_0->add_f_11();
  v9_0->set_f_0(0x155404);
  v8_0->set_f_0(0x327258dc134175);
  Message1::M1::M15* v10 = v7->mutable_f_4();
  Message1::M1::M15::M84* v11_0 = v10->add_f_3();
  (void)v11_0;  // Suppresses clang-tidy.
  Message1::M1::M48* v12 = v7->mutable_f_20();
  v12->set_f_2(0x37835a77f01d5a8a);
  v12->set_f_0(0x20);
  v12->set_f_4(0x49df605da326cd1);
  v12->set_f_3(0xfd1852f);
  v12->set_f_5(s->substr(0, 26));
  v12->set_f_1(0xdc10485);
  Message1::M1::M30* v13 = v7->mutable_f_11();
  Message1::M1::M30::M88* v14 = v13->mutable_f_3();
  Message1::M1::M30::M88::M100* v15_0 = v14->add_f_3();
  v15_0->set_f_1(0x3b);
  v15_0->set_f_0(0x3a1);
  Message1::M1::M30::M88::M100::M104* v16 = v15_0->mutable_f_4();
  v16->set_f_0(0x51);
  Message1::M1::M30::M88::M100::M115* v17_0 = v15_0->add_f_5();
  v17_0->set_f_9(Message1::M1::M30::M88::M100::M115::E17_CONST_4);
  v17_0->set_f_13(0x47a540f86e9d20e8);
  v17_0->set_f_0(false);
  v17_0->set_f_12(Message1::M1::M30::M88::M100::M115::E18_CONST_1);
  v17_0->set_f_5(0x3c);
  v17_0->set_f_3(Message1::M1::M30::M88::M100::M115::E16_CONST_1);
  v17_0->set_f_11(0x350a);
  v17_0->set_f_6(0x880e57b);
  v17_0->set_f_16(0x3b72);
  v17_0->set_f_10(0x65);
  v17_0->set_f_15(0x62);
  v17_0->set_f_8(0x6fd92166a5d4902e);
  v17_0->set_f_4(0x1d800bc5);
  v14->set_f_0(0x3d70);
  Message1::M1::M30::M89* v18 = v13->mutable_f_5();
  v18->set_f_0(0x489772c);
  Message1::M1::M25* v19_0 = v7->add_f_10();
  v19_0->set_f_0(false);
  Message1::M1::M21* v20_0 = v7->add_f_7();
  v20_0->set_f_0(s->substr(0, 5));
  v20_0->set_f_2(s->substr(0, 1));
  v20_0->set_f_1(s->substr(0, 24));
  v20_0->set_f_3(true);
  Message1::M1::M61* v21 = v7->mutable_f_29();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M1::M49* v22 = v7->mutable_f_22();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M1::M63* v23 = v7->mutable_f_31();
  v23->set_f_0(0x672c3ef061517044);
  Message1::M1::M43* v24_0 = v7->add_f_15();
  (void)v24_0;  // Suppresses clang-tidy.
  Message1::M1::M67* v25_0 = v7->add_f_34();
  v25_0->set_f_0(0x57f32ed);
  Message1::M1::M41* v26_0 = v7->add_f_14();
  v26_0->set_f_0(0x46015a1cead7d272);
  v26_0->set_f_1(s->substr(0, 29));
  Message1::M1::M22* v27_0 = v7->add_f_9();
  v27_0->set_f_2(0x97c332b);
  Message1::M1::M22::M86* v28 = v27_0->mutable_f_6();
  v28->set_f_1(Message1::M1::M22::M86::E13_CONST_5);
  v28->set_f_0(0x3668cf53);
  v27_0->set_f_1(Message1::M1::M22::E6_CONST_3);
  v7->set_f_0(0xae94ebb5778c7ef);
  Message1::M1::M57* v29_0 = v7->add_f_27();
  v29_0->set_f_0(0.416219);
  Message1::M1::M45* v30 = v7->mutable_f_19();
  v30->set_f_1(0x9adfa0eca6ccab0);
  v30->set_f_0(false);
  v30->set_f_4(0xd1373da);
  v30->set_f_5(0x38);
  v30->set_f_3(0x3);
  v30->set_f_2(0.478158);
  Message1::M1::M7* v31 = v7->mutable_f_3();
  (void)v31;  // Suppresses clang-tidy.
  Message1::M1::M66* v32 = v7->mutable_f_33();
  v32->set_f_0(0xf2cb213);
  message->set_f_13(s->substr(0, 1));
  message->set_f_15(0x70);
  message->set_f_22(0x3f1de65498920bd4);
  message->set_f_27(0xe);
  message->set_f_5(0x1f);
  message->set_f_0(0x3452);
  message->set_f_4(s->substr(0, 29));
  message->set_f_28(0x3266a9fc613eac36);
  message->set_f_31(s->substr(0, 48));
  Message1::M4* v33 = message->mutable_f_51();
  Message1::M4::M47* v34 = v33->mutable_f_66();
  v34->set_f_3(false);
  v34->set_f_1(0x4c);
  v34->set_f_0(s->substr(0, 24));
  v34->set_f_2(0x5f1e96adda867b26);
  Message1::M4::M19* v35_0 = v33->add_f_53();
  v35_0->set_f_0(0x2c7a097f13d143fe);
  Message1::M4::M68* v36 = v33->mutable_f_74();
  v36->set_f_2(s->substr(0, 20));
  v36->set_f_0(0x18e5);
  v36->set_f_4(0xd08e092);
  v36->set_f_5(Message1::M4::M68::E10_CONST_1);
  Message1::M4::M74* v37 = v33->mutable_f_78();
  v37->set_f_0(s->substr(0, 1));
  Message1::M4::M64* v38 = v33->mutable_f_73();
  (void)v38;  // Suppresses clang-tidy.
  v33->set_f_10(0x1e9c09);
  v33->set_f_18(0.530328);
  v33->set_f_30(0x51);
  Message1::M4::M8* v39 = v33->mutable_f_47();
  v39->set_f_0(0x53a01015a71c877);
  Message1::M4::M42* v40_0 = v33->add_f_64();
  v40_0->set_f_1(0xe9ecd48);
  int32_t array_2[10] = {
      0x56, 0x42, 0x5e, 0x4d796dd, 0x4d, 0x2f, 0x6f, 0xd, 0x5d, 0x7463c,
  };
  for (auto v : array_2) {
    v40_0->add_f_2(v);
  }
  v40_0->set_f_4(0x29);
  v40_0->set_f_5(0x3b472cf);
  v40_0->set_f_0(0x36a1);
  Message1::M4::M52* v41 = v33->mutable_f_69();
  (void)v41;  // Suppresses clang-tidy.
  v33->set_f_5(0x2a1);
  v33->set_f_4(s->substr(0, 64));
  Message1::M4::M10* v42 = v33->mutable_f_48();
  (void)v42;  // Suppresses clang-tidy.
  v33->set_f_31(0x51);
  v33->set_f_6(0xe51066809aba9d6);
  Message1::M4::M29* v43 = v33->mutable_f_56();
  v43->set_f_0(0x79);
  v33->set_f_25(s->substr(0, 29));
  Message1::M4::M73* v44_0 = v33->add_f_76();
  (void)v44_0;  // Suppresses clang-tidy.
  v33->set_f_22(s->substr(0, 102));
  v33->set_f_21(false);
  v33->set_f_0(0x3530);
  v33->set_f_23(true);
  Message1::M4::M6* v45 = v33->mutable_f_46();
  (void)v45;  // Suppresses clang-tidy.
  v33->set_f_20(0x109b9126);
  v33->set_f_13(s->substr(0, 44));
  v33->set_f_19(s->substr(0, 21));
  Message1::M4::M50* v46 = v33->mutable_f_68();
  v46->set_f_0(0x7d);
  v33->set_f_1(Message1::M4::E2_CONST_5);
  v33->set_f_26(0x39);
  v33->set_f_9(0x5e);
  Message1::M4::M26* v47 = v33->mutable_f_55();
  (void)v47;  // Suppresses clang-tidy.
  v33->set_f_27(s->substr(0, 127));
  Message1::M4::M31* v48_0 = v33->add_f_57();
  v48_0->set_f_1(s->substr(0, 12));
  v48_0->set_f_0(true);
  v48_0->set_f_5(s->substr(0, 8));
  v48_0->set_f_4(s->substr(0, 3));
  v48_0->set_f_6(0x78);
  Message1::M4::M58* v49_0 = v33->add_f_71();
  v49_0->set_f_5(0x73);
  v49_0->set_f_3(0x1ed5f8791d707e86);
  v33->set_f_2(0x60);
  v33->set_f_29(0xf940a);
  message->set_f_24(0x474dda3a23d46d09);
  message->set_f_19(false);
  message->set_f_25(0x2a3d);
  message->set_f_32(s->substr(0, 3));
  message->set_f_20(s->substr(0, 8));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_19(true);
  message->set_f_26(s->substr(0, 21));
  message->set_f_11(0x69);
  message->set_f_12(s->substr(0, 160));
  message->set_f_15(0x64);
  Message1::E1 array_0[21] = {
      Message1::E1_CONST_4, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_2, Message1::E1_CONST_3,
      Message1::E1_CONST_4, Message1::E1_CONST_3, Message1::E1_CONST_5,
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_4, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_5,
      Message1::E1_CONST_5, Message1::E1_CONST_1, Message1::E1_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_1(v);
  }
  message->set_f_25(0x1c0a);
  message->set_f_31(s->substr(0, 15));
  Message1::M3* v0_0 = message->add_f_49();
  Message1::M3::M13* v1 = v0_0->mutable_f_7();
  v1->set_f_5(0x10ab92);
  v1->set_f_3(0x1e7d);
  v1->set_f_1(0x2);
  v1->set_f_9(s->substr(0, 3));
  v1->set_f_10(s->substr(0, 25));
  v1->set_f_0(0x1c33);
  v1->set_f_2(0.377504);
  v1->set_f_11(0.796877);
  Message1::M3::M72* v2 = v0_0->mutable_f_20();
  v2->set_f_3(s->substr(0, 22));
  v2->set_f_6(0x7e2915);
  v2->set_f_15(0x3e);
  v2->set_f_18(0x7d39a33c);
  v2->set_f_0(s->substr(0, 3));
  v2->set_f_4(0x1bcdfc0873d18e8e);
  v2->set_f_7(0x6a);
  v2->set_f_5(0x8df5d33bf5d8d01);
  v2->set_f_2(0x6e865620fcbf3e3b);
  v2->set_f_17(0x7e);
  v2->set_f_10(0x847dbfb);
  v2->set_f_1(0x21d0);
  v2->set_f_12(s->substr(0, 2));
  v2->set_f_13(0x530bc165c41b8c12);
  v2->set_f_9(Message1::M3::M72::E11_CONST_5);
  v2->set_f_14(s->substr(0, 3445));
  v2->set_f_11(0x3a);
  v2->set_f_16(s->substr(0, 8));
  Message1::M3::M9* v3 = v0_0->mutable_f_5();
  v3->set_f_0(0x1385);
  Message1::M3::M75* v4_0 = v0_0->add_f_22();
  v4_0->set_f_1(0x34c5d87);
  v4_0->set_f_3(s->substr(0, 17));
  v4_0->set_f_0(0x62aa81d50188f537);
  Message1::M3::M5* v5 = v0_0->mutable_f_4();
  v5->set_f_0(s->substr(0, 182));
  v5->set_f_1(0x4cfcd2a20e1fbf7f);
  v5->set_f_2(0x4f27fc0b1238a69);
  Message1::M3::M46* v6 = v0_0->mutable_f_15();
  v6->set_f_1(0x40);
  Message1::M3::M54* v7_0 = v0_0->add_f_17();
  v7_0->set_f_0(0x68);
  Message1::M3::M14* v8 = v0_0->mutable_f_8();
  v8->set_f_0(0x73);
  Message1::M3::M28* v9 = v0_0->mutable_f_9();
  v9->set_f_0(s->substr(0, 1));
  v9->set_f_5(Message1::M3::M28::E7_CONST_3);
  v9->set_f_4(0x1eb677);
  v9->set_f_1(s->substr(0, 2));
  v9->set_f_6(0.520363);
  v9->set_f_3(0xf);
  Message1::M3::M32* v10 = v0_0->mutable_f_10();
  (void)v10;  // Suppresses clang-tidy.
  v0_0->add_f_0(s->substr(0, 8));
  v0_0->add_f_0(s->substr(0, 1));
  Message1::M3::M60* v11 = v0_0->mutable_f_18();
  Message1::M3::M60::M94* v12 = v11->mutable_f_3();
  v12->set_f_3(true);
  v12->set_f_0(0x19);
  Message1::M3::M60::M94::M99* v13 = v12->mutable_f_13();
  v13->set_f_0(s->substr(0, 119));
  Message1::M3::M60::M94::M99::M112* v14 = v13->mutable_f_5();
  v14->set_f_2(0x12e1751a0bfd2764);
  v13->set_f_1(s->substr(0, 6));
  v12->set_f_2(0x241bf92295766271);
  v12->set_f_1(0x61);
  v12->set_f_5(0x75);
  message->set_f_4(s->substr(0, 28));
  message->set_f_9(0x2b019c63ab9146b2);
  message->set_f_8(0.175373);
  message->set_f_30(0x6d);
  message->set_f_13(s->substr(0, 22));
  message->set_f_3(false);
  message->set_f_22(0x4017b59580c82cb1);
  message->set_f_23(false);
  message->set_f_16(s->substr(0, 9));
  message->set_f_5(0x6b);
  message->set_f_28(0x28c7afb45fd87589);
  message->set_f_0(0x356c);
  Message1::M4* v15 = message->mutable_f_51();
  Message1::M4::M53* v16 = v15->mutable_f_70();
  v16->set_f_0(0x3ff2e1cbd69cc86e);
  Message1::M4::M8* v17 = v15->mutable_f_47();
  v17->set_f_0(0x1d70b9e18c4207ef);
  v15->set_f_30(0x74);
  Message1::M4::M35* v18_0 = v15->add_f_60();
  v18_0->set_f_0(0.972939);
  v18_0->set_f_1(0x6e);
  Message1::M4::M11* v19 = v15->mutable_f_50();
  v19->set_f_0(s->substr(0, 2));
  v15->set_f_1(Message1::M4::E2_CONST_4);
  Message1::M4::M10* v20 = v15->mutable_f_48();
  v20->set_f_0(s->substr(0, 29));
  v20->set_f_1(0.954381);
  v20->set_f_2(0.971119);
  v15->set_f_9(0x48);
  Message1::M4::M26* v21 = v15->mutable_f_55();
  v21->set_f_0(0x62);
  v15->set_f_25(s->substr(0, 57));
  Message1::M4::M52* v22 = v15->mutable_f_69();
  (void)v22;  // Suppresses clang-tidy.
  v15->set_f_27(s->substr(0, 10));
  v15->set_f_0(0x392b);
  v15->set_f_3(0x7449681cf88294e2);
  Message1::M4::M68* v23 = v15->mutable_f_74();
  v23->set_f_3(0xd712f0);
  v23->set_f_2(s->substr(0, 21));
  v23->set_f_1(s->substr(0, 23));
  v23->set_f_0(0x2048428);
  v15->set_f_15(0x1321);
  v15->set_f_6(0x4830d0004486d514);
  v15->set_f_21(false);
  Message1::M4::M58* v24_0 = v15->add_f_71();
  v24_0->set_f_5(0xa7b60e9);
  v24_0->set_f_3(0x1d1e28dd2d09cd2c);
  v24_0->set_f_2(false);
  Message1::M4::M47* v25 = v15->mutable_f_66();
  v25->set_f_2(0x6d805e0e7c1ff6ae);
  v25->set_f_4(0x21b1f49);
  v25->set_f_0(s->substr(0, 23));
  Message1::M4::M16* v26_0 = v15->add_f_52();
  v26_0->set_f_0(0x5553a6410564a889);
  v15->set_f_10(0x1474);
  v15->set_f_23(true);
  Message1::M4::M37* v27_0 = v15->add_f_61();
  (void)v27_0;  // Suppresses clang-tidy.
  Message1::M4::M33* v28_0 = v15->add_f_58();
  (void)v28_0;  // Suppresses clang-tidy.
  v15->set_f_22(s->substr(0, 7));
  v15->set_f_29(0x520);
  Message1::M4::M50* v29 = v15->mutable_f_68();
  (void)v29;  // Suppresses clang-tidy.
  v15->set_f_8(0x2afcc);
  Message1::M4::M73* v30_0 = v15->add_f_76();
  v30_0->add_f_0(Message1::M4::M73::E12_CONST_5);
  v15->set_f_18(0.136883);
  v15->set_f_2(0x15);
  v15->set_f_4(s->substr(0, 9));
  Message1::M4::M19* v31_0 = v15->add_f_53();
  (void)v31_0;  // Suppresses clang-tidy.
  Message1::M2* v32_0 = message->add_f_47();
  Message1::M2::M36* v33 = v32_0->mutable_f_10();
  (void)v33;  // Suppresses clang-tidy.
  Message1::M2::M51* v34 = v32_0->mutable_f_11();
  Message1::M2::M51::M87* v35 = v34->mutable_f_3();
  v35->set_f_0(false);
  Message1::M2::M17* v36_0 = v32_0->add_f_3();
  Message1::M2::M17::M76* v37 = v36_0->mutable_f_3();
  v37->set_f_0(0x38);
  v36_0->set_f_0(0x2f18267);
  Message1::M2::M59* v38_0 = v32_0->add_f_12();
  Message1::M2::M59::M91* v39 = v38_0->mutable_f_2();
  v39->set_f_0(s->substr(0, 20));
  message->set_f_14(0x4b);
  message->set_f_20(s->substr(0, 7));
  message->set_f_7(s->substr(0, 7));
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
}  // namespace fleetbench::rpc::P9::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
