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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P10/request/Message0.pb.h"

namespace fleetbench::rpc::P10::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0_0 = message->add_f_49();
  Message0::M1::M12* v1 = v0_0->mutable_f_6();
  v1->set_f_4(s->substr(0, 14));
  v1->set_f_7(0x38);
  Message0::M1::M12::M54* v2 = v1->mutable_f_19();
  v2->set_f_0(0x73);
  v1->set_f_0(0x690e82c3e2369ff2);
  Message0::M1::M12::M55* v3 = v1->mutable_f_20();
  v3->set_f_4(0x3b9559ae2f10375);
  v3->set_f_2(0x89a);
  v3->set_f_1(s->substr(0, 2));
  v3->set_f_0(0x35ee4b2);
  v1->set_f_9(0xcf4fd5128580fba);
  Message0::M1::M12::M27* v4_0 = v1->add_f_16();
  v4_0->set_f_0(0x40df8739347e5fbb);
  v4_0->set_f_1(Message0::M1::M12::M27::E6_CONST_5);
  v4_0->set_f_2(s->substr(0, 26));
  v4_0->set_f_4(0x28bcec122a452f3f);
  v4_0->set_f_3(0x714e0cfa10e0d73f);
  v1->set_f_3(s->substr(0, 1));
  Message0::M1::M12::M58* v5 = v1->mutable_f_21();
  v5->set_f_2(0.702327);
  v5->set_f_0(s->substr(0, 1));
  v5->set_f_1(0x57597817);
  v1->set_f_1(s->substr(0, 7));
  v1->set_f_8(0x9ac892e);
  v1->set_f_6(false);
  v1->set_f_5(s->substr(0, 7));
  v0_0->set_f_0(Message0::M1::E2_CONST_3);
  message->set_f_14(0x4ecad7d51c73f97d);
  Message0::M8* v6 = message->mutable_f_59();
  v6->set_f_0(false);
  Message0::M8::M22* v7 = v6->mutable_f_2();
  Message0::M8::M22::M33* v8 = v7->mutable_f_10();
  v8->set_f_0(0x13969);
  v7->set_f_1(0x17);
  Message0::M8::M22::M44* v9_0 = v7->add_f_15();
  v9_0->set_f_0(s->substr(0, 18));
  Message0::M8::M22::M44::M59* v10 = v9_0->mutable_f_6();
  Message0::M8::M22::M44::M59::E13 array_1[5] = {
      Message0::M8::M22::M44::M59::E13_CONST_1,
      Message0::M8::M22::M44::M59::E13_CONST_5,
      Message0::M8::M22::M44::M59::E13_CONST_2,
      Message0::M8::M22::M44::M59::E13_CONST_2,
      Message0::M8::M22::M44::M59::E13_CONST_2,
  };
  for (auto v : array_1) {
    v10->add_f_0(v);
  }
  v7->set_f_2(s->substr(0, 20));
  Message0::M8::M22::M39* v11 = v7->mutable_f_12();
  (void)v11;  // Suppresses clang-tidy.
  v7->set_f_3(true);
  Message0::M8::M22::M26* v12_0 = v7->add_f_7();
  v12_0->set_f_1(0x3749);
  v12_0->set_f_0(0x1b30);
  message->set_f_21(0.780879);
  message->set_f_30(0.954642);
  message->set_f_10(0x689db28e8fc242c);
  Message0::M5* v13 = message->mutable_f_53();
  (void)v13;  // Suppresses clang-tidy.
  message->add_f_18(0x53);
  message->set_f_13(0x76);
  message->set_f_27(true);
  Message0::M3* v14 = message->mutable_f_51();
  v14->set_f_2(0x2d);
  Message0::M3::M19* v15 = v14->mutable_f_9();
  v15->set_f_0(0xb417434);
  Message0::M3::M19::M31* v16_0 = v15->add_f_3();
  v16_0->set_f_0(s->substr(0, 9));
  Message0::M3::M19::M51* v17_0 = v15->add_f_5();
  v17_0->set_f_1(0xb2a);
  v14->set_f_3(0xbe81b01);
  v14->set_f_1(s->substr(0, 8));
  Message0::M3::M13* v18 = v14->mutable_f_8();
  v18->set_f_1(0xfce5320);
  Message0::M3::M13::M25* v19 = v18->mutable_f_3();
  v19->set_f_0(0x341dc3d9ee36d297);
  v18->set_f_0(s->substr(0, 1));
  message->set_f_12(0x2f3978c7d613aef1);
  message->set_f_29(0x2a3c);
  message->set_f_9(0.283611);
  message->set_f_0(0x3297e695e0ab5534);
  message->set_f_2(0x6cdd1da9c7821713);
  Message0::M2* v20_0 = message->add_f_50();
  v20_0->set_f_9(0x2ad3);
  v20_0->set_f_12(0x747b1ccafb9c611);
  v20_0->add_f_8(s->substr(0, 1));
  v20_0->set_f_5(0x34fe5f48);
  v20_0->set_f_11(0x17b207e9350920c9);
  v20_0->set_f_3(s->substr(0, 68));
  Message0::M2::M15* v21_0 = v20_0->add_f_28();
  v21_0->set_f_0(0x27c38265067ced46);
  Message0::M2::M15::M29* v22 = v21_0->mutable_f_6();
  v22->set_f_0(0x3b);
  Message0::M2::E3 array_2[18] = {
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_3,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_3,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_1,
      Message0::M2::E3_CONST_4, Message0::M2::E3_CONST_2,
      Message0::M2::E3_CONST_2, Message0::M2::E3_CONST_2,
      Message0::M2::E3_CONST_2, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_5,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_1,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_1,
  };
  for (auto v : array_2) {
    v20_0->add_f_6(v);
  }
  v20_0->set_f_7(0x69d7d9346b3c520d);
  v20_0->set_f_4(s->substr(0, 17));
  v20_0->set_f_1(s->substr(0, 36));
  v20_0->set_f_0(0x23d6fb4366b89eb9);
  v20_0->set_f_14(0xf519ee6);
  v20_0->set_f_13(s->substr(0, 6));
  Message0::M2::M23* v23 = v20_0->mutable_f_30();
  v23->set_f_5(0x5b);
  v23->set_f_13(0x3a8cef005);
  v23->set_f_22(s->substr(0, 11));
  v23->set_f_11(0x1f5b9b);
  v23->add_f_12(Message0::M2::M23::E5_CONST_5);
  v23->add_f_12(Message0::M2::M23::E5_CONST_1);
  v23->add_f_12(Message0::M2::M23::E5_CONST_4);
  v23->add_f_12(Message0::M2::M23::E5_CONST_4);
  v23->set_f_9(0x1);
  Message0::M2::M23::M24* v24 = v23->mutable_f_54();
  v24->set_f_0(0x283bfc4f);
  Message0::M2::M23::M24::M65* v25_0 = v24->add_f_3();
  Message0::M2::M23::M24::M65::M69* v26 = v25_0->mutable_f_3();
  v26->set_f_4(s->substr(0, 102));
  v26->set_f_3(0.131571);
  v26->set_f_1(0x2dcfd11);
  v26->set_f_2(0x321fcef8a210017c);
  v26->set_f_0(Message0::M2::M23::M24::M65::M69::E16_CONST_2);
  v23->set_f_15(s->substr(0, 3));
  v23->set_f_8(s->substr(0, 128));
  v23->set_f_17(s->substr(0, 17));
  v23->set_f_32(true);
  v23->set_f_0(0x378e351967f);
  v23->set_f_28(0x2c);
  v23->set_f_2(false);
  v23->set_f_20(0x599a15c0);
  v23->set_f_19(0x77);
  v23->set_f_26(s->substr(0, 84));
  v23->set_f_10(0x55153d197ea959ae);
  v23->set_f_7(0x4f6331a0854a84cc);
  v23->set_f_30(false);
  v23->set_f_3(0x7f291cc);
  v23->set_f_31(false);
  v23->set_f_4(0x23);
  v23->set_f_14(0x13c1);
  v23->set_f_23(s->substr(0, 1894));
  v23->set_f_25(s->substr(0, 31));
  Message0::M2::M23::M32* v27 = v23->mutable_f_55();
  v27->set_f_2(0x429879743a4b5aad);
  v27->set_f_1(false);
  v27->set_f_0(0xa19233d);
  v23->set_f_29(0x3097876ee3a92478);
  v23->set_f_18(0x5614cef879d97d99);
  v23->set_f_27(0x306a6172);
  v23->set_f_21(true);
  v23->set_f_1(s->substr(0, 48));
  v20_0->set_f_15(s->substr(0, 8));
  v20_0->set_f_10(0x7ede51260694703a);
  Message0::M2::M11* v28 = v20_0->mutable_f_25();
  Message0::M2::M11::M40* v29 = v28->mutable_f_5();
  v29->add_f_0(Message0::M2::M11::M40::E12_CONST_1);
  v29->add_f_0(Message0::M2::M11::M40::E12_CONST_2);
  v29->add_f_0(Message0::M2::M11::M40::E12_CONST_3);
  v29->add_f_0(Message0::M2::M11::M40::E12_CONST_1);
  v29->set_f_1(0x17ec51e);
  v28->set_f_0(0x1ef3a5d7);
  Message0::M2::M11::M38* v30 = v28->mutable_f_2();
  v30->set_f_0(0x2150bab);
  v30->set_f_1(0x3140355ffc783d30);
  message->set_f_23(0x3757483af503edb3);
  message->set_f_28(0x1);
  message->set_f_8(0xcc3cb67478d583d);
  Message0::M4* v31 = message->mutable_f_52();
  v31->set_f_0(0x6267437);
  message->set_f_19(0x41358a120dd96e64);
  message->set_f_16(0x1fe4a1d0f43c8f80);
  message->set_f_31(0x68);
  message->set_f_22(0x24);
  message->set_f_24(0x30ad438cab0541db);
  Message0::M7* v32_0 = message->add_f_56();
  Message0::M7::M21* v33 = v32_0->mutable_f_7();
  v33->set_f_0(s->substr(0, 3));
  Message0::M7::M21::M57* v34 = v33->mutable_f_4();
  v34->set_f_2(false);
  v34->set_f_3(0xc7193d4);
  v34->set_f_1(0x7e);
  v34->set_f_0(true);
  Message0::M7::M16* v35 = v32_0->mutable_f_4();
  Message0::M7::M16::M35* v36 = v35->mutable_f_3();
  v36->set_f_0(0x5d0e7900402969dd);
  Message0::M7::M16::M35::M63* v37 = v36->mutable_f_21();
  Message0::M7::M16::M35::M63::M71* v38 = v37->mutable_f_11();
  v38->set_f_0(0x1e01e975e60779bf);
  v37->set_f_4(0x3dfcc4d22313f91);
  v37->set_f_2(s->substr(0, 27));
  v37->set_f_1(0x407528812e795e85);
  v36->set_f_4(0x74ef87b);
  v36->set_f_5(0x64);
  v36->set_f_11(0x79bf24656e4c79a);
  Message0::M7::M16::M35::E11 array_3[21] = {
      Message0::M7::M16::M35::E11_CONST_4, Message0::M7::M16::M35::E11_CONST_4,
      Message0::M7::M16::M35::E11_CONST_3, Message0::M7::M16::M35::E11_CONST_4,
      Message0::M7::M16::M35::E11_CONST_3, Message0::M7::M16::M35::E11_CONST_1,
      Message0::M7::M16::M35::E11_CONST_3, Message0::M7::M16::M35::E11_CONST_3,
      Message0::M7::M16::M35::E11_CONST_4, Message0::M7::M16::M35::E11_CONST_4,
      Message0::M7::M16::M35::E11_CONST_1, Message0::M7::M16::M35::E11_CONST_2,
      Message0::M7::M16::M35::E11_CONST_5, Message0::M7::M16::M35::E11_CONST_2,
      Message0::M7::M16::M35::E11_CONST_2, Message0::M7::M16::M35::E11_CONST_2,
      Message0::M7::M16::M35::E11_CONST_4, Message0::M7::M16::M35::E11_CONST_3,
      Message0::M7::M16::M35::E11_CONST_1, Message0::M7::M16::M35::E11_CONST_1,
      Message0::M7::M16::M35::E11_CONST_1,
  };
  for (auto v : array_3) {
    v36->add_f_9(v);
  }
  v36->set_f_8(s->substr(0, 7));
  Message0::M7::M16::M35::M60* v39 = v36->mutable_f_19();
  v39->set_f_2(s->substr(0, 2789));
  v39->set_f_1(0x1201f5366a4);
  Message0::M7::M16::M35::M60::M74* v40 = v39->mutable_f_4();
  v40->set_f_26(0x2a);
  v40->set_f_10(0x63);
  v40->set_f_12(Message0::M7::M16::M35::M60::M74::E18_CONST_5);
  v40->set_f_31(0x56b323f86b9b675b);
  v40->set_f_6(0x6522c45e);
  v40->set_f_17(0x29071d48f43c8d84);
  v40->set_f_14(0xb16759674426105);
  v40->set_f_5(0x18);
  v40->set_f_2(0x1f);
  v40->set_f_27(0x2abb8ce6f658045b);
  v40->set_f_11(0x5a);
  v40->set_f_28(0x67a0bf91c00e4dc9);
  v40->set_f_16(false);
  v40->set_f_30(0.508653);
  v40->set_f_13(0x3883017d32c);
  v40->set_f_33(0x559482fcb7f92e39);
  v40->set_f_7(false);
  v40->set_f_9(0x7d9437fba2128411);
  v40->set_f_24(0x152867fe);
  v40->set_f_29(s->substr(0, 7));
  v40->set_f_34(s->substr(0, 400));
  v40->set_f_32(true);
  v40->set_f_3(0x6c2e577);
  v40->set_f_19(s->substr(0, 383));
  v40->add_f_25(Message0::M7::M16::M35::M60::M74::E19_CONST_3);
  v40->set_f_22(0x42301a731891ac58);
  v40->set_f_20(0x1e9412a51a872d91);
  v40->set_f_21(0x69);
  v40->set_f_15(0x1a7ad060);
  v40->set_f_8(0.468819);
  v39->set_f_0(0x2f);
  v36->set_f_10(true);
  v36->set_f_2(Message0::M7::M16::M35::E8_CONST_2);
  v36->add_f_1(Message0::M7::M16::M35::E7_CONST_2);
  v36->add_f_3(Message0::M7::M16::M35::E9_CONST_2);
  Message0::M7::M16::M34* v41 = v35->mutable_f_2();
  v41->set_f_0(0x1d);
  Message0::M7::M16::M34::M66* v42 = v41->mutable_f_3();
  v42->set_f_0(0xbec27d1ce9);
  Message0::M7::M16::M34::M66::M73* v43 = v42->mutable_f_3();
  v43->set_f_1(0x8073f6a);
  Message0::M7::M16::M34::M66::M73::M76* v44 = v43->mutable_f_7();
  Message0::M7::M16::M34::M66::M73::M76::E20 array_4[14] = {
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_2,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_4,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_1,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_2,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_1,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_4,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
  };
  for (auto v : array_4) {
    v44->add_f_0(v);
  }
  v43->set_f_0(Message0::M7::M16::M34::M66::M73::E17_CONST_3);
  Message0::M7::M16::M34::M66::M73::M75* v45 = v43->mutable_f_5();
  v45->set_f_1(s->substr(0, 1));
  v45->set_f_2(s->substr(0, 2));
  v45->set_f_0(s->substr(0, 11));
  Message0::M7::M16::M53* v46 = v35->mutable_f_5();
  v46->set_f_0(0.828487);
  Message0::M7::M16::M45* v47 = v35->mutable_f_4();
  v47->set_f_0(s->substr(0, 39));
  Message0::M7::M16::M45::M64* v48 = v47->mutable_f_5();
  v48->add_f_0(0x7c);
  v48->set_f_3(0.732132);
  v48->set_f_1(0x2a544877);
  v48->set_f_4(0x79d879a);
  v48->set_f_5(0x79af394e466a1aea);
  v48->set_f_2(0x7b8f08a3);
  v32_0->set_f_0(0x19f);
  Message0::M7::M17* v49 = v32_0->mutable_f_5();
  Message0::M7::M17::M46* v50_0 = v49->add_f_5();
  v50_0->set_f_4(0x5d469385227300ab);
  v50_0->set_f_0(s->substr(0, 86));
  v50_0->set_f_8(0x27);
  v50_0->set_f_2(0xda27771);
  v50_0->set_f_1(0x74388369237764be);
  v50_0->set_f_6(0x60);
  Message0::M7::M17::M48* v51 = v49->mutable_f_7();
  v51->add_f_0(s->substr(0, 8));
  v49->set_f_0(0x1ff8d9);
  Message0::M7::M9* v52 = v32_0->mutable_f_2();
  Message0::M7::M9::M49* v53 = v52->mutable_f_5();
  v53->set_f_0(0x34b2d64aa2cd5e05);
  Message0::M7::M9::M30* v54_0 = v52->add_f_2();
  Message0::M7::M9::M30::M67* v55 = v54_0->mutable_f_4();
  v55->set_f_31(0xe0cad9);
  v55->set_f_28(Message0::M7::M9::M30::M67::E15_CONST_4);
  v55->set_f_13(0xb73e51a);
  v55->set_f_15(s->substr(0, 7));
  v55->set_f_20(s->substr(0, 60));
  v55->set_f_24(s->substr(0, 136));
  v55->set_f_6(0x42dc03725cf50b02);
  v55->set_f_27(0x3d);
  v55->add_f_12(0x76);
  v55->set_f_1(0x600b1666fe497aa4);
  v55->set_f_7(0x16ae17);
  v55->set_f_32(s->substr(0, 32));
  v55->set_f_2(0x5b30d689c4fec82b);
  v55->set_f_33(0xe13257e);
  v55->set_f_29(0xf50a241ca6de47a);
  v55->set_f_5(0x11a1);
  v55->set_f_34(0x40);
  v55->set_f_3(0xeafd634);
  v55->set_f_14(0x1e5a5d);
  v55->set_f_11(s->substr(0, 32));
  v55->set_f_30(0x19d294aa55d90965);
  v55->set_f_17(0x6da0d2ccf7792a7f);
  v55->set_f_8(s->substr(0, 3));
  v55->set_f_4(0.326371);
  v55->set_f_9(0xd99390a2ba384c2);
  v55->set_f_25(0x3c773ed30df8e78b);
  v55->set_f_19(0x251d);
  v55->set_f_21(true);
  v55->set_f_22(0x61881b82);
  v55->add_f_26(Message0::M7::M9::M30::M67::E14_CONST_2);
  v54_0->set_f_0(s->substr(0, 1009));
  message->set_f_15(0x63);
  message->set_f_3(0x35e7d2ec1a24bc5a);
  message->set_f_6(s->substr(0, 11));
  Message0::M6* v56 = message->mutable_f_54();
  Message0::M6::M18* v57 = v56->mutable_f_8();
  v57->set_f_0(0.101821);
  v56->set_f_1(0x2b00f9f8a2956cc5);
  v56->set_f_2(0xca86f05);
  v56->set_f_4(0x3e);
  Message0::M6::M20* v58_0 = v56->add_f_10();
  Message0::M6::M20::M43* v59 = v58_0->mutable_f_3();
  v59->set_f_2(s->substr(0, 15));
  v59->set_f_1(0x2637);
  v58_0->set_f_0(s->substr(0, 35));
  Message0::M6::M20::M28* v60_0 = v58_0->add_f_2();
  v60_0->set_f_0(0x8329f);
  Message0::M6::M20::M47* v61 = v58_0->mutable_f_6();
  v61->set_f_0(0x1f);
  v56->set_f_0(0x320);
  Message0::E1 array_5[22] = {
      Message0::E1_CONST_4, Message0::E1_CONST_2, Message0::E1_CONST_5,
      Message0::E1_CONST_4, Message0::E1_CONST_5, Message0::E1_CONST_2,
      Message0::E1_CONST_4, Message0::E1_CONST_1, Message0::E1_CONST_5,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_4,
      Message0::E1_CONST_4, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_1, Message0::E1_CONST_5, Message0::E1_CONST_2,
      Message0::E1_CONST_5, Message0::E1_CONST_2, Message0::E1_CONST_4,
      Message0::E1_CONST_3,
  };
  for (auto v : array_5) {
    message->add_f_26(v);
  }
  message->set_f_25(0x6cd994d8545b7a4d);
  message->set_f_17(s->substr(0, 12));
  message->set_f_20(0x707bf2e620db0b83);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_50();
  v0_0->set_f_9(0x55f023f466bf);
  v0_0->set_f_1(s->substr(0, 131));
  Message0::M2::M23* v1 = v0_0->mutable_f_30();
  v1->set_f_33(0x461d41);
  v1->set_f_24(0x7e);
  v1->set_f_31(true);
  v1->set_f_25(s->substr(0, 8));
  v1->set_f_10(0x5c5853ac539b07bf);
  v1->set_f_5(0x6ce6593);
  v1->set_f_0(0x1b45);
  Message0::M2::M23::M32* v2 = v1->mutable_f_55();
  v2->set_f_4(s->substr(0, 27));
  v2->set_f_3(s->substr(0, 16));
  v2->set_f_1(true);
  v2->set_f_2(0x61aa5d712a5580cf);
  v2->set_f_0(0x72);
  v1->set_f_29(0x57929cc3de122459);
  v1->set_f_32(false);
  v1->set_f_11(0x1a777b);
  v1->set_f_27(0x5dfb087);
  v1->set_f_16(0x71ff390086689445);
  v1->set_f_19(0xe69);
  v1->set_f_3(0x73);
  v1->set_f_1(s->substr(0, 7));
  Message0::M2::M23::M24* v3 = v1->mutable_f_54();
  v3->set_f_0(0x44c47dcf);
  Message0::M2::M23::M24::M65* v4_0 = v3->add_f_3();
  Message0::M2::M23::M24::M65::M69* v5 = v4_0->mutable_f_3();
  v5->set_f_3(0.428464);
  v5->set_f_1(0x865264d);
  v5->set_f_0(Message0::M2::M23::M24::M65::M69::E16_CONST_3);
  v4_0->set_f_0(0x7d);
  v1->set_f_13(0x44);
  v1->set_f_21(true);
  v1->set_f_15(s->substr(0, 7));
  v1->set_f_18(0x1c4c63548e12b8f8);
  v1->set_f_26(s->substr(0, 24));
  v1->set_f_2(true);
  v1->set_f_9(0x17);
  v1->set_f_6(0x65ed769efd2344cb);
  v1->set_f_17(s->substr(0, 7));
  v1->set_f_14(0xdca534f);
  v1->set_f_28(0xeafbd8);
  v1->set_f_30(true);
  Message0::M2::M23::E5 array_0[10] = {
      Message0::M2::M23::E5_CONST_4, Message0::M2::M23::E5_CONST_1,
      Message0::M2::M23::E5_CONST_4, Message0::M2::M23::E5_CONST_3,
      Message0::M2::M23::E5_CONST_2, Message0::M2::M23::E5_CONST_1,
      Message0::M2::M23::E5_CONST_3, Message0::M2::M23::E5_CONST_2,
      Message0::M2::M23::E5_CONST_4, Message0::M2::M23::E5_CONST_1,
  };
  for (auto v : array_0) {
    v1->add_f_12(v);
  }
  v1->set_f_8(s->substr(0, 4));
  v0_0->add_f_8(s->substr(0, 8));
  v0_0->set_f_15(s->substr(0, 3));
  v0_0->set_f_7(0x181eb44975ae31d2);
  v0_0->add_f_6(Message0::M2::E3_CONST_5);
  v0_0->set_f_2(false);
  v0_0->set_f_4(s->substr(0, 15));
  v0_0->set_f_3(s->substr(0, 32));
  v0_0->set_f_12(0x53032dc0883a8902);
  Message0::M2::M11* v6 = v0_0->mutable_f_25();
  v6->set_f_0(0x7625f70c);
  Message0::M2::M11::M38* v7 = v6->mutable_f_2();
  v7->set_f_1(0x6b1385441f40a837);
  v7->set_f_0(0x50);
  Message0::M2::M11::M40* v8 = v6->mutable_f_5();
  Message0::M2::M11::M40::E12 array_1[21] = {
      Message0::M2::M11::M40::E12_CONST_2, Message0::M2::M11::M40::E12_CONST_2,
      Message0::M2::M11::M40::E12_CONST_3, Message0::M2::M11::M40::E12_CONST_4,
      Message0::M2::M11::M40::E12_CONST_4, Message0::M2::M11::M40::E12_CONST_5,
      Message0::M2::M11::M40::E12_CONST_2, Message0::M2::M11::M40::E12_CONST_5,
      Message0::M2::M11::M40::E12_CONST_4, Message0::M2::M11::M40::E12_CONST_3,
      Message0::M2::M11::M40::E12_CONST_4, Message0::M2::M11::M40::E12_CONST_4,
      Message0::M2::M11::M40::E12_CONST_1, Message0::M2::M11::M40::E12_CONST_2,
      Message0::M2::M11::M40::E12_CONST_2, Message0::M2::M11::M40::E12_CONST_4,
      Message0::M2::M11::M40::E12_CONST_2, Message0::M2::M11::M40::E12_CONST_4,
      Message0::M2::M11::M40::E12_CONST_1, Message0::M2::M11::M40::E12_CONST_5,
      Message0::M2::M11::M40::E12_CONST_1,
  };
  for (auto v : array_1) {
    v8->add_f_0(v);
  }
  v8->set_f_1(0x22);
  Message0::M2::M11::M50* v9 = v6->mutable_f_7();
  v9->set_f_2(0x6cebdc9020413e84);
  v9->set_f_0(0x23ba);
  v9->set_f_1(0x5974a93c2216f2bf);
  v0_0->set_f_0(0x69ef9d39a2191810);
  v0_0->set_f_14(0x22abbbe);
  v0_0->set_f_5(0x675c0ab8);
  v0_0->set_f_10(0x2a97ce51d92d4f4c);
  message->set_f_11(s->substr(0, 22));
  message->set_f_16(0x707c69ad28a6d7d9);
  message->set_f_6(s->substr(0, 8));
  message->set_f_27(true);
  Message0::M5* v10 = message->mutable_f_53();
  v10->set_f_0(0xbf08c20);
  Message0::M5::M14* v11 = v10->mutable_f_3();
  v11->set_f_0(0x74);
  Message0::M5::M14::M52* v12_0 = v11->add_f_5();
  v12_0->set_f_0(s->substr(0, 101));
  v11->set_f_2(s->substr(0, 20));
  message->add_f_18(0x2f);
  message->set_f_29(0x7d);
  message->set_f_24(0x511d0509d451f99b);
  message->set_f_30(0.426253);
  message->set_f_15(0x77);
  message->set_f_12(0x27f5fbbc24028744);
  message->set_f_4(false);
  message->set_f_28(0x42);
  message->set_f_9(0.930736);
  message->set_f_2(0x2fdbe5df33d74538);
  message->set_f_3(0x4a4cdfb8c29cba04);
  Message0::M3* v13 = message->mutable_f_51();
  Message0::M3::M19* v14 = v13->mutable_f_9();
  Message0::M3::M19::M51* v15_0 = v14->add_f_5();
  v15_0->set_f_0(0x2fc5);
  Message0::M3::M19::M31* v16_0 = v14->add_f_3();
  v16_0->set_f_0(s->substr(0, 7));
  v14->set_f_0(0x71ba1);
  v13->set_f_4(false);
  v13->set_f_2(0x5c);
  v13->set_f_0(0xa2ddf12);
  Message0::M3::M13* v17 = v13->mutable_f_8();
  Message0::M3::M13::M25* v18 = v17->mutable_f_3();
  v18->set_f_0(0x7454fbd50e939b5);
  v17->set_f_1(0xd731488);
  v13->set_f_1(s->substr(0, 3));
  message->add_f_26(Message0::E1_CONST_4);
  message->set_f_23(0x512a88b844e69138);
  message->set_f_22(0x7b);
  message->set_f_13(0x5b63253);
  message->set_f_8(0x4fcd77c862e69781);
  Message0::M4* v19 = message->mutable_f_52();
  v19->set_f_0(0x26885);
  Message0::M8* v20 = message->mutable_f_59();
  v20->set_f_0(false);
  Message0::M8::M22* v21 = v20->mutable_f_2();
  v21->set_f_0(0x48b3ee085d2cc7c2);
  v21->set_f_3(true);
  Message0::M8::M22::M39* v22 = v21->mutable_f_12();
  v22->set_f_0(s->substr(0, 8));
  Message0::M8::M22::M42* v23 = v21->mutable_f_13();
  v23->set_f_0(0x1b);
  Message0::M8::M22::M44* v24_0 = v21->add_f_15();
  v24_0->set_f_0(s->substr(0, 14));
  Message0::M8::M22::M33* v25 = v21->mutable_f_10();
  v25->set_f_1(0x33fb9258d0a3a7f2);
  v21->set_f_2(s->substr(0, 503));
  Message0::M8::M22::M26* v26_0 = v21->add_f_7();
  v26_0->set_f_0(0x18);
  v26_0->set_f_1(0xb15b59b);
  Message0::M7* v27_0 = message->add_f_56();
  Message0::M7::M9* v28 = v27_0->mutable_f_2();
  Message0::M7::M9::M30* v29_0 = v28->add_f_2();
  v29_0->set_f_0(s->substr(0, 9));
  Message0::M7::M9::M49* v30 = v28->mutable_f_5();
  (void)v30;  // Suppresses clang-tidy.
  v28->set_f_0(0x25);
  Message0::M7::M21* v31 = v27_0->mutable_f_7();
  v31->set_f_0(s->substr(0, 1));
  Message0::M7::M21::M57* v32 = v31->mutable_f_4();
  v32->set_f_2(false);
  v32->set_f_3(0xe177f0d);
  v32->set_f_1(0xdeadd);
  Message0::M7::M17* v33 = v27_0->mutable_f_5();
  v33->set_f_0(0x71);
  Message0::M7::M17::M56* v34 = v33->mutable_f_8();
  v34->set_f_0(0x4e9cb000e29c0161);
  Message0::M7::M17::M46* v35_0 = v33->add_f_5();
  v35_0->set_f_2(0x1b39e5e1);
  v35_0->set_f_4(0x3df377475fdd7656);
  v35_0->set_f_1(0x8688bda32c110d7);
  v35_0->set_f_8(0xc7403);
  v35_0->set_f_5(true);
  v35_0->set_f_7(0x1d);
  v35_0->set_f_3(0x157d81869704da27);
  v35_0->set_f_0(s->substr(0, 5));
  v35_0->set_f_6(0xb);
  Message0::M7::M17::M48* v36 = v33->mutable_f_7();
  v36->add_f_0(s->substr(0, 5));
  v27_0->set_f_0(0xdf05f0f);
  message->set_f_0(0x17368a6f4b43b2e);
  message->set_f_5(0x56686bb49aeee602);
  message->set_f_17(s->substr(0, 11));
  message->set_f_20(0x17ae3d931b862633);
  Message0::M1* v37_0 = message->add_f_49();
  Message0::M1::M10* v38 = v37_0->mutable_f_4();
  v38->set_f_0(0x39);
  v38->add_f_4(Message0::M1::M10::E4_CONST_5);
  v38->set_f_2(s->substr(0, 1400));
  v38->set_f_1(0x347ee012c80619ed);
  v38->set_f_3(s->substr(0, 8));
  Message0::M1::M12* v39 = v37_0->mutable_f_6();
  v39->set_f_2(0x420ce709);
  Message0::M1::M12::M54* v40 = v39->mutable_f_19();
  v40->set_f_0(0x70);
  Message0::M1::M12::M27* v41_0 = v39->add_f_16();
  v41_0->set_f_2(s->substr(0, 14));
  v41_0->set_f_1(Message0::M1::M12::M27::E6_CONST_2);
  v41_0->set_f_3(0x4f178d75e05fa4c);
  v41_0->set_f_0(0x7e9d7b1903b6f6e6);
  v41_0->set_f_4(0x79cdee35bbf88ece);
  Message0::M1::M12::M27::M61* v42 = v41_0->mutable_f_8();
  Message0::M1::M12::M27::M61::M72* v43 = v42->mutable_f_3();
  v43->set_f_0(true);
  v42->set_f_0(s->substr(0, 8));
  Message0::M1::M12::M27::M61::M70* v44 = v42->mutable_f_2();
  Message0::M1::M12::M27::M61::M70::M78* v45 = v44->mutable_f_4();
  v45->set_f_0(0x73);
  v44->set_f_0(0.943151);
  v39->set_f_1(s->substr(0, 27));
  v39->set_f_3(s->substr(0, 12));
  v39->set_f_5(s->substr(0, 20));
  Message0::M1::M12::M55* v46 = v39->mutable_f_20();
  v46->set_f_1(s->substr(0, 8));
  v46->set_f_2(0x414dd95);
  v46->set_f_0(0x5c216f9);
  Message0::M1::M12::M41* v47 = v39->mutable_f_17();
  v47->set_f_0(0x88a);
  v39->set_f_0(0xe9c0a1e9d3a569f);
  v39->set_f_9(0x5f196e72288e81ae);
  v39->set_f_7(0x4f905ac);
  v39->set_f_4(s->substr(0, 14));
  v39->set_f_6(false);
  Message0::M1::M12::M58* v48 = v39->mutable_f_21();
  v48->set_f_2(0.628034);
  v48->set_f_1(0x5695232e);
  v48->set_f_0(s->substr(0, 28));
  v39->set_f_8(0xfb1d5dc);
  message->set_f_7(s->substr(0, 18));
  message->set_f_31(0x71e9012);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->add_f_26(Message0::E1_CONST_4);
  message->set_f_27(false);
  message->set_f_6(s->substr(0, 29));
  message->set_f_14(0x1f9797d3f2254a74);
  message->set_f_0(0x75127fdad49de2ef);
  Message0::M5* v0 = message->mutable_f_53();
  v0->set_f_0(0x1dafb6);
  Message0::M5::M14* v1 = v0->mutable_f_3();
  v1->set_f_0(0x8b71de1);
  v1->set_f_2(s->substr(0, 24));
  v1->set_f_1(0x61e5049);
  Message0::M5::M14::M52* v2_0 = v1->add_f_5();
  v2_0->set_f_0(s->substr(0, 59));
  message->set_f_30(0.406997);
  Message0::M2* v3_0 = message->add_f_50();
  v3_0->set_f_0(0x4f085227c7fc7de5);
  v3_0->set_f_2(false);
  v3_0->set_f_7(0x718013bcf3554f5d);
  v3_0->set_f_4(s->substr(0, 5));
  v3_0->set_f_3(s->substr(0, 38));
  v3_0->set_f_15(s->substr(0, 22));
  v3_0->set_f_10(0x5552bb657765f4d9);
  v3_0->add_f_8(s->substr(0, 6));
  v3_0->set_f_12(0x60738df6711f400c);
  Message0::M2::M11* v4 = v3_0->mutable_f_25();
  Message0::M2::M11::M50* v5 = v4->mutable_f_7();
  v5->set_f_2(0x18f23282c653075a);
  v5->set_f_0(0x586e1b2);
  v5->set_f_1(0x38cb3bd201ff1fc6);
  v4->set_f_0(0x7b42a67f);
  Message0::M2::M11::M40* v6 = v4->mutable_f_5();
  v6->set_f_1(0x2bcb877);
  Message0::M2::M11::M38* v7 = v4->mutable_f_2();
  v7->set_f_0(0x7c);
  v7->set_f_1(0x1550c5e32e50196c);
  v3_0->set_f_9(0x5962a91d0f);
  v3_0->set_f_11(0x737771d6bf8ec27c);
  v3_0->set_f_13(s->substr(0, 6));
  Message0::M2::M23* v8 = v3_0->mutable_f_30();
  v8->set_f_14(0xae2fb96);
  v8->set_f_0(0x3ab6aaaf1);
  v8->set_f_20(0x1370e637);
  v8->set_f_31(false);
  v8->set_f_15(s->substr(0, 8));
  Message0::M2::M23::M32* v9 = v8->mutable_f_55();
  v9->set_f_2(0x62e1456e7d53578d);
  v9->set_f_4(s->substr(0, 98));
  v9->set_f_1(true);
  v9->set_f_3(s->substr(0, 22));
  v8->set_f_26(s->substr(0, 10));
  v8->set_f_13(0x183808);
  v8->set_f_23(s->substr(0, 18));
  Message0::M2::M23::M24* v10 = v8->mutable_f_54();
  (void)v10;  // Suppresses clang-tidy.
  v8->set_f_7(0x350a82d02e41a645);
  v8->set_f_28(0x2d);
  v8->set_f_18(0x39321e272805735c);
  v8->set_f_27(0x700784e2);
  v8->set_f_11(0x3c);
  v8->set_f_10(0x4c1815ad8f047a5e);
  v8->add_f_12(Message0::M2::M23::E5_CONST_4);
  v8->set_f_1(s->substr(0, 25));
  v8->set_f_21(true);
  v8->set_f_5(0x886a6bd);
  v8->set_f_32(false);
  v8->set_f_6(0x2960ee823cbd7647);
  v8->set_f_30(false);
  v8->set_f_22(s->substr(0, 8));
  v8->set_f_16(0x241664f9d8dba04e);
  v8->set_f_8(s->substr(0, 32));
  v8->set_f_3(0xeff42cb);
  v8->set_f_9(0x76);
  v8->set_f_17(s->substr(0, 24));
  v3_0->add_f_6(Message0::M2::E3_CONST_1);
  message->set_f_4(false);
  message->add_f_18(0x7);
  message->set_f_15(0x7a);
  Message0::M3* v11 = message->mutable_f_51();
  v11->set_f_0(0x6f);
  v11->set_f_2(0x4d);
  Message0::M3::M13* v12 = v11->mutable_f_8();
  v12->set_f_0(s->substr(0, 18));
  v12->set_f_1(0x44);
  v11->set_f_1(s->substr(0, 5));
  Message0::M3::M19* v13 = v11->mutable_f_9();
  Message0::M3::M19::M31* v14_0 = v13->add_f_3();
  v14_0->set_f_0(s->substr(0, 15));
  v13->set_f_0(0xe21a256);
  Message0::M3::M19::M36* v15 = v13->mutable_f_4();
  v15->set_f_0(0x20);
  message->set_f_1(0.350579);
  message->set_f_23(0x347041f99cc69d7f);
  message->set_f_22(0x1b9845);
  message->set_f_10(0x70b652e1102ec397);
  message->set_f_5(0x61a8038c83e21418);
  message->set_f_28(0x51);
  message->set_f_9(0.510174);
  message->set_f_3(0x65b9276d1ca20b0);
  message->set_f_7(s->substr(0, 22));
  message->set_f_31(0xcb461e7);
  message->set_f_29(0x2236f9e);
  Message0::M6* v16 = message->mutable_f_54();
  Message0::M6::M18* v17 = v16->mutable_f_8();
  (void)v17;  // Suppresses clang-tidy.
  v16->set_f_1(0x1118a552e2af874d);
  v16->set_f_5(s->substr(0, 215));
  Message0::M6::M20* v18_0 = v16->add_f_10();
  Message0::M6::M20::M28* v19_0 = v18_0->add_f_2();
  (void)v19_0;  // Suppresses clang-tidy.
  Message0::M6::M20::M43* v20 = v18_0->mutable_f_3();
  v20->set_f_2(s->substr(0, 45));
  v20->set_f_0(0.312677);
  v20->set_f_1(0x36);
  Message0::M6::M20::M47* v21 = v18_0->mutable_f_6();
  (void)v21;  // Suppresses clang-tidy.
  v18_0->set_f_0(s->substr(0, 15));
  v16->set_f_2(0x45);
  v16->set_f_3(true);
  v16->set_f_4(0xdbd11);
  message->set_f_12(0x5684fbf5ff98df5f);
  message->set_f_17(s->substr(0, 121));
  Message0::M4* v22 = message->mutable_f_52();
  v22->set_f_0(0x61616);
  message->set_f_16(0x66f6742a4770cec0);
  message->set_f_24(0x180bdd3b35ff3c23);
  message->set_f_8(0x34207bd94d6d32e7);
  Message0::M8* v23 = message->mutable_f_59();
  Message0::M8::M22* v24 = v23->mutable_f_2();
  v24->set_f_0(0x2fa8f199cfb62f79);
  v24->set_f_1(0xd6f020d);
  Message0::M8::M22::M26* v25_0 = v24->add_f_7();
  v25_0->set_f_0(0x5bd3efb);
  v25_0->set_f_1(0x4b);
  Message0::M8::M22::M37* v26_0 = v24->add_f_11();
  v26_0->set_f_5(0xd);
  v26_0->set_f_2(0xfb2c8a67cc32064);
  v26_0->set_f_1(0x712fb3469e083e9);
  v26_0->set_f_4(0x4c831c5a884b3609);
  v26_0->set_f_3(0xa920e1a);
  v24->set_f_3(true);
  Message0::M8::M22::M39* v27 = v24->mutable_f_12();
  v27->set_f_0(s->substr(0, 54));
  Message0::M8::M22::M42* v28 = v24->mutable_f_13();
  Message0::M8::M22::M42::M62* v29 = v28->mutable_f_2();
  v29->set_f_1(0x65299c9d);
  v28->set_f_0(0x72);
  Message0::M8::M22::M44* v30_0 = v24->add_f_15();
  Message0::M8::M22::M44::M59* v31 = v30_0->mutable_f_6();
  Message0::M8::M22::M44::M59::M68* v32 = v31->mutable_f_2();
  v32->set_f_0(0x5b46cff9e77a875b);
  v31->add_f_0(Message0::M8::M22::M44::M59::E13_CONST_5);
  v30_0->set_f_0(s->substr(0, 21));
  v23->set_f_0(true);
  message->set_f_21(0.839836);
  message->set_f_2(0x1212f85261463222);
  message->set_f_19(0x75645a41af2da078);
  message->set_f_20(0x12c9e22222daf32b);
  message->set_f_11(s->substr(0, 21));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(0x135bda3f6359c0c0);
  message->set_f_25(0x43a6deb678922fab);
  message->set_f_10(0x447df635d78a05dd);
  message->set_f_2(0x743fdec55a09da48);
  Message0::M7* v0_0 = message->add_f_56();
  Message0::M7::M21* v1 = v0_0->mutable_f_7();
  v1->set_f_0(s->substr(0, 2));
  Message0::M7::M21::M57* v2 = v1->mutable_f_4();
  v2->set_f_0(true);
  v2->set_f_2(true);
  v2->set_f_1(0xa950b56);
  v2->set_f_3(0xf);
  Message0::M7::M9* v3 = v0_0->mutable_f_2();
  Message0::M7::M9::M30* v4_0 = v3->add_f_2();
  v4_0->set_f_0(s->substr(0, 345));
  Message0::M7::M9::M30::M67* v5 = v4_0->mutable_f_4();
  v5->set_f_8(s->substr(0, 17));
  v5->set_f_33(0xcd8de0c);
  v5->set_f_6(0x754c404a71334cb9);
  v5->set_f_4(0.517388);
  v5->set_f_31(0x7b);
  v5->set_f_17(0x1aa352a0b2ed02a0);
  v5->set_f_7(0xb);
  v5->set_f_25(0xc00ce7d4a19efc1);
  v5->set_f_9(0x72919b74ce36e4e1);
  v5->set_f_0(0xd8a13c0);
  v5->set_f_28(Message0::M7::M9::M30::M67::E15_CONST_1);
  v5->set_f_32(s->substr(0, 311));
  v5->set_f_1(0x2f056a114b4c1ea9);
  v5->set_f_30(0x73c47bbfbb0660b2);
  v5->set_f_21(true);
  v5->set_f_15(s->substr(0, 6));
  v5->set_f_29(0x54af6921d13e4231);
  v5->set_f_19(0x28);
  v5->set_f_10(0x1cf16fd4);
  v5->add_f_12(0x18);
  v5->set_f_16(0xb5be2ab7ce66c34);
  v5->set_f_23(s->substr(0, 4));
  v5->set_f_22(0x19742435);
  v5->set_f_18(true);
  v5->set_f_34(0x7c);
  v5->set_f_5(0x68);
  Message0::M7::M9::M30::M67::E14 array_0[17] = {
      Message0::M7::M9::M30::M67::E14_CONST_4,
      Message0::M7::M9::M30::M67::E14_CONST_3,
      Message0::M7::M9::M30::M67::E14_CONST_1,
      Message0::M7::M9::M30::M67::E14_CONST_2,
      Message0::M7::M9::M30::M67::E14_CONST_5,
      Message0::M7::M9::M30::M67::E14_CONST_2,
      Message0::M7::M9::M30::M67::E14_CONST_4,
      Message0::M7::M9::M30::M67::E14_CONST_2,
      Message0::M7::M9::M30::M67::E14_CONST_3,
      Message0::M7::M9::M30::M67::E14_CONST_4,
      Message0::M7::M9::M30::M67::E14_CONST_1,
      Message0::M7::M9::M30::M67::E14_CONST_1,
      Message0::M7::M9::M30::M67::E14_CONST_5,
      Message0::M7::M9::M30::M67::E14_CONST_4,
      Message0::M7::M9::M30::M67::E14_CONST_4,
      Message0::M7::M9::M30::M67::E14_CONST_1,
      Message0::M7::M9::M30::M67::E14_CONST_4,
  };
  for (auto v : array_0) {
    v5->add_f_26(v);
  }
  v5->set_f_14(0x1a4202b);
  Message0::M7::M9::M49* v6 = v3->mutable_f_5();
  v6->set_f_0(0x7b875b5436c193d4);
  Message0::M7::M17* v7 = v0_0->mutable_f_5();
  v7->set_f_0(0x876cc1);
  Message0::M7::M17::M56* v8 = v7->mutable_f_8();
  v8->set_f_0(0x7c10f20c23ecfd4b);
  Message0::M7::M17::M48* v9 = v7->mutable_f_7();
  v9->add_f_0(s->substr(0, 4));
  Message0::M7::M16* v10 = v0_0->mutable_f_4();
  Message0::M7::M16::M35* v11 = v10->mutable_f_3();
  v11->set_f_8(s->substr(0, 102));
  v11->add_f_1(Message0::M7::M16::M35::E7_CONST_5);
  v11->set_f_10(false);
  Message0::M7::M16::M35::E9 array_1[22] = {
      Message0::M7::M16::M35::E9_CONST_3, Message0::M7::M16::M35::E9_CONST_2,
      Message0::M7::M16::M35::E9_CONST_1, Message0::M7::M16::M35::E9_CONST_1,
      Message0::M7::M16::M35::E9_CONST_4, Message0::M7::M16::M35::E9_CONST_4,
      Message0::M7::M16::M35::E9_CONST_3, Message0::M7::M16::M35::E9_CONST_2,
      Message0::M7::M16::M35::E9_CONST_3, Message0::M7::M16::M35::E9_CONST_1,
      Message0::M7::M16::M35::E9_CONST_2, Message0::M7::M16::M35::E9_CONST_1,
      Message0::M7::M16::M35::E9_CONST_5, Message0::M7::M16::M35::E9_CONST_1,
      Message0::M7::M16::M35::E9_CONST_1, Message0::M7::M16::M35::E9_CONST_3,
      Message0::M7::M16::M35::E9_CONST_1, Message0::M7::M16::M35::E9_CONST_4,
      Message0::M7::M16::M35::E9_CONST_4, Message0::M7::M16::M35::E9_CONST_1,
      Message0::M7::M16::M35::E9_CONST_3, Message0::M7::M16::M35::E9_CONST_3,
  };
  for (auto v : array_1) {
    v11->add_f_3(v);
  }
  v11->add_f_9(Message0::M7::M16::M35::E11_CONST_2);
  Message0::M7::M16::M35::M63* v12 = v11->mutable_f_21();
  v12->set_f_3(s->substr(0, 20));
  v12->set_f_0(0x1029b83);
  v12->set_f_2(s->substr(0, 2));
  v12->set_f_4(0xb7b0e59cb35ca15);
  Message0::M7::M16::M35::M63::M71* v13 = v12->mutable_f_11();
  v13->set_f_0(0x4ac1395a74bd5b77);
  v12->set_f_1(0xfce157cb70ca99d);
  Message0::M7::M16::M35::E10 array_2[21] = {
      Message0::M7::M16::M35::E10_CONST_2, Message0::M7::M16::M35::E10_CONST_5,
      Message0::M7::M16::M35::E10_CONST_1, Message0::M7::M16::M35::E10_CONST_3,
      Message0::M7::M16::M35::E10_CONST_1, Message0::M7::M16::M35::E10_CONST_2,
      Message0::M7::M16::M35::E10_CONST_2, Message0::M7::M16::M35::E10_CONST_4,
      Message0::M7::M16::M35::E10_CONST_2, Message0::M7::M16::M35::E10_CONST_1,
      Message0::M7::M16::M35::E10_CONST_5, Message0::M7::M16::M35::E10_CONST_3,
      Message0::M7::M16::M35::E10_CONST_5, Message0::M7::M16::M35::E10_CONST_2,
      Message0::M7::M16::M35::E10_CONST_2, Message0::M7::M16::M35::E10_CONST_2,
      Message0::M7::M16::M35::E10_CONST_2, Message0::M7::M16::M35::E10_CONST_2,
      Message0::M7::M16::M35::E10_CONST_3, Message0::M7::M16::M35::E10_CONST_4,
      Message0::M7::M16::M35::E10_CONST_2,
  };
  for (auto v : array_2) {
    v11->add_f_7(v);
  }
  v11->set_f_4(0x1);
  v11->set_f_6(0xfc324c2);
  Message0::M7::M16::M35::M60* v14 = v11->mutable_f_19();
  v14->set_f_2(s->substr(0, 14));
  Message0::M7::M16::M35::M60::M74* v15 = v14->mutable_f_4();
  v15->set_f_5(0x7ea9f);
  v15->set_f_26(0x4f);
  v15->set_f_4(false);
  v15->set_f_1(0x19953f7616b2d1e);
  v15->set_f_13(0x3c1d75cb1c82);
  v15->set_f_21(0xe224b);
  v15->set_f_6(0x3db89036);
  v15->set_f_28(0x130358ca7c92a775);
  v15->set_f_31(0x5127c87e28202565);
  v15->set_f_24(0x2343f0e5);
  v15->set_f_33(0x3d2fff79e18b4b30);
  v15->set_f_10(0x3907aba);
  v15->set_f_8(0.727455);
  Message0::M7::M16::M35::M60::M74::M77* v16 = v15->mutable_f_59();
  v16->set_f_0(s->substr(0, 3));
  v16->set_f_3(0xb5498d0);
  v16->set_f_1(0x7d45da52eaf3e98d);
  v15->set_f_27(0x6da76dba311c6c90);
  v15->set_f_20(0x160f2bcce7e76ec3);
  v15->set_f_18(0x4fad10f3);
  v15->set_f_2(0x50);
  v15->set_f_15(0x23bacad);
  v15->set_f_17(0x3c93df7ca5d1f2ec);
  v15->set_f_9(0x2e1c89c786d64cde);
  v15->set_f_7(true);
  v15->set_f_14(0x42412f17bea9a082);
  v15->set_f_12(Message0::M7::M16::M35::M60::M74::E18_CONST_2);
  v15->set_f_23(0x7922ea8225790c0e);
  v15->set_f_30(0.266560);
  v15->set_f_0(s->substr(0, 5));
  v15->set_f_22(0x6c8a18759121a199);
  v15->add_f_25(Message0::M7::M16::M35::M60::M74::E19_CONST_1);
  v15->set_f_16(false);
  v15->set_f_3(0xe58d35a);
  v15->set_f_11(0x29);
  v14->set_f_1(0x2);
  v11->set_f_5(0x25);
  v11->set_f_0(0x486c0092208aee6);
  v11->set_f_2(Message0::M7::M16::M35::E8_CONST_1);
  v10->set_f_0(s->substr(0, 443));
  Message0::M7::M16::M34* v17 = v10->mutable_f_2();
  Message0::M7::M16::M34::M66* v18 = v17->mutable_f_3();
  Message0::M7::M16::M34::M66::M73* v19 = v18->mutable_f_3();
  Message0::M7::M16::M34::M66::M73::M75* v20 = v19->mutable_f_5();
  v20->set_f_1(s->substr(0, 5));
  v20->set_f_2(s->substr(0, 7));
  Message0::M7::M16::M34::M66::M73::M76* v21 = v19->mutable_f_7();
  Message0::M7::M16::M34::M66::M73::M76::E20 array_3[10] = {
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_4,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_4,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_4,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_3,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_1,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
      Message0::M7::M16::M34::M66::M73::M76::E20_CONST_5,
  };
  for (auto v : array_3) {
    v21->add_f_0(v);
  }
  v19->set_f_0(Message0::M7::M16::M34::M66::M73::E17_CONST_1);
  v19->set_f_1(0x34);
  v18->set_f_0(0x10);
  v17->set_f_0(0x3d);
  v0_0->set_f_0(0xf);
  message->set_f_30(0.631016);
  Message0::M1* v22_0 = message->add_f_49();
  Message0::M1::M12* v23 = v22_0->mutable_f_6();
  v23->set_f_3(s->substr(0, 362));
  v23->set_f_9(0x64e3ee009e5ac6b8);
  v23->set_f_4(s->substr(0, 18));
  Message0::M1::M12::M58* v24 = v23->mutable_f_21();
  v24->set_f_0(s->substr(0, 60));
  v24->set_f_1(0x3eeb41f);
  v24->set_f_2(0.857073);
  v23->set_f_6(true);
  v23->set_f_1(s->substr(0, 22));
  Message0::M1::M12::M41* v25 = v23->mutable_f_17();
  v25->set_f_0(0x5f);
  v23->set_f_0(0x1a852d0b5185408d);
  Message0::M1::M12::M55* v26 = v23->mutable_f_20();
  v26->set_f_3(0x782e1bfaa0ecfc9e);
  v26->set_f_0(0x1e);
  v26->set_f_4(0x4751aea8953720fe);
  v26->set_f_1(s->substr(0, 263));
  v23->set_f_2(0x1a0fea10);
  v23->set_f_8(0xc7d377b);
  Message0::M1::M12::M54* v27 = v23->mutable_f_19();
  v27->set_f_0(0x65);
  Message0::M1::M12::M27* v28_0 = v23->add_f_16();
  v28_0->set_f_1(Message0::M1::M12::M27::E6_CONST_4);
  v28_0->set_f_0(0xbf36b97959e6ea0);
  Message0::M1::M12::M27::M61* v29 = v28_0->mutable_f_8();
  v29->set_f_0(s->substr(0, 1));
  Message0::M1::M12::M27::M61::M72* v30 = v29->mutable_f_3();
  v30->set_f_0(true);
  Message0::M1::M12::M27::M61::M70* v31 = v29->mutable_f_2();
  v31->set_f_0(0.260418);
  Message0::M1::M12::M27::M61::M70::M78* v32 = v31->mutable_f_4();
  v32->set_f_0(0x5f8b2);
  v28_0->set_f_4(0x6f85e6ec7dab0ef);
  v28_0->set_f_2(s->substr(0, 18));
  v28_0->set_f_3(0x468cca87d6ae6845);
  Message0::M1::M10* v33 = v22_0->mutable_f_4();
  v33->set_f_0(0x2c);
  v33->set_f_2(s->substr(0, 25));
  v33->set_f_1(0x4ce05dcdac725a75);
  v33->set_f_3(s->substr(0, 3));
  v33->add_f_4(Message0::M1::M10::E4_CONST_5);
  v33->add_f_4(Message0::M1::M10::E4_CONST_3);
  v33->add_f_4(Message0::M1::M10::E4_CONST_5);
  v33->add_f_4(Message0::M1::M10::E4_CONST_5);
  message->set_f_3(0x63965290870eb3d);
  Message0::M4* v34 = message->mutable_f_52();
  (void)v34;  // Suppresses clang-tidy.
  message->set_f_23(0x161599b58d0040c7);
  Message0::M8* v35 = message->mutable_f_59();
  Message0::M8::M22* v36 = v35->mutable_f_2();
  v36->set_f_1(0x9);
  Message0::M8::M22::M33* v37 = v36->mutable_f_10();
  v37->set_f_1(0x6178c54248248fa5);
  v37->set_f_0(0xad12c39);
  Message0::M8::M22::M39* v38 = v36->mutable_f_12();
  v38->set_f_0(s->substr(0, 2));
  v36->set_f_3(true);
  v36->set_f_0(0x204634c52a85daaa);
  Message0::M8::M22::M42* v39 = v36->mutable_f_13();
  Message0::M8::M22::M42::M62* v40 = v39->mutable_f_2();
  v40->add_f_0(s->substr(0, 7));
  v40->set_f_1(0x62bebdf1);
  Message0::M8::M22::M37* v41_0 = v36->add_f_11();
  v41_0->set_f_4(0x4f2a7c59e4ee0cf);
  v41_0->set_f_3(0xf9fbad5);
  v41_0->set_f_1(0x34b7693a1346e70b);
  v41_0->set_f_2(0x468bf2589ed9346);
  v41_0->set_f_0(s->substr(0, 11));
  v41_0->set_f_5(0x26);
  v36->set_f_2(s->substr(0, 2));
  Message0::M8::M22::M44* v42_0 = v36->add_f_15();
  Message0::M8::M22::M44::M59* v43 = v42_0->mutable_f_6();
  Message0::M8::M22::M44::M59::M68* v44 = v43->mutable_f_2();
  v44->set_f_0(0x7846943b63183373);
  Message0::M8::M22::M44::M59::E13 array_4[5] = {
      Message0::M8::M22::M44::M59::E13_CONST_5,
      Message0::M8::M22::M44::M59::E13_CONST_1,
      Message0::M8::M22::M44::M59::E13_CONST_5,
      Message0::M8::M22::M44::M59::E13_CONST_4,
      Message0::M8::M22::M44::M59::E13_CONST_2,
  };
  for (auto v : array_4) {
    v43->add_f_0(v);
  }
  v35->set_f_0(true);
  message->set_f_11(s->substr(0, 22));
  message->set_f_20(0x499678fd657079ca);
  message->set_f_24(0x14180f2e86e8c800);
  message->set_f_15(0x130d660);
  message->set_f_28(0x37);
  message->set_f_8(0x225dccc0aa32e052);
  message->set_f_31(0x8ba);
  Message0::M5* v45 = message->mutable_f_53();
  Message0::M5::M14* v46 = v45->mutable_f_3();
  v46->set_f_1(0xfee68);
  v46->set_f_2(s->substr(0, 1));
  Message0::M5::M14::M52* v47_0 = v46->add_f_5();
  (void)v47_0;  // Suppresses clang-tidy.
  message->set_f_21(0.060828);
  Message0::M2* v48_0 = message->add_f_50();
  v48_0->set_f_7(0x48a80c140febf4cc);
  v48_0->set_f_5(0xe4f8736);
  v48_0->add_f_6(Message0::M2::E3_CONST_3);
  v48_0->set_f_15(s->substr(0, 17));
  Message0::M2::M11* v49 = v48_0->mutable_f_25();
  Message0::M2::M11::M50* v50 = v49->mutable_f_7();
  v50->set_f_2(0x1aa3e6067b004f2c);
  Message0::M2::M11::M40* v51 = v49->mutable_f_5();
  v51->set_f_1(0x7a13723);
  Message0::M2::M11::M38* v52 = v49->mutable_f_2();
  v52->set_f_0(0x4d);
  v48_0->set_f_10(0x29da186ca22f6a6b);
  v48_0->set_f_2(true);
  v48_0->set_f_14(0x4f);
  Message0::M2::M23* v53 = v48_0->mutable_f_30();
  v53->set_f_2(false);
  v53->set_f_25(s->substr(0, 14));
  v53->set_f_26(s->substr(0, 23));
  v53->set_f_22(s->substr(0, 44));
  v53->set_f_17(s->substr(0, 18));
  v53->set_f_1(s->substr(0, 7));
  v53->set_f_10(0x628794ee55d116ad);
  v53->set_f_7(0x5e06516eeccbf900);
  v53->set_f_6(0xf55f1896290fe67);
  v53->set_f_31(false);
  v53->set_f_32(false);
  v53->set_f_14(0x37);
  v53->set_f_21(false);
  v53->set_f_20(0x778a5f2c);
  v53->set_f_9(0x64);
  Message0::M2::M23::M32* v54 = v53->mutable_f_55();
  v54->set_f_4(s->substr(0, 25));
  v54->set_f_0(0x889);
  v54->set_f_1(false);
  v54->set_f_2(0x5791af4982272668);
  v53->set_f_27(0x7eda9b47);
  v53->set_f_0(0xbdde4);
  v53->set_f_16(0x35ac9a06e5cadff7);
  v53->set_f_11(0x1c);
  v53->set_f_33(0x66df124b);
  v53->set_f_3(0x10);
  v53->set_f_18(0x720082914b8f7e8);
  v53->set_f_15(s->substr(0, 4));
  v53->set_f_5(0x44a56dd);
  v53->add_f_12(Message0::M2::M23::E5_CONST_2);
  v53->set_f_13(0xda40e2d930029e);
  v53->set_f_24(0xe37bb0354970dc);
  v53->set_f_19(0xf5893);
  Message0::M2::M23::M24* v55 = v53->mutable_f_54();
  v55->set_f_0(0x1a30b755);
  Message0::M2::M23::M24::M65* v56_0 = v55->add_f_3();
  Message0::M2::M23::M24::M65::M69* v57 = v56_0->mutable_f_3();
  v57->set_f_4(s->substr(0, 2532));
  v57->set_f_0(Message0::M2::M23::M24::M65::M69::E16_CONST_2);
  v57->set_f_2(0x4fc3fff5c0cfedc3);
  v57->set_f_3(0.825243);
  v57->set_f_1(0x48);
  v53->set_f_30(false);
  v53->set_f_29(0x7c0bd80cb46ecf69);
  v48_0->set_f_13(s->substr(0, 4));
  v48_0->set_f_4(s->substr(0, 1299));
  v48_0->set_f_3(s->substr(0, 324));
  v48_0->add_f_8(s->substr(0, 5));
  v48_0->set_f_11(0x282363508a6f0014);
  v48_0->set_f_12(0x561479141ee415db);
  v48_0->set_f_0(0x5e41a2e73bdce963);
  v48_0->set_f_1(s->substr(0, 11));
  message->set_f_1(0.379087);
  Message0::E1 array_5[21] = {
      Message0::E1_CONST_1, Message0::E1_CONST_5, Message0::E1_CONST_4,
      Message0::E1_CONST_4, Message0::E1_CONST_5, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_4, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_2,
      Message0::E1_CONST_3, Message0::E1_CONST_5, Message0::E1_CONST_4,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_1,
  };
  for (auto v : array_5) {
    message->add_f_26(v);
  }
  message->set_f_9(0.073083);
  message->set_f_13(0x552707);
  message->set_f_29(0x6b);
  message->set_f_12(0x578af396031c6133);
  message->set_f_7(s->substr(0, 4));
  message->set_f_16(0xcf7365e169cb345);
  Message0::M3* v58 = message->mutable_f_51();
  v58->set_f_4(false);
  v58->set_f_1(s->substr(0, 1));
  v58->set_f_0(0xa);
  v58->set_f_2(0x27);
  Message0::M3::M13* v59 = v58->mutable_f_8();
  v59->set_f_0(s->substr(0, 26));
  v58->set_f_3(0x3378);
  message->set_f_4(false);
  message->set_f_27(true);
  message->set_f_6(s->substr(0, 4));
  message->set_f_19(0xd159555e9db17e5);
  message->set_f_14(0x7112bb6c190fa73b);
  message->set_f_5(0x27dd66f3fe54bd87);
  message->set_f_22(0x3c33e60);
}
const int kMessage0MaxProtoSetters = 4;
inline void Message0_Set(const int i, Message0* message, std::string* s) {
  CHECK(i < kMessage0MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message0_Set_1(message, s);
      break;
    case 1:
      Message0_Set_2(message, s);
      break;
    case 2:
      Message0_Set_3(message, s);
      break;
    case 3:
      Message0_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P10::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE0_H_
