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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE0_H_

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message0.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {

inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M4* v1_0 = message->add_f_12();
  v1_0->set_f_0(0x69);
  Message0::M5* v1 = message->mutable_f_13();
  v1->set_f_1(false);
  message->set_f_2(true);
  Message0::M1* v2 = message->mutable_f_6();
  Message0::M1::M6* v4_0 = v2->add_f_5();
  Message0::M1::M6::M8* v4 = v4_0->mutable_f_36();
  v4->set_f_4(s->substr(0, 58));
  v4->set_f_6(s->substr(0, 6));
  v4->set_f_3(s->substr(0, 20));
  v4->set_f_9(0x945);
  v4->set_f_7(Message0::M1::M6::M8::E6_CONST_4);
  Message0::M1::M6::M8::M18* v5 = v4->mutable_f_17();
  Message0::M1::M6::M8::M18::M21* v6 = v5->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27* v7 = v6->mutable_f_2();
  v7->set_f_9(Message0::M1::M6::M8::M18::M21::M27::E14_CONST_3);
  Message0::M1::M6::M8::M18::M21::M27::M33* v8 = v7->mutable_f_42();
  v8->set_f_0(0x5614d5328fb242db);
  v8->set_f_2(Message0::M1::M6::M8::M18::M21::M27::M33::E16_CONST_3);
  Message0::M1::M6::M8::M18::M21::M27::M28* v9 = v7->mutable_f_36();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40* v13 = v9->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46* v14 = v13->mutable_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49* v15 =
      v14->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51* v17 =
      v15->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52* v18 =
      v17->mutable_f_1();
  v18->set_f_0(0xcf);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53* v19 =
      v18->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54*
      v21_0 = v19->add_f_3();
  v21_0->set_f_0(s->substr(0, 1));
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55* v21 = v21_0->mutable_f_2();
  v21->set_f_0(s->substr(0, 7));
  v7->set_f_5(0.417283);
  v7->set_f_27(0x46);
  v7->set_f_8(true);
  v7->set_f_19(0x5f0d924c10b2209f);
  v7->set_f_18(s->substr(0, 21));
  v7->set_f_20(0.797355);
  v7->set_f_17(0.023786);
  Message0::M1::M6::M8::M18::M21::M27::M37* v26 = v7->mutable_f_43();
  Message0::M1::M6::M8::M18::M21::M27::M37::M39* v27 = v26->mutable_f_2();
  v27->set_f_0(s->substr(0, 12));
  v27->set_f_2(s->substr(0, 27));
  v26->set_f_0(true);
  int32_t array_1[164] = {
      0x53,       0xd3,       0x6e36fd,   0xa2,       0x43,       0xee,
      0x950e,     0x4c,       0x2087,     0xed,       0xf6a558,   0x5542,
      0xec,       0x2b,       0xdf,       0x84,       0xf6454e4,  0xe4,
      0x97,       0xfd,       0x548d,     0xae,       0x53a2ddaf, 0x67d9,
      0x74964322, 0x154231bf, 0xaf5530,   0xa7f1a3,   0x3e4af0,   0x5b5,
      0xac,       0x58,       0x43,       0xc2c3,     0xd4,       0x1b31,
      0x85,       0x14,       0x82,       0x2482,     0xe6,       0x78ae,
      0x68740d24, 0x8c,       0xfb2c07,   0xa2,       0x4,        0x7ce2,
      0x99,       0xf023e32,  0xb9f4,     0x24,       0x430e8482, 0x97,
      0xfe1162,   0xf9,       0xdf13,     0x3cb0,     0xca,       0x9a60,
      0x4a,       0xb1,       0xe6e497,   0xc5,       0x588a9b1e, 0x43ecf7f0,
      0x40,       0xaa,       0x3e8a,     0x27,       0xd8,       0xab,
      0xec,       0xb5,       0x87,       0x8b478c,   0x18570b54, 0x5c,
      0xfff6de,   0xa088d6,   0xdb,       0x7f6cac69, 0x671f5a60, 0xa771,
      0xa1,       0x7eef4b3,  0xe6f4,     0x11fa5a,   0x27,       0x4d2794,
      0x41,       0x10,       0x5174463e, 0x86,       0x7a,       0xadd545,
      0x5abf0739, 0xa6,       0xbf,       0xda,       0x5cd0,     0x88,
      0xea43,     0x5775,     0x66,       0x4f8c87,   0x9d3b,     0x27,
      0xbe,       0x3a,       0x2e,       0x7acf,     0xc3f,      0x9b,
      0x4f73b7,   0x54,       0x7136,     0xb6,       0x51,       0xbb,
      0x9a,       0xdffb87,   0x9b,       0x7b,       0x9a8cd5,   0x51,
      0x80,       0x55,       0xec0d7d,   0xfe,       0x54,       0xa46aad,
      0x61efc6,   0xfd,       0xec,       0xda3597,   0xebfa,     0x46,
      0x69bf21,   0x1a48b1,   0x75f348,   0x9a,       0xbe,       0x14f0c1,
      0x36a8,     0x3,        0x3f7bae,   0xb4f6,     0x2d8624e1, 0xf7,
      0xcd0403,   0x9a,       0xc8,       0xb6,       0x5b,       0x8e,
      0x16ce803a, 0x9dca,     0xe796db,   0x3e01e411, 0x4,        0xf17a45,
      0xe74f49a,  0x525};
  for (auto& value : array_1) v7->add_f_4(value);
  v7->set_f_25(0xc3ce98);
  v7->set_f_21(Message0::M1::M6::M8::M18::M21::M27::E15_CONST_4);
  Message0::M1::M6::M8::M18::M21::M27::M31* v28 = v7->mutable_f_40();
  Message0::M1::M6::M8::M18::M21::M27::M31::M38* v30_0 = v28->add_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M31::M38::M43* v33_0 = v30_0->add_f_2();
  v33_0->set_f_0(
      Message0::M1::M6::M8::M18::M21::M27::M31::M38::M43::E18_CONST_1);
  Message0::M1::M6::M8::M18::M21::M26* v33 = v6->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M26::M34* v34 = v33->mutable_f_1();
  v34->set_f_0(0.960019);
  v5->set_f_0(0x658a813e);
  Message0::M1::M6::M8::M15* v35 = v4->mutable_f_14();
  Message0::M1::M6::M8::M15::M23* v37_0 = v35->add_f_1();
  v37_0->set_f_0(s->substr(0, 8));
  int array_2[99] = {
      13,  6,  7,  16, 22, 18, 11, 432, 7,  13,  1,  12, 10,  58, 6,  16,  16,
      30,  32, 15, 12, 3,  10, 9,  1,   7,  29,  9,  5,  3,   35, 30, 3,   61,
      490, 13, 15, 27, 18, 3,  4,  29,  16, 12,  12, 10, 4,   9,  12, 7,   2,
      8,   19, 29, 21, 5,  74, 11, 23,  21, 128, 17, 2,  13,  61, 20, 23,  48,
      103, 13, 3,  52, 79, 15, 4,  20,  5,  14,  15, 54, 23,  13, 10, 103, 2,
      8,   64, 50, 16, 38, 19, 12, 14,  5,  22,  7,  11, 107, 14};
  for (size_t i = 0; i < 99; i++) v4_0->add_f_11(s->substr(0, array_2[i]));
  v4_0->set_f_22(0x15);
  v4_0->set_f_14(0x5c3c3d855af6aa);
  v4_0->set_f_13(s->substr(0, 438));
  v4_0->set_f_12(0x3b);
  Message0::M1::M6::M7* v39_0 = v4_0->add_f_33();
  Message0::M1::M6::M7::M14* v39 = v39_0->mutable_f_1();
  v39->set_f_0(0xbc);
  v39_0->set_f_0(0x5846f053);
  Message0::M1::M6::M7::M16* v40 = v39_0->mutable_f_2();
  v40->set_f_0(Message0::M1::M6::M7::M16::E9_CONST_4);
  Message0::M1::M6::M7::M20* v42_0 = v39_0->add_f_3();
  v42_0->set_f_8(0x19fb);
  v42_0->set_f_9(Message0::M1::M6::M7::M20::E10_CONST_1);
  v42_0->set_f_1(true);
  v42_0->set_f_4(0x4e10f132);
  v4_0->set_f_9(0x74fbcc8d13656c4f);
  Message0::M1::M6::M11* v43_0 = v4_0->add_f_39();
  v43_0->set_f_0(0x5f0227);
  Message0::M1::M6::M11::M13* v43 = v43_0->mutable_f_1();
  Message0::M1::M6::M11::M13::M22* v44 = v43->mutable_f_6();
  Message0::M1::M6::M11::M13::M22::M25* v46_0 = v44->add_f_2();
  Message0::M1::M6::M11::M13::M22::M25::M36* v46 = v46_0->mutable_f_9();
  v46->set_f_1(0x5b);
  v43->set_f_1(0.911996);
  v43->set_f_3(0x96f65b);
  v43->set_f_4(0x4c9d0fd888f5a0cd);
  Message0::M1::M6::M10* v51 = v4_0->mutable_f_38();
  v51->set_f_2(0xcf026f);
  v51->set_f_1(Message0::M1::M6::M10::E7_CONST_5);
  v4_0->set_f_16(Message0::M1::M6::E3_CONST_1);
  v4_0->set_f_1(0x9c3fa6c3);
  v4_0->set_f_4(0x7479df00dafe76);
  v4_0->set_f_3(0xb9);
  Message0::M1::M6::M12* v52 = v4_0->mutable_f_42();
  v52->set_f_1(s->substr(0, 29));
  Message0::M1::M6::M12::M17* v53 = v52->mutable_f_10();
  Message0::M1::M6::M12::M17::M24* v55_0 = v53->add_f_3();
  v55_0->set_f_22(s->substr(0, 10));
  int32_t array_3[8] = {0xe1, 0xdc,   0xb71dad, 0x74,
                        0xfd, 0x8237, 0xdb,     0xda25e1};
  for (auto& value : array_3) v55_0->add_f_2(value);
  v55_0->set_f_20(0xf7);
  v55_0->set_f_17(s->substr(0, 4));
  v55_0->set_f_10(Message0::M1::M6::M12::M17::M24::E12_CONST_1);
  v55_0->set_f_4(0xb20d);
  v4_0->set_f_5(0x3d3ddcde);
  v2->set_f_0(0x7f4c0a);
  message->set_f_3(0x35ddfc1cdf89be32);
  Message0::M2* v56 = message->mutable_f_8();
  v56->set_f_3(0.968856);
}

inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_6();
  Message0::M1::M6* v2_0 = v0->add_f_5();
  v2_0->set_f_3(0x791ca8064d2f24);
  v2_0->set_f_15(0xf1770563ba364b7d);
  v2_0->set_f_9(0x103a1d9d55207581);
  v2_0->set_f_18(s->substr(0, 7));
  v2_0->set_f_1(0xc7);
  Message0::M1::M6::M12* v2 = v2_0->mutable_f_42();
  v2->set_f_5(0xa83357);
  v2->set_f_1(s->substr(0, 14));
  Message0::M1::M6::M12::M17* v3 = v2->mutable_f_10();
  v3->set_f_0(0.155334);
  Message0::M1::M6::M12::M17::M24* v5_0 = v3->add_f_3();
  v5_0->set_f_8(0x30);
  v5_0->set_f_11(0x48bd);
  v5_0->set_f_4(0xa3);
  v5_0->set_f_14(0xfd);
  v5_0->set_f_15(0x2f);
  v5_0->set_f_23(s->substr(0, 5));
  int array_0[77] = {86, 480, 8,  8,   4,  7,  4,  49,  8,  314, 8,  16, 14,
                     20, 46,  19, 1,   25, 8,  8,  32,  5,  11,  9,  15, 101,
                     6,  2,   68, 20,  12, 19, 7,  12,  15, 2,   31, 8,  16,
                     22, 2,   7,  255, 1,  2,  2,  41,  61, 82,  31, 1,  256,
                     7,  10,  2,  6,   42, 8,  5,  4,   26, 23,  20, 3,  14,
                     6,  7,   1,  15,  2,  14, 15, 440, 7,  14,  6,  31};
  for (size_t i = 0; i < 77; i++) v5_0->add_f_21(s->substr(0, array_0[i]));
  v5_0->set_f_3(s->substr(0, 15));
  v2->set_f_0(0xaa67a611);
  v2_0->add_f_11(s->substr(0, 6));
  v2_0->set_f_8(s->substr(0, 18));
  Message0::M1::M6::M11* v6_0 = v2_0->add_f_39();
  Message0::M1::M6::M11::M13* v6 = v6_0->mutable_f_1();
  v6->set_f_4(0x28c9d3fa082e55);
  v6->set_f_2(0xc3);
  v6->set_f_1(0.677515);
  Message0::M1::M6::M11::M13::M22* v7 = v6->mutable_f_6();
  Message0::M1::M6::M11::M13::M22::M25* v9_0 = v7->add_f_2();
  Message0::M1::M6::M11::M13::M22::M25::M29* v9 = v9_0->mutable_f_2();
  v9->set_f_0(s->substr(0, 4));
  v9_0->set_f_0(s->substr(0, 3));
  Message0::M1::M6::M11::M13::M22::M25::M30* v12 = v9_0->mutable_f_3();
  v12->set_f_0(s->substr(0, 21));
  Message0::M1::M6::M11::M19* v13 = v6_0->mutable_f_3();
  v13->set_f_0(s->substr(0, 11));
  v6_0->set_f_0(0x24);
  v2_0->set_f_7(0x6cf0c782);
  v2_0->set_f_17(0.099261);
  Message0::M1::M6::M10* v14 = v2_0->mutable_f_38();
  v14->set_f_1(Message0::M1::M6::M10::E7_CONST_3);
  v14->add_f_3(Message0::M1::M6::M10::E8_CONST_4);
  v2_0->set_f_22(0xf9);
  v2_0->set_f_20(Message0::M1::M6::E4_CONST_3);
  v2_0->set_f_24(0xa0);
  Message0::M1::M6::M8* v16 = v2_0->mutable_f_36();
  v16->set_f_9(0xde);
  v16->set_f_6(s->substr(0, 4));
  Message0::M1::M6::M8::M18* v17 = v16->mutable_f_17();
  v17->set_f_0(0xefb85ce8);
  Message0::M1::M6::M8::M18::M21* v18 = v17->mutable_f_1();
  v18->set_f_0(0xc096);
  Message0::M1::M6::M8::M18::M21::M27* v19 = v18->mutable_f_2();
  v19->set_f_27(0xba);
  v19->set_f_16(0xb08168);
  v19->set_f_24(s->substr(0, 1));
  Message0::M1::M6::M8::M18::M21::M27::M31* v20 = v19->mutable_f_40();
  Message0::M1::M6::M8::M18::M21::M27::M31::M38* v22_0 = v20->add_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44* v23 =
      v22_0->mutable_f_4();
  Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44::M47* v24 =
      v23->mutable_f_2();
  v24->set_f_0(s->substr(0, 19));
  v22_0->set_f_0(true);
  v19->set_f_20(0.983154);
  v19->set_f_15(0x9e33);
  v19->set_f_14(0x7a9e5f6bcd02ef96);
  v19->set_f_2(0x4b2bb7074514);
  v19->set_f_3(s->substr(0, 3));
  Message0::M1::M6::M8::M18::M21::M27::M32* v27 = v19->mutable_f_41();
  v27->set_f_0(0xfb5bf);
  Message0::M1::M6::M8::M18::M21::M27::M32::M41* v28 = v27->mutable_f_2();
  v28->set_f_0(0xb4258b);
  v19->set_f_25(0xd8);
  v19->set_f_6(0x3d0f58b787e4b62c);
  Message0::M1::M6::M8::M18::M21::M27::M28* v29 = v19->mutable_f_36();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40* v30 = v29->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46* v31 = v30->mutable_f_3();
  v31->set_f_0(0x37);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49* v32 =
      v31->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M50* v34_0 =
      v32->add_f_1();
  v34_0->set_f_0(s->substr(0, 13));
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51* v34 =
      v32->mutable_f_2();
  v34->set_f_0(0x7b2281a3);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52* v35 =
      v34->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53* v36 =
      v35->mutable_f_1();
  v36->set_f_0(0xaf);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54*
      v38_0 = v36->add_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55* v38 = v38_0->mutable_f_2();
  v38->set_f_0(s->substr(0, 4));
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55::M56* v40 = v38->mutable_f_1();
  v40->set_f_0(0x1b09bca5);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54*
      v38_1 = v36->add_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55* v41 = v38_1->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55::M57* v42 = v41->mutable_f_2();
  v42->set_f_0(0xa1);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55::M56* v43 = v41->mutable_f_1();
  v43->set_f_0(0x3f);
  v41->set_f_0(s->substr(0, 19));
  v38_1->set_f_0(s->substr(0, 2));
  v30->set_f_0(s->substr(0, 232));
  Message0::M1::M6::M8::M18::M21::M26* v48 = v18->mutable_f_1();
  v48->set_f_0(s->substr(0, 13));
  v16->set_f_1(0x95b2);
  Message0::M1::M6::M8::M15* v50 = v16->mutable_f_14();
  v50->set_f_0(0x3ec813);
  v16->set_f_0(true);
  v16->set_f_8(0x3a029d6ba9519ad1);
  Message0::M1::M6::M7* v53_0 = v2_0->add_f_33();
  Message0::M1::M6::M7::M20* v54_0 = v53_0->add_f_3();
  v54_0->set_f_9(Message0::M1::M6::M7::M20::E10_CONST_3);
  Message0::M1::M6::M7::M20* v54_1 = v53_0->add_f_3();
  v54_1->set_f_2(s->substr(0, 14));
  v54_1->set_f_3(0x544676c56f);
  v54_1->set_f_8(0x44);
  Message0::M1::M6::M7::M16* v55 = v53_0->mutable_f_2();
  v55->set_f_0(Message0::M1::M6::M7::M16::E9_CONST_5);
  v0->set_f_0(0xb0);
  message->set_f_3(0x149a5d34e0a238da);
  Message0::M5* v57 = message->mutable_f_13();
  v57->set_f_1(false);
}

inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v2 = message->mutable_f_6();
  v2->set_f_1(0x5147613534e588b8);
  v2->set_f_0(0x9e68c195592236e4);
  Message0::M1::M6* v4_0 = v2->add_f_5();
  Message0::M1::M6::M7* v5_0 = v4_0->add_f_33();
  Message0::M1::M6::M7::M20* v7_0 = v5_0->add_f_3();
  v7_0->set_f_3(0x9e);
  v7_0->set_f_9(Message0::M1::M6::M7::M20::E10_CONST_1);
  v7_0->set_f_8(0x5b);
  v7_0->set_f_1(true);
  Message0::M1::M6::M7::M16* v7 = v5_0->mutable_f_2();
  v7->set_f_0(Message0::M1::M6::M7::M16::E9_CONST_4);
  v4_0->set_f_20(Message0::M1::M6::E4_CONST_2);
  Message0::M1::M6::M12* v8 = v4_0->mutable_f_42();
  v8->set_f_4(false);
  v8->set_f_0(0xb8);
  v8->set_f_2(0x41);
  v8->set_f_5(0x87);
  Message0::M1::M6::M12::M17* v9 = v8->mutable_f_10();
  v9->set_f_2(0x3e);
  Message0::M1::M6::M12::M17::M24* v11_0 = v9->add_f_3();
  v11_0->set_f_5(0xb9168fa2);
  v11_0->set_f_18(0x67c79624263e706f);
  v11_0->add_f_2(0xd7a2);
  v11_0->add_f_2(0x86ba);
  v11_0->set_f_12(0x49);
  v11_0->set_f_8(0x8);
  v11_0->set_f_19(Message0::M1::M6::M12::M17::M24::E13_CONST_3);
  v8->set_f_1(s->substr(0, 6));
  v4_0->set_f_9(0x50e50143bea36937);
  v4_0->set_f_0(0xec);
  v4_0->set_f_6(true);
  Message0::M1::M6::M8* v12 = v4_0->mutable_f_36();
  Message0::M1::M6::M8::M15* v13 = v12->mutable_f_14();
  Message0::M1::M6::M8::M15::M23* v15_0 = v13->add_f_1();
  v15_0->set_f_0(s->substr(0, 2));
  v12->set_f_5(0x683a4119);
  Message0::M1::M6::M8::M18* v15 = v12->mutable_f_17();
  Message0::M1::M6::M8::M18::M21* v16 = v15->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27* v17 = v16->mutable_f_2();
  v17->set_f_18(s->substr(0, 8));
  Message0::M1::M6::M8::M18::M21::M27::M32* v18 = v17->mutable_f_41();
  Message0::M1::M6::M8::M18::M21::M27::M32::M41* v19 = v18->mutable_f_2();
  v19->set_f_0(0xcd1d);
  v17->set_f_25(0x6803f51866);
  v17->set_f_3(s->substr(0, 3));
  Message0::M1::M6::M8::M18::M21::M27::M28* v25 = v17->mutable_f_36();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40* v26 = v25->mutable_f_1();
  v26->set_f_0(s->substr(0, 5));
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46* v27 = v26->mutable_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49* v28 =
      v27->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51* v29 =
      v28->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52* v30 =
      v29->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53* v31 =
      v30->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54*
      v33_0 = v31->add_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55* v33 = v33_0->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55::M57* v34 = v33->mutable_f_2();
  v34->set_f_0(0xc0dac4);
  v29->set_f_0(0x6559eb8);
  v25->set_f_0(0x5d);
  Message0::M1::M6::M8::M18::M21::M27::M28::M42* v38_0 = v25->add_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45* v38 =
      v38_0->mutable_f_2();
  v38->set_f_0(s->substr(0, 18));
  v17->set_f_5(0.325884);
  v17->set_f_6(0x3d0f7ddd);
  Message0::M1::M6::M8::M18::M21::M27::M37* v40 = v17->mutable_f_43();
  Message0::M1::M6::M8::M18::M21::M27::M37::M39* v41 = v40->mutable_f_2();
  v41->set_f_1(false);
  v41->set_f_2(s->substr(0, 11));
  v41->set_f_3(0xa3513edcde5e561);
  v40->set_f_0(false);
  v17->set_f_15(0xe60dc7c88bd45d);
  v17->set_f_26(true);
  v17->set_f_2(0x6);
  v17->set_f_22(0x21);
  v17->set_f_9(Message0::M1::M6::M8::M18::M21::M27::E14_CONST_2);
  v17->set_f_21(Message0::M1::M6::M8::M18::M21::M27::E15_CONST_4);
  v17->set_f_0(true);
  Message0::M1::M6::M8::M18::M21::M26* v43 = v16->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M26::M34* v44 = v43->mutable_f_1();
  v44->set_f_0(0.890468);
  v12->set_f_9(0xd3);
  v4_0->add_f_11(s->substr(0, 4));
  v4_0->set_f_7(0x557cb65a);
  v4_0->set_f_5(0x2f6df3b0);
  Message0::M1::M6::M11* v46_0 = v4_0->add_f_39();
  v46_0->set_f_0(0xa9d26c6646c04d);
  Message0::M1::M6::M11::M13* v47 = v46_0->mutable_f_1();
  v47->set_f_3(0x18);
  v47->set_f_5(0xf4);
  Message0::M1::M6::M11::M13::M22* v48 = v47->mutable_f_6();
  Message0::M1::M6::M11::M13::M22::M25* v50_0 = v48->add_f_2();
  Message0::M1::M6::M11::M13::M22::M25::M29* v50 = v50_0->mutable_f_2();
  v50->set_f_0(s->substr(0, 8));
  Message0::M1::M6::M11::M13::M22::M25::M36* v53 = v50_0->mutable_f_9();
  v53->set_f_1(0xbc);
  v4_0->set_f_16(Message0::M1::M6::E3_CONST_2);
  Message0::M1::M6::M10* v54 = v4_0->mutable_f_38();
  v54->set_f_0(0.065697);
  v54->set_f_2(0xcc);
  v54->set_f_1(Message0::M1::M6::M10::E7_CONST_4);
  v54->add_f_3(Message0::M1::M6::M10::E8_CONST_4);
  v4_0->set_f_23(0x388e);
  v4_0->set_f_15(0x4ecdfc);
  v4_0->set_f_17(0.507355);
  Message0::M2* v55 = message->mutable_f_8();
  v55->set_f_2(0x5ca8);
  v55->set_f_0(0xe7a4d7269f01368);
}

inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(s->substr(0, 7));
  Message0::M2* v0 = message->mutable_f_8();
  v0->set_f_3(0.087006);
  v0->set_f_2(0xc7f79da0968ef6e8);
  v0->set_f_0(0x1d1abd9dfc1e07b4);
  v0->set_f_1(Message0::M2::E2_CONST_2);
  Message0::M1* v1 = message->mutable_f_6();
  v1->set_f_1(0x19daa43a62bc05a9);
  Message0::M1::M6* v3_0 = v1->add_f_5();
  v3_0->set_f_17(0.365570);
  Message0::M1::M6::M11* v5_0 = v3_0->add_f_39();
  Message0::M1::M6::M11::M19* v5 = v5_0->mutable_f_3();
  v5->set_f_0(s->substr(0, 6));
  Message0::M1::M6::M11::M13* v6 = v5_0->mutable_f_1();
  v6->set_f_0(0x171);
  v6->set_f_5(0x12);
  v6->set_f_2(0x1131f20763);
  Message0::M1::M6::M11::M13::M22* v7 = v6->mutable_f_6();
  Message0::M1::M6::M11::M13::M22::M25* v9_0 = v7->add_f_2();
  Message0::M1::M6::M11::M13::M22::M25::M36* v9 = v9_0->mutable_f_9();
  int32_t array_0[6] = {0xf2b4, 0x50, 0xa5, 0x49, 0x18, 0x6};
  for (auto& value : array_0) v9->add_f_0(value);
  v7->set_f_0(0x65);
  Message0::M1::M6::M10* v13 = v3_0->mutable_f_38();
  v13->set_f_2(0x794f40490e25f8);
  v3_0->set_f_13(s->substr(0, 1));
  v3_0->set_f_2(0xc101);
  Message0::M1::M6::M7* v15_0 = v3_0->add_f_33();
  v15_0->set_f_0(0x6e46594b);
  Message0::M1::M6::M7::M20* v18_0 = v15_0->add_f_3();
  v18_0->set_f_2(s->substr(0, 31));
  v18_0->set_f_9(Message0::M1::M6::M7::M20::E10_CONST_4);
  v18_0->set_f_3(0xb3);
  Message0::M1::M6::M12* v18 = v3_0->mutable_f_42();
  Message0::M1::M6::M12::M17* v19 = v18->mutable_f_10();
  Message0::M1::M6::M12::M17::M24* v21_0 = v19->add_f_3();
  v21_0->set_f_17(s->substr(0, 59));
  v21_0->set_f_8(0x89);
  v21_0->set_f_9(true);
  v21_0->add_f_2(0x2107580a);
  v21_0->add_f_2(0x33);
  v21_0->set_f_0(0x89f3d46293);
  v21_0->set_f_7(Message0::M1::M6::M12::M17::M24::E11_CONST_5);
  v21_0->set_f_15(0xc479f91ea7d6b0);
  v21_0->set_f_19(Message0::M1::M6::M12::M17::M24::E13_CONST_1);
  v21_0->set_f_13(0x728890);
  v21_0->set_f_5(0x3c8d);
  v21_0->set_f_6(s->substr(0, 4));
  Message0::M1::M6::M12::M17::M24* v21_1 = v19->add_f_3();
  v21_1->set_f_13(0x45);
  v21_1->set_f_8(0x5b091624df);
  v21_1->add_f_2(0xab);
  v21_1->add_f_2(0xc0b3);
  v21_1->add_f_2(0x335d1411);
  v21_1->set_f_12(0x7a);
  v21_1->set_f_4(0xcb);
  v21_1->set_f_11(0x53594a29);
  v21_1->set_f_0(0xa9);
  v19->set_f_1(s->substr(0, 3));
  v19->set_f_0(0.761369);
  v18->set_f_1(s->substr(0, 235));
  v3_0->set_f_6(true);
  v3_0->set_f_23(0xbf);
  v3_0->set_f_1(0x62);
  v3_0->set_f_4(0xf);
  v3_0->set_f_15(0x3785);
  v3_0->set_f_21(Message0::M1::M6::E5_CONST_1);
  v3_0->set_f_10(0xbb8004);
  Message0::M1::M6::M8* v21 = v3_0->mutable_f_36();
  v21->set_f_7(Message0::M1::M6::M8::E6_CONST_5);
  v21->set_f_1(0xc3);
  Message0::M1::M6::M8::M18* v22 = v21->mutable_f_17();
  Message0::M1::M6::M8::M18::M21* v23 = v22->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27* v24 = v23->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28* v25 = v24->mutable_f_36();
  v25->set_f_0(0x27);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40* v26 = v25->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46* v27 = v26->mutable_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49* v28 =
      v27->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51* v29 =
      v28->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52* v30 =
      v29->mutable_f_1();
  v30->set_f_0(0x86);
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53* v31 =
      v30->mutable_f_1();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54*
      v33_0 = v31->add_f_3();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55* v33 = v33_0->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::M53::M54::
      M55::M57* v35 = v33->mutable_f_2();
  v35->set_f_0(0x4f);
  v33->set_f_0(s->substr(0, 21));
  v33_0->set_f_0(s->substr(0, 12));
  v31->set_f_0(0x4f);
  Message0::M1::M6::M8::M18::M21::M27::M28::M42* v38_0 = v25->add_f_2();
  v38_0->set_f_0(Message0::M1::M6::M8::M18::M21::M27::M28::M42::E17_CONST_2);
  Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45* v38 =
      v38_0->mutable_f_2();
  Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48* v39 =
      v38->mutable_f_1();
  v39->add_f_0(
      Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48::E19_CONST_3);
  Message0::M1::M6::M8::M18::M21::M27::M37* v40 = v24->mutable_f_43();
  Message0::M1::M6::M8::M18::M21::M27::M37::M39* v41 = v40->mutable_f_2();
  v41->set_f_1(false);
  v40->set_f_0(true);
  v24->set_f_6(0xff);
  Message0::M1::M6::M8::M18::M21::M27::M31* v42 = v24->mutable_f_40();
  v42->set_f_0(0xeb);
  v24->set_f_24(s->substr(0, 122));
  v24->set_f_17(0.741528);
  v24->set_f_26(true);
  Message0::M1::M6::M8::M18::M21::M27::M32* v47 = v24->mutable_f_41();
  v47->set_f_0(0x3abd10);
  v24->set_f_0(true);
  v24->set_f_25(0xcd64);
  v24->set_f_14(0x7109c5);
  v24->add_f_4(0x71174f0c);
  v24->add_f_4(0xc6);
  v24->add_f_4(0x98e212);
  v24->add_f_4(0x32);
  v24->set_f_27(0x52);
  Message0::M1::M6::M8::M18::M21::M27::M33* v49 = v24->mutable_f_42();
  v49->set_f_1(s->substr(0, 5));
  v24->set_f_2(0x76f1);
  v24->set_f_11(0x4a1dd48f);
  Message0::M1::M6::M8::M18::M21::M26* v50 = v23->mutable_f_1();
  v50->set_f_0(s->substr(0, 504));
  v23->set_f_0(0x36);
  v21->set_f_6(s->substr(0, 29));
  Message0::M1::M6::M8::M15* v52 = v21->mutable_f_14();
  Message0::M1::M6::M8::M15::M23* v54_0 = v52->add_f_1();
  v54_0->set_f_0(s->substr(0, 26));
  v3_0->set_f_22(0xbabd6d9);
  v1->set_f_0(0xe678bc66a8ca9a6a);
  Message0::M3* v56_0 = message->add_f_9();
  v56_0->set_f_0(0x9b);
  message->set_f_1(Message0::E1_CONST_2);
}

inline void Message0_Get_1(Message0* message) {
  const Message0::M5& v0 = (*message).f_13();
  ReceiveString(v0.f_0());
  ReceiveBool(v0.f_1());
  ReceiveInt64(v0.f_2());
  const Message0::M2& v1 = (*message).f_8();
  ReceiveInt32(v1.f_1());
  ReceiveFloat(v1.f_3());
  ReceiveUint64(v1.f_0());
  ReceiveUint64(v1.f_2());
  const Message0::M1& v2 = (*message).f_6();
  for (const auto& v3 : v2.f_5()) {
    for (const auto& f : v3.f_11()) {
      ReceiveString(f);
    }
    ReceiveInt64(v3.f_10());
    ReceiveUint32(v3.f_7());
    ReceiveInt64(v3.f_4());
    ReceiveInt32(v3.f_23());
    const Message0::M1::M6::M10& v4 = v3.f_38();
    ReceiveInt32(v4.f_1());
    ReceiveFloat(v4.f_0());
    ReceiveInt64(v4.f_2());
    for (auto f : v4.f_3()) {
      ReceiveInt32(f);
    }
    ReceiveString(v3.f_18());
    ReceiveUint32(v3.f_0());
    for (const auto& v5 : v3.f_33()) {
      for (const auto& v6 : v5.f_3()) {
        ReceiveBool(v6.f_6());
        ReceiveInt32(v6.f_9());
        ReceiveInt32(v6.f_7());
        ReceiveInt64(v6.f_0());
        ReceiveBool(v6.f_1());
        ReceiveString(v6.f_2());
        ReceiveInt64(v6.f_3());
        ReceiveInt64(v6.f_5());
        ReceiveUint32(v6.f_8());
        ReceiveInt32(v6.f_4());
      }
      ReceiveUint32(v5.f_0());
      const Message0::M1::M6::M7::M16& v7 = v5.f_2();
      ReceiveInt32(v7.f_0());
      const Message0::M1::M6::M7::M14& v8 = v5.f_1();
      ReceiveInt64(v8.f_0());
    }
    ReceiveInt64(v3.f_14());
    ReceiveBool(v3.f_6());
    for (const auto& v9 : v3.f_39()) {
      ReceiveInt64(v9.f_0());
      const Message0::M1::M6::M11::M13& v10 = v9.f_1();
      ReceiveInt32(v10.f_3());
      ReceiveInt32(v10.f_0());
      ReceiveFloat(v10.f_1());
      ReceiveInt64(v10.f_2());
      ReceiveInt64(v10.f_5());
      const Message0::M1::M6::M11::M13::M22& v11 = v10.f_6();
      for (const auto& v12 : v11.f_2()) {
        const Message0::M1::M6::M11::M13::M22::M25::M30& v13 = v12.f_3();
        ReceiveString(v13.f_0());
        ReceiveString(v12.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M35& v14 = v12.f_7();
        ReceiveInt64(v14.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M29& v15 = v12.f_2();
        ReceiveString(v15.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M36& v16 = v12.f_9();
        ReceiveInt32(v16.f_1());
        for (auto f : v16.f_0()) {
          ReceiveInt32(f);
        }
      }
      ReceiveInt64(v11.f_0());
      ReceiveUint64(v10.f_4());
      const Message0::M1::M6::M11::M19& v17 = v9.f_3();
      ReceiveString(v17.f_0());
    }
    ReceiveUint64(v3.f_15());
    ReceiveFloat(v3.f_17());
    ReceiveInt32(v3.f_20());
    const Message0::M1::M6::M9& v18 = v3.f_37();
    ReceiveInt64(v18.f_0());
    ReceiveString(v3.f_19());
    ReceiveUint32(v3.f_24());
    ReceiveInt64(v3.f_1());
    ReceiveString(v3.f_8());
    const Message0::M1::M6::M12& v19 = v3.f_42();
    const Message0::M1::M6::M12::M17& v20 = v19.f_10();
    ReceiveInt32(v20.f_2());
    ReceiveString(v20.f_1());
    ReceiveFloat(v20.f_0());
    for (const auto& v21 : v20.f_3()) {
      ReceiveInt32(v21.f_19());
      ReceiveInt32(v21.f_14());
      ReceiveInt64(v21.f_4());
      for (const auto& f : v21.f_21()) {
        ReceiveString(f);
      }
      ReceiveInt64(v21.f_20());
      ReceiveInt64(v21.f_5());
      ReceiveUint64(v21.f_18());
      ReceiveString(v21.f_22());
      ReceiveInt64(v21.f_1());
      ReceiveString(v21.f_6());
      ReceiveString(v21.f_17());
      ReceiveString(v21.f_23());
      for (auto f : v21.f_2()) {
        ReceiveInt32(f);
      }
      ReceiveDouble(v21.f_16());
      ReceiveInt64(v21.f_0());
      ReceiveBool(v21.f_9());
      ReceiveInt64(v21.f_13());
      ReceiveInt32(v21.f_10());
      ReceiveString(v21.f_3());
      ReceiveInt64(v21.f_8());
      ReceiveInt32(v21.f_7());
      ReceiveInt32(v21.f_11());
      ReceiveInt64(v21.f_12());
      ReceiveInt64(v21.f_15());
    }
    ReceiveFloat(v19.f_3());
    ReceiveInt64(v19.f_0());
    ReceiveInt64(v19.f_5());
    ReceiveInt64(v19.f_2());
    ReceiveBool(v19.f_4());
    ReceiveCord(v19.f_1());
    ReceiveUint32(v3.f_5());
    ReceiveInt32(v3.f_22());
    ReceiveString(v3.f_13());
    ReceiveUint64(v3.f_9());
    ReceiveInt32(v3.f_16());
    ReceiveInt32(v3.f_21());
    ReceiveInt64(v3.f_3());
    ReceiveInt32(v3.f_12());
    const Message0::M1::M6::M8& v22 = v3.f_36();
    ReceiveBool(v22.f_0());
    ReceiveString(v22.f_2());
    ReceiveInt32(v22.f_5());
    ReceiveInt64(v22.f_1());
    ReceiveInt32(v22.f_7());
    ReceiveString(v22.f_4());
    ReceiveString(v22.f_3());
    ReceiveInt32(v22.f_9());
    const Message0::M1::M6::M8::M15& v23 = v22.f_14();
    for (const auto& v24 : v23.f_1()) {
      ReceiveString(v24.f_0());
    }
    ReceiveUint32(v23.f_0());
    ReceiveString(v22.f_6());
    const Message0::M1::M6::M8::M18& v25 = v22.f_17();
    const Message0::M1::M6::M8::M18::M21& v26 = v25.f_1();
    const Message0::M1::M6::M8::M18::M21::M26& v27 = v26.f_1();
    const Message0::M1::M6::M8::M18::M21::M26::M34& v28 = v27.f_1();
    ReceiveFloat(v28.f_0());
    ReceiveString(v27.f_0());
    const Message0::M1::M6::M8::M18::M21::M27& v29 = v26.f_2();
    ReceiveInt64(v29.f_7());
    for (auto f : v29.f_4()) {
      ReceiveInt32(f);
    }
    ReceiveBool(v29.f_26());
    ReceiveBool(v29.f_0());
    ReceiveInt64(v29.f_1());
    const Message0::M1::M6::M8::M18::M21::M27::M37& v30 = v29.f_43();
    const Message0::M1::M6::M8::M18::M21::M27::M37::M39& v31 = v30.f_2();
    ReceiveUint64(v31.f_3());
    ReceiveString(v31.f_2());
    ReceiveString(v31.f_0());
    ReceiveBool(v31.f_1());
    ReceiveBool(v30.f_0());
    ReceiveInt64(v29.f_6());
    ReceiveInt64(v29.f_23());
    ReceiveInt64(v29.f_15());
    ReceiveInt64(v29.f_14());
    ReceiveString(v29.f_3());
    ReceiveBool(v29.f_8());
    ReceiveFloat(v29.f_17());
    ReceiveInt32(v29.f_27());
    ReceiveString(v29.f_24());
    const Message0::M1::M6::M8::M18::M21::M27::M32& v32 = v29.f_41();
    ReceiveInt32(v32.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M32::M41& v33 = v32.f_2();
    ReceiveInt32(v33.f_0());
    ReceiveInt32(v29.f_9());
    ReceiveFloat(v29.f_10());
    ReceiveInt64(v29.f_12());
    ReceiveInt32(v29.f_13());
    ReceiveInt64(v29.f_11());
    ReceiveInt32(v29.f_21());
    ReceiveFloat(v29.f_20());
    const Message0::M1::M6::M8::M18::M21::M27::M31& v34 = v29.f_40();
    ReceiveInt32(v34.f_0());
    for (const auto& v35 : v34.f_1()) {
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44& v36 = v35.f_4();
      ReceiveBool(v36.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44::M47& v37 =
          v36.f_2();
      ReceiveString(v37.f_0());
      for (const auto& v38 : v35.f_2()) {
        ReceiveInt32(v38.f_0());
      }
      ReceiveBool(v35.f_0());
    }
    ReceiveFloat(v29.f_5());
    ReceiveInt64(v29.f_25());
    ReceiveString(v29.f_18());
    const Message0::M1::M6::M8::M18::M21::M27::M33& v39 = v29.f_42();
    ReceiveString(v39.f_1());
    ReceiveUint64(v39.f_0());
    ReceiveInt32(v39.f_2());
    ReceiveInt64(v29.f_22());
    ReceiveUint64(v29.f_19());
    const Message0::M1::M6::M8::M18::M21::M27::M28& v40 = v29.f_36();
    ReceiveInt32(v40.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40& v41 = v40.f_1();
    ReceiveString(v41.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46& v42 = v41.f_3();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49& v43 =
        v42.f_1();
    for (const auto& v44 : v43.f_1()) {
      ReceiveString(v44.f_0());
    }
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51& v45 =
        v43.f_2();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52&
        v46 = v45.f_1();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
        M53& v47 = v46.f_1();
    for (const auto& v48 : v47.f_3()) {
      ReceiveString(v48.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55& v49 = v48.f_2();
      ReceiveString(v49.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M57& v50 = v49.f_2();
      ReceiveUint32(v50.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M56& v51 = v49.f_1();
      ReceiveInt64(v51.f_0());
    }
    ReceiveInt64(v47.f_0());
    ReceiveInt32(v46.f_0());
    ReceiveUint32(v45.f_0());
    ReceiveBool(v43.f_0());
    ReceiveInt64(v42.f_0());
    for (const auto& v52 : v40.f_2()) {
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45& v53 = v52.f_2();
      ReceiveString(v53.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48& v54 =
          v53.f_1();
      for (auto f : v54.f_0()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v52.f_0());
    }
    ReceiveInt32(v29.f_16());
    ReceiveInt64(v29.f_2());
    ReceiveInt32(v26.f_0());
    ReceiveInt64(v25.f_0());
    ReceiveUint64(v22.f_8());
    ReceiveInt64(v3.f_2());
  }
  ReceiveUint64(v2.f_1());
  ReceiveUint64(v2.f_0());
  for (const auto& v55 : (*message).f_12()) {
    ReceiveInt64(v55.f_0());
  }
  ReceiveInt32((*message).f_1());
  ReceiveString((*message).f_0());
  for (const auto& v56 : (*message).f_9()) {
    ReceiveInt32(v56.f_0());
  }
  ReceiveUint64((*message).f_3());
  ReceiveBool((*message).f_2());
}

inline void Message0_Get_2(Message0* message) {
  ReceiveBool((*message).f_2());
  for (const auto& v0 : (*message).f_9()) {
    ReceiveInt32(v0.f_0());
  }
  ReceiveString((*message).f_0());
  ReceiveInt32((*message).f_1());
  const Message0::M5& v1 = (*message).f_13();
  ReceiveInt64(v1.f_2());
  ReceiveBool(v1.f_1());
  ReceiveString(v1.f_0());
  const Message0::M1& v2 = (*message).f_6();
  ReceiveUint64(v2.f_0());
  for (const auto& v3 : v2.f_5()) {
    const Message0::M1::M6::M9& v4 = v3.f_37();
    ReceiveInt64(v4.f_0());
    ReceiveInt64(v3.f_4());
    ReceiveInt64(v3.f_10());
    ReceiveUint64(v3.f_9());
    ReceiveInt64(v3.f_3());
    ReceiveInt64(v3.f_1());
    for (const auto& v5 : v3.f_33()) {
      for (const auto& v6 : v5.f_3()) {
        ReceiveString(v6.f_2());
        ReceiveInt32(v6.f_9());
        ReceiveInt32(v6.f_7());
        ReceiveBool(v6.f_1());
        ReceiveInt32(v6.f_4());
        ReceiveUint32(v6.f_8());
        ReceiveInt64(v6.f_0());
        ReceiveInt64(v6.f_3());
        ReceiveInt64(v6.f_5());
        ReceiveBool(v6.f_6());
      }
      const Message0::M1::M6::M7::M14& v7 = v5.f_1();
      ReceiveInt64(v7.f_0());
      ReceiveUint32(v5.f_0());
      const Message0::M1::M6::M7::M16& v8 = v5.f_2();
      ReceiveInt32(v8.f_0());
    }
    for (const auto& v9 : v3.f_39()) {
      const Message0::M1::M6::M11::M13& v10 = v9.f_1();
      ReceiveInt32(v10.f_0());
      ReceiveUint64(v10.f_4());
      ReceiveInt64(v10.f_5());
      ReceiveInt32(v10.f_3());
      const Message0::M1::M6::M11::M13::M22& v11 = v10.f_6();
      ReceiveInt64(v11.f_0());
      for (const auto& v12 : v11.f_2()) {
        const Message0::M1::M6::M11::M13::M22::M25::M29& v13 = v12.f_2();
        ReceiveString(v13.f_0());
        ReceiveString(v12.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M30& v14 = v12.f_3();
        ReceiveString(v14.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M36& v15 = v12.f_9();
        ReceiveInt32(v15.f_1());
        for (auto f : v15.f_0()) {
          ReceiveInt32(f);
        }
        const Message0::M1::M6::M11::M13::M22::M25::M35& v16 = v12.f_7();
        ReceiveInt64(v16.f_0());
      }
      ReceiveFloat(v10.f_1());
      ReceiveInt64(v10.f_2());
      ReceiveInt64(v9.f_0());
      const Message0::M1::M6::M11::M19& v17 = v9.f_3();
      ReceiveString(v17.f_0());
    }
    ReceiveInt32(v3.f_21());
    const Message0::M1::M6::M12& v18 = v3.f_42();
    ReceiveInt64(v18.f_2());
    ReceiveInt64(v18.f_0());
    ReceiveFloat(v18.f_3());
    ReceiveInt64(v18.f_5());
    ReceiveBool(v18.f_4());
    ReceiveCord(v18.f_1());
    const Message0::M1::M6::M12::M17& v19 = v18.f_10();
    ReceiveFloat(v19.f_0());
    ReceiveString(v19.f_1());
    for (const auto& v20 : v19.f_3()) {
      ReceiveString(v20.f_3());
      ReceiveInt64(v20.f_5());
      ReceiveInt64(v20.f_20());
      ReceiveInt32(v20.f_7());
      ReceiveInt64(v20.f_0());
      ReceiveDouble(v20.f_16());
      ReceiveUint64(v20.f_18());
      ReceiveInt64(v20.f_13());
      ReceiveBool(v20.f_9());
      ReceiveInt32(v20.f_10());
      ReceiveInt64(v20.f_15());
      ReceiveInt64(v20.f_1());
      ReceiveInt64(v20.f_4());
      ReceiveString(v20.f_22());
      ReceiveInt64(v20.f_12());
      for (const auto& f : v20.f_21()) {
        ReceiveString(f);
      }
      ReceiveInt32(v20.f_11());
      ReceiveInt32(v20.f_14());
      ReceiveString(v20.f_23());
      for (auto f : v20.f_2()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v20.f_19());
      ReceiveString(v20.f_17());
      ReceiveInt64(v20.f_8());
      ReceiveString(v20.f_6());
    }
    ReceiveInt32(v19.f_2());
    ReceiveInt32(v3.f_16());
    ReceiveUint32(v3.f_7());
    ReceiveString(v3.f_18());
    ReceiveString(v3.f_19());
    ReceiveUint32(v3.f_5());
    ReceiveString(v3.f_8());
    ReceiveUint32(v3.f_24());
    ReceiveFloat(v3.f_17());
    const Message0::M1::M6::M8& v21 = v3.f_36();
    ReceiveInt64(v21.f_1());
    ReceiveString(v21.f_3());
    ReceiveString(v21.f_2());
    const Message0::M1::M6::M8::M18& v22 = v21.f_17();
    const Message0::M1::M6::M8::M18::M21& v23 = v22.f_1();
    const Message0::M1::M6::M8::M18::M21::M27& v24 = v23.f_2();
    ReceiveFloat(v24.f_5());
    ReceiveBool(v24.f_0());
    ReceiveInt64(v24.f_12());
    ReceiveBool(v24.f_26());
    const Message0::M1::M6::M8::M18::M21::M27::M37& v25 = v24.f_43();
    const Message0::M1::M6::M8::M18::M21::M27::M37::M39& v26 = v25.f_2();
    ReceiveUint64(v26.f_3());
    ReceiveBool(v26.f_1());
    ReceiveString(v26.f_2());
    ReceiveString(v26.f_0());
    ReceiveBool(v25.f_0());
    ReceiveInt32(v24.f_27());
    ReceiveFloat(v24.f_20());
    ReceiveString(v24.f_3());
    ReceiveInt64(v24.f_11());
    ReceiveInt64(v24.f_23());
    const Message0::M1::M6::M8::M18::M21::M27::M33& v27 = v24.f_42();
    ReceiveString(v27.f_1());
    ReceiveUint64(v27.f_0());
    ReceiveInt32(v27.f_2());
    ReceiveFloat(v24.f_17());
    ReceiveInt32(v24.f_16());
    ReceiveInt64(v24.f_7());
    ReceiveInt32(v24.f_21());
    ReceiveInt64(v24.f_22());
    ReceiveInt64(v24.f_6());
    ReceiveInt32(v24.f_9());
    ReceiveInt64(v24.f_1());
    const Message0::M1::M6::M8::M18::M21::M27::M28& v28 = v24.f_36();
    for (const auto& v29 : v28.f_2()) {
      ReceiveInt32(v29.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45& v30 = v29.f_2();
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48& v31 =
          v30.f_1();
      for (auto f : v31.f_0()) {
        ReceiveInt32(f);
      }
      ReceiveString(v30.f_0());
    }
    ReceiveInt32(v28.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40& v32 = v28.f_1();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46& v33 = v32.f_3();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49& v34 =
        v33.f_1();
    ReceiveBool(v34.f_0());
    for (const auto& v35 : v34.f_1()) {
      ReceiveString(v35.f_0());
    }
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51& v36 =
        v34.f_2();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52&
        v37 = v36.f_1();
    ReceiveInt32(v37.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
        M53& v38 = v37.f_1();
    for (const auto& v39 : v38.f_3()) {
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55& v40 = v39.f_2();
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M56& v41 = v40.f_1();
      ReceiveInt64(v41.f_0());
      ReceiveString(v40.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M57& v42 = v40.f_2();
      ReceiveUint32(v42.f_0());
      ReceiveString(v39.f_0());
    }
    ReceiveInt64(v38.f_0());
    ReceiveUint32(v36.f_0());
    ReceiveInt64(v33.f_0());
    ReceiveString(v32.f_0());
    for (auto f : v24.f_4()) {
      ReceiveInt32(f);
    }
    ReceiveString(v24.f_18());
    ReceiveString(v24.f_24());
    ReceiveFloat(v24.f_10());
    ReceiveInt64(v24.f_14());
    ReceiveBool(v24.f_8());
    ReceiveInt64(v24.f_25());
    ReceiveInt64(v24.f_2());
    ReceiveUint64(v24.f_19());
    const Message0::M1::M6::M8::M18::M21::M27::M32& v43 = v24.f_41();
    const Message0::M1::M6::M8::M18::M21::M27::M32::M41& v44 = v43.f_2();
    ReceiveInt32(v44.f_0());
    ReceiveInt32(v43.f_0());
    ReceiveInt32(v24.f_13());
    const Message0::M1::M6::M8::M18::M21::M27::M31& v45 = v24.f_40();
    ReceiveInt32(v45.f_0());
    for (const auto& v46 : v45.f_1()) {
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44& v47 = v46.f_4();
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44::M47& v48 =
          v47.f_2();
      ReceiveString(v48.f_0());
      ReceiveBool(v47.f_0());
      for (const auto& v49 : v46.f_2()) {
        ReceiveInt32(v49.f_0());
      }
      ReceiveBool(v46.f_0());
    }
    ReceiveInt64(v24.f_15());
    const Message0::M1::M6::M8::M18::M21::M26& v50 = v23.f_1();
    const Message0::M1::M6::M8::M18::M21::M26::M34& v51 = v50.f_1();
    ReceiveFloat(v51.f_0());
    ReceiveString(v50.f_0());
    ReceiveInt32(v23.f_0());
    ReceiveInt64(v22.f_0());
    ReceiveInt32(v21.f_9());
    ReceiveInt32(v21.f_5());
    ReceiveUint64(v21.f_8());
    ReceiveBool(v21.f_0());
    ReceiveString(v21.f_6());
    ReceiveString(v21.f_4());
    const Message0::M1::M6::M8::M15& v52 = v21.f_14();
    for (const auto& v53 : v52.f_1()) {
      ReceiveString(v53.f_0());
    }
    ReceiveUint32(v52.f_0());
    ReceiveInt32(v21.f_7());
    ReceiveInt32(v3.f_12());
    ReceiveUint64(v3.f_15());
    ReceiveInt32(v3.f_23());
    ReceiveInt32(v3.f_20());
    ReceiveString(v3.f_13());
    ReceiveBool(v3.f_6());
    ReceiveInt32(v3.f_22());
    ReceiveInt64(v3.f_2());
    ReceiveUint32(v3.f_0());
    for (const auto& f : v3.f_11()) {
      ReceiveString(f);
    }
    ReceiveInt64(v3.f_14());
    const Message0::M1::M6::M10& v54 = v3.f_38();
    ReceiveInt32(v54.f_1());
    for (auto f : v54.f_3()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v54.f_2());
    ReceiveFloat(v54.f_0());
  }
  ReceiveUint64(v2.f_1());
  ReceiveUint64((*message).f_3());
  const Message0::M2& v55 = (*message).f_8();
  ReceiveUint64(v55.f_2());
  ReceiveInt32(v55.f_1());
  ReceiveUint64(v55.f_0());
  ReceiveFloat(v55.f_3());
  for (const auto& v56 : (*message).f_12()) {
    ReceiveInt64(v56.f_0());
  }
}

inline void Message0_Get_3(Message0* message) {
  ReceiveInt32((*message).f_1());
  ReceiveString((*message).f_0());
  ReceiveBool((*message).f_2());
  const Message0::M5& v0 = (*message).f_13();
  ReceiveString(v0.f_0());
  ReceiveInt64(v0.f_2());
  ReceiveBool(v0.f_1());
  const Message0::M2& v1 = (*message).f_8();
  ReceiveUint64(v1.f_2());
  ReceiveUint64(v1.f_0());
  ReceiveFloat(v1.f_3());
  ReceiveInt32(v1.f_1());
  const Message0::M1& v2 = (*message).f_6();
  for (const auto& v3 : v2.f_5()) {
    for (const auto& f : v3.f_11()) {
      ReceiveString(f);
    }
    for (const auto& v4 : v3.f_33()) {
      const Message0::M1::M6::M7::M16& v5 = v4.f_2();
      ReceiveInt32(v5.f_0());
      for (const auto& v6 : v4.f_3()) {
        ReceiveInt32(v6.f_7());
        ReceiveInt32(v6.f_4());
        ReceiveInt64(v6.f_3());
        ReceiveInt32(v6.f_9());
        ReceiveString(v6.f_2());
        ReceiveInt64(v6.f_0());
        ReceiveBool(v6.f_6());
        ReceiveUint32(v6.f_8());
        ReceiveInt64(v6.f_5());
        ReceiveBool(v6.f_1());
      }
      const Message0::M1::M6::M7::M14& v7 = v4.f_1();
      ReceiveInt64(v7.f_0());
      ReceiveUint32(v4.f_0());
    }
    ReceiveInt64(v3.f_4());
    ReceiveInt32(v3.f_12());
    ReceiveInt32(v3.f_16());
    const Message0::M1::M6::M9& v8 = v3.f_37();
    ReceiveInt64(v8.f_0());
    ReceiveInt32(v3.f_20());
    const Message0::M1::M6::M10& v9 = v3.f_38();
    for (auto f : v9.f_3()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v9.f_2());
    ReceiveInt32(v9.f_1());
    ReceiveFloat(v9.f_0());
    ReceiveString(v3.f_8());
    ReceiveInt32(v3.f_23());
    for (const auto& v10 : v3.f_39()) {
      const Message0::M1::M6::M11::M19& v11 = v10.f_3();
      ReceiveString(v11.f_0());
      const Message0::M1::M6::M11::M13& v12 = v10.f_1();
      ReceiveInt32(v12.f_3());
      ReceiveInt64(v12.f_5());
      ReceiveFloat(v12.f_1());
      ReceiveInt64(v12.f_2());
      ReceiveUint64(v12.f_4());
      ReceiveInt32(v12.f_0());
      const Message0::M1::M6::M11::M13::M22& v13 = v12.f_6();
      for (const auto& v14 : v13.f_2()) {
        const Message0::M1::M6::M11::M13::M22::M25::M29& v15 = v14.f_2();
        ReceiveString(v15.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M36& v16 = v14.f_9();
        for (auto f : v16.f_0()) {
          ReceiveInt32(f);
        }
        ReceiveInt32(v16.f_1());
        ReceiveString(v14.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M35& v17 = v14.f_7();
        ReceiveInt64(v17.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M30& v18 = v14.f_3();
        ReceiveString(v18.f_0());
      }
      ReceiveInt64(v13.f_0());
      ReceiveInt64(v10.f_0());
    }
    ReceiveInt64(v3.f_1());
    ReceiveInt64(v3.f_10());
    ReceiveUint64(v3.f_15());
    ReceiveUint32(v3.f_24());
    ReceiveFloat(v3.f_17());
    ReceiveString(v3.f_13());
    ReceiveInt64(v3.f_3());
    ReceiveInt32(v3.f_21());
    ReceiveUint32(v3.f_0());
    const Message0::M1::M6::M12& v19 = v3.f_42();
    const Message0::M1::M6::M12::M17& v20 = v19.f_10();
    ReceiveFloat(v20.f_0());
    ReceiveString(v20.f_1());
    for (const auto& v21 : v20.f_3()) {
      ReceiveBool(v21.f_9());
      ReceiveInt32(v21.f_7());
      ReceiveInt32(v21.f_11());
      ReceiveString(v21.f_3());
      ReceiveInt64(v21.f_15());
      ReceiveString(v21.f_22());
      ReceiveInt64(v21.f_13());
      ReceiveDouble(v21.f_16());
      ReceiveInt64(v21.f_0());
      ReceiveUint64(v21.f_18());
      ReceiveString(v21.f_17());
      ReceiveInt64(v21.f_1());
      for (const auto& f : v21.f_21()) {
        ReceiveString(f);
      }
      ReceiveString(v21.f_6());
      ReceiveInt32(v21.f_10());
      ReceiveInt64(v21.f_12());
      ReceiveInt64(v21.f_8());
      for (auto f : v21.f_2()) {
        ReceiveInt32(f);
      }
      ReceiveString(v21.f_23());
      ReceiveInt32(v21.f_14());
      ReceiveInt64(v21.f_5());
      ReceiveInt64(v21.f_20());
      ReceiveInt64(v21.f_4());
      ReceiveInt32(v21.f_19());
    }
    ReceiveInt32(v20.f_2());
    ReceiveCord(v19.f_1());
    ReceiveBool(v19.f_4());
    ReceiveFloat(v19.f_3());
    ReceiveInt64(v19.f_2());
    ReceiveInt64(v19.f_0());
    ReceiveInt64(v19.f_5());
    ReceiveString(v3.f_18());
    ReceiveUint32(v3.f_5());
    ReceiveUint32(v3.f_7());
    ReceiveInt64(v3.f_14());
    const Message0::M1::M6::M8& v22 = v3.f_36();
    ReceiveInt32(v22.f_7());
    ReceiveString(v22.f_3());
    ReceiveBool(v22.f_0());
    ReceiveInt32(v22.f_5());
    ReceiveString(v22.f_4());
    ReceiveInt64(v22.f_1());
    ReceiveInt32(v22.f_9());
    ReceiveString(v22.f_6());
    const Message0::M1::M6::M8::M15& v23 = v22.f_14();
    for (const auto& v24 : v23.f_1()) {
      ReceiveString(v24.f_0());
    }
    ReceiveUint32(v23.f_0());
    ReceiveString(v22.f_2());
    const Message0::M1::M6::M8::M18& v25 = v22.f_17();
    ReceiveInt64(v25.f_0());
    const Message0::M1::M6::M8::M18::M21& v26 = v25.f_1();
    ReceiveInt32(v26.f_0());
    const Message0::M1::M6::M8::M18::M21::M27& v27 = v26.f_2();
    ReceiveFloat(v27.f_20());
    ReceiveInt32(v27.f_27());
    ReceiveInt64(v27.f_6());
    ReceiveInt32(v27.f_16());
    const Message0::M1::M6::M8::M18::M21::M27::M28& v28 = v27.f_36();
    ReceiveInt32(v28.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40& v29 = v28.f_1();
    ReceiveString(v29.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46& v30 = v29.f_3();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49& v31 =
        v30.f_1();
    for (const auto& v32 : v31.f_1()) {
      ReceiveString(v32.f_0());
    }
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51& v33 =
        v31.f_2();
    ReceiveUint32(v33.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52&
        v34 = v33.f_1();
    ReceiveInt32(v34.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
        M53& v35 = v34.f_1();
    for (const auto& v36 : v35.f_3()) {
      ReceiveString(v36.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55& v37 = v36.f_2();
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M56& v38 = v37.f_1();
      ReceiveInt64(v38.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M57& v39 = v37.f_2();
      ReceiveUint32(v39.f_0());
      ReceiveString(v37.f_0());
    }
    ReceiveInt64(v35.f_0());
    ReceiveBool(v31.f_0());
    ReceiveInt64(v30.f_0());
    for (const auto& v40 : v28.f_2()) {
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45& v41 = v40.f_2();
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48& v42 =
          v41.f_1();
      for (auto f : v42.f_0()) {
        ReceiveInt32(f);
      }
      ReceiveString(v41.f_0());
      ReceiveInt32(v40.f_0());
    }
    const Message0::M1::M6::M8::M18::M21::M27::M31& v43 = v27.f_40();
    ReceiveInt32(v43.f_0());
    for (const auto& v44 : v43.f_1()) {
      ReceiveBool(v44.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44& v45 = v44.f_4();
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44::M47& v46 =
          v45.f_2();
      ReceiveString(v46.f_0());
      ReceiveBool(v45.f_0());
      for (const auto& v47 : v44.f_2()) {
        ReceiveInt32(v47.f_0());
      }
    }
    ReceiveInt64(v27.f_22());
    ReceiveFloat(v27.f_5());
    ReceiveInt64(v27.f_2());
    ReceiveInt32(v27.f_9());
    ReceiveBool(v27.f_8());
    ReceiveInt64(v27.f_25());
    const Message0::M1::M6::M8::M18::M21::M27::M32& v48 = v27.f_41();
    const Message0::M1::M6::M8::M18::M21::M27::M32::M41& v49 = v48.f_2();
    ReceiveInt32(v49.f_0());
    ReceiveInt32(v48.f_0());
    ReceiveString(v27.f_3());
    ReceiveFloat(v27.f_10());
    ReceiveInt64(v27.f_12());
    for (auto f : v27.f_4()) {
      ReceiveInt32(f);
    }
    const Message0::M1::M6::M8::M18::M21::M27::M33& v50 = v27.f_42();
    ReceiveInt32(v50.f_2());
    ReceiveUint64(v50.f_0());
    ReceiveString(v50.f_1());
    ReceiveInt64(v27.f_15());
    ReceiveInt64(v27.f_14());
    ReceiveInt64(v27.f_11());
    ReceiveString(v27.f_18());
    ReceiveInt64(v27.f_23());
    ReceiveFloat(v27.f_17());
    ReceiveUint64(v27.f_19());
    ReceiveBool(v27.f_26());
    ReceiveInt64(v27.f_1());
    ReceiveString(v27.f_24());
    ReceiveBool(v27.f_0());
    ReceiveInt32(v27.f_13());
    ReceiveInt64(v27.f_7());
    const Message0::M1::M6::M8::M18::M21::M27::M37& v51 = v27.f_43();
    const Message0::M1::M6::M8::M18::M21::M27::M37::M39& v52 = v51.f_2();
    ReceiveUint64(v52.f_3());
    ReceiveString(v52.f_2());
    ReceiveString(v52.f_0());
    ReceiveBool(v52.f_1());
    ReceiveBool(v51.f_0());
    ReceiveInt32(v27.f_21());
    const Message0::M1::M6::M8::M18::M21::M26& v53 = v26.f_1();
    ReceiveString(v53.f_0());
    const Message0::M1::M6::M8::M18::M21::M26::M34& v54 = v53.f_1();
    ReceiveFloat(v54.f_0());
    ReceiveUint64(v22.f_8());
    ReceiveString(v3.f_19());
    ReceiveBool(v3.f_6());
    ReceiveUint64(v3.f_9());
    ReceiveInt64(v3.f_2());
    ReceiveInt32(v3.f_22());
  }
  ReceiveUint64(v2.f_1());
  ReceiveUint64(v2.f_0());
  ReceiveUint64((*message).f_3());
  for (const auto& v55 : (*message).f_9()) {
    ReceiveInt32(v55.f_0());
  }
  for (const auto& v56 : (*message).f_12()) {
    ReceiveInt64(v56.f_0());
  }
}

inline void Message0_Get_4(Message0* message) {
  const Message0::M2& v0 = (*message).f_8();
  ReceiveUint64(v0.f_0());
  ReceiveFloat(v0.f_3());
  ReceiveUint64(v0.f_2());
  ReceiveInt32(v0.f_1());
  const Message0::M1& v1 = (*message).f_6();
  ReceiveUint64(v1.f_1());
  for (const auto& v2 : v1.f_5()) {
    ReceiveUint32(v2.f_24());
    ReceiveFloat(v2.f_17());
    ReceiveInt32(v2.f_21());
    const Message0::M1::M6::M8& v3 = v2.f_36();
    ReceiveUint64(v3.f_8());
    const Message0::M1::M6::M8::M18& v4 = v3.f_17();
    ReceiveInt64(v4.f_0());
    const Message0::M1::M6::M8::M18::M21& v5 = v4.f_1();
    const Message0::M1::M6::M8::M18::M21::M26& v6 = v5.f_1();
    ReceiveString(v6.f_0());
    const Message0::M1::M6::M8::M18::M21::M26::M34& v7 = v6.f_1();
    ReceiveFloat(v7.f_0());
    const Message0::M1::M6::M8::M18::M21::M27& v8 = v5.f_2();
    const Message0::M1::M6::M8::M18::M21::M27::M33& v9 = v8.f_42();
    ReceiveString(v9.f_1());
    ReceiveInt32(v9.f_2());
    ReceiveUint64(v9.f_0());
    ReceiveFloat(v8.f_10());
    ReceiveInt64(v8.f_15());
    ReceiveInt32(v8.f_27());
    ReceiveInt64(v8.f_1());
    ReceiveInt32(v8.f_13());
    ReceiveBool(v8.f_26());
    ReceiveInt64(v8.f_14());
    const Message0::M1::M6::M8::M18::M21::M27::M28& v10 = v8.f_36();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40& v11 = v10.f_1();
    ReceiveString(v11.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46& v12 = v11.f_3();
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49& v13 =
        v12.f_1();
    for (const auto& v14 : v13.f_1()) {
      ReceiveString(v14.f_0());
    }
    ReceiveBool(v13.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51& v15 =
        v13.f_2();
    ReceiveUint32(v15.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52&
        v16 = v15.f_1();
    ReceiveInt32(v16.f_0());
    const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
        M53& v17 = v16.f_1();
    ReceiveInt64(v17.f_0());
    for (const auto& v18 : v17.f_3()) {
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55& v19 = v18.f_2();
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M57& v20 = v19.f_2();
      ReceiveUint32(v20.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M40::M46::M49::M51::M52::
          M53::M54::M55::M56& v21 = v19.f_1();
      ReceiveInt64(v21.f_0());
      ReceiveString(v19.f_0());
      ReceiveString(v18.f_0());
    }
    ReceiveInt64(v12.f_0());
    for (const auto& v22 : v10.f_2()) {
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45& v23 = v22.f_2();
      ReceiveString(v23.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M28::M42::M45::M48& v24 =
          v23.f_1();
      for (auto f : v24.f_0()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v22.f_0());
    }
    ReceiveInt32(v10.f_0());
    ReceiveInt64(v8.f_11());
    ReceiveInt32(v8.f_21());
    ReceiveString(v8.f_18());
    const Message0::M1::M6::M8::M18::M21::M27::M32& v25 = v8.f_41();
    const Message0::M1::M6::M8::M18::M21::M27::M32::M41& v26 = v25.f_2();
    ReceiveInt32(v26.f_0());
    ReceiveInt32(v25.f_0());
    ReceiveString(v8.f_3());
    ReceiveInt64(v8.f_22());
    ReceiveString(v8.f_24());
    for (auto f : v8.f_4()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v8.f_12());
    ReceiveInt32(v8.f_16());
    ReceiveUint64(v8.f_19());
    ReceiveInt64(v8.f_25());
    const Message0::M1::M6::M8::M18::M21::M27::M37& v27 = v8.f_43();
    const Message0::M1::M6::M8::M18::M21::M27::M37::M39& v28 = v27.f_2();
    ReceiveString(v28.f_0());
    ReceiveBool(v28.f_1());
    ReceiveUint64(v28.f_3());
    ReceiveString(v28.f_2());
    ReceiveBool(v27.f_0());
    ReceiveInt64(v8.f_2());
    ReceiveInt64(v8.f_7());
    ReceiveInt32(v8.f_9());
    ReceiveBool(v8.f_8());
    ReceiveInt64(v8.f_6());
    ReceiveInt64(v8.f_23());
    ReceiveFloat(v8.f_20());
    const Message0::M1::M6::M8::M18::M21::M27::M31& v29 = v8.f_40();
    for (const auto& v30 : v29.f_1()) {
      ReceiveBool(v30.f_0());
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44& v31 = v30.f_4();
      const Message0::M1::M6::M8::M18::M21::M27::M31::M38::M44::M47& v32 =
          v31.f_2();
      ReceiveString(v32.f_0());
      ReceiveBool(v31.f_0());
      for (const auto& v33 : v30.f_2()) {
        ReceiveInt32(v33.f_0());
      }
    }
    ReceiveInt32(v29.f_0());
    ReceiveFloat(v8.f_17());
    ReceiveBool(v8.f_0());
    ReceiveFloat(v8.f_5());
    ReceiveInt32(v5.f_0());
    ReceiveString(v3.f_2());
    ReceiveString(v3.f_6());
    ReceiveInt32(v3.f_5());
    ReceiveInt32(v3.f_9());
    ReceiveString(v3.f_4());
    ReceiveBool(v3.f_0());
    ReceiveString(v3.f_3());
    ReceiveInt32(v3.f_7());
    const Message0::M1::M6::M8::M15& v34 = v3.f_14();
    ReceiveUint32(v34.f_0());
    for (const auto& v35 : v34.f_1()) {
      ReceiveString(v35.f_0());
    }
    ReceiveInt64(v3.f_1());
    ReceiveUint64(v2.f_15());
    ReceiveInt64(v2.f_1());
    const Message0::M1::M6::M9& v36 = v2.f_37();
    ReceiveInt64(v36.f_0());
    ReceiveString(v2.f_19());
    ReceiveInt64(v2.f_14());
    ReceiveUint32(v2.f_0());
    ReceiveBool(v2.f_6());
    ReceiveInt32(v2.f_12());
    ReceiveInt32(v2.f_20());
    for (const auto& v37 : v2.f_39()) {
      const Message0::M1::M6::M11::M19& v38 = v37.f_3();
      ReceiveString(v38.f_0());
      const Message0::M1::M6::M11::M13& v39 = v37.f_1();
      const Message0::M1::M6::M11::M13::M22& v40 = v39.f_6();
      for (const auto& v41 : v40.f_2()) {
        const Message0::M1::M6::M11::M13::M22::M25::M36& v42 = v41.f_9();
        for (auto f : v42.f_0()) {
          ReceiveInt32(f);
        }
        ReceiveInt32(v42.f_1());
        const Message0::M1::M6::M11::M13::M22::M25::M35& v43 = v41.f_7();
        ReceiveInt64(v43.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M30& v44 = v41.f_3();
        ReceiveString(v44.f_0());
        ReceiveString(v41.f_0());
        const Message0::M1::M6::M11::M13::M22::M25::M29& v45 = v41.f_2();
        ReceiveString(v45.f_0());
      }
      ReceiveInt64(v40.f_0());
      ReceiveInt64(v39.f_2());
      ReceiveInt32(v39.f_3());
      ReceiveInt64(v39.f_5());
      ReceiveUint64(v39.f_4());
      ReceiveFloat(v39.f_1());
      ReceiveInt32(v39.f_0());
      ReceiveInt64(v37.f_0());
    }
    ReceiveUint64(v2.f_9());
    ReceiveInt64(v2.f_4());
    ReceiveString(v2.f_18());
    ReceiveInt64(v2.f_2());
    for (const auto& v46 : v2.f_33()) {
      const Message0::M1::M6::M7::M14& v47 = v46.f_1();
      ReceiveInt64(v47.f_0());
      const Message0::M1::M6::M7::M16& v48 = v46.f_2();
      ReceiveInt32(v48.f_0());
      for (const auto& v49 : v46.f_3()) {
        ReceiveBool(v49.f_6());
        ReceiveInt32(v49.f_4());
        ReceiveBool(v49.f_1());
        ReceiveInt64(v49.f_5());
        ReceiveInt32(v49.f_9());
        ReceiveInt64(v49.f_3());
        ReceiveUint32(v49.f_8());
        ReceiveInt64(v49.f_0());
        ReceiveString(v49.f_2());
        ReceiveInt32(v49.f_7());
      }
      ReceiveUint32(v46.f_0());
    }
    const Message0::M1::M6::M10& v50 = v2.f_38();
    ReceiveFloat(v50.f_0());
    for (auto f : v50.f_3()) {
      ReceiveInt32(f);
    }
    ReceiveInt32(v50.f_1());
    ReceiveInt64(v50.f_2());
    ReceiveUint32(v2.f_5());
    ReceiveInt32(v2.f_22());
    ReceiveInt32(v2.f_23());
    ReceiveInt64(v2.f_10());
    const Message0::M1::M6::M12& v51 = v2.f_42();
    ReceiveInt64(v51.f_0());
    ReceiveInt64(v51.f_2());
    ReceiveBool(v51.f_4());
    ReceiveFloat(v51.f_3());
    const Message0::M1::M6::M12::M17& v52 = v51.f_10();
    ReceiveString(v52.f_1());
    for (const auto& v53 : v52.f_3()) {
      for (auto f : v53.f_2()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v53.f_15());
      ReceiveBool(v53.f_9());
      ReceiveInt32(v53.f_10());
      ReceiveUint64(v53.f_18());
      ReceiveInt64(v53.f_12());
      ReceiveString(v53.f_23());
      ReceiveString(v53.f_3());
      ReceiveDouble(v53.f_16());
      ReceiveInt32(v53.f_14());
      for (const auto& f : v53.f_21()) {
        ReceiveString(f);
      }
      ReceiveInt64(v53.f_8());
      ReceiveString(v53.f_17());
      ReceiveInt64(v53.f_5());
      ReceiveInt64(v53.f_20());
      ReceiveString(v53.f_6());
      ReceiveInt32(v53.f_7());
      ReceiveInt64(v53.f_4());
      ReceiveInt64(v53.f_1());
      ReceiveInt64(v53.f_13());
      ReceiveInt64(v53.f_0());
      ReceiveInt32(v53.f_11());
      ReceiveInt32(v53.f_19());
      ReceiveString(v53.f_22());
    }
    ReceiveInt32(v52.f_2());
    ReceiveFloat(v52.f_0());
    ReceiveInt64(v51.f_5());
    ReceiveCord(v51.f_1());
    ReceiveUint32(v2.f_7());
    ReceiveInt64(v2.f_3());
    ReceiveInt32(v2.f_16());
    for (const auto& f : v2.f_11()) {
      ReceiveString(f);
    }
    ReceiveString(v2.f_8());
    ReceiveString(v2.f_13());
  }
  ReceiveUint64(v1.f_0());
  ReceiveInt32((*message).f_1());
  ReceiveUint64((*message).f_3());
  for (const auto& v54 : (*message).f_9()) {
    ReceiveInt32(v54.f_0());
  }
  for (const auto& v55 : (*message).f_12()) {
    ReceiveInt64(v55.f_0());
  }
  const Message0::M5& v56 = (*message).f_13();
  ReceiveString(v56.f_0());
  ReceiveInt64(v56.f_2());
  ReceiveBool(v56.f_1());
  ReceiveString((*message).f_0());
  ReceiveBool((*message).f_2());
}

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE0_H_
