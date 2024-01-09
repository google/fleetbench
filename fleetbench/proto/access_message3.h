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

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_

#include <cstdint>
#include <string>

#include "fleetbench/proto/Message3.pb.h"
#include "fleetbench/proto/receiver.h"
namespace fleetbench::proto {

inline void Message3_Set_1(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_10();
  Message3::M1::M12* v2_0 = v0->add_f_2();
  Message3::M1::M12::M27* v2 = v2_0->mutable_f_1();
  v2->set_f_5(Message3::M1::M12::M27::E15_CONST_3);
  v2->set_f_1(0xfb7c7deee5);
  v2->set_f_2(s->substr(0, 24));
  Message3::M1::M12* v2_1 = v0->add_f_2();
  Message3::M1::M12::M27* v3 = v2_1->mutable_f_1();
  v3->set_f_0(s->substr(0, 59));
  v3->set_f_3(0xb656733a);
  v3->set_f_2(s->substr(0, 5));
  v3->set_f_5(Message3::M1::M12::M27::E15_CONST_5);
  Message3::M5* v4 = message->mutable_f_15();
  v4->set_f_0(0x23db025c);
  message->set_f_1(s->substr(0, 118));
  Message3::M6* v5 = message->mutable_f_16();
  Message3::M6::M21* v7_0 = v5->add_f_3();
  v7_0->set_f_29(0x8f605708e92274bb);
  v7_0->set_f_6(s->substr(0, 29));
  v7_0->set_f_22(s->substr(0, 21));
  v7_0->set_f_5(s->substr(0, 47));
  v7_0->set_f_19(s->substr(0, 87));
  v7_0->set_f_37(s->substr(0, 13));
  v7_0->set_f_31(0x5b587b9f8d110f67);
  v7_0->set_f_9(s->substr(0, 100));
  v7_0->set_f_11(0xa1);
  v7_0->set_f_33(0xd0);
  v7_0->set_f_24(0x7d);
  v7_0->set_f_13(0.318158);
  v7_0->set_f_36(0x2d2270a16b71362e);
  v7_0->set_f_30(s->substr(0, 7));
  Message3::M8* v7 = message->mutable_f_19();
  Message3::M8::M17* v8 = v7->mutable_f_5();
  Message3::M8::M17::M35* v10_0 = v8->add_f_6();
  v10_0->set_f_1(0xec);
  Message3::M8::M17::M31* v11 = v8->mutable_f_5();
  v11->set_f_1(s->substr(0, 4));
  v11->set_f_0(s->substr(0, 15));
  Message3::M8::M17::M31::M48* v12 = v11->mutable_f_2();
  v12->set_f_0(Message3::M8::M17::M31::M48::E22_CONST_1);
  v7->set_f_1(Message3::M8::E5_CONST_4);
  v7->set_f_0(Message3::M8::E4_CONST_4);
  Message3::M8::M19* v14_0 = v7->add_f_6();
  Message3::M8::M19::M26* v14 = v14_0->mutable_f_3();
  v14->set_f_0(0.854128);
  Message3::M8::M19::M26::M44* v16 = v14->mutable_f_4();
  int32_t array_1[14] = {0xf396,   0xf6, 0x26,     0xf13c5c, 0x945a,
                         0xb8917e, 0x6d, 0x93,     0x624226, 0xf042,
                         0x65,     0xa9, 0x358768, 0x30};
  for (auto& value : array_1) v16->add_f_0(value);
  Message3::M8::M19* v14_1 = v7->add_f_6();
  Message3::M8::M19::M26* v19 = v14_1->mutable_f_3();
  Message3::M8::M19::M26::M47* v22_0 = v19->add_f_6();
  v22_0->set_f_0(false);
  Message3::M7* v25 = message->mutable_f_17();
  Message3::M7::M14* v26 = v25->mutable_f_1();
  Message3::M7::M14::M38* v27 = v26->mutable_f_4();
  Message3::M7::M14::M38::M41* v28 = v27->mutable_f_2();
  v28->set_f_0(s->substr(0, 3));
  Message3::M7::M14::M36* v29 = v26->mutable_f_1();
  v29->add_f_0(s->substr(0, 10));
  v29->add_f_0(s->substr(0, 5));
  Message3::M7::M14::M37* v30 = v26->mutable_f_2();
  v30->set_f_0(0x56fd0b8e979361f0);
  Message3::M3* v31 = message->mutable_f_12();
  Message3::M3::M13* v33_0 = v31->add_f_10();
  Message3::M3::M13::M34* v34_0 = v33_0->add_f_3();
  v34_0->set_f_0(0xcef2);
  v31->set_f_0(0x149645);
  v31->set_f_6(0x30);
  v31->set_f_4(s->substr(0, 2));
  Message3::M4* v35_0 = message->add_f_13();
  Message3::M4::M15* v35 = v35_0->mutable_f_2();
  v35->set_f_0(0xa28a33);
  Message3::M4::M15::M24* v38 = v35->mutable_f_3();
  Message3::M4::M15::M24::M42* v39 = v38->mutable_f_2();
  v39->set_f_9(0.969836);
  v39->set_f_7(0x96);
  v39->set_f_11(true);
  v39->set_f_12(s->substr(0, 6));
  v38->set_f_0(Message3::M4::M15::M24::E14_CONST_3);
  v35->set_f_1(0.727328);
  Message3::M4::M16* v40 = v35_0->mutable_f_3();
  Message3::M4::M16::M29* v41 = v40->mutable_f_3();
  v41->set_f_0(0x7a5e36b48379c444);
  Message3::M4::M16::M30* v42 = v40->mutable_f_4();
  v42->set_f_0(0.866093);
  Message3::M4::M16::M30::M43* v43 = v42->mutable_f_1();
  Message3::M4::M16::M30::M43::M50* v44 = v43->mutable_f_2();
  Message3::M4::M16::M30::M43::M50::M65* v46_0 = v44->add_f_5();
  Message3::M4::M16::M30::M43::M50::M65::M76* v46 = v46_0->mutable_f_1();
  v46->set_f_4(0x3fa8);
  v46->set_f_0(0.516702);
  Message3::M4::M16::M30::M43::M50::M64* v47 = v44->mutable_f_4();
  v47->set_f_1(0xfc0606);
  Message3::M4::M16::M30::M43::M50::M72* v48 = v44->mutable_f_8();
  v48->set_f_6(0x488eb03a);
  v48->set_f_4(0xff46385);
  v48->set_f_5(Message3::M4::M16::M30::M43::M50::M72::E29_CONST_2);
  Message3::M4::M16::M30::M43::M50::M60* v50 = v44->mutable_f_3();
  v50->set_f_0(0.746744);
  Message3::M4::M9* v54 = v35_0->mutable_f_1();
  v54->set_f_0(s->substr(0, 20));
  Message3::M2* v57 = message->mutable_f_11();
  Message3::M2::M10* v58 = v57->mutable_f_2();
  v58->set_f_0(Message3::M2::M10::E7_CONST_4);
  Message3::M2::M10::M40* v60_0 = v58->add_f_11();
  v60_0->set_f_2(s->substr(0, 5));
  Message3::M2::M10::M33* v61_0 = v58->add_f_10();
  Message3::M2::M10::M33::M45* v61 = v61_0->mutable_f_1();
  Message3::M2::M10::M33::M45::M51* v62 = v61->mutable_f_12();
  float array_2[6] = {0.952476, 0.680258, 0.413054,
                      0.710040, 0.970781, 0.148426};
  for (auto& value : array_2) v62->add_f_21(value);
  Message3::M2::M10::M33::M45::M51::M62* v64 = v62->mutable_f_47();
  v64->set_f_0(Message3::M2::M10::M33::M45::M51::M62::E27_CONST_2);
  Message3::M2::M10::M33::M45::M51::M62::M79* v66_0 = v64->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84* v68 = v66_0->mutable_f_4();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93* v69 =
      v68->mutable_f_1();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95* v71_0 =
      v69->add_f_2();
  v71_0->set_f_0(0x1e2e6da1);
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97* v71 =
      v71_0->mutable_f_2();
  v71->set_f_0(Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97::
                   E42_CONST_2);
  v68->set_f_0(s->substr(0, 4));
  v62->set_f_13(s->substr(0, 66));
  v62->set_f_20(0x9ca7abc4b4);
  v62->set_f_8(s->substr(0, 6));
  v62->set_f_16(s->substr(0, 31));
  Message3::M2::M10::M33::M45::M51::M69* v77_0 = v62->add_f_49();
  v77_0->set_f_0(0x56304ab5);
  v77_0->set_f_3(0x292165dfd9);
  v62->set_f_2(0x95);
  v62->set_f_1(0x605360);
  v62->set_f_14(s->substr(0, 7));
  v62->set_f_9(Message3::M2::M10::M33::M45::M51::E23_CONST_2);
  Message3::M2::M10::M33::M45::M51::M58* v80 = v62->mutable_f_45();
  Message3::M2::M10::M33::M45::M51::M58::M73* v82 = v80->mutable_f_4();
  v82->set_f_0(0.104675);
  v61->set_f_7(false);
  Message3::M2::M10::M33::M45::M49* v83 = v61->mutable_f_11();
  Message3::M2::M10::M33::M45::M49::M63* v85_0 = v83->add_f_6();
  Message3::M2::M10::M33::M45::M49::M63::M81* v85 = v85_0->mutable_f_2();
  v85->set_f_3(s->substr(0, 43));
  Message3::M2::M10::M33::M45::M49::M71* v86 = v83->mutable_f_9();
  Message3::M2::M10::M33::M45::M49::M71::M75* v87 = v86->mutable_f_1();
  v87->set_f_0(0x35);
  Message3::M2::M10::M33::M45::M49::M71::M75::M88* v88 = v87->mutable_f_6();
  v88->set_f_0(Message3::M2::M10::M33::M45::M49::M71::M75::M88::E34_CONST_1);
  Message3::M2::M10::M33::M45::M49::M71::M80* v89 = v86->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M86* v90 = v89->mutable_f_2();
  v90->set_f_0(Message3::M2::M10::M33::M45::M49::M71::M80::M86::E33_CONST_1);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85* v94_0 = v89->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94* v94 =
      v94_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96* v95 =
      v94->mutable_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M98* v97_0 =
      v95->add_f_50();
  v97_0->set_f_0(s->substr(0, 223));
  v95->set_f_18(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E38_CONST_3);
  v95->set_f_17(0.233604);
  v95->set_f_1(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E35_CONST_3);
  v95->set_f_15(0x24b393f4);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99* v97 =
      v95->mutable_f_52();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100* v99_0 =
      v97->add_f_7();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101*
      v100_0 = v99_0->add_f_5();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102* v101_0 = v100_0->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103* v101 = v101_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104* v102 = v101->mutable_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v104_0 = v102->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v105 = v104_0->mutable_f_3();
  v105->set_f_0(0x6b);
  v105->set_f_3(s->substr(0, 2));
  v101_0->set_f_0(0x78);
  v95->set_f_21(0xf611);
  v95->set_f_9(0.758066);
  v95->set_f_32(s->substr(0, 18));
  v94->set_f_0(0x7b);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85* v94_1 = v89->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94* v107 =
      v94_1->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96* v108 =
      v107->mutable_f_1();
  v108->set_f_27(0xe3e8);
  v108->set_f_26(0x11);
  v108->set_f_35(0x18b9411f);
  v108->set_f_29(0x80);
  v108->set_f_14(s->substr(0, 257));
  v108->set_f_11(s->substr(0, 14));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99* v109 =
      v108->mutable_f_52();
  v109->set_f_3(0.546825);
  v109->set_f_2(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                    E43_CONST_1);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100* v111_0 =
      v109->add_f_7();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101*
      v112_0 = v111_0->add_f_5();
  v112_0->set_f_0(0xbf917d1);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102* v113_0 = v112_0->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103* v113 = v113_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104* v114 = v113->mutable_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v116_0 = v114->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v116 = v116_0->mutable_f_3();
  v116->set_f_2(false);
  v114->set_f_3(s->substr(0, 125));
  v113->set_f_0(true);
  v113_0->set_f_0(0x80);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102* v113_1 = v112_0->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103* v118 = v113_1->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104* v119 = v118->mutable_f_1();
  v119->set_f_3(s->substr(0, 22));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v121_0 = v119->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M106* v121 = v121_0->mutable_f_2();
  v121->set_f_0(0x64ba1f);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v122 = v121_0->mutable_f_3();
  v122->set_f_3(s->substr(0, 3));
  v122->set_f_0(0x92);
  v122->set_f_2(false);
  v121_0->set_f_0(0xa3);
  v119->set_f_1(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                    M100::M101::M102::M103::M104::E44_CONST_1);
  v119->set_f_2(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                    M100::M101::M102::M103::M104::E45_CONST_1);
  v113_1->set_f_0(0x2e);
  v109->set_f_0(s->substr(0, 6));
  v108->set_f_25(0x22);
  v108->set_f_6(0.772383);
  v108->set_f_17(0.749123);
  v108->set_f_34(0x69edc71116c90359);
  v108->set_f_32(s->substr(0, 30));
  v108->set_f_18(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E38_CONST_1);
  v108->set_f_22(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E40_CONST_1);
  v108->set_f_19(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E39_CONST_3);
  v108->set_f_3(0.160461);
  v108->set_f_21(0xcb);
  v108->set_f_7(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E36_CONST_4);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M90* v125_0 =
      v94_1->add_f_1();
  v125_0->set_f_0(0xaeb6);
  Message3::M2::M10::M33::M45::M49::M71::M80::M87* v125 = v89->mutable_f_3();
  v125->set_f_0(s->substr(0, 9));
  Message3::M2::M10::M33::M45::M49::M56* v126 = v83->mutable_f_4();
  v126->set_f_0(0x716acc6c);
  Message3::M2::M10::M33::M45::M49::M67* v128 = v83->mutable_f_8();
  Message3::M2::M10::M33::M45::M49::M67::M78* v129 = v128->mutable_f_1();
  v129->set_f_0(0x266df5bc);
  Message3::M2::M10::M33::M45::M49::M67::M78::M82* v130 = v129->mutable_f_3();
  v130->set_f_2(Message3::M2::M10::M33::M45::M49::M67::M78::M82::E31_CONST_2);
  v130->set_f_0(false);
  v130->set_f_1(Message3::M2::M10::M33::M45::M49::M67::M78::M82::E30_CONST_2);
  v61->set_f_6(0xcac7c1618c445466);
  v61->set_f_2(0x75a194075e86ac87);
  v61_0->set_f_0(Message3::M2::M10::M33::E18_CONST_5);
  v57->set_f_0(Message3::M2::E2_CONST_4);
  Message3::M2::M18* v131 = v57->mutable_f_3();
  v131->set_f_0(0xc5);
}

inline void Message3_Set_2(Message3* message, std::string* s) {
  message->set_f_1(s->substr(0, 1));
  Message3::M2* v0 = message->mutable_f_11();
  Message3::M2::M10* v1 = v0->mutable_f_2();
  Message3::M2::M10::M33* v4_0 = v1->add_f_10();
  Message3::M2::M10::M33::M45* v4 = v4_0->mutable_f_1();
  v4->set_f_0(false);
  Message3::M2::M10::M33::M45::M51* v5 = v4->mutable_f_12();
  Message3::M2::M10::M33::M45::M51::M57* v6 = v5->mutable_f_44();
  v6->set_f_0(0x4afd);
  Message3::M2::M10::M33::M45::M51::M58* v7 = v5->mutable_f_45();
  v7->set_f_0(0x2ccf);
  Message3::M2::M10::M33::M45::M51::M58::M73* v8 = v7->mutable_f_4();
  v8->set_f_0(0.850707);
  Message3::M2::M10::M33::M45::M51::M53* v10 = v5->mutable_f_41();
  v10->set_f_0(0xc586);
  v5->set_f_10(0x31);
  v5->set_f_4(0x4babcb);
  v5->set_f_7(s->substr(0, 57));
  Message3::M2::M10::M33::M45::M51::M69* v12_0 = v5->add_f_49();
  v12_0->set_f_1(Message3::M2::M10::M33::M45::M51::M69::E28_CONST_3);
  v12_0->set_f_0(0xcb);
  v12_0->set_f_2(0x6e);
  Message3::M2::M10::M33::M45::M51::M69* v12_1 = v5->add_f_49();
  v12_1->set_f_0(0xa7);
  v12_1->set_f_2(0xb6);
  Message3::M2::M10::M33::M45::M51::M62* v12 = v5->mutable_f_47();
  Message3::M2::M10::M33::M45::M51::M62::M79* v14_0 = v12->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84* v16 = v14_0->mutable_f_4();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93* v17 =
      v16->mutable_f_1();
  v17->set_f_0(0x727b);
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95* v19_0 =
      v17->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97* v19 =
      v19_0->mutable_f_2();
  v19->set_f_0(Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97::
                   E42_CONST_5);
  v5->set_f_0(0x1766230);
  v5->set_f_8(s->substr(0, 7));
  Message3::M2::M10::M33::M45::M51::M61* v20 = v5->mutable_f_46();
  v20->set_f_0(0x65955c310b474dd8);
  v5->set_f_16(s->substr(0, 14));
  v5->set_f_2(0x6e);
  v5->set_f_19(0x37);
  Message3::M2::M10::M33::M45::M51::M52* v22_0 = v5->add_f_39();
  Message3::M2::M10::M33::M45::M51::M52::M77* v22 = v22_0->mutable_f_2();
  v22->set_f_0(0x4fad8e5d586e85eb);
  v4->set_f_5(0x3e);
  v4->set_f_1(0x4b);
  v4->set_f_7(false);
  Message3::M2::M10::M33::M45::M49* v24 = v4->mutable_f_11();
  Message3::M2::M10::M33::M45::M49::M63* v31_0 = v24->add_f_6();
  Message3::M2::M10::M33::M45::M49::M63::M81* v31 = v31_0->mutable_f_2();
  v31->set_f_3(s->substr(0, 2));
  v31->set_f_0(0.430693);
  Message3::M2::M10::M33::M45::M49::M71* v32 = v24->mutable_f_9();
  Message3::M2::M10::M33::M45::M49::M71::M75* v33 = v32->mutable_f_1();
  v33->set_f_1(0x51a38c04b879c989);
  v33->set_f_0(0xc9);
  Message3::M2::M10::M33::M45::M49::M71::M80* v35 = v32->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85* v39_0 = v35->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94* v39 =
      v39_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96* v40 =
      v39->mutable_f_1();
  v40->set_f_13(s->substr(0, 31));
  v40->set_f_14(s->substr(0, 17));
  v40->set_f_0(true);
  v40->set_f_8(0x6b7ec523819aac3f);
  v40->set_f_33(0.828816);
  v40->set_f_28(0xe4);
  v40->set_f_9(0.661055);
  v40->set_f_25(0xc5);
  v40->set_f_12(true);
  v40->set_f_26(0x2b);
  v40->set_f_30(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E41_CONST_4);
  v40->set_f_32(s->substr(0, 1));
  v40->set_f_16(0x27693ef4efba2be);
  v40->set_f_17(0.633929);
  v40->set_f_10(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E37_CONST_5);
  v40->set_f_20(0x3303b7d79b9a64);
  v40->set_f_11(s->substr(0, 14));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99* v42 =
      v40->mutable_f_52();
  v42->set_f_3(0.858988);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100* v44_0 =
      v42->add_f_7();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101*
      v45_0 = v44_0->add_f_5();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102* v46_0 = v45_0->add_f_1();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103* v46 = v46_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104* v47 = v46->mutable_f_1();
  v47->set_f_2(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                   M100::M101::M102::M103::M104::E45_CONST_2);
  v47->set_f_0(0x9658e98e68);
  v47->set_f_3(s->substr(0, 7));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v49_0 = v47->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v49 = v49_0->mutable_f_3();
  v49->set_f_3(s->substr(0, 8));
  v49_0->set_f_1(s->substr(0, 2));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v49_1 = v47->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v52 = v49_1->mutable_f_3();
  v52->set_f_1(0xd1ca4b96e55675);
  v47->set_f_1(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                   M100::M101::M102::M103::M104::E44_CONST_3);
  v44_0->set_f_1(0xb3);
  v42->set_f_2(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                   E43_CONST_4);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M90* v54_0 =
      v39_0->add_f_1();
  v54_0->set_f_0(0xea41);
  v1->set_f_3(0xdb);
  v1->set_f_1(0.631550);
  Message3::M2::M18* v56 = v0->mutable_f_3();
  v56->set_f_0(0xb077);
  v0->set_f_0(Message3::M2::E2_CONST_2);
  Message3::M7* v58 = message->mutable_f_17();
  Message3::M7::M14* v59 = v58->mutable_f_1();
  Message3::M7::M14::M37* v61 = v59->mutable_f_2();
  v61->set_f_0(0x14);
  Message3::M7::M14::M38* v62 = v59->mutable_f_4();
  v62->set_f_0(true);
  Message3::M8* v64 = message->mutable_f_19();
  Message3::M8::M11* v65 = v64->mutable_f_4();
  v65->set_f_0(0x5db7d63);
  Message3::M8::M17* v72 = v64->mutable_f_5();
  Message3::M8::M17::M31* v74 = v72->mutable_f_5();
  Message3::M8::M17::M31::M48* v75 = v74->mutable_f_2();
  v75->set_f_0(Message3::M8::M17::M31::M48::E22_CONST_1);
  Message3::M8::M17::M35* v77_0 = v72->add_f_6();
  v77_0->set_f_2(0.962834);
  v77_0->set_f_1(0x7c);
  v64->set_f_0(Message3::M8::E4_CONST_2);
  Message3::M6* v77 = message->mutable_f_16();
  Message3::M6::M21* v79_0 = v77->add_f_3();
  v79_0->set_f_35(Message3::M6::M21::E13_CONST_4);
  v79_0->set_f_6(s->substr(0, 17));
  v79_0->set_f_19(s->substr(0, 8));
  v79_0->set_f_41(0x721847865f8fba52);
  v79_0->set_f_20(0x6cae9206);
  v79_0->set_f_30(s->substr(0, 29));
  v79_0->set_f_42(0x42);
  v79_0->set_f_32(s->substr(0, 431));
  v79_0->set_f_39(0xda770f);
  v79_0->set_f_38(0.376638);
  Message3::M4* v80_0 = message->add_f_13();
  Message3::M4::M15* v80 = v80_0->mutable_f_2();
  Message3::M4::M15::M24* v81 = v80->mutable_f_3();
  Message3::M4::M15::M24::M42* v82 = v81->mutable_f_2();
  v82->set_f_0(0xdb);
  v82->set_f_7(0x4a);
  v82->set_f_8(0.097055);
  v82->set_f_10(s->substr(0, 4));
  v82->set_f_1(0xcc614f6ed857b3fe);
  v82->set_f_12(s->substr(0, 73));
  v82->set_f_13(Message3::M4::M15::M24::M42::E21_CONST_2);
  v82->set_f_5(0x162c454488511a1f);
  v82->set_f_9(0.528980);
  Message3::M4::M15::M32* v83 = v80->mutable_f_4();
  v83->set_f_0(Message3::M4::M15::M32::E17_CONST_3);
  v80->set_f_1(0.999030);
  Message3::M4::M16* v85 = v80_0->mutable_f_3();
  v85->set_f_0(0x2c6677ce);
  Message3::M4::M16::M30* v87 = v85->mutable_f_4();
  Message3::M4::M16::M30::M43* v88 = v87->mutable_f_1();
  v88->set_f_0(0x3511fe9d80);
  Message3::M4::M16::M30::M43::M50* v89 = v88->mutable_f_2();
  Message3::M4::M16::M30::M43::M50::M70* v92 = v89->mutable_f_7();
  v92->set_f_0(0xd9);
  Message3::M4::M16::M30::M43::M50::M65* v94_0 = v89->add_f_5();
  Message3::M4::M16::M30::M43::M50::M65::M76* v94 = v94_0->mutable_f_1();
  v94->set_f_4(0x531);
  v94->add_f_3(s->substr(0, 7));
  v94_0->set_f_0(true);
  Message3::M4::M16::M30::M43::M50::M65* v94_1 = v89->add_f_5();
  v94_1->set_f_0(false);
  Message3::M4::M16::M30::M43::M50::M65::M76* v95 = v94_1->mutable_f_1();
  v95->add_f_3(s->substr(0, 4));
  Message3::M4::M16::M30::M43::M50::M72* v97 = v89->mutable_f_8();
  v97->set_f_4(0x2b636bec);
  v97->set_f_6(0x5157a9183db22298);
  v97->set_f_5(Message3::M4::M16::M30::M43::M50::M72::E29_CONST_1);
  v97->set_f_1(0x1a);
  Message3::M4::M16::M30::M43::M50::M64* v99 = v89->mutable_f_4();
  v99->set_f_2(s->substr(0, 17));
  v88->set_f_1(0x6e14204114768925);
  Message3::M4::M20* v100 = v80_0->mutable_f_4();
  Message3::M4::M20::M39* v102_0 = v100->add_f_2();
  v102_0->set_f_0(0xca4cccf9366be63);
  v100->set_f_0(0xb5);
  Message3::M4::M9* v102 = v80_0->mutable_f_1();
  v102->set_f_1(Message3::M4::M9::E6_CONST_3);
  Message3::M3* v104 = message->mutable_f_12();
  v104->set_f_0(0x13);
  Message3::M3::M13* v106_0 = v104->add_f_10();
  Message3::M3::M13::M34* v107_0 = v106_0->add_f_3();
  v107_0->set_f_0(0xc0);
  v104->set_f_5(Message3::M3::E3_CONST_1);
  v104->set_f_4(s->substr(0, 7));
  Message3::M1* v107 = message->mutable_f_10();
  Message3::M1::M12* v109_0 = v107->add_f_2();
  Message3::M1::M12::M27* v109 = v109_0->mutable_f_1();
  v109->set_f_2(s->substr(0, 22));
  v109->set_f_0(s->substr(0, 5));
  message->set_f_4(0x70);
}

inline void Message3_Set_3(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_10();
  Message3::M1::M12* v2_0 = v0->add_f_2();
  Message3::M1::M12::M27* v2 = v2_0->mutable_f_1();
  v2->set_f_0(s->substr(0, 6));
  v2->set_f_3(0x5f);
  Message3::M4* v4_0 = message->add_f_13();
  v4_0->set_f_0(0xc3);
  Message3::M4::M15* v4 = v4_0->mutable_f_2();
  Message3::M4::M15::M24* v5 = v4->mutable_f_3();
  Message3::M4::M15::M24::M42* v6 = v5->mutable_f_2();
  v6->set_f_11(false);
  v6->set_f_10(s->substr(0, 14));
  v6->set_f_1(0x3c65e826002c);
  v6->set_f_8(0.803266);
  v6->set_f_6(false);
  v6->set_f_13(Message3::M4::M15::M24::M42::E21_CONST_5);
  int64_t array_0[10] = {0x2a899ed15e7b353f,
                         0x254da4,
                         0xd268a0,
                         0xb3,
                         0x3c389d,
                         0xc4,
                         0x46,
                         0xaf,
                         0x51ed,
                         0x20};
  for (auto& value : array_0) v6->add_f_2(value);
  v5->set_f_0(Message3::M4::M15::M24::E14_CONST_1);
  v4->set_f_1(0.868559);
  Message3::M4::M15::M22* v7 = v4->mutable_f_2();
  v7->set_f_0(0xd38f);
  Message3::M4::M20* v9 = v4_0->mutable_f_4();
  Message3::M4::M20::M39* v11_1 = v9->add_f_2();
  v11_1->set_f_0(0x38199f4d833ff82d);
  v9->set_f_0(0x97);
  Message3::M4::M16* v11 = v4_0->mutable_f_3();
  Message3::M4::M16::M30* v12 = v11->mutable_f_4();
  Message3::M4::M16::M30::M43* v13 = v12->mutable_f_1();
  Message3::M4::M16::M30::M43::M50* v14 = v13->mutable_f_2();
  Message3::M4::M16::M30::M43::M50::M64* v15 = v14->mutable_f_4();
  v15->set_f_1(0x55);
  Message3::M4::M16::M30::M43::M50::M68* v16 = v14->mutable_f_6();
  v16->set_f_0(0x3);
  Message3::M4::M16::M30::M43::M50::M72* v17 = v14->mutable_f_8();
  v17->set_f_1(0x1aa3d4d5);
  v17->set_f_5(Message3::M4::M16::M30::M43::M50::M72::E29_CONST_1);
  v17->set_f_6(0xb1f9b0);
  v17->set_f_4(0x3ce8884e);
  Message3::M4::M16::M30::M43::M50::M65* v19_0 = v14->add_f_5();
  Message3::M4::M16::M30::M43::M50::M65::M76* v19 = v19_0->mutable_f_1();
  v19->set_f_1(s->substr(0, 311));
  Message3::M4::M16::M30::M43::M50::M70* v21 = v14->mutable_f_7();
  v21->set_f_0(0x256163e6a1fc52ba);
  Message3::M4::M16::M30::M43::M50::M60* v23 = v14->mutable_f_3();
  v23->set_f_0(0.817881);
  Message3::M4::M16::M29* v24 = v11->mutable_f_3();
  v24->set_f_0(0x57ae61c5c8e448be);
  v11->set_f_0(0x45);
  Message3::M4::M9* v25 = v4_0->mutable_f_1();
  v25->set_f_1(Message3::M4::M9::E6_CONST_5);
  message->set_f_3(Message3::E1_CONST_2);
  message->set_f_2(0x809db3);
  Message3::M2* v26 = message->mutable_f_11();
  Message3::M2::M10* v27 = v26->mutable_f_2();
  Message3::M2::M10::M40* v29_0 = v27->add_f_11();
  v29_0->set_f_2(s->substr(0, 5));
  v29_0->set_f_0(s->substr(0, 5));
  Message3::M2::M10::M40* v29_1 = v27->add_f_11();
  v29_1->set_f_1(Message3::M2::M10::M40::E19_CONST_5);
  v29_1->set_f_2(s->substr(0, 5));
  Message3::M2::M10::M33* v30_0 = v27->add_f_10();
  Message3::M2::M10::M33::M45* v30 = v30_0->mutable_f_1();
  v30->set_f_0(false);
  v30->set_f_1(0xb4be4262f42edaa3);
  v30->set_f_4(0x1e809eadf3295402);
  v30->set_f_2(0x447596);
  Message3::M2::M10::M33::M45::M49* v31 = v30->mutable_f_11();
  Message3::M2::M10::M33::M45::M49::M71* v32 = v31->mutable_f_9();
  Message3::M2::M10::M33::M45::M49::M71::M80* v33 = v32->mutable_f_2();
  v33->set_f_0(s->substr(0, 4));
  Message3::M2::M10::M33::M45::M49::M71::M80::M85* v35_0 = v33->add_f_1();
  v35_0->set_f_0(Message3::M2::M10::M33::M45::M49::M71::M80::M85::E32_CONST_1);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94* v36 =
      v35_0->mutable_f_2();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96* v37 =
      v36->mutable_f_1();
  v37->set_f_14(s->substr(0, 27));
  v37->set_f_0(false);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99* v39 =
      v37->mutable_f_52();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100* v41_0 =
      v39->add_f_7();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101*
      v42_0 = v41_0->add_f_5();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102* v43_0 = v42_0->add_f_1();
  v43_0->set_f_0(0x3d);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103* v43 = v43_0->mutable_f_2();
  v43->set_f_0(true);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104* v44 = v43->mutable_f_1();
  v44->set_f_2(Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::
                   M100::M101::M102::M103::M104::E45_CONST_1);
  v44->set_f_0(0x95ca23dadf7a339);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v46_0 = v44->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M107* v47 = v46_0->mutable_f_3();
  v47->set_f_1(0xc4);
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105* v46_1 = v44->add_f_6();
  Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99::M100::M101::
      M102::M103::M104::M105::M106* v49 = v46_1->mutable_f_2();
  v49->set_f_0(0x56);
  v41_0->set_f_1(0x3dfb);
  v41_0->set_f_0(0xfebc);
  v39->set_f_3(0.100527);
  v39->set_f_0(s->substr(0, 1));
  v39->set_f_1(0.268714);
  v37->set_f_21(0x75ad3d60);
  v37->set_f_19(
      Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::E39_CONST_5);
  v37->set_f_15(0x6b32b6e7);
  v37->set_f_35(0x683c52a);
  v37->set_f_32(s->substr(0, 3));
  v37->set_f_27(0x44);
  v37->set_f_33(0.080252);
  v37->set_f_12(false);
  v37->set_f_13(s->substr(0, 27));
  v37->set_f_23(s->substr(0, 20));
  v36->set_f_0(0x690178ad);
  Message3::M2::M10::M33::M45::M49::M71::M80::M89* v50 = v33->mutable_f_4();
  v50->set_f_0(0x49f38b59);
  v32->add_f_0(0x4fb7b8f2);
  v32->add_f_0(0x1166);
  Message3::M2::M10::M33::M45::M49::M56* v56 = v31->mutable_f_4();
  v56->set_f_0(0x56);
  Message3::M2::M10::M33::M45::M49::M67* v57 = v31->mutable_f_8();
  Message3::M2::M10::M33::M45::M49::M67::M78* v58 = v57->mutable_f_1();
  v58->set_f_0(0x59ec4ab1);
  Message3::M2::M10::M33::M45::M49::M63* v61_0 = v31->add_f_6();
  v61_0->set_f_0(0x7c);
  Message3::M2::M10::M33::M45::M49::M63::M81* v61 = v61_0->mutable_f_2();
  v61->set_f_0(0.374355);
  v61->set_f_3(s->substr(0, 45));
  Message3::M2::M10::M33::M45::M49::M63* v61_1 = v31->add_f_6();
  Message3::M2::M10::M33::M45::M49::M63::M81* v62 = v61_1->mutable_f_2();
  v62->set_f_2(true);
  v62->set_f_1(false);
  Message3::M2::M10::M33::M45::M49::M55* v63 = v31->mutable_f_3();
  v63->set_f_0(0x35862a82);
  Message3::M2::M10::M33::M45::M51* v64 = v30->mutable_f_12();
  v64->set_f_17(0x46);
  v64->set_f_3(0x98);
  v64->set_f_7(s->substr(0, 14));
  v64->set_f_8(s->substr(0, 14));
  v64->set_f_13(s->substr(0, 19));
  float array_1[64] = {
      0.083195, 0.899389, 0.250724, 0.997598, 0.796362, 0.499071, 0.602361,
      0.281656, 0.221443, 0.574013, 0.812258, 0.717296, 0.794207, 0.255107,
      0.383320, 0.666923, 0.439448, 0.944094, 0.557086, 0.831117, 0.137958,
      0.125472, 0.107184, 0.339304, 0.438549, 0.300391, 0.786568, 0.624622,
      0.098210, 0.948744, 0.019206, 0.648428, 0.712198, 0.809277, 0.474068,
      0.008254, 0.770810, 0.078558, 0.320660, 0.861793, 0.717762, 0.473434,
      0.920703, 0.667986, 0.972345, 0.019295, 0.705028, 0.391647, 0.866105,
      0.834466, 0.965223, 0.585636, 0.599064, 0.913667, 0.225737, 0.274789,
      0.737239, 0.712544, 0.583956, 0.172329, 0.313161, 0.063089, 0.575636,
      0.504346};
  for (auto& value : array_1) v64->add_f_21(value);
  v64->set_f_18(0x185a124c);
  Message3::M2::M10::M33::M45::M51::M66* v66_0 = v64->add_f_48();
  v66_0->set_f_0(0x33d6a243d4917fc9);
  Message3::M2::M10::M33::M45::M51::M69* v67_0 = v64->add_f_49();
  v67_0->set_f_0(0x74);
  v67_0->set_f_1(Message3::M2::M10::M33::M45::M51::M69::E28_CONST_4);
  Message3::M2::M10::M33::M45::M51::M62* v67 = v64->mutable_f_47();
  Message3::M2::M10::M33::M45::M51::M62::M79* v69_0 = v67->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84* v71 = v69_0->mutable_f_4();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93* v72 =
      v71->mutable_f_1();
  v72->set_f_0(0xd3);
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95* v74_0 =
      v72->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97* v74 =
      v74_0->mutable_f_2();
  v74->set_f_0(Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97::
                   E42_CONST_5);
  v74_0->set_f_0(0x2061c2f3);
  v69_0->set_f_0(0x1171b7b115768a03);
  Message3::M2::M10::M33::M45::M51::M62::M79* v69_1 = v67->add_f_2();
  Message3::M2::M10::M33::M45::M51::M62::M79::M83* v75 = v69_1->mutable_f_3();
  v75->set_f_0(s->substr(0, 5));
  Message3::M2::M10::M33::M45::M51::M62::M79::M84* v77 = v69_1->mutable_f_4();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93* v78 =
      v77->mutable_f_1();
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95* v80_0 =
      v78->add_f_2();
  v80_0->set_f_0(0x45cd38e0);
  Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97* v80 =
      v80_0->mutable_f_2();
  v80->set_f_0(Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97::
                   E42_CONST_1);
  Message3::M2::M10::M33::M45::M51::M58* v82 = v64->mutable_f_45();
  Message3::M2::M10::M33::M45::M51::M58::M74* v84 = v82->mutable_f_6();
  v84->set_f_0(0xd9);
  v64->set_f_12(true);
  Message3::M2::M10::M33::M45::M51::M53* v86 = v64->mutable_f_41();
  v86->set_f_0(0x5f2328a);
  v64->set_f_6(s->substr(0, 20));
  Message3::M2::M10::M33::M45::M51::M52* v88_0 = v64->add_f_39();
  Message3::M2::M10::M33::M45::M51::M52::M77* v88 = v88_0->mutable_f_2();
  v88->set_f_0(0x825643128b7e6d40);
  v30->set_f_5(0x69b8);
  v27->set_f_2(s->substr(0, 13));
  v27->set_f_4(Message3::M2::M10::E8_CONST_3);
  v27->set_f_5(Message3::M2::M10::E9_CONST_1);
  Message3::M3* v91 = message->mutable_f_12();
  Message3::M3::M13* v93_0 = v91->add_f_10();
  v93_0->set_f_0(s->substr(0, 7));
  Message3::M3::M13::M34* v94_0 = v93_0->add_f_3();
  v94_0->set_f_1(0x11f28981);
  v91->set_f_4(s->substr(0, 30));
  v91->set_f_5(Message3::M3::E3_CONST_5);
  Message3::M6* v94 = message->mutable_f_16();
  Message3::M6::M21* v96_0 = v94->add_f_3();
  v96_0->set_f_22(s->substr(0, 2));
  v96_0->set_f_42(0x9c48);
  v96_0->set_f_18(0x83);
  v96_0->set_f_20(0x402ceba);
  v96_0->set_f_35(Message3::M6::M21::E13_CONST_1);
  int32_t array_2[19] = {0x56982c, 0x25,     0x34,       0xc2,     0x21eb83be,
                         0xd9,     0x9e1ca9, 0x6061f79f, 0x56,     0x28,
                         0x55b9e2, 0xdbae4f, 0xa5,       0x8457c6, 0x3c,
                         0x7,      0x71,     0x5,        0x2};
  for (auto& value : array_2) v96_0->add_f_15(value);
  v96_0->set_f_37(s->substr(0, 1));
  v96_0->set_f_21(0xb4);
  v96_0->set_f_2(0xd4);
  v96_0->set_f_0(Message3::M6::M21::E10_CONST_2);
  v96_0->set_f_1(Message3::M6::M21::E11_CONST_4);
  v96_0->set_f_32(s->substr(0, 4));
  v96_0->set_f_25(0x573eaa0f26a94302);
  v96_0->set_f_16(0.033182);
  v96_0->set_f_26(0x4a);
  v96_0->set_f_4(true);
  v96_0->set_f_5(s->substr(0, 32));
  Message3::M8* v96 = message->mutable_f_19();
  Message3::M8::M17* v97 = v96->mutable_f_5();
  Message3::M8::M17::M31* v98 = v97->mutable_f_5();
  v98->set_f_1(s->substr(0, 28));
  v98->set_f_0(s->substr(0, 23));
  Message3::M8::M17::M35* v101_0 = v97->add_f_6();
  v101_0->set_f_2(0.425500);
  Message3::M8::M19* v104_0 = v96->add_f_6();
  v104_0->set_f_0(s->substr(0, 30));
  Message3::M7* v110 = message->mutable_f_17();
  Message3::M7::M14* v111 = v110->mutable_f_1();
  Message3::M7::M14::M38* v113 = v111->mutable_f_4();
  Message3::M7::M14::M38::M41* v114 = v113->mutable_f_2();
  v114->set_f_0(s->substr(0, 35));
  v113->set_f_0(true);
  v111->set_f_0(s->substr(0, 7));
}

inline void Message3_Get_1(Message3* message) {
  ReceiveInt32((*message).f_4());
  ReceiveString((*message).f_5());
  const Message3::M5& v0 = (*message).f_15();
  ReceiveInt32(v0.f_0());
  const Message3::M8& v1 = (*message).f_19();
  const Message3::M8::M11& v2 = v1.f_4();
  ReceiveUint32(v2.f_0());
  const Message3::M8::M17& v3 = v1.f_5();
  const Message3::M8::M17::M31& v4 = v3.f_5();
  ReceiveString(v4.f_0());
  const Message3::M8::M17::M31::M48& v5 = v4.f_2();
  ReceiveInt32(v5.f_0());
  ReceiveString(v4.f_1());
  for (const auto& v6 : v3.f_6()) {
    ReceiveFloat(v6.f_2());
    ReceiveInt64(v6.f_1());
    ReceiveFloat(v6.f_0());
  }
  const Message3::M8::M17::M28& v7 = v3.f_2();
  ReceiveInt32(v7.f_0());
  ReceiveBool(v3.f_0());
  for (const auto& v8 : v1.f_6()) {
    ReceiveString(v8.f_0());
    const Message3::M8::M19::M26& v9 = v8.f_3();
    for (const auto& v10 : v9.f_6()) {
      ReceiveBool(v10.f_0());
    }
    ReceiveFloat(v9.f_0());
    const Message3::M8::M19::M26::M44& v11 = v9.f_4();
    for (auto f : v11.f_0()) {
      ReceiveInt32(f);
    }
    const Message3::M8::M19::M25& v12 = v8.f_2();
    ReceiveString(v12.f_0());
    for (const auto& v13 : v12.f_1()) {
      ReceiveBool(v13.f_0());
    }
  }
  ReceiveInt32(v1.f_1());
  ReceiveInt32(v1.f_0());
  ReceiveInt64(v1.f_2());
  const Message3::M1& v14 = (*message).f_10();
  ReceiveInt64(v14.f_0());
  for (const auto& v15 : v14.f_2()) {
    ReceiveInt64(v15.f_0());
    const Message3::M1::M12::M27& v16 = v15.f_1();
    ReceiveInt64(v16.f_3());
    ReceiveString(v16.f_2());
    ReceiveInt32(v16.f_5());
    ReceiveString(v16.f_0());
    ReceiveInt32(v16.f_4());
    ReceiveInt64(v16.f_1());
  }
  ReceiveUint64((*message).f_2());
  const Message3::M2& v17 = (*message).f_11();
  const Message3::M2::M18& v18 = v17.f_3();
  const Message3::M2::M18::M23& v19 = v18.f_1();
  ReceiveInt32(v19.f_0());
  ReceiveInt64(v18.f_0());
  const Message3::M2::M10& v20 = v17.f_2();
  ReceiveInt32(v20.f_5());
  ReceiveInt32(v20.f_3());
  ReceiveInt32(v20.f_4());
  for (const auto& v21 : v20.f_11()) {
    ReceiveInt32(v21.f_1());
    ReceiveString(v21.f_0());
    ReceiveInt32(v21.f_3());
    ReceiveString(v21.f_2());
  }
  ReceiveInt32(v20.f_0());
  for (const auto& v22 : v20.f_10()) {
    ReceiveInt32(v22.f_0());
    const Message3::M2::M10::M33::M45& v23 = v22.f_1();
    const Message3::M2::M10::M33::M45::M49& v24 = v23.f_11();
    const Message3::M2::M10::M33::M45::M49::M71& v25 = v24.f_9();
    const Message3::M2::M10::M33::M45::M49::M71::M75& v26 = v25.f_1();
    ReceiveInt64(v26.f_0());
    ReceiveInt64(v26.f_1());
    const Message3::M2::M10::M33::M45::M49::M71::M75::M88& v27 = v26.f_6();
    ReceiveInt32(v27.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80& v28 = v25.f_2();
    const Message3::M2::M10::M33::M45::M49::M71::M80::M87& v29 = v28.f_3();
    ReceiveString(v29.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80::M86& v30 = v28.f_2();
    ReceiveInt32(v30.f_0());
    for (const auto& v31 : v30.f_1()) {
      ReceiveInt32(v31.f_0());
    }
    ReceiveString(v28.f_0());
    for (const auto& v32 : v28.f_1()) {
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94& v33 =
          v32.f_2();
      ReceiveInt32(v33.f_0());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96& v34 =
          v33.f_1();
      ReceiveString(v34.f_13());
      ReceiveUint32(v34.f_28());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99&
          v35 = v34.f_52();
      ReceiveString(v35.f_0());
      ReceiveFloat(v35.f_1());
      ReceiveInt32(v35.f_2());
      ReceiveFloat(v35.f_3());
      for (const auto& v36 : v35.f_7()) {
        for (const auto& v37 : v36.f_5()) {
          ReceiveUint64(v37.f_0());
          for (const auto& v38 : v37.f_1()) {
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103& v39 = v38.f_2();
            ReceiveBool(v39.f_0());
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103::M104& v40 = v39.f_1();
            for (const auto& v41 : v40.f_6()) {
              ReceiveInt32(v41.f_0());
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M106& v42 =
                      v41.f_2();
              ReceiveInt32(v42.f_0());
              ReceiveString(v41.f_1());
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M107& v43 =
                      v41.f_3();
              ReceiveBool(v43.f_2());
              ReceiveInt32(v43.f_0());
              ReceiveString(v43.f_3());
              ReceiveInt64(v43.f_1());
            }
            ReceiveInt64(v40.f_0());
            ReceiveString(v40.f_3());
            ReceiveInt32(v40.f_1());
            ReceiveInt32(v40.f_2());
            ReceiveInt32(v38.f_0());
          }
        }
        ReceiveInt64(v36.f_0());
        ReceiveInt32(v36.f_1());
      }
      ReceiveUint32(v34.f_27());
      ReceiveInt32(v34.f_19());
      ReceiveInt32(v34.f_5());
      ReceiveInt32(v34.f_29());
      ReceiveString(v34.f_24());
      ReceiveInt64(v34.f_2());
      ReceiveDouble(v34.f_6());
      ReceiveInt64(v34.f_20());
      ReceiveFloat(v34.f_3());
      ReceiveInt64(v34.f_25());
      ReceiveInt32(v34.f_18());
      ReceiveString(v34.f_23());
      ReceiveBool(v34.f_0());
      ReceiveUint32(v34.f_15());
      ReceiveBool(v34.f_12());
      ReceiveInt64(v34.f_26());
      ReceiveInt32(v34.f_7());
      ReceiveUint64(v34.f_16());
      ReceiveFloat(v34.f_17());
      ReceiveString(v34.f_14());
      ReceiveBool(v34.f_4());
      ReceiveFloat(v34.f_9());
      ReceiveInt32(v34.f_30());
      ReceiveInt64(v34.f_8());
      ReceiveUint64(v34.f_34());
      ReceiveString(v34.f_11());
      ReceiveFloat(v34.f_33());
      ReceiveInt32(v34.f_1());
      ReceiveInt32(v34.f_22());
      ReceiveFloat(v34.f_31());
      ReceiveUint32(v34.f_35());
      ReceiveInt32(v34.f_21());
      for (const auto& v44 : v34.f_50()) {
        ReceiveString(v44.f_0());
      }
      ReceiveInt32(v34.f_10());
      ReceiveString(v34.f_32());
      for (const auto& v45 : v32.f_1()) {
        ReceiveInt64(v45.f_0());
      }
      ReceiveInt32(v32.f_0());
    }
    const Message3::M2::M10::M33::M45::M49::M71::M80::M89& v46 = v28.f_4();
    ReceiveInt64(v46.f_0());
    for (auto f : v25.f_0()) {
      ReceiveInt64(f);
    }
    for (const auto& v47 : v24.f_6()) {
      const Message3::M2::M10::M33::M45::M49::M63::M81& v48 = v47.f_2();
      ReceiveBool(v48.f_2());
      ReceiveFloat(v48.f_0());
      ReceiveBool(v48.f_1());
      ReceiveString(v48.f_3());
      ReceiveUint32(v47.f_0());
    }
    const Message3::M2::M10::M33::M45::M49::M55& v49 = v24.f_3();
    ReceiveInt32(v49.f_0());
    ReceiveInt32(v24.f_0());
    const Message3::M2::M10::M33::M45::M49::M56& v50 = v24.f_4();
    ReceiveInt32(v50.f_0());
    const Message3::M2::M10::M33::M45::M49::M67& v51 = v24.f_8();
    const Message3::M2::M10::M33::M45::M49::M67::M78& v52 = v51.f_1();
    const Message3::M2::M10::M33::M45::M49::M67::M78::M82& v53 = v52.f_3();
    ReceiveBool(v53.f_0());
    ReceiveInt32(v53.f_2());
    ReceiveInt32(v53.f_1());
    ReceiveInt32(v52.f_0());
    ReceiveInt32(v51.f_0());
    ReceiveString(v23.f_8());
    ReceiveBool(v23.f_0());
    ReceiveUint32(v23.f_5());
    ReceiveUint64(v23.f_1());
    ReceiveUint64(v23.f_4());
    ReceiveInt32(v23.f_3());
    const Message3::M2::M10::M33::M45::M51& v54 = v23.f_12();
    ReceiveInt32(v54.f_2());
    const Message3::M2::M10::M33::M45::M51::M57& v55 = v54.f_44();
    ReceiveInt64(v55.f_0());
    ReceiveString(v54.f_8());
    ReceiveInt64(v54.f_5());
    ReceiveInt64(v54.f_17());
    ReceiveString(v54.f_13());
    const Message3::M2::M10::M33::M45::M51::M61& v56 = v54.f_46();
    ReceiveInt64(v56.f_0());
    ReceiveString(v54.f_15());
    ReceiveString(v54.f_7());
    for (auto f : v54.f_21()) {
      ReceiveFloat(f);
    }
    ReceiveInt32(v54.f_10());
    ReceiveInt32(v54.f_11());
    const Message3::M2::M10::M33::M45::M51::M62& v57 = v54.f_47();
    for (const auto& v58 : v57.f_2()) {
      const Message3::M2::M10::M33::M45::M51::M62::M79::M83& v59 = v58.f_3();
      ReceiveString(v59.f_0());
      for (const auto& v60 : v59.f_4()) {
        for (auto f : v60.f_0()) {
          ReceiveInt32(f);
        }
      }
      ReceiveUint64(v58.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84& v61 = v58.f_4();
      ReceiveString(v61.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93& v62 =
          v61.f_1();
      ReceiveInt32(v62.f_0());
      for (const auto& v63 : v62.f_2()) {
        ReceiveUint32(v63.f_0());
        const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97&
            v64 = v63.f_2();
        ReceiveInt32(v64.f_0());
      }
    }
    ReceiveInt32(v57.f_0());
    for (const auto& v65 : v54.f_49()) {
      ReceiveInt64(v65.f_3());
      ReceiveInt32(v65.f_1());
      ReceiveInt32(v65.f_2());
      ReceiveInt32(v65.f_0());
    }
    ReceiveUint32(v54.f_18());
    ReceiveInt32(v54.f_4());
    ReceiveInt64(v54.f_20());
    ReceiveBool(v54.f_12());
    ReceiveString(v54.f_16());
    ReceiveInt32(v54.f_0());
    ReceiveUint64(v54.f_1());
    const Message3::M2::M10::M33::M45::M51::M58& v66 = v54.f_45();
    const Message3::M2::M10::M33::M45::M51::M58::M74& v67 = v66.f_6();
    ReceiveUint32(v67.f_0());
    const Message3::M2::M10::M33::M45::M51::M58::M73& v68 = v66.f_4();
    ReceiveFloat(v68.f_0());
    ReceiveInt64(v66.f_0());
    const Message3::M2::M10::M33::M45::M51::M53& v69 = v54.f_41();
    ReceiveInt64(v69.f_0());
    ReceiveString(v54.f_6());
    ReceiveInt32(v54.f_9());
    ReceiveInt32(v54.f_22());
    for (const auto& v70 : v54.f_48()) {
      ReceiveInt64(v70.f_0());
    }
    for (const auto& v71 : v54.f_39()) {
      ReceiveInt32(v71.f_0());
      const Message3::M2::M10::M33::M45::M51::M52::M77& v72 = v71.f_2();
      ReceiveUint64(v72.f_0());
    }
    ReceiveInt32(v54.f_19());
    ReceiveUint32(v54.f_3());
    ReceiveString(v54.f_14());
    ReceiveInt64(v23.f_2());
    ReceiveBool(v23.f_7());
    ReceiveUint64(v23.f_6());
  }
  ReceiveString(v20.f_2());
  ReceiveDouble(v20.f_1());
  ReceiveInt32(v17.f_0());
  for (const auto& v73 : (*message).f_13()) {
    const Message3::M4::M15& v74 = v73.f_2();
    ReceiveFloat(v74.f_1());
    const Message3::M4::M15::M32& v75 = v74.f_4();
    ReceiveInt32(v75.f_0());
    ReceiveInt64(v74.f_0());
    const Message3::M4::M15::M22& v76 = v74.f_2();
    ReceiveUint32(v76.f_0());
    const Message3::M4::M15::M24& v77 = v74.f_3();
    const Message3::M4::M15::M24::M42& v78 = v77.f_2();
    ReceiveBool(v78.f_11());
    ReceiveInt64(v78.f_7());
    ReceiveInt64(v78.f_5());
    ReceiveFloat(v78.f_8());
    ReceiveString(v78.f_12());
    ReceiveString(v78.f_4());
    ReceiveUint64(v78.f_1());
    ReceiveString(v78.f_10());
    ReceiveInt32(v78.f_13());
    ReceiveDouble(v78.f_9());
    for (auto f : v78.f_2()) {
      ReceiveInt64(f);
    }
    ReceiveString(v78.f_3());
    ReceiveInt64(v78.f_0());
    ReceiveBool(v78.f_6());
    ReceiveInt32(v77.f_0());
    ReceiveInt32(v73.f_0());
    const Message3::M4::M9& v79 = v73.f_1();
    ReceiveInt32(v79.f_1());
    ReceiveString(v79.f_0());
    const Message3::M4::M16& v80 = v73.f_3();
    const Message3::M4::M16::M29& v81 = v80.f_3();
    ReceiveUint64(v81.f_0());
    const Message3::M4::M16::M30& v82 = v80.f_4();
    const Message3::M4::M16::M30::M43& v83 = v82.f_1();
    ReceiveInt64(v83.f_1());
    const Message3::M4::M16::M30::M43::M50& v84 = v83.f_2();
    for (const auto& v85 : v84.f_5()) {
      ReceiveBool(v85.f_0());
      const Message3::M4::M16::M30::M43::M50::M65::M76& v86 = v85.f_1();
      ReceiveFloat(v86.f_0());
      ReceiveString(v86.f_5());
      ReceiveString(v86.f_1());
      ReceiveInt64(v86.f_4());
      ReceiveString(v86.f_2());
      for (const auto& f : v86.f_3()) {
        ReceiveString(f);
      }
    }
    const Message3::M4::M16::M30::M43::M50::M59& v87 = v84.f_2();
    ReceiveUint64(v87.f_0());
    const Message3::M4::M16::M30::M43::M50::M60& v88 = v84.f_3();
    ReceiveFloat(v88.f_0());
    const Message3::M4::M16::M30::M43::M50::M64& v89 = v84.f_4();
    ReceiveString(v89.f_2());
    ReceiveInt64(v89.f_0());
    ReceiveUint32(v89.f_1());
    const Message3::M4::M16::M30::M43::M50::M72& v90 = v84.f_8();
    ReceiveUint64(v90.f_2());
    ReceiveInt32(v90.f_5());
    ReceiveInt64(v90.f_6());
    ReceiveInt64(v90.f_0());
    ReceiveUint32(v90.f_4());
    ReceiveUint32(v90.f_3());
    ReceiveInt32(v90.f_1());
    const Message3::M4::M16::M30::M43::M50::M54& v91 = v84.f_1();
    ReceiveString(v91.f_0());
    const Message3::M4::M16::M30::M43::M50::M68& v92 = v84.f_6();
    ReceiveInt32(v92.f_0());
    const Message3::M4::M16::M30::M43::M50::M70& v93 = v84.f_7();
    ReceiveInt64(v93.f_0());
    ReceiveInt32(v84.f_0());
    ReceiveInt64(v83.f_0());
    ReceiveFloat(v82.f_0());
    ReceiveInt32(v80.f_0());
    const Message3::M4::M20& v94 = v73.f_4();
    ReceiveInt32(v94.f_0());
    for (const auto& v95 : v94.f_2()) {
      ReceiveUint64(v95.f_0());
    }
  }
  const Message3::M6& v96 = (*message).f_16();
  for (const auto& v97 : v96.f_3()) {
    ReceiveInt64(v97.f_24());
    ReceiveInt32(v97.f_26());
    ReceiveInt32(v97.f_0());
    ReceiveString(v97.f_30());
    ReceiveUint64(v97.f_3());
    ReceiveString(v97.f_8());
    ReceiveUint32(v97.f_10());
    ReceiveInt64(v97.f_31());
    ReceiveInt64(v97.f_25());
    ReceiveInt64(v97.f_42());
    ReceiveInt32(v97.f_39());
    ReceiveCord(v97.f_19());
    ReceiveString(v97.f_6());
    ReceiveString(v97.f_9());
    ReceiveUint64(v97.f_29());
    ReceiveFloat(v97.f_38());
    ReceiveInt64(v97.f_2());
    ReceiveInt32(v97.f_12());
    ReceiveString(v97.f_34());
    ReceiveUint32(v97.f_20());
    ReceiveCord(v97.f_23());
    ReceiveDouble(v97.f_16());
    ReceiveInt32(v97.f_21());
    ReceiveInt32(v97.f_11());
    ReceiveUint64(v97.f_36());
    ReceiveString(v97.f_37());
    ReceiveString(v97.f_22());
    ReceiveInt32(v97.f_35());
    ReceiveString(v97.f_27());
    ReceiveDouble(v97.f_13());
    ReceiveString(v97.f_28());
    ReceiveUint32(v97.f_18());
    ReceiveUint64(v97.f_41());
    ReceiveString(v97.f_5());
    ReceiveInt32(v97.f_1());
    for (auto f : v97.f_15()) {
      ReceiveInt32(f);
    }
    ReceiveString(v97.f_32());
    ReceiveInt32(v97.f_33());
    ReceiveString(v97.f_40());
    ReceiveString(v97.f_7());
    ReceiveInt32(v97.f_17());
    ReceiveBool(v97.f_4());
    for (auto f : v97.f_14()) {
      ReceiveUint64(f);
    }
  }
  ReceiveInt32(v96.f_0());
  ReceiveUint64((*message).f_0());
  ReceiveString((*message).f_1());
  const Message3::M3& v98 = (*message).f_12();
  ReceiveInt64(v98.f_3());
  ReceiveString(v98.f_4());
  ReceiveInt64(v98.f_6());
  ReceiveInt32(v98.f_0());
  ReceiveInt32(v98.f_1());
  ReceiveString(v98.f_2());
  ReceiveInt32(v98.f_5());
  for (const auto& v99 : v98.f_10()) {
    for (const auto& v100 : v99.f_3()) {
      ReceiveInt32(v100.f_0());
      ReceiveUint32(v100.f_1());
    }
    ReceiveString(v99.f_0());
  }
  ReceiveInt32((*message).f_3());
  const Message3::M7& v101 = (*message).f_17();
  const Message3::M7::M14& v102 = v101.f_1();
  const Message3::M7::M14::M37& v103 = v102.f_2();
  ReceiveUint64(v103.f_0());
  ReceiveString(v102.f_0());
  const Message3::M7::M14::M38& v104 = v102.f_4();
  ReceiveBool(v104.f_0());
  const Message3::M7::M14::M38::M41& v105 = v104.f_2();
  ReceiveString(v105.f_0());
  const Message3::M7::M14::M36& v106 = v102.f_1();
  for (const auto& f : v106.f_0()) {
    ReceiveString(f);
  }
  ReceiveInt64(v101.f_0());
}

inline void Message3_Get_2(Message3* message) {
  ReceiveString((*message).f_1());
  const Message3::M7& v0 = (*message).f_17();
  ReceiveInt64(v0.f_0());
  const Message3::M7::M14& v1 = v0.f_1();
  ReceiveString(v1.f_0());
  const Message3::M7::M14::M38& v2 = v1.f_4();
  ReceiveBool(v2.f_0());
  const Message3::M7::M14::M38::M41& v3 = v2.f_2();
  ReceiveString(v3.f_0());
  const Message3::M7::M14::M37& v4 = v1.f_2();
  ReceiveUint64(v4.f_0());
  const Message3::M7::M14::M36& v5 = v1.f_1();
  for (const auto& f : v5.f_0()) {
    ReceiveString(f);
  }
  const Message3::M6& v6 = (*message).f_16();
  ReceiveInt32(v6.f_0());
  for (const auto& v7 : v6.f_3()) {
    ReceiveUint32(v7.f_20());
    ReceiveInt32(v7.f_1());
    for (auto f : v7.f_14()) {
      ReceiveUint64(f);
    }
    ReceiveInt32(v7.f_39());
    ReceiveCord(v7.f_19());
    ReceiveInt32(v7.f_12());
    ReceiveString(v7.f_30());
    ReceiveUint64(v7.f_29());
    ReceiveString(v7.f_7());
    ReceiveString(v7.f_5());
    ReceiveString(v7.f_27());
    ReceiveInt64(v7.f_31());
    ReceiveString(v7.f_32());
    ReceiveInt32(v7.f_21());
    ReceiveCord(v7.f_23());
    ReceiveInt64(v7.f_2());
    ReceiveFloat(v7.f_38());
    ReceiveString(v7.f_34());
    ReceiveInt32(v7.f_11());
    ReceiveUint64(v7.f_36());
    ReceiveUint32(v7.f_18());
    ReceiveString(v7.f_9());
    ReceiveString(v7.f_37());
    ReceiveInt32(v7.f_17());
    ReceiveDouble(v7.f_16());
    ReceiveString(v7.f_40());
    ReceiveString(v7.f_6());
    ReceiveBool(v7.f_4());
    ReceiveString(v7.f_28());
    ReceiveUint64(v7.f_41());
    for (auto f : v7.f_15()) {
      ReceiveInt32(f);
    }
    ReceiveString(v7.f_22());
    ReceiveUint64(v7.f_3());
    ReceiveInt32(v7.f_35());
    ReceiveInt64(v7.f_25());
    ReceiveInt64(v7.f_24());
    ReceiveInt32(v7.f_0());
    ReceiveInt32(v7.f_26());
    ReceiveUint32(v7.f_10());
    ReceiveInt32(v7.f_33());
    ReceiveString(v7.f_8());
    ReceiveInt64(v7.f_42());
    ReceiveDouble(v7.f_13());
  }
  const Message3::M2& v8 = (*message).f_11();
  ReceiveInt32(v8.f_0());
  const Message3::M2::M18& v9 = v8.f_3();
  const Message3::M2::M18::M23& v10 = v9.f_1();
  ReceiveInt32(v10.f_0());
  ReceiveInt64(v9.f_0());
  const Message3::M2::M10& v11 = v8.f_2();
  for (const auto& v12 : v11.f_10()) {
    ReceiveInt32(v12.f_0());
    const Message3::M2::M10::M33::M45& v13 = v12.f_1();
    ReceiveBool(v13.f_7());
    ReceiveInt32(v13.f_3());
    ReceiveUint64(v13.f_1());
    ReceiveUint64(v13.f_4());
    ReceiveUint32(v13.f_5());
    ReceiveString(v13.f_8());
    ReceiveInt64(v13.f_2());
    ReceiveUint64(v13.f_6());
    const Message3::M2::M10::M33::M45::M49& v14 = v13.f_11();
    for (const auto& v15 : v14.f_6()) {
      const Message3::M2::M10::M33::M45::M49::M63::M81& v16 = v15.f_2();
      ReceiveBool(v16.f_1());
      ReceiveBool(v16.f_2());
      ReceiveString(v16.f_3());
      ReceiveFloat(v16.f_0());
      ReceiveUint32(v15.f_0());
    }
    const Message3::M2::M10::M33::M45::M49::M55& v17 = v14.f_3();
    ReceiveInt32(v17.f_0());
    ReceiveInt32(v14.f_0());
    const Message3::M2::M10::M33::M45::M49::M71& v18 = v14.f_9();
    const Message3::M2::M10::M33::M45::M49::M71::M75& v19 = v18.f_1();
    ReceiveInt64(v19.f_0());
    ReceiveInt64(v19.f_1());
    const Message3::M2::M10::M33::M45::M49::M71::M75::M88& v20 = v19.f_6();
    ReceiveInt32(v20.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80& v21 = v18.f_2();
    const Message3::M2::M10::M33::M45::M49::M71::M80::M89& v22 = v21.f_4();
    ReceiveInt64(v22.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80::M86& v23 = v21.f_2();
    for (const auto& v24 : v23.f_1()) {
      ReceiveInt32(v24.f_0());
    }
    ReceiveInt32(v23.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80::M87& v25 = v21.f_3();
    ReceiveString(v25.f_0());
    for (const auto& v26 : v21.f_1()) {
      ReceiveInt32(v26.f_0());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94& v27 =
          v26.f_2();
      ReceiveInt32(v27.f_0());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96& v28 =
          v27.f_1();
      ReceiveInt64(v28.f_20());
      ReceiveInt64(v28.f_2());
      ReceiveUint64(v28.f_16());
      ReceiveUint32(v28.f_28());
      ReceiveBool(v28.f_4());
      ReceiveFloat(v28.f_31());
      ReceiveUint32(v28.f_15());
      ReceiveString(v28.f_23());
      ReceiveInt32(v28.f_10());
      ReceiveFloat(v28.f_3());
      ReceiveBool(v28.f_0());
      ReceiveFloat(v28.f_17());
      ReceiveInt64(v28.f_8());
      ReceiveString(v28.f_32());
      ReceiveString(v28.f_13());
      ReceiveInt64(v28.f_26());
      ReceiveInt32(v28.f_1());
      ReceiveString(v28.f_24());
      ReceiveInt32(v28.f_19());
      ReceiveInt32(v28.f_21());
      for (const auto& v29 : v28.f_50()) {
        ReceiveString(v29.f_0());
      }
      ReceiveDouble(v28.f_6());
      ReceiveInt32(v28.f_7());
      ReceiveInt32(v28.f_29());
      ReceiveInt64(v28.f_25());
      ReceiveUint64(v28.f_34());
      ReceiveString(v28.f_14());
      ReceiveFloat(v28.f_33());
      ReceiveInt32(v28.f_18());
      ReceiveUint32(v28.f_35());
      ReceiveInt32(v28.f_30());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99&
          v30 = v28.f_52();
      for (const auto& v31 : v30.f_7()) {
        ReceiveInt64(v31.f_0());
        ReceiveInt32(v31.f_1());
        for (const auto& v32 : v31.f_5()) {
          ReceiveUint64(v32.f_0());
          for (const auto& v33 : v32.f_1()) {
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103& v34 = v33.f_2();
            ReceiveBool(v34.f_0());
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103::M104& v35 = v34.f_1();
            ReceiveInt64(v35.f_0());
            ReceiveInt32(v35.f_1());
            ReceiveString(v35.f_3());
            for (const auto& v36 : v35.f_6()) {
              ReceiveString(v36.f_1());
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M107& v37 =
                      v36.f_3();
              ReceiveBool(v37.f_2());
              ReceiveInt64(v37.f_1());
              ReceiveInt32(v37.f_0());
              ReceiveString(v37.f_3());
              ReceiveInt32(v36.f_0());
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M106& v38 =
                      v36.f_2();
              ReceiveInt32(v38.f_0());
            }
            ReceiveInt32(v35.f_2());
            ReceiveInt32(v33.f_0());
          }
        }
      }
      ReceiveFloat(v30.f_3());
      ReceiveInt32(v30.f_2());
      ReceiveString(v30.f_0());
      ReceiveFloat(v30.f_1());
      ReceiveFloat(v28.f_9());
      ReceiveString(v28.f_11());
      ReceiveInt32(v28.f_5());
      ReceiveBool(v28.f_12());
      ReceiveUint32(v28.f_27());
      ReceiveInt32(v28.f_22());
      for (const auto& v39 : v26.f_1()) {
        ReceiveInt64(v39.f_0());
      }
    }
    ReceiveString(v21.f_0());
    for (auto f : v18.f_0()) {
      ReceiveInt64(f);
    }
    const Message3::M2::M10::M33::M45::M49::M67& v40 = v14.f_8();
    const Message3::M2::M10::M33::M45::M49::M67::M78& v41 = v40.f_1();
    const Message3::M2::M10::M33::M45::M49::M67::M78::M82& v42 = v41.f_3();
    ReceiveBool(v42.f_0());
    ReceiveInt32(v42.f_2());
    ReceiveInt32(v42.f_1());
    ReceiveInt32(v41.f_0());
    ReceiveInt32(v40.f_0());
    const Message3::M2::M10::M33::M45::M49::M56& v43 = v14.f_4();
    ReceiveInt32(v43.f_0());
    ReceiveBool(v13.f_0());
    const Message3::M2::M10::M33::M45::M51& v44 = v13.f_12();
    const Message3::M2::M10::M33::M45::M51::M53& v45 = v44.f_41();
    ReceiveInt64(v45.f_0());
    ReceiveString(v44.f_8());
    ReceiveUint64(v44.f_1());
    ReceiveString(v44.f_13());
    ReceiveInt32(v44.f_4());
    ReceiveInt32(v44.f_10());
    for (auto f : v44.f_21()) {
      ReceiveFloat(f);
    }
    ReceiveInt32(v44.f_22());
    ReceiveBool(v44.f_12());
    ReceiveString(v44.f_7());
    ReceiveInt64(v44.f_17());
    ReceiveInt64(v44.f_5());
    const Message3::M2::M10::M33::M45::M51::M61& v46 = v44.f_46();
    ReceiveInt64(v46.f_0());
    ReceiveInt32(v44.f_11());
    ReceiveInt32(v44.f_19());
    const Message3::M2::M10::M33::M45::M51::M58& v47 = v44.f_45();
    const Message3::M2::M10::M33::M45::M51::M58::M74& v48 = v47.f_6();
    ReceiveUint32(v48.f_0());
    ReceiveInt64(v47.f_0());
    const Message3::M2::M10::M33::M45::M51::M58::M73& v49 = v47.f_4();
    ReceiveFloat(v49.f_0());
    ReceiveInt32(v44.f_2());
    ReceiveString(v44.f_14());
    const Message3::M2::M10::M33::M45::M51::M62& v50 = v44.f_47();
    ReceiveInt32(v50.f_0());
    for (const auto& v51 : v50.f_2()) {
      const Message3::M2::M10::M33::M45::M51::M62::M79::M83& v52 = v51.f_3();
      ReceiveString(v52.f_0());
      for (const auto& v53 : v52.f_4()) {
        for (auto f : v53.f_0()) {
          ReceiveInt32(f);
        }
      }
      ReceiveUint64(v51.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84& v54 = v51.f_4();
      ReceiveString(v54.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93& v55 =
          v54.f_1();
      for (const auto& v56 : v55.f_2()) {
        const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97&
            v57 = v56.f_2();
        ReceiveInt32(v57.f_0());
        ReceiveUint32(v56.f_0());
      }
      ReceiveInt32(v55.f_0());
    }
    ReceiveInt32(v44.f_9());
    ReceiveInt32(v44.f_0());
    ReceiveUint32(v44.f_3());
    ReceiveInt64(v44.f_20());
    ReceiveString(v44.f_15());
    for (const auto& v58 : v44.f_48()) {
      ReceiveInt64(v58.f_0());
    }
    for (const auto& v59 : v44.f_49()) {
      ReceiveInt64(v59.f_3());
      ReceiveInt32(v59.f_1());
      ReceiveInt32(v59.f_0());
      ReceiveInt32(v59.f_2());
    }
    ReceiveString(v44.f_16());
    ReceiveUint32(v44.f_18());
    const Message3::M2::M10::M33::M45::M51::M57& v60 = v44.f_44();
    ReceiveInt64(v60.f_0());
    for (const auto& v61 : v44.f_39()) {
      ReceiveInt32(v61.f_0());
      const Message3::M2::M10::M33::M45::M51::M52::M77& v62 = v61.f_2();
      ReceiveUint64(v62.f_0());
    }
    ReceiveString(v44.f_6());
  }
  ReceiveDouble(v11.f_1());
  ReceiveString(v11.f_2());
  for (const auto& v63 : v11.f_11()) {
    ReceiveString(v63.f_2());
    ReceiveInt32(v63.f_1());
    ReceiveString(v63.f_0());
    ReceiveInt32(v63.f_3());
  }
  ReceiveInt32(v11.f_5());
  ReceiveInt32(v11.f_3());
  ReceiveInt32(v11.f_4());
  ReceiveInt32(v11.f_0());
  const Message3::M8& v64 = (*message).f_19();
  const Message3::M8::M17& v65 = v64.f_5();
  for (const auto& v66 : v65.f_6()) {
    ReceiveFloat(v66.f_2());
    ReceiveInt64(v66.f_1());
    ReceiveFloat(v66.f_0());
  }
  ReceiveBool(v65.f_0());
  const Message3::M8::M17::M28& v67 = v65.f_2();
  ReceiveInt32(v67.f_0());
  const Message3::M8::M17::M31& v68 = v65.f_5();
  const Message3::M8::M17::M31::M48& v69 = v68.f_2();
  ReceiveInt32(v69.f_0());
  ReceiveString(v68.f_1());
  ReceiveString(v68.f_0());
  ReceiveInt32(v64.f_1());
  ReceiveInt32(v64.f_0());
  for (const auto& v70 : v64.f_6()) {
    const Message3::M8::M19::M25& v71 = v70.f_2();
    for (const auto& v72 : v71.f_1()) {
      ReceiveBool(v72.f_0());
    }
    ReceiveString(v71.f_0());
    ReceiveString(v70.f_0());
    const Message3::M8::M19::M26& v73 = v70.f_3();
    ReceiveFloat(v73.f_0());
    const Message3::M8::M19::M26::M44& v74 = v73.f_4();
    for (auto f : v74.f_0()) {
      ReceiveInt32(f);
    }
    for (const auto& v75 : v73.f_6()) {
      ReceiveBool(v75.f_0());
    }
  }
  ReceiveInt64(v64.f_2());
  const Message3::M8::M11& v76 = v64.f_4();
  ReceiveUint32(v76.f_0());
  ReceiveUint64((*message).f_0());
  for (const auto& v77 : (*message).f_13()) {
    const Message3::M4::M16& v78 = v77.f_3();
    ReceiveInt32(v78.f_0());
    const Message3::M4::M16::M29& v79 = v78.f_3();
    ReceiveUint64(v79.f_0());
    const Message3::M4::M16::M30& v80 = v78.f_4();
    const Message3::M4::M16::M30::M43& v81 = v80.f_1();
    ReceiveInt64(v81.f_0());
    ReceiveInt64(v81.f_1());
    const Message3::M4::M16::M30::M43::M50& v82 = v81.f_2();
    const Message3::M4::M16::M30::M43::M50::M54& v83 = v82.f_1();
    ReceiveString(v83.f_0());
    const Message3::M4::M16::M30::M43::M50::M70& v84 = v82.f_7();
    ReceiveInt64(v84.f_0());
    const Message3::M4::M16::M30::M43::M50::M60& v85 = v82.f_3();
    ReceiveFloat(v85.f_0());
    const Message3::M4::M16::M30::M43::M50::M59& v86 = v82.f_2();
    ReceiveUint64(v86.f_0());
    for (const auto& v87 : v82.f_5()) {
      const Message3::M4::M16::M30::M43::M50::M65::M76& v88 = v87.f_1();
      ReceiveString(v88.f_2());
      for (const auto& f : v88.f_3()) {
        ReceiveString(f);
      }
      ReceiveString(v88.f_1());
      ReceiveFloat(v88.f_0());
      ReceiveString(v88.f_5());
      ReceiveInt64(v88.f_4());
      ReceiveBool(v87.f_0());
    }
    const Message3::M4::M16::M30::M43::M50::M68& v89 = v82.f_6();
    ReceiveInt32(v89.f_0());
    ReceiveInt32(v82.f_0());
    const Message3::M4::M16::M30::M43::M50::M72& v90 = v82.f_8();
    ReceiveInt64(v90.f_6());
    ReceiveUint32(v90.f_4());
    ReceiveInt32(v90.f_1());
    ReceiveUint32(v90.f_3());
    ReceiveInt64(v90.f_0());
    ReceiveInt32(v90.f_5());
    ReceiveUint64(v90.f_2());
    const Message3::M4::M16::M30::M43::M50::M64& v91 = v82.f_4();
    ReceiveInt64(v91.f_0());
    ReceiveUint32(v91.f_1());
    ReceiveString(v91.f_2());
    ReceiveFloat(v80.f_0());
    const Message3::M4::M9& v92 = v77.f_1();
    ReceiveInt32(v92.f_1());
    ReceiveString(v92.f_0());
    ReceiveInt32(v77.f_0());
    const Message3::M4::M15& v93 = v77.f_2();
    const Message3::M4::M15::M32& v94 = v93.f_4();
    ReceiveInt32(v94.f_0());
    ReceiveFloat(v93.f_1());
    ReceiveInt64(v93.f_0());
    const Message3::M4::M15::M24& v95 = v93.f_3();
    const Message3::M4::M15::M24::M42& v96 = v95.f_2();
    ReceiveString(v96.f_12());
    ReceiveInt64(v96.f_5());
    ReceiveInt32(v96.f_13());
    ReceiveBool(v96.f_6());
    for (auto f : v96.f_2()) {
      ReceiveInt64(f);
    }
    ReceiveDouble(v96.f_9());
    ReceiveBool(v96.f_11());
    ReceiveFloat(v96.f_8());
    ReceiveString(v96.f_4());
    ReceiveString(v96.f_3());
    ReceiveInt64(v96.f_0());
    ReceiveInt64(v96.f_7());
    ReceiveString(v96.f_10());
    ReceiveUint64(v96.f_1());
    ReceiveInt32(v95.f_0());
    const Message3::M4::M15::M22& v97 = v93.f_2();
    ReceiveUint32(v97.f_0());
    const Message3::M4::M20& v98 = v77.f_4();
    for (const auto& v99 : v98.f_2()) {
      ReceiveUint64(v99.f_0());
    }
    ReceiveInt32(v98.f_0());
  }
  ReceiveInt32((*message).f_3());
  ReceiveString((*message).f_5());
  const Message3::M1& v100 = (*message).f_10();
  ReceiveInt64(v100.f_0());
  for (const auto& v101 : v100.f_2()) {
    const Message3::M1::M12::M27& v102 = v101.f_1();
    ReceiveInt64(v102.f_1());
    ReceiveInt64(v102.f_3());
    ReceiveInt32(v102.f_4());
    ReceiveString(v102.f_2());
    ReceiveInt32(v102.f_5());
    ReceiveString(v102.f_0());
    ReceiveInt64(v101.f_0());
  }
  ReceiveInt32((*message).f_4());
  const Message3::M3& v103 = (*message).f_12();
  ReceiveInt64(v103.f_6());
  ReceiveString(v103.f_4());
  ReceiveInt32(v103.f_1());
  ReceiveInt32(v103.f_5());
  for (const auto& v104 : v103.f_10()) {
    for (const auto& v105 : v104.f_3()) {
      ReceiveInt32(v105.f_0());
      ReceiveUint32(v105.f_1());
    }
    ReceiveString(v104.f_0());
  }
  ReceiveInt64(v103.f_3());
  ReceiveInt32(v103.f_0());
  ReceiveString(v103.f_2());
  ReceiveUint64((*message).f_2());
  const Message3::M5& v106 = (*message).f_15();
  ReceiveInt32(v106.f_0());
}

inline void Message3_Get_3(Message3* message) {
  ReceiveInt32((*message).f_4());
  const Message3::M3& v0 = (*message).f_12();
  ReceiveString(v0.f_4());
  ReceiveInt32(v0.f_1());
  ReceiveInt64(v0.f_6());
  ReceiveString(v0.f_2());
  ReceiveInt32(v0.f_5());
  ReceiveInt32(v0.f_0());
  for (const auto& v1 : v0.f_10()) {
    for (const auto& v2 : v1.f_3()) {
      ReceiveUint32(v2.f_1());
      ReceiveInt32(v2.f_0());
    }
    ReceiveString(v1.f_0());
  }
  ReceiveInt64(v0.f_3());
  ReceiveInt32((*message).f_3());
  ReceiveUint64((*message).f_2());
  const Message3::M6& v3 = (*message).f_16();
  ReceiveInt32(v3.f_0());
  for (const auto& v4 : v3.f_3()) {
    ReceiveString(v4.f_32());
    ReceiveString(v4.f_28());
    ReceiveString(v4.f_9());
    ReceiveString(v4.f_40());
    ReceiveInt64(v4.f_42());
    ReceiveString(v4.f_6());
    ReceiveInt64(v4.f_31());
    ReceiveString(v4.f_5());
    ReceiveCord(v4.f_19());
    ReceiveDouble(v4.f_13());
    ReceiveUint32(v4.f_18());
    ReceiveString(v4.f_8());
    for (auto f : v4.f_14()) {
      ReceiveUint64(f);
    }
    ReceiveString(v4.f_37());
    ReceiveInt32(v4.f_35());
    for (auto f : v4.f_15()) {
      ReceiveInt32(f);
    }
    ReceiveInt32(v4.f_11());
    ReceiveBool(v4.f_4());
    ReceiveString(v4.f_22());
    ReceiveInt32(v4.f_17());
    ReceiveInt32(v4.f_26());
    ReceiveCord(v4.f_23());
    ReceiveUint64(v4.f_29());
    ReceiveInt32(v4.f_33());
    ReceiveString(v4.f_34());
    ReceiveString(v4.f_7());
    ReceiveUint32(v4.f_10());
    ReceiveInt64(v4.f_25());
    ReceiveInt32(v4.f_0());
    ReceiveUint64(v4.f_36());
    ReceiveUint32(v4.f_20());
    ReceiveFloat(v4.f_38());
    ReceiveInt32(v4.f_21());
    ReceiveInt64(v4.f_2());
    ReceiveDouble(v4.f_16());
    ReceiveInt64(v4.f_24());
    ReceiveInt32(v4.f_1());
    ReceiveInt32(v4.f_12());
    ReceiveUint64(v4.f_41());
    ReceiveInt32(v4.f_39());
    ReceiveUint64(v4.f_3());
    ReceiveString(v4.f_30());
    ReceiveString(v4.f_27());
  }
  const Message3::M8& v5 = (*message).f_19();
  for (const auto& v6 : v5.f_6()) {
    ReceiveString(v6.f_0());
    const Message3::M8::M19::M26& v7 = v6.f_3();
    ReceiveFloat(v7.f_0());
    const Message3::M8::M19::M26::M44& v8 = v7.f_4();
    for (auto f : v8.f_0()) {
      ReceiveInt32(f);
    }
    for (const auto& v9 : v7.f_6()) {
      ReceiveBool(v9.f_0());
    }
    const Message3::M8::M19::M25& v10 = v6.f_2();
    for (const auto& v11 : v10.f_1()) {
      ReceiveBool(v11.f_0());
    }
    ReceiveString(v10.f_0());
  }
  ReceiveInt32(v5.f_1());
  const Message3::M8::M17& v12 = v5.f_5();
  for (const auto& v13 : v12.f_6()) {
    ReceiveFloat(v13.f_0());
    ReceiveInt64(v13.f_1());
    ReceiveFloat(v13.f_2());
  }
  const Message3::M8::M17::M31& v14 = v12.f_5();
  const Message3::M8::M17::M31::M48& v15 = v14.f_2();
  ReceiveInt32(v15.f_0());
  ReceiveString(v14.f_1());
  ReceiveString(v14.f_0());
  ReceiveBool(v12.f_0());
  const Message3::M8::M17::M28& v16 = v12.f_2();
  ReceiveInt32(v16.f_0());
  ReceiveInt32(v5.f_0());
  ReceiveInt64(v5.f_2());
  const Message3::M8::M11& v17 = v5.f_4();
  ReceiveUint32(v17.f_0());
  ReceiveString((*message).f_5());
  const Message3::M5& v18 = (*message).f_15();
  ReceiveInt32(v18.f_0());
  ReceiveString((*message).f_1());
  const Message3::M1& v19 = (*message).f_10();
  ReceiveInt64(v19.f_0());
  for (const auto& v20 : v19.f_2()) {
    const Message3::M1::M12::M27& v21 = v20.f_1();
    ReceiveString(v21.f_2());
    ReceiveInt64(v21.f_3());
    ReceiveInt32(v21.f_5());
    ReceiveInt32(v21.f_4());
    ReceiveInt64(v21.f_1());
    ReceiveString(v21.f_0());
    ReceiveInt64(v20.f_0());
  }
  for (const auto& v22 : (*message).f_13()) {
    const Message3::M4::M15& v23 = v22.f_2();
    ReceiveFloat(v23.f_1());
    const Message3::M4::M15::M24& v24 = v23.f_3();
    const Message3::M4::M15::M24::M42& v25 = v24.f_2();
    for (auto f : v25.f_2()) {
      ReceiveInt64(f);
    }
    ReceiveBool(v25.f_11());
    ReceiveString(v25.f_3());
    ReceiveBool(v25.f_6());
    ReceiveFloat(v25.f_8());
    ReceiveString(v25.f_12());
    ReceiveInt64(v25.f_7());
    ReceiveString(v25.f_4());
    ReceiveInt64(v25.f_5());
    ReceiveUint64(v25.f_1());
    ReceiveInt64(v25.f_0());
    ReceiveInt32(v25.f_13());
    ReceiveDouble(v25.f_9());
    ReceiveString(v25.f_10());
    ReceiveInt32(v24.f_0());
    ReceiveInt64(v23.f_0());
    const Message3::M4::M15::M22& v26 = v23.f_2();
    ReceiveUint32(v26.f_0());
    const Message3::M4::M15::M32& v27 = v23.f_4();
    ReceiveInt32(v27.f_0());
    const Message3::M4::M9& v28 = v22.f_1();
    ReceiveInt32(v28.f_1());
    ReceiveString(v28.f_0());
    const Message3::M4::M20& v29 = v22.f_4();
    for (const auto& v30 : v29.f_2()) {
      ReceiveUint64(v30.f_0());
    }
    ReceiveInt32(v29.f_0());
    ReceiveInt32(v22.f_0());
    const Message3::M4::M16& v31 = v22.f_3();
    const Message3::M4::M16::M29& v32 = v31.f_3();
    ReceiveUint64(v32.f_0());
    ReceiveInt32(v31.f_0());
    const Message3::M4::M16::M30& v33 = v31.f_4();
    ReceiveFloat(v33.f_0());
    const Message3::M4::M16::M30::M43& v34 = v33.f_1();
    const Message3::M4::M16::M30::M43::M50& v35 = v34.f_2();
    for (const auto& v36 : v35.f_5()) {
      const Message3::M4::M16::M30::M43::M50::M65::M76& v37 = v36.f_1();
      ReceiveString(v37.f_5());
      ReceiveString(v37.f_1());
      ReceiveInt64(v37.f_4());
      ReceiveString(v37.f_2());
      for (const auto& f : v37.f_3()) {
        ReceiveString(f);
      }
      ReceiveFloat(v37.f_0());
      ReceiveBool(v36.f_0());
    }
    const Message3::M4::M16::M30::M43::M50::M72& v38 = v35.f_8();
    ReceiveUint32(v38.f_4());
    ReceiveInt32(v38.f_1());
    ReceiveUint32(v38.f_3());
    ReceiveInt32(v38.f_5());
    ReceiveUint64(v38.f_2());
    ReceiveInt64(v38.f_6());
    ReceiveInt64(v38.f_0());
    const Message3::M4::M16::M30::M43::M50::M70& v39 = v35.f_7();
    ReceiveInt64(v39.f_0());
    const Message3::M4::M16::M30::M43::M50::M68& v40 = v35.f_6();
    ReceiveInt32(v40.f_0());
    const Message3::M4::M16::M30::M43::M50::M64& v41 = v35.f_4();
    ReceiveInt64(v41.f_0());
    ReceiveUint32(v41.f_1());
    ReceiveString(v41.f_2());
    const Message3::M4::M16::M30::M43::M50::M59& v42 = v35.f_2();
    ReceiveUint64(v42.f_0());
    ReceiveInt32(v35.f_0());
    const Message3::M4::M16::M30::M43::M50::M60& v43 = v35.f_3();
    ReceiveFloat(v43.f_0());
    const Message3::M4::M16::M30::M43::M50::M54& v44 = v35.f_1();
    ReceiveString(v44.f_0());
    ReceiveInt64(v34.f_1());
    ReceiveInt64(v34.f_0());
  }
  ReceiveUint64((*message).f_0());
  const Message3::M7& v45 = (*message).f_17();
  ReceiveInt64(v45.f_0());
  const Message3::M7::M14& v46 = v45.f_1();
  const Message3::M7::M14::M36& v47 = v46.f_1();
  for (const auto& f : v47.f_0()) {
    ReceiveString(f);
  }
  const Message3::M7::M14::M37& v48 = v46.f_2();
  ReceiveUint64(v48.f_0());
  const Message3::M7::M14::M38& v49 = v46.f_4();
  ReceiveBool(v49.f_0());
  const Message3::M7::M14::M38::M41& v50 = v49.f_2();
  ReceiveString(v50.f_0());
  ReceiveString(v46.f_0());
  const Message3::M2& v51 = (*message).f_11();
  const Message3::M2::M18& v52 = v51.f_3();
  const Message3::M2::M18::M23& v53 = v52.f_1();
  ReceiveInt32(v53.f_0());
  ReceiveInt64(v52.f_0());
  const Message3::M2::M10& v54 = v51.f_2();
  ReceiveInt32(v54.f_3());
  ReceiveInt32(v54.f_0());
  ReceiveInt32(v54.f_4());
  ReceiveDouble(v54.f_1());
  for (const auto& v55 : v54.f_10()) {
    const Message3::M2::M10::M33::M45& v56 = v55.f_1();
    ReceiveBool(v56.f_0());
    const Message3::M2::M10::M33::M45::M51& v57 = v56.f_12();
    ReceiveInt32(v57.f_22());
    ReceiveInt32(v57.f_4());
    ReceiveInt32(v57.f_0());
    ReceiveString(v57.f_14());
    ReceiveString(v57.f_8());
    ReceiveString(v57.f_13());
    const Message3::M2::M10::M33::M45::M51::M58& v58 = v57.f_45();
    const Message3::M2::M10::M33::M45::M51::M58::M73& v59 = v58.f_4();
    ReceiveFloat(v59.f_0());
    ReceiveInt64(v58.f_0());
    const Message3::M2::M10::M33::M45::M51::M58::M74& v60 = v58.f_6();
    ReceiveUint32(v60.f_0());
    for (const auto& v61 : v57.f_48()) {
      ReceiveInt64(v61.f_0());
    }
    ReceiveInt64(v57.f_20());
    for (const auto& v62 : v57.f_39()) {
      const Message3::M2::M10::M33::M45::M51::M52::M77& v63 = v62.f_2();
      ReceiveUint64(v63.f_0());
      ReceiveInt32(v62.f_0());
    }
    ReceiveInt64(v57.f_5());
    ReceiveString(v57.f_16());
    ReceiveInt32(v57.f_11());
    ReceiveInt32(v57.f_2());
    for (const auto& v64 : v57.f_49()) {
      ReceiveInt32(v64.f_0());
      ReceiveInt32(v64.f_2());
      ReceiveInt64(v64.f_3());
      ReceiveInt32(v64.f_1());
    }
    ReceiveString(v57.f_7());
    ReceiveBool(v57.f_12());
    ReceiveUint32(v57.f_3());
    ReceiveString(v57.f_15());
    const Message3::M2::M10::M33::M45::M51::M57& v65 = v57.f_44();
    ReceiveInt64(v65.f_0());
    for (auto f : v57.f_21()) {
      ReceiveFloat(f);
    }
    ReceiveInt32(v57.f_10());
    ReceiveString(v57.f_6());
    ReceiveUint64(v57.f_1());
    ReceiveInt64(v57.f_17());
    const Message3::M2::M10::M33::M45::M51::M62& v66 = v57.f_47();
    ReceiveInt32(v66.f_0());
    for (const auto& v67 : v66.f_2()) {
      ReceiveUint64(v67.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84& v68 = v67.f_4();
      ReceiveString(v68.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93& v69 =
          v68.f_1();
      for (const auto& v70 : v69.f_2()) {
        const Message3::M2::M10::M33::M45::M51::M62::M79::M84::M93::M95::M97&
            v71 = v70.f_2();
        ReceiveInt32(v71.f_0());
        ReceiveUint32(v70.f_0());
      }
      ReceiveInt32(v69.f_0());
      const Message3::M2::M10::M33::M45::M51::M62::M79::M83& v72 = v67.f_3();
      for (const auto& v73 : v72.f_4()) {
        for (auto f : v73.f_0()) {
          ReceiveInt32(f);
        }
      }
      ReceiveString(v72.f_0());
    }
    ReceiveInt32(v57.f_9());
    ReceiveInt32(v57.f_19());
    const Message3::M2::M10::M33::M45::M51::M53& v74 = v57.f_41();
    ReceiveInt64(v74.f_0());
    const Message3::M2::M10::M33::M45::M51::M61& v75 = v57.f_46();
    ReceiveInt64(v75.f_0());
    ReceiveUint32(v57.f_18());
    ReceiveString(v56.f_8());
    ReceiveUint32(v56.f_5());
    ReceiveBool(v56.f_7());
    ReceiveUint64(v56.f_4());
    const Message3::M2::M10::M33::M45::M49& v76 = v56.f_11();
    const Message3::M2::M10::M33::M45::M49::M55& v77 = v76.f_3();
    ReceiveInt32(v77.f_0());
    const Message3::M2::M10::M33::M45::M49::M67& v78 = v76.f_8();
    const Message3::M2::M10::M33::M45::M49::M67::M78& v79 = v78.f_1();
    ReceiveInt32(v79.f_0());
    const Message3::M2::M10::M33::M45::M49::M67::M78::M82& v80 = v79.f_3();
    ReceiveInt32(v80.f_1());
    ReceiveBool(v80.f_0());
    ReceiveInt32(v80.f_2());
    ReceiveInt32(v78.f_0());
    const Message3::M2::M10::M33::M45::M49::M56& v81 = v76.f_4();
    ReceiveInt32(v81.f_0());
    const Message3::M2::M10::M33::M45::M49::M71& v82 = v76.f_9();
    const Message3::M2::M10::M33::M45::M49::M71::M75& v83 = v82.f_1();
    ReceiveInt64(v83.f_0());
    ReceiveInt64(v83.f_1());
    const Message3::M2::M10::M33::M45::M49::M71::M75::M88& v84 = v83.f_6();
    ReceiveInt32(v84.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80& v85 = v82.f_2();
    const Message3::M2::M10::M33::M45::M49::M71::M80::M89& v86 = v85.f_4();
    ReceiveInt64(v86.f_0());
    for (const auto& v87 : v85.f_1()) {
      ReceiveInt32(v87.f_0());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94& v88 =
          v87.f_2();
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96& v89 =
          v88.f_1();
      ReceiveUint32(v89.f_27());
      ReceiveInt64(v89.f_26());
      const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::M99&
          v90 = v89.f_52();
      ReceiveFloat(v90.f_3());
      ReceiveInt32(v90.f_2());
      for (const auto& v91 : v90.f_7()) {
        for (const auto& v92 : v91.f_5()) {
          ReceiveUint64(v92.f_0());
          for (const auto& v93 : v92.f_1()) {
            ReceiveInt32(v93.f_0());
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103& v94 = v93.f_2();
            const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                M99::M100::M101::M102::M103::M104& v95 = v94.f_1();
            ReceiveInt32(v95.f_1());
            ReceiveString(v95.f_3());
            ReceiveInt64(v95.f_0());
            for (const auto& v96 : v95.f_6()) {
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M107& v97 =
                      v96.f_3();
              ReceiveString(v97.f_3());
              ReceiveBool(v97.f_2());
              ReceiveInt64(v97.f_1());
              ReceiveInt32(v97.f_0());
              ReceiveInt32(v96.f_0());
              ReceiveString(v96.f_1());
              const Message3::M2::M10::M33::M45::M49::M71::M80::M85::M94::M96::
                  M99::M100::M101::M102::M103::M104::M105::M106& v98 =
                      v96.f_2();
              ReceiveInt32(v98.f_0());
            }
            ReceiveInt32(v95.f_2());
            ReceiveBool(v94.f_0());
          }
        }
        ReceiveInt32(v91.f_1());
        ReceiveInt64(v91.f_0());
      }
      ReceiveString(v90.f_0());
      ReceiveFloat(v90.f_1());
      ReceiveInt32(v89.f_30());
      ReceiveString(v89.f_24());
      ReceiveFloat(v89.f_31());
      ReceiveUint32(v89.f_15());
      ReceiveInt32(v89.f_1());
      ReceiveString(v89.f_23());
      ReceiveUint64(v89.f_34());
      ReceiveInt32(v89.f_7());
      ReceiveFloat(v89.f_3());
      ReceiveUint32(v89.f_28());
      ReceiveFloat(v89.f_33());
      ReceiveUint64(v89.f_16());
      ReceiveDouble(v89.f_6());
      ReceiveInt32(v89.f_10());
      ReceiveInt64(v89.f_20());
      ReceiveInt32(v89.f_19());
      ReceiveFloat(v89.f_9());
      ReceiveBool(v89.f_0());
      ReceiveUint32(v89.f_35());
      ReceiveString(v89.f_14());
      ReceiveInt64(v89.f_25());
      ReceiveBool(v89.f_4());
      ReceiveInt64(v89.f_8());
      ReceiveString(v89.f_13());
      for (const auto& v99 : v89.f_50()) {
        ReceiveString(v99.f_0());
      }
      ReceiveInt32(v89.f_29());
      ReceiveBool(v89.f_12());
      ReceiveString(v89.f_11());
      ReceiveInt32(v89.f_22());
      ReceiveInt64(v89.f_2());
      ReceiveInt32(v89.f_21());
      ReceiveFloat(v89.f_17());
      ReceiveString(v89.f_32());
      ReceiveInt32(v89.f_18());
      ReceiveInt32(v89.f_5());
      ReceiveInt32(v88.f_0());
      for (const auto& v100 : v87.f_1()) {
        ReceiveInt64(v100.f_0());
      }
    }
    const Message3::M2::M10::M33::M45::M49::M71::M80::M87& v101 = v85.f_3();
    ReceiveString(v101.f_0());
    const Message3::M2::M10::M33::M45::M49::M71::M80::M86& v102 = v85.f_2();
    ReceiveInt32(v102.f_0());
    for (const auto& v103 : v102.f_1()) {
      ReceiveInt32(v103.f_0());
    }
    ReceiveString(v85.f_0());
    for (auto f : v82.f_0()) {
      ReceiveInt64(f);
    }
    ReceiveInt32(v76.f_0());
    for (const auto& v104 : v76.f_6()) {
      const Message3::M2::M10::M33::M45::M49::M63::M81& v105 = v104.f_2();
      ReceiveString(v105.f_3());
      ReceiveFloat(v105.f_0());
      ReceiveBool(v105.f_1());
      ReceiveBool(v105.f_2());
      ReceiveUint32(v104.f_0());
    }
    ReceiveUint64(v56.f_1());
    ReceiveInt64(v56.f_2());
    ReceiveInt32(v56.f_3());
    ReceiveUint64(v56.f_6());
    ReceiveInt32(v55.f_0());
  }
  ReceiveString(v54.f_2());
  ReceiveInt32(v54.f_5());
  for (const auto& v106 : v54.f_11()) {
    ReceiveInt32(v106.f_3());
    ReceiveString(v106.f_0());
    ReceiveString(v106.f_2());
    ReceiveInt32(v106.f_1());
  }
  ReceiveInt32(v51.f_0());
}

}  // namespace fleetbench::proto
#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_
