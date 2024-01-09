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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE6_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE6_H_

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message6.pb.h"
#include "fleetbench/proto/receiver.h"
namespace fleetbench::proto {

inline void Message6_Set_1(Message6* message, std::string* s) {
  Message6::M3* v1_0 = message->add_f_18();
  Message6::M3::M11* v1 = v1_0->mutable_f_2();
  Message6::M3::M11::M22* v2 = v1->mutable_f_2();
  Message6::M3::M11::M22::M32* v3 = v2->mutable_f_2();
  v3->set_f_5(0xd9);
  v3->set_f_2(s->substr(0, 5));
  v2->set_f_0(s->substr(0, 51));
  v1_0->add_f_0(0x35);
  v1_0->add_f_0(0x7b9557);
  Message6::M2* v5_0 = message->add_f_16();
  Message6::M2::M16* v6_0 = v5_0->add_f_9();
  v6_0->set_f_0(0xb);
  v6_0->set_f_2(0x36);
  Message6::M2::M10* v6 = v5_0->mutable_f_1();
  v6->set_f_4(s->substr(0, 11));
  Message6::M2::M10::M19* v8_0 = v6->add_f_7();
  v8_0->set_f_0(s->substr(0, 1));
  v6->set_f_0(0.838256);
  v6->add_f_2(0xe);
  v6->add_f_2(0x1be2b3e7);
  v5_0->set_f_0(0xa3);
  Message6::M2::M12* v8 = v5_0->mutable_f_6();
  v8->set_f_0(0xad36a6e3c3);
  Message6::M4* v10 = message->mutable_f_21();
  Message6::M4::M6* v11 = v10->mutable_f_8();
  Message6::M4::M6::M18* v12 = v11->mutable_f_2();
  Message6::M4::M6::M18::M29* v13 = v12->mutable_f_1();
  Message6::M4::M6::M18::M29::M41* v16_0 = v13->add_f_3();
  Message6::M4::M6::M18::M29::M41::M46* v16 = v16_0->mutable_f_2();
  v16->set_f_59(0xca);
  v16->set_f_26(true);
  v16->set_f_24(Message6::M4::M6::M18::M29::M41::M46::E55_CONST_3);
  v16->set_f_20(s->substr(0, 23));
  v16->set_f_38(0x10b67f2d5d67865e);
  v16->set_f_28(0x77);
  v16->add_f_1(0xa804f0);
  v16->add_f_1(0x72);
  v16->set_f_7(0x1000e8b2ee3095);
  v16->set_f_48(Message6::M4::M6::M18::M29::M41::M46::E60_CONST_5);
  v16->set_f_21(0.859229);
  v16->set_f_57(0x51cf067916b9);
  v16->set_f_64(0x2d);
  v16->set_f_29(Message6::M4::M6::M18::M29::M41::M46::E56_CONST_1);
  v16->set_f_58(0x3f2ef187);
  v16->set_f_42(Message6::M4::M6::M18::M29::M41::M46::E59_CONST_5);
  v16->set_f_5(0x5a);
  v16->set_f_34(0xe89ad08342);
  Message6::M4::M6::M18::M29::M41::M46::M48* v17 = v16->mutable_f_93();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51* v18 = v17->mutable_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56* v20_0 = v18->add_f_1();
  v20_0->set_f_0(0xef816a14df105e);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58* v21_0 =
      v20_0->add_f_2();
  v21_0->set_f_0(s->substr(0, 494));
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60* v21 =
      v21_0->mutable_f_3();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M62* v22 =
      v21->mutable_f_11();
  v22->set_f_0(s->substr(0, 26));
  v21->set_f_6(0x562);
  v21->set_f_4(0xf160c38e31);
  v21->set_f_2(0xf0ec31368c);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61* v23 =
      v21->mutable_f_10();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63* v24 =
      v23->mutable_f_2();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64*
      v25 = v24->mutable_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65* v26 = v25->mutable_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66* v28_0 = v26->add_f_1();
  v28_0->set_f_0(true);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66::M67* v29_0 = v28_0->add_f_2();
  v29_0->add_f_1(0x31);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66* v28_1 = v26->add_f_1();
  v28_1->set_f_0(false);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66::M67* v32_0 = v28_1->add_f_2();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66::M67::M69* v32 = v32_0->mutable_f_4();
  v32->set_f_0(s->substr(0, 24));
  v26->set_f_0(0x24f02686);
  v25->set_f_0(s->substr(0, 13));
  v23->set_f_0(0xe2e7a709);
  v21->set_f_3(s->substr(0, 9));
  v21->set_f_5(0x40ae9841);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58* v21_1 =
      v20_0->add_f_2();
  v21_1->set_f_0(s->substr(0, 32));
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60* v34 =
      v21_1->mutable_f_3();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61* v35 =
      v34->mutable_f_10();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63* v36 =
      v35->mutable_f_2();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64*
      v37 = v36->mutable_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65* v38 = v37->mutable_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66* v40_0 = v38->add_f_1();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66::M67* v41_0 = v40_0->add_f_2();
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::M61::M63::M64::
      M65::M66::M67::M69* v41 = v41_0->mutable_f_4();
  v41->set_f_0(s->substr(0, 22));
  v41_0->set_f_0(s->substr(0, 6));
  int64_t array_1[24] = {
      0x28,     0xd0,     0xfd,       0xf2,           0x30,       0xa2,
      0x85baf7, 0x406a54, 0x863d,     0x2c,           0xf7318f,   0x239,
      0xc8,     0x34,     0x241c0e97, 0x8e,           0xe5002eee, 0x7eedf1,
      0x1fcb7,  0xd63e,   0x66,       0x146a2212b7ec, 0xcf,       0x7f};
  for (auto& value : array_1) v41_0->add_f_1(value);
  v37->set_f_0(s->substr(0, 20));
  v34->set_f_5(0xadd3);
  v34->set_f_1(false);
  Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M59* v44 =
      v20_0->mutable_f_3();
  v44->set_f_7(0x8d9f);
  v44->set_f_8(s->substr(0, 8));
  v44->set_f_0(
      Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M59::E81_CONST_2);
  v18->set_f_0(s->substr(0, 3));
  v17->set_f_0(s->substr(0, 18));
  v16->set_f_11(0x86);
  v16->set_f_43(0xa5797d87d40be4);
  v16->set_f_32(0.971960);
  v16->set_f_45(0x2fba242c);
  v16->set_f_8(Message6::M4::M6::M18::M29::M41::M46::E52_CONST_4);
  v16->set_f_4(s->substr(0, 4));
  v16->set_f_15(s->substr(0, 30));
  v16->set_f_33(s->substr(0, 89));
  Message6::M4::M6::M25* v47_0 = v11->add_f_3();
  Message6::M4::M6::M25::M33* v48_0 = v47_0->add_f_6();
  v48_0->set_f_1(Message6::M4::M6::M25::M33::E34_CONST_4);
  Message6::M4::M6::M25::M30* v48 = v47_0->mutable_f_5();
  v48->set_f_0(s->substr(0, 16));
  v10->set_f_0(0x58);
  v10->set_f_1(s->substr(0, 6));
  Message6::M4::M13* v49 = v10->mutable_f_11();
  Message6::M4::M13::M26* v50 = v49->mutable_f_2();
  v50->set_f_1(Message6::M4::M13::M26::E10_CONST_5);
  v50->add_f_3(Message6::M4::M13::M26::E11_CONST_2);
  Message6::M4::M13::M26::M35* v54_0 = v50->add_f_12();
  v54_0->set_f_0(0x85);
  v10->set_f_2(0x9b);
  Message6::M1* v58_0 = message->add_f_14();
  Message6::M1::M15* v59_0 = v58_0->add_f_9();
  v59_0->set_f_1(0x7ace6da836231b2);
  Message6::M1::M15::M23* v59 = v59_0->mutable_f_5();
  Message6::M1::M15::M23::M28* v61_0 = v59->add_f_1();
  Message6::M1::M15::M23::M28::M43* v61 = v61_0->mutable_f_4();
  v61->set_f_2(Message6::M1::M15::M23::M28::M43::E39_CONST_3);
  v61->set_f_24(0x74e2f368f9f85f29);
  v61->set_f_7(s->substr(0, 22));
  v61->set_f_46(s->substr(0, 28));
  v61->set_f_33(0xbb);
  v61->set_f_32(s->substr(0, 4));
  v61->set_f_37(0x4b028692fc);
  v61->set_f_10(0x8b);
  v61->set_f_42(0xaeb5cda3);
  v61->set_f_16(Message6::M1::M15::M23::M28::M43::E40_CONST_2);
  v61->set_f_27(0x8c31);
  v61->set_f_43(0.056935);
  v61->set_f_17(0xf5);
  v61_0->set_f_0(s->substr(0, 3));
  Message6::M1::M15::M23::M28::M42* v62 = v61_0->mutable_f_3();
  Message6::M1::M15::M23::M28::M42::M45* v63 = v62->mutable_f_3();
  v63->set_f_4(Message6::M1::M15::M23::M28::M42::M45::E47_CONST_2);
  v63->set_f_3(0x7c379ed2c892aadf);
  v63->set_f_5(Message6::M1::M15::M23::M28::M42::M45::E48_CONST_4);
  Message6::M1::M15::M23::M28::M42::M45::M49* v65_0 = v63->add_f_12();
  v65_0->set_f_0(0x23293665);
  v63->set_f_7(s->substr(0, 3));
  v63->set_f_2(Message6::M1::M15::M23::M28::M42::M45::E46_CONST_1);
  v63->set_f_1(s->substr(0, 5));
  v63->set_f_6(Message6::M1::M15::M23::M28::M42::M45::E49_CONST_1);
  Message6::M1::M15::M23::M28::M42::M44* v65 = v62->mutable_f_2();
  Message6::M1::M15::M23::M28::M42::M44::M47* v67_0 = v65->add_f_3();
  Message6::M1::M15::M23::M28::M42::M44::M47::M55* v67 = v67_0->mutable_f_1();
  Message6::M1::M15::M23::M28::M42::M44::M47::M55::M57* v68 =
      v67->mutable_f_2();
  v68->add_f_2(0xe400ff);
  v68->add_f_2(0xfc34);
  v68->add_f_2(0xb3);
  v68->add_f_2(0x1b);
  Message6::M1::M15::M23::M28::M42::M44::M47* v67_1 = v65->add_f_3();
  Message6::M1::M15::M23::M28::M42::M44::M47::M55* v69 = v67_1->mutable_f_1();
  int32_t array_2[6] = {0x1, 0xa617, 0x78, 0xbb, 0x95, 0x24};
  for (auto& value : array_2) v69->add_f_0(value);
  Message6::M1::M15::M23::M28::M42::M44::M47::M55::M57* v70 =
      v69->mutable_f_2();
  v70->add_f_2(0x24c38df7);
  Message6::M1::M15::M23::M28::M42::M44::M50* v71 = v65->mutable_f_4();
  v71->set_f_46(0x66cee12245fd4e9c);
  v71->set_f_53(0.568805);
  v71->set_f_29(0x24f918);
  v71->set_f_35(Message6::M1::M15::M23::M28::M42::M44::M50::E67_CONST_3);
  v71->set_f_54(0x69);
  v71->set_f_22(Message6::M1::M15::M23::M28::M42::M44::M50::E65_CONST_1);
  v71->set_f_62(s->substr(0, 7));
  v71->set_f_58(false);
  v71->set_f_44(0x16195f9d6c1bdc6b);
  v71->set_f_4(0x72ba);
  Message6::M1::M15::M23::M28::M42::M44::M50::M54* v73_0 = v71->add_f_135();
  v73_0->set_f_0(0x6acf5fa033);
  v71->set_f_50(Message6::M1::M15::M23::M28::M42::M44::M50::E71_CONST_3);
  v71->set_f_25(Message6::M1::M15::M23::M28::M42::M44::M50::E66_CONST_5);
  v71->set_f_70(0x2c61fb);
  v71->set_f_15(0.620035);
  v71->set_f_1(0.039464);
  Message6::M1::M15::M23::M28::M42::M44::M50::M52* v73 = v71->mutable_f_133();
  v73->set_f_2(s->substr(0, 21));
  v73->set_f_0(Message6::M1::M15::M23::M28::M42::M44::M50::M52::E78_CONST_1);
  v73->set_f_5(s->substr(0, 29));
  v73->set_f_4(s->substr(0, 72));
  v73->set_f_1(Message6::M1::M15::M23::M28::M42::M44::M50::M52::E79_CONST_1);
  v71->set_f_47(s->substr(0, 7));
  v71->set_f_11(0x5f8e58d5837732d7);
  v71->set_f_57(0.355953);
  v71->add_f_45(0x8f);
  v71->set_f_76(s->substr(0, 27));
  v71->set_f_61(Message6::M1::M15::M23::M28::M42::M44::M50::E75_CONST_1);
  v71->set_f_28(0x4e5c25c109d58d34);
  v71->set_f_79(0x91fc);
  v71->set_f_86(s->substr(0, 4));
  v71->set_f_21(0xee);
  v71->set_f_84(0x1b52d14991ff);
  v71->set_f_68(0x3ec434);
  v71->set_f_75(0.094828);
  v71->set_f_16(0xb6);
  v71->set_f_42(0x72);
  v71->set_f_2(s->substr(0, 22));
  v71->set_f_24(s->substr(0, 8));
  v71->set_f_82(0x77);
  v71->set_f_8(0x6cace3e7);
  int array_3[60] = {19, 16,  2385, 12, 28, 300, 1911, 14, 32, 17, 55, 7,
                     51, 120, 16,   21, 7,  31,  31,   15, 3,  25, 9,  18,
                     7,  8,   4,    20, 5,  16,  2,    15, 28, 32, 7,  11,
                     1,  3,   5,    6,  48, 5,   104,  12, 15, 7,  8,  3392,
                     3,  4,   8,    30, 37, 7,   12,   37, 2,  25, 19, 3955};
  for (size_t i = 0; i < 60; i++) v71->add_f_14(s->substr(0, array_3[i]));
  v71->set_f_80(s->substr(0, 10));
  v71->set_f_17(0x5ae7782f);
  int32_t array_4[14] = {0x77c6d993, 0xf9,       0xb1f7b4, 0xfc,  0x5e82,
                         0x6e48,     0x6f,       0x69,     0xeb,  0xe1cba5,
                         0x633d0d,   0x5dbf073b, 0xf4,     0x384f};
  for (auto& value : array_4) v71->add_f_63(value);
  v71->set_f_20(true);
  v71->set_f_6(0x2d0543be);
  v71->set_f_41(s->substr(0, 27));
  v71->set_f_36(Message6::M1::M15::M23::M28::M42::M44::M50::E68_CONST_2);
  Message6::M1::M15::M21* v74 = v59_0->mutable_f_4();
  v74->set_f_5(s->substr(0, 11));
  v74->set_f_0(s->substr(0, 6));
  v74->set_f_3(0x70edf1d5);
  v74->set_f_1(0.928471);
  v58_0->set_f_1(0x80);
  Message6::M1::M17* v75 = v58_0->mutable_f_10();
  v75->set_f_4(s->substr(0, 1));
  v75->set_f_11(0x11f64e56);
  v75->set_f_12(s->substr(0, 27));
  v75->set_f_9(s->substr(0, 29));
  v75->set_f_8(Message6::M1::M17::E7_CONST_2);
  v75->set_f_3(false);
  v75->set_f_14(0x37c80954b768);
  v75->set_f_1(0xe8486b3a);
  v75->set_f_16(Message6::M1::M17::E8_CONST_2);
  v75->set_f_7(s->substr(0, 16));
  v58_0->set_f_4(0x46ab7b875e02f7f1);
  message->set_f_4(Message6::E2_CONST_4);
  Message6::M5* v77_0 = message->add_f_23();
  v77_0->set_f_0(0x5b);
  Message6::M5::M8* v77 = v77_0->mutable_f_12();
  Message6::M5::M8::M27* v78 = v77->mutable_f_1();
  v78->set_f_65(0x1d);
  v78->set_f_49(0x97);
  v78->set_f_84(0xe2);
  v78->set_f_155(false);
  v78->set_f_15(s->substr(0, 16));
  v78->set_f_44(s->substr(0, 6));
  v78->set_f_97(s->substr(0, 11));
  v78->set_f_106(0xfec54dd8);
  v78->set_f_1(s->substr(0, 5));
  v78->add_f_144(Message6::M5::M8::M27::E30_CONST_4);
  v78->set_f_17(s->substr(0, 88));
  v78->set_f_94(s->substr(0, 67));
  v78->set_f_14(0x92bf);
  v78->set_f_35(0xcf07);
  v78->set_f_75(s->substr(0, 25));
  v78->set_f_74(Message6::M5::M8::M27::E17_CONST_2);
  v78->set_f_69(0.261700);
  v78->set_f_45(true);
  v78->set_f_50(true);
  v78->set_f_131(s->substr(0, 2));
  v78->set_f_120(0xbf);
  v78->set_f_89(s->substr(0, 1));
  v78->set_f_90(s->substr(0, 5));
  v78->set_f_86(s->substr(0, 17));
  v78->set_f_126(0.034699);
  v78->set_f_145(s->substr(0, 15));
  int64_t array_5[12] = {0x13,         0x6093,   0x6b,       0x6b8e2ef5251eda,
                         0x2413c0e6a3, 0x788e0a, 0xbfbbbea3, 0xf992da0d,
                         0xc3e2,       0x80,     0xce,       0x12};
  for (auto& value : array_5) v78->add_f_30(value);
  v78->set_f_27(0xbdfb2476f7c7d9e);
  v78->set_f_123(Message6::M5::M8::M27::E26_CONST_2);
  v78->set_f_153(s->substr(0, 24));
  v78->set_f_4(0x88);
  v78->set_f_78(s->substr(0, 7));
  v78->set_f_19(0x45e95e3b659c3e7b);
  v78->set_f_52(0xa4);
  v78->set_f_138(0x4266);
  v78->set_f_124(Message6::M5::M8::M27::E27_CONST_2);
  v78->set_f_40(s->substr(0, 6));
  v78->set_f_127(Message6::M5::M8::M27::E28_CONST_4);
  v78->set_f_151(Message6::M5::M8::M27::E32_CONST_4);
  Message6::M5::M8::M27::M36* v79 = v78->mutable_f_238();
  v79->set_f_15(0xac61f3c0aeca38);
  v79->set_f_11(s->substr(0, 76));
  v79->set_f_14(0.934598);
  v79->set_f_7(0xa6fc48);
  v79->set_f_2(0x34);
  v79->set_f_5(0xd3);
  v79->set_f_9(0x423e36c);
  v79->set_f_4(0x93);
  v78->set_f_114(Message6::M5::M8::M27::E24_CONST_5);
  v78->set_f_54(s->substr(0, 8));
  v78->set_f_60(0.958593);
  v78->set_f_13(0x29);
  v78->set_f_18(s->substr(0, 8));
  v78->set_f_51(s->substr(0, 11));
  v78->set_f_46(s->substr(0, 5));
  v78->set_f_82(0xfb7ee0);
  v78->set_f_28(0x18);
  v78->set_f_119(0xd1);
  v78->set_f_137(0xac);
  v78->set_f_118(0x69);
  v78->set_f_136(Message6::M5::M8::M27::E29_CONST_3);
  v78->set_f_115(0x50d10459);
  v78->set_f_8(0xb7);
  v78->set_f_41(Message6::M5::M8::M27::E13_CONST_4);
  v78->set_f_129(0x5a);
  v78->set_f_34(0x4f);
  Message6::M5::M8::M27::M34* v82_0 = v78->add_f_237();
  v82_0->set_f_3(s->substr(0, 11));
  v82_0->set_f_2(s->substr(0, 3));
  v82_0->set_f_0(Message6::M5::M8::M27::M34::E35_CONST_1);
  v82_0->set_f_4(Message6::M5::M8::M27::M34::E36_CONST_2);
  v78->set_f_66(Message6::M5::M8::M27::E16_CONST_3);
  v78->set_f_87(Message6::M5::M8::M27::E19_CONST_5);
  v78->set_f_107(0x28);
  v78->set_f_21(s->substr(0, 486369));
  v78->set_f_47(s->substr(0, 2));
  v78->set_f_56(0x72dbc4ec47847b);
  v78->set_f_152(s->substr(0, 5));
  v77_0->set_f_2(Message6::M5::E5_CONST_3);
  v77_0->set_f_6(0xc80f65);
  Message6::M5* v77_1 = message->add_f_23();
  v77_1->set_f_0(0x55);
  v77_1->add_f_8(0x133f15);
  v77_1->set_f_3(0x97);
  v77_1->add_f_1(Message6::M5::E4_CONST_2);
  v77_1->add_f_1(Message6::M5::E4_CONST_3);
  Message6::M5::M8* v86 = v77_1->mutable_f_12();
  Message6::M5::M8::M27* v87 = v86->mutable_f_1();
  v87->set_f_84(0x86);
  v87->set_f_120(0x6e336b37);
  v87->set_f_92(0xfbbc30e1c8);
  v87->set_f_80(0xfa);
  v87->set_f_12(s->substr(0, 47));
  v87->set_f_141(0.782042);
  v87->set_f_70(0x1d220cf9);
  v87->set_f_24(0x8b575633);
  v87->set_f_29(s->substr(0, 408));
  v87->set_f_18(s->substr(0, 8));
  v87->set_f_135(0xd35e);
  v87->set_f_89(s->substr(0, 5));
  v87->set_f_64(Message6::M5::M8::M27::E15_CONST_4);
  v87->set_f_32(0xb1);
  v87->set_f_2(s->substr(0, 30));
  v87->set_f_116(Message6::M5::M8::M27::E25_CONST_4);
  v87->set_f_44(s->substr(0, 15));
  v87->set_f_51(s->substr(0, 13));
  v87->set_f_132(0xf9);
  v87->set_f_77(0x1e);
  v87->set_f_3(0xb441);
  v87->set_f_26(0xa7d8a8);
  v87->set_f_109(Message6::M5::M8::M27::E23_CONST_4);
  v87->set_f_122(s->substr(0, 12));
  v87->set_f_65(0xb9);
  v87->set_f_15(s->substr(0, 21));
  v87->set_f_23(0x3f1b2ae4a33700eb);
  v87->set_f_130(0xe9);
  v87->set_f_10(0x4ddd810bfaea18);
  v87->set_f_61(0.260379);
  v87->set_f_151(Message6::M5::M8::M27::E32_CONST_2);
  v87->set_f_0(0x41);
  v87->set_f_107(0x38);
  v87->set_f_7(s->substr(0, 16));
  v87->set_f_118(0x51);
  v87->set_f_82(0x2a);
  v87->set_f_42(0xbc);
  v87->set_f_98(0xd80325);
  v87->set_f_101(s->substr(0, 7));
  v87->set_f_87(Message6::M5::M8::M27::E19_CONST_5);
  v87->set_f_43(Message6::M5::M8::M27::E14_CONST_1);
  v87->set_f_47(s->substr(0, 3));
  v87->set_f_60(0.580232);
  v87->set_f_115(0x5f15dc27);
  v87->set_f_127(Message6::M5::M8::M27::E28_CONST_2);
  v87->set_f_117(s->substr(0, 1));
  v87->set_f_58(0.365365);
  v87->set_f_46(s->substr(0, 10));
  v87->set_f_33(0x7449748a);
  v87->set_f_125(s->substr(0, 5));
  v87->set_f_157(s->substr(0, 499));
  v87->set_f_48(s->substr(0, 127));
  Message6::M5::M8::M27::M36* v89 = v87->mutable_f_238();
  v89->set_f_6(s->substr(0, 52));
  Message6::M5::M8::M27::M36::M37* v90 = v89->mutable_f_23();
  v90->set_f_0(0xa);
  v89->set_f_2(0xc3c8c2);
  v89->set_f_16(s->substr(0, 11));
  v89->add_f_1(0x2e82);
  v89->add_f_1(0x76);
  v89->set_f_11(s->substr(0, 5));
  v89->set_f_15(0x2f);
  v87->set_f_146(0x6e5f17);
  v87->set_f_140(0x59d807b0);
  v87->set_f_114(Message6::M5::M8::M27::E24_CONST_3);
  v87->set_f_55(0x596448e6);
}

inline void Message6_Get_1(Message6* message) {
  ReceiveInt32((*message).f_4());
  ReceiveBool((*message).f_0());
  for (const auto& v0 : (*message).f_14()) {
    ReceiveInt32(v0.f_1());
    ReceiveInt32(v0.f_2());
    ReceiveInt64(v0.f_3());
    for (const auto& v1 : v0.f_9()) {
      ReceiveUint64(v1.f_1());
      const Message6::M1::M15::M23& v2 = v1.f_5();
      for (const auto& v3 : v2.f_1()) {
        const Message6::M1::M15::M23::M28::M42& v4 = v3.f_3();
        const Message6::M1::M15::M23::M28::M42::M44& v5 = v4.f_2();
        ReceiveString(v5.f_0());
        for (const auto& v6 : v5.f_3()) {
          const Message6::M1::M15::M23::M28::M42::M44::M47::M55& v7 = v6.f_1();
          const Message6::M1::M15::M23::M28::M42::M44::M47::M55::M57& v8 =
              v7.f_2();
          ReceiveString(v8.f_0());
          ReceiveInt32(v8.f_1());
          for (auto f : v8.f_2()) {
            ReceiveInt64(f);
          }
          ReceiveInt64(v8.f_3());
          for (auto f : v7.f_0()) {
            ReceiveInt32(f);
          }
          for (auto f : v6.f_0()) {
            ReceiveInt32(f);
          }
        }
        const Message6::M1::M15::M23::M28::M42::M44::M50& v9 = v5.f_4();
        ReceiveInt64(v9.f_27());
        ReceiveString(v9.f_47());
        ReceiveInt32(v9.f_3());
        ReceiveBool(v9.f_58());
        ReceiveString(v9.f_73());
        ReceiveBool(v9.f_20());
        ReceiveString(v9.f_62());
        ReceiveInt32(v9.f_82());
        ReceiveInt32(v9.f_40());
        ReceiveInt32(v9.f_4());
        ReceiveInt64(v9.f_11());
        ReceiveInt32(v9.f_25());
        ReceiveInt64(v9.f_74());
        ReceiveInt32(v9.f_22());
        ReceiveInt32(v9.f_29());
        ReceiveString(v9.f_76());
        ReceiveFloat(v9.f_57());
        ReceiveInt32(v9.f_21());
        ReceiveInt64(v9.f_64());
        ReceiveString(v9.f_43());
        ReceiveInt32(v9.f_59());
        ReceiveString(v9.f_94());
        ReceiveInt32(v9.f_60());
        ReceiveUint64(v9.f_69());
        ReceiveString(v9.f_0());
        ReceiveString(v9.f_86());
        for (auto f : v9.f_45()) {
          ReceiveInt32(f);
        }
        ReceiveString(v9.f_80());
        ReceiveBool(v9.f_34());
        ReceiveString(v9.f_38());
        ReceiveString(v9.f_48());
        ReceiveDouble(v9.f_15());
        ReceiveInt32(v9.f_5());
        ReceiveInt32(v9.f_95());
        ReceiveString(v9.f_9());
        ReceiveInt64(v9.f_65());
        ReceiveInt64(v9.f_91());
        ReceiveString(v9.f_24());
        ReceiveInt32(v9.f_6());
        ReceiveFloat(v9.f_85());
        ReceiveString(v9.f_26());
        ReceiveInt64(v9.f_37());
        for (auto f : v9.f_23()) {
          ReceiveFloat(f);
        }
        for (auto f : v9.f_63()) {
          ReceiveInt32(f);
        }
        ReceiveString(v9.f_49());
        ReceiveInt32(v9.f_52());
        ReceiveInt32(v9.f_61());
        ReceiveBool(v9.f_90());
        ReceiveInt64(v9.f_68());
        ReceiveBool(v9.f_72());
        ReceiveBool(v9.f_66());
        ReceiveInt64(v9.f_78());
        ReceiveString(v9.f_19());
        ReceiveUint64(v9.f_44());
        ReceiveInt32(v9.f_79());
        ReceiveString(v9.f_33());
        ReceiveDouble(v9.f_7());
        ReceiveUint32(v9.f_54());
        const Message6::M1::M15::M23::M28::M42::M44::M50::M52& v10 = v9.f_133();
        ReceiveString(v10.f_2());
        ReceiveInt32(v10.f_0());
        ReceiveString(v10.f_4());
        ReceiveString(v10.f_5());
        ReceiveUint32(v10.f_3());
        ReceiveInt32(v10.f_1());
        ReceiveString(v9.f_56());
        ReceiveInt32(v9.f_88());
        ReceiveUint32(v9.f_18());
        ReceiveInt32(v9.f_31());
        ReceiveBool(v9.f_87());
        ReceiveInt64(v9.f_84());
        ReceiveString(v9.f_2());
        ReceiveInt64(v9.f_70());
        ReceiveString(v9.f_13());
        ReceiveFloat(v9.f_1());
        ReceiveString(v9.f_55());
        ReceiveInt64(v9.f_92());
        ReceiveInt64(v9.f_89());
        ReceiveInt64(v9.f_71());
        ReceiveFloat(v9.f_12());
        ReceiveString(v9.f_41());
        ReceiveInt32(v9.f_83());
        ReceiveUint64(v9.f_42());
        for (int i = 0; i < v9.f_14().size(); i++) {
          ReceiveString(v9.f_14(i));
        }
        ReceiveInt32(v9.f_81());
        ReceiveInt32(v9.f_50());
        ReceiveUint64(v9.f_46());
        ReceiveFloat(v9.f_75());
        ReceiveInt64(v9.f_51());
        ReceiveInt32(v9.f_39());
        for (const auto& v11 : v9.f_135()) {
          ReceiveUint64(v11.f_0());
        }
        ReceiveInt32(v9.f_35());
        ReceiveUint32(v9.f_17());
        ReceiveInt64(v9.f_30());
        ReceiveFloat(v9.f_53());
        ReceiveInt32(v9.f_36());
        ReceiveUint64(v9.f_32());
        ReceiveInt32(v9.f_10());
        ReceiveInt32(v9.f_93());
        ReceiveBool(v9.f_67());
        ReceiveInt32(v9.f_8());
        ReceiveInt64(v9.f_28());
        ReceiveInt32(v9.f_77());
        ReceiveInt64(v9.f_16());
        ReceiveString(v4.f_0());
        const Message6::M1::M15::M23::M28::M42::M45& v12 = v4.f_3();
        ReceiveString(v12.f_7());
        ReceiveString(v12.f_1());
        ReceiveInt32(v12.f_4());
        ReceiveInt64(v12.f_3());
        for (auto f : v12.f_8()) {
          ReceiveInt32(f);
        }
        ReceiveInt32(v12.f_0());
        for (const auto& v13 : v12.f_12()) {
          ReceiveUint32(v13.f_0());
        }
        ReceiveInt32(v12.f_5());
        ReceiveInt32(v12.f_2());
        ReceiveInt32(v12.f_6());
        const Message6::M1::M15::M23::M28::M43& v14 = v3.f_4();
        ReceiveString(v14.f_32());
        ReceiveInt64(v14.f_44());
        ReceiveString(v14.f_9());
        ReceiveInt32(v14.f_16());
        ReceiveString(v14.f_20());
        ReceiveString(v14.f_34());
        ReceiveFloat(v14.f_11());
        ReceiveInt32(v14.f_41());
        ReceiveString(v14.f_7());
        ReceiveInt32(v14.f_1());
        ReceiveUint32(v14.f_8());
        ReceiveInt32(v14.f_19());
        ReceiveInt32(v14.f_39());
        ReceiveFloat(v14.f_43());
        ReceiveInt32(v14.f_26());
        ReceiveInt32(v14.f_29());
        ReceiveBool(v14.f_47());
        ReceiveString(v14.f_22());
        ReceiveString(v14.f_23());
        ReceiveFloat(v14.f_30());
        ReceiveInt32(v14.f_45());
        ReceiveInt32(v14.f_10());
        ReceiveString(v14.f_38());
        ReceiveInt32(v14.f_33());
        ReceiveInt64(v14.f_42());
        ReceiveBool(v14.f_21());
        ReceiveInt64(v14.f_4());
        ReceiveString(v14.f_15());
        ReceiveInt64(v14.f_27());
        ReceiveBool(v14.f_25());
        ReceiveInt32(v14.f_48());
        ReceiveInt32(v14.f_31());
        ReceiveUint32(v14.f_0());
        ReceiveDouble(v14.f_28());
        ReceiveFloat(v14.f_12());
        ReceiveInt64(v14.f_40());
        ReceiveInt32(v14.f_2());
        ReceiveUint32(v14.f_3());
        ReceiveInt32(v14.f_18());
        ReceiveInt32(v14.f_17());
        ReceiveBool(v14.f_36());
        ReceiveUint64(v14.f_24());
        ReceiveInt64(v14.f_37());
        ReceiveString(v14.f_46());
        ReceiveString(v14.f_14());
        ReceiveUint64(v14.f_13());
        for (auto f : v14.f_6()) {
          ReceiveInt64(f);
        }
        ReceiveBool(v14.f_35());
        ReceiveString(v14.f_5());
        ReceiveString(v3.f_0());
      }
      ReceiveString(v2.f_0());
      ReceiveString(v1.f_2());
      ReceiveInt32(v1.f_0());
      const Message6::M1::M15::M21& v15 = v1.f_4();
      ReceiveString(v15.f_5());
      ReceiveFloat(v15.f_1());
      ReceiveString(v15.f_0());
      ReceiveUint32(v15.f_3());
      for (auto f : v15.f_2()) {
        ReceiveInt64(f);
      }
      ReceiveString(v15.f_4());
    }
    const Message6::M1::M17& v16 = v0.f_10();
    ReceiveInt32(v16.f_16());
    ReceiveFloat(v16.f_13());
    ReceiveInt32(v16.f_8());
    ReceiveString(v16.f_9());
    ReceiveInt64(v16.f_6());
    for (auto f : v16.f_15()) {
      ReceiveUint64(f);
    }
    ReceiveInt32(v16.f_10());
    ReceiveString(v16.f_7());
    for (auto f : v16.f_2()) {
      ReceiveFloat(f);
    }
    ReceiveInt64(v16.f_14());
    ReceiveInt32(v16.f_11());
    ReceiveInt64(v16.f_1());
    ReceiveString(v16.f_12());
    for (auto f : v16.f_0()) {
      ReceiveInt64(f);
    }
    for (auto f : v16.f_5()) {
      ReceiveInt64(f);
    }
    ReceiveBool(v16.f_3());
    ReceiveString(v16.f_4());
    ReceiveInt32(v0.f_5());
    ReceiveFloat(v0.f_0());
    ReceiveUint64(v0.f_4());
  }
  ReceiveInt32((*message).f_3());
  for (const auto& v17 : (*message).f_23()) {
    ReceiveInt64(v17.f_4());
    const Message6::M5::M8& v18 = v17.f_12();
    ReceiveBool(v18.f_0());
    const Message6::M5::M8::M27& v19 = v18.f_1();
    ReceiveInt32(v19.f_124());
    ReceiveInt32(v19.f_77());
    ReceiveInt64(v19.f_35());
    ReceiveInt64(v19.f_3());
    ReceiveFloat(v19.f_141());
    ReceiveInt64(v19.f_129());
    ReceiveInt64(v19.f_19());
    ReceiveInt64(v19.f_140());
    ReceiveUint32(v19.f_62());
    ReceiveBool(v19.f_50());
    ReceiveInt64(v19.f_4());
    ReceiveInt64(v19.f_106());
    ReceiveInt32(v19.f_31());
    ReceiveInt64(v19.f_135());
    ReceiveString(v19.f_6());
    const Message6::M5::M8::M27::M36& v20 = v19.f_238();
    ReceiveInt64(v20.f_13());
    ReceiveInt64(v20.f_7());
    ReceiveInt64(v20.f_5());
    ReceiveInt32(v20.f_12());
    ReceiveString(v20.f_16());
    ReceiveInt64(v20.f_4());
    for (auto f : v20.f_1()) {
      ReceiveInt32(f);
    }
    ReceiveInt32(v20.f_8());
    ReceiveString(v20.f_3());
    ReceiveString(v20.f_0());
    const Message6::M5::M8::M27::M36::M37& v21 = v20.f_23();
    ReceiveInt32(v21.f_0());
    ReceiveString(v20.f_6());
    ReceiveInt32(v20.f_2());
    ReceiveString(v20.f_11());
    ReceiveUint64(v20.f_15());
    ReceiveInt64(v20.f_10());
    ReceiveInt64(v20.f_9());
    ReceiveDouble(v20.f_14());
    ReceiveInt64(v19.f_22());
    ReceiveInt64(v19.f_93());
    ReceiveInt64(v19.f_36());
    ReceiveInt32(v19.f_49());
    ReceiveInt32(v19.f_110());
    ReceiveString(v19.f_2());
    ReceiveInt64(v19.f_56());
    ReceiveInt32(v19.f_105());
    ReceiveString(v19.f_148());
    ReceiveInt64(v19.f_103());
    ReceiveString(v19.f_47());
    ReceiveInt32(v19.f_8());
    ReceiveInt32(v19.f_137());
    ReceiveInt32(v19.f_88());
    ReceiveFloat(v19.f_61());
    ReceiveString(v19.f_17());
    ReceiveInt32(v19.f_16());
    ReceiveString(v19.f_46());
    ReceiveString(v19.f_15());
    ReceiveInt64(v19.f_134());
    ReceiveInt32(v19.f_98());
    ReceiveInt64(v19.f_139());
    ReceiveInt32(v19.f_0());
    ReceiveString(v19.f_72());
    ReceiveUint64(v19.f_26());
    ReceiveCord(v19.f_21());
    ReceiveInt64(v19.f_120());
    ReceiveInt64(v19.f_33());
    ReceiveInt32(v19.f_42());
    ReceiveInt32(v19.f_74());
    ReceiveInt64(v19.f_28());
    ReceiveString(v19.f_11());
    ReceiveInt32(v19.f_104());
    ReceiveCord(v19.f_89());
    ReceiveInt32(v19.f_119());
    ReceiveString(v19.f_7());
    ReceiveString(v19.f_94());
    ReceiveInt32(v19.f_64());
    ReceiveBool(v19.f_39());
    ReceiveInt64(v19.f_57());
    ReceiveInt32(v19.f_109());
    ReceiveString(v19.f_1());
    ReceiveInt32(v19.f_84());
    ReceiveInt32(v19.f_130());
    ReceiveDouble(v19.f_58());
    ReceiveInt64(v19.f_23());
    ReceiveInt32(v19.f_118());
    ReceiveDouble(v19.f_126());
    ReceiveString(v19.f_145());
    ReceiveInt32(v19.f_76());
    ReceiveInt64(v19.f_100());
    ReceiveFloat(v19.f_9());
    ReceiveInt32(v19.f_151());
    ReceiveInt64(v19.f_132());
    ReceiveInt32(v19.f_5());
    ReceiveInt32(v19.f_99());
    ReceiveString(v19.f_86());
    ReceiveString(v19.f_48());
    ReceiveInt32(v19.f_80());
    ReceiveBool(v19.f_155());
    ReceiveUint64(v19.f_27());
    ReceiveInt64(v19.f_10());
    ReceiveFloat(v19.f_147());
    ReceiveInt64(v19.f_79());
    ReceiveInt32(v19.f_149());
    ReceiveBool(v19.f_81());
    ReceiveInt32(v19.f_123());
    ReceiveString(v19.f_113());
    ReceiveInt32(v19.f_138());
    ReceiveInt32(v19.f_70());
    ReceiveInt32(v19.f_102());
    ReceiveInt64(v19.f_24());
    for (const auto& v22 : v19.f_237()) {
      ReceiveString(v22.f_3());
      ReceiveInt32(v22.f_0());
      ReceiveInt32(v22.f_1());
      ReceiveInt32(v22.f_4());
      ReceiveString(v22.f_2());
    }
    ReceiveString(v19.f_54());
    for (auto f : v19.f_144()) {
      ReceiveInt32(f);
    }
    ReceiveUint32(v19.f_34());
    ReceiveInt32(v19.f_150());
    ReceiveFloat(v19.f_60());
    ReceiveString(v19.f_18());
    ReceiveInt64(v19.f_13());
    ReceiveInt32(v19.f_43());
    ReceiveInt32(v19.f_127());
    ReceiveInt32(v19.f_65());
    ReceiveString(v19.f_78());
    ReceiveInt64(v19.f_96());
    ReceiveString(v19.f_97());
    ReceiveInt32(v19.f_41());
    ReceiveString(v19.f_153());
    ReceiveInt64(v19.f_146());
    ReceiveString(v19.f_40());
    for (auto f : v19.f_30()) {
      ReceiveInt64(f);
    }
    ReceiveInt32(v19.f_25());
    ReceiveInt64(v19.f_92());
    ReceiveUint32(v19.f_91());
    ReceiveInt32(v19.f_136());
    ReceiveString(v19.f_121());
    ReceiveInt32(v19.f_14());
    ReceiveInt32(v19.f_66());
    ReceiveString(v19.f_152());
    ReceiveBool(v19.f_45());
    ReceiveInt32(v19.f_133());
    ReceiveInt32(v19.f_107());
    ReceiveString(v19.f_12());
    ReceiveInt64(v19.f_111());
    ReceiveInt32(v19.f_82());
    ReceiveInt32(v19.f_52());
    ReceiveUint32(v19.f_55());
    ReceiveCord(v19.f_75());
    ReceiveString(v19.f_44());
    ReceiveInt64(v19.f_68());
    ReceiveString(v19.f_101());
    ReceiveString(v19.f_142());
    ReceiveString(v19.f_117());
    ReceiveUint32(v19.f_143());
    ReceiveFloat(v19.f_112());
    ReceiveString(v19.f_37());
    ReceiveString(v19.f_131());
    ReceiveInt32(v19.f_116());
    ReceiveInt32(v19.f_53());
    ReceiveInt32(v19.f_108());
    ReceiveInt32(v19.f_85());
    ReceiveString(v19.f_73());
    ReceiveDouble(v19.f_154());
    ReceiveString(v19.f_125());
    ReceiveInt64(v19.f_59());
    ReceiveString(v19.f_90());
    ReceiveInt32(v19.f_32());
    ReceiveString(v19.f_157());
    ReceiveString(v19.f_20());
    ReceiveString(v19.f_122());
    ReceiveInt32(v19.f_63());
    ReceiveString(v19.f_38());
    ReceiveInt64(v19.f_128());
    ReceiveString(v19.f_95());
    ReceiveString(v19.f_51());
    ReceiveUint64(v19.f_71());
    ReceiveFloat(v19.f_156());
    ReceiveFloat(v19.f_67());
    ReceiveCord(v19.f_29());
    ReceiveUint32(v19.f_115());
    ReceiveFloat(v19.f_69());
    ReceiveInt32(v19.f_87());
    ReceiveInt32(v19.f_114());
    ReceiveString(v19.f_83());
    ReceiveInt32(v17.f_9());
    ReceiveInt32(v17.f_5());
    const Message6::M5::M9& v23 = v17.f_13();
    const Message6::M5::M9::M20& v24 = v23.f_1();
    ReceiveBool(v24.f_0());
    ReceiveUint64(v23.f_0());
    ReceiveInt32(v17.f_2());
    ReceiveDouble(v17.f_7());
    ReceiveUint32(v17.f_0());
    ReceiveInt64(v17.f_6());
    for (auto f : v17.f_1()) {
      ReceiveInt32(f);
    }
    for (auto f : v17.f_8()) {
      ReceiveInt64(f);
    }
    ReceiveInt32(v17.f_3());
  }
  for (const auto& v25 : (*message).f_18()) {
    const Message6::M3::M11& v26 = v25.f_2();
    const Message6::M3::M11::M22& v27 = v26.f_2();
    ReceiveString(v27.f_0());
    const Message6::M3::M11::M22::M32& v28 = v27.f_2();
    ReceiveInt32(v28.f_1());
    ReceiveInt32(v28.f_0());
    ReceiveUint64(v28.f_3());
    ReceiveInt64(v28.f_4());
    ReceiveInt64(v28.f_5());
    ReceiveString(v28.f_2());
    ReceiveBool(v26.f_0());
    for (auto f : v25.f_0()) {
      ReceiveInt32(f);
    }
  }
  for (const auto& v29 : (*message).f_16()) {
    const Message6::M2::M12& v30 = v29.f_6();
    ReceiveInt64(v30.f_0());
    ReceiveInt32(v30.f_1());
    for (const auto& v31 : v29.f_7()) {
      for (auto f : v31.f_0()) {
        ReceiveUint64(f);
      }
    }
    ReceiveUint64(v29.f_0());
    const Message6::M2::M10& v32 = v29.f_1();
    ReceiveString(v32.f_4());
    ReceiveDouble(v32.f_0());
    for (auto f : v32.f_2()) {
      ReceiveInt32(f);
    }
    ReceiveInt32(v32.f_1());
    for (const auto& v33 : v32.f_7()) {
      ReceiveString(v33.f_0());
    }
    ReceiveBool(v32.f_3());
    for (const auto& v34 : v29.f_9()) {
      ReceiveInt32(v34.f_0());
      ReceiveInt64(v34.f_1());
      ReceiveInt64(v34.f_2());
    }
  }
  ReceiveInt64((*message).f_1());
  ReceiveInt64((*message).f_5());
  const Message6::M4& v35 = (*message).f_21();
  ReceiveUint32(v35.f_2());
  ReceiveUint32(v35.f_0());
  ReceiveInt32(v35.f_3());
  ReceiveString(v35.f_1());
  const Message6::M4::M13& v36 = v35.f_11();
  const Message6::M4::M13::M24& v37 = v36.f_1();
  ReceiveInt64(v37.f_0());
  const Message6::M4::M13::M26& v38 = v36.f_2();
  ReceiveString(v38.f_0());
  const Message6::M4::M13::M26::M31& v39 = v38.f_8();
  ReceiveInt32(v39.f_0());
  for (const auto& v40 : v39.f_1()) {
    ReceiveString(v40.f_0());
  }
  ReceiveInt32(v38.f_1());
  ReceiveInt64(v38.f_2());
  for (auto f : v38.f_3()) {
    ReceiveInt32(f);
  }
  for (const auto& v41 : v38.f_12()) {
    ReceiveInt64(v41.f_0());
    const Message6::M4::M13::M26::M35::M39& v42 = v41.f_2();
    ReceiveString(v42.f_0());
  }
  ReceiveInt64(v36.f_0());
  const Message6::M4::M6& v43 = v35.f_8();
  ReceiveInt64(v43.f_0());
  for (const auto& v44 : v43.f_3()) {
    const Message6::M4::M6::M25::M30& v45 = v44.f_5();
    ReceiveString(v45.f_0());
    ReceiveUint32(v44.f_3());
    for (const auto& v46 : v44.f_6()) {
      ReceiveUint32(v46.f_0());
      ReceiveUint64(v46.f_2());
      ReceiveInt32(v46.f_1());
    }
    ReceiveString(v44.f_4());
    ReceiveInt32(v44.f_1());
    ReceiveInt64(v44.f_2());
    ReceiveString(v44.f_0());
  }
  const Message6::M4::M6::M18& v47 = v43.f_2();
  const Message6::M4::M6::M18::M29& v48 = v47.f_1();
  const Message6::M4::M6::M18::M29::M38& v49 = v48.f_2();
  ReceiveString(v49.f_0());
  ReceiveInt64(v48.f_0());
  for (const auto& v50 : v48.f_3()) {
    ReceiveInt64(v50.f_0());
    const Message6::M4::M6::M18::M29::M41::M46& v51 = v50.f_2();
    ReceiveInt64(v51.f_23());
    ReceiveInt64(v51.f_44());
    for (auto f : v51.f_0()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v51.f_57());
    ReceiveDouble(v51.f_37());
    ReceiveDouble(v51.f_55());
    ReceiveString(v51.f_15());
    ReceiveInt32(v51.f_40());
    ReceiveInt64(v51.f_34());
    ReceiveString(v51.f_33());
    ReceiveBool(v51.f_41());
    ReceiveDouble(v51.f_39());
    ReceiveInt32(v51.f_24());
    for (auto f : v51.f_51()) {
      ReceiveInt64(f);
    }
    ReceiveInt32(v51.f_14());
    ReceiveUint64(v51.f_38());
    ReceiveInt32(v51.f_60());
    ReceiveString(v51.f_20());
    ReceiveInt32(v51.f_9());
    ReceiveString(v51.f_46());
    ReceiveString(v51.f_2());
    ReceiveFloat(v51.f_47());
    ReceiveInt64(v51.f_50());
    ReceiveFloat(v51.f_18());
    ReceiveInt64(v51.f_53());
    ReceiveString(v51.f_63());
    ReceiveUint64(v51.f_49());
    ReceiveInt64(v51.f_5());
    ReceiveInt64(v51.f_13());
    ReceiveInt32(v51.f_28());
    ReceiveInt32(v51.f_42());
    ReceiveUint64(v51.f_10());
    ReceiveFloat(v51.f_19());
    ReceiveInt32(v51.f_54());
    ReceiveInt64(v51.f_45());
    ReceiveString(v51.f_52());
    ReceiveInt32(v51.f_8());
    ReceiveString(v51.f_56());
    ReceiveString(v51.f_16());
    ReceiveString(v51.f_22());
    ReceiveInt64(v51.f_43());
    ReceiveFloat(v51.f_32());
    ReceiveInt64(v51.f_59());
    ReceiveInt64(v51.f_27());
    ReceiveBool(v51.f_26());
    ReceiveString(v51.f_31());
    ReceiveString(v51.f_35());
    ReceiveUint32(v51.f_11());
    ReceiveUint64(v51.f_7());
    ReceiveString(v51.f_4());
    ReceiveInt64(v51.f_61());
    ReceiveUint64(v51.f_62());
    ReceiveUint32(v51.f_58());
    ReceiveFloat(v51.f_21());
    ReceiveInt32(v51.f_6());
    ReceiveInt32(v51.f_29());
    ReceiveCord(v51.f_12());
    ReceiveUint32(v51.f_36());
    const Message6::M4::M6::M18::M29::M41::M46::M48& v52 = v51.f_93();
    const Message6::M4::M6::M18::M29::M41::M46::M48::M53& v53 = v52.f_2();
    ReceiveString(v53.f_0());
    ReceiveString(v52.f_0());
    const Message6::M4::M6::M18::M29::M41::M46::M48::M51& v54 = v52.f_1();
    for (const auto& v55 : v54.f_1()) {
      ReceiveInt64(v55.f_0());
      const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M59& v56 =
          v55.f_3();
      ReceiveInt64(v56.f_1());
      ReceiveUint32(v56.f_5());
      ReceiveInt64(v56.f_7());
      ReceiveInt32(v56.f_0());
      ReceiveInt64(v56.f_4());
      ReceiveInt64(v56.f_2());
      ReceiveFloat(v56.f_3());
      ReceiveString(v56.f_8());
      ReceiveInt32(v56.f_6());
      for (const auto& v57 : v55.f_2()) {
        ReceiveString(v57.f_0());
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60&
            v58 = v57.f_3();
        ReceiveInt64(v58.f_4());
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::
            M61& v59 = v58.f_10();
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::
            M61::M63& v60 = v59.f_2();
        ReceiveInt32(v60.f_0());
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::
            M61::M63::M64& v61 = v60.f_1();
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::
            M61::M63::M64::M65& v62 = v61.f_1();
        for (const auto& v63 : v62.f_1()) {
          for (const auto& v64 : v63.f_2()) {
            const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::
                M60::M61::M63::M64::M65::M66::M67::M69& v65 = v64.f_4();
            ReceiveString(v65.f_0());
            for (auto f : v64.f_1()) {
              ReceiveInt64(f);
            }
            const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::
                M60::M61::M63::M64::M65::M66::M67::M68& v66 = v64.f_3();
            ReceiveString(v66.f_0());
            ReceiveString(v64.f_0());
          }
          ReceiveBool(v63.f_0());
        }
        ReceiveInt32(v62.f_0());
        ReceiveString(v61.f_0());
        ReceiveInt64(v59.f_0());
        ReceiveString(v58.f_3());
        ReceiveBool(v58.f_1());
        ReceiveInt64(v58.f_6());
        ReceiveUint64(v58.f_0());
        ReceiveInt32(v58.f_5());
        const Message6::M4::M6::M18::M29::M41::M46::M48::M51::M56::M58::M60::
            M62& v67 = v58.f_11();
        ReceiveString(v67.f_0());
        ReceiveInt64(v58.f_2());
      }
    }
    ReceiveString(v54.f_0());
    ReceiveFloat(v51.f_25());
    ReceiveString(v51.f_3());
    ReceiveInt32(v51.f_17());
    ReceiveInt32(v51.f_30());
    for (auto f : v51.f_1()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v51.f_64());
    ReceiveInt32(v51.f_48());
  }
  ReceiveUint64(v47.f_0());
  ReceiveInt64(v35.f_4());
  const Message6::M4::M7& v68 = v35.f_9();
  ReceiveInt32(v68.f_0());
  ReceiveInt64((*message).f_2());
}

}  // namespace fleetbench::proto
#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE6_H_
