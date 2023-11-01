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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message4.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {

inline void Message4_Set_1(Message4* message, std::string* s) {
  Message4::M3* v1_0 = message->add_f_12();
  v1_0->set_f_2(s->substr(0, 9));
  Message4::M3::M5* v2_0 = v1_0->add_f_6();
  v2_0->set_f_9(s->substr(0, 9));
  Message4::M3::M5::M8* v2 = v2_0->mutable_f_17();
  Message4::M3::M5::M8::M22* v4_0 = v2->add_f_5();
  v4_0->set_f_6(s->substr(0, 431));
  v4_0->add_f_9(s->substr(0, 7));
  v4_0->set_f_4(0xb4);
  v4_0->set_f_0(0.560493);
  Message4::M3::M5::M8::M22::M37* v5 = v4_0->mutable_f_12();
  v5->set_f_0(true);
  Message4::M3::M5::M8::M16* v6 = v2->mutable_f_1();
  Message4::M3::M5::M8::M16::M36* v7 = v6->mutable_f_3();
  v7->set_f_0(s->substr(0, 16));
  Message4::M3::M5::M8::M20* v8 = v2->mutable_f_3();
  Message4::M3::M5::M8::M20::M33* v10_0 = v8->add_f_2();
  v10_0->set_f_0(s->substr(0, 11));
  Message4::M3::M5::M8::M20::M28* v12_0 = v8->add_f_1();
  v12_0->set_f_0(0xa890e56220);
  v2_0->set_f_8(Message4::M3::M5::E3_CONST_1);
  v2_0->set_f_1(true);
  v2_0->set_f_0(0xad);
  v2_0->set_f_5(0x9c);
  v2_0->set_f_2(s->substr(0, 1));
  v2_0->set_f_3(0x79c6a43fd23a8c20);
  Message4::M3::M5::M10* v13_0 = v2_0->add_f_18();
  v13_0->set_f_1(Message4::M3::M5::M10::E6_CONST_2);
  v1_0->set_f_4(0x7e89b8cc);
  v1_0->set_f_1(Message4::M3::E2_CONST_2);
  Message4::M2* v13 = message->mutable_f_8();
  v13->set_f_2(s->substr(0, 11));
  Message4::M2::M6* v14 = v13->mutable_f_8();
  v14->set_f_0(0x8832792c);
  Message4::M2::M6::M9* v15 = v14->mutable_f_4();
  Message4::M2::M6::M9::M23* v16 = v15->mutable_f_1();
  Message4::M2::M6::M9::M23::M30* v19_0 = v16->add_f_3();
  Message4::M2::M6::M9::M23::M30::M47* v19 = v19_0->mutable_f_1();
  v19->add_f_0(0xfe6e0d6);
  v15->set_f_0(0x6cd3c0c68d9ac7);
  v14->set_f_1(Message4::M2::M6::E4_CONST_5);
  Message4::M2::M4* v21 = v13->mutable_f_7();
  v21->set_f_0(s->substr(0, 5));
  v21->set_f_2(0x5af53e);
  Message4::M2::M7* v23 = v13->mutable_f_9();
  Message4::M2::M7::M13* v25_0 = v23->add_f_3();
  v25_0->set_f_0(Message4::M2::M7::M13::E8_CONST_4);
  Message4::M2::M7::M13* v25_1 = v23->add_f_3();
  Message4::M2::M7::M13::M21* v28_0 = v25_1->add_f_1();
  Message4::M2::M7::M13::M21::M35* v29_0 = v28_0->add_f_1();
  v29_0->set_f_0(0x3a);
  Message4::M2::M7::M12* v30_0 = v23->add_f_2();
  Message4::M2::M7::M12::M17* v30 = v30_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25* v31 = v30->mutable_f_8();
  v31->set_f_0(0xef);
  Message4::M2::M7::M12::M17::M25::M48* v34_0 = v31->add_f_3();
  v34_0->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_4);
  v34_0->set_f_18(Message4::M2::M7::M12::M17::M25::M48::E24_CONST_1);
  v34_0->set_f_8(0xc6d522c9a2a9);
  v34_0->set_f_13(s->substr(0, 27));
  v34_0->set_f_22(s->substr(0, 16));
  Message4::M2::M7::M12::M17::M25::M48::M49* v34 = v34_0->mutable_f_52();
  Message4::M2::M7::M12::M17::M25::M48::M49::M56* v35 = v34->mutable_f_19();
  v35->set_f_0(0x623a);
  v34->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v38_0 = v34->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v38 =
      v38_0->mutable_f_3();
  v38->set_f_0(0x40);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v39 =
      v38->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v41_0 =
      v39->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v41 =
      v41_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v43_0 = v41->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v44_0 = v43_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v45_0 = v44_0->add_f_3();
  v45_0->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v46_0 = v45_0->add_f_2();
  v46_0->set_f_1(0x26);
  v44_0->set_f_0(s->substr(0, 6));
  v43_0->set_f_0(0xa8576e45);
  v38_0->set_f_0(s->substr(0, 7));
  v34->set_f_8(Message4::M2::M7::M12::M17::M25::M48::M49::E29_CONST_3);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v47 = v34->mutable_f_21();
  v47->set_f_0(0xd6);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v48 = v47->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v49 =
      v48->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66* v50 =
      v49->mutable_f_5();
  v50->set_f_0(0x3d);
  Message4::M2::M7::M12::M17::M25::M48::M50* v52_0 = v34_0->add_f_54();
  Message4::M2::M7::M12::M17::M25::M48::M50::M51* v54_0 = v52_0->add_f_6();
  v54_0->set_f_0(0xcf);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v55_0 = v52_0->add_f_12();
  v55_0->set_f_2(0x43);
  v55_0->set_f_60(0.853184);
  v55_0->set_f_58(s->substr(0, 6));
  v55_0->set_f_27(0xbb4c7a79);
  v55_0->set_f_36(0x6e7c42e8);
  v55_0->set_f_46(s->substr(0, 6));
  v55_0->set_f_59(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E35_CONST_1);
  v55_0->set_f_24(s->substr(0, 24));
  v55_0->set_f_0(0x36);
  v55_0->set_f_1(0.804225);
  v55_0->add_f_18(s->substr(0, 6));
  v55_0->set_f_16(s->substr(0, 3));
  v55_0->set_f_31(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E33_CONST_1);
  v55_0->set_f_3(s->substr(0, 25));
  v55_0->set_f_37(0xb1a01e);
  v55_0->set_f_52(0.992456);
  v55_0->set_f_47(0x53c3506b8bdf39db);
  v55_0->set_f_32(0x4f57943c);
  v55_0->set_f_5(0.018659);
  v55_0->set_f_54(0x8d);
  v55_0->set_f_13(0x25);
  v55_0->set_f_30(0x9c);
  v55_0->set_f_48(0xeb);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v55_1 = v52_0->add_f_12();
  v55_1->set_f_61(0x9);
  v55_1->set_f_47(0x6f063721450a0b47);
  v55_1->set_f_33(s->substr(0, 11));
  v55_1->set_f_0(0x5);
  v55_1->set_f_39(0x53);
  v55_1->set_f_48(0x84);
  v55_1->set_f_19(0x4c);
  v55_1->set_f_25(s->substr(0, 37));
  v55_1->set_f_26(0x40f0);
  v55_1->set_f_7(0.372704);
  v55_1->set_f_4(s->substr(0, 5));
  v55_1->set_f_13(0xd8);
  v55_1->set_f_35(0.505697);
  v55_1->set_f_55(0xe);
  v55_1->set_f_1(0.013274);
  v55_1->set_f_37(0x8b7e22c625);
  v55_1->set_f_43(s->substr(0, 8));
  v55_1->set_f_2(0xcd46);
  v55_1->set_f_12(0x1e84);
  v55_1->set_f_60(0.030236);
  v55_1->set_f_58(s->substr(0, 2));
  v55_1->set_f_66(0.790367);
  v55_1->set_f_21(0x29c742df);
  v55_1->set_f_31(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E33_CONST_4);
  v55_1->set_f_10(0x3268);
  v55_1->set_f_59(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E35_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59* v56 =
      v55_1->mutable_f_96();
  v56->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59::E36_CONST_2);
  v55_1->set_f_28(s->substr(0, 12));
  v55_1->set_f_51(0x79178c70);
  v55_1->set_f_46(s->substr(0, 2));
  v55_1->set_f_36(0x7ff6afe8);
  v55_1->set_f_57(0xe3cbade);
  v55_1->set_f_6(0xef);
  v55_1->set_f_67(0x6);
  v55_1->set_f_11(0.619532);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v59_1 = v52_0->add_f_10();
  v59_1->set_f_0(0x276841c903cc2e54);
  v52_0->set_f_4(0xeca7c2c6d);
  v34_0->set_f_32(0xb5);
  v34_0->set_f_17(s->substr(0, 1));
  v34_0->set_f_24(s->substr(0, 7));
  v34_0->set_f_2(0xe);
  v34_0->set_f_11(0xe);
  v34_0->set_f_1(0x24479b440d0fe0);
  v34_0->set_f_23(s->substr(0, 26));
  v34_0->set_f_28(s->substr(0, 3));
  v34_0->add_f_27(0xef);
  v34_0->add_f_27(0x9f);
  v34_0->set_f_7(0x24);
  v30->set_f_3(0xc165c5f4ac);
  v30->set_f_0(0.426469);
  v30->set_f_1(s->substr(0, 26));
  Message4::M2::M7::M12::M19* v62 = v30_0->mutable_f_2();
  Message4::M2::M7::M12::M19::M40* v66_0 = v62->add_f_10();
  v66_0->set_f_0(0x1c405445b49cb389);
  Message4::M2::M7::M12::M19::M29* v67_0 = v62->add_f_3();
  v67_0->set_f_0(false);
  Message4::M2::M7::M12::M19::M31* v68 = v62->mutable_f_6();
  Message4::M2::M7::M12::M19::M31::M41* v70_0 = v68->add_f_1();
  v70_0->set_f_0(s->substr(0, 13));
  Message4::M2::M7::M12* v30_1 = v23->add_f_2();
  Message4::M2::M7::M12::M19* v71 = v30_1->mutable_f_2();
  Message4::M2::M7::M12::M19::M29* v73_0 = v71->add_f_3();
  v73_0->set_f_0(false);
  Message4::M2::M7::M12::M19::M40* v75_0 = v71->add_f_10();
  v75_0->set_f_0(0xabe534aaf2c46435);
  Message4::M2::M7::M12::M19::M27* v75 = v71->mutable_f_1();
  v75->set_f_0(0x2d);
  Message4::M2::M7::M12::M19::M31* v76 = v71->mutable_f_6();
  Message4::M2::M7::M12::M19::M31::M45* v78_0 = v76->add_f_3();
  v78_0->set_f_0(s->substr(0, 4));
  v76->set_f_0(0xa4);
  Message4::M2::M7::M12::M19::M31::M41* v79_0 = v76->add_f_1();
  v79_0->set_f_0(s->substr(0, 4));
  Message4::M2::M7::M12::M17* v80 = v30_1->mutable_f_1();
  v80->set_f_0(0.329059);
  Message4::M2::M7::M12::M17::M25* v81 = v80->mutable_f_8();
  Message4::M2::M7::M12::M17::M25::M43* v83_0 = v81->add_f_1();
  v83_0->set_f_0(0x6ede9505533844);
  Message4::M2::M7::M12::M17::M25::M48* v84_0 = v81->add_f_3();
  v84_0->add_f_27(0x6ba6);
  Message4::M2::M7::M12::M17::M25::M48::M50* v85_0 = v84_0->add_f_54();
  v85_0->set_f_0(0.793134);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v87_0 = v85_0->add_f_12();
  v87_0->set_f_52(0.277261);
  v87_0->set_f_29(0xb511);
  v87_0->set_f_7(0.508354);
  v87_0->set_f_54(0xed);
  v87_0->set_f_32(0x24b3f44c);
  v87_0->set_f_61(0x89e4);
  v87_0->set_f_24(s->substr(0, 8));
  v87_0->set_f_2(0xe26a896);
  v87_0->set_f_12(0xea);
  v87_0->set_f_13(0xd3f318c842367c);
  v87_0->set_f_43(s->substr(0, 7));
  v87_0->set_f_58(s->substr(0, 4));
  v87_0->set_f_20(s->substr(0, 5));
  v87_0->set_f_64(false);
  v87_0->set_f_41(0xb6);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59* v87 =
      v87_0->mutable_f_96();
  v87->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59::E36_CONST_5);
  v87_0->set_f_8(s->substr(0, 19));
  v87_0->set_f_3(s->substr(0, 4));
  v87_0->set_f_62(0x3b);
  v87_0->set_f_23(true);
  v87_0->set_f_5(0.511636);
  v87_0->set_f_16(s->substr(0, 35));
  v87_0->set_f_66(0.612395);
  v87_0->set_f_39(0xa9);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v87_1 = v85_0->add_f_12();
  v87_1->set_f_28(s->substr(0, 1));
  v87_1->set_f_55(0xb6);
  v87_1->set_f_67(0x1b8c);
  v87_1->set_f_10(0xf0);
  v87_1->set_f_33(s->substr(0, 18));
  v87_1->set_f_48(0x299b2a03);
  v87_1->set_f_43(s->substr(0, 75));
  v87_1->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_2);
  v87_1->set_f_57(0xfc426e);
  v87_1->set_f_46(s->substr(0, 23367));
  v87_1->set_f_11(0.712192);
  v87_1->set_f_37(0x6d15d92a0adeda);
  v87_1->set_f_29(0x54bdc26e39d8c8c9);
  v87_1->set_f_49(s->substr(0, 5));
  v87_1->set_f_7(0.805224);
  v87_1->set_f_51(0x6a);
  v87_1->set_f_45(s->substr(0, 7));
  v87_1->set_f_61(0xf0);
  v87_1->set_f_14(0xcd);
  v87_1->set_f_66(0.457296);
  v87_1->set_f_54(0xe5);
  v87_1->set_f_32(0x7833f68f);
  v87_1->set_f_25(s->substr(0, 11));
  v87_1->set_f_27(0xcc);
  v87_1->set_f_15(0.716976);
  Message4::M2::M7::M12::M17::M25::M48::M50::M53* v91 = v85_0->mutable_f_8();
  v91->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M50::M53::E31_CONST_5);
  v84_0->set_f_30(0x9c);
  v84_0->set_f_19(s->substr(0, 8));
  v84_0->set_f_34(0.984617);
  v84_0->set_f_25(0x1abf);
  v84_0->set_f_31(0x65c23cb421fc3e35);
  v84_0->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_4);
  v84_0->set_f_26(true);
  v84_0->set_f_14(s->substr(0, 13));
  Message4::M2::M7::M12::M17::M25::M48::M49* v92 = v84_0->mutable_f_52();
  v92->set_f_4(Message4::M2::M7::M12::M17::M25::M48::M49::E27_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v94_0 = v92->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v94 =
      v94_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v95 =
      v94->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v97_0 =
      v95->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v97 =
      v97_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v99_0 = v97->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v100_0 = v99_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v101_0 = v100_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v103_0 = v101_0->add_f_1();
  v103_0->set_f_0(s->substr(0, 31));
  v101_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v101_1 = v100_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v105_0 = v101_1->add_f_2();
  v105_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::
                      M65::M67::M68::M69::M70::M72::E39_CONST_2);
  v100_0->set_f_0(s->substr(0, 17));
  v97->set_f_1(0x94);
  v97_0->set_f_0(false);
  v94_0->set_f_0(s->substr(0, 461));
  Message4::M2::M7::M12::M17::M25::M48::M49::M56* v105 = v92->mutable_f_19();
  v105->set_f_0(0xb79c56339dedb7);
  v92->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_4);
  v92->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_4);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v107 = v92->mutable_f_21();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v108 =
      v107->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v109 =
      v108->mutable_f_2();
  v109->set_f_1(0.700306);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66* v110 =
      v109->mutable_f_5();
  v110->set_f_0(0x629cbbd5);
  v109->set_f_0(s->substr(0, 3));
  v108->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::E37_CONST_5);
  v92->add_f_2(0xa);
  v92->set_f_5(0x15);
  v92->set_f_1(0x8880240743cc30);
  v84_0->set_f_16(Message4::M2::M7::M12::M17::M25::M48::E23_CONST_4);
  v84_0->set_f_29(s->substr(0, 2851));
  v84_0->set_f_9(0.634370);
  v84_0->set_f_22(s->substr(0, 12));
  v84_0->add_f_3(s->substr(0, 2));
  v84_0->add_f_3(s->substr(0, 13));
  v84_0->add_f_3(s->substr(0, 7));
  v84_0->add_f_3(s->substr(0, 2));
  Message4::M2::M7::M12::M17::M25::M48* v84_1 = v81->add_f_3();
  v84_1->set_f_22(s->substr(0, 116));
  v84_1->set_f_33(0.905681);
  v84_1->set_f_4(0x9c1a);
  v84_1->set_f_37(0x8e);
  Message4::M2::M7::M12::M17::M25::M48::M49* v111 = v84_1->mutable_f_52();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v113_0 = v111->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v113 =
      v113_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v114 =
      v113->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v116_0 =
      v114->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v116 =
      v116_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v118_0 = v116->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v119_0 = v118_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v120_0 = v119_0->add_f_3();
  v120_0->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v122_0 = v120_0->add_f_2();
  v122_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::
                      M65::M67::M68::M69::M70::M72::E39_CONST_2);
  v119_0->set_f_0(s->substr(0, 1));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v119_1 = v118_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v123_0 = v119_1->add_f_3();
  v123_0->set_f_0(true);
  v116->set_f_1(0x59fd2057f5);
  v116->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                    M67::E38_CONST_3);
  v116_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v116_1 =
      v114->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v125 =
      v116_1->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v127_0 = v125->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v128_0 = v127_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v129_0 = v128_0->add_f_3();
  v129_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v130_0 = v129_0->add_f_2();
  v130_0->set_f_1(0x678355a670);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v131_0 = v129_0->add_f_1();
  v131_0->set_f_0(s->substr(0, 34));
  v127_0->set_f_0(0xdb59);
  v125->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                    M67::E38_CONST_4);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v131 = v111->mutable_f_21();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v132 =
      v131->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v133 =
      v132->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66* v134 =
      v133->mutable_f_5();
  v134->set_f_0(0x765fb382);
  v131->set_f_0(0x5f);
  Message4::M2::M7::M12::M17::M25::M48::M49::M56* v135 = v111->mutable_f_19();
  Message4::M2::M7::M12::M17::M25::M48::M49::M56::M60* v137_0 = v135->add_f_3();
  v137_0->set_f_0(true);
  v111->set_f_1(0x85);
  v111->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_2);
  v111->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_1);
  v111->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_2);
  v111->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_2);
  v111->set_f_7(0xec594cd494);
  v111->set_f_8(Message4::M2::M7::M12::M17::M25::M48::M49::E29_CONST_3);
  v84_1->set_f_24(s->substr(0, 5));
  v84_1->set_f_5(0x32);
  v84_1->set_f_12(0.007163);
  v84_1->set_f_11(0xb565);
  v84_1->add_f_3(s->substr(0, 7));
  v84_1->set_f_35(Message4::M2::M7::M12::M17::M25::M48::E25_CONST_3);
  Message4::M2::M7::M12::M17::M25::M48::M50* v138_0 = v84_1->add_f_54();
  v138_0->set_f_2(0xaf);
  Message4::M2::M7::M12::M17::M25::M48::M50::M53* v139 = v138_0->mutable_f_8();
  v139->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M50::M53::E31_CONST_3);
  v138_0->set_f_3(0xfb3522);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v142_0 = v138_0->add_f_12();
  v142_0->set_f_51(0x21b3acc362f2dbf);
  v142_0->set_f_40(s->substr(0, 3));
  v142_0->set_f_38(s->substr(0, 26));
  v142_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_2);
  v142_0->set_f_43(s->substr(0, 16));
  v142_0->set_f_60(0.715403);
  v142_0->set_f_26(0xfbe0c2ce30938f);
  v142_0->set_f_61(0x80);
  v142_0->set_f_16(s->substr(0, 16));
  v142_0->set_f_63(s->substr(0, 4));
  v142_0->set_f_32(0x37f36c);
  v142_0->set_f_29(0x67372447);
  v142_0->set_f_39(0x83);
  v142_0->add_f_22(s->substr(0, 6));
  v142_0->set_f_48(0x4e);
  v142_0->set_f_59(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E35_CONST_1);
  v142_0->set_f_55(0x5d79);
  v142_0->set_f_37(0xebc096f8);
  v142_0->set_f_9(0xb5);
  v142_0->set_f_8(s->substr(0, 25));
  v142_0->set_f_4(s->substr(0, 7));
  v142_0->set_f_31(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E33_CONST_4);
  v142_0->set_f_2(0x45);
  v142_0->add_f_50(0x2df12af6701226a5);
  v142_0->add_f_50(0x5e8062ed811076ab);
  v142_0->add_f_50(0x102625e3577dc527);
  v142_0->add_f_50(0xe4de5788848f454);
  v142_0->set_f_41(0x8206);
  v142_0->set_f_12(0x5c);
  v142_0->set_f_34(s->substr(0, 31));
  v142_0->set_f_10(0x48f548fe);
  v142_0->set_f_0(0x45);
  v142_0->add_f_18(s->substr(0, 7));
  v142_0->set_f_46(s->substr(0, 6));
  v142_0->set_f_23(true);
  Message4::M2::M7::M12::M17::M25::M48::M50::M51* v144_0 = v138_0->add_f_6();
  v144_0->set_f_0(0x691a0061b77e);
  v84_1->set_f_8(0xeb);
  v84_1->set_f_13(s->substr(0, 29));
  v84_1->set_f_17(s->substr(0, 41));
  v84_1->set_f_30(0xf0);
  v84_1->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_5);
  v80->set_f_3(0x5105a606);
  Message4::M2::M7::M15* v147 = v23->mutable_f_5();
  v147->set_f_98(0x6a);
  v147->set_f_20(0.042105);
  v147->set_f_64(0x8cf6f617dc9c69b3);
  v147->set_f_67(0x4f358);
  v147->set_f_4(0.334674);
  v147->set_f_16(0x80);
  v147->set_f_78(0xe3d64a2e9157be92);
  v147->set_f_35(s->substr(0, 8));
  v147->set_f_30(s->substr(0, 3));
  v147->set_f_40(true);
  v147->set_f_44(s->substr(0, 22));
  v147->set_f_19(0x7f807a7e);
  v147->set_f_93(0x2d5ce7b6);
  v147->set_f_91(s->substr(0, 24));
  v147->set_f_73(0x7a);
  v147->set_f_51(s->substr(0, 5));
  v147->set_f_72(0.361414);
  Message4::M2::M7::M15::M18* v149_0 = v147->add_f_158();
  Message4::M2::M7::M15::M18::M38* v150_0 = v149_0->add_f_2();
  v150_0->set_f_0(0x71);
  Message4::M2::M7::M15::M18::M38* v150_1 = v149_0->add_f_2();
  v150_1->set_f_1(0x6fecded9a6);
  v147->set_f_1(s->substr(0, 6));
  v147->set_f_0(0x51);
  v147->set_f_37(s->substr(0, 12));
  v147->set_f_86(0x79003107);
  v147->set_f_17(0x2);
  v147->set_f_92(s->substr(0, 20));
  v147->set_f_36(false);
  v147->set_f_79(0x5b);
  v147->set_f_39(0xc9);
  v147->set_f_60(0xba);
  v147->set_f_76(Message4::M2::M7::M15::E14_CONST_3);
  v147->set_f_26(s->substr(0, 15));
  v147->set_f_94(s->substr(0, 11));
  v147->set_f_104(s->substr(0, 7));
  v147->set_f_65(0.449375);
  v147->set_f_85(s->substr(0, 6));
  v147->set_f_105(Message4::M2::M7::M15::E18_CONST_4);
  v147->set_f_102(0x33c577);
  v147->set_f_89(0x8ba4a942);
  v147->set_f_95(0x55);
  v147->set_f_12(0xe1);
  v147->set_f_97(s->substr(0, 11));
  v147->set_f_77(Message4::M2::M7::M15::E15_CONST_5);
  v147->set_f_54(true);
  v147->set_f_52(s->substr(0, 5));
  v147->set_f_84(s->substr(0, 20));
  Message4::M1* v151_1 = message->add_f_7();
  v151_1->set_f_0(s->substr(0, 20));
}

inline void Message4_Set_2(Message4* message, std::string* s) {
  Message4::M1* v1_0 = message->add_f_7();
  v1_0->set_f_0(s->substr(0, 5));
  Message4::M3* v2_0 = message->add_f_12();
  Message4::M3::M5* v3_0 = v2_0->add_f_6();
  Message4::M3::M5::M10* v4_0 = v3_0->add_f_18();
  v4_0->set_f_2(Message4::M3::M5::M10::E7_CONST_2);
  v3_0->set_f_4(0xd51cb4f8);
  Message4::M3::M5::M8* v4 = v3_0->mutable_f_17();
  Message4::M3::M5::M8::M22* v8_0 = v4->add_f_5();
  Message4::M3::M5::M8::M22::M32* v8 = v8_0->mutable_f_11();
  v8->set_f_0(0.476658);
  v8_0->set_f_3(0x4f);
  v8_0->set_f_6(s->substr(0, 5));
  v8_0->set_f_0(0.553437);
  v8_0->set_f_8(0.968735);
  v8_0->set_f_1(Message4::M3::M5::M8::M22::E19_CONST_3);
  Message4::M3::M5::M8::M20* v10 = v4->mutable_f_3();
  Message4::M3::M5::M8::M20::M33* v12_0 = v10->add_f_2();
  Message4::M3::M5::M8::M20::M33::M46* v13_0 = v12_0->add_f_2();
  v13_0->set_f_0(0.605070);
  Message4::M3::M5::M8::M20::M28* v14_0 = v10->add_f_1();
  v14_0->set_f_0(0x4d48);
  Message4::M3::M5::M8::M20::M28* v14_1 = v10->add_f_1();
  v14_1->set_f_0(0xc935832d);
  v3_0->set_f_2(s->substr(0, 1));
  Message4::M2* v14 = message->mutable_f_8();
  Message4::M2::M4* v15 = v14->mutable_f_7();
  v15->set_f_2(0xeb2cdd);
  v15->set_f_0(s->substr(0, 11));
  Message4::M2::M6* v17 = v14->mutable_f_8();
  v17->set_f_2(0x1ea28b48091abc);
  Message4::M2::M6::M9* v19 = v17->mutable_f_4();
  Message4::M2::M6::M9::M23* v20 = v19->mutable_f_1();
  Message4::M2::M6::M9::M23::M24* v23 = v20->mutable_f_2();
  v23->set_f_0(s->substr(0, 5));
  v20->set_f_0(false);
  v17->set_f_1(Message4::M2::M6::E4_CONST_4);
  v14->set_f_2(s->substr(0, 51));
  Message4::M2::M7* v24 = v14->mutable_f_9();
  Message4::M2::M7::M15* v25 = v24->mutable_f_5();
  v25->set_f_42(0xb06b2f);
  v25->set_f_54(false);
  v25->set_f_50(s->substr(0, 7));
  v25->set_f_72(0.890137);
  v25->set_f_59(0.483862);
  v25->set_f_80(0.775813);
  v25->set_f_93(0x108f);
  v25->set_f_40(false);
  v25->set_f_60(0xa0);
  v25->set_f_12(0xeb);
  Message4::M2::M7::M15::M18* v27_0 = v25->add_f_158();
  Message4::M2::M7::M15::M18::M38* v28_0 = v27_0->add_f_2();
  v28_0->set_f_1(0x98db6496);
  v25->set_f_96(s->substr(0, 29));
  v25->set_f_71(0x259fb326e20f54fe);
  v25->set_f_22(0.607680);
  v25->set_f_36(true);
  v25->set_f_74(0x6cb7df2cc3e091d9);
  v25->set_f_13(0xfa);
  v25->set_f_90(s->substr(0, 3));
  v25->set_f_84(s->substr(0, 2));
  v25->set_f_33(s->substr(0, 11));
  v25->set_f_87(s->substr(0, 9));
  v25->set_f_73(0xdc);
  v25->set_f_27(0x3e);
  v25->set_f_41(false);
  v25->set_f_45(0x66);
  v25->set_f_44(s->substr(0, 22));
  v25->set_f_65(0.500136);
  v25->set_f_49(0.404037);
  v25->set_f_38(0xb242594d);
  v25->add_f_56(Message4::M2::M7::M15::E13_CONST_5);
  v25->add_f_56(Message4::M2::M7::M15::E13_CONST_5);
  v25->set_f_46(Message4::M2::M7::M15::E12_CONST_3);
  v25->set_f_101(0.247054);
  v25->set_f_48(false);
  v25->set_f_6(false);
  v25->set_f_25(true);
  v25->add_f_62(0xc6);
  v25->set_f_10(false);
  v25->set_f_55(s->substr(0, 31));
  v25->set_f_5(0xebcf51f);
  v25->set_f_14(s->substr(0, 1));
  Message4::M2::M7::M12* v29_0 = v24->add_f_2();
  Message4::M2::M7::M12::M19* v29 = v29_0->mutable_f_2();
  Message4::M2::M7::M12::M19::M27* v30 = v29->mutable_f_1();
  v30->set_f_0(0x84);
  Message4::M2::M7::M12::M19::M31* v31 = v29->mutable_f_6();
  Message4::M2::M7::M12::M19::M31::M45* v33_0 = v31->add_f_3();
  v33_0->set_f_0(s->substr(0, 4));
  v31->set_f_0(0xb4);
  Message4::M2::M7::M12::M17* v38 = v29_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M26* v39 = v38->mutable_f_9();
  Message4::M2::M7::M12::M17::M26::M42* v40 = v39->mutable_f_2();
  v40->set_f_0(true);
  v39->set_f_0(false);
  int array_0[22] = {12, 8, 15, 7, 4,  12, 27, 25, 29, 1, 10,
                     3,  8, 7,  1, 12, 6,  7,  8,  5,  8, 81};
  for (size_t i = 0; i < 22; i++) v38->add_f_5(s->substr(0, array_0[i]));
  Message4::M2::M7::M12::M17::M25* v42 = v38->mutable_f_8();
  Message4::M2::M7::M12::M17::M25::M48* v45_0 = v42->add_f_3();
  v45_0->set_f_24(s->substr(0, 2));
  v45_0->set_f_7(0x23a220d8);
  v45_0->set_f_4(0xdf);
  v45_0->set_f_19(s->substr(0, 5));
  v45_0->set_f_12(0.438535);
  v45_0->add_f_15(Message4::M2::M7::M12::M17::M25::M48::E22_CONST_2);
  v45_0->add_f_15(Message4::M2::M7::M12::M17::M25::M48::E22_CONST_3);
  v45_0->add_f_15(Message4::M2::M7::M12::M17::M25::M48::E22_CONST_2);
  v45_0->add_f_15(Message4::M2::M7::M12::M17::M25::M48::E22_CONST_4);
  v45_0->set_f_38(0x20);
  v45_0->set_f_18(Message4::M2::M7::M12::M17::M25::M48::E24_CONST_4);
  v45_0->set_f_33(0.570772);
  v45_0->set_f_37(0xd9d2);
  Message4::M2::M7::M12::M17::M25::M48::M50* v46_0 = v45_0->add_f_54();
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v47_0 = v46_0->add_f_12();
  v47_0->set_f_58(s->substr(0, 16));
  v47_0->set_f_23(true);
  v47_0->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_4);
  v47_0->set_f_8(s->substr(0, 16));
  v47_0->set_f_52(0.539420);
  v47_0->set_f_2(0xa8);
  v47_0->set_f_21(0x62);
  v47_0->set_f_64(false);
  v47_0->set_f_15(0.403052);
  v47_0->set_f_35(0.467342);
  v47_0->set_f_19(0xea);
  v47_0->set_f_46(s->substr(0, 88));
  v47_0->add_f_56(0x13);
  v47_0->set_f_38(s->substr(0, 1));
  v47_0->set_f_26(0x99);
  v47_0->set_f_37(0xbe);
  v47_0->set_f_63(s->substr(0, 3));
  v47_0->set_f_28(s->substr(0, 13));
  v47_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_3);
  v47_0->add_f_22(s->substr(0, 1));
  v47_0->set_f_32(0x4a3203ef);
  v47_0->set_f_11(0.923445);
  v47_0->set_f_48(0x6bb2101b240750bb);
  v47_0->set_f_51(0x29);
  v47_0->set_f_24(s->substr(0, 16));
  v46_0->set_f_3(0x7c);
  v46_0->set_f_4(0x2fe710e7);
  Message4::M2::M7::M12::M17::M25::M48::M50::M54* v51_0 = v46_0->add_f_9();
  v51_0->set_f_0(s->substr(0, 2));
  v45_0->set_f_16(Message4::M2::M7::M12::M17::M25::M48::E23_CONST_3);
  v45_0->set_f_35(Message4::M2::M7::M12::M17::M25::M48::E25_CONST_1);
  v45_0->set_f_22(s->substr(0, 3));
  v45_0->set_f_1(0x213d);
  Message4::M2::M7::M12::M17::M25::M48::M49* v52 = v45_0->mutable_f_52();
  v52->set_f_9(Message4::M2::M7::M12::M17::M25::M48::M49::E30_CONST_4);
  v52->set_f_3(false);
  v52->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_3);
  v52->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v56_0 = v52->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v56 =
      v56_0->mutable_f_3();
  v56->set_f_0(0x370f);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v57 =
      v56->mutable_f_2();
  v57->set_f_0(s->substr(0, 14));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v59_0 =
      v57->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v59 =
      v59_0->mutable_f_1();
  v59->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                   M67::E38_CONST_3);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v61_0 = v59->add_f_2();
  v61_0->set_f_0(0x43);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v62_0 = v61_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v63_0 = v62_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v64_0 = v63_0->add_f_2();
  v64_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                     M67::M68::M69::M70::M72::E39_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v63_1 = v62_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v66_0 = v63_1->add_f_1();
  v66_0->set_f_0(s->substr(0, 15));
  v63_1->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v67_0 = v63_1->add_f_2();
  v67_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                     M67::M68::M69::M70::M72::E39_CONST_1);
  v62_0->set_f_0(s->substr(0, 31));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v62_1 = v61_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v68_0 = v62_1->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v69_0 = v68_0->add_f_2();
  v69_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                     M67::M68::M69::M70::M72::E39_CONST_1);
  v56_0->set_f_0(s->substr(0, 22));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v56_1 = v52->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v70 =
      v56_1->mutable_f_3();
  v70->set_f_0(0x29536332b8cfb019);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v71 =
      v70->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v73_0 =
      v71->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v73 =
      v73_0->mutable_f_1();
  v73->set_f_1(0x23c98c1eef);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v75_0 = v73->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v76_0 = v75_0->add_f_2();
  v76_0->set_f_0(s->substr(0, 30));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v77_0 = v76_0->add_f_3();
  v77_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v78_0 = v77_0->add_f_2();
  v78_0->set_f_1(0xf9ccad6b0b5b534a);
  v78_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                     M67::M68::M69::M70::M72::E39_CONST_1);
  v73->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                   M67::E38_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v79 = v52->mutable_f_21();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v80 = v79->mutable_f_3();
  v80->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::E37_CONST_2);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v81 =
      v80->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66* v82 =
      v81->mutable_f_5();
  v82->set_f_0(0xc1947f4);
  v81->set_f_0(s->substr(0, 22));
  v52->set_f_8(Message4::M2::M7::M12::M17::M25::M48::M49::E29_CONST_4);
  v45_0->set_f_17(s->substr(0, 2));
  v45_0->set_f_10(0xad);
  v29_0->set_f_0(0x2b15677f);
  Message4::M2::M7::M12* v29_1 = v24->add_f_2();
  Message4::M2::M7::M12::M19* v83 = v29_1->mutable_f_2();
  Message4::M2::M7::M12::M19::M31* v84 = v83->mutable_f_6();
  Message4::M2::M7::M12::M19::M31::M41* v87_0 = v84->add_f_1();
  v87_0->set_f_0(s->substr(0, 4));
  v84->set_f_0(0x83d82b);
  Message4::M2::M7::M12::M19::M29* v90_0 = v83->add_f_3();
  v90_0->set_f_0(true);
  Message4::M2::M7::M12::M17* v93 = v29_1->mutable_f_1();
  v93->add_f_5(s->substr(0, 8));
  Message4::M2::M7::M12::M17::M26* v94 = v93->mutable_f_9();
  v94->set_f_0(true);
  Message4::M2::M7::M12::M17::M25* v96 = v93->mutable_f_8();
  Message4::M2::M7::M12::M17::M25::M48* v98_0 = v96->add_f_3();
  v98_0->set_f_12(0.841532);
  v98_0->set_f_21(0x32);
  v98_0->set_f_23(s->substr(0, 13));
  v98_0->set_f_9(0.048878);
  v98_0->set_f_33(0.549478);
  v98_0->set_f_32(0x7828d743b67f953a);
  v98_0->set_f_11(0x99d29c);
  int32_t array_1[17] = {
      0xc0, 0x3f54dbdd, 0xe8,     0x60, 0xec,   0x2c,     0x1b,   0x64, 0x72,
      0xc1, 0x73dfed84, 0x20f09f, 0x9,  0xb5ed, 0x317bc6, 0x633e, 0xf39};
  for (auto& value : array_1) v98_0->add_f_27(value);
  v98_0->set_f_24(s->substr(0, 3));
  v98_0->set_f_18(Message4::M2::M7::M12::M17::M25::M48::E24_CONST_1);
  v98_0->set_f_35(Message4::M2::M7::M12::M17::M25::M48::E25_CONST_3);
  v98_0->set_f_25(0xb3);
  v98_0->set_f_36(Message4::M2::M7::M12::M17::M25::M48::E26_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M50* v99_0 = v98_0->add_f_54();
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v100_0 = v99_0->add_f_12();
  v100_0->set_f_27(0x45cf0590);
  v100_0->set_f_37(0xa8e9ccface7c);
  v100_0->set_f_9(0x27be00);
  v100_0->set_f_29(0x63715e19f6b18d49);
  v100_0->set_f_28(s->substr(0, 13));
  v100_0->set_f_11(0.828662);
  v100_0->set_f_16(s->substr(0, 3));
  v100_0->set_f_5(0.825490);
  v100_0->set_f_58(s->substr(0, 3));
  v100_0->set_f_57(0x24);
  v100_0->add_f_18(s->substr(0, 5));
  v100_0->add_f_18(s->substr(0, 2));
  v100_0->add_f_18(s->substr(0, 53));
  v100_0->add_f_18(s->substr(0, 9));
  v100_0->set_f_4(s->substr(0, 2));
  v100_0->set_f_30(0x80);
  v100_0->set_f_54(0x8e);
  v100_0->set_f_13(0x42aa6dd69e1eb6dd);
  v100_0->set_f_33(s->substr(0, 8));
  v100_0->set_f_43(s->substr(0, 7));
  v100_0->set_f_39(0x13c02c9813f05273);
  v100_0->set_f_10(0x7d);
  v100_0->set_f_49(s->substr(0, 1));
  v100_0->set_f_14(0x4a);
  v100_0->set_f_20(s->substr(0, 4));
  v100_0->set_f_45(s->substr(0, 2));
  v100_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59* v100 =
      v100_0->mutable_f_96();
  v100->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59::E36_CONST_4);
  v100_0->set_f_64(false);
  v100_0->set_f_36(0x56e2edd9);
  v99_0->set_f_1(0x32);
  v99_0->set_f_0(0.376794);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v103_0 = v99_0->add_f_10();
  v103_0->set_f_0(0x4c6b5673d34d690f);
  Message4::M2::M7::M12::M17::M25::M48::M50::M54* v104_0 = v99_0->add_f_9();
  v104_0->set_f_0(s->substr(0, 16));
  Message4::M2::M7::M12::M17::M25::M48::M50::M53* v104 = v99_0->mutable_f_8();
  v104->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M50::M53::E31_CONST_4);
  v99_0->set_f_4(0x67);
  v98_0->add_f_15(Message4::M2::M7::M12::M17::M25::M48::E22_CONST_2);
  Message4::M2::M7::M12::M17::M25::M48::M49* v105 = v98_0->mutable_f_52();
  v105->set_f_5(0x4);
  v105->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_3);
  v105->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_3);
  v105->add_f_6(Message4::M2::M7::M12::M17::M25::M48::M49::E28_CONST_2);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v107_0 = v105->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v107 =
      v107_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v108 =
      v107->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v110_0 =
      v108->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v110 =
      v110_0->mutable_f_1();
  v110->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                    M67::E38_CONST_2);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v112_0 = v110->add_f_2();
  v112_0->set_f_0(0x5e0186fc63f885df);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v113_0 = v112_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v114_0 = v113_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v115_0 = v114_0->add_f_1();
  v115_0->set_f_0(s->substr(0, 48));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v113_1 = v112_0->add_f_2();
  v113_1->set_f_0(s->substr(0, 6));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v117_0 = v113_1->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v118_0 = v117_0->add_f_2();
  v118_0->set_f_1(0x55);
  v118_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::
                      M65::M67::M68::M69::M70::M72::E39_CONST_2);
  v117_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v119_1 = v117_0->add_f_1();
  v119_1->set_f_0(s->substr(0, 38));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v110_1 =
      v108->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v119 =
      v110_1->mutable_f_1();
  v119->set_f_1(0x8749ccfc);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v121_0 = v119->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v122_0 = v121_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v123_0 = v122_0->add_f_3();
  v123_0->set_f_0(false);
  v121_0->set_f_0(0x10);
  v107_0->set_f_0(s->substr(0, 1831));
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v125 = v105->mutable_f_21();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v126 =
      v125->mutable_f_3();
  v126->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::E37_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v127 =
      v126->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66* v128 =
      v127->mutable_f_5();
  v128->set_f_0(0x97);
  v105->set_f_1(0x11);
  v105->set_f_0(true);
  v98_0->set_f_30(0xe30002);
  v98_0->set_f_19(s->substr(0, 4));
  v98_0->set_f_7(0x9053ec762e44b9e);
  v98_0->set_f_20(0.347166);
  Message4::M2::M7::M12::M17::M25::M48* v98_1 = v96->add_f_3();
  v98_1->set_f_22(s->substr(0, 5));
  v98_1->set_f_13(s->substr(0, 8));
  v98_1->set_f_26(false);
  v98_1->set_f_33(0.929566);
  Message4::M2::M7::M12::M17::M25::M48::M50* v132_0 = v98_1->add_f_54();
  Message4::M2::M7::M12::M17::M25::M48::M50::M51* v133_0 = v132_0->add_f_6();
  v133_0->set_f_0(0x9c);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v135_0 = v132_0->add_f_10();
  v135_0->set_f_0(0x51edc34aa1bf8d91);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v136_0 = v132_0->add_f_12();
  v136_0->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_1);
  v136_0->set_f_41(0x50ca);
  v136_0->set_f_19(0x7cb7b190);
  v136_0->set_f_38(s->substr(0, 5));
  v136_0->set_f_23(false);
  v136_0->set_f_46(s->substr(0, 19));
  v136_0->set_f_28(s->substr(0, 5));
  v136_0->set_f_57(0x66e9d);
  v136_0->set_f_31(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E33_CONST_3);
  v136_0->set_f_8(s->substr(0, 25));
  v136_0->set_f_1(0.741721);
  v136_0->set_f_32(0x66705518);
  v136_0->set_f_0(0x983f717a19);
  v136_0->set_f_25(s->substr(0, 20));
  v136_0->set_f_5(0.805961);
  v136_0->set_f_37(0x815e32010d);
  v136_0->set_f_3(s->substr(0, 7));
  v136_0->set_f_51(0x22);
  v136_0->set_f_2(0xf6ed);
  v136_0->set_f_20(s->substr(0, 27));
  v136_0->set_f_39(0xc9);
  int64_t array_2[11] = {
      0xcbb7c74aa4ef04c,  0x24f0a66082c60557, 0x68415bd4074cc5a9,
      0x604cbe9ddde777e3, 0x78b483a21c65d88b, 0x42ef17a119c4b0b6,
      0x1ee8162817623921, 0x370457b4f2dadf68, 0x79c75bfbbf9dd627,
      0x68b4758b7ee3ede1, 0x6c0d12dac4afd0eb};
  for (auto& value : array_2) v136_0->add_f_50(value);
  v136_0->set_f_29(0x88f44906f3);
  v136_0->set_f_62(0x49);
  v136_0->set_f_43(s->substr(0, 58));
  v136_0->set_f_16(s->substr(0, 13));
  v136_0->set_f_6(0xbb);
  v136_0->set_f_35(0.958333);
  v136_0->set_f_21(0x4b);
  v132_0->set_f_1(0x2c7ed1);
  Message4::M2::M7::M12::M17::M25::M48::M50* v132_1 = v98_1->add_f_54();
  v132_1->set_f_1(0x82a6f70a);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v140_0 = v132_1->add_f_10();
  v140_0->set_f_0(0xc41cd69de2efb2c);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v142_0 = v132_1->add_f_12();
  v142_0->add_f_50(0x360ba739f305cfa0);
  v142_0->set_f_4(s->substr(0, 31));
  v142_0->set_f_61(0x2c);
  v142_0->set_f_67(0x8d4e7609);
  v142_0->set_f_51(0x7d60);
  v142_0->add_f_18(s->substr(0, 6));
  v142_0->set_f_35(0.375408);
  v142_0->set_f_48(0x1b);
  v142_0->set_f_55(0x1303dbeba834949b);
  v142_0->set_f_32(0x452cb1f9);
  v142_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_4);
  v142_0->set_f_1(0.623947);
  v142_0->set_f_5(0.327394);
  v142_0->set_f_54(0x13);
  v142_0->set_f_41(0x32);
  v142_0->set_f_0(0x675ba0);
  v142_0->set_f_47(0xa4f8cd6ca61d853);
  v142_0->add_f_56(0x1d3a96b8);
  v142_0->set_f_3(s->substr(0, 6));
  v142_0->set_f_11(0.209813);
  v142_0->set_f_6(0xe5d9);
  v142_0->set_f_12(0x8a);
  v142_0->set_f_66(0.473729);
  v142_0->set_f_33(s->substr(0, 5));
  v142_0->set_f_63(s->substr(0, 5));
  v142_0->set_f_2(0x7e);
  v142_0->set_f_36(0x64fb1a45);
  v142_0->set_f_65(true);
  v142_0->set_f_13(0xfefe2ceee7);
  v142_0->set_f_19(0x27);
  v142_0->set_f_46(s->substr(0, 16));
  v142_0->set_f_15(0.215060);
  v142_0->set_f_8(s->substr(0, 16));
  v132_1->set_f_2(0xb47be8);
  v132_1->set_f_0(0.873227);
  v98_1->set_f_21(0x1f);
  int32_t array_3[7] = {0x24740c54, 0x2d, 0xf0dd82, 0x5e, 0xac, 0x66b90a, 0xe5};
  for (auto& value : array_3) v98_1->add_f_27(value);
  v98_1->set_f_25(0xed4ce5);
  v98_1->set_f_0(0xa26741151ca24bc);
  v98_1->set_f_1(0x66);
  v98_1->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_4);
  v98_1->set_f_11(0xf4);
  v98_1->set_f_9(0.817347);
  Message4::M2::M7::M12::M17::M25::M48::M49* v144 = v98_1->mutable_f_52();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v145 = v144->mutable_f_21();
  v145->set_f_0(0x9f);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v146 =
      v145->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v147 =
      v146->mutable_f_2();
  v147->set_f_0(s->substr(0, 19));
  Message4::M2::M7::M12::M17::M25::M48::M49::M56* v149 = v144->mutable_f_19();
  Message4::M2::M7::M12::M17::M25::M48::M49::M56::M60* v151_0 = v149->add_f_3();
  v151_0->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M56::M60* v151_1 = v149->add_f_3();
  v151_1->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v152_0 = v144->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v152 =
      v152_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v153 =
      v152->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v155_0 =
      v153->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v155 =
      v155_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v157_0 = v155->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v158_0 = v157_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v159_0 = v158_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v160_1 = v159_0->add_f_2();
  v160_1->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::
                      M65::M67::M68::M69::M70::M72::E39_CONST_4);
  v160_1->set_f_1(0xc45e570f9df9c481);
  v155_0->set_f_0(false);
  v144->set_f_3(true);
  v144->set_f_0(false);
  v98_1->add_f_3(s->substr(0, 1));
  v98_1->add_f_3(s->substr(0, 27));
  Message4::M2::M7::M12::M17::M25::M43* v162_0 = v96->add_f_1();
  v162_0->set_f_0(0xfc);
  v93->set_f_4(s->substr(0, 5));
  Message4::M2::M7::M12::M17::M39* v162 = v93->mutable_f_10();
  v162->set_f_0(0x5822cdbb);
  v93->set_f_1(s->substr(0, 2));
  v93->set_f_3(0xe9c922);
  v24->set_f_0(Message4::M2::M7::E5_CONST_3);
  Message4::M2::M7::M13* v164_0 = v24->add_f_3();
  v164_0->set_f_0(Message4::M2::M7::M13::E8_CONST_2);
  Message4::M2::M7::M13::M21* v165_0 = v164_0->add_f_1();
  Message4::M2::M7::M13::M21::M35* v166_0 = v165_0->add_f_1();
  v166_0->set_f_1(false);
  v166_0->set_f_0(0x7e);
  Message4::M2::M7::M13* v164_1 = v24->add_f_3();
  Message4::M2::M7::M13::M21* v167_0 = v164_1->add_f_1();
  v167_0->set_f_0(0x6f);
  v164_1->set_f_0(Message4::M2::M7::M13::E8_CONST_2);
  message->set_f_1(0xe);
}

inline void Message4_Set_3(Message4* message, std::string* s) {
  Message4::M3* v2_0 = message->add_f_12();
  Message4::M3::M5* v3_0 = v2_0->add_f_6();
  v3_0->set_f_8(Message4::M3::M5::E3_CONST_2);
  Message4::M3::M5::M8* v3 = v3_0->mutable_f_17();
  v3->add_f_0(0xb);
  v3->add_f_0(0x6989);
  v3->add_f_0(0xd8cc6a);
  v3->add_f_0(0x68ceca1a);
  Message4::M3::M5::M8::M22* v5_0 = v3->add_f_5();
  v5_0->set_f_7(s->substr(0, 2));
  v5_0->set_f_3(0xc7);
  v5_0->set_f_8(0.304431);
  Message4::M3::M5::M8::M22::M37* v5 = v5_0->mutable_f_12();
  v5->set_f_0(true);
  v5_0->set_f_1(Message4::M3::M5::M8::M22::E19_CONST_4);
  v5_0->add_f_2(Message4::M3::M5::M8::M22::E20_CONST_3);
  v5_0->set_f_6(s->substr(0, 30));
  Message4::M3::M5::M8::M20* v7 = v3->mutable_f_3();
  v7->set_f_0(s->substr(0, 3));
  Message4::M3::M5::M8::M20::M28* v9_0 = v7->add_f_1();
  v9_0->set_f_0(0x9);
  Message4::M3::M5::M8::M16* v11 = v3->mutable_f_1();
  v11->set_f_0(0xce8f10);
  Message4::M3::M5::M10* v14_0 = v3_0->add_f_18();
  v14_0->set_f_0(s->substr(0, 31));
  v14_0->set_f_1(Message4::M3::M5::M10::E6_CONST_5);
  v3_0->set_f_7(0x6e);
  v3_0->set_f_1(true);
  v3_0->set_f_0(0x9553d1fa50);
  v2_0->set_f_1(Message4::M3::E2_CONST_4);
  Message4::M2* v14 = message->mutable_f_8();
  Message4::M2::M7* v15 = v14->mutable_f_9();
  v15->set_f_0(Message4::M2::M7::E5_CONST_5);
  Message4::M2::M7::M15* v16 = v15->mutable_f_5();
  v16->set_f_86(0x22e2f067);
  v16->set_f_69(0.613108);
  v16->set_f_30(s->substr(0, 17));
  v16->set_f_3(true);
  v16->set_f_13(0xad);
  v16->set_f_40(true);
  v16->add_f_9(0x21);
  v16->set_f_80(0.478854);
  v16->set_f_78(0xa499d55bee28fc);
  v16->set_f_106(0xede60ddeed8a1e7);
  v16->set_f_58(s->substr(0, 12));
  v16->set_f_35(s->substr(0, 4));
  v16->set_f_97(s->substr(0, 13));
  v16->set_f_45(0xd0);
  v16->set_f_103(Message4::M2::M7::M15::E17_CONST_4);
  v16->set_f_90(s->substr(0, 18));
  v16->set_f_92(s->substr(0, 7));
  v16->set_f_41(false);
  v16->set_f_87(s->substr(0, 8));
  v16->add_f_56(Message4::M2::M7::M15::E13_CONST_2);
  v16->set_f_20(0.870481);
  v16->set_f_72(0.342947);
  v16->set_f_38(0xc41e550f);
  v16->set_f_59(0.658891);
  v16->set_f_89(0x86);
  v16->set_f_34(0x9adc0117c2eef7);
  v16->set_f_47(0.359144);
  v16->set_f_11(Message4::M2::M7::M15::E10_CONST_3);
  v16->set_f_84(s->substr(0, 13));
  v16->set_f_70(s->substr(0, 11));
  v16->set_f_102(0xf5e2accc);
  v16->set_f_68(0x332d8fff);
  v16->set_f_57(s->substr(0, 5));
  v16->set_f_14(s->substr(0, 51));
  v16->set_f_4(0.359860);
  v16->set_f_61(0x3756a5dd);
  Message4::M2::M7::M15::M18* v18_0 = v16->add_f_158();
  v18_0->set_f_0(0.386331);
  Message4::M2::M7::M15::M18::M38* v19_0 = v18_0->add_f_2();
  v19_0->set_f_0(0x78b4);
  v16->set_f_48(true);
  v16->set_f_94(s->substr(0, 18));
  v16->set_f_36(false);
  v16->set_f_0(0x7d);
  v16->set_f_100(s->substr(0, 16));
  v16->set_f_44(s->substr(0, 7));
  Message4::M2::M7::M13* v20_0 = v15->add_f_3();
  v20_0->set_f_0(Message4::M2::M7::M13::E8_CONST_3);
  Message4::M2::M7::M13::M21* v21_0 = v20_0->add_f_1();
  v21_0->set_f_0(0x45);
  Message4::M2::M7::M12* v23_0 = v15->add_f_2();
  Message4::M2::M7::M12::M17* v23 = v23_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25* v24 = v23->mutable_f_8();
  v24->set_f_0(0xa3);
  Message4::M2::M7::M12::M17::M25::M48* v27_0 = v24->add_f_3();
  v27_0->set_f_9(0.477235);
  v27_0->set_f_29(s->substr(0, 11));
  v27_0->set_f_11(0x150fc16c375f17a2);
  v27_0->set_f_12(0.550309);
  v27_0->set_f_1(0x42);
  v27_0->set_f_38(0xe3e8c2eb4f11f0);
  v27_0->set_f_5(0x49);
  v27_0->set_f_18(Message4::M2::M7::M12::M17::M25::M48::E24_CONST_3);
  v27_0->set_f_23(s->substr(0, 8));
  v27_0->set_f_37(0xa040d6);
  v27_0->set_f_4(0x67);
  v27_0->set_f_21(0x1c);
  v27_0->add_f_3(s->substr(0, 64));
  v27_0->add_f_3(s->substr(0, 31));
  v27_0->set_f_10(0x5d);
  v27_0->set_f_2(0x1cbc73d0);
  v27_0->add_f_27(0xfc);
  v27_0->add_f_27(0x47);
  v27_0->add_f_27(0x9d);
  v27_0->set_f_32(0x5c7f8dc1);
  v27_0->set_f_34(0.237122);
  Message4::M2::M7::M12::M17::M25::M48::M49* v27 = v27_0->mutable_f_52();
  v27->set_f_5(0x41277c8169);
  v27->set_f_4(Message4::M2::M7::M12::M17::M25::M48::M49::E27_CONST_2);
  uint32_t array_0[144] = {
      0xe098,     0x53,   0x17,     0x91,       0xa6,       0x30,
      0x40,       0x27,   0x8d,     0x7,        0x9e,       0xc2,
      0x53,       0x39,   0x79,     0x3e,       0x440f,     0x7456,
      0x6a,       0x87,   0xc0,     0xf59f331f, 0x40b4,     0x98,
      0x26,       0x5a,   0xb80820, 0x8111,     0x3c,       0xca,
      0xfe36,     0xdc,   0x34,     0x35,       0x3b,       0x1b,
      0x45,       0x24,   0x9a,     0xa4,       0x88,       0x2c,
      0xeb3aee,   0x3,    0xd1,     0x9e,       0x6eeea1,   0xc24a,
      0x9d024697, 0x3a,   0xb48b,   0x9e,       0x9177a015, 0x1,
      0xa564ae,   0x37,   0x90,     0x12,       0x6708d,    0x3a3c,
      0x9f9a,     0x8085, 0x8100,   0xa1,       0x37,       0xb3829c,
      0xad,       0x1b,   0xacf805, 0x7a,       0x91b4b4,   0x28ed,
      0x6c,       0xa4,   0x16,     0x3941b4b1, 0x29,       0xa9,
      0xe,        0x5c,   0x92,     0x4b,       0x9,        0x2ba2,
      0x5f89,     0x9a43, 0x88,     0xf3,       0x66,       0x218,
      0x96,       0x82,   0x35,     0xdf,       0x3b,       0xd,
      0x2a,       0x93,   0xd3,     0x1d,       0xa669a2b0, 0x9d,
      0xaa,       0xb8de, 0xc,      0x12,       0xac,       0xd1,
      0xea,       0x5d,   0xb6,     0xd3d7a69c, 0xaf,       0x610c,
      0x2f,       0x18,   0x5575,   0x1f38a4d7, 0x9ec,      0x96,
      0x97,       0xdb,   0x239a,   0xd6,       0x30,       0x17,
      0x6f,       0xa8,   0x72df,   0x4b98,     0xa7,       0x36267d,
      0x8f,       0x2251, 0x37,     0x4faa,     0x1,        0x9eed,
      0x1f,       0x93,   0x6,      0x5b,       0x4a,       0xcf};
  for (auto& value : array_0) v27->add_f_2(value);
  v27->set_f_1(0xdec823bd6aa67850);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v29_0 = v27->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v29 =
      v29_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v30 =
      v29->mutable_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v32_0 =
      v30->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v32 =
      v32_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v34_0 = v32->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v35_0 = v34_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v36_0 = v35_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M71* v37_0 = v36_0->add_f_1();
  v37_0->set_f_0(s->substr(0, 22));
  v36_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v38_0 = v36_0->add_f_2();
  v38_0->set_f_1(0xa1);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v32_1 =
      v30->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v38 =
      v32_1->mutable_f_1();
  v38->set_f_1(0xc30073a5);
  v38->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                   M67::E38_CONST_5);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v40_0 = v38->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v41_0 = v40_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v42_0 = v41_0->add_f_3();
  v42_0->set_f_0(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v41_1 = v40_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v45_0 = v41_1->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v46_0 = v45_0->add_f_2();
  v46_0->set_f_1(0x2ae816);
  v45_0->set_f_0(true);
  v29_0->set_f_0(s->substr(0, 25));
  v27->set_f_8(Message4::M2::M7::M12::M17::M25::M48::M49::E29_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v47 = v27->mutable_f_21();
  v47->set_f_0(0x2eb0a9);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v48 = v47->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v49 =
      v48->mutable_f_2();
  v49->set_f_0(s->substr(0, 3263));
  v48->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::E37_CONST_3);
  Message4::M2::M7::M12::M17::M25::M48::M50* v54_0 = v27_0->add_f_54();
  v54_0->set_f_3(0x23);
  v54_0->set_f_1(0xf6527e);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v57_0 = v54_0->add_f_12();
  v57_0->set_f_4(s->substr(0, 14));
  v57_0->set_f_23(true);
  v57_0->add_f_18(s->substr(0, 42));
  v57_0->set_f_8(s->substr(0, 11));
  v57_0->set_f_6(0xb1ff);
  int32_t array_1[24] = {
      0x46c0, 0x44796caf, 0x902e, 0x49a601eb, 0x40, 0xd4, 0x2e,     0xb9cc,
      0xd1e3, 0xd5,       0xdf,   0x199127,   0x9,  0xcb, 0xf3,     0xe3,
      0xfc,   0x6c,       0x8e,   0xba,       0x89, 0xe4, 0xf7b136, 0xde0fc5};
  for (auto& value : array_1) v57_0->add_f_56(value);
  v57_0->set_f_67(0xcb25d22ca331367);
  v57_0->set_f_15(0.563451);
  v57_0->set_f_21(0x74);
  v57_0->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_5);
  v57_0->set_f_41(0x5d);
  v57_0->set_f_13(0xdf);
  v57_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_2);
  v57_0->set_f_42(0.694332);
  v57_0->set_f_19(0xd36f84);
  v57_0->set_f_52(0.485233);
  v57_0->set_f_40(s->substr(0, 3));
  v57_0->set_f_33(s->substr(0, 1));
  v57_0->set_f_62(0x3b);
  v57_0->set_f_54(0x9f);
  v57_0->set_f_60(0.842358);
  v57_0->set_f_61(0xfb);
  v57_0->set_f_46(s->substr(0, 5));
  v57_0->set_f_3(s->substr(0, 11));
  v57_0->set_f_55(0xd841b10b766b9b);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v57_1 = v54_0->add_f_12();
  v57_1->set_f_7(0.353607);
  v57_1->set_f_58(s->substr(0, 2));
  v57_1->set_f_54(0x16);
  v57_1->set_f_64(false);
  v57_1->set_f_10(0xc4);
  int32_t array_2[824] = {
      0x7d,       0x24dd45,   0xb6,       0x223ad87,  0xb7,       0xa1ee2e8,
      0x5b58cbec, 0x8763,     0x8c,       0x72,       0xf6,       0x316da1,
      0xa,        0xe,        0x25d2,     0xe1,       0x94,       0xfdc5,
      0x879a7a,   0xa1,       0xa4,       0x709a2d,   0xe3,       0x28,
      0x7c914ee4, 0xfbe646,   0x28,       0xb65e25,   0xf0,       0xce,
      0xcac77f,   0xe0,       0x92,       0xe4,       0x39,       0x907465,
      0x42,       0xaf,       0x44ad,     0xdfbb,     0x7e,       0x7b,
      0x8b,       0x9c0727,   0x6bbf0391, 0x31,       0x93,       0xf2c6,
      0x2a9d1acc, 0x8d,       0x2caa90,   0xbc,       0x1b4bf972, 0x98,
      0xd9,       0xba,       0x13,       0x4a,       0x55b678,   0xc2,
      0x8f0f18,   0xf26a,     0x92,       0x20,       0x512e15,   0xb94b42,
      0xe5,       0xd315,     0x47086865, 0x4d,       0x54,       0xf2,
      0xb5,       0x20,       0xd5,       0x30,       0x16,       0xde,
      0xeb,       0x11,       0x7b,       0x6c,       0xb12dac0,  0x703c6944,
      0x2b,       0xd4,       0xd0,       0x22df8143, 0xdc,       0x201f754,
      0x602c1369, 0x26,       0x2ef,      0x88,       0x1837ac,   0x20,
      0x9b36,     0x8267,     0xb5b1,     0x75,       0x35,       0x48,
      0x118b1c6e, 0xe45c7d,   0x45,       0x27f5dc95, 0x7965,     0x3f,
      0xa1,       0x7b,       0xb0,       0xe9,       0x5b,       0xfdc88a,
      0x2b,       0xeb,       0x3d51,     0x3e9d1ecd, 0x45c5f9,   0x305c,
      0x2f,       0x53,       0xcbc4f9,   0xda91,     0x23,       0x6f231a80,
      0x4c,       0x43,       0x13,       0x6ce70284, 0x26bf,     0xcfad,
      0x47,       0x1ed9b5,   0x7,        0x4c,       0x69,       0x793a8b,
      0x17,       0x27e51b,   0x6f,       0xf7,       0x4f,       0x40d6635f,
      0x4f70e7,   0x80,       0x37fe,     0x75,       0x18fb26,   0x95,
      0xc2,       0x90,       0x70353e17, 0xee,       0x32a05f,   0x98,
      0xf6928c,   0xea,       0x5d,       0x3c,       0x78,       0x7fd4ea55,
      0xecfcf6,   0x67,       0x79,       0x3f84,     0x841341,   0xc9,
      0x720c,     0xc70,      0x443b,     0x74fd2e,   0xa8c9,     0x8b,
      0xdc,       0x41e65f,   0xbd,       0xd0,       0xae,       0x95,
      0x31,       0x3,        0x26f9,     0x9e7c16f,  0xf7,       0x6a,
      0x68,       0x38,       0x46d97971, 0x4a9f9126, 0x74,       0xdf60f6c,
      0xea,       0x6a,       0x6b,       0xe7,       0xf7fc51,   0x2b,
      0x38,       0x9b5d,     0x12,       0xc9,       0xfe,       0xdf,
      0xcb,       0xc9cae6,   0xfa,       0xd,        0xe232,     0xc3,
      0x4f,       0xb7,       0x920026,   0x4e220947, 0x24d59eb3, 0xe6,
      0xd6c650,   0x1,        0xc4,       0x422a68ff, 0x34,       0x60bf,
      0xb8eb,     0x3d,       0x183adc,   0xfa,       0x3,        0xbb,
      0x4,        0x4cef6039, 0xe46eff,   0xf3aa,     0x29,       0xc1,
      0x52,       0x7adfcf75, 0x2f,       0xecb7,     0x190b,     0x98,
      0x6af2575b, 0xed,       0x75,       0xb0,       0x31,       0x24c2341c,
      0x912c,     0x7550498,  0xf9fa,     0x8a911b,   0xef,       0x69173627,
      0xa3,       0x5f,       0xde,       0x29,       0x73,       0x3fe7,
      0xd3beab,   0x28,       0xfb0760,   0x3d981db9, 0x268c675c, 0x18,
      0x5cc11c,   0x6b,       0x47d7c820, 0x9747,     0x5b79,     0x268f,
      0x54,       0x559056,   0x87a3b,    0x2d,       0x48,       0x2583,
      0xf4,       0x3f7045,   0xde,       0xab,       0xc2e907,   0xc9,
      0x39f6d3cd, 0xbab3,     0x6d7,      0x4a7d8126, 0x8c,       0x65d0,
      0xcc,       0x29f8,     0xeb87,     0x150103e2, 0xf7,       0x2a4a,
      0x1d,       0xe3782b,   0xe2,       0xc8,       0xc5,       0x1f42f585,
      0x196e4ac,  0x1fd4a4,   0xe74f,     0xc5,       0x5a,       0x7a,
      0x3257574e, 0x4f887979, 0x22,       0x2a,       0x742aace8, 0xdc,
      0x8d7fea,   0xa084,     0x86,       0x98,       0xf22ae0,   0xd8,
      0xc55d,     0xba116f,   0xe6,       0xe4,       0x76,       0x47,
      0x2abf4e8b, 0x1f3b1a,   0x12,       0x56,       0xc6,       0xd,
      0x9552,     0x2823cd,   0x5,        0x1b,       0x66,       0x548f88,
      0x1f,       0x3476,     0x3f,       0x4074c442, 0x57,       0xfd534d,
      0x81aedf,   0xf3,       0xb3,       0x16,       0x2f09,     0x44,
      0x34,       0xf5,       0x37ba0711, 0x86,       0xc,        0x31,
      0x6b0c6d90, 0x47,       0xf7,       0x5e,       0x31,       0xeb,
      0x32,       0x59d9,     0x15,       0xdb67b6,   0x6756de45, 0xe5,
      0xd578e1,   0x6ea9,     0x9439,     0xfa,       0x966fe1,   0xcd45,
      0xd2d0c5,   0x7be97b6,  0x1c4b,     0xa98f,     0x86,       0xde,
      0x9402,     0x2a,       0x87,       0xad,       0x72,       0x141f92f6,
      0x4e,       0xe2bc90,   0x89ca,     0x89aa,     0xd5,       0x45c605,
      0x2f7,      0x3c,       0x32,       0x3e6c065c, 0xdd,       0x8f,
      0x6fb07f25, 0x5d,       0x9a,       0xaeb6ec,   0x195c,     0xd4,
      0xa3,       0xf4,       0x151f,     0xb72e,     0x22188cf,  0x21e01df7,
      0x7a0a,     0x49f3b72e, 0x7a563dfc, 0x8b,       0x5350e160, 0xef,
      0x79,       0xab46,     0x50,       0xc2c443,   0x45,       0x61,
      0x82d7aa,   0x75054a,   0xbb75a9,   0x25,       0xdb,       0x24,
      0x69fcac,   0xb3,       0xe8,       0x4894,     0xd311f0,   0x83,
      0xd8d5,     0x93,       0x1b521d7c, 0x13493a9,  0x57,       0xda6b,
      0xce,       0xa2c76,    0x74,       0x61,       0x7a,       0xf5bc18,
      0xe9,       0x72,       0xd5,       0xe,        0x36,       0x61f4dc47,
      0x6faa9,    0x8f,       0xcdbaab,   0x1c,       0x23d53fd8, 0xf213,
      0xdb,       0x5b85,     0xfe,       0x4bfc381a, 0x32453a,   0x8ca,
      0x32d898,   0x63021324, 0x91,       0x4,        0xf5490f6,  0x5e,
      0xf6,       0xc0,       0x7d,       0xc5,       0x558c6b,   0xde69ea,
      0x68,       0xc9,       0xea,       0xa3,       0xec,       0x6c,
      0xbe75e7,   0xfc,       0x343,      0x9e5b67,   0x4055,     0x7b,
      0x30,       0xee,       0x2a5fac,   0xc2,       0x15,       0x22a7,
      0x33,       0xae,       0x38,       0x2311400e, 0x5f,       0x45306467,
      0x58,       0x2f,       0x4718,     0xa7,       0x23,       0x7dc2636d,
      0xee09,     0x51c1382b, 0x494901f3, 0xb7,       0x4f,       0x47,
      0x69522a42, 0xc0,       0xc1,       0x3d,       0x6d,       0x7c,
      0x889fa1,   0x6c,       0x14b1dbe8, 0xc,        0xc5,       0x687ac098,
      0x24,       0x9f,       0x72f8,     0x60,       0x97,       0x1,
      0x65f314,   0x4085,     0x86,       0xf0,       0x87,       0x83,
      0x63,       0xe2,       0xdb43,     0x97,       0x16,       0x5d,
      0x9d0c,     0xfe,       0xd628,     0x68,       0xfa,       0xa898cf,
      0x72,       0x7c,       0xb80e,     0x96,       0x2c,       0xe597,
      0xc,        0xeb,       0xbb,       0x759ba2,   0x22,       0xabba,
      0x772ccb66, 0x2eb8ad9b, 0x65,       0x16,       0xaca6,     0x42902e07,
      0xe2,       0xbf,       0xcd,       0x49,       0x66,       0x77aaf3,
      0x6cff97a1, 0xdeae,     0x50019e,   0x67f4,     0xa8,       0x9a2126,
      0x585673,   0x52e,      0x71,       0x9e,       0x94bbd9,   0x81,
      0x58,       0x99,       0x25,       0x28a97067, 0x4a,       0x55,
      0x626cf3,   0x95,       0x3f360395, 0x34,       0x7cb2,     0x6de925,
      0x44e0bf05, 0x78,       0x4f97d7,   0x128c6b69, 0x6badf4b8, 0x1394fc42,
      0xb8fa43,   0xef46,     0xf,        0x38,       0x61,       0xff,
      0x75,       0x46dbd550, 0xaf,       0x83,       0xfe63,     0x372b2e,
      0x63,       0x4c,       0x44ba5,    0x12,       0x149d36,   0x76016a,
      0x11,       0xd2c5,     0x404c154c, 0xfc,       0x8b,       0x3c7794,
      0x61,       0x51,       0x10,       0xfa,       0xcb68,     0x1b,
      0x137a2dba, 0xfe,       0x4246d7,   0x82d5,     0xb7,       0x9d89ae0,
      0xbe,       0xa5c21e,   0x42,       0xaad877,   0xd9df,     0xde,
      0xdd1840,   0x91,       0x91,       0xb52e,     0xfd097e,   0xf121d4e,
      0x8934,     0x15,       0x7cbdbd,   0xbfb7,     0x60,       0xe5,
      0x1fce,     0x9d67fb,   0x4ddde616, 0xea4b,     0x94,       0x81,
      0xf,        0x59,       0xb2,       0xaee0,     0xdcf1,     0x2552940f,
      0xdc,       0xe484c4,   0x30,       0x85a52c,   0x57dff080, 0xc28af3,
      0x52,       0xf3,       0xa8,       0x7c,       0x6efaea,   0xab,
      0x3,        0x400e60,   0x43,       0xce26,     0x75bd,     0x1,
      0x72,       0xefb,      0x37,       0x941d,     0x8,        0x1ebaca40,
      0xbdee,     0xd3,       0x230b4c,   0x7a,       0x94,       0x23,
      0xd2,       0x81,       0x130,      0xd65fb10,  0x8eb2,     0x5d,
      0x4c,       0x42,       0xc7,       0xc746,     0x639c8dab, 0x770f,
      0x75,       0xaf513a,   0x8f,       0x106d3b,   0x50,       0x69,
      0xb139,     0xb,        0xb0,       0x88,       0x45,       0x324b9c,
      0x52,       0xb6,       0x92,       0x8b,       0x42,       0x7,
      0x6e72abe3, 0xd6ac55,   0xa6cf75,   0x34a56919, 0x7a,       0x7c06,
      0xdd4a40,   0x4fe8bf,   0xa37294,   0x6e,       0x32cf,     0x7e36c16,
      0x4dfb77e1, 0xab,       0xa42edf,   0x208f,     0x95,       0x7,
      0xaf26c0,   0x85,       0x7ef603,   0x6f,       0x5f63ba40, 0x17974705,
      0xd3a,      0xd3,       0xce,       0x33463464, 0x62,       0xbfb026,
      0xc8d411,   0xf364019,  0xaf,       0x3e,       0x66,       0x9a,
      0xdc,       0x96,       0x17bb14e0, 0x41,       0x3f4796,   0x40,
      0xafe7,     0x85afe1,   0x9c29bc,   0x83,       0x4a,       0x33,
      0x10,       0x8d67,     0x2b,       0xc,        0xd8,       0xd2,
      0x9619,     0xd8,       0xa9,       0x2a,       0x528fec,   0x6813,
      0x99,       0xce,       0x3,        0x81,       0x5d9e,     0x5885a9,
      0x25,       0x3f,       0xdb1167,   0x29,       0x46affb09, 0xcea013,
      0x60,       0xd0d15,    0x1fd03ccf, 0xaf,       0x20,       0xde,
      0x25,       0x56c50801, 0x21101a,   0xa2,       0xe718,     0x3d,
      0xb5,       0x14,       0xf7,       0x6f,       0xea,       0xea05,
      0x126a7dea, 0x6b,       0x72,       0x9c,       0x2d89e1d7, 0x33ccb3d4,
      0x78cf5127, 0x4a044d};
  for (auto& value : array_2) v57_1->add_f_56(value);
  v57_1->set_f_55(0x28601a2b);
  v57_1->set_f_3(s->substr(0, 16));
  v57_1->set_f_14(0x94);
  v57_1->set_f_42(0.287506);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59* v58 =
      v57_1->mutable_f_96();
  v58->set_f_0(
      Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59::E36_CONST_1);
  v57_1->set_f_52(0.398902);
  v57_1->set_f_51(0xad6c064f);
  v57_1->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_1);
  v57_1->set_f_41(0x53);
  v57_1->set_f_28(s->substr(0, 2));
  v57_1->set_f_67(0xbc7cf5649e83e3);
  v57_1->set_f_61(0x8e5aca);
  v57_1->set_f_5(0.930834);
  v57_1->set_f_13(0x107d122c);
  v57_1->set_f_15(0.154840);
  v57_1->set_f_47(0x7adb2bb19504be6f);
  v57_1->set_f_36(0x49fdcf72);
  v57_1->set_f_12(0x350ddf);
  v57_1->set_f_31(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E33_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v61_0 = v54_0->add_f_10();
  v61_0->set_f_0(0x245606a403e0fcd5);
  v27_0->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_1);
  Message4::M2::M7::M12::M17::M26* v61 = v23->mutable_f_9();
  Message4::M2::M7::M12::M17::M26::M42* v62 = v61->mutable_f_2();
  v62->set_f_0(true);
  v23->add_f_5(s->substr(0, 32));
  v23->add_f_5(s->substr(0, 2));
  v23->add_f_5(s->substr(0, 8));
  v23->add_f_5(s->substr(0, 34));
  v23->set_f_4(s->substr(0, 7));
  Message4::M2::M7::M12::M19* v64 = v23_0->mutable_f_2();
  Message4::M2::M7::M12::M19::M31* v69 = v64->mutable_f_6();
  Message4::M2::M7::M12::M19::M31::M45* v71_0 = v69->add_f_3();
  v71_0->set_f_0(s->substr(0, 20));
  v69->set_f_0(0x9940);
  v14->set_f_1(0xc9c3695ee8);
  Message4::M2::M6* v73 = v14->mutable_f_8();
  Message4::M2::M6::M9* v75 = v73->mutable_f_4();
  Message4::M2::M6::M9::M23* v76 = v75->mutable_f_1();
  Message4::M2::M6::M9::M23::M24* v79 = v76->mutable_f_2();
  v79->set_f_0(s->substr(0, 11));
  v75->set_f_0(0x3fa91f49ee76);
  v73->set_f_2(0x4ab7);
  Message4::M2::M4* v80 = v14->mutable_f_7();
  v80->set_f_2(0xefd6);
  Message4::M2::M4::M11* v82_1 = v80->add_f_3();
  v82_1->set_f_0(0x62);
  v14->set_f_4(0xf);
  message->set_f_2(0x186a);
}

inline void Message4_Set_4(Message4* message, std::string* s) {
  message->set_f_3(s->substr(0, 23));
  Message4::M3* v1_0 = message->add_f_12();
  v1_0->set_f_2(s->substr(0, 52));
  Message4::M3::M5* v2_0 = v1_0->add_f_6();
  v2_0->set_f_9(s->substr(0, 7));
  Message4::M3::M5::M10* v3_0 = v2_0->add_f_18();
  v3_0->set_f_0(s->substr(0, 2));
  v3_0->set_f_1(Message4::M3::M5::M10::E6_CONST_1);
  v2_0->set_f_8(Message4::M3::M5::E3_CONST_1);
  Message4::M3::M5::M8* v3 = v2_0->mutable_f_17();
  Message4::M3::M5::M8::M22* v5_0 = v3->add_f_5();
  Message4::M3::M5::M8::M22::M32* v5 = v5_0->mutable_f_11();
  v5->set_f_0(0.435244);
  v5_0->set_f_0(0.899807);
  v5_0->set_f_8(0.760183);
  v5_0->add_f_2(Message4::M3::M5::M8::M22::E20_CONST_4);
  v5_0->add_f_2(Message4::M3::M5::M8::M22::E20_CONST_4);
  v5_0->add_f_2(Message4::M3::M5::M8::M22::E20_CONST_4);
  v5_0->set_f_6(s->substr(0, 2));
  v5_0->add_f_9(s->substr(0, 2));
  v5_0->set_f_3(0x4bb9ff);
  Message4::M3::M5::M8::M22* v5_1 = v3->add_f_5();
  v5_1->set_f_1(Message4::M3::M5::M8::M22::E19_CONST_5);
  v5_1->set_f_4(0x96);
  v5_1->add_f_9(s->substr(0, 29));
  v5_1->add_f_2(Message4::M3::M5::M8::M22::E20_CONST_4);
  v5_1->add_f_5(0xf3);
  v5_1->add_f_5(0xef8c44);
  v5_1->set_f_3(0xda);
  v5_1->set_f_0(0.162199);
  Message4::M3::M5::M8::M20* v9 = v3->mutable_f_3();
  Message4::M3::M5::M8::M20::M28* v11_0 = v9->add_f_1();
  v11_0->set_f_0(0xf7cd);
  Message4::M3::M5::M8::M16* v13 = v3->mutable_f_1();
  Message4::M3::M5::M8::M16::M36* v14 = v13->mutable_f_3();
  v14->set_f_0(s->substr(0, 11));
  v2_0->set_f_3(0x153a7b041d184add);
  v2_0->set_f_6(0xde42);
  v2_0->set_f_5(0xc4);
  Message4::M1* v16_0 = message->add_f_7();
  v16_0->set_f_0(s->substr(0, 180));
  Message4::M2* v16 = message->mutable_f_8();
  Message4::M2::M6* v17 = v16->mutable_f_8();
  Message4::M2::M6::M14* v19_1 = v17->add_f_5();
  v19_1->set_f_0(0x1f);
  Message4::M2::M6::M9* v19 = v17->mutable_f_4();
  Message4::M2::M6::M9::M23* v20 = v19->mutable_f_1();
  v20->set_f_0(false);
  v17->set_f_2(0x102cd55d);
  Message4::M2::M7* v24 = v16->mutable_f_9();
  v24->set_f_0(Message4::M2::M7::E5_CONST_3);
  Message4::M2::M7::M12* v26_0 = v24->add_f_2();
  Message4::M2::M7::M12::M19* v26 = v26_0->mutable_f_2();
  Message4::M2::M7::M12::M19::M34* v28 = v26->mutable_f_8();
  v28->set_f_0(false);
  Message4::M2::M7::M12::M19::M31* v30 = v26->mutable_f_6();
  v30->set_f_0(0x3a1984);
  Message4::M2::M7::M12::M19::M29* v34_0 = v26->add_f_3();
  Message4::M2::M7::M12::M19::M29::M44* v35_0 = v34_0->add_f_1();
  v35_0->set_f_0(0.384476);
  Message4::M2::M7::M12::M19::M29* v34_1 = v26->add_f_3();
  Message4::M2::M7::M12::M19::M29::M44* v36_0 = v34_1->add_f_1();
  v36_0->set_f_0(0.384799);
  Message4::M2::M7::M12::M17* v36 = v26_0->mutable_f_1();
  Message4::M2::M7::M12::M17::M25* v37 = v36->mutable_f_8();
  Message4::M2::M7::M12::M17::M25::M48* v39_0 = v37->add_f_3();
  v39_0->set_f_8(0xd2);
  v39_0->set_f_24(s->substr(0, 26));
  v39_0->set_f_11(0x61);
  v39_0->add_f_3(s->substr(0, 8));
  v39_0->set_f_7(0xb5fd);
  v39_0->set_f_4(0xd);
  v39_0->add_f_27(0x29);
  v39_0->add_f_27(0xb9);
  v39_0->set_f_23(s->substr(0, 16));
  v39_0->set_f_16(Message4::M2::M7::M12::M17::M25::M48::E23_CONST_5);
  v39_0->set_f_17(s->substr(0, 15));
  v39_0->set_f_19(s->substr(0, 28));
  v39_0->set_f_26(true);
  Message4::M2::M7::M12::M17::M25::M48::M49* v39 = v39_0->mutable_f_52();
  v39->set_f_7(0x515f9b34122a1848);
  v39->set_f_3(true);
  Message4::M2::M7::M12::M17::M25::M48::M49::M56* v40 = v39->mutable_f_19();
  Message4::M2::M7::M12::M17::M25::M48::M49::M56::M60* v42_0 = v40->add_f_3();
  v42_0->set_f_0(false);
  v39->set_f_9(Message4::M2::M7::M12::M17::M25::M48::M49::E30_CONST_4);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52* v43_0 = v39->add_f_18();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62* v43 =
      v43_0->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64* v44 =
      v43->mutable_f_2();
  v44->set_f_0(s->substr(0, 28));
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65* v46_0 =
      v44->add_f_2();
  v46_0->set_f_0(false);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67* v46 =
      v46_0->mutable_f_1();
  v46->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                   M67::E38_CONST_2);
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68*
      v48_0 = v46->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69*
      v49_0 = v48_0->add_f_2();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70* v50_0 = v49_0->add_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::M67::M68::M69::
      M70::M72* v51_0 = v50_0->add_f_2();
  v51_0->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
                     M67::M68::M69::M70::M72::E39_CONST_3);
  v51_0->set_f_1(0x435f6907d973);
  v48_0->set_f_0(0x7e50c39542);
  Message4::M2::M7::M12::M17::M25::M48::M49::M57* v52 = v39->mutable_f_21();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61* v53 = v52->mutable_f_3();
  Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63* v54 =
      v53->mutable_f_2();
  v54->set_f_0(s->substr(0, 1));
  v39_0->set_f_36(Message4::M2::M7::M12::M17::M25::M48::E26_CONST_5);
  v39_0->set_f_18(Message4::M2::M7::M12::M17::M25::M48::E24_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M50* v57_0 = v39_0->add_f_54();
  Message4::M2::M7::M12::M17::M25::M48::M50::M53* v57 = v57_0->mutable_f_8();
  v57->set_f_0(Message4::M2::M7::M12::M17::M25::M48::M50::M53::E31_CONST_1);
  Message4::M2::M7::M12::M17::M25::M48::M50::M51* v59_1 = v57_0->add_f_6();
  v59_1->set_f_0(0x5ef0c791);
  v57_0->set_f_0(0.312406);
  v57_0->set_f_1(0x314472d5e8b96c);
  Message4::M2::M7::M12::M17::M25::M48::M50::M55* v61_0 = v57_0->add_f_10();
  v61_0->set_f_0(0x53df8df0155a9c9b);
  v57_0->set_f_4(0xe);
  Message4::M2::M7::M12::M17::M25::M48::M50::M58* v62_0 = v57_0->add_f_12();
  v62_0->set_f_66(0.446467);
  v62_0->set_f_7(0.437641);
  v62_0->set_f_12(0xef83);
  v62_0->set_f_63(s->substr(0, 8));
  int array_0[18] = {2, 11, 10, 12, 25, 14, 28, 54, 6,
                     3, 41, 13, 2,  1,  3,  6,  15, 11};
  for (size_t i = 0; i < 18; i++) v62_0->add_f_22(s->substr(0, array_0[i]));
  v62_0->set_f_43(s->substr(0, 4));
  v62_0->set_f_8(s->substr(0, 4));
  v62_0->set_f_46(s->substr(0, 10));
  v62_0->set_f_3(s->substr(0, 55));
  v62_0->set_f_61(0x2e);
  v62_0->set_f_42(0.074604);
  v62_0->set_f_35(0.584935);
  v62_0->set_f_62(0x34);
  v62_0->set_f_53(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E34_CONST_5);
  v62_0->set_f_36(0x1873521b);
  v62_0->set_f_17(Message4::M2::M7::M12::M17::M25::M48::M50::M58::E32_CONST_5);
  v62_0->set_f_33(s->substr(0, 20));
  v62_0->set_f_21(0xb9f627a);
  v62_0->set_f_60(0.781440);
  v62_0->set_f_67(0x85);
  v62_0->set_f_1(0.906391);
  v62_0->add_f_18(s->substr(0, 25));
  v62_0->set_f_58(s->substr(0, 15));
  v62_0->add_f_56(0xf44c6c);
  v62_0->set_f_27(0x51);
  v62_0->set_f_51(0x1b);
  v62_0->set_f_34(s->substr(0, 5));
  v62_0->set_f_6(0x4f4f);
  v62_0->set_f_10(0x3cbc61c);
  v62_0->set_f_54(0xe0);
  v62_0->set_f_11(0.631715);
  v57_0->set_f_3(0x44ad);
  v39_0->set_f_30(0x1e);
  v39_0->set_f_6(Message4::M2::M7::M12::M17::M25::M48::E21_CONST_1);
  v39_0->set_f_0(0x8cb3b21b6be9c394);
  v39_0->set_f_25(0x999f);
  v39_0->set_f_22(s->substr(0, 17));
  v39_0->set_f_31(0x12727f4e707153f9);
  v39_0->set_f_38(0x82);
  Message4::M2::M7::M12::M17::M25::M43* v64_0 = v37->add_f_1();
  v64_0->set_f_0(0xa534d455187825);
  v36->set_f_3(0x7db967fff3);
  Message4::M2::M7::M12::M17::M26* v64 = v36->mutable_f_9();
  Message4::M2::M7::M12::M17::M26::M42* v65 = v64->mutable_f_2();
  v65->set_f_0(true);
  v36->set_f_2(0x26c4b4a8d582440f);
  v36->set_f_1(s->substr(0, 6));
  Message4::M2::M7::M13* v68_0 = v24->add_f_3();
  Message4::M2::M7::M13::M21* v69_0 = v68_0->add_f_1();
  v69_0->set_f_0(0x25127a9d3d03ac10);
  Message4::M2::M7::M13::M21::M35* v70_1 = v69_0->add_f_1();
  v70_1->set_f_1(true);
  Message4::M2::M7::M15* v70 = v24->mutable_f_5();
  v70->set_f_92(s->substr(0, 40));
  v70->set_f_33(s->substr(0, 15));
  v70->set_f_43(true);
  v70->set_f_74(0x3291773b09b83cd);
  v70->set_f_6(false);
  v70->set_f_93(0xb);
  v70->add_f_62(0xf3);
  v70->set_f_36(true);
  v70->set_f_63(0x10873ad6cfa8);
  v70->set_f_103(Message4::M2::M7::M15::E17_CONST_3);
  v70->set_f_96(s->substr(0, 19));
  v70->set_f_65(0.301165);
  v70->set_f_42(0x2f2fe12);
  v70->set_f_49(0.128965);
  v70->set_f_86(0x69724425);
  v70->set_f_20(0.452294);
  v70->set_f_46(Message4::M2::M7::M15::E12_CONST_2);
  v70->set_f_73(0x9b);
  v70->set_f_68(0x418a6136);
  v70->add_f_56(Message4::M2::M7::M15::E13_CONST_5);
  v70->set_f_45(0x6a);
  Message4::M2::M7::M15::M18* v72_0 = v70->add_f_158();
  Message4::M2::M7::M15::M18::M38* v73_0 = v72_0->add_f_2();
  v73_0->set_f_0(0x598b);
  v73_0->set_f_1(0xbe75);
  Message4::M2::M7::M15::M18* v72_1 = v70->add_f_158();
  Message4::M2::M7::M15::M18::M38* v74_0 = v72_1->add_f_2();
  v74_0->set_f_1(0x5f);
  v70->set_f_84(s->substr(0, 61));
  v70->set_f_30(s->substr(0, 1));
  v70->set_f_2(0.626645);
  v70->set_f_32(Message4::M2::M7::M15::E11_CONST_2);
  v70->set_f_44(s->substr(0, 108));
  v70->set_f_88(0x2b4440);
  v70->set_f_27(0xfbe2);
  v70->set_f_10(false);
  v70->set_f_83(0xda0e74);
  v70->set_f_19(0x27);
  v70->set_f_22(0.643463);
  v70->set_f_16(0x235e85);
  v70->set_f_48(true);
  v70->set_f_67(0x88);
  v70->set_f_24(s->substr(0, 1));
  v70->set_f_58(s->substr(0, 5));
  v70->set_f_54(false);
  v16->set_f_3(Message4::M2::E1_CONST_4);
  Message4::M2::M4* v74 = v16->mutable_f_7();
  v74->set_f_1(0x35);
  Message4::M2::M4::M11* v76_0 = v74->add_f_3();
  v76_0->set_f_0(0xb780);
  v16->set_f_1(0x11f5);
  v16->set_f_0(0x1f);
  v16->set_f_4(0x4c);
}

inline void Message4_Get_1(Message4* message) {
  ReceiveString((*message).f_3());
  for (const auto& v0 : (*message).f_12()) {
    for (const auto& v1 : v0.f_6()) {
      ReceiveInt32(v1.f_7());
      ReceiveUint64(v1.f_3());
      const Message4::M3::M5::M8& v2 = v1.f_17();
      const Message4::M3::M5::M8::M20& v3 = v2.f_3();
      ReceiveString(v3.f_0());
      for (const auto& v4 : v3.f_2()) {
        for (const auto& v5 : v4.f_2()) {
          ReceiveFloat(v5.f_0());
        }
        ReceiveString(v4.f_0());
      }
      for (const auto& v6 : v3.f_1()) {
        ReceiveInt64(v6.f_0());
      }
      for (auto f : v2.f_0()) {
        ReceiveInt64(f);
      }
      const Message4::M3::M5::M8::M16& v7 = v2.f_1();
      ReceiveInt32(v7.f_0());
      const Message4::M3::M5::M8::M16::M36& v8 = v7.f_3();
      ReceiveString(v8.f_0());
      for (const auto& v9 : v2.f_5()) {
        ReceiveDouble(v9.f_8());
        for (auto f : v9.f_2()) {
          ReceiveInt32(f);
        }
        ReceiveUint32(v9.f_3());
        ReceiveCord(v9.f_6());
        ReceiveFloat(v9.f_0());
        ReceiveUint32(v9.f_4());
        for (auto f : v9.f_5()) {
          ReceiveInt32(f);
        }
        for (const auto& f : v9.f_9()) {
          ReceiveString(f);
        }
        ReceiveInt32(v9.f_1());
        ReceiveString(v9.f_7());
        const Message4::M3::M5::M8::M22::M32& v10 = v9.f_11();
        ReceiveFloat(v10.f_0());
        const Message4::M3::M5::M8::M22::M37& v11 = v9.f_12();
        ReceiveBool(v11.f_0());
      }
      ReceiveString(v1.f_2());
      ReceiveString(v1.f_9());
      ReceiveInt32(v1.f_5());
      ReceiveBool(v1.f_1());
      ReceiveInt64(v1.f_4());
      ReceiveInt64(v1.f_0());
      ReceiveInt32(v1.f_8());
      ReceiveInt64(v1.f_6());
      for (const auto& v12 : v1.f_18()) {
        ReceiveInt32(v12.f_2());
        ReceiveString(v12.f_0());
        ReceiveInt32(v12.f_1());
      }
    }
    ReceiveInt32(v0.f_3());
    ReceiveInt32(v0.f_1());
    ReceiveString(v0.f_2());
    ReceiveUint32(v0.f_4());
    ReceiveDouble(v0.f_0());
  }
  for (auto f : (*message).f_0()) {
    ReceiveFloat(f);
  }
  ReceiveInt32((*message).f_1());
  const Message4::M2& v13 = (*message).f_8();
  ReceiveInt32(v13.f_0());
  ReceiveInt32(v13.f_3());
  ReceiveInt32(v13.f_4());
  const Message4::M2::M7& v14 = v13.f_9();
  for (const auto& v15 : v14.f_2()) {
    const Message4::M2::M7::M12::M17& v16 = v15.f_1();
    ReceiveString(v16.f_1());
    const Message4::M2::M7::M12::M17::M25& v17 = v16.f_8();
    for (const auto& v18 : v17.f_3()) {
      ReceiveInt32(v18.f_21());
      ReceiveFloat(v18.f_9());
      ReceiveString(v18.f_19());
      ReceiveString(v18.f_29());
      ReceiveInt64(v18.f_38());
      ReceiveInt32(v18.f_36());
      ReceiveUint64(v18.f_0());
      ReceiveBool(v18.f_26());
      ReceiveUint64(v18.f_31());
      ReceiveInt64(v18.f_1());
      ReceiveInt32(v18.f_10());
      for (auto f : v18.f_15()) {
        ReceiveInt32(f);
      }
      for (const auto& f : v18.f_3()) {
        ReceiveString(f);
      }
      ReceiveString(v18.f_13());
      ReceiveString(v18.f_24());
      ReceiveInt32(v18.f_6());
      ReceiveInt32(v18.f_25());
      ReceiveString(v18.f_22());
      ReceiveInt64(v18.f_7());
      const Message4::M2::M7::M12::M17::M25::M48::M49& v19 = v18.f_52();
      ReceiveUint64(v19.f_1());
      ReceiveInt64(v19.f_5());
      ReceiveInt32(v19.f_8());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M56& v20 = v19.f_19();
      for (const auto& v21 : v20.f_3()) {
        ReceiveBool(v21.f_0());
      }
      ReceiveUint64(v20.f_0());
      ReceiveBool(v19.f_3());
      for (auto f : v19.f_2()) {
        ReceiveUint32(f);
      }
      for (const auto& v22 : v19.f_18()) {
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62& v23 =
            v22.f_3();
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64& v24 =
            v23.f_2();
        for (const auto& v25 : v24.f_2()) {
          const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
              M67& v26 = v25.f_1();
          for (const auto& v27 : v26.f_2()) {
            for (const auto& v28 : v27.f_2()) {
              ReceiveString(v28.f_0());
              for (const auto& v29 : v28.f_3()) {
                ReceiveBool(v29.f_0());
                for (const auto& v30 : v29.f_2()) {
                  ReceiveUint64(v30.f_1());
                  ReceiveInt32(v30.f_0());
                }
                for (const auto& v31 : v29.f_1()) {
                  ReceiveString(v31.f_0());
                }
              }
            }
            ReceiveInt64(v27.f_0());
          }
          ReceiveInt32(v26.f_0());
          ReceiveInt64(v26.f_1());
          ReceiveBool(v25.f_0());
        }
        ReceiveString(v24.f_0());
        ReceiveInt64(v23.f_0());
        ReceiveString(v22.f_0());
      }
      ReceiveInt32(v19.f_9());
      ReceiveInt64(v19.f_7());
      for (auto f : v19.f_6()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v19.f_4());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57& v32 = v19.f_21();
      ReceiveInt32(v32.f_0());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61& v33 =
          v32.f_3();
      ReceiveInt32(v33.f_0());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63& v34 =
          v33.f_2();
      ReceiveString(v34.f_0());
      ReceiveDouble(v34.f_1());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66& v35 =
          v34.f_5();
      ReceiveInt32(v35.f_0());
      ReceiveBool(v19.f_0());
      ReceiveInt64(v18.f_30());
      ReceiveInt64(v18.f_8());
      ReceiveInt32(v18.f_2());
      ReceiveInt32(v18.f_5());
      ReceiveInt32(v18.f_37());
      for (const auto& v36 : v18.f_54()) {
        for (const auto& v37 : v36.f_10()) {
          ReceiveUint64(v37.f_0());
        }
        for (const auto& v38 : v36.f_9()) {
          ReceiveString(v38.f_0());
        }
        ReceiveDouble(v36.f_0());
        ReceiveInt64(v36.f_1());
        for (const auto& v39 : v36.f_6()) {
          ReceiveInt64(v39.f_0());
        }
        for (const auto& v40 : v36.f_12()) {
          ReceiveString(v40.f_16());
          ReceiveInt32(v40.f_59());
          ReceiveString(v40.f_34());
          ReceiveInt64(v40.f_55());
          ReceiveString(v40.f_43());
          for (const auto& f : v40.f_18()) {
            ReceiveString(f);
          }
          ReceiveString(v40.f_33());
          ReceiveInt64(v40.f_51());
          ReceiveBool(v40.f_64());
          ReceiveString(v40.f_45());
          ReceiveDouble(v40.f_11());
          ReceiveInt64(v40.f_9());
          ReceiveString(v40.f_3());
          ReceiveInt32(v40.f_62());
          ReceiveFloat(v40.f_15());
          ReceiveInt32(v40.f_14());
          ReceiveFloat(v40.f_52());
          ReceiveInt32(v40.f_17());
          ReceiveString(v40.f_25());
          ReceiveInt32(v40.f_41());
          for (auto f : v40.f_56()) {
            ReceiveInt32(f);
          }
          ReceiveInt32(v40.f_2());
          ReceiveInt64(v40.f_48());
          ReceiveFloat(v40.f_7());
          ReceiveCord(v40.f_58());
          ReceiveUint32(v40.f_32());
          ReceiveString(v40.f_40());
          ReceiveInt32(v40.f_10());
          ReceiveInt32(v40.f_12());
          ReceiveString(v40.f_20());
          const Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59& v41 =
              v40.f_96();
          ReceiveInt32(v41.f_0());
          ReceiveBool(v40.f_65());
          ReceiveBool(v40.f_23());
          ReceiveInt32(v40.f_30());
          ReceiveInt64(v40.f_13());
          ReceiveString(v40.f_28());
          ReceiveDouble(v40.f_5());
          ReceiveInt64(v40.f_29());
          ReceiveFloat(v40.f_42());
          ReceiveInt64(v40.f_37());
          ReceiveInt64(v40.f_67());
          ReceiveUint32(v40.f_21());
          ReceiveString(v40.f_63());
          ReceiveInt32(v40.f_57());
          ReceiveString(v40.f_8());
          ReceiveString(v40.f_38());
          ReceiveInt64(v40.f_39());
          ReceiveInt32(v40.f_53());
          ReceiveInt32(v40.f_31());
          ReceiveInt32(v40.f_61());
          ReceiveFloat(v40.f_60());
          ReceiveInt32(v40.f_6());
          ReceiveInt64(v40.f_26());
          ReceiveInt64(v40.f_27());
          ReceiveInt32(v40.f_19());
          ReceiveInt64(v40.f_0());
          ReceiveFloat(v40.f_35());
          for (auto f : v40.f_50()) {
            ReceiveUint64(f);
          }
          ReceiveUint64(v40.f_47());
          ReceiveFloat(v40.f_1());
          ReceiveUint32(v40.f_36());
          ReceiveString(v40.f_46());
          ReceiveString(v40.f_24());
          ReceiveString(v40.f_4());
          ReceiveFloat(v40.f_66());
          ReceiveInt32(v40.f_54());
          ReceiveString(v40.f_49());
          ReceiveUint64(v40.f_44());
          for (const auto& f : v40.f_22()) {
            ReceiveString(f);
          }
        }
        const Message4::M2::M7::M12::M17::M25::M48::M50::M53& v42 = v36.f_8();
        ReceiveInt32(v42.f_0());
        ReceiveInt64(v36.f_2());
        ReceiveInt64(v36.f_4());
        ReceiveInt32(v36.f_3());
      }
      ReceiveInt64(v18.f_32());
      ReceiveInt32(v18.f_18());
      ReceiveString(v18.f_14());
      ReceiveFloat(v18.f_20());
      ReceiveString(v18.f_17());
      ReceiveDouble(v18.f_12());
      for (auto f : v18.f_27()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v18.f_11());
      ReceiveFloat(v18.f_33());
      ReceiveString(v18.f_23());
      ReceiveInt32(v18.f_35());
      ReceiveInt32(v18.f_4());
      ReceiveString(v18.f_28());
      ReceiveInt32(v18.f_16());
      ReceiveFloat(v18.f_34());
    }
    for (const auto& v43 : v17.f_1()) {
      ReceiveUint64(v43.f_0());
    }
    ReceiveInt32(v17.f_0());
    ReceiveString(v16.f_4());
    ReceiveInt64(v16.f_2());
    const Message4::M2::M7::M12::M17::M26& v44 = v16.f_9();
    const Message4::M2::M7::M12::M17::M26::M42& v45 = v44.f_2();
    ReceiveBool(v45.f_0());
    ReceiveBool(v44.f_0());
    ReceiveInt64(v16.f_3());
    const Message4::M2::M7::M12::M17::M39& v46 = v16.f_10();
    ReceiveInt32(v46.f_0());
    for (const auto& f : v16.f_5()) {
      ReceiveString(f);
    }
    ReceiveFloat(v16.f_0());
    const Message4::M2::M7::M12::M19& v47 = v15.f_2();
    for (const auto& v48 : v47.f_3()) {
      ReceiveBool(v48.f_0());
      for (const auto& v49 : v48.f_1()) {
        ReceiveFloat(v49.f_0());
      }
    }
    ReceiveInt64(v47.f_0());
    const Message4::M2::M7::M12::M19::M31& v50 = v47.f_6();
    ReceiveInt32(v50.f_0());
    for (const auto& v51 : v50.f_3()) {
      ReceiveString(v51.f_0());
    }
    for (const auto& v52 : v50.f_1()) {
      ReceiveString(v52.f_0());
    }
    const Message4::M2::M7::M12::M19::M34& v53 = v47.f_8();
    ReceiveBool(v53.f_0());
    for (const auto& v54 : v47.f_10()) {
      ReceiveUint64(v54.f_0());
    }
    const Message4::M2::M7::M12::M19::M27& v55 = v47.f_1();
    ReceiveInt64(v55.f_0());
    ReceiveInt64(v15.f_0());
  }
  const Message4::M2::M7::M15& v56 = v14.f_5();
  ReceiveDouble(v56.f_59());
  ReceiveInt32(v56.f_16());
  ReceiveUint32(v56.f_53());
  ReceiveInt64(v56.f_93());
  ReceiveUint64(v56.f_81());
  ReceiveBool(v56.f_3());
  ReceiveString(v56.f_55());
  ReceiveInt32(v56.f_46());
  ReceiveString(v56.f_91());
  ReceiveBool(v56.f_41());
  ReceiveInt32(v56.f_17());
  ReceiveString(v56.f_70());
  for (auto f : v56.f_9()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v56.f_76());
  ReceiveInt32(v56.f_5());
  ReceiveUint32(v56.f_61());
  ReceiveString(v56.f_85());
  ReceiveUint64(v56.f_64());
  ReceiveDouble(v56.f_15());
  for (auto f : v56.f_56()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v56.f_39());
  ReceiveInt32(v56.f_105());
  ReceiveString(v56.f_104());
  ReceiveInt32(v56.f_11());
  ReceiveBool(v56.f_6());
  ReceiveFloat(v56.f_31());
  ReceiveDouble(v56.f_65());
  ReceiveInt64(v56.f_102());
  ReceiveString(v56.f_8());
  ReceiveBool(v56.f_54());
  ReceiveBool(v56.f_36());
  ReceiveInt32(v56.f_19());
  ReceiveInt32(v56.f_23());
  ReceiveString(v56.f_24());
  ReceiveFloat(v56.f_49());
  ReceiveString(v56.f_35());
  ReceiveInt32(v56.f_103());
  ReceiveString(v56.f_57());
  ReceiveUint64(v56.f_78());
  ReceiveString(v56.f_26());
  ReceiveString(v56.f_87());
  ReceiveInt32(v56.f_73());
  ReceiveUint32(v56.f_89());
  ReceiveString(v56.f_92());
  for (auto f : v56.f_21()) {
    ReceiveFloat(f);
  }
  ReceiveFloat(v56.f_47());
  for (const auto& v57 : v56.f_158()) {
    for (const auto& v58 : v57.f_2()) {
      ReceiveInt64(v58.f_1());
      ReceiveInt64(v58.f_0());
    }
    ReceiveFloat(v57.f_0());
  }
  ReceiveInt64(v56.f_27());
  ReceiveUint64(v56.f_28());
  ReceiveString(v56.f_52());
  for (auto f : v56.f_62()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v56.f_32());
  ReceiveInt64(v56.f_67());
  ReceiveInt64(v56.f_106());
  ReceiveString(v56.f_44());
  ReceiveBool(v56.f_25());
  ReceiveFloat(v56.f_101());
  ReceiveInt64(v56.f_34());
  ReceiveInt64(v56.f_63());
  ReceiveInt32(v56.f_79());
  ReceiveString(v56.f_33());
  ReceiveBool(v56.f_43());
  ReceiveString(v56.f_50());
  ReceiveString(v56.f_58());
  ReceiveInt64(v56.f_42());
  ReceiveInt32(v56.f_45());
  ReceiveUint32(v56.f_86());
  ReceiveString(v56.f_94());
  ReceiveInt64(v56.f_18());
  ReceiveFloat(v56.f_2());
  ReceiveString(v56.f_66());
  ReceiveDouble(v56.f_72());
  ReceiveString(v56.f_30());
  ReceiveFloat(v56.f_82());
  ReceiveInt32(v56.f_99());
  ReceiveInt64(v56.f_71());
  ReceiveInt32(v56.f_60());
  ReceiveFloat(v56.f_22());
  ReceiveString(v56.f_14());
  ReceiveDouble(v56.f_69());
  ReceiveBool(v56.f_10());
  ReceiveString(v56.f_37());
  ReceiveString(v56.f_90());
  ReceiveUint64(v56.f_74());
  for (auto f : v56.f_7()) {
    ReceiveInt32(f);
  }
  ReceiveString(v56.f_75());
  ReceiveInt64(v56.f_83());
  ReceiveInt64(v56.f_88());
  ReceiveInt32(v56.f_95());
  ReceiveInt32(v56.f_98());
  ReceiveString(v56.f_100());
  ReceiveString(v56.f_51());
  ReceiveFloat(v56.f_80());
  ReceiveUint32(v56.f_68());
  ReceiveBool(v56.f_48());
  ReceiveString(v56.f_29());
  ReceiveString(v56.f_96());
  ReceiveFloat(v56.f_4());
  ReceiveInt32(v56.f_77());
  ReceiveInt32(v56.f_13());
  ReceiveString(v56.f_84());
  ReceiveString(v56.f_97());
  ReceiveFloat(v56.f_20());
  ReceiveString(v56.f_1());
  ReceiveInt32(v56.f_0());
  ReceiveBool(v56.f_40());
  ReceiveInt64(v56.f_38());
  ReceiveInt32(v56.f_12());
  for (const auto& v59 : v14.f_3()) {
    ReceiveInt32(v59.f_0());
    for (const auto& v60 : v59.f_1()) {
      ReceiveInt64(v60.f_0());
      for (const auto& v61 : v60.f_1()) {
        ReceiveBool(v61.f_1());
        ReceiveUint32(v61.f_0());
      }
    }
  }
  ReceiveInt32(v14.f_0());
  const Message4::M2::M6& v62 = v13.f_8();
  ReceiveInt64(v62.f_2());
  ReceiveInt64(v62.f_0());
  const Message4::M2::M6::M9& v63 = v62.f_4();
  const Message4::M2::M6::M9::M23& v64 = v63.f_1();
  for (const auto& v65 : v64.f_3()) {
    ReceiveUint32(v65.f_0());
    const Message4::M2::M6::M9::M23::M30::M47& v66 = v65.f_1();
    for (auto f : v66.f_0()) {
      ReceiveUint32(f);
    }
  }
  const Message4::M2::M6::M9::M23::M24& v67 = v64.f_2();
  ReceiveString(v67.f_0());
  ReceiveBool(v64.f_0());
  ReceiveUint64(v63.f_0());
  ReceiveInt32(v62.f_1());
  for (const auto& v68 : v62.f_5()) {
    ReceiveUint64(v68.f_0());
  }
  const Message4::M2::M4& v69 = v13.f_7();
  ReceiveInt32(v69.f_1());
  ReceiveUint32(v69.f_2());
  for (const auto& v70 : v69.f_3()) {
    ReceiveInt32(v70.f_0());
  }
  ReceiveString(v69.f_0());
  ReceiveInt64(v13.f_1());
  ReceiveString(v13.f_2());
  ReceiveInt64((*message).f_2());
  for (const auto& v71 : (*message).f_7()) {
    ReceiveString(v71.f_0());
  }
}

inline void Message4_Get_2(Message4* message) {
  const Message4::M2& v0 = (*message).f_8();
  const Message4::M2::M7& v1 = v0.f_9();
  for (const auto& v2 : v1.f_2()) {
    const Message4::M2::M7::M12::M19& v3 = v2.f_2();
    const Message4::M2::M7::M12::M19::M34& v4 = v3.f_8();
    ReceiveBool(v4.f_0());
    const Message4::M2::M7::M12::M19::M27& v5 = v3.f_1();
    ReceiveInt64(v5.f_0());
    ReceiveInt64(v3.f_0());
    for (const auto& v6 : v3.f_3()) {
      ReceiveBool(v6.f_0());
      for (const auto& v7 : v6.f_1()) {
        ReceiveFloat(v7.f_0());
      }
    }
    for (const auto& v8 : v3.f_10()) {
      ReceiveUint64(v8.f_0());
    }
    const Message4::M2::M7::M12::M19::M31& v9 = v3.f_6();
    for (const auto& v10 : v9.f_3()) {
      ReceiveString(v10.f_0());
    }
    ReceiveInt32(v9.f_0());
    for (const auto& v11 : v9.f_1()) {
      ReceiveString(v11.f_0());
    }
    const Message4::M2::M7::M12::M17& v12 = v2.f_1();
    ReceiveString(v12.f_1());
    ReceiveInt64(v12.f_2());
    const Message4::M2::M7::M12::M17::M25& v13 = v12.f_8();
    for (const auto& v14 : v13.f_1()) {
      ReceiveUint64(v14.f_0());
    }
    ReceiveInt32(v13.f_0());
    for (const auto& v15 : v13.f_3()) {
      ReceiveInt32(v15.f_36());
      ReceiveInt32(v15.f_5());
      for (auto f : v15.f_27()) {
        ReceiveInt32(f);
      }
      ReceiveUint64(v15.f_31());
      ReceiveInt64(v15.f_32());
      ReceiveFloat(v15.f_20());
      ReceiveInt32(v15.f_16());
      ReceiveString(v15.f_24());
      ReceiveString(v15.f_23());
      ReceiveBool(v15.f_26());
      ReceiveFloat(v15.f_9());
      ReceiveInt64(v15.f_30());
      ReceiveString(v15.f_17());
      ReceiveString(v15.f_22());
      const Message4::M2::M7::M12::M17::M25::M48::M49& v16 = v15.f_52();
      for (auto f : v16.f_2()) {
        ReceiveUint32(f);
      }
      ReceiveBool(v16.f_0());
      ReceiveInt32(v16.f_8());
      ReceiveInt64(v16.f_5());
      for (auto f : v16.f_6()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v16.f_7());
      ReceiveInt32(v16.f_4());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57& v17 = v16.f_21();
      ReceiveInt32(v17.f_0());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61& v18 =
          v17.f_3();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63& v19 =
          v18.f_2();
      ReceiveDouble(v19.f_1());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66& v20 =
          v19.f_5();
      ReceiveInt32(v20.f_0());
      ReceiveString(v19.f_0());
      ReceiveInt32(v18.f_0());
      for (const auto& v21 : v16.f_18()) {
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62& v22 =
            v21.f_3();
        ReceiveInt64(v22.f_0());
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64& v23 =
            v22.f_2();
        ReceiveString(v23.f_0());
        for (const auto& v24 : v23.f_2()) {
          const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
              M67& v25 = v24.f_1();
          for (const auto& v26 : v25.f_2()) {
            ReceiveInt64(v26.f_0());
            for (const auto& v27 : v26.f_2()) {
              ReceiveString(v27.f_0());
              for (const auto& v28 : v27.f_3()) {
                for (const auto& v29 : v28.f_2()) {
                  ReceiveUint64(v29.f_1());
                  ReceiveInt32(v29.f_0());
                }
                for (const auto& v30 : v28.f_1()) {
                  ReceiveString(v30.f_0());
                }
                ReceiveBool(v28.f_0());
              }
            }
          }
          ReceiveInt32(v25.f_0());
          ReceiveInt64(v25.f_1());
          ReceiveBool(v24.f_0());
        }
        ReceiveString(v21.f_0());
      }
      ReceiveInt32(v16.f_9());
      ReceiveUint64(v16.f_1());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M56& v31 = v16.f_19();
      for (const auto& v32 : v31.f_3()) {
        ReceiveBool(v32.f_0());
      }
      ReceiveUint64(v31.f_0());
      ReceiveBool(v16.f_3());
      for (const auto& v33 : v15.f_54()) {
        ReceiveInt64(v33.f_1());
        ReceiveInt64(v33.f_2());
        for (const auto& v34 : v33.f_12()) {
          ReceiveFloat(v34.f_60());
          ReceiveUint32(v34.f_32());
          for (const auto& f : v34.f_18()) {
            ReceiveString(f);
          }
          ReceiveInt64(v34.f_48());
          ReceiveInt64(v34.f_55());
          ReceiveFloat(v34.f_7());
          ReceiveString(v34.f_25());
          ReceiveString(v34.f_63());
          for (auto f : v34.f_56()) {
            ReceiveInt32(f);
          }
          ReceiveString(v34.f_34());
          ReceiveUint32(v34.f_36());
          ReceiveString(v34.f_8());
          for (const auto& f : v34.f_22()) {
            ReceiveString(f);
          }
          ReceiveInt64(v34.f_51());
          ReceiveInt32(v34.f_2());
          ReceiveInt64(v34.f_67());
          ReceiveString(v34.f_40());
          ReceiveInt64(v34.f_13());
          ReceiveInt64(v34.f_29());
          ReceiveInt32(v34.f_61());
          ReceiveUint64(v34.f_44());
          ReceiveDouble(v34.f_11());
          ReceiveString(v34.f_33());
          ReceiveInt64(v34.f_0());
          ReceiveInt32(v34.f_17());
          ReceiveInt32(v34.f_62());
          ReceiveFloat(v34.f_42());
          const Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59& v35 =
              v34.f_96();
          ReceiveInt32(v35.f_0());
          ReceiveFloat(v34.f_66());
          ReceiveInt32(v34.f_6());
          ReceiveInt64(v34.f_39());
          ReceiveInt32(v34.f_57());
          ReceiveFloat(v34.f_35());
          ReceiveInt32(v34.f_30());
          ReceiveInt64(v34.f_9());
          ReceiveFloat(v34.f_52());
          ReceiveInt32(v34.f_10());
          ReceiveString(v34.f_46());
          ReceiveDouble(v34.f_5());
          ReceiveInt64(v34.f_27());
          ReceiveBool(v34.f_64());
          ReceiveString(v34.f_28());
          ReceiveUint32(v34.f_21());
          ReceiveString(v34.f_45());
          ReceiveString(v34.f_38());
          ReceiveInt64(v34.f_26());
          ReceiveBool(v34.f_23());
          ReceiveBool(v34.f_65());
          ReceiveString(v34.f_43());
          ReceiveInt32(v34.f_14());
          for (auto f : v34.f_50()) {
            ReceiveUint64(f);
          }
          ReceiveInt32(v34.f_41());
          ReceiveString(v34.f_3());
          ReceiveInt32(v34.f_31());
          ReceiveUint64(v34.f_47());
          ReceiveInt32(v34.f_54());
          ReceiveFloat(v34.f_15());
          ReceiveInt64(v34.f_37());
          ReceiveInt32(v34.f_19());
          ReceiveCord(v34.f_58());
          ReceiveString(v34.f_4());
          ReceiveString(v34.f_24());
          ReceiveInt32(v34.f_12());
          ReceiveString(v34.f_49());
          ReceiveString(v34.f_20());
          ReceiveInt32(v34.f_59());
          ReceiveString(v34.f_16());
          ReceiveInt32(v34.f_53());
          ReceiveFloat(v34.f_1());
        }
        for (const auto& v36 : v33.f_6()) {
          ReceiveInt64(v36.f_0());
        }
        for (const auto& v37 : v33.f_9()) {
          ReceiveString(v37.f_0());
        }
        ReceiveInt32(v33.f_3());
        ReceiveInt64(v33.f_4());
        ReceiveDouble(v33.f_0());
        const Message4::M2::M7::M12::M17::M25::M48::M50::M53& v38 = v33.f_8();
        ReceiveInt32(v38.f_0());
        for (const auto& v39 : v33.f_10()) {
          ReceiveUint64(v39.f_0());
        }
      }
      for (const auto& f : v15.f_3()) {
        ReceiveString(f);
      }
      ReceiveInt32(v15.f_37());
      ReceiveInt32(v15.f_25());
      ReceiveDouble(v15.f_12());
      ReceiveString(v15.f_14());
      ReceiveString(v15.f_19());
      ReceiveUint64(v15.f_0());
      ReceiveInt64(v15.f_38());
      ReceiveInt64(v15.f_7());
      for (auto f : v15.f_15()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v15.f_6());
      ReceiveInt64(v15.f_1());
      ReceiveInt64(v15.f_11());
      ReceiveInt32(v15.f_2());
      ReceiveString(v15.f_29());
      ReceiveInt32(v15.f_35());
      ReceiveString(v15.f_28());
      ReceiveInt32(v15.f_10());
      ReceiveInt32(v15.f_18());
      ReceiveInt32(v15.f_4());
      ReceiveString(v15.f_13());
      ReceiveInt64(v15.f_8());
      ReceiveInt32(v15.f_21());
      ReceiveFloat(v15.f_34());
      ReceiveFloat(v15.f_33());
    }
    ReceiveInt64(v12.f_3());
    for (const auto& f : v12.f_5()) {
      ReceiveString(f);
    }
    ReceiveString(v12.f_4());
    const Message4::M2::M7::M12::M17::M26& v40 = v12.f_9();
    ReceiveBool(v40.f_0());
    const Message4::M2::M7::M12::M17::M26::M42& v41 = v40.f_2();
    ReceiveBool(v41.f_0());
    ReceiveFloat(v12.f_0());
    const Message4::M2::M7::M12::M17::M39& v42 = v12.f_10();
    ReceiveInt32(v42.f_0());
    ReceiveInt64(v2.f_0());
  }
  for (const auto& v43 : v1.f_3()) {
    ReceiveInt32(v43.f_0());
    for (const auto& v44 : v43.f_1()) {
      ReceiveInt64(v44.f_0());
      for (const auto& v45 : v44.f_1()) {
        ReceiveUint32(v45.f_0());
        ReceiveBool(v45.f_1());
      }
    }
  }
  ReceiveInt32(v1.f_0());
  const Message4::M2::M7::M15& v46 = v1.f_5();
  ReceiveFloat(v46.f_22());
  ReceiveBool(v46.f_41());
  ReceiveString(v46.f_37());
  ReceiveBool(v46.f_43());
  ReceiveUint64(v46.f_28());
  ReceiveUint64(v46.f_64());
  ReceiveString(v46.f_50());
  ReceiveInt32(v46.f_73());
  ReceiveInt32(v46.f_99());
  ReceiveInt64(v46.f_67());
  for (auto f : v46.f_9()) {
    ReceiveInt32(f);
  }
  ReceiveBool(v46.f_40());
  ReceiveUint32(v46.f_86());
  ReceiveDouble(v46.f_69());
  ReceiveFloat(v46.f_20());
  ReceiveBool(v46.f_48());
  ReceiveString(v46.f_51());
  ReceiveInt32(v46.f_60());
  ReceiveInt32(v46.f_23());
  ReceiveBool(v46.f_10());
  ReceiveString(v46.f_66());
  ReceiveInt32(v46.f_95());
  ReceiveFloat(v46.f_31());
  ReceiveString(v46.f_58());
  ReceiveInt64(v46.f_18());
  ReceiveBool(v46.f_3());
  ReceiveInt64(v46.f_42());
  ReceiveString(v46.f_33());
  ReceiveInt32(v46.f_45());
  ReceiveString(v46.f_91());
  ReceiveString(v46.f_104());
  ReceiveInt64(v46.f_102());
  ReceiveFloat(v46.f_80());
  ReceiveBool(v46.f_36());
  ReceiveUint64(v46.f_78());
  ReceiveInt32(v46.f_77());
  ReceiveString(v46.f_14());
  ReceiveInt64(v46.f_106());
  ReceiveBool(v46.f_25());
  ReceiveUint32(v46.f_89());
  ReceiveDouble(v46.f_72());
  for (auto f : v46.f_62()) {
    ReceiveInt32(f);
  }
  ReceiveBool(v46.f_54());
  ReceiveInt64(v46.f_63());
  ReceiveString(v46.f_92());
  ReceiveInt32(v46.f_17());
  ReceiveInt64(v46.f_27());
  ReceiveInt32(v46.f_39());
  ReceiveInt32(v46.f_32());
  ReceiveUint32(v46.f_68());
  ReceiveInt32(v46.f_0());
  ReceiveString(v46.f_44());
  ReceiveInt32(v46.f_12());
  ReceiveString(v46.f_57());
  ReceiveString(v46.f_90());
  ReceiveString(v46.f_94());
  ReceiveInt64(v46.f_93());
  ReceiveDouble(v46.f_59());
  ReceiveString(v46.f_75());
  ReceiveInt32(v46.f_76());
  ReceiveFloat(v46.f_2());
  ReceiveInt32(v46.f_16());
  ReceiveString(v46.f_70());
  ReceiveString(v46.f_96());
  ReceiveString(v46.f_52());
  ReceiveInt64(v46.f_83());
  ReceiveFloat(v46.f_47());
  ReceiveFloat(v46.f_82());
  ReceiveUint64(v46.f_81());
  ReceiveInt64(v46.f_71());
  ReceiveString(v46.f_24());
  ReceiveUint32(v46.f_53());
  ReceiveString(v46.f_30());
  ReceiveInt64(v46.f_38());
  ReceiveInt32(v46.f_19());
  ReceiveUint32(v46.f_61());
  ReceiveFloat(v46.f_49());
  ReceiveString(v46.f_87());
  ReceiveDouble(v46.f_65());
  ReceiveString(v46.f_85());
  ReceiveString(v46.f_97());
  ReceiveString(v46.f_8());
  ReceiveString(v46.f_35());
  ReceiveInt32(v46.f_5());
  ReceiveString(v46.f_26());
  ReceiveInt32(v46.f_11());
  for (auto f : v46.f_56()) {
    ReceiveInt32(f);
  }
  for (auto f : v46.f_7()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v46.f_103());
  ReceiveInt32(v46.f_13());
  ReceiveInt32(v46.f_46());
  for (const auto& v47 : v46.f_158()) {
    for (const auto& v48 : v47.f_2()) {
      ReceiveInt64(v48.f_0());
      ReceiveInt64(v48.f_1());
    }
    ReceiveFloat(v47.f_0());
  }
  ReceiveInt32(v46.f_105());
  for (auto f : v46.f_21()) {
    ReceiveFloat(f);
  }
  ReceiveFloat(v46.f_101());
  ReceiveInt32(v46.f_98());
  ReceiveDouble(v46.f_15());
  ReceiveString(v46.f_84());
  ReceiveInt64(v46.f_34());
  ReceiveString(v46.f_100());
  ReceiveUint64(v46.f_74());
  ReceiveFloat(v46.f_4());
  ReceiveString(v46.f_55());
  ReceiveInt32(v46.f_79());
  ReceiveBool(v46.f_6());
  ReceiveString(v46.f_29());
  ReceiveString(v46.f_1());
  ReceiveInt64(v46.f_88());
  ReceiveInt32(v0.f_3());
  const Message4::M2::M6& v49 = v0.f_8();
  const Message4::M2::M6::M9& v50 = v49.f_4();
  const Message4::M2::M6::M9::M23& v51 = v50.f_1();
  const Message4::M2::M6::M9::M23::M24& v52 = v51.f_2();
  ReceiveString(v52.f_0());
  ReceiveBool(v51.f_0());
  for (const auto& v53 : v51.f_3()) {
    const Message4::M2::M6::M9::M23::M30::M47& v54 = v53.f_1();
    for (auto f : v54.f_0()) {
      ReceiveUint32(f);
    }
    ReceiveUint32(v53.f_0());
  }
  ReceiveUint64(v50.f_0());
  ReceiveInt64(v49.f_0());
  ReceiveInt32(v49.f_1());
  ReceiveInt64(v49.f_2());
  for (const auto& v55 : v49.f_5()) {
    ReceiveUint64(v55.f_0());
  }
  ReceiveString(v0.f_2());
  ReceiveInt32(v0.f_0());
  ReceiveInt32(v0.f_4());
  const Message4::M2::M4& v56 = v0.f_7();
  ReceiveUint32(v56.f_2());
  ReceiveInt32(v56.f_1());
  ReceiveString(v56.f_0());
  for (const auto& v57 : v56.f_3()) {
    ReceiveInt32(v57.f_0());
  }
  ReceiveInt64(v0.f_1());
  ReceiveInt32((*message).f_1());
  for (const auto& v58 : (*message).f_7()) {
    ReceiveString(v58.f_0());
  }
  for (const auto& v59 : (*message).f_12()) {
    for (const auto& v60 : v59.f_6()) {
      ReceiveInt64(v60.f_0());
      ReceiveString(v60.f_9());
      ReceiveInt32(v60.f_5());
      ReceiveUint64(v60.f_3());
      ReceiveInt32(v60.f_8());
      ReceiveInt64(v60.f_4());
      ReceiveInt32(v60.f_7());
      ReceiveString(v60.f_2());
      for (const auto& v61 : v60.f_18()) {
        ReceiveString(v61.f_0());
        ReceiveInt32(v61.f_1());
        ReceiveInt32(v61.f_2());
      }
      const Message4::M3::M5::M8& v62 = v60.f_17();
      for (const auto& v63 : v62.f_5()) {
        const Message4::M3::M5::M8::M22::M32& v64 = v63.f_11();
        ReceiveFloat(v64.f_0());
        ReceiveInt32(v63.f_1());
        ReceiveDouble(v63.f_8());
        for (const auto& f : v63.f_9()) {
          ReceiveString(f);
        }
        ReceiveString(v63.f_7());
        ReceiveUint32(v63.f_3());
        for (auto f : v63.f_2()) {
          ReceiveInt32(f);
        }
        for (auto f : v63.f_5()) {
          ReceiveInt32(f);
        }
        ReceiveCord(v63.f_6());
        const Message4::M3::M5::M8::M22::M37& v65 = v63.f_12();
        ReceiveBool(v65.f_0());
        ReceiveUint32(v63.f_4());
        ReceiveFloat(v63.f_0());
      }
      const Message4::M3::M5::M8::M16& v66 = v62.f_1();
      ReceiveInt32(v66.f_0());
      const Message4::M3::M5::M8::M16::M36& v67 = v66.f_3();
      ReceiveString(v67.f_0());
      for (auto f : v62.f_0()) {
        ReceiveInt64(f);
      }
      const Message4::M3::M5::M8::M20& v68 = v62.f_3();
      ReceiveString(v68.f_0());
      for (const auto& v69 : v68.f_1()) {
        ReceiveInt64(v69.f_0());
      }
      for (const auto& v70 : v68.f_2()) {
        for (const auto& v71 : v70.f_2()) {
          ReceiveFloat(v71.f_0());
        }
        ReceiveString(v70.f_0());
      }
      ReceiveBool(v60.f_1());
      ReceiveInt64(v60.f_6());
    }
    ReceiveString(v59.f_2());
    ReceiveInt32(v59.f_1());
    ReceiveInt32(v59.f_3());
    ReceiveUint32(v59.f_4());
    ReceiveDouble(v59.f_0());
  }
  ReceiveString((*message).f_3());
  for (auto f : (*message).f_0()) {
    ReceiveFloat(f);
  }
  ReceiveInt64((*message).f_2());
}

inline void Message4_Get_3(Message4* message) {
  for (const auto& v0 : (*message).f_12()) {
    ReceiveDouble(v0.f_0());
    ReceiveInt32(v0.f_3());
    ReceiveString(v0.f_2());
    ReceiveInt32(v0.f_1());
    ReceiveUint32(v0.f_4());
    for (const auto& v1 : v0.f_6()) {
      for (const auto& v2 : v1.f_18()) {
        ReceiveInt32(v2.f_2());
        ReceiveInt32(v2.f_1());
        ReceiveString(v2.f_0());
      }
      ReceiveString(v1.f_9());
      ReceiveInt32(v1.f_8());
      ReceiveInt64(v1.f_0());
      ReceiveUint64(v1.f_3());
      ReceiveInt32(v1.f_7());
      ReceiveInt32(v1.f_5());
      const Message4::M3::M5::M8& v3 = v1.f_17();
      for (const auto& v4 : v3.f_5()) {
        ReceiveInt32(v4.f_1());
        ReceiveUint32(v4.f_4());
        ReceiveDouble(v4.f_8());
        ReceiveFloat(v4.f_0());
        ReceiveString(v4.f_7());
        ReceiveCord(v4.f_6());
        const Message4::M3::M5::M8::M22::M37& v5 = v4.f_12();
        ReceiveBool(v5.f_0());
        for (auto f : v4.f_2()) {
          ReceiveInt32(f);
        }
        for (const auto& f : v4.f_9()) {
          ReceiveString(f);
        }
        ReceiveUint32(v4.f_3());
        const Message4::M3::M5::M8::M22::M32& v6 = v4.f_11();
        ReceiveFloat(v6.f_0());
        for (auto f : v4.f_5()) {
          ReceiveInt32(f);
        }
      }
      const Message4::M3::M5::M8::M16& v7 = v3.f_1();
      ReceiveInt32(v7.f_0());
      const Message4::M3::M5::M8::M16::M36& v8 = v7.f_3();
      ReceiveString(v8.f_0());
      for (auto f : v3.f_0()) {
        ReceiveInt64(f);
      }
      const Message4::M3::M5::M8::M20& v9 = v3.f_3();
      for (const auto& v10 : v9.f_1()) {
        ReceiveInt64(v10.f_0());
      }
      for (const auto& v11 : v9.f_2()) {
        ReceiveString(v11.f_0());
        for (const auto& v12 : v11.f_2()) {
          ReceiveFloat(v12.f_0());
        }
      }
      ReceiveString(v9.f_0());
      ReceiveBool(v1.f_1());
      ReceiveInt64(v1.f_6());
      ReceiveInt64(v1.f_4());
      ReceiveString(v1.f_2());
    }
  }
  ReceiveInt64((*message).f_2());
  for (const auto& v13 : (*message).f_7()) {
    ReceiveString(v13.f_0());
  }
  for (auto f : (*message).f_0()) {
    ReceiveFloat(f);
  }
  ReceiveString((*message).f_3());
  const Message4::M2& v14 = (*message).f_8();
  const Message4::M2::M7& v15 = v14.f_9();
  const Message4::M2::M7::M15& v16 = v15.f_5();
  ReceiveBool(v16.f_6());
  ReceiveInt32(v16.f_77());
  ReceiveInt32(v16.f_11());
  ReceiveInt32(v16.f_105());
  ReceiveUint64(v16.f_64());
  ReceiveInt32(v16.f_12());
  ReceiveString(v16.f_14());
  ReceiveUint32(v16.f_53());
  ReceiveString(v16.f_55());
  ReceiveFloat(v16.f_80());
  ReceiveString(v16.f_52());
  ReceiveInt64(v16.f_67());
  ReceiveUint64(v16.f_81());
  for (const auto& v17 : v16.f_158()) {
    for (const auto& v18 : v17.f_2()) {
      ReceiveInt64(v18.f_0());
      ReceiveInt64(v18.f_1());
    }
    ReceiveFloat(v17.f_0());
  }
  ReceiveFloat(v16.f_22());
  ReceiveInt32(v16.f_95());
  ReceiveInt64(v16.f_71());
  ReceiveFloat(v16.f_20());
  ReceiveString(v16.f_58());
  ReceiveInt32(v16.f_45());
  ReceiveString(v16.f_91());
  ReceiveBool(v16.f_3());
  ReceiveString(v16.f_57());
  ReceiveBool(v16.f_25());
  ReceiveString(v16.f_66());
  ReceiveBool(v16.f_54());
  ReceiveString(v16.f_30());
  ReceiveUint32(v16.f_68());
  ReceiveString(v16.f_87());
  ReceiveDouble(v16.f_59());
  ReceiveString(v16.f_96());
  ReceiveString(v16.f_100());
  ReceiveString(v16.f_1());
  ReceiveInt64(v16.f_18());
  ReceiveUint32(v16.f_86());
  ReceiveString(v16.f_84());
  ReceiveInt32(v16.f_103());
  ReceiveString(v16.f_26());
  ReceiveInt32(v16.f_46());
  ReceiveUint64(v16.f_78());
  ReceiveString(v16.f_51());
  ReceiveInt64(v16.f_102());
  ReceiveInt32(v16.f_0());
  ReceiveUint32(v16.f_89());
  ReceiveBool(v16.f_41());
  ReceiveInt32(v16.f_32());
  ReceiveFloat(v16.f_101());
  ReceiveString(v16.f_33());
  for (auto f : v16.f_7()) {
    ReceiveInt32(f);
  }
  ReceiveString(v16.f_24());
  ReceiveInt64(v16.f_63());
  ReceiveDouble(v16.f_65());
  ReceiveBool(v16.f_10());
  ReceiveString(v16.f_50());
  ReceiveUint64(v16.f_74());
  ReceiveInt32(v16.f_79());
  ReceiveString(v16.f_104());
  ReceiveInt32(v16.f_16());
  for (auto f : v16.f_62()) {
    ReceiveInt32(f);
  }
  for (auto f : v16.f_56()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v16.f_98());
  ReceiveInt64(v16.f_106());
  ReceiveUint32(v16.f_61());
  ReceiveInt32(v16.f_19());
  ReceiveInt64(v16.f_27());
  ReceiveString(v16.f_29());
  for (auto f : v16.f_9()) {
    ReceiveInt32(f);
  }
  ReceiveString(v16.f_37());
  ReceiveInt64(v16.f_42());
  ReceiveInt32(v16.f_39());
  ReceiveInt64(v16.f_88());
  ReceiveUint64(v16.f_28());
  ReceiveFloat(v16.f_82());
  ReceiveInt32(v16.f_99());
  ReceiveString(v16.f_35());
  ReceiveDouble(v16.f_72());
  ReceiveString(v16.f_75());
  ReceiveInt32(v16.f_5());
  ReceiveBool(v16.f_40());
  ReceiveInt64(v16.f_38());
  ReceiveInt32(v16.f_60());
  ReceiveInt32(v16.f_73());
  ReceiveString(v16.f_44());
  ReceiveFloat(v16.f_4());
  ReceiveString(v16.f_94());
  ReceiveFloat(v16.f_2());
  ReceiveFloat(v16.f_47());
  ReceiveString(v16.f_70());
  ReceiveFloat(v16.f_49());
  ReceiveInt64(v16.f_93());
  ReceiveString(v16.f_92());
  ReceiveString(v16.f_90());
  ReceiveString(v16.f_97());
  ReceiveBool(v16.f_48());
  ReceiveInt64(v16.f_83());
  ReceiveInt32(v16.f_17());
  ReceiveInt32(v16.f_76());
  ReceiveString(v16.f_8());
  ReceiveInt64(v16.f_34());
  ReceiveInt32(v16.f_23());
  ReceiveInt32(v16.f_13());
  for (auto f : v16.f_21()) {
    ReceiveFloat(f);
  }
  ReceiveFloat(v16.f_31());
  ReceiveBool(v16.f_36());
  ReceiveString(v16.f_85());
  ReceiveDouble(v16.f_15());
  ReceiveBool(v16.f_43());
  ReceiveDouble(v16.f_69());
  for (const auto& v19 : v15.f_2()) {
    const Message4::M2::M7::M12::M19& v20 = v19.f_2();
    const Message4::M2::M7::M12::M19::M34& v21 = v20.f_8();
    ReceiveBool(v21.f_0());
    for (const auto& v22 : v20.f_10()) {
      ReceiveUint64(v22.f_0());
    }
    ReceiveInt64(v20.f_0());
    const Message4::M2::M7::M12::M19::M27& v23 = v20.f_1();
    ReceiveInt64(v23.f_0());
    const Message4::M2::M7::M12::M19::M31& v24 = v20.f_6();
    for (const auto& v25 : v24.f_1()) {
      ReceiveString(v25.f_0());
    }
    ReceiveInt32(v24.f_0());
    for (const auto& v26 : v24.f_3()) {
      ReceiveString(v26.f_0());
    }
    for (const auto& v27 : v20.f_3()) {
      ReceiveBool(v27.f_0());
      for (const auto& v28 : v27.f_1()) {
        ReceiveFloat(v28.f_0());
      }
    }
    ReceiveInt64(v19.f_0());
    const Message4::M2::M7::M12::M17& v29 = v19.f_1();
    for (const auto& f : v29.f_5()) {
      ReceiveString(f);
    }
    ReceiveInt64(v29.f_3());
    const Message4::M2::M7::M12::M17::M25& v30 = v29.f_8();
    ReceiveInt32(v30.f_0());
    for (const auto& v31 : v30.f_1()) {
      ReceiveUint64(v31.f_0());
    }
    for (const auto& v32 : v30.f_3()) {
      ReceiveBool(v32.f_26());
      ReceiveInt32(v32.f_5());
      ReceiveInt32(v32.f_37());
      ReceiveInt32(v32.f_4());
      ReceiveInt32(v32.f_6());
      ReceiveFloat(v32.f_20());
      for (auto f : v32.f_27()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v32.f_8());
      ReceiveInt32(v32.f_2());
      ReceiveInt64(v32.f_30());
      for (const auto& f : v32.f_3()) {
        ReceiveString(f);
      }
      ReceiveInt64(v32.f_7());
      ReceiveUint64(v32.f_0());
      ReceiveString(v32.f_22());
      ReceiveInt32(v32.f_25());
      ReceiveString(v32.f_23());
      ReceiveInt64(v32.f_38());
      ReceiveFloat(v32.f_33());
      ReceiveInt32(v32.f_35());
      for (auto f : v32.f_15()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v32.f_11());
      ReceiveString(v32.f_28());
      ReceiveInt64(v32.f_32());
      ReceiveUint64(v32.f_31());
      ReceiveString(v32.f_14());
      ReceiveInt32(v32.f_21());
      ReceiveFloat(v32.f_9());
      ReceiveString(v32.f_24());
      ReceiveFloat(v32.f_34());
      ReceiveInt32(v32.f_16());
      ReceiveString(v32.f_17());
      for (const auto& v33 : v32.f_54()) {
        ReceiveInt32(v33.f_3());
        ReceiveInt64(v33.f_4());
        ReceiveInt64(v33.f_1());
        ReceiveInt64(v33.f_2());
        const Message4::M2::M7::M12::M17::M25::M48::M50::M53& v34 = v33.f_8();
        ReceiveInt32(v34.f_0());
        for (const auto& v35 : v33.f_12()) {
          ReceiveFloat(v35.f_7());
          ReceiveUint64(v35.f_47());
          ReceiveString(v35.f_63());
          ReceiveFloat(v35.f_1());
          ReceiveInt32(v35.f_2());
          ReceiveInt64(v35.f_9());
          ReceiveFloat(v35.f_42());
          ReceiveBool(v35.f_65());
          ReceiveInt32(v35.f_41());
          ReceiveDouble(v35.f_5());
          ReceiveString(v35.f_45());
          ReceiveInt32(v35.f_19());
          ReceiveString(v35.f_3());
          ReceiveFloat(v35.f_66());
          ReceiveBool(v35.f_64());
          ReceiveBool(v35.f_23());
          ReceiveInt64(v35.f_0());
          ReceiveInt64(v35.f_48());
          ReceiveDouble(v35.f_11());
          ReceiveString(v35.f_20());
          ReceiveInt64(v35.f_67());
          ReceiveUint32(v35.f_32());
          ReceiveString(v35.f_28());
          ReceiveInt64(v35.f_26());
          ReceiveString(v35.f_43());
          ReceiveInt32(v35.f_59());
          ReceiveString(v35.f_33());
          ReceiveInt32(v35.f_12());
          for (auto f : v35.f_50()) {
            ReceiveUint64(f);
          }
          ReceiveUint32(v35.f_21());
          ReceiveInt64(v35.f_13());
          ReceiveInt64(v35.f_55());
          ReceiveInt32(v35.f_17());
          ReceiveInt32(v35.f_53());
          ReceiveFloat(v35.f_60());
          ReceiveInt64(v35.f_29());
          ReceiveUint64(v35.f_44());
          for (const auto& f : v35.f_18()) {
            ReceiveString(f);
          }
          ReceiveInt32(v35.f_6());
          ReceiveFloat(v35.f_35());
          ReceiveInt64(v35.f_27());
          ReceiveInt64(v35.f_39());
          ReceiveString(v35.f_25());
          ReceiveFloat(v35.f_15());
          ReceiveInt32(v35.f_54());
          ReceiveString(v35.f_49());
          ReceiveInt32(v35.f_61());
          ReceiveString(v35.f_8());
          ReceiveInt64(v35.f_37());
          ReceiveInt32(v35.f_31());
          const Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59& v36 =
              v35.f_96();
          ReceiveInt32(v36.f_0());
          ReceiveInt32(v35.f_14());
          ReceiveString(v35.f_46());
          ReceiveCord(v35.f_58());
          ReceiveInt32(v35.f_57());
          ReceiveString(v35.f_24());
          for (const auto& f : v35.f_22()) {
            ReceiveString(f);
          }
          ReceiveInt64(v35.f_51());
          ReceiveFloat(v35.f_52());
          ReceiveString(v35.f_4());
          ReceiveInt32(v35.f_10());
          ReceiveString(v35.f_38());
          ReceiveInt32(v35.f_62());
          ReceiveUint32(v35.f_36());
          for (auto f : v35.f_56()) {
            ReceiveInt32(f);
          }
          ReceiveString(v35.f_40());
          ReceiveString(v35.f_16());
          ReceiveString(v35.f_34());
          ReceiveInt32(v35.f_30());
        }
        for (const auto& v37 : v33.f_9()) {
          ReceiveString(v37.f_0());
        }
        ReceiveDouble(v33.f_0());
        for (const auto& v38 : v33.f_10()) {
          ReceiveUint64(v38.f_0());
        }
        for (const auto& v39 : v33.f_6()) {
          ReceiveInt64(v39.f_0());
        }
      }
      ReceiveInt32(v32.f_18());
      ReceiveInt32(v32.f_36());
      ReceiveDouble(v32.f_12());
      ReceiveString(v32.f_19());
      ReceiveString(v32.f_29());
      ReceiveString(v32.f_13());
      ReceiveInt32(v32.f_10());
      const Message4::M2::M7::M12::M17::M25::M48::M49& v40 = v32.f_52();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M56& v41 = v40.f_19();
      ReceiveUint64(v41.f_0());
      for (const auto& v42 : v41.f_3()) {
        ReceiveBool(v42.f_0());
      }
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57& v43 = v40.f_21();
      ReceiveInt32(v43.f_0());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61& v44 =
          v43.f_3();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63& v45 =
          v44.f_2();
      ReceiveDouble(v45.f_1());
      ReceiveString(v45.f_0());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66& v46 =
          v45.f_5();
      ReceiveInt32(v46.f_0());
      ReceiveInt32(v44.f_0());
      ReceiveInt32(v40.f_4());
      for (const auto& v47 : v40.f_18()) {
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62& v48 =
            v47.f_3();
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64& v49 =
            v48.f_2();
        ReceiveString(v49.f_0());
        for (const auto& v50 : v49.f_2()) {
          const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
              M67& v51 = v50.f_1();
          for (const auto& v52 : v51.f_2()) {
            for (const auto& v53 : v52.f_2()) {
              for (const auto& v54 : v53.f_3()) {
                ReceiveBool(v54.f_0());
                for (const auto& v55 : v54.f_1()) {
                  ReceiveString(v55.f_0());
                }
                for (const auto& v56 : v54.f_2()) {
                  ReceiveUint64(v56.f_1());
                  ReceiveInt32(v56.f_0());
                }
              }
              ReceiveString(v53.f_0());
            }
            ReceiveInt64(v52.f_0());
          }
          ReceiveInt64(v51.f_1());
          ReceiveInt32(v51.f_0());
          ReceiveBool(v50.f_0());
        }
        ReceiveInt64(v48.f_0());
        ReceiveString(v47.f_0());
      }
      ReceiveUint64(v40.f_1());
      ReceiveInt64(v40.f_5());
      ReceiveBool(v40.f_3());
      ReceiveInt64(v40.f_7());
      ReceiveBool(v40.f_0());
      for (auto f : v40.f_6()) {
        ReceiveInt32(f);
      }
      for (auto f : v40.f_2()) {
        ReceiveUint32(f);
      }
      ReceiveInt32(v40.f_8());
      ReceiveInt32(v40.f_9());
      ReceiveInt64(v32.f_1());
    }
    ReceiveFloat(v29.f_0());
    ReceiveString(v29.f_1());
    const Message4::M2::M7::M12::M17::M39& v57 = v29.f_10();
    ReceiveInt32(v57.f_0());
    const Message4::M2::M7::M12::M17::M26& v58 = v29.f_9();
    ReceiveBool(v58.f_0());
    const Message4::M2::M7::M12::M17::M26::M42& v59 = v58.f_2();
    ReceiveBool(v59.f_0());
    ReceiveInt64(v29.f_2());
    ReceiveString(v29.f_4());
  }
  for (const auto& v60 : v15.f_3()) {
    ReceiveInt32(v60.f_0());
    for (const auto& v61 : v60.f_1()) {
      for (const auto& v62 : v61.f_1()) {
        ReceiveUint32(v62.f_0());
        ReceiveBool(v62.f_1());
      }
      ReceiveInt64(v61.f_0());
    }
  }
  ReceiveInt32(v15.f_0());
  ReceiveString(v14.f_2());
  ReceiveInt32(v14.f_4());
  const Message4::M2::M6& v63 = v14.f_8();
  ReceiveInt32(v63.f_1());
  ReceiveInt64(v63.f_0());
  ReceiveInt64(v63.f_2());
  for (const auto& v64 : v63.f_5()) {
    ReceiveUint64(v64.f_0());
  }
  const Message4::M2::M6::M9& v65 = v63.f_4();
  const Message4::M2::M6::M9::M23& v66 = v65.f_1();
  ReceiveBool(v66.f_0());
  const Message4::M2::M6::M9::M23::M24& v67 = v66.f_2();
  ReceiveString(v67.f_0());
  for (const auto& v68 : v66.f_3()) {
    ReceiveUint32(v68.f_0());
    const Message4::M2::M6::M9::M23::M30::M47& v69 = v68.f_1();
    for (auto f : v69.f_0()) {
      ReceiveUint32(f);
    }
  }
  ReceiveUint64(v65.f_0());
  ReceiveInt32(v14.f_3());
  const Message4::M2::M4& v70 = v14.f_7();
  for (const auto& v71 : v70.f_3()) {
    ReceiveInt32(v71.f_0());
  }
  ReceiveString(v70.f_0());
  ReceiveUint32(v70.f_2());
  ReceiveInt32(v70.f_1());
  ReceiveInt64(v14.f_1());
  ReceiveInt32(v14.f_0());
  ReceiveInt32((*message).f_1());
}

inline void Message4_Get_4(Message4* message) {
  ReceiveInt64((*message).f_2());
  ReceiveInt32((*message).f_1());
  ReceiveString((*message).f_3());
  for (auto f : (*message).f_0()) {
    ReceiveFloat(f);
  }
  for (const auto& v0 : (*message).f_12()) {
    ReceiveInt32(v0.f_3());
    ReceiveString(v0.f_2());
    ReceiveUint32(v0.f_4());
    for (const auto& v1 : v0.f_6()) {
      ReceiveBool(v1.f_1());
      ReceiveString(v1.f_2());
      ReceiveInt32(v1.f_5());
      ReceiveInt64(v1.f_4());
      ReceiveString(v1.f_9());
      ReceiveInt32(v1.f_8());
      ReceiveInt64(v1.f_0());
      for (const auto& v2 : v1.f_18()) {
        ReceiveString(v2.f_0());
        ReceiveInt32(v2.f_2());
        ReceiveInt32(v2.f_1());
      }
      ReceiveInt64(v1.f_6());
      ReceiveInt32(v1.f_7());
      const Message4::M3::M5::M8& v3 = v1.f_17();
      const Message4::M3::M5::M8::M16& v4 = v3.f_1();
      ReceiveInt32(v4.f_0());
      const Message4::M3::M5::M8::M16::M36& v5 = v4.f_3();
      ReceiveString(v5.f_0());
      const Message4::M3::M5::M8::M20& v6 = v3.f_3();
      for (const auto& v7 : v6.f_2()) {
        for (const auto& v8 : v7.f_2()) {
          ReceiveFloat(v8.f_0());
        }
        ReceiveString(v7.f_0());
      }
      for (const auto& v9 : v6.f_1()) {
        ReceiveInt64(v9.f_0());
      }
      ReceiveString(v6.f_0());
      for (const auto& v10 : v3.f_5()) {
        ReceiveInt32(v10.f_1());
        const Message4::M3::M5::M8::M22::M32& v11 = v10.f_11();
        ReceiveFloat(v11.f_0());
        ReceiveFloat(v10.f_0());
        ReceiveCord(v10.f_6());
        ReceiveString(v10.f_7());
        ReceiveUint32(v10.f_4());
        for (const auto& f : v10.f_9()) {
          ReceiveString(f);
        }
        const Message4::M3::M5::M8::M22::M37& v12 = v10.f_12();
        ReceiveBool(v12.f_0());
        ReceiveUint32(v10.f_3());
        for (auto f : v10.f_5()) {
          ReceiveInt32(f);
        }
        for (auto f : v10.f_2()) {
          ReceiveInt32(f);
        }
        ReceiveDouble(v10.f_8());
      }
      for (auto f : v3.f_0()) {
        ReceiveInt64(f);
      }
      ReceiveUint64(v1.f_3());
    }
    ReceiveInt32(v0.f_1());
    ReceiveDouble(v0.f_0());
  }
  const Message4::M2& v13 = (*message).f_8();
  const Message4::M2::M7& v14 = v13.f_9();
  const Message4::M2::M7::M15& v15 = v14.f_5();
  ReceiveUint64(v15.f_28());
  ReceiveUint32(v15.f_53());
  ReceiveInt32(v15.f_103());
  ReceiveBool(v15.f_41());
  ReceiveBool(v15.f_3());
  ReceiveUint32(v15.f_68());
  ReceiveString(v15.f_70());
  ReceiveString(v15.f_91());
  ReceiveInt32(v15.f_77());
  ReceiveInt64(v15.f_38());
  ReceiveString(v15.f_8());
  ReceiveString(v15.f_58());
  ReceiveInt64(v15.f_63());
  ReceiveString(v15.f_44());
  ReceiveInt64(v15.f_34());
  ReceiveString(v15.f_94());
  ReceiveString(v15.f_14());
  ReceiveUint32(v15.f_89());
  ReceiveString(v15.f_87());
  ReceiveBool(v15.f_25());
  ReceiveDouble(v15.f_72());
  ReceiveDouble(v15.f_65());
  ReceiveInt32(v15.f_60());
  ReceiveInt32(v15.f_12());
  ReceiveString(v15.f_50());
  ReceiveInt64(v15.f_42());
  ReceiveBool(v15.f_48());
  ReceiveInt32(v15.f_0());
  ReceiveString(v15.f_66());
  ReceiveString(v15.f_57());
  ReceiveInt64(v15.f_83());
  ReceiveInt32(v15.f_17());
  ReceiveInt32(v15.f_39());
  ReceiveString(v15.f_26());
  ReceiveFloat(v15.f_20());
  ReceiveString(v15.f_51());
  ReceiveString(v15.f_1());
  ReceiveUint32(v15.f_86());
  ReceiveInt32(v15.f_98());
  ReceiveBool(v15.f_36());
  ReceiveInt32(v15.f_46());
  ReceiveFloat(v15.f_80());
  ReceiveString(v15.f_37());
  ReceiveUint32(v15.f_61());
  ReceiveFloat(v15.f_82());
  ReceiveDouble(v15.f_15());
  ReceiveDouble(v15.f_69());
  ReceiveFloat(v15.f_2());
  ReceiveString(v15.f_97());
  ReceiveInt32(v15.f_95());
  ReceiveInt32(v15.f_99());
  ReceiveString(v15.f_29());
  ReceiveString(v15.f_24());
  ReceiveFloat(v15.f_101());
  ReceiveBool(v15.f_43());
  ReceiveInt32(v15.f_45());
  ReceiveFloat(v15.f_31());
  for (auto f : v15.f_56()) {
    ReceiveInt32(f);
  }
  ReceiveString(v15.f_100());
  ReceiveInt32(v15.f_19());
  ReceiveFloat(v15.f_47());
  ReceiveString(v15.f_52());
  ReceiveString(v15.f_104());
  ReceiveInt32(v15.f_73());
  for (auto f : v15.f_62()) {
    ReceiveInt32(f);
  }
  ReceiveInt64(v15.f_88());
  ReceiveInt64(v15.f_27());
  ReceiveFloat(v15.f_22());
  ReceiveString(v15.f_35());
  ReceiveBool(v15.f_54());
  ReceiveBool(v15.f_10());
  ReceiveInt32(v15.f_16());
  ReceiveInt64(v15.f_102());
  for (auto f : v15.f_7()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v15.f_13());
  ReceiveString(v15.f_90());
  ReceiveString(v15.f_96());
  ReceiveInt32(v15.f_11());
  ReceiveUint64(v15.f_74());
  ReceiveInt32(v15.f_32());
  ReceiveInt32(v15.f_5());
  ReceiveInt64(v15.f_106());
  ReceiveInt64(v15.f_93());
  ReceiveInt32(v15.f_79());
  ReceiveString(v15.f_92());
  ReceiveDouble(v15.f_59());
  ReceiveUint64(v15.f_81());
  ReceiveString(v15.f_85());
  ReceiveBool(v15.f_6());
  ReceiveInt64(v15.f_71());
  ReceiveInt64(v15.f_67());
  ReceiveString(v15.f_33());
  ReceiveUint64(v15.f_78());
  ReceiveString(v15.f_30());
  ReceiveInt32(v15.f_23());
  ReceiveString(v15.f_84());
  ReceiveFloat(v15.f_4());
  for (auto f : v15.f_9()) {
    ReceiveInt32(f);
  }
  ReceiveString(v15.f_55());
  ReceiveInt64(v15.f_18());
  ReceiveString(v15.f_75());
  ReceiveFloat(v15.f_49());
  ReceiveBool(v15.f_40());
  ReceiveInt32(v15.f_76());
  ReceiveUint64(v15.f_64());
  for (const auto& v16 : v15.f_158()) {
    ReceiveFloat(v16.f_0());
    for (const auto& v17 : v16.f_2()) {
      ReceiveInt64(v17.f_1());
      ReceiveInt64(v17.f_0());
    }
  }
  ReceiveInt32(v15.f_105());
  for (auto f : v15.f_21()) {
    ReceiveFloat(f);
  }
  for (const auto& v18 : v14.f_2()) {
    const Message4::M2::M7::M12::M19& v19 = v18.f_2();
    ReceiveInt64(v19.f_0());
    const Message4::M2::M7::M12::M19::M31& v20 = v19.f_6();
    for (const auto& v21 : v20.f_3()) {
      ReceiveString(v21.f_0());
    }
    ReceiveInt32(v20.f_0());
    for (const auto& v22 : v20.f_1()) {
      ReceiveString(v22.f_0());
    }
    for (const auto& v23 : v19.f_10()) {
      ReceiveUint64(v23.f_0());
    }
    for (const auto& v24 : v19.f_3()) {
      for (const auto& v25 : v24.f_1()) {
        ReceiveFloat(v25.f_0());
      }
      ReceiveBool(v24.f_0());
    }
    const Message4::M2::M7::M12::M19::M34& v26 = v19.f_8();
    ReceiveBool(v26.f_0());
    const Message4::M2::M7::M12::M19::M27& v27 = v19.f_1();
    ReceiveInt64(v27.f_0());
    ReceiveInt64(v18.f_0());
    const Message4::M2::M7::M12::M17& v28 = v18.f_1();
    for (const auto& f : v28.f_5()) {
      ReceiveString(f);
    }
    ReceiveFloat(v28.f_0());
    ReceiveInt64(v28.f_3());
    const Message4::M2::M7::M12::M17::M25& v29 = v28.f_8();
    for (const auto& v30 : v29.f_1()) {
      ReceiveUint64(v30.f_0());
    }
    for (const auto& v31 : v29.f_3()) {
      ReceiveBool(v31.f_26());
      ReceiveUint64(v31.f_0());
      ReceiveInt64(v31.f_7());
      ReceiveString(v31.f_23());
      ReceiveFloat(v31.f_20());
      ReceiveString(v31.f_29());
      ReceiveInt32(v31.f_6());
      ReceiveInt32(v31.f_10());
      ReceiveString(v31.f_22());
      ReceiveDouble(v31.f_12());
      ReceiveInt32(v31.f_35());
      ReceiveString(v31.f_14());
      ReceiveInt32(v31.f_2());
      ReceiveString(v31.f_13());
      ReceiveInt64(v31.f_1());
      ReceiveInt32(v31.f_36());
      ReceiveInt32(v31.f_37());
      for (auto f : v31.f_27()) {
        ReceiveInt32(f);
      }
      ReceiveInt64(v31.f_11());
      ReceiveInt64(v31.f_32());
      ReceiveString(v31.f_24());
      for (const auto& v32 : v31.f_54()) {
        ReceiveInt64(v32.f_4());
        for (const auto& v33 : v32.f_9()) {
          ReceiveString(v33.f_0());
        }
        for (const auto& v34 : v32.f_12()) {
          ReceiveUint32(v34.f_36());
          ReceiveBool(v34.f_65());
          ReceiveInt64(v34.f_37());
          ReceiveInt32(v34.f_54());
          ReceiveUint64(v34.f_44());
          ReceiveInt32(v34.f_6());
          ReceiveInt64(v34.f_26());
          ReceiveString(v34.f_8());
          ReceiveFloat(v34.f_60());
          ReceiveInt32(v34.f_62());
          ReceiveInt32(v34.f_53());
          for (const auto& f : v34.f_22()) {
            ReceiveString(f);
          }
          ReceiveString(v34.f_28());
          for (auto f : v34.f_56()) {
            ReceiveInt32(f);
          }
          ReceiveString(v34.f_49());
          ReceiveInt32(v34.f_12());
          ReceiveInt32(v34.f_57());
          ReceiveInt32(v34.f_10());
          for (auto f : v34.f_50()) {
            ReceiveUint64(f);
          }
          const Message4::M2::M7::M12::M17::M25::M48::M50::M58::M59& v35 =
              v34.f_96();
          ReceiveInt32(v35.f_0());
          ReceiveDouble(v34.f_11());
          ReceiveInt64(v34.f_0());
          ReceiveInt64(v34.f_29());
          ReceiveString(v34.f_25());
          ReceiveFloat(v34.f_15());
          ReceiveUint32(v34.f_21());
          ReceiveCord(v34.f_58());
          ReceiveInt32(v34.f_61());
          ReceiveInt32(v34.f_17());
          ReceiveString(v34.f_38());
          ReceiveString(v34.f_46());
          ReceiveInt32(v34.f_41());
          ReceiveBool(v34.f_64());
          ReceiveInt64(v34.f_27());
          ReceiveString(v34.f_43());
          ReceiveInt32(v34.f_31());
          ReceiveFloat(v34.f_1());
          ReceiveString(v34.f_3());
          ReceiveInt64(v34.f_9());
          for (const auto& f : v34.f_18()) {
            ReceiveString(f);
          }
          ReceiveInt32(v34.f_14());
          ReceiveFloat(v34.f_52());
          ReceiveInt64(v34.f_51());
          ReceiveInt64(v34.f_39());
          ReceiveString(v34.f_45());
          ReceiveBool(v34.f_23());
          ReceiveString(v34.f_4());
          ReceiveInt64(v34.f_55());
          ReceiveString(v34.f_20());
          ReceiveString(v34.f_24());
          ReceiveDouble(v34.f_5());
          ReceiveString(v34.f_33());
          ReceiveInt64(v34.f_48());
          ReceiveInt32(v34.f_30());
          ReceiveInt32(v34.f_59());
          ReceiveFloat(v34.f_66());
          ReceiveString(v34.f_40());
          ReceiveInt64(v34.f_13());
          ReceiveFloat(v34.f_35());
          ReceiveInt32(v34.f_2());
          ReceiveInt32(v34.f_19());
          ReceiveString(v34.f_63());
          ReceiveUint32(v34.f_32());
          ReceiveUint64(v34.f_47());
          ReceiveInt64(v34.f_67());
          ReceiveFloat(v34.f_42());
          ReceiveString(v34.f_34());
          ReceiveString(v34.f_16());
          ReceiveFloat(v34.f_7());
        }
        ReceiveInt32(v32.f_3());
        ReceiveInt64(v32.f_1());
        ReceiveDouble(v32.f_0());
        ReceiveInt64(v32.f_2());
        const Message4::M2::M7::M12::M17::M25::M48::M50::M53& v36 = v32.f_8();
        ReceiveInt32(v36.f_0());
        for (const auto& v37 : v32.f_10()) {
          ReceiveUint64(v37.f_0());
        }
        for (const auto& v38 : v32.f_6()) {
          ReceiveInt64(v38.f_0());
        }
      }
      for (const auto& f : v31.f_3()) {
        ReceiveString(f);
      }
      ReceiveInt64(v31.f_8());
      const Message4::M2::M7::M12::M17::M25::M48::M49& v39 = v31.f_52();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M56& v40 = v39.f_19();
      for (const auto& v41 : v40.f_3()) {
        ReceiveBool(v41.f_0());
      }
      ReceiveUint64(v40.f_0());
      ReceiveInt64(v39.f_7());
      for (const auto& v42 : v39.f_18()) {
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62& v43 =
            v42.f_3();
        ReceiveInt64(v43.f_0());
        const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64& v44 =
            v43.f_2();
        for (const auto& v45 : v44.f_2()) {
          const Message4::M2::M7::M12::M17::M25::M48::M49::M52::M62::M64::M65::
              M67& v46 = v45.f_1();
          ReceiveInt64(v46.f_1());
          ReceiveInt32(v46.f_0());
          for (const auto& v47 : v46.f_2()) {
            ReceiveInt64(v47.f_0());
            for (const auto& v48 : v47.f_2()) {
              ReceiveString(v48.f_0());
              for (const auto& v49 : v48.f_3()) {
                for (const auto& v50 : v49.f_2()) {
                  ReceiveInt32(v50.f_0());
                  ReceiveUint64(v50.f_1());
                }
                ReceiveBool(v49.f_0());
                for (const auto& v51 : v49.f_1()) {
                  ReceiveString(v51.f_0());
                }
              }
            }
          }
          ReceiveBool(v45.f_0());
        }
        ReceiveString(v44.f_0());
        ReceiveString(v42.f_0());
      }
      ReceiveInt32(v39.f_8());
      ReceiveBool(v39.f_3());
      ReceiveInt32(v39.f_9());
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57& v52 = v39.f_21();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61& v53 =
          v52.f_3();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63& v54 =
          v53.f_2();
      const Message4::M2::M7::M12::M17::M25::M48::M49::M57::M61::M63::M66& v55 =
          v54.f_5();
      ReceiveInt32(v55.f_0());
      ReceiveDouble(v54.f_1());
      ReceiveString(v54.f_0());
      ReceiveInt32(v53.f_0());
      ReceiveInt32(v52.f_0());
      for (auto f : v39.f_2()) {
        ReceiveUint32(f);
      }
      ReceiveBool(v39.f_0());
      ReceiveUint64(v39.f_1());
      for (auto f : v39.f_6()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v39.f_4());
      ReceiveInt64(v39.f_5());
      ReceiveUint64(v31.f_31());
      ReceiveInt32(v31.f_21());
      ReceiveString(v31.f_17());
      for (auto f : v31.f_15()) {
        ReceiveInt32(f);
      }
      ReceiveInt32(v31.f_25());
      ReceiveString(v31.f_28());
      ReceiveInt32(v31.f_18());
      ReceiveInt32(v31.f_4());
      ReceiveFloat(v31.f_34());
      ReceiveInt32(v31.f_5());
      ReceiveInt64(v31.f_38());
      ReceiveInt32(v31.f_16());
      ReceiveString(v31.f_19());
      ReceiveInt64(v31.f_30());
      ReceiveFloat(v31.f_33());
      ReceiveFloat(v31.f_9());
    }
    ReceiveInt32(v29.f_0());
    const Message4::M2::M7::M12::M17::M26& v56 = v28.f_9();
    const Message4::M2::M7::M12::M17::M26::M42& v57 = v56.f_2();
    ReceiveBool(v57.f_0());
    ReceiveBool(v56.f_0());
    ReceiveInt64(v28.f_2());
    ReceiveString(v28.f_1());
    ReceiveString(v28.f_4());
    const Message4::M2::M7::M12::M17::M39& v58 = v28.f_10();
    ReceiveInt32(v58.f_0());
  }
  ReceiveInt32(v14.f_0());
  for (const auto& v59 : v14.f_3()) {
    ReceiveInt32(v59.f_0());
    for (const auto& v60 : v59.f_1()) {
      for (const auto& v61 : v60.f_1()) {
        ReceiveBool(v61.f_1());
        ReceiveUint32(v61.f_0());
      }
      ReceiveInt64(v60.f_0());
    }
  }
  ReceiveString(v13.f_2());
  const Message4::M2::M6& v62 = v13.f_8();
  const Message4::M2::M6::M9& v63 = v62.f_4();
  ReceiveUint64(v63.f_0());
  const Message4::M2::M6::M9::M23& v64 = v63.f_1();
  for (const auto& v65 : v64.f_3()) {
    ReceiveUint32(v65.f_0());
    const Message4::M2::M6::M9::M23::M30::M47& v66 = v65.f_1();
    for (auto f : v66.f_0()) {
      ReceiveUint32(f);
    }
  }
  ReceiveBool(v64.f_0());
  const Message4::M2::M6::M9::M23::M24& v67 = v64.f_2();
  ReceiveString(v67.f_0());
  for (const auto& v68 : v62.f_5()) {
    ReceiveUint64(v68.f_0());
  }
  ReceiveInt64(v62.f_2());
  ReceiveInt64(v62.f_0());
  ReceiveInt32(v62.f_1());
  const Message4::M2::M4& v69 = v13.f_7();
  for (const auto& v70 : v69.f_3()) {
    ReceiveInt32(v70.f_0());
  }
  ReceiveUint32(v69.f_2());
  ReceiveInt32(v69.f_1());
  ReceiveString(v69.f_0());
  ReceiveInt64(v13.f_1());
  ReceiveInt32(v13.f_3());
  ReceiveInt32(v13.f_4());
  ReceiveInt32(v13.f_0());
  for (const auto& v71 : (*message).f_7()) {
    ReceiveString(v71.f_0());
  }
}

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_
