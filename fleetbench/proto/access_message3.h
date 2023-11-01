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
  Message3::M2* v1_0 = message->add_f_8();
  Message3::M2::M10* v1 = v1_0->mutable_f_20();
  Message3::M2::M10::M13* v3_0 = v1->add_f_2();
  v3_0->set_f_0(0.759432);
  Message3::M2::M4* v4 = v1_0->mutable_f_16();
  int64_t array_1[7] = {0xd7c9,   0x4b1db, 0x786bb2,  0x75,
                        0xe846c1, 0xd2,    0x595dd673};
  for (auto& value : array_1) v4->add_f_0(value);
  v1_0->set_f_0(0x9e69);
  v1_0->set_f_5(s->substr(0, 15));
  v1_0->set_f_3(0x6b2c);
  v1_0->set_f_9(0.602206);
  Message3::M2::M7* v6_0 = v1_0->add_f_18();
  v6_0->set_f_0(0x6);
  v6_0->set_f_3(0x748f);
  v1_0->set_f_4(Message3::M2::E2_CONST_5);
  v1_0->set_f_2(Message3::M2::E1_CONST_5);
  Message3::M2::M8* v8_0 = v1_0->add_f_19();
  Message3::M2::M8::M22* v10_0 = v8_0->add_f_2();
  Message3::M2::M8::M22::M26* v10 = v10_0->mutable_f_1();
  Message3::M2::M8::M22::M26::M45* v11 = v10->mutable_f_12();
  v11->set_f_2(0x57748bcdae5bd5a9);
  v11->set_f_1(Message3::M2::M8::M22::M26::M45::E16_CONST_4);
  v10->set_f_1(0xc8);
  v10->set_f_6(s->substr(0, 14));
  Message3::M2::M8::M22::M28* v13 = v10_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M40* v14 = v13->mutable_f_6();
  v14->set_f_0(Message3::M2::M8::M22::M28::M40::E15_CONST_1);
  Message3::M2::M8::M22::M28::M38* v16_1 = v13->add_f_4();
  v16_1->set_f_0(0x9054a3);
  Message3::M2::M8::M22::M28::M44* v16 = v13->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v18_0 = v16->add_f_1();
  v18_0->set_f_0(Message3::M2::M8::M22::M28::M44::M47::E19_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53* v19_0 = v18_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v20_0 = v19_0->add_f_1();
  v20_0->set_f_0(0x4aefe5bdc661);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v21_0 = v20_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v22_0 =
      v21_0->add_f_2();
  v22_0->set_f_0(s->substr(0, 6));
  v22_0->set_f_1(0.381314);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v23_0 =
      v21_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v23 =
      v23_0->mutable_f_2();
  v23->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v25_0 =
      v23_0->add_f_1();
  v25_0->set_f_0(s->substr(0, 10));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v25 =
      v25_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v27_0 = v25->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v27 = v27_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v28 = v27->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v30_0 = v28->add_f_2();
  v30_0->set_f_1(s->substr(0, 5));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v27_1 = v25->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v31 = v27_1->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v32 = v31->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v34_0 = v32->add_f_1();
  v34_0->set_f_0(s->substr(0, 1));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v34_1 = v32->add_f_1();
  v34_1->set_f_0(s->substr(0, 10));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v35_0 = v32->add_f_2();
  v35_0->set_f_1(s->substr(0, 88));
  v35_0->set_f_2(s->substr(0, 39));
  Message3::M2::M8::M22::M28::M37* v35 = v13->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v36 = v35->mutable_f_1();
  v36->set_f_4(0.596613);
  v36->set_f_3(Message3::M2::M8::M22::M28::M37::M46::E18_CONST_2);
  v36->set_f_12(0x2c22ca10);
  v36->add_f_11(s->substr(0, 19));
  v36->add_f_11(s->substr(0, 3));
  v36->set_f_7(0x96);
  v35->set_f_0(s->substr(0, 28));
  Message3::M2::M8::M22::M28::M39* v38 = v13->mutable_f_5();
  v38->set_f_0(s->substr(0, 26));
  v8_0->set_f_0(0xc3);
  Message3::M2::M11* v39 = v1_0->mutable_f_23();
  Message3::M2::M11::M17* v40 = v39->mutable_f_3();
  v40->set_f_0(s->substr(0, 28));
  Message3::M2::M11::M25* v41 = v39->mutable_f_5();
  v41->set_f_22(s->substr(0, 24));
  v41->set_f_14(0x3400f8d758cfae00);
  v41->set_f_0(true);
  v41->set_f_2(0x7b);
  v41->set_f_18(Message3::M2::M11::M25::E12_CONST_4);
  v41->set_f_12(false);
  v41->set_f_20(s->substr(0, 12));
  v41->set_f_19(0x18);
  v39->set_f_0(s->substr(0, 6));
  Message3::M2::M5* v43 = v1_0->mutable_f_17();
  v43->set_f_3(0x80fea233);
  v43->set_f_2(s->substr(0, 2));
  v43->set_f_0(0x20);
  Message3::M1* v46 = message->mutable_f_7();
  Message3::M1::M6* v47 = v46->mutable_f_4();
  Message3::M1::M6::M18* v49_0 = v47->add_f_6();
  Message3::M1::M6::M18::M30* v49 = v49_0->mutable_f_1();
  Message3::M1::M6::M18::M30::M33* v50 = v49->mutable_f_1();
  Message3::M1::M6::M18::M30::M33::M49* v51 = v50->mutable_f_3();
  Message3::M1::M6::M18::M30::M33::M49::M51* v54_0 = v51->add_f_1();
  v54_0->set_f_0(0xe);
  Message3::M1::M6::M14* v56 = v47->mutable_f_5();
  Message3::M1::M6::M14::M29* v57 = v56->mutable_f_3();
  Message3::M1::M6::M14::M29::M41* v58 = v57->mutable_f_2();
  v58->set_f_2(0x2feba511d7);
  v57->set_f_0(s->substr(0, 16));
  v47->set_f_2(Message3::M1::M6::E6_CONST_3);
  v47->set_f_0(s->substr(0, 2));
  v46->set_f_1(true);
  Message3::M1::M3* v61 = v46->mutable_f_3();
  v61->set_f_0(Message3::M1::M3::E4_CONST_1);
  Message3::M1::M3::M21* v62 = v61->mutable_f_3();
  Message3::M1::M3::M21::M27* v63 = v62->mutable_f_1();
  Message3::M1::M3::M21::M27::M36* v64 = v63->mutable_f_6();
  v64->set_f_0(0xfe);
  Message3::M1::M3::M21::M27::M34* v65 = v63->mutable_f_4();
  Message3::M1::M3::M21::M27::M34::M48* v66 = v65->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M58* v67 = v66->mutable_f_10();
  v67->set_f_0(0x54);
  Message3::M1::M3::M21::M27::M34::M48::M58::M62* v68 = v67->mutable_f_1();
  v68->set_f_0(Message3::M1::M3::M21::M27::M34::M48::M58::M62::E22_CONST_5);
  Message3::M1::M3::M21::M27::M34::M48::M58::M62::M66* v70_0 = v68->add_f_1();
  v70_0->set_f_0(0x8);
  v66->set_f_1(Message3::M1::M3::M21::M27::M34::M48::E20_CONST_4);
  v66->set_f_0(0x34);
  Message3::M1::M3::M21::M27::M34::M48::M54* v70 = v66->mutable_f_9();
  v70->set_f_0(false);
  v70->set_f_1(0x22);
  Message3::M1::M3::M21::M27::M34::M48::M50* v73_0 = v66->add_f_5();
  Message3::M1::M3::M21::M27::M34::M48::M50::M63* v74_0 = v73_0->add_f_2();
  v74_0->set_f_14(s->substr(0, 4));
  v74_0->set_f_9(0x25);
  v74_0->set_f_3(s->substr(0, 103));
  v74_0->set_f_0(s->substr(0, 5));
  Message3::M1::M3::M21::M27::M34::M48::M50::M63::M65* v75_0 =
      v74_0->add_f_24();
  v75_0->set_f_0(0xf2);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63::M64* v76_0 =
      v74_0->add_f_23();
  v76_0->set_f_0(0x5e83b15e);
  Message3::M1::M3::M21::M27::M34::M48::M50::M61* v76 = v73_0->mutable_f_1();
  v76->set_f_0(0x5ef7d78e6553f4ed);
  v73_0->set_f_0(0.482434);
  Message3::M1::M3::M21::M32* v78_0 = v62->add_f_3();
  v78_0->set_f_2(0xff9b);
  v78_0->set_f_3(s->substr(0, 1));
  Message3::M1::M9* v80 = v46->mutable_f_6();
  v80->set_f_0(0x9f);
  message->set_f_3(s->substr(0, 32));
  message->set_f_0(s->substr(0, 7));
  message->set_f_2(true);
}

inline void Message3_Set_2(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_7();
  Message3::M1::M3* v1 = v0->mutable_f_3();
  Message3::M1::M3::M21* v2 = v1->mutable_f_3();
  v2->set_f_0(0.295383);
  Message3::M1::M3::M21::M27* v3 = v2->mutable_f_1();
  Message3::M1::M3::M21::M27::M36* v4 = v3->mutable_f_6();
  v4->set_f_0(0x43);
  Message3::M1::M3::M21::M27::M34* v5 = v3->mutable_f_4();
  v5->set_f_0(0x16);
  Message3::M1::M3::M21::M27::M34::M48* v6 = v5->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M58* v7 = v6->mutable_f_10();
  Message3::M1::M3::M21::M27::M34::M48::M58::M62* v8 = v7->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M58::M62::M66* v10_0 = v8->add_f_1();
  v10_0->set_f_0(0x6de5);
  v7->set_f_0(0xf7);
  v6->set_f_0(0x3c5b);
  Message3::M1::M3::M21::M27::M34::M48::M50* v13_0 = v6->add_f_5();
  v13_0->set_f_0(0.288033);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63* v14_0 = v13_0->add_f_2();
  v14_0->set_f_15(Message3::M1::M3::M21::M27::M34::M48::M50::M63::E23_CONST_3);
  v14_0->set_f_4(0.400639);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63::M65* v15_0 =
      v14_0->add_f_24();
  v15_0->set_f_0(0x4ee4);
  v14_0->set_f_14(s->substr(0, 16));
  v14_0->set_f_1(0x1a55101e);
  v14_0->set_f_5(0.619560);
  v14_0->set_f_6(0x46beda);
  Message3::M1::M3::M21::M27::M34::M48::M50::M61* v16 = v13_0->mutable_f_1();
  v16->set_f_0(0x3b7c5bcea8e0e673);
  Message3::M1::M3::M21::M27::M34::M48::M50* v13_1 = v6->add_f_5();
  Message3::M1::M3::M21::M27::M34::M48::M50::M63* v18_0 = v13_1->add_f_2();
  v18_0->set_f_7(s->substr(0, 16));
  v18_0->set_f_8(s->substr(0, 3));
  v18_0->set_f_11(0.552334);
  v18_0->set_f_15(Message3::M1::M3::M21::M27::M34::M48::M50::M63::E23_CONST_4);
  v18_0->set_f_1(0x715e8c38);
  v18_0->set_f_5(0.343607);
  v18_0->set_f_0(s->substr(0, 1));
  v18_0->set_f_9(0x936948);
  v13_1->set_f_0(0.316744);
  Message3::M1::M3::M21::M32* v22_0 = v2->add_f_3();
  v22_0->set_f_2(0xeea708);
  v22_0->set_f_3(s->substr(0, 3));
  Message3::M1::M9* v24 = v0->mutable_f_6();
  v24->set_f_0(0x5a3e);
  Message3::M1::M6* v25 = v0->mutable_f_4();
  Message3::M1::M6::M23* v26 = v25->mutable_f_10();
  v26->set_f_0(s->substr(0, 52));
  Message3::M1::M6::M14* v27 = v25->mutable_f_5();
  v27->set_f_0(0.288970);
  Message3::M1::M6::M14::M29* v28 = v27->mutable_f_3();
  Message3::M1::M6::M14::M29::M41* v30 = v28->mutable_f_2();
  v30->set_f_1(false);
  Message3::M1::M6::M18* v32_0 = v25->add_f_6();
  Message3::M1::M6::M18::M30* v32 = v32_0->mutable_f_1();
  Message3::M1::M6::M18::M30::M33* v33 = v32->mutable_f_1();
  v33->set_f_0(0.627341);
  Message3::M1::M6::M18::M30::M33::M49* v34 = v33->mutable_f_3();
  v34->set_f_0(0.240216);
  Message3::M1::M6::M18::M30::M33::M49::M55* v36_0 = v34->add_f_3();
  v36_0->set_f_0(0xfe73);
  Message3::M1::M6::M18::M30::M33::M49::M57* v38_0 = v34->add_f_5();
  v38_0->set_f_2(0x31);
  Message3::M1::M6::M18::M30::M33::M49::M51* v39_0 = v34->add_f_1();
  v39_0->set_f_0(0x1deb5d9d);
  v32_0->set_f_0(0.677106);
  v25->set_f_2(Message3::M1::M6::E6_CONST_3);
  v25->set_f_1(Message3::M1::M6::E5_CONST_4);
  message->set_f_0(s->substr(0, 8));
  Message3::M2* v40_0 = message->add_f_8();
  Message3::M2::M7* v41_0 = v40_0->add_f_18();
  v41_0->set_f_1(0.804582);
  v41_0->set_f_2(s->substr(0, 8));
  Message3::M2::M7::M24* v42_0 = v41_0->add_f_7();
  v42_0->set_f_0(0x23ee7bd3);
  Message3::M2::M7* v41_1 = v40_0->add_f_18();
  v41_1->set_f_0(0x90bb21);
  v41_1->set_f_3(0x98);
  Message3::M2::M7::M24* v43_0 = v41_1->add_f_7();
  v43_0->set_f_0(0x23fa6db7);
  Message3::M2::M5* v43 = v40_0->mutable_f_17();
  v43->set_f_1(0.767522);
  Message3::M2::M5::M12* v44 = v43->mutable_f_6();
  Message3::M2::M5::M12::M31* v45 = v44->mutable_f_3();
  v45->set_f_0(true);
  v45->set_f_2(0xad);
  v45->set_f_3(0x8e);
  v45->set_f_5(0x1c22);
  v45->set_f_4(0.416564);
  v43->set_f_2(s->substr(0, 22));
  Message3::M2::M4* v46 = v40_0->mutable_f_16();
  v46->add_f_0(0x38);
  v46->add_f_0(0x9f);
  v46->add_f_0(0xa8a5bd);
  Message3::M2::M8* v48_0 = v40_0->add_f_19();
  v48_0->set_f_0(0xa75bf);
  Message3::M2::M8::M22* v49_0 = v48_0->add_f_2();
  v49_0->set_f_0(false);
  Message3::M2::M8::M22::M26* v49 = v49_0->mutable_f_1();
  v49->set_f_2(0xa7e4d429fd);
  v49->set_f_0(Message3::M2::M8::M22::M26::E13_CONST_4);
  v49->set_f_7(0xe0c61eaeeb);
  Message3::M2::M8::M22::M26::M45* v51 = v49->mutable_f_12();
  v51->set_f_4(0x3b8d2e);
  v51->set_f_6(Message3::M2::M8::M22::M26::M45::E17_CONST_4);
  v49->set_f_1(0xdc);
  Message3::M2::M8::M22::M28* v52 = v49_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M40* v55 = v52->mutable_f_6();
  v55->set_f_0(Message3::M2::M8::M22::M28::M40::E15_CONST_4);
  Message3::M2::M8::M22::M28::M44* v56 = v52->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v58_0 = v56->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v59_0 = v58_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v60_0 = v59_0->add_f_1();
  v60_0->set_f_0(0xc6e1dafc);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v61_0 = v60_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v62_0 =
      v61_0->add_f_2();
  v62_0->set_f_1(0.161079);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v63_0 =
      v61_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v63 =
      v63_0->mutable_f_2();
  v63->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_4);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v65_0 =
      v63_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v65 =
      v65_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v67_0 = v65->add_f_5();
  v67_0->set_f_0(0x7c2deeed4e);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v67 = v67_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v68 = v67->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v70_0 = v68->add_f_2();
  v70_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                     M72::M73::M74::M75::M77::E27_CONST_2);
  v70_0->set_f_0(0xf3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v70_1 = v68->add_f_2();
  v70_1->set_f_2(s->substr(0, 7));
  v70_1->set_f_0(0x5a);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v71_0 = v68->add_f_1();
  v71_0->set_f_0(s->substr(0, 9));
  v67->set_f_0(0.164613);
  v65_0->set_f_0(s->substr(0, 32));
  v61_0->add_f_0(0x60);
  v59_0->set_f_0(0xbe571f0189d82d2);
  v52->set_f_0(0xc19);
  Message3::M2::M8::M22::M28::M37* v71 = v52->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v72 = v71->mutable_f_1();
  v72->set_f_1(s->substr(0, 15));
  v72->set_f_6(false);
  v72->set_f_2(0x9c);
  v72->set_f_3(Message3::M2::M8::M22::M28::M37::M46::E18_CONST_4);
  v72->set_f_4(0.299964);
  Message3::M2::M8::M22::M28::M37::M46::M56* v74_0 = v72->add_f_20();
  v74_0->set_f_0(0x5e);
  v72->add_f_11(s->substr(0, 18));
  v71->set_f_0(s->substr(0, 15));
  Message3::M2::M8::M22* v49_1 = v48_0->add_f_2();
  v49_1->set_f_0(false);
  Message3::M2::M8::M22::M28* v74 = v49_1->mutable_f_2();
  Message3::M2::M8::M22::M28::M44* v75 = v74->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v77_0 = v75->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v78_0 = v77_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v79_0 = v78_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v80_0 = v79_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v82_0 =
      v80_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v83_0 =
      v82_0->add_f_1();
  v83_0->set_f_0(s->substr(0, 2));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v83 =
      v83_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v85_0 = v83->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v85 = v85_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v86 = v85->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v89_0 = v86->add_f_2();
  v89_0->set_f_2(s->substr(0, 3));
  v89_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                     M72::M73::M74::M75::M77::E27_CONST_2);
  v89_0->set_f_1(s->substr(0, 40));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v85_1 = v83->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v89 = v85_1->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v90 = v89->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v92_0 = v90->add_f_1();
  v92_0->set_f_0(s->substr(0, 2));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v93_0 = v90->add_f_2();
  v93_0->set_f_2(s->substr(0, 51));
  v93_0->set_f_0(0x64);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v93 =
      v82_0->mutable_f_2();
  v93->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_3);
  v93->set_f_1(0.128359);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v79_1 = v78_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v95_0 = v79_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v96_0 =
      v95_0->add_f_2();
  v96_0->set_f_0(s->substr(0, 2));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v97_0 =
      v95_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v98_0 =
      v97_0->add_f_1();
  v98_0->set_f_0(s->substr(0, 9));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v98 =
      v98_0->mutable_f_1();
  v98->set_f_0(s->substr(0, 48));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v100_0 = v98->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v100 = v100_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v101 = v100->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v103_0 = v101->add_f_2();
  v103_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_3);
  v101->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                    M72::M73::M74::M75::E26_CONST_4);
  v100->set_f_0(0.277968);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v100_1 = v98->add_f_5();
  v100_1->set_f_0(0xc329ca2a89aba6);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v104 = v100_1->mutable_f_2();
  v104->set_f_0(0.013337);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v105 = v104->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v107_0 = v105->add_f_2();
  v107_0->set_f_2(s->substr(0, 5));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v107_1 = v105->add_f_2();
  v107_1->set_f_1(s->substr(0, 2));
  v107_1->set_f_0(0x5a);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v108_0 = v105->add_f_1();
  v108_0->set_f_0(s->substr(0, 4));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v108 =
      v97_0->mutable_f_2();
  v108->set_f_0(0xece41f42bd);
  Message3::M2::M8::M22::M28::M37* v111 = v74->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v112 = v111->mutable_f_1();
  v112->set_f_8(0.411815);
  Message3::M2::M8::M22::M28::M37::M46::M56* v114_0 = v112->add_f_20();
  v114_0->set_f_0(0x12eb);
  v112->add_f_11(s->substr(0, 6));
  v112->set_f_2(0xb4);
  v112->set_f_14(0.624418);
  v112->set_f_9(0x194c);
  v112->set_f_10(0x7f);
  v112->set_f_7(0xe1);
  Message3::M2::M8::M22::M28::M39* v114 = v74->mutable_f_5();
  v114->set_f_0(s->substr(0, 7));
  v74->set_f_0(0xb468ceff);
  Message3::M2::M8::M22::M26* v115 = v49_1->mutable_f_1();
  v115->set_f_4(s->substr(0, 6));
  Message3::M2::M8::M22::M26::M43* v116 = v115->mutable_f_11();
  v116->add_f_0(s->substr(0, 2));
  v115->set_f_0(Message3::M2::M8::M22::M26::E13_CONST_5);
  v115->set_f_7(0xb8a6bc6b48);
  v115->set_f_3(0x7e46df1a46277653);
  Message3::M2::M8::M22::M26::M45* v117 = v115->mutable_f_12();
  v117->set_f_1(Message3::M2::M8::M22::M26::M45::E16_CONST_2);
  v117->set_f_0(s->substr(0, 4));
  v40_0->set_f_10(Message3::M2::E3_CONST_1);
  v40_0->set_f_6(0x6a);
  Message3::M2::M10* v119 = v40_0->mutable_f_20();
  Message3::M2::M10::M15* v121 = v119->mutable_f_3();
  v121->set_f_0(s->substr(0, 7));
  Message3::M2::M11* v122 = v40_0->mutable_f_23();
  Message3::M2::M11::M25* v123 = v122->mutable_f_5();
  v123->set_f_15(s->substr(0, 56));
  v123->set_f_23(s->substr(0, 11));
  v123->set_f_1(0x72);
  v123->set_f_24(s->substr(0, 1));
  v123->set_f_7(Message3::M2::M11::M25::E9_CONST_4);
  v123->set_f_4(Message3::M2::M11::M25::E8_CONST_4);
  v123->set_f_25(0x5843bba3);
  v123->set_f_10(Message3::M2::M11::M25::E11_CONST_1);
  v123->set_f_12(true);
  v123->set_f_9(0x9451c3);
  v123->set_f_5(0xe82140);
  v123->set_f_14(0x818a);
}

inline void Message3_Set_3(Message3* message, std::string* s) {
  message->set_f_2(false);
  Message3::M2* v1_0 = message->add_f_8();
  Message3::M2::M5* v1 = v1_0->mutable_f_17();
  v1->set_f_1(0.399110);
  v1->set_f_3(0xef);
  v1->set_f_2(s->substr(0, 34));
  Message3::M2::M5::M12* v2 = v1->mutable_f_6();
  Message3::M2::M5::M12::M31* v3 = v2->mutable_f_3();
  v3->set_f_1(0x796901c61524fe00);
  v3->set_f_0(true);
  v3->set_f_3(0xcb);
  v1_0->set_f_3(0x1197bedcb9);
  v1_0->set_f_6(0x2236a4);
  v1_0->set_f_11(0x22);
  v1_0->set_f_10(Message3::M2::E3_CONST_4);
  Message3::M2::M7* v6_0 = v1_0->add_f_18();
  v6_0->set_f_3(0x88);
  v1_0->set_f_1(0x14f5486a63);
  v1_0->set_f_8(0x304204);
  Message3::M2::M8* v11_0 = v1_0->add_f_19();
  Message3::M2::M8::M22* v12_0 = v11_0->add_f_2();
  Message3::M2::M8::M22::M28* v12 = v12_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M37* v13 = v12->mutable_f_3();
  v13->set_f_0(s->substr(0, 65));
  Message3::M2::M8::M22::M28::M37::M46* v14 = v13->mutable_f_1();
  v14->set_f_1(s->substr(0, 30));
  v14->set_f_3(Message3::M2::M8::M22::M28::M37::M46::E18_CONST_1);
  v14->set_f_12(0x2cee6971);
  v14->set_f_7(0xb2);
  v14->set_f_0(s->substr(0, 3));
  v14->set_f_2(0x3e);
  v14->add_f_11(s->substr(0, 8));
  v14->set_f_10(0x48);
  Message3::M2::M8::M22::M28::M40* v16 = v12->mutable_f_6();
  v16->set_f_0(Message3::M2::M8::M22::M28::M40::E15_CONST_3);
  Message3::M2::M8::M22::M28::M39* v17 = v12->mutable_f_5();
  v17->set_f_0(s->substr(0, 7));
  Message3::M2::M8::M22::M28::M44* v18 = v12->mutable_f_7();
  v18->set_f_0(s->substr(0, 19));
  Message3::M2::M8::M22::M28::M44::M47* v20_0 = v18->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v21_0 = v20_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v22_0 = v21_0->add_f_1();
  v22_0->set_f_0(0xc10cc78338844f15);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v23_0 = v22_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v24_0 =
      v23_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v24 =
      v24_0->mutable_f_2();
  v24->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_1);
  v24->set_f_0(0xefd7da11e54d5);
  v24_0->set_f_0(
      Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::E24_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v26_0 =
      v24_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v26 =
      v26_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v28_0 = v26->add_f_5();
  v28_0->set_f_0(0xab46dec5);
  v26_0->set_f_0(s->substr(0, 14));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v33_0 =
      v23_0->add_f_2();
  v33_0->set_f_1(0.858494);
  v33_0->set_f_0(s->substr(0, 22));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v22_1 = v21_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v34_0 = v22_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v35_0 =
      v34_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v35 =
      v35_0->mutable_f_2();
  v35->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_5);
  v35->set_f_1(0.640956);
  v35->set_f_0(0x47);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v37_0 =
      v35_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v37 =
      v37_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v39_0 = v37->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v39 = v39_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v40 = v39->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v42_0 = v40->add_f_2();
  v42_0->set_f_2(s->substr(0, 6));
  v39->set_f_0(0.839862);
  v39_0->set_f_0(0x5313580b);
  v37->set_f_0(s->substr(0, 9));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v37_1 =
      v35_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v43 =
      v37_1->mutable_f_1();
  v43->set_f_0(s->substr(0, 29));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v45_0 = v43->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v45 = v45_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v46 = v45->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v49_0 = v46->add_f_2();
  v49_0->set_f_1(s->substr(0, 13));
  v46->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                   M72::M73::M74::M75::E26_CONST_2);
  v21_0->set_f_0(0x21c3b86f39e79a98);
  Message3::M2::M8::M22::M28::M38* v51_0 = v12->add_f_4();
  v51_0->set_f_0(0xf3f36f95ea);
  Message3::M2::M8::M22::M26* v51 = v12_0->mutable_f_1();
  Message3::M2::M8::M22::M26::M43* v52 = v51->mutable_f_11();
  v52->add_f_0(s->substr(0, 3));
  Message3::M2::M8::M22::M26::M45* v53 = v51->mutable_f_12();
  v53->set_f_3(0x54a7a3b31f9e618);
  v53->set_f_1(Message3::M2::M8::M22::M26::M45::E16_CONST_1);
  v53->set_f_4(0x58c6b64b1c);
  v51->set_f_5(0x83);
  v51->set_f_1(0x30a6);
  v51->set_f_7(0x523f);
  v51->set_f_6(s->substr(0, 1));
  Message3::M2::M8::M22* v12_1 = v11_0->add_f_2();
  Message3::M2::M8::M22::M26* v54 = v12_1->mutable_f_1();
  v54->set_f_6(s->substr(0, 8));
  Message3::M2::M8::M22::M26::M45* v55 = v54->mutable_f_12();
  v55->set_f_2(0x17cd63c2da7e2410);
  v55->set_f_7(0xadd45b);
  v54->set_f_4(s->substr(0, 28));
  Message3::M2::M8::M22::M26::M43* v56 = v54->mutable_f_11();
  v56->add_f_0(s->substr(0, 37));
  Message3::M2::M8::M22::M28* v57 = v12_1->mutable_f_2();
  Message3::M2::M8::M22::M28::M37* v58 = v57->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v59 = v58->mutable_f_1();
  v59->set_f_10(0xb5);
  v59->set_f_9(0xc7);
  v59->set_f_2(0x8716ca546dd616);
  v59->set_f_4(0.001542);
  v59->set_f_5(s->substr(0, 7));
  v59->set_f_0(s->substr(0, 1));
  v59->set_f_13(0xc4c1b7);
  v57->set_f_0(0x85);
  Message3::M2::M8::M22::M28::M40* v61 = v57->mutable_f_6();
  v61->set_f_0(Message3::M2::M8::M22::M28::M40::E15_CONST_3);
  Message3::M2::M8::M22::M28::M44* v62 = v57->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v64_0 = v62->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v65_0 = v64_0->add_f_1();
  v65_0->set_f_0(0x7604d6128aa4f500);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v66_0 = v65_0->add_f_1();
  v66_0->set_f_0(0xdf23f9011553f295);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v67_0 = v66_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v69_0 =
      v67_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v69 =
      v69_0->mutable_f_2();
  v69->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                   E25_CONST_1);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v71_0 =
      v69_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v71 =
      v71_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v73_0 = v71->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v73 = v73_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v74 = v73->mutable_f_1();
  v74->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                   M72::M73::M74::M75::E26_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v76_0 = v74->add_f_2();
  v76_0->set_f_2(s->substr(0, 23));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v77_0 = v74->add_f_1();
  v77_0->set_f_0(s->substr(0, 5));
  v73->set_f_0(0.718740);
  v69_0->set_f_0(
      Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::E24_CONST_5);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v66_1 = v65_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v78_0 = v66_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v79_0 =
      v78_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v81_0 =
      v79_0->add_f_1();
  v81_0->set_f_0(s->substr(0, 16));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v81 =
      v81_0->mutable_f_1();
  v81->set_f_0(s->substr(0, 7));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v83_0 = v81->add_f_5();
  v83_0->set_f_0(0x13ccb6fbfac61b);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v83 = v83_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v84 = v83->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v87_0 = v84->add_f_2();
  v87_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                     M72::M73::M74::M75::M77::E27_CONST_4);
  v87_0->set_f_1(s->substr(0, 13));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v81_1 =
      v79_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v87 =
      v81_1->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v89_0 = v87->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v89 = v89_0->mutable_f_2();
  v89->set_f_0(0.672513);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v90 = v89->mutable_f_1();
  v90->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                   M72::M73::M74::M75::E26_CONST_4);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v93_0 = v90->add_f_2();
  v93_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                     M72::M73::M74::M75::M77::E27_CONST_5);
  v93_0->set_f_1(s->substr(0, 7));
  v89_0->set_f_0(0x518851df8ab3080d);
  v87->set_f_0(s->substr(0, 5));
  v78_0->add_f_0(0x36b41a20);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v94_0 =
      v78_0->add_f_2();
  v94_0->set_f_1(0.821955);
  v94_0->set_f_0(s->substr(0, 24));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v94_1 =
      v78_0->add_f_2();
  v94_1->set_f_1(0.722931);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v78_1 = v66_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v95_0 =
      v78_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v96_0 =
      v95_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v96 =
      v96_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v98_0 = v96->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v98 = v98_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v99 = v98->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v101_0 = v99->add_f_2();
  v101_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_4);
  v99->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                   M72::M73::M74::M75::E26_CONST_2);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v102 =
      v95_0->mutable_f_2();
  v102->set_f_1(0.497723);
  v102->set_f_0(0x18c04433a1);
  v78_1->add_f_0(0xd6);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v104_0 =
      v78_1->add_f_2();
  v104_0->set_f_1(0.550666);
  v62->set_f_0(s->substr(0, 5));
  Message3::M2::M8::M22::M28::M38* v106_0 = v57->add_f_4();
  v106_0->set_f_0(0x45);
  v11_0->set_f_0(0x74);
  Message3::M2::M8* v11_1 = v1_0->add_f_19();
  Message3::M2::M8::M22* v108_0 = v11_1->add_f_2();
  Message3::M2::M8::M22::M28* v108 = v108_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M37* v110 = v108->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v111 = v110->mutable_f_1();
  v111->set_f_13(0x3a);
  v111->set_f_2(0x4b);
  v111->set_f_5(s->substr(0, 19));
  Message3::M2::M8::M22::M28::M37::M46::M56* v113_0 = v111->add_f_20();
  v113_0->set_f_0(0x79);
  v111->set_f_10(0x54);
  v111->set_f_12(0x46af475c);
  v111->add_f_11(s->substr(0, 52));
  v111->add_f_11(s->substr(0, 1));
  v111->add_f_11(s->substr(0, 11));
  Message3::M2::M8::M22::M28::M44* v115 = v108->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v117_0 = v115->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v118_0 = v117_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v119_0 = v118_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v120_0 =
      v119_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v121_0 =
      v120_0->add_f_2();
  v121_0->set_f_1(0.976472);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v122_0 =
      v120_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v122 =
      v122_0->mutable_f_2();
  v122->set_f_1(0.322743);
  v122->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                    E25_CONST_4);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v124_0 =
      v122_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v124 =
      v124_0->mutable_f_1();
  v124->set_f_0(s->substr(0, 25));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v126_0 = v124->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v126 = v126_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v127 = v126->mutable_f_1();
  v127->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                    M72::M73::M74::M75::E26_CONST_2);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M76* v129_0 = v127->add_f_1();
  v129_0->set_f_0(s->substr(0, 3));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v130_0 = v127->add_f_2();
  v130_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_2);
  v130_0->set_f_0(0xf8);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v120_1 =
      v119_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v131_0 =
      v120_1->add_f_2();
  v131_0->set_f_0(s->substr(0, 13));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v132_0 =
      v120_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v132 =
      v132_0->mutable_f_2();
  v132->set_f_1(0.166186);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v134_0 =
      v132_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v134 =
      v134_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v136_0 = v134->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v136 = v136_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v137 = v136->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v139_0 = v137->add_f_2();
  v139_0->set_f_0(0xd9d9);
  v139_0->set_f_2(s->substr(0, 14));
  v139_0->set_f_1(s->substr(0, 7));
  v139_0->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_3);
  int32_t array_0[29] = {0xa7,       0xfc,       0x77,     0x7b,     0x4c,
                         0x13,       0x50afbc6c, 0x99,     0xf,      0x3dd509d,
                         0x3bcbbf48, 0xb1,       0xcf,     0x72,     0xeaf,
                         0x62,       0xc3,       0xca8014, 0xdf,     0x5e71,
                         0x17e6b4fd, 0x7d3068f5, 0x38ae,   0x9dab9d, 0xa73bf5,
                         0xe76915,   0x6d2e26,   0xc38770, 0x5c73};
  for (auto& value : array_0) v120_1->add_f_0(value);
  v119_0->set_f_0(0x7c);
  Message3::M2::M8::M22::M28::M44::M47::M53* v118_1 = v117_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v141_0 = v118_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v142_0 =
      v141_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v144_0 =
      v142_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v144 =
      v144_0->mutable_f_2();
  v144->set_f_0(0x25f184c9cbfb1eac);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v146_0 =
      v144_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v146 =
      v146_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v148_0 = v146->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v148 = v148_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v149 = v148->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v151_0 = v149->add_f_2();
  v151_0->set_f_1(s->substr(0, 16));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v151_1 = v149->add_f_2();
  v151_1->set_f_0(0x28);
  v151_1->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_5);
  v151_1->set_f_2(s->substr(0, 6));
  v149->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                    M72::M73::M74::M75::E26_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v148_1 = v146->add_f_5();
  v148_1->set_f_0(0x87d7c5ee);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v152 = v148_1->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v153 = v152->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v156_0 = v153->add_f_2();
  v156_0->set_f_1(s->substr(0, 6));
  v156_0->set_f_2(s->substr(0, 20));
  v156_0->set_f_0(0x5494a146);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v156_1 = v153->add_f_2();
  v156_1->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_1);
  v156_1->set_f_2(s->substr(0, 7));
  v153->set_f_0(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::
                    M72::M73::M74::M75::E26_CONST_2);
  v146_0->set_f_0(s->substr(0, 3));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v141_1 = v118_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v157_0 =
      v141_1->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v158_1 =
      v157_0->add_f_2();
  v158_1->set_f_0(s->substr(0, 16));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v159_0 =
      v157_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v159 =
      v159_0->mutable_f_2();
  v159->set_f_2(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71::
                    E25_CONST_3);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v161_0 =
      v159_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v161 =
      v161_0->mutable_f_1();
  v161->set_f_0(s->substr(0, 32));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v163_0 = v161->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v163 = v163_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v164 = v163->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v167_0 = v164->add_f_2();
  v167_0->set_f_0(0x6894c2);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v167_1 = v164->add_f_2();
  v167_1->set_f_2(s->substr(0, 7));
  v167_1->set_f_0(0xbf);
  v167_1->set_f_1(s->substr(0, 2));
  v167_1->set_f_3(Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::
                      M70::M72::M73::M74::M75::M77::E27_CONST_4);
  v157_0->add_f_0(0x52);
  v157_0->add_f_0(0x46);
  Message3::M2::M8::M22::M26* v167 = v108_0->mutable_f_1();
  Message3::M2::M8::M22::M26::M45* v168 = v167->mutable_f_12();
  v168->set_f_1(Message3::M2::M8::M22::M26::M45::E16_CONST_1);
  v168->set_f_4(0xab58);
  v168->set_f_0(s->substr(0, 12));
  v168->set_f_5(0x49);
  v168->set_f_3(0x1853fa7405);
  v167->set_f_5(0xad);
  v167->set_f_4(s->substr(0, 32));
  v167->set_f_6(s->substr(0, 13));
  v167->set_f_0(Message3::M2::M8::M22::M26::E13_CONST_3);
  v108_0->set_f_0(true);
  Message3::M2::M8::M20* v170 = v11_1->mutable_f_1();
  v170->set_f_0(s->substr(0, 24));
  v1_0->set_f_5(s->substr(0, 7));
  Message3::M2::M11* v171 = v1_0->mutable_f_23();
  Message3::M2::M11::M25* v172 = v171->mutable_f_5();
  v172->set_f_22(s->substr(0, 4));
  v172->set_f_11(0x569047);
  v172->set_f_19(0x7b161499);
  v172->set_f_20(s->substr(0, 4));
  v172->set_f_3(0xf95047);
  v172->set_f_15(s->substr(0, 16));
  v172->set_f_7(Message3::M2::M11::M25::E9_CONST_4);
  v172->set_f_8(Message3::M2::M11::M25::E10_CONST_4);
  v172->set_f_23(s->substr(0, 22));
  Message3::M1* v175 = message->mutable_f_7();
  Message3::M1::M9* v176 = v175->mutable_f_6();
  v176->set_f_0(0x1);
  Message3::M1::M6* v177 = v175->mutable_f_4();
  Message3::M1::M6::M18* v179_0 = v177->add_f_6();
  Message3::M1::M6::M18::M30* v179 = v179_0->mutable_f_1();
  Message3::M1::M6::M18::M30::M33* v180 = v179->mutable_f_1();
  Message3::M1::M6::M18::M30::M33::M49* v181 = v180->mutable_f_3();
  v181->set_f_0(0.156564);
  Message3::M1::M6::M18::M30::M33::M49::M55* v183_0 = v181->add_f_3();
  Message3::M1::M6::M18::M30::M33::M49::M55::M60* v184_0 = v183_0->add_f_1();
  v184_0->set_f_0(Message3::M1::M6::M18::M30::M33::M49::M55::M60::E21_CONST_5);
  v183_0->set_f_0(0x6f);
  Message3::M1::M6::M18::M30::M33::M49::M57* v185_0 = v181->add_f_5();
  v185_0->set_f_3(0x7c4c88d66);
  v180->set_f_0(0.661288);
  Message3::M1::M6::M23* v186 = v177->mutable_f_10();
  v186->set_f_0(s->substr(0, 6));
  Message3::M1::M6::M14* v187 = v177->mutable_f_5();
  Message3::M1::M6::M14::M29* v188 = v187->mutable_f_3();
  v188->set_f_0(s->substr(0, 15));
  Message3::M1::M6::M14::M29::M41* v190 = v188->mutable_f_2();
  v190->set_f_2(0xee);
  v190->set_f_0(0x34da77478119a8ec);
  v177->set_f_1(Message3::M1::M6::E5_CONST_3);
  v177->set_f_0(s->substr(0, 7));
  Message3::M1::M3* v191 = v175->mutable_f_3();
  v191->set_f_0(Message3::M1::M3::E4_CONST_2);
  Message3::M1::M3::M21* v192 = v191->mutable_f_3();
  Message3::M1::M3::M21::M32* v194_0 = v192->add_f_3();
  v194_0->set_f_1(s->substr(0, 117));
  Message3::M1::M3::M21::M27* v195 = v192->mutable_f_1();
  Message3::M1::M3::M21::M27::M34* v196 = v195->mutable_f_4();
  Message3::M1::M3::M21::M27::M34::M48* v197 = v196->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M50* v200_0 = v197->add_f_5();
  Message3::M1::M3::M21::M27::M34::M48::M50::M61* v200 = v200_0->mutable_f_1();
  v200->set_f_0(0x3b1ac23ad7ab0476);
  v200_0->set_f_0(0.723969);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63* v202_0 = v200_0->add_f_2();
  v202_0->set_f_4(0.668432);
  v202_0->set_f_11(0.322031);
  v202_0->set_f_14(s->substr(0, 2));
  v202_0->set_f_15(Message3::M1::M3::M21::M27::M34::M48::M50::M63::E23_CONST_3);
  v202_0->set_f_3(s->substr(0, 15));
  v202_0->set_f_1(0x1ca147d9);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63::M64* v204_0 =
      v202_0->add_f_23();
  v204_0->set_f_0(0x6d59cff4);
  v202_0->set_f_8(s->substr(0, 25));
  Message3::M1::M3::M21::M27::M34::M48::M58* v204 = v197->mutable_f_10();
  v204->set_f_0(0xe);
  Message3::M1::M3::M21::M27::M34::M48::M58::M62* v205 = v204->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M58::M62::M66* v207_0 = v205->add_f_1();
  v207_0->set_f_0(0xe5);
  v196->set_f_0(0xaa);
  v192->set_f_0(0.778104);
  message->set_f_1(0xe4825ac6);
  message->set_f_0(s->substr(0, 2));
}

inline void Message3_Set_4(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_7();
  Message3::M1::M6* v2 = v0->mutable_f_4();
  Message3::M1::M6::M14* v3 = v2->mutable_f_5();
  Message3::M1::M6::M14::M29* v4 = v3->mutable_f_3();
  Message3::M1::M6::M14::M29::M35* v5 = v4->mutable_f_1();
  v5->set_f_0(0x4a);
  Message3::M1::M6::M14::M29::M41* v6 = v4->mutable_f_2();
  v6->set_f_1(false);
  v6->set_f_0(0x49215a170fd6c22d);
  Message3::M1::M6::M23* v7 = v2->mutable_f_10();
  v7->set_f_0(s->substr(0, 5));
  Message3::M1::M6::M18* v9_0 = v2->add_f_6();
  Message3::M1::M6::M18::M30* v9 = v9_0->mutable_f_1();
  Message3::M1::M6::M18::M30::M33* v10 = v9->mutable_f_1();
  Message3::M1::M6::M18::M30::M33::M49* v11 = v10->mutable_f_3();
  Message3::M1::M6::M18::M30::M33::M49::M57* v13_0 = v11->add_f_5();
  v13_0->set_f_1(0xfaf0d1cd6963bb);
  Message3::M1::M6::M18::M30::M33::M49::M51* v14_1 = v11->add_f_1();
  v14_1->set_f_0(0x21);
  Message3::M1::M6::M18::M30::M33::M49::M55* v15_0 = v11->add_f_3();
  Message3::M1::M6::M18::M30::M33::M49::M55::M60* v16_0 = v15_0->add_f_1();
  v16_0->set_f_0(Message3::M1::M6::M18::M30::M33::M49::M55::M60::E21_CONST_3);
  Message3::M1::M6::M18::M30::M33::M49::M55* v15_1 = v11->add_f_3();
  Message3::M1::M6::M18::M30::M33::M49::M55::M60* v17_0 = v15_1->add_f_1();
  v17_0->set_f_0(Message3::M1::M6::M18::M30::M33::M49::M55::M60::E21_CONST_2);
  v2->set_f_2(Message3::M1::M6::E6_CONST_3);
  v0->set_f_1(false);
  v0->set_f_0(0x2a9eb4);
  Message3::M1::M3* v17 = v0->mutable_f_3();
  Message3::M1::M3::M21* v18 = v17->mutable_f_3();
  Message3::M1::M3::M21::M27* v19 = v18->mutable_f_1();
  Message3::M1::M3::M21::M27::M34* v21 = v19->mutable_f_4();
  Message3::M1::M3::M21::M27::M34::M48* v22 = v21->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M52* v24_1 = v22->add_f_8();
  v24_1->set_f_0(0.019236);
  v22->set_f_2(0xef);
  Message3::M1::M3::M21::M27::M34::M48::M54* v24 = v22->mutable_f_9();
  v24->set_f_1(0x3d);
  Message3::M1::M3::M21::M27::M34::M48::M58* v25 = v22->mutable_f_10();
  Message3::M1::M3::M21::M27::M34::M48::M58::M62* v26 = v25->mutable_f_1();
  Message3::M1::M3::M21::M27::M34::M48::M58::M62::M66* v28_0 = v26->add_f_1();
  v28_0->set_f_0(0x9e02c4);
  Message3::M1::M3::M21::M27::M34::M48::M50* v29_0 = v22->add_f_5();
  Message3::M1::M3::M21::M27::M34::M48::M50::M63* v30_0 = v29_0->add_f_2();
  v30_0->set_f_6(0x295278792eec);
  v30_0->set_f_12(s->substr(0, 31));
  v30_0->set_f_5(0.660925);
  Message3::M1::M3::M21::M27::M34::M48::M50::M63::M65* v31_0 =
      v30_0->add_f_24();
  v31_0->set_f_0(0x52);
  v30_0->set_f_11(0.855258);
  v30_0->set_f_1(0x5efdd9d3);
  v30_0->set_f_13(0.606991);
  v30_0->set_f_8(s->substr(0, 4));
  v30_0->set_f_0(s->substr(0, 30));
  v30_0->set_f_9(0x96);
  Message3::M1::M3::M21::M27::M34::M48::M50::M61* v32 = v29_0->mutable_f_1();
  v32->set_f_0(0x36519a3a510af681);
  v19->set_f_0(0xf47e);
  v18->set_f_0(0.373100);
  Message3::M1::M3::M21::M32* v34_0 = v18->add_f_3();
  Message3::M1::M3::M21::M32::M42* v34 = v34_0->mutable_f_7();
  v34->set_f_0(0.509055);
  message->set_f_2(false);
  Message3::M2* v37_0 = message->add_f_8();
  Message3::M2::M10* v37 = v37_0->mutable_f_20();
  Message3::M2::M10::M13* v39_0 = v37->add_f_2();
  v39_0->set_f_0(0.214766);
  v37_0->set_f_10(Message3::M2::E3_CONST_5);
  v37_0->set_f_9(0.562368);
  v37_0->set_f_6(0x47);
  v37_0->add_f_7(s->substr(0, 15));
  v37_0->set_f_2(Message3::M2::E1_CONST_2);
  Message3::M2::M8* v42_0 = v37_0->add_f_19();
  Message3::M2::M8::M22* v43_0 = v42_0->add_f_2();
  Message3::M2::M8::M22::M28* v43 = v43_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44* v44 = v43->mutable_f_7();
  Message3::M2::M8::M22::M28::M44::M47* v46_0 = v44->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53* v47_0 = v46_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59* v48_0 = v47_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67* v49_0 = v48_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M69* v50_1 =
      v49_0->add_f_2();
  v50_1->set_f_1(0.021126);
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68* v51_0 =
      v49_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70* v52_0 =
      v51_0->add_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72* v52 =
      v52_0->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73*
      v54_0 = v52->add_f_5();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74*
      v54 = v54_0->mutable_f_2();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75* v55 = v54->mutable_f_1();
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M70::M72::M73::M74::
      M75::M77* v57_0 = v55->add_f_2();
  v57_0->set_f_2(s->substr(0, 10));
  Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::M68::M71* v58 =
      v51_0->mutable_f_2();
  v58->set_f_1(0.963020);
  v43->set_f_0(0x38);
  Message3::M2::M8::M22::M28::M40* v60 = v43->mutable_f_6();
  v60->set_f_0(Message3::M2::M8::M22::M28::M40::E15_CONST_1);
  Message3::M2::M8::M22::M28::M37* v61 = v43->mutable_f_3();
  Message3::M2::M8::M22::M28::M37::M46* v62 = v61->mutable_f_1();
  v62->set_f_9(0x3);
  v62->set_f_14(0.101076);
  v62->set_f_6(false);
  v62->set_f_4(0.944205);
  v62->set_f_10(0x2a);
  v62->add_f_11(s->substr(0, 51));
  v62->set_f_8(0.815299);
  Message3::M2::M8::M22::M26* v65 = v43_0->mutable_f_1();
  v65->set_f_0(Message3::M2::M8::M22::M26::E13_CONST_1);
  Message3::M2::M8::M22::M26::M45* v67 = v65->mutable_f_12();
  v67->set_f_3(0x41);
  v67->set_f_1(Message3::M2::M8::M22::M26::M45::E16_CONST_3);
  v67->set_f_6(Message3::M2::M8::M22::M26::M45::E17_CONST_2);
  v67->set_f_5(0x93);
  v67->set_f_4(0x1232f9);
  v65->set_f_6(s->substr(0, 20));
  v37_0->set_f_0(0xeb);
  v37_0->set_f_4(Message3::M2::E2_CONST_1);
  Message3::M2::M5* v69 = v37_0->mutable_f_17();
  Message3::M2::M5::M12* v70 = v69->mutable_f_6();
  Message3::M2::M5::M12::M31* v71 = v70->mutable_f_3();
  v71->set_f_6(0xc7ca2569);
  v71->set_f_0(false);
  v71->set_f_1(0x3a311bb11f11769d);
  v69->set_f_2(s->substr(0, 13));
  Message3::M2::M7* v73_0 = v37_0->add_f_18();
  v73_0->set_f_0(0x539f1b);
  v73_0->set_f_1(0.312637);
  Message3::M2::M7::M24* v74_0 = v73_0->add_f_7();
  v74_0->set_f_0(0x1e218350);
  Message3::M2::M7* v73_1 = v37_0->add_f_18();
  v73_1->set_f_2(s->substr(0, 8));
  Message3::M2::M11* v75 = v37_0->mutable_f_23();
  Message3::M2::M11::M25* v76 = v75->mutable_f_5();
  v76->set_f_15(s->substr(0, 6));
  v76->set_f_4(Message3::M2::M11::M25::E8_CONST_1);
  v76->set_f_2(0xbdee);
  v76->set_f_8(Message3::M2::M11::M25::E10_CONST_2);
  v76->set_f_7(Message3::M2::M11::M25::E9_CONST_1);
  v76->set_f_25(0x7f842dd4);
  v76->set_f_23(s->substr(0, 54));
  v76->set_f_20(s->substr(0, 12));
  v76->set_f_22(s->substr(0, 21));
  v76->set_f_12(false);
  Message3::M2::M11::M17* v77 = v75->mutable_f_3();
  v77->set_f_0(s->substr(0, 14));
  message->set_f_1(0xb2);
}

inline void Message3_Get_1(Message3* message) {
  for (const auto& v0 : (*message).f_8()) {
    ReceiveInt32(v0.f_4());
    ReceiveFloat(v0.f_9());
    for (const auto& f : v0.f_7()) {
      ReceiveString(f);
    }
    const Message3::M2::M5& v1 = v0.f_17();
    const Message3::M2::M5::M12& v2 = v1.f_6();
    ReceiveInt32(v2.f_0());
    const Message3::M2::M5::M12::M31& v3 = v2.f_3();
    ReceiveUint32(v3.f_6());
    ReceiveUint64(v3.f_1());
    ReceiveBool(v3.f_0());
    ReceiveInt64(v3.f_3());
    ReceiveInt32(v3.f_5());
    ReceiveInt32(v3.f_2());
    ReceiveDouble(v3.f_4());
    ReceiveUint32(v1.f_3());
    ReceiveString(v1.f_2());
    ReceiveDouble(v1.f_1());
    ReceiveInt64(v1.f_0());
    ReceiveInt32(v0.f_6());
    ReceiveInt64(v0.f_1());
    ReceiveInt64(v0.f_8());
    const Message3::M2::M10& v4 = v0.f_20();
    ReceiveInt64(v4.f_0());
    for (const auto& v5 : v4.f_2()) {
      ReceiveDouble(v5.f_0());
    }
    const Message3::M2::M10::M15& v6 = v4.f_3();
    ReceiveString(v6.f_0());
    ReceiveInt64(v0.f_3());
    ReceiveInt32(v0.f_2());
    ReceiveInt32(v0.f_11());
    ReceiveInt32(v0.f_0());
    ReceiveInt32(v0.f_10());
    for (const auto& v7 : v0.f_19()) {
      ReceiveInt32(v7.f_0());
      for (const auto& v8 : v7.f_2()) {
        ReceiveBool(v8.f_0());
        const Message3::M2::M8::M22::M26& v9 = v8.f_1();
        ReceiveInt64(v9.f_3());
        ReceiveInt32(v9.f_0());
        ReceiveString(v9.f_6());
        ReceiveInt64(v9.f_7());
        const Message3::M2::M8::M22::M26::M45& v10 = v9.f_12();
        ReceiveInt32(v10.f_1());
        ReceiveUint64(v10.f_2());
        ReceiveInt64(v10.f_5());
        ReceiveInt64(v10.f_7());
        ReceiveString(v10.f_0());
        ReceiveInt64(v10.f_3());
        ReceiveInt32(v10.f_6());
        ReceiveInt64(v10.f_4());
        ReceiveInt32(v9.f_5());
        ReceiveInt64(v9.f_2());
        ReceiveString(v9.f_4());
        ReceiveInt32(v9.f_1());
        const Message3::M2::M8::M22::M26::M43& v11 = v9.f_11();
        for (const auto& f : v11.f_0()) {
          ReceiveString(f);
        }
        const Message3::M2::M8::M22::M28& v12 = v8.f_2();
        const Message3::M2::M8::M22::M28::M44& v13 = v12.f_7();
        ReceiveString(v13.f_0());
        for (const auto& v14 : v13.f_1()) {
          for (const auto& v15 : v14.f_1()) {
            ReceiveUint64(v15.f_0());
            for (const auto& v16 : v15.f_1()) {
              for (const auto& v17 : v16.f_1()) {
                for (const auto& v18 : v17.f_1()) {
                  for (const auto& v19 : v18.f_1()) {
                    ReceiveString(v19.f_0());
                    const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                        M68::M70::M72& v20 = v19.f_1();
                    ReceiveString(v20.f_0());
                    for (const auto& v21 : v20.f_5()) {
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74& v22 = v21.f_2();
                      ReceiveDouble(v22.f_0());
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74::M75& v23 = v22.f_1();
                      ReceiveInt32(v23.f_0());
                      for (const auto& v24 : v23.f_2()) {
                        ReceiveString(v24.f_2());
                        ReceiveString(v24.f_1());
                        ReceiveInt32(v24.f_0());
                        ReceiveInt32(v24.f_3());
                      }
                      for (const auto& v25 : v23.f_1()) {
                        ReceiveString(v25.f_0());
                      }
                      ReceiveInt64(v21.f_0());
                    }
                  }
                  const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                      M68::M71& v26 = v18.f_2();
                  ReceiveInt64(v26.f_0());
                  ReceiveInt32(v26.f_2());
                  ReceiveFloat(v26.f_1());
                  ReceiveInt32(v18.f_0());
                }
                for (const auto& v27 : v17.f_2()) {
                  ReceiveString(v27.f_0());
                  ReceiveFloat(v27.f_1());
                }
                for (auto f : v17.f_0()) {
                  ReceiveInt32(f);
                }
              }
              ReceiveUint64(v16.f_0());
            }
          }
          ReceiveInt32(v14.f_0());
        }
        for (const auto& v28 : v12.f_4()) {
          ReceiveInt64(v28.f_0());
        }
        const Message3::M2::M8::M22::M28::M40& v29 = v12.f_6();
        ReceiveInt32(v29.f_0());
        ReceiveInt64(v12.f_0());
        const Message3::M2::M8::M22::M28::M39& v30 = v12.f_5();
        ReceiveString(v30.f_0());
        const Message3::M2::M8::M22::M28::M37& v31 = v12.f_3();
        const Message3::M2::M8::M22::M28::M37::M46& v32 = v31.f_1();
        ReceiveBool(v32.f_6());
        ReceiveString(v32.f_0());
        for (const auto& v33 : v32.f_20()) {
          ReceiveInt32(v33.f_0());
        }
        ReceiveUint64(v32.f_2());
        ReceiveString(v32.f_5());
        ReceiveDouble(v32.f_4());
        ReceiveUint32(v32.f_12());
        ReceiveUint32(v32.f_10());
        ReceiveInt32(v32.f_3());
        ReceiveInt32(v32.f_7());
        ReceiveInt32(v32.f_13());
        for (const auto& f : v32.f_11()) {
          ReceiveString(f);
        }
        ReceiveInt64(v32.f_9());
        ReceiveFloat(v32.f_8());
        ReceiveFloat(v32.f_14());
        ReceiveString(v32.f_1());
        ReceiveString(v31.f_0());
      }
      const Message3::M2::M8::M20& v34 = v7.f_1();
      ReceiveCord(v34.f_0());
    }
    const Message3::M2::M4& v35 = v0.f_16();
    for (auto f : v35.f_0()) {
      ReceiveInt64(f);
    }
    for (const auto& v36 : v0.f_18()) {
      ReceiveFloat(v36.f_1());
      for (const auto& v37 : v36.f_7()) {
        ReceiveUint32(v37.f_0());
      }
      ReceiveString(v36.f_2());
      ReceiveInt64(v36.f_0());
      ReceiveUint32(v36.f_3());
    }
    ReceiveString(v0.f_5());
    const Message3::M2::M11& v38 = v0.f_23();
    ReceiveString(v38.f_0());
    const Message3::M2::M11::M17& v39 = v38.f_3();
    ReceiveString(v39.f_0());
    const Message3::M2::M11::M25& v40 = v38.f_5();
    ReceiveInt32(v40.f_13());
    ReceiveInt64(v40.f_5());
    ReceiveInt32(v40.f_4());
    ReceiveInt32(v40.f_10());
    ReceiveString(v40.f_20());
    ReceiveInt64(v40.f_6());
    ReceiveInt32(v40.f_25());
    ReceiveInt32(v40.f_11());
    ReceiveInt32(v40.f_9());
    ReceiveUint32(v40.f_16());
    ReceiveString(v40.f_23());
    ReceiveInt32(v40.f_8());
    ReceiveString(v40.f_24());
    ReceiveFloat(v40.f_17());
    ReceiveInt64(v40.f_1());
    ReceiveInt64(v40.f_14());
    ReceiveBool(v40.f_0());
    ReceiveInt32(v40.f_7());
    ReceiveInt32(v40.f_18());
    ReceiveInt32(v40.f_19());
    ReceiveInt64(v40.f_3());
    ReceiveUint32(v40.f_21());
    ReceiveInt64(v40.f_2());
    ReceiveString(v40.f_15());
    ReceiveBool(v40.f_12());
    ReceiveString(v40.f_22());
    const Message3::M2::M11::M16& v41 = v38.f_1();
    ReceiveUint32(v41.f_0());
  }
  ReceiveString((*message).f_3());
  ReceiveBool((*message).f_2());
  const Message3::M1& v42 = (*message).f_7();
  const Message3::M1::M9& v43 = v42.f_6();
  ReceiveUint32(v43.f_0());
  const Message3::M1::M6& v44 = v42.f_4();
  const Message3::M1::M6::M23& v45 = v44.f_10();
  ReceiveString(v45.f_0());
  ReceiveInt32(v44.f_1());
  for (const auto& v46 : v44.f_6()) {
    const Message3::M1::M6::M18::M30& v47 = v46.f_1();
    const Message3::M1::M6::M18::M30::M33& v48 = v47.f_1();
    const Message3::M1::M6::M18::M30::M33::M49& v49 = v48.f_3();
    for (const auto& v50 : v49.f_5()) {
      ReceiveInt64(v50.f_1());
      ReceiveInt32(v50.f_2());
      ReceiveInt64(v50.f_3());
      ReceiveInt32(v50.f_0());
    }
    for (const auto& v51 : v49.f_3()) {
      for (const auto& v52 : v51.f_1()) {
        ReceiveInt32(v52.f_0());
      }
      ReceiveInt32(v51.f_0());
    }
    for (const auto& v53 : v49.f_1()) {
      ReceiveInt32(v53.f_0());
    }
    ReceiveDouble(v49.f_0());
    ReceiveFloat(v48.f_0());
    ReceiveInt32(v47.f_0());
    ReceiveFloat(v46.f_0());
  }
  const Message3::M1::M6::M14& v54 = v44.f_5();
  const Message3::M1::M6::M14::M29& v55 = v54.f_3();
  const Message3::M1::M6::M14::M29::M35& v56 = v55.f_1();
  ReceiveInt64(v56.f_0());
  const Message3::M1::M6::M14::M29::M41& v57 = v55.f_2();
  ReceiveUint64(v57.f_2());
  ReceiveBool(v57.f_1());
  ReceiveUint64(v57.f_0());
  ReceiveString(v55.f_0());
  ReceiveFloat(v54.f_0());
  ReceiveString(v44.f_0());
  ReceiveInt32(v44.f_2());
  const Message3::M1::M3& v58 = v42.f_3();
  const Message3::M1::M3::M19& v59 = v58.f_1();
  ReceiveInt64(v59.f_0());
  ReceiveInt32(v58.f_0());
  const Message3::M1::M3::M21& v60 = v58.f_3();
  for (const auto& v61 : v60.f_3()) {
    ReceiveString(v61.f_1());
    ReceiveInt64(v61.f_2());
    ReceiveCord(v61.f_3());
    ReceiveInt32(v61.f_0());
    const Message3::M1::M3::M21::M32::M42& v62 = v61.f_7();
    ReceiveDouble(v62.f_0());
  }
  const Message3::M1::M3::M21::M27& v63 = v60.f_1();
  ReceiveUint32(v63.f_0());
  const Message3::M1::M3::M21::M27::M36& v64 = v63.f_6();
  ReceiveInt64(v64.f_0());
  const Message3::M1::M3::M21::M27::M34& v65 = v63.f_4();
  const Message3::M1::M3::M21::M27::M34::M48& v66 = v65.f_1();
  ReceiveUint32(v66.f_0());
  ReceiveInt32(v66.f_2());
  ReceiveInt32(v66.f_1());
  for (const auto& v67 : v66.f_5()) {
    for (const auto& v68 : v67.f_2()) {
      ReceiveFloat(v68.f_4());
      ReceiveInt64(v68.f_6());
      ReceiveString(v68.f_7());
      ReceiveString(v68.f_3());
      ReceiveString(v68.f_0());
      ReceiveUint64(v68.f_2());
      ReceiveUint32(v68.f_1());
      ReceiveInt32(v68.f_15());
      ReceiveFloat(v68.f_5());
      for (const auto& v69 : v68.f_23()) {
        ReceiveUint32(v69.f_0());
      }
      ReceiveString(v68.f_14());
      ReceiveUint64(v68.f_9());
      ReceiveDouble(v68.f_11());
      ReceiveBool(v68.f_10());
      ReceiveString(v68.f_8());
      ReceiveDouble(v68.f_13());
      for (const auto& v70 : v68.f_24()) {
        ReceiveInt32(v70.f_0());
      }
      ReceiveString(v68.f_12());
    }
    const Message3::M1::M3::M21::M27::M34::M48::M50::M61& v71 = v67.f_1();
    ReceiveUint64(v71.f_0());
    ReceiveFloat(v67.f_0());
  }
  const Message3::M1::M3::M21::M27::M34::M48::M54& v72 = v66.f_9();
  ReceiveInt32(v72.f_1());
  ReceiveBool(v72.f_0());
  for (const auto& v73 : v66.f_8()) {
    ReceiveFloat(v73.f_0());
  }
  const Message3::M1::M3::M21::M27::M34::M48::M58& v74 = v66.f_10();
  ReceiveInt32(v74.f_0());
  const Message3::M1::M3::M21::M27::M34::M48::M58::M62& v75 = v74.f_1();
  for (const auto& v76 : v75.f_1()) {
    ReceiveInt32(v76.f_0());
  }
  ReceiveInt32(v75.f_0());
  ReceiveInt32(v65.f_0());
  ReceiveFloat(v60.f_0());
  ReceiveInt32(v42.f_0());
  ReceiveBool(v42.f_1());
  ReceiveInt64((*message).f_1());
  ReceiveString((*message).f_0());
}

inline void Message3_Get_2(Message3* message) {
  ReceiveBool((*message).f_2());
  const Message3::M1& v0 = (*message).f_7();
  ReceiveBool(v0.f_1());
  const Message3::M1::M3& v1 = v0.f_3();
  const Message3::M1::M3::M21& v2 = v1.f_3();
  for (const auto& v3 : v2.f_3()) {
    ReceiveCord(v3.f_3());
    ReceiveInt64(v3.f_2());
    ReceiveString(v3.f_1());
    ReceiveInt32(v3.f_0());
    const Message3::M1::M3::M21::M32::M42& v4 = v3.f_7();
    ReceiveDouble(v4.f_0());
  }
  ReceiveFloat(v2.f_0());
  const Message3::M1::M3::M21::M27& v5 = v2.f_1();
  const Message3::M1::M3::M21::M27::M34& v6 = v5.f_4();
  const Message3::M1::M3::M21::M27::M34::M48& v7 = v6.f_1();
  for (const auto& v8 : v7.f_5()) {
    const Message3::M1::M3::M21::M27::M34::M48::M50::M61& v9 = v8.f_1();
    ReceiveUint64(v9.f_0());
    ReceiveFloat(v8.f_0());
    for (const auto& v10 : v8.f_2()) {
      ReceiveString(v10.f_3());
      ReceiveDouble(v10.f_13());
      ReceiveFloat(v10.f_4());
      ReceiveString(v10.f_7());
      ReceiveUint64(v10.f_2());
      ReceiveBool(v10.f_10());
      ReceiveString(v10.f_14());
      for (const auto& v11 : v10.f_23()) {
        ReceiveUint32(v11.f_0());
      }
      ReceiveInt32(v10.f_15());
      ReceiveInt64(v10.f_6());
      ReceiveUint64(v10.f_9());
      ReceiveFloat(v10.f_5());
      ReceiveUint32(v10.f_1());
      ReceiveString(v10.f_8());
      ReceiveString(v10.f_12());
      for (const auto& v12 : v10.f_24()) {
        ReceiveInt32(v12.f_0());
      }
      ReceiveDouble(v10.f_11());
      ReceiveString(v10.f_0());
    }
  }
  const Message3::M1::M3::M21::M27::M34::M48::M54& v13 = v7.f_9();
  ReceiveInt32(v13.f_1());
  ReceiveBool(v13.f_0());
  for (const auto& v14 : v7.f_8()) {
    ReceiveFloat(v14.f_0());
  }
  const Message3::M1::M3::M21::M27::M34::M48::M58& v15 = v7.f_10();
  ReceiveInt32(v15.f_0());
  const Message3::M1::M3::M21::M27::M34::M48::M58::M62& v16 = v15.f_1();
  ReceiveInt32(v16.f_0());
  for (const auto& v17 : v16.f_1()) {
    ReceiveInt32(v17.f_0());
  }
  ReceiveInt32(v7.f_1());
  ReceiveUint32(v7.f_0());
  ReceiveInt32(v7.f_2());
  ReceiveInt32(v6.f_0());
  ReceiveUint32(v5.f_0());
  const Message3::M1::M3::M21::M27::M36& v18 = v5.f_6();
  ReceiveInt64(v18.f_0());
  ReceiveInt32(v1.f_0());
  const Message3::M1::M3::M19& v19 = v1.f_1();
  ReceiveInt64(v19.f_0());
  const Message3::M1::M6& v20 = v0.f_4();
  for (const auto& v21 : v20.f_6()) {
    const Message3::M1::M6::M18::M30& v22 = v21.f_1();
    const Message3::M1::M6::M18::M30::M33& v23 = v22.f_1();
    const Message3::M1::M6::M18::M30::M33::M49& v24 = v23.f_3();
    ReceiveDouble(v24.f_0());
    for (const auto& v25 : v24.f_5()) {
      ReceiveInt32(v25.f_0());
      ReceiveInt64(v25.f_3());
      ReceiveInt64(v25.f_1());
      ReceiveInt32(v25.f_2());
    }
    for (const auto& v26 : v24.f_3()) {
      ReceiveInt32(v26.f_0());
      for (const auto& v27 : v26.f_1()) {
        ReceiveInt32(v27.f_0());
      }
    }
    for (const auto& v28 : v24.f_1()) {
      ReceiveInt32(v28.f_0());
    }
    ReceiveFloat(v23.f_0());
    ReceiveInt32(v22.f_0());
    ReceiveFloat(v21.f_0());
  }
  ReceiveInt32(v20.f_1());
  ReceiveInt32(v20.f_2());
  const Message3::M1::M6::M23& v29 = v20.f_10();
  ReceiveString(v29.f_0());
  ReceiveString(v20.f_0());
  const Message3::M1::M6::M14& v30 = v20.f_5();
  ReceiveFloat(v30.f_0());
  const Message3::M1::M6::M14::M29& v31 = v30.f_3();
  ReceiveString(v31.f_0());
  const Message3::M1::M6::M14::M29::M35& v32 = v31.f_1();
  ReceiveInt64(v32.f_0());
  const Message3::M1::M6::M14::M29::M41& v33 = v31.f_2();
  ReceiveUint64(v33.f_2());
  ReceiveBool(v33.f_1());
  ReceiveUint64(v33.f_0());
  ReceiveInt32(v0.f_0());
  const Message3::M1::M9& v34 = v0.f_6();
  ReceiveUint32(v34.f_0());
  ReceiveString((*message).f_0());
  ReceiveInt64((*message).f_1());
  for (const auto& v35 : (*message).f_8()) {
    const Message3::M2::M11& v36 = v35.f_23();
    const Message3::M2::M11::M25& v37 = v36.f_5();
    ReceiveInt32(v37.f_13());
    ReceiveInt64(v37.f_5());
    ReceiveInt64(v37.f_3());
    ReceiveString(v37.f_20());
    ReceiveInt64(v37.f_6());
    ReceiveString(v37.f_15());
    ReceiveString(v37.f_24());
    ReceiveInt32(v37.f_7());
    ReceiveInt32(v37.f_4());
    ReceiveFloat(v37.f_17());
    ReceiveBool(v37.f_0());
    ReceiveString(v37.f_23());
    ReceiveString(v37.f_22());
    ReceiveInt32(v37.f_10());
    ReceiveInt32(v37.f_8());
    ReceiveInt64(v37.f_2());
    ReceiveInt64(v37.f_14());
    ReceiveUint32(v37.f_16());
    ReceiveInt32(v37.f_19());
    ReceiveInt32(v37.f_25());
    ReceiveUint32(v37.f_21());
    ReceiveInt32(v37.f_11());
    ReceiveInt32(v37.f_9());
    ReceiveInt64(v37.f_1());
    ReceiveInt32(v37.f_18());
    ReceiveBool(v37.f_12());
    const Message3::M2::M11::M17& v38 = v36.f_3();
    ReceiveString(v38.f_0());
    ReceiveString(v36.f_0());
    const Message3::M2::M11::M16& v39 = v36.f_1();
    ReceiveUint32(v39.f_0());
    ReceiveInt32(v35.f_0());
    ReceiveInt32(v35.f_10());
    for (const auto& v40 : v35.f_19()) {
      for (const auto& v41 : v40.f_2()) {
        ReceiveBool(v41.f_0());
        const Message3::M2::M8::M22::M26& v42 = v41.f_1();
        const Message3::M2::M8::M22::M26::M45& v43 = v42.f_12();
        ReceiveInt64(v43.f_4());
        ReceiveInt32(v43.f_6());
        ReceiveString(v43.f_0());
        ReceiveUint64(v43.f_2());
        ReceiveInt64(v43.f_5());
        ReceiveInt64(v43.f_3());
        ReceiveInt32(v43.f_1());
        ReceiveInt64(v43.f_7());
        ReceiveInt32(v42.f_5());
        ReceiveInt64(v42.f_2());
        const Message3::M2::M8::M22::M26::M43& v44 = v42.f_11();
        for (const auto& f : v44.f_0()) {
          ReceiveString(f);
        }
        ReceiveInt64(v42.f_3());
        ReceiveString(v42.f_6());
        ReceiveInt32(v42.f_0());
        ReceiveInt32(v42.f_1());
        ReceiveInt64(v42.f_7());
        ReceiveString(v42.f_4());
        const Message3::M2::M8::M22::M28& v45 = v41.f_2();
        ReceiveInt64(v45.f_0());
        const Message3::M2::M8::M22::M28::M40& v46 = v45.f_6();
        ReceiveInt32(v46.f_0());
        for (const auto& v47 : v45.f_4()) {
          ReceiveInt64(v47.f_0());
        }
        const Message3::M2::M8::M22::M28::M39& v48 = v45.f_5();
        ReceiveString(v48.f_0());
        const Message3::M2::M8::M22::M28::M37& v49 = v45.f_3();
        const Message3::M2::M8::M22::M28::M37::M46& v50 = v49.f_1();
        ReceiveInt32(v50.f_7());
        ReceiveString(v50.f_1());
        ReceiveUint32(v50.f_12());
        ReceiveDouble(v50.f_4());
        ReceiveBool(v50.f_6());
        ReceiveFloat(v50.f_14());
        ReceiveInt64(v50.f_9());
        for (const auto& v51 : v50.f_20()) {
          ReceiveInt32(v51.f_0());
        }
        ReceiveInt32(v50.f_13());
        ReceiveInt32(v50.f_3());
        ReceiveUint32(v50.f_10());
        ReceiveUint64(v50.f_2());
        ReceiveString(v50.f_0());
        ReceiveFloat(v50.f_8());
        ReceiveString(v50.f_5());
        for (const auto& f : v50.f_11()) {
          ReceiveString(f);
        }
        ReceiveString(v49.f_0());
        const Message3::M2::M8::M22::M28::M44& v52 = v45.f_7();
        ReceiveString(v52.f_0());
        for (const auto& v53 : v52.f_1()) {
          ReceiveInt32(v53.f_0());
          for (const auto& v54 : v53.f_1()) {
            ReceiveUint64(v54.f_0());
            for (const auto& v55 : v54.f_1()) {
              ReceiveUint64(v55.f_0());
              for (const auto& v56 : v55.f_1()) {
                for (const auto& v57 : v56.f_2()) {
                  ReceiveString(v57.f_0());
                  ReceiveFloat(v57.f_1());
                }
                for (auto f : v56.f_0()) {
                  ReceiveInt32(f);
                }
                for (const auto& v58 : v56.f_1()) {
                  const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                      M68::M71& v59 = v58.f_2();
                  ReceiveInt32(v59.f_2());
                  ReceiveInt64(v59.f_0());
                  ReceiveFloat(v59.f_1());
                  for (const auto& v60 : v58.f_1()) {
                    ReceiveString(v60.f_0());
                    const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                        M68::M70::M72& v61 = v60.f_1();
                    for (const auto& v62 : v61.f_5()) {
                      ReceiveInt64(v62.f_0());
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74& v63 = v62.f_2();
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74::M75& v64 = v63.f_1();
                      for (const auto& v65 : v64.f_1()) {
                        ReceiveString(v65.f_0());
                      }
                      for (const auto& v66 : v64.f_2()) {
                        ReceiveString(v66.f_2());
                        ReceiveString(v66.f_1());
                        ReceiveInt32(v66.f_3());
                        ReceiveInt32(v66.f_0());
                      }
                      ReceiveInt32(v64.f_0());
                      ReceiveDouble(v63.f_0());
                    }
                    ReceiveString(v61.f_0());
                  }
                  ReceiveInt32(v58.f_0());
                }
              }
            }
          }
        }
      }
      const Message3::M2::M8::M20& v67 = v40.f_1();
      ReceiveCord(v67.f_0());
      ReceiveInt32(v40.f_0());
    }
    ReceiveInt64(v35.f_3());
    const Message3::M2::M5& v68 = v35.f_17();
    const Message3::M2::M5::M12& v69 = v68.f_6();
    const Message3::M2::M5::M12::M31& v70 = v69.f_3();
    ReceiveInt32(v70.f_5());
    ReceiveDouble(v70.f_4());
    ReceiveBool(v70.f_0());
    ReceiveUint64(v70.f_1());
    ReceiveInt64(v70.f_3());
    ReceiveUint32(v70.f_6());
    ReceiveInt32(v70.f_2());
    ReceiveInt32(v69.f_0());
    ReceiveDouble(v68.f_1());
    ReceiveInt64(v68.f_0());
    ReceiveString(v68.f_2());
    ReceiveUint32(v68.f_3());
    ReceiveFloat(v35.f_9());
    ReceiveInt64(v35.f_1());
    const Message3::M2::M4& v71 = v35.f_16();
    for (auto f : v71.f_0()) {
      ReceiveInt64(f);
    }
    for (const auto& f : v35.f_7()) {
      ReceiveString(f);
    }
    ReceiveInt32(v35.f_2());
    ReceiveInt32(v35.f_4());
    ReceiveInt32(v35.f_11());
    ReceiveInt32(v35.f_6());
    const Message3::M2::M10& v72 = v35.f_20();
    for (const auto& v73 : v72.f_2()) {
      ReceiveDouble(v73.f_0());
    }
    const Message3::M2::M10::M15& v74 = v72.f_3();
    ReceiveString(v74.f_0());
    ReceiveInt64(v72.f_0());
    ReceiveInt64(v35.f_8());
    for (const auto& v75 : v35.f_18()) {
      ReceiveInt64(v75.f_0());
      ReceiveUint32(v75.f_3());
      for (const auto& v76 : v75.f_7()) {
        ReceiveUint32(v76.f_0());
      }
      ReceiveFloat(v75.f_1());
      ReceiveString(v75.f_2());
    }
    ReceiveString(v35.f_5());
  }
  ReceiveString((*message).f_3());
}

inline void Message3_Get_3(Message3* message) {
  ReceiveString((*message).f_3());
  const Message3::M1& v0 = (*message).f_7();
  const Message3::M1::M3& v1 = v0.f_3();
  const Message3::M1::M3::M21& v2 = v1.f_3();
  ReceiveFloat(v2.f_0());
  for (const auto& v3 : v2.f_3()) {
    ReceiveInt64(v3.f_2());
    const Message3::M1::M3::M21::M32::M42& v4 = v3.f_7();
    ReceiveDouble(v4.f_0());
    ReceiveString(v3.f_1());
    ReceiveInt32(v3.f_0());
    ReceiveCord(v3.f_3());
  }
  const Message3::M1::M3::M21::M27& v5 = v2.f_1();
  const Message3::M1::M3::M21::M27::M36& v6 = v5.f_6();
  ReceiveInt64(v6.f_0());
  const Message3::M1::M3::M21::M27::M34& v7 = v5.f_4();
  const Message3::M1::M3::M21::M27::M34::M48& v8 = v7.f_1();
  for (const auto& v9 : v8.f_8()) {
    ReceiveFloat(v9.f_0());
  }
  for (const auto& v10 : v8.f_5()) {
    const Message3::M1::M3::M21::M27::M34::M48::M50::M61& v11 = v10.f_1();
    ReceiveUint64(v11.f_0());
    ReceiveFloat(v10.f_0());
    for (const auto& v12 : v10.f_2()) {
      ReceiveString(v12.f_0());
      ReceiveString(v12.f_7());
      ReceiveString(v12.f_3());
      ReceiveUint64(v12.f_9());
      ReceiveString(v12.f_12());
      ReceiveString(v12.f_14());
      for (const auto& v13 : v12.f_24()) {
        ReceiveInt32(v13.f_0());
      }
      ReceiveInt64(v12.f_6());
      ReceiveInt32(v12.f_15());
      ReceiveFloat(v12.f_4());
      ReceiveUint64(v12.f_2());
      ReceiveBool(v12.f_10());
      ReceiveString(v12.f_8());
      ReceiveFloat(v12.f_5());
      ReceiveDouble(v12.f_11());
      ReceiveUint32(v12.f_1());
      ReceiveDouble(v12.f_13());
      for (const auto& v14 : v12.f_23()) {
        ReceiveUint32(v14.f_0());
      }
    }
  }
  const Message3::M1::M3::M21::M27::M34::M48::M54& v15 = v8.f_9();
  ReceiveBool(v15.f_0());
  ReceiveInt32(v15.f_1());
  ReceiveInt32(v8.f_1());
  const Message3::M1::M3::M21::M27::M34::M48::M58& v16 = v8.f_10();
  ReceiveInt32(v16.f_0());
  const Message3::M1::M3::M21::M27::M34::M48::M58::M62& v17 = v16.f_1();
  for (const auto& v18 : v17.f_1()) {
    ReceiveInt32(v18.f_0());
  }
  ReceiveInt32(v17.f_0());
  ReceiveInt32(v8.f_2());
  ReceiveUint32(v8.f_0());
  ReceiveInt32(v7.f_0());
  ReceiveUint32(v5.f_0());
  const Message3::M1::M3::M19& v19 = v1.f_1();
  ReceiveInt64(v19.f_0());
  ReceiveInt32(v1.f_0());
  ReceiveInt32(v0.f_0());
  ReceiveBool(v0.f_1());
  const Message3::M1::M6& v20 = v0.f_4();
  const Message3::M1::M6::M23& v21 = v20.f_10();
  ReceiveString(v21.f_0());
  for (const auto& v22 : v20.f_6()) {
    ReceiveFloat(v22.f_0());
    const Message3::M1::M6::M18::M30& v23 = v22.f_1();
    ReceiveInt32(v23.f_0());
    const Message3::M1::M6::M18::M30::M33& v24 = v23.f_1();
    ReceiveFloat(v24.f_0());
    const Message3::M1::M6::M18::M30::M33::M49& v25 = v24.f_3();
    ReceiveDouble(v25.f_0());
    for (const auto& v26 : v25.f_1()) {
      ReceiveInt32(v26.f_0());
    }
    for (const auto& v27 : v25.f_3()) {
      ReceiveInt32(v27.f_0());
      for (const auto& v28 : v27.f_1()) {
        ReceiveInt32(v28.f_0());
      }
    }
    for (const auto& v29 : v25.f_5()) {
      ReceiveInt64(v29.f_3());
      ReceiveInt64(v29.f_1());
      ReceiveInt32(v29.f_2());
      ReceiveInt32(v29.f_0());
    }
  }
  ReceiveInt32(v20.f_2());
  const Message3::M1::M6::M14& v30 = v20.f_5();
  ReceiveFloat(v30.f_0());
  const Message3::M1::M6::M14::M29& v31 = v30.f_3();
  ReceiveString(v31.f_0());
  const Message3::M1::M6::M14::M29::M41& v32 = v31.f_2();
  ReceiveBool(v32.f_1());
  ReceiveUint64(v32.f_0());
  ReceiveUint64(v32.f_2());
  const Message3::M1::M6::M14::M29::M35& v33 = v31.f_1();
  ReceiveInt64(v33.f_0());
  ReceiveString(v20.f_0());
  ReceiveInt32(v20.f_1());
  const Message3::M1::M9& v34 = v0.f_6();
  ReceiveUint32(v34.f_0());
  for (const auto& v35 : (*message).f_8()) {
    ReceiveInt64(v35.f_8());
    const Message3::M2::M11& v36 = v35.f_23();
    const Message3::M2::M11::M16& v37 = v36.f_1();
    ReceiveUint32(v37.f_0());
    const Message3::M2::M11::M17& v38 = v36.f_3();
    ReceiveString(v38.f_0());
    const Message3::M2::M11::M25& v39 = v36.f_5();
    ReceiveInt32(v39.f_18());
    ReceiveInt64(v39.f_5());
    ReceiveString(v39.f_23());
    ReceiveString(v39.f_24());
    ReceiveInt32(v39.f_11());
    ReceiveString(v39.f_22());
    ReceiveInt32(v39.f_4());
    ReceiveUint32(v39.f_21());
    ReceiveUint32(v39.f_16());
    ReceiveInt32(v39.f_9());
    ReceiveInt64(v39.f_3());
    ReceiveString(v39.f_20());
    ReceiveInt32(v39.f_10());
    ReceiveInt32(v39.f_13());
    ReceiveFloat(v39.f_17());
    ReceiveInt32(v39.f_7());
    ReceiveBool(v39.f_12());
    ReceiveInt64(v39.f_6());
    ReceiveString(v39.f_15());
    ReceiveInt32(v39.f_8());
    ReceiveInt32(v39.f_25());
    ReceiveBool(v39.f_0());
    ReceiveInt64(v39.f_1());
    ReceiveInt32(v39.f_19());
    ReceiveInt64(v39.f_2());
    ReceiveInt64(v39.f_14());
    ReceiveString(v36.f_0());
    ReceiveFloat(v35.f_9());
    ReceiveString(v35.f_5());
    const Message3::M2::M4& v40 = v35.f_16();
    for (auto f : v40.f_0()) {
      ReceiveInt64(f);
    }
    for (const auto& f : v35.f_7()) {
      ReceiveString(f);
    }
    const Message3::M2::M5& v41 = v35.f_17();
    ReceiveUint32(v41.f_3());
    ReceiveDouble(v41.f_1());
    ReceiveString(v41.f_2());
    ReceiveInt64(v41.f_0());
    const Message3::M2::M5::M12& v42 = v41.f_6();
    ReceiveInt32(v42.f_0());
    const Message3::M2::M5::M12::M31& v43 = v42.f_3();
    ReceiveUint64(v43.f_1());
    ReceiveInt32(v43.f_5());
    ReceiveDouble(v43.f_4());
    ReceiveInt64(v43.f_3());
    ReceiveInt32(v43.f_2());
    ReceiveBool(v43.f_0());
    ReceiveUint32(v43.f_6());
    ReceiveInt32(v35.f_11());
    ReceiveInt64(v35.f_3());
    for (const auto& v44 : v35.f_18()) {
      ReceiveString(v44.f_2());
      ReceiveUint32(v44.f_3());
      ReceiveFloat(v44.f_1());
      ReceiveInt64(v44.f_0());
      for (const auto& v45 : v44.f_7()) {
        ReceiveUint32(v45.f_0());
      }
    }
    ReceiveInt32(v35.f_6());
    ReceiveInt32(v35.f_0());
    ReceiveInt32(v35.f_10());
    ReceiveInt32(v35.f_4());
    const Message3::M2::M10& v46 = v35.f_20();
    ReceiveInt64(v46.f_0());
    const Message3::M2::M10::M15& v47 = v46.f_3();
    ReceiveString(v47.f_0());
    for (const auto& v48 : v46.f_2()) {
      ReceiveDouble(v48.f_0());
    }
    ReceiveInt32(v35.f_2());
    for (const auto& v49 : v35.f_19()) {
      const Message3::M2::M8::M20& v50 = v49.f_1();
      ReceiveCord(v50.f_0());
      for (const auto& v51 : v49.f_2()) {
        const Message3::M2::M8::M22::M26& v52 = v51.f_1();
        const Message3::M2::M8::M22::M26::M43& v53 = v52.f_11();
        for (const auto& f : v53.f_0()) {
          ReceiveString(f);
        }
        ReceiveInt64(v52.f_3());
        ReceiveInt64(v52.f_7());
        ReceiveString(v52.f_6());
        ReceiveInt32(v52.f_0());
        ReceiveInt32(v52.f_1());
        ReceiveString(v52.f_4());
        ReceiveInt32(v52.f_5());
        ReceiveInt64(v52.f_2());
        const Message3::M2::M8::M22::M26::M45& v54 = v52.f_12();
        ReceiveString(v54.f_0());
        ReceiveInt64(v54.f_4());
        ReceiveInt64(v54.f_7());
        ReceiveInt32(v54.f_6());
        ReceiveInt64(v54.f_3());
        ReceiveInt32(v54.f_1());
        ReceiveUint64(v54.f_2());
        ReceiveInt64(v54.f_5());
        const Message3::M2::M8::M22::M28& v55 = v51.f_2();
        const Message3::M2::M8::M22::M28::M40& v56 = v55.f_6();
        ReceiveInt32(v56.f_0());
        const Message3::M2::M8::M22::M28::M37& v57 = v55.f_3();
        const Message3::M2::M8::M22::M28::M37::M46& v58 = v57.f_1();
        ReceiveInt32(v58.f_7());
        for (const auto& v59 : v58.f_20()) {
          ReceiveInt32(v59.f_0());
        }
        ReceiveBool(v58.f_6());
        ReceiveFloat(v58.f_8());
        ReceiveUint32(v58.f_10());
        ReceiveString(v58.f_1());
        ReceiveInt32(v58.f_3());
        ReceiveFloat(v58.f_14());
        ReceiveUint32(v58.f_12());
        ReceiveInt64(v58.f_9());
        ReceiveDouble(v58.f_4());
        ReceiveString(v58.f_0());
        for (const auto& f : v58.f_11()) {
          ReceiveString(f);
        }
        ReceiveString(v58.f_5());
        ReceiveUint64(v58.f_2());
        ReceiveInt32(v58.f_13());
        ReceiveString(v57.f_0());
        ReceiveInt64(v55.f_0());
        const Message3::M2::M8::M22::M28::M39& v60 = v55.f_5();
        ReceiveString(v60.f_0());
        for (const auto& v61 : v55.f_4()) {
          ReceiveInt64(v61.f_0());
        }
        const Message3::M2::M8::M22::M28::M44& v62 = v55.f_7();
        for (const auto& v63 : v62.f_1()) {
          for (const auto& v64 : v63.f_1()) {
            for (const auto& v65 : v64.f_1()) {
              for (const auto& v66 : v65.f_1()) {
                for (auto f : v66.f_0()) {
                  ReceiveInt32(f);
                }
                for (const auto& v67 : v66.f_2()) {
                  ReceiveString(v67.f_0());
                  ReceiveFloat(v67.f_1());
                }
                for (const auto& v68 : v66.f_1()) {
                  ReceiveInt32(v68.f_0());
                  for (const auto& v69 : v68.f_1()) {
                    ReceiveString(v69.f_0());
                    const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                        M68::M70::M72& v70 = v69.f_1();
                    for (const auto& v71 : v70.f_5()) {
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74& v72 = v71.f_2();
                      ReceiveDouble(v72.f_0());
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74::M75& v73 = v72.f_1();
                      ReceiveInt32(v73.f_0());
                      for (const auto& v74 : v73.f_2()) {
                        ReceiveInt32(v74.f_3());
                        ReceiveString(v74.f_1());
                        ReceiveString(v74.f_2());
                        ReceiveInt32(v74.f_0());
                      }
                      for (const auto& v75 : v73.f_1()) {
                        ReceiveString(v75.f_0());
                      }
                      ReceiveInt64(v71.f_0());
                    }
                    ReceiveString(v70.f_0());
                  }
                  const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                      M68::M71& v76 = v68.f_2();
                  ReceiveInt64(v76.f_0());
                  ReceiveFloat(v76.f_1());
                  ReceiveInt32(v76.f_2());
                }
              }
              ReceiveUint64(v65.f_0());
            }
            ReceiveUint64(v64.f_0());
          }
          ReceiveInt32(v63.f_0());
        }
        ReceiveString(v62.f_0());
        ReceiveBool(v51.f_0());
      }
      ReceiveInt32(v49.f_0());
    }
    ReceiveInt64(v35.f_1());
  }
  ReceiveInt64((*message).f_1());
  ReceiveString((*message).f_0());
  ReceiveBool((*message).f_2());
}

inline void Message3_Get_4(Message3* message) {
  const Message3::M1& v0 = (*message).f_7();
  const Message3::M1::M9& v1 = v0.f_6();
  ReceiveUint32(v1.f_0());
  ReceiveInt32(v0.f_0());
  const Message3::M1::M6& v2 = v0.f_4();
  for (const auto& v3 : v2.f_6()) {
    ReceiveFloat(v3.f_0());
    const Message3::M1::M6::M18::M30& v4 = v3.f_1();
    ReceiveInt32(v4.f_0());
    const Message3::M1::M6::M18::M30::M33& v5 = v4.f_1();
    ReceiveFloat(v5.f_0());
    const Message3::M1::M6::M18::M30::M33::M49& v6 = v5.f_3();
    for (const auto& v7 : v6.f_5()) {
      ReceiveInt32(v7.f_2());
      ReceiveInt64(v7.f_1());
      ReceiveInt32(v7.f_0());
      ReceiveInt64(v7.f_3());
    }
    ReceiveDouble(v6.f_0());
    for (const auto& v8 : v6.f_3()) {
      ReceiveInt32(v8.f_0());
      for (const auto& v9 : v8.f_1()) {
        ReceiveInt32(v9.f_0());
      }
    }
    for (const auto& v10 : v6.f_1()) {
      ReceiveInt32(v10.f_0());
    }
  }
  ReceiveString(v2.f_0());
  const Message3::M1::M6::M23& v11 = v2.f_10();
  ReceiveString(v11.f_0());
  ReceiveInt32(v2.f_2());
  ReceiveInt32(v2.f_1());
  const Message3::M1::M6::M14& v12 = v2.f_5();
  const Message3::M1::M6::M14::M29& v13 = v12.f_3();
  const Message3::M1::M6::M14::M29::M35& v14 = v13.f_1();
  ReceiveInt64(v14.f_0());
  ReceiveString(v13.f_0());
  const Message3::M1::M6::M14::M29::M41& v15 = v13.f_2();
  ReceiveBool(v15.f_1());
  ReceiveUint64(v15.f_0());
  ReceiveUint64(v15.f_2());
  ReceiveFloat(v12.f_0());
  const Message3::M1::M3& v16 = v0.f_3();
  const Message3::M1::M3::M21& v17 = v16.f_3();
  for (const auto& v18 : v17.f_3()) {
    const Message3::M1::M3::M21::M32::M42& v19 = v18.f_7();
    ReceiveDouble(v19.f_0());
    ReceiveInt64(v18.f_2());
    ReceiveString(v18.f_1());
    ReceiveCord(v18.f_3());
    ReceiveInt32(v18.f_0());
  }
  ReceiveFloat(v17.f_0());
  const Message3::M1::M3::M21::M27& v20 = v17.f_1();
  const Message3::M1::M3::M21::M27::M36& v21 = v20.f_6();
  ReceiveInt64(v21.f_0());
  const Message3::M1::M3::M21::M27::M34& v22 = v20.f_4();
  const Message3::M1::M3::M21::M27::M34::M48& v23 = v22.f_1();
  ReceiveUint32(v23.f_0());
  ReceiveInt32(v23.f_1());
  for (const auto& v24 : v23.f_5()) {
    for (const auto& v25 : v24.f_2()) {
      ReceiveString(v25.f_8());
      ReceiveFloat(v25.f_4());
      ReceiveString(v25.f_14());
      ReceiveInt32(v25.f_15());
      for (const auto& v26 : v25.f_23()) {
        ReceiveUint32(v26.f_0());
      }
      ReceiveUint64(v25.f_2());
      ReceiveFloat(v25.f_5());
      ReceiveString(v25.f_12());
      ReceiveDouble(v25.f_11());
      ReceiveUint64(v25.f_9());
      ReceiveBool(v25.f_10());
      ReceiveDouble(v25.f_13());
      for (const auto& v27 : v25.f_24()) {
        ReceiveInt32(v27.f_0());
      }
      ReceiveString(v25.f_7());
      ReceiveString(v25.f_0());
      ReceiveString(v25.f_3());
      ReceiveInt64(v25.f_6());
      ReceiveUint32(v25.f_1());
    }
    ReceiveFloat(v24.f_0());
    const Message3::M1::M3::M21::M27::M34::M48::M50::M61& v28 = v24.f_1();
    ReceiveUint64(v28.f_0());
  }
  for (const auto& v29 : v23.f_8()) {
    ReceiveFloat(v29.f_0());
  }
  const Message3::M1::M3::M21::M27::M34::M48::M54& v30 = v23.f_9();
  ReceiveBool(v30.f_0());
  ReceiveInt32(v30.f_1());
  const Message3::M1::M3::M21::M27::M34::M48::M58& v31 = v23.f_10();
  const Message3::M1::M3::M21::M27::M34::M48::M58::M62& v32 = v31.f_1();
  for (const auto& v33 : v32.f_1()) {
    ReceiveInt32(v33.f_0());
  }
  ReceiveInt32(v32.f_0());
  ReceiveInt32(v31.f_0());
  ReceiveInt32(v23.f_2());
  ReceiveInt32(v22.f_0());
  ReceiveUint32(v20.f_0());
  const Message3::M1::M3::M19& v34 = v16.f_1();
  ReceiveInt64(v34.f_0());
  ReceiveInt32(v16.f_0());
  ReceiveBool(v0.f_1());
  ReceiveString((*message).f_3());
  ReceiveInt64((*message).f_1());
  ReceiveBool((*message).f_2());
  ReceiveString((*message).f_0());
  for (const auto& v35 : (*message).f_8()) {
    ReceiveFloat(v35.f_9());
    ReceiveInt64(v35.f_3());
    for (const auto& f : v35.f_7()) {
      ReceiveString(f);
    }
    const Message3::M2::M4& v36 = v35.f_16();
    for (auto f : v36.f_0()) {
      ReceiveInt64(f);
    }
    for (const auto& v37 : v35.f_19()) {
      const Message3::M2::M8::M20& v38 = v37.f_1();
      ReceiveCord(v38.f_0());
      for (const auto& v39 : v37.f_2()) {
        const Message3::M2::M8::M22::M26& v40 = v39.f_1();
        ReceiveInt32(v40.f_5());
        const Message3::M2::M8::M22::M26::M43& v41 = v40.f_11();
        for (const auto& f : v41.f_0()) {
          ReceiveString(f);
        }
        ReceiveInt32(v40.f_1());
        ReceiveInt64(v40.f_3());
        ReceiveInt64(v40.f_7());
        ReceiveInt64(v40.f_2());
        const Message3::M2::M8::M22::M26::M45& v42 = v40.f_12();
        ReceiveInt64(v42.f_3());
        ReceiveString(v42.f_0());
        ReceiveInt32(v42.f_1());
        ReceiveInt64(v42.f_4());
        ReceiveInt64(v42.f_5());
        ReceiveUint64(v42.f_2());
        ReceiveInt32(v42.f_6());
        ReceiveInt64(v42.f_7());
        ReceiveInt32(v40.f_0());
        ReceiveString(v40.f_6());
        ReceiveString(v40.f_4());
        ReceiveBool(v39.f_0());
        const Message3::M2::M8::M22::M28& v43 = v39.f_2();
        const Message3::M2::M8::M22::M28::M44& v44 = v43.f_7();
        ReceiveString(v44.f_0());
        for (const auto& v45 : v44.f_1()) {
          ReceiveInt32(v45.f_0());
          for (const auto& v46 : v45.f_1()) {
            for (const auto& v47 : v46.f_1()) {
              for (const auto& v48 : v47.f_1()) {
                for (const auto& v49 : v48.f_1()) {
                  ReceiveInt32(v49.f_0());
                  const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                      M68::M71& v50 = v49.f_2();
                  ReceiveInt32(v50.f_2());
                  ReceiveFloat(v50.f_1());
                  ReceiveInt64(v50.f_0());
                  for (const auto& v51 : v49.f_1()) {
                    const Message3::M2::M8::M22::M28::M44::M47::M53::M59::M67::
                        M68::M70::M72& v52 = v51.f_1();
                    ReceiveString(v52.f_0());
                    for (const auto& v53 : v52.f_5()) {
                      ReceiveInt64(v53.f_0());
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74& v54 = v53.f_2();
                      const Message3::M2::M8::M22::M28::M44::M47::M53::M59::
                          M67::M68::M70::M72::M73::M74::M75& v55 = v54.f_1();
                      for (const auto& v56 : v55.f_1()) {
                        ReceiveString(v56.f_0());
                      }
                      for (const auto& v57 : v55.f_2()) {
                        ReceiveString(v57.f_1());
                        ReceiveInt32(v57.f_3());
                        ReceiveInt32(v57.f_0());
                        ReceiveString(v57.f_2());
                      }
                      ReceiveInt32(v55.f_0());
                      ReceiveDouble(v54.f_0());
                    }
                    ReceiveString(v51.f_0());
                  }
                }
                for (const auto& v58 : v48.f_2()) {
                  ReceiveFloat(v58.f_1());
                  ReceiveString(v58.f_0());
                }
                for (auto f : v48.f_0()) {
                  ReceiveInt32(f);
                }
              }
              ReceiveUint64(v47.f_0());
            }
            ReceiveUint64(v46.f_0());
          }
        }
        const Message3::M2::M8::M22::M28::M39& v59 = v43.f_5();
        ReceiveString(v59.f_0());
        const Message3::M2::M8::M22::M28::M40& v60 = v43.f_6();
        ReceiveInt32(v60.f_0());
        for (const auto& v61 : v43.f_4()) {
          ReceiveInt64(v61.f_0());
        }
        const Message3::M2::M8::M22::M28::M37& v62 = v43.f_3();
        const Message3::M2::M8::M22::M28::M37::M46& v63 = v62.f_1();
        ReceiveInt32(v63.f_3());
        ReceiveString(v63.f_1());
        ReceiveFloat(v63.f_14());
        ReceiveUint32(v63.f_10());
        ReceiveBool(v63.f_6());
        ReceiveUint32(v63.f_12());
        ReceiveString(v63.f_5());
        ReceiveDouble(v63.f_4());
        ReceiveInt32(v63.f_13());
        ReceiveInt32(v63.f_7());
        for (const auto& v64 : v63.f_20()) {
          ReceiveInt32(v64.f_0());
        }
        for (const auto& f : v63.f_11()) {
          ReceiveString(f);
        }
        ReceiveUint64(v63.f_2());
        ReceiveFloat(v63.f_8());
        ReceiveString(v63.f_0());
        ReceiveInt64(v63.f_9());
        ReceiveString(v62.f_0());
        ReceiveInt64(v43.f_0());
      }
      ReceiveInt32(v37.f_0());
    }
    const Message3::M2::M10& v65 = v35.f_20();
    ReceiveInt64(v65.f_0());
    const Message3::M2::M10::M15& v66 = v65.f_3();
    ReceiveString(v66.f_0());
    for (const auto& v67 : v65.f_2()) {
      ReceiveDouble(v67.f_0());
    }
    ReceiveInt32(v35.f_11());
    for (const auto& v68 : v35.f_18()) {
      ReceiveInt64(v68.f_0());
      ReceiveFloat(v68.f_1());
      ReceiveString(v68.f_2());
      ReceiveUint32(v68.f_3());
      for (const auto& v69 : v68.f_7()) {
        ReceiveUint32(v69.f_0());
      }
    }
    ReceiveInt32(v35.f_6());
    ReceiveInt32(v35.f_0());
    ReceiveString(v35.f_5());
    ReceiveInt32(v35.f_10());
    ReceiveInt64(v35.f_8());
    ReceiveInt32(v35.f_2());
    ReceiveInt64(v35.f_1());
    const Message3::M2::M5& v70 = v35.f_17();
    ReceiveUint32(v70.f_3());
    const Message3::M2::M5::M12& v71 = v70.f_6();
    const Message3::M2::M5::M12::M31& v72 = v71.f_3();
    ReceiveBool(v72.f_0());
    ReceiveInt32(v72.f_2());
    ReceiveInt32(v72.f_5());
    ReceiveUint32(v72.f_6());
    ReceiveUint64(v72.f_1());
    ReceiveDouble(v72.f_4());
    ReceiveInt64(v72.f_3());
    ReceiveInt32(v71.f_0());
    ReceiveDouble(v70.f_1());
    ReceiveInt64(v70.f_0());
    ReceiveString(v70.f_2());
    ReceiveInt32(v35.f_4());
    const Message3::M2::M11& v73 = v35.f_23();
    const Message3::M2::M11::M25& v74 = v73.f_5();
    ReceiveString(v74.f_15());
    ReceiveInt64(v74.f_5());
    ReceiveBool(v74.f_12());
    ReceiveUint32(v74.f_16());
    ReceiveFloat(v74.f_17());
    ReceiveInt32(v74.f_19());
    ReceiveString(v74.f_23());
    ReceiveInt64(v74.f_3());
    ReceiveInt32(v74.f_10());
    ReceiveInt32(v74.f_18());
    ReceiveInt64(v74.f_6());
    ReceiveInt32(v74.f_7());
    ReceiveBool(v74.f_0());
    ReceiveUint32(v74.f_21());
    ReceiveInt64(v74.f_1());
    ReceiveInt32(v74.f_4());
    ReceiveInt64(v74.f_2());
    ReceiveInt32(v74.f_13());
    ReceiveInt32(v74.f_8());
    ReceiveInt64(v74.f_14());
    ReceiveString(v74.f_22());
    ReceiveInt32(v74.f_25());
    ReceiveInt32(v74.f_11());
    ReceiveInt32(v74.f_9());
    ReceiveString(v74.f_20());
    ReceiveString(v74.f_24());
    ReceiveString(v73.f_0());
    const Message3::M2::M11::M17& v75 = v73.f_3();
    ReceiveString(v75.f_0());
    const Message3::M2::M11::M16& v76 = v73.f_1();
    ReceiveUint32(v76.f_0());
  }
}

}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_ACCESS_MESSAGE3_H_
