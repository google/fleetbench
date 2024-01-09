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
  Message4::M1* v0 = message->mutable_f_8();
  v0->set_f_0(0x85);
  Message4::M6* v2 = message->mutable_f_13();
  Message4::M6::M19* v3 = v2->mutable_f_2();
  Message4::M6::M19::M20* v4 = v3->mutable_f_3();
  v4->set_f_4(Message4::M6::M19::M20::E10_CONST_4);
  Message4::M6::M19::M30* v5 = v3->mutable_f_7();
  v5->set_f_3(s->substr(0, 10));
  v5->set_f_5(0x63);
  v5->set_f_4(0xe14a);
  Message4::M6::M19::M30::M39* v7_0 = v5->add_f_10();
  v7_0->set_f_1(0x46b20afa7523c9c1);
  v7_0->set_f_4(true);
  Message4::M6::M19::M30::M32* v7 = v5->mutable_f_9();
  v7->set_f_5(0xc2);
  v7->set_f_6(0xec);
  v7->set_f_2(s->substr(0, 3));
  v7->set_f_4(Message4::M6::M19::M30::M32::E14_CONST_4);
  v7->set_f_1(0xcb);
  v3->set_f_0(s->substr(0, 7));
  v3->set_f_1(0x100b);
  Message4::M6::M19::M24* v9_0 = v3->add_f_4();
  Message4::M6::M19::M24::M33* v9 = v9_0->mutable_f_1();
  Message4::M6::M19::M24::M33::M50* v10 = v9->mutable_f_3();
  v10->set_f_0(0xd7);
  Message4::M6::M19::M24::M33::M44* v12 = v9->mutable_f_2();
  Message4::M6::M19::M24::M33::M44::M55* v14_0 = v12->add_f_1();
  v14_0->set_f_0(0.671021);
  Message4::M6::M19::M27* v16_0 = v3->add_f_6();
  float array_1[63] = {
      0.670929, 0.030813, 0.033857, 0.536148, 0.476066, 0.890116, 0.788649,
      0.449734, 0.368322, 0.763288, 0.049087, 0.744135, 0.970534, 0.048007,
      0.215355, 0.464327, 0.136959, 0.105727, 0.526401, 0.503033, 0.734290,
      0.793799, 0.080450, 0.763201, 0.279365, 0.881636, 0.389234, 0.982766,
      0.894528, 0.795634, 0.810148, 0.585402, 0.607745, 0.069633, 0.100013,
      0.092303, 0.040779, 0.331419, 0.183539, 0.961325, 0.081249, 0.750616,
      0.606980, 0.920775, 0.509022, 0.438220, 0.858059, 0.004971, 0.126924,
      0.098630, 0.502692, 0.864441, 0.058886, 0.225434, 0.473493, 0.833862,
      0.481339, 0.849257, 0.669512, 0.888393, 0.536167, 0.518707, 0.223651};
  for (auto& value : array_1) v16_0->add_f_0(value);
  Message4::M6::M19::M27::M31* v16 = v16_0->mutable_f_3();
  Message4::M6::M19::M27::M31::M42* v17 = v16->mutable_f_4();
  v17->set_f_0(0.238834);
  v16_0->set_f_1(0.247207);
  v16_0->set_f_2(Message4::M6::M19::M27::E12_CONST_4);
  Message4::M6::M19::M26* v19 = v3->mutable_f_5();
  v19->set_f_0(0x5c385ff6);
  Message4::M2* v22_0 = message->add_f_9();
  v22_0->set_f_1(0x2b8de1c90ad299ae);
  message->set_f_5(0xd5);
  Message4::M7* v22 = message->mutable_f_14();
  Message4::M7::M15* v24_0 = v22->add_f_3();
  v24_0->set_f_0(Message4::M7::M15::E3_CONST_2);
  v24_0->set_f_5(s->substr(0, 5));
  v24_0->set_f_4(Message4::M7::M15::E4_CONST_3);
  Message4::M7::M15* v24_1 = v22->add_f_3();
  v24_1->set_f_3(0x26c55ba3b9);
  Message4::M7::M14* v24 = v22->mutable_f_1();
  Message4::M7::M14::M29* v25 = v24->mutable_f_1();
  v25->set_f_0(0x6508994);
  Message4::M7::M14::M29::M34* v26 = v25->mutable_f_4();
  v26->set_f_0(0x1a);
  Message4::M7::M14::M29::M34::M41* v27 = v26->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58* v30_0 = v27->add_f_1();
  v30_0->set_f_2(s->substr(0, 1));
  Message4::M7::M14::M29::M34::M41::M58::M66* v30 = v30_0->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73* v31 = v30->mutable_f_3();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76* v32 =
      v31->mutable_f_3();
  v32->set_f_0(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76::E27_CONST_3);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v34_0 = v31->add_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78* v34 =
      v34_0->mutable_f_11();
  v34->set_f_1(0.036414);
  v34->set_f_0(0.398156);
  v34_0->set_f_2(s->substr(0, 8));
  v34_0->set_f_6(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::E28_CONST_1);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v37_0 =
      v34_0->add_f_13();
  v37_0->set_f_0(0x8811);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v38_0 =
      v37_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v39_0 =
      v38_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v40_0 = v39_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v40 = v40_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v41 = v40->mutable_f_2();
  v41->set_f_0(0x7ab1e6c785371870);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v42 = v41->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v43 = v42->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v45_1 = v43->add_f_3();
  v45_1->set_f_0(0x1aef);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v40_1 = v39_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v46 = v40_1->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v47 = v46->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v48 = v47->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v49 = v48->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v52_0 = v49->add_f_3();
  v52_0->set_f_0(0x3b);
  v49->set_f_0(0x9993);
  v39_0->set_f_0(s->substr(0, 3));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v38_1 =
      v37_0->add_f_2();
  v38_1->set_f_0(0x8a);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v53_0 =
      v38_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v54_0 = v53_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v54 = v54_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v55 = v54->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v56 = v55->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v57 = v56->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v60_0 = v57->add_f_3();
  v60_0->set_f_0(0xd);
  v53_0->set_f_0(s->substr(0, 72));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v37_1 =
      v34_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v61_0 =
      v37_1->add_f_2();
  v61_0->set_f_0(0xee);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v62_0 =
      v61_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v63_0 = v62_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v63 = v63_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v64 = v63->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v65 = v64->mutable_f_1();
  v65->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                   M84::M86::M87::M88::M89::E31_CONST_4);
  v64->set_f_0(0x295864fdf86d7a0f);
  v63_0->set_f_0(s->substr(0, 24));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v63_1 = v62_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v69 = v63_1->mutable_f_1();
  v69->set_f_0(0.197737);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v70 = v69->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v71 = v70->mutable_f_1();
  v71->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                   M84::M86::M87::M88::M89::E31_CONST_4);
  v34_0->set_f_3(0x2ac24e27);
  v27->set_f_0(Message4::M7::M14::M29::M34::M41::E17_CONST_5);
  Message4::M7::M16* v78 = v22->mutable_f_4();
  Message4::M7::M16::M28* v79 = v78->mutable_f_2();
  Message4::M7::M16::M28::M35* v80 = v79->mutable_f_1();
  v80->set_f_0(0xf1dd14957fd23550);
  Message4::M7::M16::M28::M35::M51* v81 = v80->mutable_f_26();
  v81->set_f_0(0x5aa891f6);
  Message4::M7::M16::M28::M35::M52* v83_0 = v80->add_f_27();
  v83_0->set_f_0(0x1f5b0b5d);
  Message4::M7::M16::M28::M35::M52::M57* v83 = v83_0->mutable_f_2();
  v83->set_f_0(s->substr(0, 31));
  v80->set_f_7(s->substr(0, 8));
  v80->set_f_3(0.722856);
  v80->set_f_5(true);
  v80->set_f_6(0x61f33d1e);
  Message4::M7::M16::M28::M35::M43* v85 = v80->mutable_f_23();
  Message4::M7::M16::M28::M35::M43::M62* v86 = v85->mutable_f_7();
  Message4::M7::M16::M28::M35::M43::M62::M70* v88_0 = v86->add_f_3();
  v88_0->set_f_0(s->substr(0, 6));
  v86->set_f_0(0xc1);
  v85->set_f_3(0x5f72a7);
  v80->set_f_2(s->substr(0, 6));
  Message4::M7::M16::M28::M35::M40* v89 = v80->mutable_f_21();
  v89->set_f_5(0xcc);
  v89->set_f_3(0x7f3b2);
  Message4::M7::M18* v90 = v22->mutable_f_6();
  Message4::M7::M18::M22* v92_0 = v90->add_f_2();
  v92_0->set_f_0(true);
  Message4::M7::M18::M22::M36* v93_0 = v92_0->add_f_1();
  v93_0->set_f_0(Message4::M7::M18::M22::M36::E16_CONST_4);
  v90->set_f_0(Message4::M7::M18::E8_CONST_4);
  Message4::M5* v93 = message->mutable_f_12();
  Message4::M5::M17* v95 = v93->mutable_f_2();
  v95->set_f_0(Message4::M5::M17::E5_CONST_3);
  v95->set_f_4(s->substr(0, 30));
  v95->set_f_1(Message4::M5::M17::E6_CONST_1);
  Message4::M8* v96 = message->mutable_f_16();
  v96->set_f_1(Message4::M8::E2_CONST_3);
  v96->set_f_0(s->substr(0, 1));
  Message4::M4* v97 = message->mutable_f_11();
  Message4::M4::M12* v99_0 = v97->add_f_2();
  Message4::M4::M12::M23* v100_0 = v99_0->add_f_3();
  Message4::M4::M12::M23::M37* v100 = v100_0->mutable_f_3();
  v100->set_f_0(0.976379);
  Message4::M3* v101 = message->mutable_f_10();
  v101->set_f_6(s->substr(0, 5));
  Message4::M3::M9* v102 = v101->mutable_f_10();
  Message4::M3::M9::M25* v104 = v102->mutable_f_3();
  v104->set_f_8(0x32);
  v104->set_f_0(0x1a49e0f3);
  v104->set_f_10(Message4::M3::M9::M25::E11_CONST_3);
  v104->set_f_2(0x789f8cc7);
  v104->set_f_4(s->substr(0, 5));
  Message4::M3::M9::M25::M38* v105 = v104->mutable_f_13();
  Message4::M3::M9::M25::M38::M49* v107 = v105->mutable_f_8();
  Message4::M3::M9::M25::M38::M49::M65* v108 = v107->mutable_f_5();
  Message4::M3::M9::M25::M38::M49::M65::M69* v110_0 = v108->add_f_12();
  Message4::M3::M9::M25::M38::M49::M65::M69::M72* v111 = v110_0->mutable_f_3();
  v111->set_f_0(0x74007f98);
  v111->set_f_1(0.300567);
  v110_0->set_f_0(0x76);
  v108->set_f_2(0xa3367180);
  v108->set_f_5(0x61776fa6899a174a);
  v108->set_f_0(0x20982df1be7ed1c);
  v108->set_f_3(0xe076d2499fb9);
  Message4::M3::M9::M25::M38::M49::M59* v112 = v107->mutable_f_2();
  v112->set_f_0(Message4::M3::M9::M25::M38::M49::M59::E20_CONST_4);
  v105->set_f_0(0.930524);
  Message4::M3::M9::M25::M38::M47* v116_0 = v105->add_f_4();
  Message4::M3::M9::M25::M38::M47::M60* v116 = v116_0->mutable_f_4();
  v116->set_f_2(0.732913);
  v116->set_f_0(0x504a3fd98e1c8018);
  Message4::M3::M9::M25::M38::M47::M53* v118 = v116_0->mutable_f_1();
  v118->set_f_0(0x36);
  Message4::M3::M9::M25::M38::M47::M53::M71* v119 = v118->mutable_f_1();
  v119->set_f_4(s->substr(0, 20));
  v119->set_f_8(0.778541);
  Message4::M3::M9::M25::M38::M47::M53::M71::M74* v121_0 = v119->add_f_23();
  v121_0->set_f_0(s->substr(0, 6));
  v121_0->set_f_4(0xad);
  v121_0->set_f_2(Message4::M3::M9::M25::M38::M47::M53::M71::M74::E26_CONST_4);
  Message4::M3::M9::M25::M38::M47* v116_1 = v105->add_f_4();
  Message4::M3::M9::M25::M38::M47::M53* v123 = v116_1->mutable_f_1();
  Message4::M3::M9::M25::M38::M47::M53::M71* v124 = v123->mutable_f_1();
  v124->set_f_2(Message4::M3::M9::M25::M38::M47::M53::M71::E24_CONST_3);
  Message4::M3::M9::M25::M38::M47::M53::M71::M74* v126_0 = v124->add_f_23();
  v126_0->set_f_1(0x7971);
  v126_0->set_f_4(0xae1a2a5387a5c8);
  v124->set_f_4(s->substr(0, 3));
  v124->set_f_6(Message4::M3::M9::M25::M38::M47::M53::M71::E25_CONST_2);
  v124->set_f_7(false);
  v124->set_f_10(0.954812);
  v124->set_f_1(0x6a649edb);
  v124->set_f_9(s->substr(0, 21));
  v104->set_f_3(0x52a4aaaa);
  v104->set_f_6(0x109cac8b);
}

inline void Message4_Set_2(Message4* message, std::string* s) {
  Message4::M6* v0 = message->mutable_f_13();
  Message4::M6::M19* v2 = v0->mutable_f_2();
  Message4::M6::M19::M27* v4_0 = v2->add_f_6();
  v4_0->set_f_1(0.421713);
  Message4::M6::M19::M27::M31* v4 = v4_0->mutable_f_3();
  Message4::M6::M19::M27::M31::M42* v5 = v4->mutable_f_4();
  Message4::M6::M19::M27::M31::M42::M54* v6 = v5->mutable_f_1();
  v6->set_f_0(Message4::M6::M19::M27::M31::M42::M54::E19_CONST_5);
  Message4::M6::M19::M30* v7 = v2->mutable_f_7();
  Message4::M6::M19::M30::M32* v8 = v7->mutable_f_9();
  v8->set_f_3(false);
  v8->set_f_0(s->substr(0, 54));
  v8->set_f_6(0x9c59);
  v8->set_f_5(0x74);
  v7->set_f_0(Message4::M6::M19::M30::E13_CONST_4);
  v7->set_f_4(0xbe57ff);
  Message4::M6::M19::M30::M39* v10_0 = v7->add_f_10();
  v10_0->set_f_4(false);
  v10_0->set_f_0(true);
  v10_0->set_f_2(true);
  v7->set_f_2(false);
  Message4::M6::M19::M20* v11 = v2->mutable_f_3();
  v11->set_f_0(0.441355);
  v11->set_f_3(Message4::M6::M19::M20::E9_CONST_4);
  v2->set_f_0(s->substr(0, 31));
  Message4::M6::M19::M24* v13_0 = v2->add_f_4();
  v13_0->set_f_0(0x3a9177f4);
  Message4::M6::M19::M24::M33* v13 = v13_0->mutable_f_1();
  v13->set_f_0(0x10);
  v0->set_f_0(0x6c);
  Message4::M4* v19 = message->mutable_f_11();
  v19->set_f_0(s->substr(0, 27));
  Message4::M4::M12* v21_0 = v19->add_f_2();
  Message4::M4::M12::M23* v22_0 = v21_0->add_f_3();
  v22_0->set_f_0(0.056454);
  Message4::M8* v25 = message->mutable_f_16();
  v25->set_f_1(Message4::M8::E2_CONST_3);
  Message4::M7* v27 = message->mutable_f_14();
  Message4::M7::M18* v28 = v27->mutable_f_6();
  Message4::M7::M18::M22* v30_0 = v28->add_f_2();
  Message4::M7::M18::M22::M36* v31_0 = v30_0->add_f_1();
  v31_0->set_f_0(Message4::M7::M18::M22::M36::E16_CONST_2);
  Message4::M7::M14* v31 = v27->mutable_f_1();
  Message4::M7::M14::M29* v32 = v31->mutable_f_1();
  Message4::M7::M14::M29::M34* v33 = v32->mutable_f_4();
  Message4::M7::M14::M29::M34::M41* v34 = v33->mutable_f_4();
  v34->set_f_0(Message4::M7::M14::M29::M34::M41::E17_CONST_2);
  Message4::M7::M14::M29::M34::M41::M58* v37_0 = v34->add_f_1();
  v37_0->set_f_2(s->substr(0, 8));
  Message4::M7::M14::M29::M34::M41::M58::M66* v37 = v37_0->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73* v38 = v37->mutable_f_3();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v40_0 = v38->add_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v41_0 =
      v40_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v42_0 =
      v41_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v43_0 =
      v42_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v44_0 = v43_0->add_f_2();
  v44_0->set_f_0(s->substr(0, 21));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v44 = v44_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v45 = v44->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v46 = v45->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v47 = v46->mutable_f_1();
  v47->set_f_0(0x41);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M91* v48 = v47->mutable_f_2();
  v48->set_f_0(0x5c);
  v46->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                   M84::M86::M87::M88::M89::E31_CONST_2);
  v41_0->set_f_0(0x595dc8cbb3e6dc7e);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78* v50 =
      v40_0->mutable_f_11();
  v50->set_f_1(0.532558);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81* v51 =
      v50->mutable_f_4();
  v51->set_f_0(s->substr(0, 5));
  v40_0->set_f_2(s->substr(0, 17));
  v40_0->set_f_7(0xa940);
  v38->set_f_0(0x214a389b89ef1e);
  Message4::M7::M14::M29::M34::M41::M58* v37_1 = v34->add_f_1();
  v37_1->set_f_2(s->substr(0, 30));
  v37_1->set_f_1(s->substr(0, 15));
  Message4::M7::M14::M29::M34::M41::M58::M66* v56 = v37_1->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73* v57 = v56->mutable_f_3();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v59_0 = v57->add_f_4();
  v59_0->set_f_0(s->substr(0, 1));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79* v59 =
      v59_0->mutable_f_12();
  v59->set_f_0(s->substr(0, 6));
  v59_0->set_f_5(s->substr(0, 22));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v63_0 =
      v59_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v64_0 =
      v63_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v65_0 =
      v64_0->add_f_2();
  v65_0->set_f_0(s->substr(0, 38));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v64_1 =
      v63_0->add_f_2();
  v64_1->set_f_0(0x93);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v73_0 =
      v64_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v74_0 = v73_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v74 = v74_0->mutable_f_1();
  v74->set_f_0(0.323767);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v75 = v74->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v76 = v75->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v77 = v76->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v80_0 = v77->add_f_3();
  v80_0->set_f_0(0x60b14baa);
  v76->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                   M84::M86::M87::M88::M89::E31_CONST_3);
  v75->set_f_0(0x545927718f8f6b67);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v73_1 =
      v64_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v81_0 = v73_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v81 = v81_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v82 = v81->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v83 = v82->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v84 = v83->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M91* v85 = v84->mutable_f_2();
  v85->set_f_0(0xd539ff82);
  v81->set_f_0(0.119992);
  v63_0->set_f_0(0x93d484a9);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v63_1 =
      v59_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v88_0 =
      v63_1->add_f_2();
  v88_0->set_f_0(0x54b6151f);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v89_0 =
      v88_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v90_0 = v89_0->add_f_2();
  v90_0->set_f_0(s->substr(0, 8));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v90 = v90_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v91 = v90->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v92 = v91->mutable_f_1();
  v92->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                   M84::M86::M87::M88::M89::E31_CONST_1);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v93 = v92->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v95_1 = v93->add_f_3();
  v95_1->set_f_0(0xb109395);
  v90->set_f_0(0.406817);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v88_1 =
      v63_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v97_0 =
      v88_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v98_0 = v97_0->add_f_2();
  v98_0->set_f_0(s->substr(0, 26));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v98 = v98_0->mutable_f_1();
  v98->set_f_0(0.865108);
  v97_0->set_f_0(s->substr(0, 4));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v97_1 =
      v88_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v105_0 = v97_1->add_f_2();
  v105_0->set_f_0(s->substr(0, 8));
  v59_0->set_f_7(0x4b15d7ef1cc31751);
  v59_0->set_f_6(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::E28_CONST_5);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78* v111 =
      v59_0->mutable_f_11();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81* v112 =
      v111->mutable_f_4();
  v112->set_f_0(s->substr(0, 12));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v59_1 = v57->add_f_4();
  v59_1->set_f_2(s->substr(0, 7));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v114_0 =
      v59_1->add_f_13();
  v114_0->set_f_0(0x1963c799);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v115_0 =
      v114_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v116_0 =
      v115_0->add_f_2();
  v116_0->set_f_0(s->substr(0, 9));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v117_0 = v116_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v117 = v117_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v118 = v117->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v119 = v118->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v120 = v119->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v122_0 = v120->add_f_3();
  v122_0->set_f_0(0xd3);
  v118->set_f_0(0x78fb0a7bee816d3d);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v114_1 =
      v59_1->add_f_13();
  v114_1->set_f_0(0xf7);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v124_0 =
      v114_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v125_0 =
      v124_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v126_0 = v125_0->add_f_2();
  v126_0->set_f_0(s->substr(0, 4));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v126 = v126_0->mutable_f_1();
  v126->set_f_0(0.697790);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v127 = v126->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v128 = v127->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v129 = v128->mutable_f_1();
  v129->set_f_0(0x2d);
  v128->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::
                    M84::M86::M87::M88::M89::E31_CONST_5);
  v127->set_f_0(0x2cbede2e7ca1a963);
  v125_0->set_f_0(s->substr(0, 5));
  v59_1->set_f_0(s->substr(0, 6));
  v59_1->set_f_1(s->substr(0, 26));
  v59_1->set_f_4(true);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79* v132 =
      v59_1->mutable_f_12();
  v132->set_f_0(s->substr(0, 3));
  v59_1->set_f_6(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::E28_CONST_2);
  v59_1->set_f_3(0x700bc13b);
  v37_1->set_f_0(0x2326daba7a78ea3f);
  Message4::M7::M15* v139_0 = v27->add_f_3();
  v139_0->set_f_2(0x77a0);
  v27->set_f_0(0.274035);
  Message4::M7::M16* v139 = v27->mutable_f_4();
  Message4::M7::M16::M28* v140 = v139->mutable_f_2();
  Message4::M7::M16::M28::M35* v141 = v140->mutable_f_1();
  Message4::M7::M16::M28::M35::M40* v142 = v141->mutable_f_21();
  v142->set_f_6(0x6d73);
  v142->set_f_5(0x4);
  v141->set_f_8(0xa481655);
  Message4::M7::M16::M28::M35::M43* v145 = v141->mutable_f_23();
  v145->add_f_1(0xaf);
  v145->add_f_1(0x4dca218b);
  v145->add_f_1(0x7c);
  v145->add_f_1(0x1e);
  v141->set_f_3(0.789689);
  v140->set_f_0(s->substr(0, 4));
  Message4::M3* v151 = message->mutable_f_10();
  v151->set_f_4(0.611981);
  v151->set_f_1(0x605e2ceba9c8467b);
  Message4::M3::M9* v152 = v151->mutable_f_10();
  v152->set_f_0(s->substr(0, 4));
  Message4::M3::M9::M25* v154 = v152->mutable_f_3();
  v154->set_f_2(0xc7379d);
  v154->set_f_6(0x1b);
  v154->set_f_10(Message4::M3::M9::M25::E11_CONST_2);
  Message4::M3::M9::M25::M38* v155 = v154->mutable_f_13();
  Message4::M3::M9::M25::M38::M47* v157_0 = v155->add_f_4();
  Message4::M3::M9::M25::M38::M47::M53* v157 = v157_0->mutable_f_1();
  Message4::M3::M9::M25::M38::M47::M53::M71* v158 = v157->mutable_f_1();
  v158->set_f_1(0x49c9d3a3);
  v158->set_f_4(s->substr(0, 13));
  v158->set_f_2(Message4::M3::M9::M25::M38::M47::M53::M71::E24_CONST_2);
  v158->set_f_11(0x6a);
  v158->set_f_9(s->substr(0, 13));
  Message4::M3::M9::M25::M38::M47::M53::M71::M74* v160_0 = v158->add_f_23();
  v160_0->set_f_2(Message4::M3::M9::M25::M38::M47::M53::M71::M74::E26_CONST_1);
  Message4::M3::M9::M25::M38::M47::M60* v160 = v157_0->mutable_f_4();
  v160->set_f_1(0x17);
  Message4::M3::M9::M25::M38::M47::M60::M67* v161 = v160->mutable_f_9();
  v161->set_f_0(s->substr(0, 20));
  v160->set_f_0(0xea);
  Message4::M3::M9::M25::M38::M49* v162 = v155->mutable_f_8();
  v162->set_f_0(s->substr(0, 23));
  Message4::M3::M9::M25::M38::M49::M65* v163 = v162->mutable_f_5();
  v163->set_f_3(0x4d4ee51d7f);
  Message4::M3::M9::M25::M38::M49::M65::M69* v165_0 = v163->add_f_12();
  Message4::M3::M9::M25::M38::M49::M65::M69::M72* v165 = v165_0->mutable_f_3();
  v165->set_f_0(0x2dcd4153);
  v165->set_f_1(0.881125);
  Message4::M3::M9::M25::M38::M49::M65::M69* v165_1 = v163->add_f_12();
  Message4::M3::M9::M25::M38::M49::M65::M69::M75* v167 = v165_1->mutable_f_4();
  v167->set_f_0(0x1617342d);
  Message4::M3::M9::M25::M38::M49::M65::M69::M72* v168 = v165_1->mutable_f_3();
  v168->set_f_0(0x35642737);
  v163->set_f_2(0x6db833ac0574f34a);
  v163->set_f_1(Message4::M3::M9::M25::M38::M49::M65::E22_CONST_1);
  v163->set_f_7(Message4::M3::M9::M25::M38::M49::M65::E23_CONST_1);
  v163->set_f_8(0x1cdbe4e1);
  Message4::M3::M9::M25::M38::M45* v172 = v155->mutable_f_2();
  v172->set_f_0(Message4::M3::M9::M25::M38::M45::E18_CONST_5);
  v154->set_f_4(s->substr(0, 28));
  v154->set_f_0(0x7346c88d);
  Message4::M5* v173 = message->mutable_f_12();
  Message4::M5::M17* v174 = v173->mutable_f_2();
  v174->set_f_4(s->substr(0, 15));
  v174->set_f_6(Message4::M5::M17::E7_CONST_5);
  v174->set_f_3(0.475976);
  v174->set_f_1(Message4::M5::M17::E6_CONST_3);
  v174->set_f_5(0x529e);
  v174->set_f_2(0x6d6a6d24);
  message->set_f_0(0x4f4bd804);
  message->set_f_5(0x56);
  message->add_f_2(0x3b9fb5);
}

inline void Message4_Set_3(Message4* message, std::string* s) {
  Message4::M2* v1_1 = message->add_f_9();
  v1_1->set_f_0(0xa678f8);
  Message4::M1* v1 = message->mutable_f_8();
  Message4::M1::M13* v3_0 = v1->add_f_1();
  v3_0->set_f_0(s->substr(0, 1));
  v1->set_f_0(0xab2e);
  Message4::M8* v3 = message->mutable_f_16();
  v3->set_f_1(Message4::M8::E2_CONST_1);
  v3->set_f_0(s->substr(0, 37));
  Message4::M5* v4 = message->mutable_f_12();
  v4->set_f_0(0x3);
  Message4::M5::M17* v6 = v4->mutable_f_2();
  v6->set_f_5(0x97);
  v6->set_f_0(Message4::M5::M17::E5_CONST_5);
  v6->set_f_3(0.967642);
  v6->set_f_6(Message4::M5::M17::E7_CONST_4);
  message->set_f_5(0x1b85);
  Message4::M6* v7 = message->mutable_f_13();
  v7->set_f_0(0xf7d0b93);
  Message4::M6::M19* v9 = v7->mutable_f_2();
  Message4::M6::M19::M27* v11_0 = v9->add_f_6();
  Message4::M6::M19::M27::M31* v11 = v11_0->mutable_f_3();
  Message4::M6::M19::M27::M31::M42* v12 = v11->mutable_f_4();
  Message4::M6::M19::M27::M31::M42::M54* v13 = v12->mutable_f_1();
  v13->set_f_0(Message4::M6::M19::M27::M31::M42::M54::E19_CONST_3);
  v12->set_f_0(0.167877);
  Message4::M6::M19::M26* v14 = v9->mutable_f_5();
  v14->set_f_0(0x5b);
  Message4::M6::M19::M20* v15 = v9->mutable_f_3();
  v15->set_f_4(Message4::M6::M19::M20::E10_CONST_3);
  v15->set_f_3(Message4::M6::M19::M20::E9_CONST_3);
  Message4::M6::M19::M24* v17_0 = v9->add_f_4();
  Message4::M6::M19::M24::M33* v17 = v17_0->mutable_f_1();
  Message4::M6::M19::M24::M33::M50* v18 = v17->mutable_f_3();
  v18->set_f_0(0x5f62e177);
  Message4::M6::M19::M24::M33::M44* v20 = v17->mutable_f_2();
  Message4::M6::M19::M24::M33::M44::M56* v21 = v20->mutable_f_4();
  v21->set_f_0(0x71);
  v20->set_f_0(s->substr(0, 1));
  Message4::M6::M19::M24::M33::M44::M55* v23_0 = v20->add_f_1();
  v23_0->set_f_0(0.019399);
  Message4::M6::M19::M24* v17_1 = v9->add_f_4();
  Message4::M6::M19::M24::M33* v23 = v17_1->mutable_f_1();
  Message4::M6::M19::M24::M33::M50* v24 = v23->mutable_f_3();
  Message4::M6::M19::M24::M33::M50::M63* v25 = v24->mutable_f_1();
  v25->set_f_0(Message4::M6::M19::M24::M33::M50::M63::E21_CONST_2);
  Message4::M6::M19::M24::M33::M44* v26 = v23->mutable_f_2();
  Message4::M6::M19::M24::M33::M44::M56* v27 = v26->mutable_f_4();
  v27->set_f_0(0xd);
  Message4::M6::M19::M24::M33::M44::M55* v29_0 = v26->add_f_1();
  v29_0->set_f_0(0.892313);
  v17_1->set_f_0(0x66295434);
  Message4::M6::M19::M30* v29 = v9->mutable_f_7();
  v29->set_f_3(s->substr(0, 5));
  Message4::M6::M19::M30::M32* v30 = v29->mutable_f_9();
  v30->set_f_3(false);
  v29->set_f_2(false);
  v29->set_f_1(0x68f2);
  Message4::M6::M19::M30::M39* v32_0 = v29->add_f_10();
  v32_0->set_f_2(true);
  v32_0->set_f_4(true);
  Message4::M4* v32 = message->mutable_f_11();
  v32->set_f_0(s->substr(0, 4));
  Message4::M4::M12* v34_0 = v32->add_f_2();
  Message4::M4::M12::M23* v35_0 = v34_0->add_f_3();
  v35_0->set_f_0(0.471608);
  Message4::M4::M12::M23::M37* v35 = v35_0->mutable_f_3();
  v35->set_f_0(0.975869);
  v34_0->set_f_0(0.641545);
  Message4::M3* v36 = message->mutable_f_10();
  v36->set_f_5(0x23b946fc);
  v36->set_f_2(0xd47722563a5500);
  v36->set_f_1(0x137c1ed2ce851766);
  v36->set_f_3(s->substr(0, 18));
  v36->set_f_0(0x16);
  Message4::M3::M9* v37 = v36->mutable_f_10();
  Message4::M3::M9::M25* v38 = v37->mutable_f_3();
  v38->set_f_5(0.468041);
  v38->set_f_10(Message4::M3::M9::M25::E11_CONST_2);
  v38->set_f_7(s->substr(0, 7));
  v38->set_f_9(0x9a);
  Message4::M3::M9::M25::M38* v39 = v38->mutable_f_13();
  v39->set_f_0(0.858560);
  v39->set_f_1(0xf51d0ad);
  Message4::M3::M9::M25::M38::M47* v41_0 = v39->add_f_4();
  Message4::M3::M9::M25::M38::M47::M60* v41 = v41_0->mutable_f_4();
  v41->set_f_4(0xa8);
  v41->set_f_3(0x21136bcc);
  v41->set_f_1(0xd);
  Message4::M3::M9::M25::M38::M47::M53* v43 = v41_0->mutable_f_1();
  Message4::M3::M9::M25::M38::M47::M53::M71* v44 = v43->mutable_f_1();
  v44->set_f_11(0x30);
  v44->set_f_3(s->substr(0, 27));
  Message4::M3::M9::M25::M38::M47::M53::M71::M74* v46_0 = v44->add_f_23();
  v46_0->set_f_2(Message4::M3::M9::M25::M38::M47::M53::M71::M74::E26_CONST_5);
  v44->set_f_8(0.382288);
  v44->set_f_5(0x17be5de6f8cb9fc6);
  v44->set_f_4(s->substr(0, 5));
  v44->set_f_0(s->substr(0, 5));
  v43->set_f_0(0xe6);
  v41_0->set_f_0(0x24);
  Message4::M3::M9::M25::M38::M48* v47_0 = v39->add_f_7();
  v47_0->set_f_0(0.984831);
  Message4::M3::M9::M25::M38::M49* v47 = v39->mutable_f_8();
  Message4::M3::M9::M25::M38::M49::M64* v48 = v47->mutable_f_4();
  v48->set_f_0(0x54);
  v47->set_f_0(s->substr(0, 1));
  Message4::M3::M9::M25::M38::M49::M65* v49 = v47->mutable_f_5();
  v49->set_f_3(0xe083);
  v49->set_f_7(Message4::M3::M9::M25::M38::M49::M65::E23_CONST_2);
  v49->set_f_5(0xe1c4);
  v49->set_f_1(Message4::M3::M9::M25::M38::M49::M65::E22_CONST_4);
  Message4::M3::M9::M25::M38::M49::M65::M69* v51_0 = v49->add_f_12();
  Message4::M3::M9::M25::M38::M49::M65::M69::M75* v51 = v51_0->mutable_f_4();
  v51->set_f_1(0x8c45e5e19dcb);
  Message4::M3::M9::M25::M38::M49::M65::M69* v51_1 = v49->add_f_12();
  v51_1->set_f_0(0x13);
  v38->set_f_1(0.209125);
  v37->set_f_0(s->substr(0, 3));
  Message4::M7* v58 = message->mutable_f_14();
  Message4::M7::M14* v62 = v58->mutable_f_1();
  Message4::M7::M14::M29* v63 = v62->mutable_f_1();
  Message4::M7::M14::M29::M34* v64 = v63->mutable_f_4();
  v64->set_f_1(0xf9);
  v64->set_f_0(0x5a);
  Message4::M7::M14::M29::M34::M41* v65 = v64->mutable_f_4();
  v65->set_f_0(Message4::M7::M14::M29::M34::M41::E17_CONST_4);
  Message4::M7::M14::M29::M34::M41::M58* v68_0 = v65->add_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66* v68 = v68_0->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73* v69 = v68->mutable_f_3();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76* v70 =
      v69->mutable_f_3();
  v70->set_f_0(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76::E27_CONST_5);
  v69->set_f_0(0x4def5b5c9fc9af9);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v72_0 = v69->add_f_4();
  v72_0->set_f_7(0x575929);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v78_0 =
      v72_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v79_0 =
      v78_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v80_0 =
      v79_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v81_0 = v80_0->add_f_2();
  v81_0->set_f_0(s->substr(0, 15));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v81 = v81_0->mutable_f_1();
  v81->set_f_0(0.320370);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v82 = v81->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v83 = v82->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v84 = v83->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M91* v86 = v84->mutable_f_2();
  v86->set_f_0(0x26c43b09781243);
  v72_0->set_f_2(s->substr(0, 72));
  v68_0->set_f_2(s->substr(0, 2));
  Message4::M7::M14::M29::M34::M41::M58* v68_1 = v65->add_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66* v87 = v68_1->mutable_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73* v88 = v87->mutable_f_3();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77* v90_0 = v88->add_f_4();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78* v90 =
      v90_0->mutable_f_11();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81* v91 =
      v90->mutable_f_4();
  v91->set_f_0(s->substr(0, 6));
  v90_0->set_f_1(s->substr(0, 17));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v93_0 =
      v90_0->add_f_13();
  v93_0->set_f_0(0x2c819fe12bf8f4c5);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v94_0 =
      v93_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v95_0 =
      v94_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v96_0 = v95_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v96 = v96_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v97 = v96->mutable_f_2();
  v97->set_f_0(0x420d8a502544df04);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80* v93_1 =
      v90_0->add_f_13();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v103_0 =
      v93_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v104_0 =
      v103_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v105_0 = v104_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v105 = v105_0->mutable_f_1();
  v105->set_f_0(0.781744);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83* v103_1 =
      v93_1->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84* v112_0 =
      v103_1->add_f_2();
  v112_0->set_f_0(s->substr(0, 30));
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86*
      v113_0 = v112_0->add_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::M87*
      v113 = v113_0->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88* v114 = v113->mutable_f_2();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89* v115 = v114->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90* v116 = v115->mutable_f_1();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::M83::M84::M86::
      M87::M88::M89::M90::M92* v118_0 = v116->add_f_3();
  v118_0->set_f_0(0x9);
  v93_1->set_f_0(0x3b7562b8);
  v90_0->set_f_6(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::E28_CONST_2);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79* v119 =
      v90_0->mutable_f_12();
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::M82* v121_0 =
      v119->add_f_1();
  v121_0->set_f_0(Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::
                      M82::E29_CONST_3);
  Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76* v122 =
      v88->mutable_f_3();
  v122->set_f_0(
      Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76::E27_CONST_2);
  v88->set_f_0(0x45cd4c3c0b);
  v68_1->set_f_0(0x2f99415811a0f8a1);
  v64->set_f_2(s->substr(0, 8));
  Message4::M7::M16* v123 = v58->mutable_f_4();
  v123->set_f_0(0x7c4f0f71);
  Message4::M7::M16::M28* v124 = v123->mutable_f_2();
  Message4::M7::M16::M28::M35* v125 = v124->mutable_f_1();
  v125->set_f_2(s->substr(0, 2));
  v125->set_f_5(false);
  Message4::M7::M16::M28::M35::M43* v126 = v125->mutable_f_23();
  v126->set_f_3(0x9c43c9c2fd);
  v125->set_f_6(0x3ec6b812);
  Message4::M7::M16::M28::M35::M40* v131 = v125->mutable_f_21();
  v131->set_f_3(0x5a);
  v131->set_f_4(0.370219);
  v131->set_f_0(s->substr(0, 5));
  v125->set_f_0(0x393ef612fcaa9a);
  v125->set_f_7(s->substr(0, 86));
  Message4::M7::M16::M28::M35::M52* v133_0 = v125->add_f_27();
  Message4::M7::M16::M28::M35::M52::M57* v133 = v133_0->mutable_f_2();
  v133->set_f_0(s->substr(0, 16));
  v133_0->set_f_0(0x5ec88661f201c5df);
  Message4::M7::M16::M28::M35::M51* v134 = v125->mutable_f_26();
  v134->set_f_2(s->substr(0, 9));
  Message4::M7::M15* v136_0 = v58->add_f_3();
  v136_0->set_f_2(0x243fd045);
  v136_0->set_f_4(Message4::M7::M15::E4_CONST_5);
  Message4::M7::M15* v136_1 = v58->add_f_3();
  v136_1->set_f_0(Message4::M7::M15::E3_CONST_4);
  v136_1->set_f_1(0xc31fa72f9d8ab8);
  v136_1->set_f_2(0x2b7cdb6f);
  v136_1->set_f_4(Message4::M7::M15::E4_CONST_2);
  message->set_f_0(0xee5b29);
}

inline void Message4_Get_1(Message4* message) {
  for (const auto& v0 : (*message).f_9()) {
    ReceiveInt32(v0.f_0());
    ReceiveInt64(v0.f_1());
  }
  const Message4::M1& v1 = (*message).f_8();
  for (const auto& v2 : v1.f_1()) {
    ReceiveString(v2.f_0());
  }
  ReceiveInt64(v1.f_0());
  const Message4::M8& v3 = (*message).f_16();
  ReceiveString(v3.f_0());
  ReceiveInt32(v3.f_1());
  ReceiveBool(v3.f_2());
  for (auto f : (*message).f_2()) {
    ReceiveInt32(f);
  }
  const Message4::M3& v4 = (*message).f_10();
  ReceiveString(v4.f_6());
  ReceiveFloat(v4.f_4());
  ReceiveInt64(v4.f_0());
  ReceiveInt64(v4.f_2());
  const Message4::M3::M9& v5 = v4.f_10();
  ReceiveString(v5.f_0());
  const Message4::M3::M9::M21& v6 = v5.f_2();
  ReceiveInt64(v6.f_0());
  const Message4::M3::M9::M25& v7 = v5.f_3();
  ReceiveUint32(v7.f_3());
  ReceiveCord(v7.f_7());
  ReceiveInt32(v7.f_10());
  ReceiveInt32(v7.f_9());
  ReceiveInt64(v7.f_6());
  ReceiveFloat(v7.f_1());
  ReceiveFloat(v7.f_5());
  const Message4::M3::M9::M25::M38& v8 = v7.f_13();
  for (const auto& v9 : v8.f_7()) {
    ReceiveFloat(v9.f_0());
  }
  const Message4::M3::M9::M25::M38::M49& v10 = v8.f_8();
  const Message4::M3::M9::M25::M38::M49::M59& v11 = v10.f_2();
  ReceiveInt32(v11.f_0());
  const Message4::M3::M9::M25::M38::M49::M64& v12 = v10.f_4();
  ReceiveUint64(v12.f_0());
  ReceiveString(v10.f_0());
  const Message4::M3::M9::M25::M38::M49::M65& v13 = v10.f_5();
  ReceiveUint64(v13.f_4());
  ReceiveInt64(v13.f_2());
  ReceiveUint32(v13.f_8());
  ReceiveInt64(v13.f_3());
  ReceiveUint64(v13.f_0());
  for (const auto& v14 : v13.f_12()) {
    const Message4::M3::M9::M25::M38::M49::M65::M69::M75& v15 = v14.f_4();
    ReceiveInt32(v15.f_0());
    ReceiveInt64(v15.f_1());
    ReceiveInt64(v14.f_0());
    const Message4::M3::M9::M25::M38::M49::M65::M69::M72& v16 = v14.f_3();
    ReceiveFloat(v16.f_1());
    ReceiveUint32(v16.f_0());
  }
  for (auto f : v13.f_6()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v13.f_7());
  ReceiveInt64(v13.f_5());
  ReceiveInt32(v13.f_1());
  ReceiveInt32(v8.f_1());
  const Message4::M3::M9::M25::M38::M45& v17 = v8.f_2();
  ReceiveInt32(v17.f_0());
  ReceiveDouble(v8.f_0());
  for (const auto& v18 : v8.f_4()) {
    const Message4::M3::M9::M25::M38::M47::M60& v19 = v18.f_4();
    ReceiveInt32(v19.f_1());
    ReceiveUint64(v19.f_4());
    ReceiveDouble(v19.f_2());
    const Message4::M3::M9::M25::M38::M47::M60::M67& v20 = v19.f_9();
    ReceiveString(v20.f_0());
    ReceiveInt64(v19.f_0());
    ReceiveUint32(v19.f_3());
    ReceiveInt64(v18.f_0());
    const Message4::M3::M9::M25::M38::M47::M53& v21 = v18.f_1();
    ReceiveInt32(v21.f_0());
    const Message4::M3::M9::M25::M38::M47::M53::M71& v22 = v21.f_1();
    ReceiveFloat(v22.f_10());
    ReceiveString(v22.f_3());
    ReceiveString(v22.f_0());
    ReceiveBool(v22.f_7());
    ReceiveString(v22.f_9());
    ReceiveInt64(v22.f_5());
    ReceiveInt32(v22.f_2());
    ReceiveInt32(v22.f_6());
    ReceiveDouble(v22.f_8());
    ReceiveInt32(v22.f_11());
    ReceiveUint32(v22.f_1());
    ReceiveString(v22.f_4());
    for (const auto& v23 : v22.f_23()) {
      ReceiveString(v23.f_0());
      ReceiveUint32(v23.f_1());
      ReceiveInt32(v23.f_3());
      ReceiveInt32(v23.f_2());
      ReceiveInt64(v23.f_4());
    }
  }
  ReceiveUint32(v7.f_0());
  ReceiveInt32(v7.f_8());
  ReceiveInt32(v7.f_2());
  ReceiveString(v7.f_4());
  ReceiveUint32(v4.f_5());
  ReceiveString(v4.f_3());
  ReceiveUint64(v4.f_1());
  ReceiveInt32((*message).f_5());
  ReceiveInt64((*message).f_0());
  const Message4::M6& v24 = (*message).f_13();
  const Message4::M6::M19& v25 = v24.f_2();
  for (const auto& v26 : v25.f_6()) {
    ReceiveFloat(v26.f_1());
    for (auto f : v26.f_0()) {
      ReceiveFloat(f);
    }
    ReceiveInt32(v26.f_2());
    const Message4::M6::M19::M27::M31& v27 = v26.f_3();
    const Message4::M6::M19::M27::M31::M42& v28 = v27.f_4();
    const Message4::M6::M19::M27::M31::M42::M54& v29 = v28.f_1();
    ReceiveInt32(v29.f_0());
    ReceiveFloat(v28.f_0());
    ReceiveInt32(v27.f_0());
  }
  ReceiveCord(v25.f_0());
  for (const auto& v30 : v25.f_4()) {
    const Message4::M6::M19::M24::M33& v31 = v30.f_1();
    const Message4::M6::M19::M24::M33::M50& v32 = v31.f_3();
    const Message4::M6::M19::M24::M33::M50::M63& v33 = v32.f_1();
    ReceiveInt32(v33.f_0());
    ReceiveInt64(v32.f_0());
    ReceiveInt32(v31.f_0());
    const Message4::M6::M19::M24::M33::M44& v34 = v31.f_2();
    ReceiveString(v34.f_0());
    for (const auto& v35 : v34.f_1()) {
      ReceiveDouble(v35.f_0());
    }
    const Message4::M6::M19::M24::M33::M44::M56& v36 = v34.f_4();
    ReceiveUint32(v36.f_0());
    ReceiveUint32(v30.f_0());
  }
  const Message4::M6::M19::M20& v37 = v25.f_3();
  ReceiveString(v37.f_2());
  ReceiveInt32(v37.f_3());
  ReceiveDouble(v37.f_0());
  ReceiveInt32(v37.f_4());
  ReceiveInt64(v37.f_1());
  ReceiveInt64(v25.f_2());
  ReceiveInt32(v25.f_1());
  const Message4::M6::M19::M30& v38 = v25.f_7();
  ReceiveUint64(v38.f_5());
  ReceiveInt32(v38.f_0());
  ReceiveInt64(v38.f_4());
  ReceiveInt64(v38.f_1());
  for (const auto& v39 : v38.f_10()) {
    ReceiveBool(v39.f_2());
    ReceiveBool(v39.f_0());
    ReceiveUint64(v39.f_1());
    ReceiveBool(v39.f_4());
    ReceiveString(v39.f_3());
  }
  ReceiveBool(v38.f_2());
  ReceiveString(v38.f_3());
  const Message4::M6::M19::M30::M32& v40 = v38.f_9();
  ReceiveInt32(v40.f_5());
  ReceiveInt32(v40.f_1());
  ReceiveString(v40.f_0());
  ReceiveInt32(v40.f_4());
  ReceiveBool(v40.f_3());
  ReceiveString(v40.f_2());
  ReceiveInt64(v40.f_6());
  const Message4::M6::M19::M26& v41 = v25.f_5();
  ReceiveInt32(v41.f_0());
  const Message4::M6::M11& v42 = v24.f_1();
  ReceiveUint32(v42.f_0());
  ReceiveInt32(v24.f_0());
  const Message4::M7& v43 = (*message).f_14();
  ReceiveFloat(v43.f_0());
  const Message4::M7::M18& v44 = v43.f_6();
  ReceiveInt32(v44.f_0());
  for (const auto& v45 : v44.f_2()) {
    for (const auto& v46 : v45.f_1()) {
      ReceiveInt32(v46.f_0());
    }
    ReceiveBool(v45.f_0());
  }
  for (const auto& v47 : v43.f_3()) {
    ReceiveInt32(v47.f_0());
    ReceiveString(v47.f_5());
    ReceiveInt64(v47.f_2());
    ReceiveUint64(v47.f_3());
    ReceiveInt32(v47.f_4());
    ReceiveInt64(v47.f_1());
  }
  const Message4::M7::M16& v48 = v43.f_4();
  const Message4::M7::M16::M28& v49 = v48.f_2();
  ReceiveString(v49.f_0());
  const Message4::M7::M16::M28::M35& v50 = v49.f_1();
  ReceiveString(v50.f_2());
  const Message4::M7::M16::M28::M35::M43& v51 = v50.f_23();
  const Message4::M7::M16::M28::M35::M43::M62& v52 = v51.f_7();
  ReceiveUint32(v52.f_1());
  ReceiveInt32(v52.f_0());
  for (const auto& v53 : v52.f_3()) {
    ReceiveString(v53.f_0());
  }
  const Message4::M7::M16::M28::M35::M43::M62::M68& v54 = v52.f_2();
  ReceiveBool(v54.f_0());
  ReceiveString(v51.f_0());
  ReceiveInt32(v51.f_4());
  ReceiveString(v51.f_2());
  ReceiveInt64(v51.f_3());
  for (auto f : v51.f_1()) {
    ReceiveInt32(f);
  }
  ReceiveFloat(v50.f_3());
  ReceiveBool(v50.f_5());
  for (const auto& v55 : v50.f_27()) {
    ReceiveInt64(v55.f_0());
    const Message4::M7::M16::M28::M35::M52::M57& v56 = v55.f_2();
    ReceiveString(v56.f_0());
  }
  ReceiveCord(v50.f_7());
  const Message4::M7::M16::M28::M35::M51& v57 = v50.f_26();
  ReceiveString(v57.f_1());
  ReceiveInt32(v57.f_0());
  ReceiveString(v57.f_2());
  ReceiveUint32(v50.f_6());
  const Message4::M7::M16::M28::M35::M40& v58 = v50.f_21();
  ReceiveUint32(v58.f_5());
  ReceiveFloat(v58.f_4());
  ReceiveBool(v58.f_2());
  ReceiveUint32(v58.f_3());
  ReceiveBool(v58.f_1());
  ReceiveCord(v58.f_0());
  ReceiveInt32(v58.f_6());
  ReceiveUint64(v50.f_0());
  ReceiveInt64(v50.f_9());
  ReceiveString(v50.f_4());
  ReceiveString(v50.f_1());
  const Message4::M7::M16::M28::M35::M46& v59 = v50.f_25();
  ReceiveInt64(v59.f_0());
  ReceiveInt32(v50.f_10());
  ReceiveUint32(v50.f_8());
  ReceiveUint32(v48.f_0());
  const Message4::M7::M14& v60 = v43.f_1();
  const Message4::M7::M14::M29& v61 = v60.f_1();
  ReceiveInt64(v61.f_1());
  ReceiveUint32(v61.f_0());
  const Message4::M7::M14::M29::M34& v62 = v61.f_4();
  ReceiveInt32(v62.f_0());
  const Message4::M7::M14::M29::M34::M41& v63 = v62.f_4();
  for (const auto& v64 : v63.f_2()) {
    ReceiveFloat(v64.f_0());
  }
  ReceiveInt32(v63.f_0());
  for (const auto& v65 : v63.f_1()) {
    ReceiveUint64(v65.f_0());
    const Message4::M7::M14::M29::M34::M41::M58::M66& v66 = v65.f_4();
    ReceiveFloat(v66.f_0());
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73& v67 = v66.f_3();
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76& v68 = v67.f_3();
    ReceiveInt32(v68.f_0());
    ReceiveInt64(v67.f_0());
    for (const auto& v69 : v67.f_4()) {
      ReceiveString(v69.f_2());
      ReceiveInt32(v69.f_6());
      ReceiveString(v69.f_5());
      ReceiveInt64(v69.f_7());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78& v70 =
          v69.f_11();
      ReceiveDouble(v70.f_0());
      ReceiveFloat(v70.f_1());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81&
          v71 = v70.f_4();
      ReceiveString(v71.f_0());
      ReceiveBool(v69.f_4());
      ReceiveString(v69.f_1());
      ReceiveString(v69.f_0());
      ReceiveUint32(v69.f_3());
      for (const auto& v72 : v69.f_13()) {
        ReceiveInt64(v72.f_0());
        for (const auto& v73 : v72.f_2()) {
          for (const auto& v74 : v73.f_2()) {
            ReceiveString(v74.f_0());
            for (const auto& v75 : v74.f_2()) {
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87& v76 = v75.f_1();
              ReceiveFloat(v76.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88& v77 = v76.f_2();
              ReceiveUint64(v77.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89& v78 = v77.f_1();
              ReceiveInt32(v78.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90& v79 = v78.f_1();
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90::M91& v80 = v79.f_2();
              ReceiveInt64(v80.f_0());
              ReceiveInt32(v79.f_0());
              for (const auto& v81 : v79.f_3()) {
                ReceiveInt32(v81.f_0());
              }
              ReceiveString(v75.f_0());
            }
          }
          ReceiveInt64(v73.f_0());
        }
      }
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79& v82 =
          v69.f_12();
      ReceiveString(v82.f_0());
      for (const auto& v83 : v82.f_1()) {
        const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::M82::
            M85& v84 = v83.f_1();
        ReceiveInt32(v84.f_0());
        ReceiveInt32(v83.f_0());
      }
    }
    ReceiveString(v65.f_1());
    ReceiveString(v65.f_2());
  }
  ReceiveString(v62.f_2());
  ReceiveInt32(v62.f_1());
  ReceiveString(v60.f_0());
  const Message4::M5& v85 = (*message).f_12();
  for (const auto& v86 : v85.f_1()) {
    ReceiveInt64(v86.f_0());
  }
  const Message4::M5::M17& v87 = v85.f_2();
  ReceiveInt32(v87.f_0());
  ReceiveInt32(v87.f_1());
  ReceiveInt32(v87.f_5());
  ReceiveInt32(v87.f_6());
  ReceiveFloat(v87.f_3());
  ReceiveInt64(v87.f_2());
  ReceiveString(v87.f_4());
  ReceiveInt32(v85.f_0());
  ReceiveBool((*message).f_1());
  ReceiveBool((*message).f_3());
  for (auto f : (*message).f_4()) {
    ReceiveInt32(f);
  }
  const Message4::M4& v88 = (*message).f_11();
  for (const auto& v89 : v88.f_2()) {
    ReceiveDouble(v89.f_0());
    for (const auto& v90 : v89.f_3()) {
      ReceiveFloat(v90.f_0());
      const Message4::M4::M12::M23::M37& v91 = v90.f_3();
      ReceiveFloat(v91.f_0());
    }
  }
  ReceiveCord(v88.f_0());
}

inline void Message4_Get_2(Message4* message) {
  const Message4::M5& v0 = (*message).f_12();
  const Message4::M5::M17& v1 = v0.f_2();
  ReceiveInt32(v1.f_1());
  ReceiveInt32(v1.f_0());
  ReceiveFloat(v1.f_3());
  ReceiveInt32(v1.f_6());
  ReceiveInt32(v1.f_5());
  ReceiveString(v1.f_4());
  ReceiveInt64(v1.f_2());
  for (const auto& v2 : v0.f_1()) {
    ReceiveInt64(v2.f_0());
  }
  ReceiveInt32(v0.f_0());
  ReceiveBool((*message).f_3());
  ReceiveInt64((*message).f_0());
  ReceiveBool((*message).f_1());
  const Message4::M1& v3 = (*message).f_8();
  for (const auto& v4 : v3.f_1()) {
    ReceiveString(v4.f_0());
  }
  ReceiveInt64(v3.f_0());
  for (const auto& v5 : (*message).f_9()) {
    ReceiveInt32(v5.f_0());
    ReceiveInt64(v5.f_1());
  }
  const Message4::M6& v6 = (*message).f_13();
  const Message4::M6::M11& v7 = v6.f_1();
  ReceiveUint32(v7.f_0());
  const Message4::M6::M19& v8 = v6.f_2();
  ReceiveInt64(v8.f_2());
  ReceiveCord(v8.f_0());
  ReceiveInt32(v8.f_1());
  for (const auto& v9 : v8.f_4()) {
    ReceiveUint32(v9.f_0());
    const Message4::M6::M19::M24::M33& v10 = v9.f_1();
    const Message4::M6::M19::M24::M33::M50& v11 = v10.f_3();
    ReceiveInt64(v11.f_0());
    const Message4::M6::M19::M24::M33::M50::M63& v12 = v11.f_1();
    ReceiveInt32(v12.f_0());
    const Message4::M6::M19::M24::M33::M44& v13 = v10.f_2();
    ReceiveString(v13.f_0());
    const Message4::M6::M19::M24::M33::M44::M56& v14 = v13.f_4();
    ReceiveUint32(v14.f_0());
    for (const auto& v15 : v13.f_1()) {
      ReceiveDouble(v15.f_0());
    }
    ReceiveInt32(v10.f_0());
  }
  const Message4::M6::M19::M20& v16 = v8.f_3();
  ReceiveString(v16.f_2());
  ReceiveInt32(v16.f_4());
  ReceiveInt32(v16.f_3());
  ReceiveInt64(v16.f_1());
  ReceiveDouble(v16.f_0());
  const Message4::M6::M19::M26& v17 = v8.f_5();
  ReceiveInt32(v17.f_0());
  for (const auto& v18 : v8.f_6()) {
    for (auto f : v18.f_0()) {
      ReceiveFloat(f);
    }
    ReceiveInt32(v18.f_2());
    ReceiveFloat(v18.f_1());
    const Message4::M6::M19::M27::M31& v19 = v18.f_3();
    const Message4::M6::M19::M27::M31::M42& v20 = v19.f_4();
    const Message4::M6::M19::M27::M31::M42::M54& v21 = v20.f_1();
    ReceiveInt32(v21.f_0());
    ReceiveFloat(v20.f_0());
    ReceiveInt32(v19.f_0());
  }
  const Message4::M6::M19::M30& v22 = v8.f_7();
  ReceiveUint64(v22.f_5());
  ReceiveInt32(v22.f_0());
  ReceiveBool(v22.f_2());
  ReceiveString(v22.f_3());
  const Message4::M6::M19::M30::M32& v23 = v22.f_9();
  ReceiveString(v23.f_2());
  ReceiveInt32(v23.f_1());
  ReceiveInt32(v23.f_5());
  ReceiveInt64(v23.f_6());
  ReceiveBool(v23.f_3());
  ReceiveString(v23.f_0());
  ReceiveInt32(v23.f_4());
  for (const auto& v24 : v22.f_10()) {
    ReceiveBool(v24.f_0());
    ReceiveUint64(v24.f_1());
    ReceiveBool(v24.f_2());
    ReceiveBool(v24.f_4());
    ReceiveString(v24.f_3());
  }
  ReceiveInt64(v22.f_4());
  ReceiveInt64(v22.f_1());
  ReceiveInt32(v6.f_0());
  ReceiveInt32((*message).f_5());
  for (auto f : (*message).f_2()) {
    ReceiveInt32(f);
  }
  for (auto f : (*message).f_4()) {
    ReceiveInt32(f);
  }
  const Message4::M8& v25 = (*message).f_16();
  ReceiveString(v25.f_0());
  ReceiveBool(v25.f_2());
  ReceiveInt32(v25.f_1());
  const Message4::M7& v26 = (*message).f_14();
  const Message4::M7::M14& v27 = v26.f_1();
  const Message4::M7::M14::M29& v28 = v27.f_1();
  ReceiveUint32(v28.f_0());
  ReceiveInt64(v28.f_1());
  const Message4::M7::M14::M29::M34& v29 = v28.f_4();
  ReceiveString(v29.f_2());
  ReceiveInt32(v29.f_1());
  const Message4::M7::M14::M29::M34::M41& v30 = v29.f_4();
  ReceiveInt32(v30.f_0());
  for (const auto& v31 : v30.f_1()) {
    const Message4::M7::M14::M29::M34::M41::M58::M66& v32 = v31.f_4();
    ReceiveFloat(v32.f_0());
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73& v33 = v32.f_3();
    for (const auto& v34 : v33.f_4()) {
      ReceiveString(v34.f_1());
      ReceiveString(v34.f_0());
      ReceiveString(v34.f_5());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78& v35 =
          v34.f_11();
      ReceiveFloat(v35.f_1());
      ReceiveDouble(v35.f_0());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81&
          v36 = v35.f_4();
      ReceiveString(v36.f_0());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79& v37 =
          v34.f_12();
      for (const auto& v38 : v37.f_1()) {
        ReceiveInt32(v38.f_0());
        const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::M82::
            M85& v39 = v38.f_1();
        ReceiveInt32(v39.f_0());
      }
      ReceiveString(v37.f_0());
      ReceiveBool(v34.f_4());
      ReceiveUint32(v34.f_3());
      ReceiveString(v34.f_2());
      for (const auto& v40 : v34.f_13()) {
        for (const auto& v41 : v40.f_2()) {
          ReceiveInt64(v41.f_0());
          for (const auto& v42 : v41.f_2()) {
            for (const auto& v43 : v42.f_2()) {
              ReceiveString(v43.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87& v44 = v43.f_1();
              ReceiveFloat(v44.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88& v45 = v44.f_2();
              ReceiveUint64(v45.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89& v46 = v45.f_1();
              ReceiveInt32(v46.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90& v47 = v46.f_1();
              ReceiveInt32(v47.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90::M91& v48 = v47.f_2();
              ReceiveInt64(v48.f_0());
              for (const auto& v49 : v47.f_3()) {
                ReceiveInt32(v49.f_0());
              }
            }
            ReceiveString(v42.f_0());
          }
        }
        ReceiveInt64(v40.f_0());
      }
      ReceiveInt32(v34.f_6());
      ReceiveInt64(v34.f_7());
    }
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76& v50 = v33.f_3();
    ReceiveInt32(v50.f_0());
    ReceiveInt64(v33.f_0());
    ReceiveUint64(v31.f_0());
    ReceiveString(v31.f_1());
    ReceiveString(v31.f_2());
  }
  for (const auto& v51 : v30.f_2()) {
    ReceiveFloat(v51.f_0());
  }
  ReceiveInt32(v29.f_0());
  ReceiveString(v27.f_0());
  const Message4::M7::M16& v52 = v26.f_4();
  const Message4::M7::M16::M28& v53 = v52.f_2();
  const Message4::M7::M16::M28::M35& v54 = v53.f_1();
  ReceiveUint64(v54.f_0());
  const Message4::M7::M16::M28::M35::M43& v55 = v54.f_23();
  ReceiveString(v55.f_2());
  const Message4::M7::M16::M28::M35::M43::M62& v56 = v55.f_7();
  ReceiveUint32(v56.f_1());
  for (const auto& v57 : v56.f_3()) {
    ReceiveString(v57.f_0());
  }
  ReceiveInt32(v56.f_0());
  const Message4::M7::M16::M28::M35::M43::M62::M68& v58 = v56.f_2();
  ReceiveBool(v58.f_0());
  ReceiveString(v55.f_0());
  ReceiveInt64(v55.f_3());
  ReceiveInt32(v55.f_4());
  for (auto f : v55.f_1()) {
    ReceiveInt32(f);
  }
  const Message4::M7::M16::M28::M35::M46& v59 = v54.f_25();
  ReceiveInt64(v59.f_0());
  ReceiveInt32(v54.f_10());
  ReceiveString(v54.f_1());
  ReceiveString(v54.f_2());
  const Message4::M7::M16::M28::M35::M51& v60 = v54.f_26();
  ReceiveString(v60.f_2());
  ReceiveInt32(v60.f_0());
  ReceiveString(v60.f_1());
  const Message4::M7::M16::M28::M35::M40& v61 = v54.f_21();
  ReceiveInt32(v61.f_6());
  ReceiveFloat(v61.f_4());
  ReceiveBool(v61.f_1());
  ReceiveCord(v61.f_0());
  ReceiveBool(v61.f_2());
  ReceiveUint32(v61.f_5());
  ReceiveUint32(v61.f_3());
  ReceiveCord(v54.f_7());
  ReceiveBool(v54.f_5());
  ReceiveFloat(v54.f_3());
  ReceiveInt64(v54.f_9());
  ReceiveUint32(v54.f_6());
  for (const auto& v62 : v54.f_27()) {
    const Message4::M7::M16::M28::M35::M52::M57& v63 = v62.f_2();
    ReceiveString(v63.f_0());
    ReceiveInt64(v62.f_0());
  }
  ReceiveUint32(v54.f_8());
  ReceiveString(v54.f_4());
  ReceiveString(v53.f_0());
  ReceiveUint32(v52.f_0());
  const Message4::M7::M18& v64 = v26.f_6();
  for (const auto& v65 : v64.f_2()) {
    for (const auto& v66 : v65.f_1()) {
      ReceiveInt32(v66.f_0());
    }
    ReceiveBool(v65.f_0());
  }
  ReceiveInt32(v64.f_0());
  for (const auto& v67 : v26.f_3()) {
    ReceiveInt64(v67.f_1());
    ReceiveInt32(v67.f_4());
    ReceiveUint64(v67.f_3());
    ReceiveInt64(v67.f_2());
    ReceiveInt32(v67.f_0());
    ReceiveString(v67.f_5());
  }
  ReceiveFloat(v26.f_0());
  const Message4::M4& v68 = (*message).f_11();
  ReceiveCord(v68.f_0());
  for (const auto& v69 : v68.f_2()) {
    ReceiveDouble(v69.f_0());
    for (const auto& v70 : v69.f_3()) {
      ReceiveFloat(v70.f_0());
      const Message4::M4::M12::M23::M37& v71 = v70.f_3();
      ReceiveFloat(v71.f_0());
    }
  }
  const Message4::M3& v72 = (*message).f_10();
  ReceiveInt64(v72.f_2());
  ReceiveFloat(v72.f_4());
  ReceiveString(v72.f_3());
  const Message4::M3::M9& v73 = v72.f_10();
  const Message4::M3::M9::M25& v74 = v73.f_3();
  ReceiveInt32(v74.f_2());
  ReceiveUint32(v74.f_0());
  const Message4::M3::M9::M25::M38& v75 = v74.f_13();
  for (const auto& v76 : v75.f_4()) {
    const Message4::M3::M9::M25::M38::M47::M53& v77 = v76.f_1();
    const Message4::M3::M9::M25::M38::M47::M53::M71& v78 = v77.f_1();
    ReceiveString(v78.f_4());
    ReceiveInt32(v78.f_11());
    ReceiveDouble(v78.f_8());
    ReceiveString(v78.f_9());
    ReceiveInt32(v78.f_2());
    ReceiveFloat(v78.f_10());
    ReceiveUint32(v78.f_1());
    ReceiveString(v78.f_0());
    ReceiveString(v78.f_3());
    ReceiveInt32(v78.f_6());
    for (const auto& v79 : v78.f_23()) {
      ReceiveInt32(v79.f_3());
      ReceiveInt32(v79.f_2());
      ReceiveString(v79.f_0());
      ReceiveInt64(v79.f_4());
      ReceiveUint32(v79.f_1());
    }
    ReceiveBool(v78.f_7());
    ReceiveInt64(v78.f_5());
    ReceiveInt32(v77.f_0());
    const Message4::M3::M9::M25::M38::M47::M60& v80 = v76.f_4();
    ReceiveUint64(v80.f_4());
    ReceiveDouble(v80.f_2());
    ReceiveUint32(v80.f_3());
    ReceiveInt64(v80.f_0());
    ReceiveInt32(v80.f_1());
    const Message4::M3::M9::M25::M38::M47::M60::M67& v81 = v80.f_9();
    ReceiveString(v81.f_0());
    ReceiveInt64(v76.f_0());
  }
  ReceiveInt32(v75.f_1());
  ReceiveDouble(v75.f_0());
  for (const auto& v82 : v75.f_7()) {
    ReceiveFloat(v82.f_0());
  }
  const Message4::M3::M9::M25::M38::M45& v83 = v75.f_2();
  ReceiveInt32(v83.f_0());
  const Message4::M3::M9::M25::M38::M49& v84 = v75.f_8();
  const Message4::M3::M9::M25::M38::M49::M64& v85 = v84.f_4();
  ReceiveUint64(v85.f_0());
  const Message4::M3::M9::M25::M38::M49::M65& v86 = v84.f_5();
  for (auto f : v86.f_6()) {
    ReceiveInt32(f);
  }
  ReceiveInt64(v86.f_3());
  ReceiveUint64(v86.f_4());
  ReceiveUint64(v86.f_0());
  ReceiveInt32(v86.f_7());
  ReceiveInt64(v86.f_2());
  ReceiveUint32(v86.f_8());
  ReceiveInt32(v86.f_1());
  ReceiveInt64(v86.f_5());
  for (const auto& v87 : v86.f_12()) {
    const Message4::M3::M9::M25::M38::M49::M65::M69::M72& v88 = v87.f_3();
    ReceiveFloat(v88.f_1());
    ReceiveUint32(v88.f_0());
    ReceiveInt64(v87.f_0());
    const Message4::M3::M9::M25::M38::M49::M65::M69::M75& v89 = v87.f_4();
    ReceiveInt64(v89.f_1());
    ReceiveInt32(v89.f_0());
  }
  ReceiveString(v84.f_0());
  const Message4::M3::M9::M25::M38::M49::M59& v90 = v84.f_2();
  ReceiveInt32(v90.f_0());
  ReceiveInt64(v74.f_6());
  ReceiveCord(v74.f_7());
  ReceiveInt32(v74.f_9());
  ReceiveString(v74.f_4());
  ReceiveFloat(v74.f_5());
  ReceiveFloat(v74.f_1());
  ReceiveUint32(v74.f_3());
  ReceiveInt32(v74.f_8());
  ReceiveInt32(v74.f_10());
  ReceiveString(v73.f_0());
  const Message4::M3::M9::M21& v91 = v73.f_2();
  ReceiveInt64(v91.f_0());
  ReceiveInt64(v72.f_0());
  ReceiveUint32(v72.f_5());
  ReceiveString(v72.f_6());
  ReceiveUint64(v72.f_1());
}

inline void Message4_Get_3(Message4* message) {
  const Message4::M4& v0 = (*message).f_11();
  for (const auto& v1 : v0.f_2()) {
    for (const auto& v2 : v1.f_3()) {
      const Message4::M4::M12::M23::M37& v3 = v2.f_3();
      ReceiveFloat(v3.f_0());
      ReceiveFloat(v2.f_0());
    }
    ReceiveDouble(v1.f_0());
  }
  ReceiveCord(v0.f_0());
  ReceiveInt32((*message).f_5());
  const Message4::M5& v4 = (*message).f_12();
  for (const auto& v5 : v4.f_1()) {
    ReceiveInt64(v5.f_0());
  }
  const Message4::M5::M17& v6 = v4.f_2();
  ReceiveInt32(v6.f_6());
  ReceiveInt32(v6.f_1());
  ReceiveInt32(v6.f_0());
  ReceiveInt32(v6.f_5());
  ReceiveString(v6.f_4());
  ReceiveInt64(v6.f_2());
  ReceiveFloat(v6.f_3());
  ReceiveInt32(v4.f_0());
  const Message4::M7& v7 = (*message).f_14();
  ReceiveFloat(v7.f_0());
  const Message4::M7::M18& v8 = v7.f_6();
  ReceiveInt32(v8.f_0());
  for (const auto& v9 : v8.f_2()) {
    for (const auto& v10 : v9.f_1()) {
      ReceiveInt32(v10.f_0());
    }
    ReceiveBool(v9.f_0());
  }
  for (const auto& v11 : v7.f_3()) {
    ReceiveUint64(v11.f_3());
    ReceiveInt64(v11.f_1());
    ReceiveInt32(v11.f_0());
    ReceiveString(v11.f_5());
    ReceiveInt32(v11.f_4());
    ReceiveInt64(v11.f_2());
  }
  const Message4::M7::M16& v12 = v7.f_4();
  const Message4::M7::M16::M28& v13 = v12.f_2();
  ReceiveString(v13.f_0());
  const Message4::M7::M16::M28::M35& v14 = v13.f_1();
  ReceiveUint32(v14.f_8());
  const Message4::M7::M16::M28::M35::M40& v15 = v14.f_21();
  ReceiveUint32(v15.f_5());
  ReceiveInt32(v15.f_6());
  ReceiveBool(v15.f_2());
  ReceiveCord(v15.f_0());
  ReceiveFloat(v15.f_4());
  ReceiveBool(v15.f_1());
  ReceiveUint32(v15.f_3());
  ReceiveFloat(v14.f_3());
  ReceiveInt32(v14.f_10());
  const Message4::M7::M16::M28::M35::M46& v16 = v14.f_25();
  ReceiveInt64(v16.f_0());
  ReceiveCord(v14.f_7());
  ReceiveString(v14.f_4());
  ReceiveUint32(v14.f_6());
  const Message4::M7::M16::M28::M35::M51& v17 = v14.f_26();
  ReceiveString(v17.f_2());
  ReceiveInt32(v17.f_0());
  ReceiveString(v17.f_1());
  const Message4::M7::M16::M28::M35::M43& v18 = v14.f_23();
  ReceiveInt32(v18.f_4());
  for (auto f : v18.f_1()) {
    ReceiveInt32(f);
  }
  ReceiveInt64(v18.f_3());
  ReceiveString(v18.f_0());
  ReceiveString(v18.f_2());
  const Message4::M7::M16::M28::M35::M43::M62& v19 = v18.f_7();
  const Message4::M7::M16::M28::M35::M43::M62::M68& v20 = v19.f_2();
  ReceiveBool(v20.f_0());
  ReceiveInt32(v19.f_0());
  ReceiveUint32(v19.f_1());
  for (const auto& v21 : v19.f_3()) {
    ReceiveString(v21.f_0());
  }
  ReceiveInt64(v14.f_9());
  ReceiveString(v14.f_2());
  ReceiveString(v14.f_1());
  ReceiveUint64(v14.f_0());
  for (const auto& v22 : v14.f_27()) {
    ReceiveInt64(v22.f_0());
    const Message4::M7::M16::M28::M35::M52::M57& v23 = v22.f_2();
    ReceiveString(v23.f_0());
  }
  ReceiveBool(v14.f_5());
  ReceiveUint32(v12.f_0());
  const Message4::M7::M14& v24 = v7.f_1();
  ReceiveString(v24.f_0());
  const Message4::M7::M14::M29& v25 = v24.f_1();
  ReceiveUint32(v25.f_0());
  const Message4::M7::M14::M29::M34& v26 = v25.f_4();
  ReceiveInt32(v26.f_1());
  ReceiveString(v26.f_2());
  const Message4::M7::M14::M29::M34::M41& v27 = v26.f_4();
  for (const auto& v28 : v27.f_1()) {
    ReceiveUint64(v28.f_0());
    ReceiveString(v28.f_2());
    const Message4::M7::M14::M29::M34::M41::M58::M66& v29 = v28.f_4();
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73& v30 = v29.f_3();
    ReceiveInt64(v30.f_0());
    for (const auto& v31 : v30.f_4()) {
      ReceiveInt64(v31.f_7());
      ReceiveString(v31.f_0());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78& v32 =
          v31.f_11();
      ReceiveFloat(v32.f_1());
      ReceiveDouble(v32.f_0());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81&
          v33 = v32.f_4();
      ReceiveString(v33.f_0());
      ReceiveUint32(v31.f_3());
      for (const auto& v34 : v31.f_13()) {
        for (const auto& v35 : v34.f_2()) {
          ReceiveInt64(v35.f_0());
          for (const auto& v36 : v35.f_2()) {
            ReceiveString(v36.f_0());
            for (const auto& v37 : v36.f_2()) {
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87& v38 = v37.f_1();
              ReceiveFloat(v38.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88& v39 = v38.f_2();
              ReceiveUint64(v39.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89& v40 = v39.f_1();
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90& v41 = v40.f_1();
              ReceiveInt32(v41.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90::M91& v42 = v41.f_2();
              ReceiveInt64(v42.f_0());
              for (const auto& v43 : v41.f_3()) {
                ReceiveInt32(v43.f_0());
              }
              ReceiveInt32(v40.f_0());
              ReceiveString(v37.f_0());
            }
          }
        }
        ReceiveInt64(v34.f_0());
      }
      ReceiveInt32(v31.f_6());
      ReceiveString(v31.f_2());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79& v44 =
          v31.f_12();
      for (const auto& v45 : v44.f_1()) {
        ReceiveInt32(v45.f_0());
        const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::M82::
            M85& v46 = v45.f_1();
        ReceiveInt32(v46.f_0());
      }
      ReceiveString(v44.f_0());
      ReceiveString(v31.f_1());
      ReceiveString(v31.f_5());
      ReceiveBool(v31.f_4());
    }
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76& v47 = v30.f_3();
    ReceiveInt32(v47.f_0());
    ReceiveFloat(v29.f_0());
    ReceiveString(v28.f_1());
  }
  ReceiveInt32(v27.f_0());
  for (const auto& v48 : v27.f_2()) {
    ReceiveFloat(v48.f_0());
  }
  ReceiveInt32(v26.f_0());
  ReceiveInt64(v25.f_1());
  for (auto f : (*message).f_2()) {
    ReceiveInt32(f);
  }
  ReceiveBool((*message).f_1());
  for (const auto& v49 : (*message).f_9()) {
    ReceiveInt32(v49.f_0());
    ReceiveInt64(v49.f_1());
  }
  const Message4::M6& v50 = (*message).f_13();
  ReceiveInt32(v50.f_0());
  const Message4::M6::M19& v51 = v50.f_2();
  ReceiveInt32(v51.f_1());
  ReceiveCord(v51.f_0());
  for (const auto& v52 : v51.f_6()) {
    ReceiveFloat(v52.f_1());
    ReceiveInt32(v52.f_2());
    const Message4::M6::M19::M27::M31& v53 = v52.f_3();
    const Message4::M6::M19::M27::M31::M42& v54 = v53.f_4();
    const Message4::M6::M19::M27::M31::M42::M54& v55 = v54.f_1();
    ReceiveInt32(v55.f_0());
    ReceiveFloat(v54.f_0());
    ReceiveInt32(v53.f_0());
    for (auto f : v52.f_0()) {
      ReceiveFloat(f);
    }
  }
  const Message4::M6::M19::M30& v56 = v51.f_7();
  ReceiveInt64(v56.f_4());
  ReceiveInt64(v56.f_1());
  ReceiveUint64(v56.f_5());
  ReceiveString(v56.f_3());
  const Message4::M6::M19::M30::M32& v57 = v56.f_9();
  ReceiveInt32(v57.f_4());
  ReceiveInt32(v57.f_5());
  ReceiveInt32(v57.f_1());
  ReceiveString(v57.f_2());
  ReceiveBool(v57.f_3());
  ReceiveString(v57.f_0());
  ReceiveInt64(v57.f_6());
  ReceiveInt32(v56.f_0());
  for (const auto& v58 : v56.f_10()) {
    ReceiveBool(v58.f_0());
    ReceiveBool(v58.f_4());
    ReceiveString(v58.f_3());
    ReceiveUint64(v58.f_1());
    ReceiveBool(v58.f_2());
  }
  ReceiveBool(v56.f_2());
  const Message4::M6::M19::M20& v59 = v51.f_3();
  ReceiveDouble(v59.f_0());
  ReceiveInt32(v59.f_3());
  ReceiveString(v59.f_2());
  ReceiveInt32(v59.f_4());
  ReceiveInt64(v59.f_1());
  ReceiveInt64(v51.f_2());
  for (const auto& v60 : v51.f_4()) {
    ReceiveUint32(v60.f_0());
    const Message4::M6::M19::M24::M33& v61 = v60.f_1();
    ReceiveInt32(v61.f_0());
    const Message4::M6::M19::M24::M33::M50& v62 = v61.f_3();
    ReceiveInt64(v62.f_0());
    const Message4::M6::M19::M24::M33::M50::M63& v63 = v62.f_1();
    ReceiveInt32(v63.f_0());
    const Message4::M6::M19::M24::M33::M44& v64 = v61.f_2();
    for (const auto& v65 : v64.f_1()) {
      ReceiveDouble(v65.f_0());
    }
    ReceiveString(v64.f_0());
    const Message4::M6::M19::M24::M33::M44::M56& v66 = v64.f_4();
    ReceiveUint32(v66.f_0());
  }
  const Message4::M6::M19::M26& v67 = v51.f_5();
  ReceiveInt32(v67.f_0());
  const Message4::M6::M11& v68 = v50.f_1();
  ReceiveUint32(v68.f_0());
  ReceiveBool((*message).f_3());
  ReceiveInt64((*message).f_0());
  for (auto f : (*message).f_4()) {
    ReceiveInt32(f);
  }
  const Message4::M3& v69 = (*message).f_10();
  const Message4::M3::M9& v70 = v69.f_10();
  const Message4::M3::M9::M25& v71 = v70.f_3();
  ReceiveInt32(v71.f_8());
  ReceiveInt32(v71.f_2());
  ReceiveUint32(v71.f_0());
  ReceiveFloat(v71.f_5());
  ReceiveString(v71.f_4());
  ReceiveInt32(v71.f_9());
  ReceiveInt64(v71.f_6());
  const Message4::M3::M9::M25::M38& v72 = v71.f_13();
  ReceiveDouble(v72.f_0());
  const Message4::M3::M9::M25::M38::M45& v73 = v72.f_2();
  ReceiveInt32(v73.f_0());
  for (const auto& v74 : v72.f_7()) {
    ReceiveFloat(v74.f_0());
  }
  for (const auto& v75 : v72.f_4()) {
    const Message4::M3::M9::M25::M38::M47::M53& v76 = v75.f_1();
    const Message4::M3::M9::M25::M38::M47::M53::M71& v77 = v76.f_1();
    for (const auto& v78 : v77.f_23()) {
      ReceiveInt32(v78.f_2());
      ReceiveUint32(v78.f_1());
      ReceiveInt32(v78.f_3());
      ReceiveInt64(v78.f_4());
      ReceiveString(v78.f_0());
    }
    ReceiveBool(v77.f_7());
    ReceiveString(v77.f_9());
    ReceiveString(v77.f_0());
    ReceiveString(v77.f_3());
    ReceiveUint32(v77.f_1());
    ReceiveInt32(v77.f_6());
    ReceiveInt64(v77.f_5());
    ReceiveDouble(v77.f_8());
    ReceiveString(v77.f_4());
    ReceiveFloat(v77.f_10());
    ReceiveInt32(v77.f_2());
    ReceiveInt32(v77.f_11());
    ReceiveInt32(v76.f_0());
    const Message4::M3::M9::M25::M38::M47::M60& v79 = v75.f_4();
    ReceiveInt64(v79.f_0());
    const Message4::M3::M9::M25::M38::M47::M60::M67& v80 = v79.f_9();
    ReceiveString(v80.f_0());
    ReceiveDouble(v79.f_2());
    ReceiveUint64(v79.f_4());
    ReceiveInt32(v79.f_1());
    ReceiveUint32(v79.f_3());
    ReceiveInt64(v75.f_0());
  }
  const Message4::M3::M9::M25::M38::M49& v81 = v72.f_8();
  const Message4::M3::M9::M25::M38::M49::M59& v82 = v81.f_2();
  ReceiveInt32(v82.f_0());
  const Message4::M3::M9::M25::M38::M49::M65& v83 = v81.f_5();
  ReceiveUint64(v83.f_4());
  ReceiveInt32(v83.f_7());
  ReceiveInt64(v83.f_3());
  for (const auto& v84 : v83.f_12()) {
    ReceiveInt64(v84.f_0());
    const Message4::M3::M9::M25::M38::M49::M65::M69::M75& v85 = v84.f_4();
    ReceiveInt64(v85.f_1());
    ReceiveInt32(v85.f_0());
    const Message4::M3::M9::M25::M38::M49::M65::M69::M72& v86 = v84.f_3();
    ReceiveFloat(v86.f_1());
    ReceiveUint32(v86.f_0());
  }
  ReceiveUint32(v83.f_8());
  for (auto f : v83.f_6()) {
    ReceiveInt32(f);
  }
  ReceiveUint64(v83.f_0());
  ReceiveInt64(v83.f_5());
  ReceiveInt64(v83.f_2());
  ReceiveInt32(v83.f_1());
  const Message4::M3::M9::M25::M38::M49::M64& v87 = v81.f_4();
  ReceiveUint64(v87.f_0());
  ReceiveString(v81.f_0());
  ReceiveInt32(v72.f_1());
  ReceiveCord(v71.f_7());
  ReceiveInt32(v71.f_10());
  ReceiveFloat(v71.f_1());
  ReceiveUint32(v71.f_3());
  ReceiveString(v70.f_0());
  const Message4::M3::M9::M21& v88 = v70.f_2();
  ReceiveInt64(v88.f_0());
  ReceiveUint64(v69.f_1());
  ReceiveInt64(v69.f_2());
  ReceiveInt64(v69.f_0());
  ReceiveFloat(v69.f_4());
  ReceiveString(v69.f_6());
  ReceiveUint32(v69.f_5());
  ReceiveString(v69.f_3());
  const Message4::M8& v89 = (*message).f_16();
  ReceiveInt32(v89.f_1());
  ReceiveBool(v89.f_2());
  ReceiveString(v89.f_0());
  const Message4::M1& v90 = (*message).f_8();
  ReceiveInt64(v90.f_0());
  for (const auto& v91 : v90.f_1()) {
    ReceiveString(v91.f_0());
  }
}

inline void Message4_Get_4(Message4* message) {
  ReceiveInt64((*message).f_0());
  ReceiveBool((*message).f_1());
  const Message4::M1& v0 = (*message).f_8();
  ReceiveInt64(v0.f_0());
  for (const auto& v1 : v0.f_1()) {
    ReceiveString(v1.f_0());
  }
  const Message4::M5& v2 = (*message).f_12();
  const Message4::M5::M17& v3 = v2.f_2();
  ReceiveInt32(v3.f_0());
  ReceiveFloat(v3.f_3());
  ReceiveInt32(v3.f_6());
  ReceiveInt32(v3.f_1());
  ReceiveInt64(v3.f_2());
  ReceiveString(v3.f_4());
  ReceiveInt32(v3.f_5());
  for (const auto& v4 : v2.f_1()) {
    ReceiveInt64(v4.f_0());
  }
  ReceiveInt32(v2.f_0());
  for (auto f : (*message).f_2()) {
    ReceiveInt32(f);
  }
  const Message4::M4& v5 = (*message).f_11();
  ReceiveCord(v5.f_0());
  for (const auto& v6 : v5.f_2()) {
    for (const auto& v7 : v6.f_3()) {
      ReceiveFloat(v7.f_0());
      const Message4::M4::M12::M23::M37& v8 = v7.f_3();
      ReceiveFloat(v8.f_0());
    }
    ReceiveDouble(v6.f_0());
  }
  ReceiveInt32((*message).f_5());
  for (auto f : (*message).f_4()) {
    ReceiveInt32(f);
  }
  const Message4::M3& v9 = (*message).f_10();
  ReceiveUint32(v9.f_5());
  ReceiveString(v9.f_6());
  ReceiveInt64(v9.f_0());
  const Message4::M3::M9& v10 = v9.f_10();
  const Message4::M3::M9::M21& v11 = v10.f_2();
  ReceiveInt64(v11.f_0());
  ReceiveString(v10.f_0());
  const Message4::M3::M9::M25& v12 = v10.f_3();
  ReceiveUint32(v12.f_3());
  ReceiveInt64(v12.f_6());
  ReceiveFloat(v12.f_1());
  ReceiveInt32(v12.f_8());
  ReceiveInt32(v12.f_10());
  ReceiveString(v12.f_4());
  const Message4::M3::M9::M25::M38& v13 = v12.f_13();
  for (const auto& v14 : v13.f_4()) {
    ReceiveInt64(v14.f_0());
    const Message4::M3::M9::M25::M38::M47::M60& v15 = v14.f_4();
    const Message4::M3::M9::M25::M38::M47::M60::M67& v16 = v15.f_9();
    ReceiveString(v16.f_0());
    ReceiveDouble(v15.f_2());
    ReceiveInt32(v15.f_1());
    ReceiveInt64(v15.f_0());
    ReceiveUint64(v15.f_4());
    ReceiveUint32(v15.f_3());
    const Message4::M3::M9::M25::M38::M47::M53& v17 = v14.f_1();
    ReceiveInt32(v17.f_0());
    const Message4::M3::M9::M25::M38::M47::M53::M71& v18 = v17.f_1();
    ReceiveInt32(v18.f_6());
    for (const auto& v19 : v18.f_23()) {
      ReceiveInt32(v19.f_2());
      ReceiveUint32(v19.f_1());
      ReceiveInt32(v19.f_3());
      ReceiveString(v19.f_0());
      ReceiveInt64(v19.f_4());
    }
    ReceiveFloat(v18.f_10());
    ReceiveInt32(v18.f_11());
    ReceiveString(v18.f_4());
    ReceiveString(v18.f_3());
    ReceiveUint32(v18.f_1());
    ReceiveInt64(v18.f_5());
    ReceiveString(v18.f_0());
    ReceiveBool(v18.f_7());
    ReceiveString(v18.f_9());
    ReceiveDouble(v18.f_8());
    ReceiveInt32(v18.f_2());
  }
  ReceiveDouble(v13.f_0());
  const Message4::M3::M9::M25::M38::M49& v20 = v13.f_8();
  const Message4::M3::M9::M25::M38::M49::M64& v21 = v20.f_4();
  ReceiveUint64(v21.f_0());
  ReceiveString(v20.f_0());
  const Message4::M3::M9::M25::M38::M49::M59& v22 = v20.f_2();
  ReceiveInt32(v22.f_0());
  const Message4::M3::M9::M25::M38::M49::M65& v23 = v20.f_5();
  ReceiveUint64(v23.f_4());
  ReceiveUint32(v23.f_8());
  ReceiveInt64(v23.f_3());
  for (const auto& v24 : v23.f_12()) {
    const Message4::M3::M9::M25::M38::M49::M65::M69::M75& v25 = v24.f_4();
    ReceiveInt32(v25.f_0());
    ReceiveInt64(v25.f_1());
    ReceiveInt64(v24.f_0());
    const Message4::M3::M9::M25::M38::M49::M65::M69::M72& v26 = v24.f_3();
    ReceiveFloat(v26.f_1());
    ReceiveUint32(v26.f_0());
  }
  for (auto f : v23.f_6()) {
    ReceiveInt32(f);
  }
  ReceiveInt32(v23.f_1());
  ReceiveInt64(v23.f_2());
  ReceiveInt32(v23.f_7());
  ReceiveUint64(v23.f_0());
  ReceiveInt64(v23.f_5());
  ReceiveInt32(v13.f_1());
  for (const auto& v27 : v13.f_7()) {
    ReceiveFloat(v27.f_0());
  }
  const Message4::M3::M9::M25::M38::M45& v28 = v13.f_2();
  ReceiveInt32(v28.f_0());
  ReceiveUint32(v12.f_0());
  ReceiveFloat(v12.f_5());
  ReceiveInt32(v12.f_9());
  ReceiveCord(v12.f_7());
  ReceiveInt32(v12.f_2());
  ReceiveUint64(v9.f_1());
  ReceiveString(v9.f_3());
  ReceiveFloat(v9.f_4());
  ReceiveInt64(v9.f_2());
  const Message4::M8& v29 = (*message).f_16();
  ReceiveInt32(v29.f_1());
  ReceiveString(v29.f_0());
  ReceiveBool(v29.f_2());
  const Message4::M6& v30 = (*message).f_13();
  ReceiveInt32(v30.f_0());
  const Message4::M6::M19& v31 = v30.f_2();
  const Message4::M6::M19::M26& v32 = v31.f_5();
  ReceiveInt32(v32.f_0());
  ReceiveInt64(v31.f_2());
  for (const auto& v33 : v31.f_4()) {
    const Message4::M6::M19::M24::M33& v34 = v33.f_1();
    ReceiveInt32(v34.f_0());
    const Message4::M6::M19::M24::M33::M44& v35 = v34.f_2();
    ReceiveString(v35.f_0());
    for (const auto& v36 : v35.f_1()) {
      ReceiveDouble(v36.f_0());
    }
    const Message4::M6::M19::M24::M33::M44::M56& v37 = v35.f_4();
    ReceiveUint32(v37.f_0());
    const Message4::M6::M19::M24::M33::M50& v38 = v34.f_3();
    ReceiveInt64(v38.f_0());
    const Message4::M6::M19::M24::M33::M50::M63& v39 = v38.f_1();
    ReceiveInt32(v39.f_0());
    ReceiveUint32(v33.f_0());
  }
  ReceiveInt32(v31.f_1());
  for (const auto& v40 : v31.f_6()) {
    for (auto f : v40.f_0()) {
      ReceiveFloat(f);
    }
    ReceiveFloat(v40.f_1());
    const Message4::M6::M19::M27::M31& v41 = v40.f_3();
    const Message4::M6::M19::M27::M31::M42& v42 = v41.f_4();
    const Message4::M6::M19::M27::M31::M42::M54& v43 = v42.f_1();
    ReceiveInt32(v43.f_0());
    ReceiveFloat(v42.f_0());
    ReceiveInt32(v41.f_0());
    ReceiveInt32(v40.f_2());
  }
  const Message4::M6::M19::M30& v44 = v31.f_7();
  ReceiveInt64(v44.f_1());
  ReceiveBool(v44.f_2());
  const Message4::M6::M19::M30::M32& v45 = v44.f_9();
  ReceiveInt64(v45.f_6());
  ReceiveInt32(v45.f_5());
  ReceiveBool(v45.f_3());
  ReceiveString(v45.f_2());
  ReceiveInt32(v45.f_4());
  ReceiveString(v45.f_0());
  ReceiveInt32(v45.f_1());
  ReceiveInt64(v44.f_4());
  for (const auto& v46 : v44.f_10()) {
    ReceiveBool(v46.f_4());
    ReceiveUint64(v46.f_1());
    ReceiveBool(v46.f_2());
    ReceiveString(v46.f_3());
    ReceiveBool(v46.f_0());
  }
  ReceiveString(v44.f_3());
  ReceiveInt32(v44.f_0());
  ReceiveUint64(v44.f_5());
  ReceiveCord(v31.f_0());
  const Message4::M6::M19::M20& v47 = v31.f_3();
  ReceiveInt32(v47.f_3());
  ReceiveInt32(v47.f_4());
  ReceiveInt64(v47.f_1());
  ReceiveString(v47.f_2());
  ReceiveDouble(v47.f_0());
  const Message4::M6::M11& v48 = v30.f_1();
  ReceiveUint32(v48.f_0());
  for (const auto& v49 : (*message).f_9()) {
    ReceiveInt64(v49.f_1());
    ReceiveInt32(v49.f_0());
  }
  ReceiveBool((*message).f_3());
  const Message4::M7& v50 = (*message).f_14();
  const Message4::M7::M16& v51 = v50.f_4();
  const Message4::M7::M16::M28& v52 = v51.f_2();
  ReceiveString(v52.f_0());
  const Message4::M7::M16::M28::M35& v53 = v52.f_1();
  ReceiveBool(v53.f_5());
  ReceiveUint64(v53.f_0());
  ReceiveString(v53.f_4());
  ReceiveCord(v53.f_7());
  ReceiveUint32(v53.f_8());
  ReceiveFloat(v53.f_3());
  const Message4::M7::M16::M28::M35::M43& v54 = v53.f_23();
  ReceiveInt64(v54.f_3());
  for (auto f : v54.f_1()) {
    ReceiveInt32(f);
  }
  const Message4::M7::M16::M28::M35::M43::M62& v55 = v54.f_7();
  const Message4::M7::M16::M28::M35::M43::M62::M68& v56 = v55.f_2();
  ReceiveBool(v56.f_0());
  for (const auto& v57 : v55.f_3()) {
    ReceiveString(v57.f_0());
  }
  ReceiveUint32(v55.f_1());
  ReceiveInt32(v55.f_0());
  ReceiveString(v54.f_0());
  ReceiveString(v54.f_2());
  ReceiveInt32(v54.f_4());
  for (const auto& v58 : v53.f_27()) {
    const Message4::M7::M16::M28::M35::M52::M57& v59 = v58.f_2();
    ReceiveString(v59.f_0());
    ReceiveInt64(v58.f_0());
  }
  const Message4::M7::M16::M28::M35::M40& v60 = v53.f_21();
  ReceiveFloat(v60.f_4());
  ReceiveUint32(v60.f_5());
  ReceiveUint32(v60.f_3());
  ReceiveBool(v60.f_2());
  ReceiveBool(v60.f_1());
  ReceiveInt32(v60.f_6());
  ReceiveCord(v60.f_0());
  const Message4::M7::M16::M28::M35::M51& v61 = v53.f_26();
  ReceiveInt32(v61.f_0());
  ReceiveString(v61.f_1());
  ReceiveString(v61.f_2());
  ReceiveInt64(v53.f_9());
  const Message4::M7::M16::M28::M35::M46& v62 = v53.f_25();
  ReceiveInt64(v62.f_0());
  ReceiveInt32(v53.f_10());
  ReceiveString(v53.f_1());
  ReceiveString(v53.f_2());
  ReceiveUint32(v53.f_6());
  ReceiveUint32(v51.f_0());
  const Message4::M7::M18& v63 = v50.f_6();
  ReceiveInt32(v63.f_0());
  for (const auto& v64 : v63.f_2()) {
    for (const auto& v65 : v64.f_1()) {
      ReceiveInt32(v65.f_0());
    }
    ReceiveBool(v64.f_0());
  }
  for (const auto& v66 : v50.f_3()) {
    ReceiveString(v66.f_5());
    ReceiveInt64(v66.f_2());
    ReceiveInt32(v66.f_4());
    ReceiveInt32(v66.f_0());
    ReceiveInt64(v66.f_1());
    ReceiveUint64(v66.f_3());
  }
  const Message4::M7::M14& v67 = v50.f_1();
  ReceiveString(v67.f_0());
  const Message4::M7::M14::M29& v68 = v67.f_1();
  const Message4::M7::M14::M29::M34& v69 = v68.f_4();
  ReceiveInt32(v69.f_0());
  ReceiveString(v69.f_2());
  ReceiveInt32(v69.f_1());
  const Message4::M7::M14::M29::M34::M41& v70 = v69.f_4();
  ReceiveInt32(v70.f_0());
  for (const auto& v71 : v70.f_2()) {
    ReceiveFloat(v71.f_0());
  }
  for (const auto& v72 : v70.f_1()) {
    ReceiveUint64(v72.f_0());
    ReceiveString(v72.f_2());
    ReceiveString(v72.f_1());
    const Message4::M7::M14::M29::M34::M41::M58::M66& v73 = v72.f_4();
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73& v74 = v73.f_3();
    ReceiveInt64(v74.f_0());
    const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M76& v75 = v74.f_3();
    ReceiveInt32(v75.f_0());
    for (const auto& v76 : v74.f_4()) {
      ReceiveUint32(v76.f_3());
      ReceiveString(v76.f_5());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79& v77 =
          v76.f_12();
      for (const auto& v78 : v77.f_1()) {
        ReceiveInt32(v78.f_0());
        const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M79::M82::
            M85& v79 = v78.f_1();
        ReceiveInt32(v79.f_0());
      }
      ReceiveString(v77.f_0());
      ReceiveString(v76.f_1());
      ReceiveString(v76.f_0());
      ReceiveString(v76.f_2());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78& v80 =
          v76.f_11();
      ReceiveDouble(v80.f_0());
      const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M78::M81&
          v81 = v80.f_4();
      ReceiveString(v81.f_0());
      ReceiveFloat(v80.f_1());
      ReceiveInt64(v76.f_7());
      ReceiveBool(v76.f_4());
      ReceiveInt32(v76.f_6());
      for (const auto& v82 : v76.f_13()) {
        ReceiveInt64(v82.f_0());
        for (const auto& v83 : v82.f_2()) {
          ReceiveInt64(v83.f_0());
          for (const auto& v84 : v83.f_2()) {
            ReceiveString(v84.f_0());
            for (const auto& v85 : v84.f_2()) {
              ReceiveString(v85.f_0());
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87& v86 = v85.f_1();
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88& v87 = v86.f_2();
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89& v88 = v87.f_1();
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90& v89 = v88.f_1();
              for (const auto& v90 : v89.f_3()) {
                ReceiveInt32(v90.f_0());
              }
              const Message4::M7::M14::M29::M34::M41::M58::M66::M73::M77::M80::
                  M83::M84::M86::M87::M88::M89::M90::M91& v91 = v89.f_2();
              ReceiveInt64(v91.f_0());
              ReceiveInt32(v89.f_0());
              ReceiveInt32(v88.f_0());
              ReceiveUint64(v87.f_0());
              ReceiveFloat(v86.f_0());
            }
          }
        }
      }
    }
    ReceiveFloat(v73.f_0());
  }
  ReceiveUint32(v68.f_0());
  ReceiveInt64(v68.f_1());
  ReceiveFloat(v50.f_0());
}

}  // namespace fleetbench::proto
#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE4_H_
