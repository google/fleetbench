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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE5_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE5_H_

#include <cstdint>
#include <string>

#include "fleetbench/proto/Message5.pb.h"
#include "fleetbench/proto/receiver.h"
namespace fleetbench::proto {

inline void Message5_Set_1(Message5* message, std::string* s) {
  Message5::M9* v1 = message->mutable_f_18();
  v1->set_f_0(Message5::M9::E1_CONST_1);
  Message5::M9::M14* v2 = v1->mutable_f_2();
  v2->set_f_0(Message5::M9::M14::E4_CONST_2);
  Message5::M2* v3 = message->mutable_f_8();
  Message5::M2::M18* v4 = v3->mutable_f_2();
  Message5::M2::M18::M26* v5 = v4->mutable_f_3();
  v5->set_f_1(0xb6);
  Message5::M2::M18::M26::M32* v7_0 = v5->add_f_7();
  v7_0->set_f_0(s->substr(0, 28));
  v7_0->set_f_2(0x39b1);
  Message5::M2::M18::M26::M38* v7 = v5->mutable_f_8();
  Message5::M2::M18::M26::M38::M49* v9_0 = v7->add_f_1();
  Message5::M2::M18::M26::M38::M49::M67* v9 = v9_0->mutable_f_5();
  v9->set_f_2(0.623623);
  v9->set_f_4(s->substr(0, 15));
  v9_0->set_f_3(0x72);
  v9_0->set_f_1(0xf7);
  v7->set_f_0(0.265959);
  Message5::M2::M18::M26::M27* v10 = v5->mutable_f_6();
  v10->set_f_0(0x12);
  Message5::M2::M18::M23* v11 = v4->mutable_f_2();
  Message5::M2::M18::M23::M33* v12 = v11->mutable_f_23();
  v12->set_f_0(0.666683);
  v11->set_f_6(0x7a479f8135);
  v11->set_f_1(0.656067);
  v11->set_f_8(0.313451);
  Message5::M2::M18::M23::M30* v14 = v11->mutable_f_22();
  Message5::M2::M18::M23::M30::M45* v15 = v14->mutable_f_6();
  Message5::M2::M18::M23::M30::M45::M63* v17_0 = v15->add_f_3();
  Message5::M2::M18::M23::M30::M45::M63::M72* v17 = v17_0->mutable_f_1();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79* v18 = v17->mutable_f_2();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86* v20_0 = v18->add_f_1();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91* v21_0 =
      v20_0->add_f_3();
  v21_0->set_f_1(
      Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91::E29_CONST_3);
  v20_0->set_f_0(0x56);
  Message5::M2::M18::M23::M30::M45::M63::M72::M82* v22 = v17->mutable_f_4();
  Message5::M2::M18::M23::M30::M45::M63::M72::M82::M84* v24_0 = v22->add_f_3();
  Message5::M2::M18::M23::M30::M45::M63::M72::M82::M84::M89* v24 =
      v24_0->mutable_f_1();
  v24->set_f_0(0x21);
  v17_0->set_f_0(Message5::M2::M18::M23::M30::M45::M63::E18_CONST_4);
  Message5::M2::M18::M23::M30::M45::M63* v17_1 = v15->add_f_3();
  Message5::M2::M18::M23::M30::M45::M63::M72* v25 = v17_1->mutable_f_1();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79* v26 = v25->mutable_f_2();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86* v28_0 = v26->add_f_1();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91* v29_0 =
      v28_0->add_f_3();
  Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91::M92* v29 =
      v29_0->mutable_f_6();
  v29->set_f_0(false);
  v29_0->set_f_1(
      Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91::E29_CONST_5);
  v29_0->set_f_2(0xc5f5cdf);
  v26->set_f_0(Message5::M2::M18::M23::M30::M45::M63::M72::M79::E28_CONST_2);
  Message5::M2::M18::M23::M30::M45::M57* v34_0 = v15->add_f_2();
  v34_0->set_f_0(0x8b);
  v11->set_f_5(Message5::M2::M18::M23::E7_CONST_3);
  v11->set_f_12(s->substr(0, 3));
  v11->set_f_9(true);
  v3->set_f_0(s->substr(0, 32));
  message->add_f_1(0x3c);
  message->add_f_0(0x169e494f);
  Message5::M10* v35 = message->mutable_f_21();
  Message5::M10::M20* v36 = v35->mutable_f_8();
  v36->set_f_0(0.060946);
  v36->set_f_1(true);
  Message5::M10::M11* v37 = v35->mutable_f_2();
  v37->set_f_4(0x762ed17399d2eafc);
  Message5::M10::M11::M22* v38 = v37->mutable_f_8();
  Message5::M10::M11::M22::M37* v39 = v38->mutable_f_4();
  v39->set_f_0(s->substr(0, 13));
  Message5::M10::M11::M22::M37::M47* v40 = v39->mutable_f_4();
  v40->set_f_0(0xca);
  v40->set_f_1(0x4cd269d7);
  v40->set_f_2(0xdfeab493);
  v40->set_f_4(0.724998);
  Message5::M10::M11::M22::M37::M47::M55* v41 = v40->mutable_f_9();
  v41->set_f_0(0.465061);
  v38->set_f_1(s->substr(0, 9));
  v38->set_f_0(Message5::M10::M11::M22::E5_CONST_1);
  Message5::M10::M11::M22::M35* v42 = v38->mutable_f_3();
  Message5::M10::M11::M22::M35::M43* v44_0 = v42->add_f_2();
  Message5::M10::M11::M22::M35::M43::M59* v44 = v44_0->mutable_f_1();
  v44->set_f_0(s->substr(0, 22));
  Message5::M10::M11::M25* v45 = v37->mutable_f_9();
  v45->set_f_1(s->substr(0, 2));
  Message5::M10::M11::M25::M40* v46 = v45->mutable_f_8();
  v46->set_f_1(s->substr(0, 9));
  v45->set_f_2(s->substr(0, 30));
  Message5::M10::M11::M25::M34* v47 = v45->mutable_f_7();
  Message5::M10::M11::M25::M34::M53* v49_0 = v47->add_f_4();
  Message5::M10::M11::M25::M34::M53::M68* v49 = v49_0->mutable_f_59();
  v49->set_f_34(0xdb);
  v49->set_f_9(s->substr(0, 9));
  v49->set_f_40(0xb2);
  v49->set_f_29(0x1b);
  v49->set_f_8(false);
  v49->set_f_7(true);
  Message5::M10::M11::M25::M34::M53::M68::M71* v50 = v49->mutable_f_63();
  Message5::M10::M11::M25::M34::M53::M68::M71::M78* v51 = v50->mutable_f_1();
  v51->set_f_0(s->substr(0, 15));
  v49->set_f_14(0xa46e66399dcb8a);
  v49->set_f_31(s->substr(0, 8));
  v49->add_f_23(0xc6);
  v49->add_f_23(0x1a);
  v49->add_f_23(0x685d39);
  v49->add_f_23(0x4b);
  v49->set_f_10(Message5::M10::M11::M25::M34::M53::M68::E20_CONST_2);
  v49->set_f_35(0.892053);
  v49->set_f_11(0x5a1504d8);
  v49->set_f_27(0x18);
  v49->set_f_26(0.379109);
  v49->set_f_25(0.698383);
  uint64_t array_1[8] = {0xd7f9aa12f5a5,     0xca8b94aa6534d067,
                         0x61d1cfaf66c831a2, 0x46f8f5d01003d546,
                         0x49dbd3a3971c8b,   0x14fd4e18f8,
                         0xcfa6aa2562edc91c, 0x3e90aa3a};
  for (auto& value : array_1) v49->add_f_24(value);
  v49->set_f_16(0x14b3);
  v49->set_f_1(0.354816);
  v49->set_f_20(0.389022);
  v49->set_f_22(Message5::M10::M11::M25::M34::M53::M68::E21_CONST_3);
  v49->set_f_30(s->substr(0, 3));
  v49->set_f_5(s->substr(0, 26));
  v49_0->add_f_7(0xc222f1);
  v49_0->add_f_7(0x54);
  v49_0->set_f_12(false);
  v49_0->set_f_16(0xb307);
  v49_0->set_f_31(Message5::M10::M11::M25::M34::M53::E14_CONST_4);
  v49_0->set_f_15(0.747031);
  v49_0->set_f_3(0xfdc7c813);
  v49_0->set_f_32(0x7bcf);
  v49_0->set_f_1(0x64350f5f063712);
  v49_0->add_f_5(Message5::M10::M11::M25::M34::M53::E10_CONST_1);
  v49_0->set_f_8(0.824490);
  v49_0->set_f_21(0xf3972ded);
  v49_0->set_f_28(true);
  v49_0->set_f_9(0x5dbd735132a188);
  Message5::M10::M11::M25::M34::M53* v49_1 = v47->add_f_4();
  Message5::M10::M11::M25::M34::M53::M68* v52 = v49_1->mutable_f_59();
  v52->set_f_10(Message5::M10::M11::M25::M34::M53::M68::E20_CONST_4);
  v52->set_f_16(0xfd43a2a90a5d85);
  v52->set_f_29(0x1b37ed26c2ef7d81);
  v52->set_f_28(0x2c0688c0);
  v52->set_f_22(Message5::M10::M11::M25::M34::M53::M68::E21_CONST_2);
  v52->set_f_43(s->substr(0, 3));
  v52->set_f_14(0x2ed609922169);
  Message5::M10::M11::M25::M34::M53::M68::M71* v53 = v52->mutable_f_63();
  Message5::M10::M11::M25::M34::M53::M68::M71::M78* v54 = v53->mutable_f_1();
  v54->add_f_2(0.456143);
  v54->add_f_2(0.124424);
  v54->add_f_2(0.257301);
  v54->add_f_2(0.034773);
  v54->set_f_1(0.369272);
  int32_t array_2[30] = {0x3c, 0xe9,   0xe2,     0xd1,      0x89,     0xc0a17e,
                         0xb6, 0xa7,   0x6a,     0xe7e328d, 0x6647cf, 0xb2,
                         0xb9, 0xb0,   0x50cd,   0x72,      0x46,     0xd3,
                         0x8,  0xabaf, 0x6c,     0xb8,      0x88,     0x71,
                         0x8,  0xac,   0x1a2185, 0x7d,      0xb717,   0x69895d};
  for (auto& value : array_2) v52->add_f_4(value);
  v52->set_f_0(0.907985);
  v52->set_f_25(0.091172);
  int32_t array_3[20] = {0xd0,     0x75,       0x2c,     0x2654b6d5, 0x53,
                         0x21,     0x6d,       0x1fae00, 0x1d38a584, 0x1,
                         0xa4,     0x18ea2433, 0xcf8c42, 0xdf118a,   0x2746b6c1,
                         0xd66a34, 0x24,       0x94f5,   0x4b7a1816, 0xc3ed2b};
  for (auto& value : array_3) v52->add_f_23(value);
  v52->set_f_20(0.162543);
  v52->set_f_30(s->substr(0, 3));
  v52->set_f_2(0xc7a6);
  v52->set_f_32(0xb1);
  v52->set_f_17(0xad);
  v52->set_f_40(0xcc);
  v52->set_f_31(s->substr(0, 6));
  v52->set_f_38(0xfccc6);
  v52->set_f_42(0.995752);
  v52->set_f_6(0x20505c);
  v52->set_f_5(s->substr(0, 32));
  v52->set_f_26(0.203322);
  v52->set_f_9(s->substr(0, 6));
  v52->set_f_8(true);
  v49_1->set_f_19(false);
  v49_1->set_f_14(0.980008);
  v49_1->set_f_33(0.572423);
  v49_1->set_f_18(0xe5);
  v49_1->set_f_24(0.045651);
  v49_1->set_f_1(0x19);
  v49_1->set_f_25(0xdc);
  v49_1->set_f_13(0xdb);
  v49_1->set_f_23(s->substr(0, 16));
  v49_1->set_f_31(Message5::M10::M11::M25::M34::M53::E14_CONST_3);
  v49_1->set_f_38(s->substr(0, 23));
  v49_1->set_f_6(0x86);
  v49_1->set_f_35(s->substr(0, 3));
  v49_1->set_f_8(0.240536);
  v49_1->set_f_10(Message5::M10::M11::M25::M34::M53::E11_CONST_4);
  Message5::M10::M11::M25::M41* v59_0 = v45->add_f_10();
  v59_0->set_f_0(s->substr(0, 29));
  v37->set_f_5(s->substr(0, 20));
  Message5::M10::M16* v61 = v35->mutable_f_6();
  Message5::M10::M16::M24* v62 = v61->mutable_f_3();
  Message5::M10::M16::M24::M36* v65_0 = v62->add_f_4();
  Message5::M10::M16::M24::M36::M52* v65 = v65_0->mutable_f_4();
  Message5::M10::M16::M24::M36::M52::M65* v67 = v65->mutable_f_5();
  Message5::M10::M16::M24::M36::M52::M65::M76* v68 = v67->mutable_f_1();
  v68->set_f_0(0x401c544b);
  v65->set_f_0(0.203424);
  Message5::M10::M16::M24::M36::M52::M66* v70 = v65->mutable_f_7();
  Message5::M10::M16::M24::M36::M52::M66::M73* v72_0 = v70->add_f_1();
  v72_0->set_f_0(Message5::M10::M16::M24::M36::M52::M66::M73::E23_CONST_3);
  Message5::M10::M16::M24::M36::M48* v74 = v65_0->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M56* v75 = v74->mutable_f_2();
  v75->set_f_0(0.355440);
  Message5::M10::M16::M24::M36::M48::M56::M75* v77_0 = v75->add_f_1();
  v77_0->set_f_0(Message5::M10::M16::M24::M36::M48::M56::M75::E25_CONST_2);
  Message5::M10::M16::M24::M36::M48::M56::M75* v77_1 = v75->add_f_1();
  v77_1->set_f_0(Message5::M10::M16::M24::M36::M48::M56::M75::E25_CONST_3);
  Message5::M10::M16::M24::M36::M48::M54* v79 = v74->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74* v80 = v79->mutable_f_5();
  v80->add_f_2(0x9);
  v80->add_f_2(0xa2);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77* v83_0 = v80->add_f_5();
  v83_0->set_f_1(Message5::M10::M16::M24::M36::M48::M54::M74::M77::E27_CONST_1);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87* v83 =
      v83_0->mutable_f_3();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90* v84 =
      v83->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93* v85 =
      v84->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95* v86 =
      v85->mutable_f_1();
  v86->set_f_11(0x471255b947);
  v86->set_f_32(0x500f0174);
  v86->set_f_16(0xb7d75952a2a542e);
  v86->set_f_4(false);
  v86->set_f_3(0xe7af3104);
  v86->set_f_26(s->substr(0, 15));
  v86->set_f_31(0x2750720a);
  v86->set_f_21(false);
  v86->set_f_25(0x119b);
  v86->set_f_15(0xd204);
  v86->set_f_18(Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::
                    M93::M95::E35_CONST_2);
  v86->set_f_5(0xbfe3);
  v86->set_f_13(false);
  v86->add_f_28(s->substr(0, 17));
  v86->set_f_14(Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::
                    M93::M95::E34_CONST_3);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96*
      v87 = v86->mutable_f_50();
  v87->set_f_0(s->substr(0, 3));
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97* v88 = v87->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98* v89 = v88->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99* v90 = v89->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100* v92_0 = v90->add_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100::M102* v92 = v92_0->mutable_f_5();
  v92->set_f_0(s->substr(0, 4));
  v92_0->set_f_0(s->substr(0, 1));
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100::M101* v93 = v92_0->mutable_f_2();
  v93->set_f_0(0x4);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100* v92_1 = v90->add_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100::M101* v94 = v92_1->mutable_f_2();
  v94->set_f_0(0x65892e6);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100::M102* v95 = v92_1->mutable_f_5();
  v95->set_f_0(s->substr(0, 2));
  v89->set_f_0(0.963761);
  v86->set_f_10(0x61);
  v84->set_f_0(s->substr(0, 4));
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83* v96 =
      v83_0->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88* v98_0 =
      v96->add_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88::M94* v98 =
      v98_0->mutable_f_2();
  v98->set_f_0(0x23);
  v98->add_f_7(Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88::M94::
                   E32_CONST_4);
  Message5::M10::M16::M24::M36* v65_1 = v62->add_f_4();
  Message5::M10::M16::M24::M36::M48* v99 = v65_1->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M56* v102 = v99->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M56::M75* v104_0 = v102->add_f_1();
  v104_0->set_f_0(Message5::M10::M16::M24::M36::M48::M56::M75::E25_CONST_2);
  v102->set_f_0(0.463094);
  Message5::M10::M16::M24::M36::M48::M54* v104 = v99->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74* v105 = v104->mutable_f_5();
  v105->set_f_1(0x80);
  Message5::M10::M16::M24::M36::M48::M54::M74::M80* v106 = v105->mutable_f_6();
  v106->set_f_0(s->substr(0, 3));
  Message5::M10::M16::M24::M36::M48::M54::M74::M77* v108_0 = v105->add_f_5();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87* v108 =
      v108_0->mutable_f_3();
  v108->set_f_0(0xbc);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90* v109 =
      v108->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93* v110 =
      v109->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95* v111 =
      v110->mutable_f_1();
  v111->set_f_6(s->substr(0, 4));
  v111->set_f_31(0x484de167);
  v111->set_f_25(0xa6);
  v111->set_f_3(0x5d3bacff);
  v111->set_f_26(s->substr(0, 17));
  v111->set_f_27(s->substr(0, 8));
  v111->set_f_29(s->substr(0, 1));
  v111->set_f_2(Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::
                    M93::M95::E33_CONST_4);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96*
      v112 = v111->mutable_f_50();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97* v113 = v112->mutable_f_2();
  v113->set_f_0(0x16);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98* v114 = v113->mutable_f_1();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99* v115 = v114->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::M95::M96::
      M97::M98::M99::M100* v117_0 = v115->add_f_1();
  v117_0->set_f_0(s->substr(0, 16));
  v114->set_f_0(0.204641);
  v112->set_f_0(s->substr(0, 2));
  v111->set_f_19(s->substr(0, 12));
  v111->set_f_15(0x14ba);
  v111->set_f_8(0xbf38);
  v108_0->set_f_0(s->substr(0, 1));
  v108_0->set_f_1(
      Message5::M10::M16::M24::M36::M48::M54::M74::M77::E27_CONST_1);
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83* v119 =
      v108_0->mutable_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88* v121_0 =
      v119->add_f_2();
  Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88::M94* v121 =
      v121_0->mutable_f_2();
  v121->set_f_1(0x7628efc4);
  v121->set_f_3(0.860367);
  v121->set_f_0(0xfd18);
  v121->set_f_4(Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88::
                    M94::E31_CONST_2);
  v121->set_f_2(0.642536);
  v121->set_f_5(0xe2c3e0);
  Message5::M10::M16::M24::M36::M52* v122 = v65_1->mutable_f_4();
  Message5::M10::M16::M24::M36::M52::M58* v124 = v122->mutable_f_2();
  v124->set_f_0(0x200612bcc95bf7);
  Message5::M10::M16::M24::M36::M52::M65* v125 = v122->mutable_f_5();
  Message5::M10::M16::M24::M36::M52::M65::M76* v126 = v125->mutable_f_1();
  v126->set_f_1(s->substr(0, 32));
  v126->set_f_3(false);
  v122->set_f_0(0.131911);
  Message5::M10::M16::M24::M36::M52::M66* v127 = v122->mutable_f_7();
  Message5::M10::M16::M24::M36::M52::M66::M73* v129_0 = v127->add_f_1();
  v129_0->set_f_1(Message5::M10::M16::M24::M36::M52::M66::M73::E24_CONST_4);
  Message5::M10::M16::M24::M36::M52::M66::M73* v129_1 = v127->add_f_1();
  v129_1->set_f_0(Message5::M10::M16::M24::M36::M52::M66::M73::E23_CONST_2);
  v129_1->set_f_1(Message5::M10::M16::M24::M36::M52::M66::M73::E24_CONST_3);
  v62->set_f_0(s->substr(0, 29));
  Message5::M10::M16::M24::M31* v138_0 = v62->add_f_3();
  v138_0->set_f_0(0.402708);
  Message5::M7* v139_0 = message->add_f_16();
  v139_0->set_f_0(0x8a);
  Message5::M4* v140_0 = message->add_f_11();
  Message5::M4::M19* v141_0 = v140_0->add_f_1();
  v141_0->set_f_0(s->substr(0, 14));
  Message5::M3* v142_0 = message->add_f_9();
  Message5::M3::M17* v142 = v142_0->mutable_f_1();
  Message5::M3::M17::M21* v143 = v142->mutable_f_1();
  Message5::M3::M17::M21::M42* v145_0 = v143->add_f_2();
  v145_0->set_f_1(0x946386ad14db55);
  Message5::M3::M17::M21::M39* v146_0 = v143->add_f_1();
  v146_0->set_f_0(s->substr(0, 4));
  v143->set_f_0(s->substr(0, 10));
  Message5::M5* v147_0 = message->add_f_12();
  v147_0->set_f_0(0x60406f);
  v147_0->set_f_1(0x36db83e8);
  v147_0->set_f_3(s->substr(0, 32));
  Message5::M5::M12* v147 = v147_0->mutable_f_8();
  v147->set_f_0(0.318976);
  v147_0->set_f_5(s->substr(0, 2));
}

inline void Message5_Get_1(Message5* message) {
  const Message5::M2& v0 = (*message).f_8();
  const Message5::M2::M18& v1 = v0.f_2();
  const Message5::M2::M18::M23& v2 = v1.f_2();
  ReceiveString(v2.f_12());
  ReceiveString(v2.f_10());
  ReceiveInt64(v2.f_0());
  ReceiveString(v2.f_13());
  ReceiveFloat(v2.f_1());
  const Message5::M2::M18::M23::M30& v3 = v2.f_22();
  ReceiveString(v3.f_3());
  ReceiveInt64(v3.f_2());
  ReceiveInt32(v3.f_1());
  const Message5::M2::M18::M23::M30::M45& v4 = v3.f_6();
  ReceiveUint32(v4.f_0());
  for (const auto& v5 : v4.f_2()) {
    ReceiveInt32(v5.f_0());
  }
  for (const auto& v6 : v4.f_3()) {
    const Message5::M2::M18::M23::M30::M45::M63::M72& v7 = v6.f_1();
    ReceiveInt32(v7.f_1());
    ReceiveUint32(v7.f_0());
    const Message5::M2::M18::M23::M30::M45::M63::M72::M79& v8 = v7.f_2();
    ReceiveInt32(v8.f_0());
    for (const auto& v9 : v8.f_1()) {
      ReceiveInt32(v9.f_0());
      for (const auto& v10 : v9.f_3()) {
        ReceiveInt32(v10.f_3());
        ReceiveFloat(v10.f_0());
        ReceiveInt64(v10.f_2());
        ReceiveInt32(v10.f_1());
        const Message5::M2::M18::M23::M30::M45::M63::M72::M79::M86::M91::M92&
            v11 = v10.f_6();
        ReceiveBool(v11.f_0());
      }
    }
    const Message5::M2::M18::M23::M30::M45::M63::M72::M82& v12 = v7.f_4();
    for (const auto& v13 : v12.f_3()) {
      ReceiveInt32(v13.f_0());
      const Message5::M2::M18::M23::M30::M45::M63::M72::M82::M84::M89& v14 =
          v13.f_1();
      ReceiveInt32(v14.f_0());
    }
    ReceiveUint64(v12.f_0());
    ReceiveInt32(v6.f_0());
  }
  ReceiveString(v3.f_0());
  ReceiveDouble(v2.f_8());
  ReceiveBool(v2.f_9());
  ReceiveUint64(v2.f_4());
  ReceiveInt64(v2.f_11());
  ReceiveInt32(v2.f_5());
  ReceiveInt64(v2.f_6());
  const Message5::M2::M18::M23::M33& v15 = v2.f_23();
  ReceiveFloat(v15.f_0());
  for (const auto& v16 : v15.f_1()) {
    ReceiveString(v16.f_0());
    ReceiveString(v16.f_1());
  }
  ReceiveInt32(v2.f_2());
  ReceiveInt64(v2.f_3());
  ReceiveInt64(v2.f_7());
  ReceiveString(v1.f_0());
  const Message5::M2::M18::M26& v17 = v1.f_3();
  ReceiveInt32(v17.f_0());
  ReceiveInt32(v17.f_2());
  for (const auto& v18 : v17.f_7()) {
    ReceiveInt64(v18.f_1());
    ReceiveString(v18.f_0());
    ReceiveDouble(v18.f_3());
    ReceiveInt32(v18.f_2());
  }
  const Message5::M2::M18::M26::M27& v19 = v17.f_6();
  ReceiveInt64(v19.f_0());
  ReceiveInt32(v17.f_1());
  ReceiveInt32(v17.f_3());
  const Message5::M2::M18::M26::M38& v20 = v17.f_8();
  for (const auto& v21 : v20.f_1()) {
    ReceiveInt32(v21.f_3());
    ReceiveInt32(v21.f_1());
    ReceiveInt32(v21.f_2());
    ReceiveUint64(v21.f_0());
    const Message5::M2::M18::M26::M38::M49::M67& v22 = v21.f_5();
    ReceiveFloat(v22.f_2());
    ReceiveInt32(v22.f_5());
    ReceiveFloat(v22.f_0());
    ReceiveInt32(v22.f_1());
    ReceiveString(v22.f_3());
    ReceiveString(v22.f_4());
  }
  ReceiveDouble(v20.f_0());
  ReceiveString(v0.f_0());
  const Message5::M9& v23 = (*message).f_18();
  const Message5::M9::M14& v24 = v23.f_2();
  ReceiveInt32(v24.f_0());
  ReceiveInt32(v23.f_0());
  for (const auto& v25 : (*message).f_11()) {
    ReceiveInt64(v25.f_0());
    for (const auto& v26 : v25.f_1()) {
      ReceiveString(v26.f_0());
    }
  }
  ReceiveUint64((*message).f_3());
  ReceiveString((*message).f_4());
  for (const auto& v27 : (*message).f_12()) {
    ReceiveFloat(v27.f_4());
    ReceiveString(v27.f_5());
    ReceiveString(v27.f_3());
    const Message5::M5::M12& v28 = v27.f_8();
    ReceiveFloat(v28.f_0());
    ReceiveInt64(v27.f_0());
    ReceiveUint32(v27.f_1());
    ReceiveString(v27.f_2());
  }
  for (auto f : (*message).f_1()) {
    ReceiveUint32(f);
  }
  for (auto f : (*message).f_0()) {
    ReceiveInt64(f);
  }
  const Message5::M6& v29 = (*message).f_14();
  ReceiveFloat(v29.f_0());
  for (const auto& v30 : (*message).f_17()) {
    ReceiveFloat(v30.f_0());
  }
  ReceiveUint64((*message).f_5());
  for (const auto& v31 : (*message).f_9()) {
    ReceiveDouble(v31.f_0());
    const Message5::M3::M17& v32 = v31.f_1();
    ReceiveDouble(v32.f_0());
    const Message5::M3::M17::M21& v33 = v32.f_1();
    ReceiveString(v33.f_0());
    for (const auto& v34 : v33.f_2()) {
      ReceiveUint32(v34.f_6());
      ReceiveBool(v34.f_4());
      ReceiveUint64(v34.f_7());
      ReceiveInt64(v34.f_0());
      ReceiveInt64(v34.f_3());
      ReceiveInt32(v34.f_5());
      ReceiveInt64(v34.f_2());
      ReceiveInt64(v34.f_1());
    }
    for (const auto& v35 : v33.f_1()) {
      ReceiveString(v35.f_0());
    }
  }
  for (const auto& v36 : (*message).f_16()) {
    ReceiveInt32(v36.f_0());
  }
  const Message5::M10& v37 = (*message).f_21();
  const Message5::M10::M15& v38 = v37.f_5();
  for (auto f : v38.f_0()) {
    ReceiveFloat(f);
  }
  const Message5::M10::M20& v39 = v37.f_8();
  ReceiveDouble(v39.f_6());
  ReceiveDouble(v39.f_2());
  ReceiveString(v39.f_5());
  ReceiveBool(v39.f_1());
  ReceiveDouble(v39.f_0());
  ReceiveString(v39.f_7());
  ReceiveInt64(v39.f_3());
  ReceiveFloat(v39.f_4());
  const Message5::M10::M11& v40 = v37.f_2();
  ReceiveString(v40.f_5());
  ReceiveFloat(v40.f_1());
  ReceiveUint64(v40.f_4());
  ReceiveInt32(v40.f_3());
  const Message5::M10::M11::M25& v41 = v40.f_9();
  ReceiveString(v41.f_2());
  ReceiveString(v41.f_1());
  ReceiveString(v41.f_4());
  const Message5::M10::M11::M25::M34& v42 = v41.f_7();
  ReceiveString(v42.f_0());
  for (const auto& v43 : v42.f_4()) {
    ReceiveString(v43.f_22());
    ReceiveInt32(v43.f_10());
    ReceiveInt32(v43.f_39());
    ReceiveString(v43.f_35());
    for (auto f : v43.f_5()) {
      ReceiveInt32(f);
    }
    ReceiveInt32(v43.f_31());
    ReceiveInt32(v43.f_34());
    ReceiveBool(v43.f_12());
    ReceiveFloat(v43.f_2());
    ReceiveCord(v43.f_27());
    ReceiveInt32(v43.f_17());
    for (auto f : v43.f_11()) {
      ReceiveInt32(f);
    }
    ReceiveDouble(v43.f_30());
    ReceiveInt32(v43.f_6());
    ReceiveBool(v43.f_19());
    ReceiveUint32(v43.f_26());
    ReceiveInt64(v43.f_4());
    ReceiveFloat(v43.f_24());
    ReceiveInt64(v43.f_1());
    ReceiveString(v43.f_38());
    ReceiveInt64(v43.f_13());
    ReceiveInt32(v43.f_18());
    ReceiveUint64(v43.f_0());
    ReceiveInt64(v43.f_21());
    ReceiveString(v43.f_36());
    ReceiveBool(v43.f_28());
    ReceiveInt32(v43.f_16());
    const Message5::M10::M11::M25::M34::M53::M68& v44 = v43.f_59();
    ReceiveInt64(v44.f_11());
    ReceiveBool(v44.f_18());
    ReceiveFloat(v44.f_42());
    ReceiveUint32(v44.f_34());
    ReceiveString(v44.f_30());
    for (auto f : v44.f_4()) {
      ReceiveInt32(f);
    }
    for (auto f : v44.f_24()) {
      ReceiveUint64(f);
    }
    ReceiveFloat(v44.f_0());
    ReceiveUint64(v44.f_14());
    ReceiveFloat(v44.f_26());
    ReceiveInt32(v44.f_27());
    ReceiveString(v44.f_21());
    const Message5::M10::M11::M25::M34::M53::M68::M71& v45 = v44.f_63();
    ReceiveUint64(v45.f_0());
    const Message5::M10::M11::M25::M34::M53::M68::M71::M78& v46 = v45.f_1();
    ReceiveInt32(v46.f_3());
    ReceiveFloat(v46.f_1());
    ReceiveString(v46.f_0());
    for (auto f : v46.f_2()) {
      ReceiveFloat(f);
    }
    ReceiveUint32(v44.f_40());
    ReceiveInt64(v44.f_38());
    ReceiveBool(v44.f_7());
    ReceiveFloat(v44.f_20());
    ReceiveInt32(v44.f_32());
    ReceiveInt64(v44.f_16());
    ReceiveString(v44.f_12());
    ReceiveString(v44.f_5());
    ReceiveString(v44.f_41());
    for (auto f : v44.f_23()) {
      ReceiveInt32(f);
    }
    ReceiveUint32(v44.f_28());
    ReceiveString(v44.f_9());
    ReceiveInt64(v44.f_6());
    ReceiveBool(v44.f_37());
    ReceiveFloat(v44.f_15());
    ReceiveInt32(v44.f_19());
    ReceiveInt32(v44.f_10());
    ReceiveString(v44.f_31());
    ReceiveInt64(v44.f_2());
    ReceiveFloat(v44.f_35());
    ReceiveInt64(v44.f_39());
    ReceiveInt32(v44.f_22());
    ReceiveString(v44.f_43());
    ReceiveString(v44.f_13());
    ReceiveBool(v44.f_3());
    ReceiveInt64(v44.f_33());
    ReceiveFloat(v44.f_36());
    ReceiveInt32(v44.f_17());
    ReceiveBool(v44.f_8());
    ReceiveInt64(v44.f_29());
    ReceiveFloat(v44.f_25());
    ReceiveFloat(v44.f_1());
    ReceiveInt64(v43.f_3());
    ReceiveInt32(v43.f_25());
    ReceiveString(v43.f_23());
    for (auto f : v43.f_7()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v43.f_9());
    ReceiveInt64(v43.f_20());
    ReceiveFloat(v43.f_8());
    ReceiveInt32(v43.f_37());
    ReceiveFloat(v43.f_15());
    ReceiveInt64(v43.f_32());
    ReceiveFloat(v43.f_29());
    ReceiveFloat(v43.f_33());
    ReceiveDouble(v43.f_14());
  }
  for (const auto& v47 : v42.f_1()) {
    for (const auto& v48 : v47.f_1()) {
      const Message5::M10::M11::M25::M34::M51::M64::M69& v49 = v48.f_2();
      ReceiveInt64(v49.f_0());
      ReceiveInt64(v48.f_0());
    }
    ReceiveBool(v47.f_0());
  }
  for (const auto& v50 : v41.f_10()) {
    ReceiveCord(v50.f_0());
  }
  ReceiveBool(v41.f_3());
  ReceiveInt64(v41.f_5());
  ReceiveInt64(v41.f_0());
  const Message5::M10::M11::M25::M40& v51 = v41.f_8();
  ReceiveInt64(v51.f_0());
  ReceiveUint64(v51.f_3());
  ReceiveString(v51.f_2());
  ReceiveString(v51.f_1());
  const Message5::M10::M11::M22& v52 = v40.f_8();
  const Message5::M10::M11::M22::M37& v53 = v52.f_4();
  const Message5::M10::M11::M22::M37::M47& v54 = v53.f_4();
  ReceiveFloat(v54.f_4());
  const Message5::M10::M11::M22::M37::M47::M55& v55 = v54.f_9();
  ReceiveFloat(v55.f_0());
  ReceiveFloat(v54.f_5());
  ReceiveInt32(v54.f_0());
  ReceiveUint64(v54.f_1());
  ReceiveString(v54.f_3());
  ReceiveInt64(v54.f_6());
  ReceiveInt64(v54.f_2());
  ReceiveString(v53.f_1());
  ReceiveString(v53.f_0());
  const Message5::M10::M11::M22::M35& v56 = v52.f_3();
  ReceiveInt32(v56.f_0());
  for (const auto& v57 : v56.f_2()) {
    ReceiveFloat(v57.f_0());
    const Message5::M10::M11::M22::M35::M43::M59& v58 = v57.f_1();
    ReceiveString(v58.f_0());
  }
  ReceiveString(v52.f_1());
  ReceiveInt32(v52.f_0());
  ReceiveFloat(v40.f_6());
  for (auto f : v40.f_2()) {
    ReceiveUint32(f);
  }
  ReceiveString(v40.f_0());
  ReceiveString(v37.f_0());
  const Message5::M10::M16& v59 = v37.f_6();
  ReceiveFloat(v59.f_0());
  const Message5::M10::M16::M24& v60 = v59.f_3();
  const Message5::M10::M16::M24::M29& v61 = v60.f_2();
  ReceiveFloat(v61.f_0());
  ReceiveString(v60.f_0());
  const Message5::M10::M16::M24::M28& v62 = v60.f_1();
  const Message5::M10::M16::M24::M28::M46& v63 = v62.f_3();
  ReceiveDouble(v63.f_0());
  const Message5::M10::M16::M24::M28::M46::M62& v64 = v63.f_1();
  ReceiveCord(v64.f_0());
  for (const auto& v65 : v62.f_1()) {
    ReceiveFloat(v65.f_0());
  }
  ReceiveDouble(v62.f_0());
  for (const auto& v66 : v60.f_4()) {
    for (int i = 0; i < v66.f_0().size(); i++) {
      ReceiveString(v66.f_0(i));
    }
    const Message5::M10::M16::M24::M36::M48& v67 = v66.f_2();
    const Message5::M10::M16::M24::M36::M48::M61& v68 = v67.f_5();
    const Message5::M10::M16::M24::M36::M48::M61::M70& v69 = v68.f_1();
    ReceiveString(v69.f_0());
    ReceiveUint32(v68.f_0());
    const Message5::M10::M16::M24::M36::M48::M56& v70 = v67.f_2();
    ReceiveFloat(v70.f_0());
    for (const auto& v71 : v70.f_1()) {
      ReceiveInt32(v71.f_0());
    }
    const Message5::M10::M16::M24::M36::M48::M54& v72 = v67.f_1();
    ReceiveFloat(v72.f_1());
    const Message5::M10::M16::M24::M36::M48::M54::M74& v73 = v72.f_5();
    ReceiveInt64(v73.f_0());
    const Message5::M10::M16::M24::M36::M48::M54::M74::M80& v74 = v73.f_6();
    ReceiveString(v74.f_0());
    for (const auto& v75 : v73.f_5()) {
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83& v76 =
          v75.f_2();
      for (const auto& v77 : v76.f_2()) {
        ReceiveInt64(v77.f_0());
        const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M83::M88::M94&
            v78 = v77.f_2();
        for (auto f : v78.f_7()) {
          ReceiveInt32(f);
        }
        ReceiveDouble(v78.f_3());
        ReceiveInt64(v78.f_5());
        ReceiveInt32(v78.f_0());
        ReceiveInt64(v78.f_1());
        ReceiveString(v78.f_6());
        ReceiveFloat(v78.f_2());
        ReceiveInt32(v78.f_4());
      }
      ReceiveInt64(v76.f_0());
      ReceiveString(v75.f_0());
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87& v79 =
          v75.f_3();
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90& v80 =
          v79.f_2();
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93&
          v81 = v80.f_1();
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
          M95& v82 = v81.f_1();
      for (const auto& f : v82.f_28()) {
        ReceiveString(f);
      }
      ReceiveUint64(v82.f_16());
      ReceiveBool(v82.f_13());
      ReceiveInt64(v82.f_1());
      ReceiveInt64(v82.f_30());
      ReceiveUint32(v82.f_23());
      ReceiveInt64(v82.f_24());
      ReceiveInt32(v82.f_10());
      ReceiveInt32(v82.f_2());
      ReceiveUint32(v82.f_31());
      ReceiveString(v82.f_27());
      ReceiveInt64(v82.f_5());
      ReceiveString(v82.f_29());
      ReceiveBool(v82.f_0());
      ReceiveBool(v82.f_21());
      ReceiveInt32(v82.f_15());
      ReceiveInt32(v82.f_3());
      ReceiveString(v82.f_6());
      ReceiveUint64(v82.f_7());
      ReceiveInt32(v82.f_14());
      ReceiveInt32(v82.f_25());
      ReceiveInt64(v82.f_11());
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
          M95::M96& v83 = v82.f_50();
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
          M95::M96::M97& v84 = v83.f_2();
      ReceiveInt32(v84.f_0());
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
          M95::M96::M97::M98& v85 = v84.f_1();
      const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
          M95::M96::M97::M98::M99& v86 = v85.f_2();
      ReceiveInt64(v86.f_0());
      for (const auto& v87 : v86.f_1()) {
        ReceiveString(v87.f_0());
        const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
            M95::M96::M97::M98::M99::M100::M102& v88 = v87.f_5();
        ReceiveString(v88.f_1());
        ReceiveString(v88.f_0());
        ReceiveFloat(v88.f_2());
        const Message5::M10::M16::M24::M36::M48::M54::M74::M77::M87::M90::M93::
            M95::M96::M97::M98::M99::M100::M101& v89 = v87.f_2();
        ReceiveInt32(v89.f_0());
      }
      ReceiveDouble(v85.f_0());
      ReceiveString(v83.f_0());
      ReceiveInt32(v82.f_18());
      ReceiveString(v82.f_19());
      ReceiveString(v82.f_26());
      ReceiveInt64(v82.f_12());
      ReceiveBool(v82.f_4());
      ReceiveUint32(v82.f_32());
      ReceiveInt64(v82.f_9());
      ReceiveInt64(v82.f_8());
      ReceiveDouble(v82.f_20());
      ReceiveString(v82.f_22());
      ReceiveUint32(v82.f_17());
      ReceiveFloat(v81.f_0());
      ReceiveString(v80.f_0());
      ReceiveInt32(v79.f_0());
      ReceiveInt32(v75.f_1());
    }
    ReceiveUint32(v73.f_1());
    for (auto f : v73.f_2()) {
      ReceiveInt32(f);
    }
    ReceiveInt64(v72.f_0());
    ReceiveString(v67.f_0());
    const Message5::M10::M16::M24::M36::M52& v90 = v66.f_4();
    const Message5::M10::M16::M24::M36::M52::M58& v91 = v90.f_2();
    ReceiveInt64(v91.f_0());
    const Message5::M10::M16::M24::M36::M52::M60& v92 = v90.f_3();
    ReceiveBool(v92.f_0());
    const Message5::M10::M16::M24::M36::M52::M66& v93 = v90.f_7();
    ReceiveUint64(v93.f_0());
    for (const auto& v94 : v93.f_1()) {
      ReceiveInt32(v94.f_0());
      ReceiveInt32(v94.f_1());
      ReceiveString(v94.f_3());
      const Message5::M10::M16::M24::M36::M52::M66::M73::M81& v95 = v94.f_6();
      ReceiveFloat(v95.f_0());
      for (const auto& v96 : v95.f_2()) {
        ReceiveBool(v96.f_0());
      }
      ReceiveFloat(v94.f_2());
    }
    ReceiveDouble(v90.f_0());
    const Message5::M10::M16::M24::M36::M52::M65& v97 = v90.f_5();
    ReceiveInt64(v97.f_0());
    const Message5::M10::M16::M24::M36::M52::M65::M76& v98 = v97.f_1();
    ReceiveString(v98.f_1());
    ReceiveInt32(v98.f_0());
    ReceiveBool(v98.f_3());
    for (auto f : v98.f_2()) {
      ReceiveInt32(f);
    }
  }
  for (const auto& v99 : v60.f_3()) {
    ReceiveFloat(v99.f_0());
  }
  ReceiveInt32(v59.f_1());
  for (const auto& v100 : v37.f_4()) {
    ReceiveInt32(v100.f_0());
  }
  ReceiveInt64((*message).f_2());
  const Message5::M1& v101 = (*message).f_7();
  ReceiveCord(v101.f_0());
}

}  // namespace fleetbench::proto
#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE5_H_
