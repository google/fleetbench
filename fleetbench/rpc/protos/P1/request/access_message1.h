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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message1.pb.h"

namespace fleetbench::rpc::P1::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_17(0xaeff1);
  message->set_f_24(Message1::E4_CONST_4);
  message->set_f_15(0x602cbcf);
  message->set_f_8(0x3699424);
  message->set_f_25(Message1::E5_CONST_2);
  message->set_f_27(0x2ac7fe61e6898811);
  message->set_f_5(s->substr(0, 4));
  message->set_f_26(s->substr(0, 3));
  message->set_f_1(false);
  message->set_f_13(0x11d0dd74);
  message->set_f_12(s->substr(0, 19));
  message->set_f_10(0x65c11faaa848bbe3);
  message->set_f_28(0x33e2d69204c65dcf);
  message->set_f_22(s->substr(0, 20));
  message->set_f_6(0x14be46d9319abccf);
  Message1::E2 array_1[21] = {
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_3,
      Message1::E2_CONST_1, Message1::E2_CONST_5, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_2, Message1::E2_CONST_4,
      Message1::E2_CONST_1, Message1::E2_CONST_2, Message1::E2_CONST_2,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_3,
      Message1::E2_CONST_1, Message1::E2_CONST_2, Message1::E2_CONST_2,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  Message1::M3* v0 = message->mutable_f_53();
  Message1::M3::M34* v1_0 = v0->add_f_9();
  v1_0->set_f_16(s->substr(0, 17));
  v1_0->set_f_5(0xd1cf69064fb6e26);
  v1_0->set_f_11(s->substr(0, 390));
  v1_0->set_f_7(0x19e3006d);
  v1_0->set_f_18(0x8c5c3a8);
  v1_0->set_f_0(Message1::M3::M34::E13_CONST_1);
  v1_0->set_f_19(s->substr(0, 33));
  v1_0->set_f_9(false);
  Message1::M3::M34::M45* v2_0 = v1_0->add_f_35();
  Message1::M3::M34::M45::M50* v3_0 = v2_0->add_f_2();
  v3_0->set_f_0(0x2bc53497);
  Message1::M3::M34::M45::M50::M56* v4 = v3_0->mutable_f_2();
  v4->set_f_0(0x55149ebfb0578e24);
  v2_0->set_f_0(0x2);
  v1_0->set_f_20(0x5bcfe5ea886dd8f1);
  v1_0->set_f_1(s->substr(0, 8));
  v1_0->set_f_3(0x1cef);
  v1_0->set_f_4(0x49dd9eb2462873c0);
  v1_0->set_f_2(Message1::M3::M34::E14_CONST_4);
  v1_0->set_f_8(0xaa95ee);
  v1_0->set_f_15(0x1dc31504);
  v1_0->set_f_23(s->substr(0, 7));
  v1_0->set_f_21(s->substr(0, 37));
  v1_0->set_f_13(s->substr(0, 385));
  v1_0->set_f_22(0x22a8);
  v0->set_f_4(0x29f4);
  v0->set_f_2(0xf67a9f0);
  v0->set_f_0(0x53);
  Message1::M2* v5_0 = message->add_f_51();
  Message1::M2::M25* v6 = v5_0->mutable_f_4();
  v6->set_f_3(0x57bd8df1fcec3d71);
  v6->set_f_0(s->substr(0, 7));
  v6->set_f_1(0x3f47b82d);
  v5_0->set_f_0(0x6fae05739ed044b3);
  Message1::M2::M16* v7 = v5_0->mutable_f_2();
  v7->set_f_0(0x233aed);
  message->set_f_2(0x3e);
  Message1::M8* v8_0 = message->add_f_62();
  v8_0->set_f_2(0x47);
  Message1::M8::M20* v9 = v8_0->mutable_f_7();
  v9->set_f_0(0x280f);
  v9->set_f_2(s->substr(0, 8));
  v9->set_f_1(false);
  Message1::M8::M20::M43* v10 = v9->mutable_f_5();
  v10->set_f_1(0x7582c2d4662dd827);
  v10->set_f_0(0x6dd00);
  v8_0->set_f_3(Message1::M8::E6_CONST_4);
  v8_0->set_f_1(0x22f81d6f);
  v8_0->set_f_0(0x9abd239);
  message->set_f_0(s->substr(0, 45));
  message->set_f_23(0xc93c809);
  message->set_f_4(s->substr(0, 109));
  message->set_f_7(0x408b184f);
  message->set_f_9(0x616a4f60);
  message->set_f_29(0xe157c0);
  Message1::M7* v11_0 = message->add_f_60();
  v11_0->set_f_1(0x4ad21b03ad392ff4);
  Message1::M7::M19* v12 = v11_0->mutable_f_5();
  v12->set_f_5(s->substr(0, 11));
  v12->set_f_4(0x52f9530c5fb74f19);
  v12->set_f_0(0x4ca5ed878f9f4754);
  v12->set_f_3(0x1689);
  v12->set_f_2(s->substr(0, 8));
  Message1::M7::M19::M35* v13 = v12->mutable_f_10();
  v13->set_f_3(0x72745007431f039);
  Message1::M7::M19::M35::M48* v14_0 = v13->add_f_9();
  v14_0->set_f_0(0x26fe);
  v14_0->set_f_1(s->substr(0, 17));
  v13->set_f_2(0.804234);
  v13->set_f_4(s->substr(0, 23));
  v13->set_f_0(0x637);
  v13->set_f_1(s->substr(0, 27));
  v12->add_f_1(Message1::M7::M19::E10_CONST_1);
  v11_0->set_f_0(0x3195258);
  Message1::M7::M14* v15 = v11_0->mutable_f_4();
  v15->set_f_0(s->substr(0, 20));
  message->set_f_11(s->substr(0, 7));
  message->set_f_19(Message1::E1_CONST_4);
  message->set_f_18(0x1202373a543dbd3e);
  message->set_f_14(0.547591);
  Message1::M4* v16_0 = message->add_f_55();
  Message1::M4::M18* v17 = v16_0->mutable_f_7();
  v17->set_f_3(0x2d0dd334984d496b);
  v17->set_f_2(0xa52b874);
  v17->set_f_5(0x52);
  v17->set_f_0(s->substr(0, 2));
  v17->set_f_1(0x4de6107c9071ffc3);
  v16_0->set_f_0(0x48555fcb26aa6642);
  Message1::M4::M33* v18 = v16_0->mutable_f_9();
  v18->set_f_0(0x21622f80);
  v16_0->set_f_1(true);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M7* v0_0 = message->add_f_60();
  Message1::M7::M19* v1 = v0_0->mutable_f_5();
  v1->set_f_3(0x4fbe6bd);
  v1->set_f_0(0xbff7b3c15754db8);
  Message1::M7::M19::M35* v2 = v1->mutable_f_10();
  v2->set_f_3(0x39c684d42fe5baac);
  v2->set_f_0(0x11868c);
  v2->set_f_1(s->substr(0, 1));
  Message1::M7::M19::M35::M48* v3_0 = v2->add_f_9();
  v3_0->set_f_1(s->substr(0, 178));
  v2->set_f_4(s->substr(0, 99));
  v1->add_f_1(Message1::M7::M19::E10_CONST_1);
  v0_0->set_f_0(0x72ed2700);
  Message1::M7::M14* v4 = v0_0->mutable_f_4();
  v4->set_f_0(s->substr(0, 4));
  Message1::M7::M22* v5 = v0_0->mutable_f_6();
  v5->set_f_0(0x7e70c8996d233996);
  Message1::M7::M22::M37* v6_0 = v5->add_f_5();
  v6_0->set_f_2(s->substr(0, 53));
  v6_0->set_f_0(0x503b404d);
  v6_0->add_f_3(Message1::M7::M22::M37::E16_CONST_5);
  v6_0->set_f_1(0x1fff08b24f48b681);
  Message1::M7::M22::M37::M47* v7 = v6_0->mutable_f_7();
  v7->set_f_5(0xaac90ef);
  v7->set_f_4(false);
  v7->set_f_6(0x3b36d070f1a88bb2);
  Message1::M7::M22::M37::M47::M57* v8 = v7->mutable_f_14();
  v8->set_f_1(s->substr(0, 42));
  v8->set_f_2(0.742837);
  v8->set_f_0(s->substr(0, 18));
  v7->set_f_7(0xfa2dc89);
  v7->set_f_1(0x1203f3);
  v7->set_f_2(0.392720);
  v5->set_f_1(0x3103406320689910);
  message->set_f_7(0x4fd7af30);
  message->set_f_29(0x47be04c);
  message->set_f_14(0.826467);
  Message1::M2* v9_0 = message->add_f_51();
  v9_0->set_f_0(0x267a2a9c6390bba3);
  Message1::M2::M25* v10 = v9_0->mutable_f_4();
  v10->set_f_1(0x61599dee);
  v10->set_f_3(0x2de46c94cb73b308);
  v10->set_f_0(s->substr(0, 9));
  v10->set_f_2(0x18);
  Message1::M2::M16* v11 = v9_0->mutable_f_2();
  v11->set_f_0(0xc32b10c);
  message->set_f_21(Message1::E3_CONST_2);
  Message1::M8* v12_0 = message->add_f_62();
  Message1::M8::M21* v13 = v12_0->mutable_f_8();
  v13->set_f_0(0x1a1e51);
  v12_0->set_f_0(0x5b);
  v12_0->set_f_3(Message1::M8::E6_CONST_3);
  v12_0->set_f_1(0x61f45d5b);
  v12_0->set_f_2(0x9802c88);
  message->set_f_6(0x711bc390342414ad);
  Message1::M5* v14 = message->mutable_f_58();
  Message1::M5::M26* v15_0 = v14->add_f_8();
  v15_0->set_f_0(0x1c8ab55b8ba44e4b);
  v14->set_f_2(0x121eafd4ef3d1daf);
  Message1::M5::M11* v16 = v14->mutable_f_6();
  v16->add_f_0(Message1::M5::M11::E7_CONST_3);
  v16->add_f_0(Message1::M5::M11::E7_CONST_2);
  v16->add_f_0(Message1::M5::M11::E7_CONST_2);
  v16->add_f_0(Message1::M5::M11::E7_CONST_4);
  Message1::M5::M29* v17 = v14->mutable_f_11();
  v17->set_f_0(0x7bb7765);
  Message1::M5::M23* v18 = v14->mutable_f_7();
  Message1::M5::M23::M46* v19 = v18->mutable_f_5();
  v19->set_f_1(0x4ca72d2018d957b7);
  Message1::M5::M23::M46::M49* v20_0 = v19->add_f_4();
  v20_0->set_f_0(s->substr(0, 8));
  v20_0->set_f_1(0x2e676b97ab8c9ab8);
  v19->set_f_0(0x65);
  v19->set_f_2(0x65ae4);
  v18->set_f_2(0x7ab27);
  v18->set_f_1(Message1::M5::M23::E11_CONST_3);
  v18->set_f_0(0x340d108c);
  v14->set_f_0(0x3561);
  v14->set_f_1(0xa1ce633eda4637b);
  Message1::M5::M27* v21 = v14->mutable_f_10();
  v21->set_f_3(0x230b5a0b2c2b512a);
  v21->set_f_4(0x278f806717bd1830);
  v21->set_f_2(0x46);
  v21->set_f_0(0x377d4);
  message->add_f_20(Message1::E2_CONST_2);
  message->set_f_12(s->substr(0, 1));
  message->set_f_16(0xe216692);
  message->set_f_15(0x6fc0581);
  Message1::M3* v22 = message->mutable_f_53();
  Message1::M3::M12* v23_0 = v22->add_f_7();
  Message1::M3::M12::M41* v24 = v23_0->mutable_f_6();
  v24->set_f_4(0x536d07d63dfd16f5);
  v24->set_f_1(s->substr(0, 127));
  v24->set_f_5(0x453403984d723202);
  v24->set_f_2(true);
  Message1::M3::M12::M41::M51* v25_0 = v24->add_f_8();
  v25_0->set_f_0(0x1f32c377e9c1e085);
  v22->set_f_1(0x732e068eed29d0c7);
  v22->set_f_0(0x18b0e4);
  v22->set_f_3(s->substr(0, 1));
  v22->set_f_2(0x481cc490);
  Message1::M3::M34* v26_0 = v22->add_f_9();
  v26_0->set_f_21(s->substr(0, 16));
  v26_0->set_f_13(s->substr(0, 120));
  v26_0->set_f_0(Message1::M3::M34::E13_CONST_1);
  v26_0->set_f_8(0x138a);
  v26_0->set_f_1(s->substr(0, 2));
  v26_0->set_f_18(0x176ef9);
  v26_0->set_f_2(Message1::M3::M34::E14_CONST_1);
  v26_0->set_f_4(0x7eb170fa9783b9a5);
  v26_0->set_f_19(s->substr(0, 12));
  v26_0->set_f_6(0x53);
  v26_0->set_f_23(s->substr(0, 2));
  v26_0->set_f_5(0x51781c5a777e8c88);
  v26_0->set_f_10(0x5f9e37aa91f67abe);
  v26_0->set_f_17(s->substr(0, 6));
  v26_0->set_f_16(s->substr(0, 1));
  v26_0->set_f_9(false);
  v26_0->set_f_12(0.479129);
  v26_0->set_f_11(s->substr(0, 17));
  v26_0->set_f_7(0xace772d);
  v26_0->set_f_3(0x55);
  v26_0->set_f_22(0x42a4b94);
  message->set_f_8(0x5e);
  Message1::M4* v27_0 = message->add_f_55();
  v27_0->set_f_1(true);
  Message1::M4::M33* v28 = v27_0->mutable_f_9();
  v28->set_f_0(0x1f2394ab);
  Message1::M4::M18* v29 = v27_0->mutable_f_7();
  v29->set_f_3(0x364d42de69531176);
  v29->set_f_5(0x898d3db);
  v29->set_f_2(0xd3b);
  Message1::M4::M18::M38* v30 = v29->mutable_f_12();
  v30->set_f_3(s->substr(0, 38));
  v30->set_f_2(0x1c6d0b02);
  v30->set_f_0(s->substr(0, 7));
  v30->set_f_1(s->substr(0, 4));
  v29->set_f_7(0x3dc82f62c477e48e);
  v29->set_f_1(0x43f4525cac4a450e);
  v29->add_f_6(Message1::M4::M18::E9_CONST_4);
  v29->set_f_0(s->substr(0, 113));
  Message1::M4::M24* v31 = v27_0->mutable_f_8();
  v31->set_f_0(s->substr(0, 70));
  Message1::M4::M24::M36* v32 = v31->mutable_f_2();
  v32->set_f_3(s->substr(0, 16));
  v32->add_f_2(Message1::M4::M24::M36::E15_CONST_5);
  v32->set_f_0(0x43fef08c64ed5de9);
  v32->set_f_1(0x3c);
  v27_0->set_f_0(0x277248859f10ea22);
  v27_0->set_f_2(0.435487);
  message->set_f_10(0x46f07f32503dd583);
  message->set_f_0(s->substr(0, 5));
  message->set_f_23(0x69);
  Message1::M1* v33 = message->mutable_f_48();
  Message1::M1::M9* v34_0 = v33->add_f_4();
  Message1::M1::M9::M44* v35 = v34_0->mutable_f_3();
  v35->set_f_0(0x73eb3309a1dc4604);
  Message1::M1::M9::M44::E18 array_0[18] = {
      Message1::M1::M9::M44::E18_CONST_4, Message1::M1::M9::M44::E18_CONST_5,
      Message1::M1::M9::M44::E18_CONST_1, Message1::M1::M9::M44::E18_CONST_1,
      Message1::M1::M9::M44::E18_CONST_3, Message1::M1::M9::M44::E18_CONST_5,
      Message1::M1::M9::M44::E18_CONST_4, Message1::M1::M9::M44::E18_CONST_3,
      Message1::M1::M9::M44::E18_CONST_5, Message1::M1::M9::M44::E18_CONST_1,
      Message1::M1::M9::M44::E18_CONST_1, Message1::M1::M9::M44::E18_CONST_4,
      Message1::M1::M9::M44::E18_CONST_4, Message1::M1::M9::M44::E18_CONST_5,
      Message1::M1::M9::M44::E18_CONST_4, Message1::M1::M9::M44::E18_CONST_2,
      Message1::M1::M9::M44::E18_CONST_5, Message1::M1::M9::M44::E18_CONST_5,
  };
  for (auto v : array_0) {
    v35->add_f_3(v);
  }
  v35->set_f_1(0x4d5c1c5b2963cefc);
  Message1::M1::M9::M44::M55* v36 = v35->mutable_f_5();
  v36->set_f_3(0x6f);
  Message1::M1::M9::M44::M55::M58* v37 = v36->mutable_f_12();
  v37->set_f_1(0x45746fc08bf8dfb);
  v37->set_f_5(s->substr(0, 1));
  v37->set_f_2(s->substr(0, 9));
  v37->set_f_0(s->substr(0, 22));
  v37->set_f_3(s->substr(0, 29));
  v37->set_f_4(0x30fe6500e624480c);
  v37->set_f_6(0x18b606);
  v36->set_f_0(s->substr(0, 14));
  v36->set_f_1(0x26645e3b82ea585);
  v36->add_f_2(Message1::M1::M9::M44::M55::E19_CONST_3);
  v34_0->set_f_0(0x503021ba);
  Message1::M1::M9::M39* v38_0 = v34_0->add_f_2();
  v38_0->set_f_2(s->substr(0, 7));
  v38_0->set_f_0(0x66a2484);
  v38_0->set_f_1(0x1a0c9f0);
  Message1::M1::M10* v39 = v33->mutable_f_5();
  v39->set_f_1(s->substr(0, 181));
  v39->set_f_0(0x5d);
  Message1::M1::M10::M42* v40 = v39->mutable_f_6();
  v40->set_f_0(0x1c15d);
  Message1::M1::M17* v41_0 = v33->add_f_8();
  v41_0->set_f_1(0x1483a3);
  v41_0->set_f_5(0x3634953b);
  v41_0->set_f_0(0.727719);
  v41_0->set_f_6(0x7f8aba2);
  v41_0->add_f_3(Message1::M1::M17::E8_CONST_1);
  v41_0->set_f_2(0x24ebcc9477140da4);
  v41_0->set_f_4(0xa592a45f2e58625);
  Message1::M1::M15* v42_0 = v33->add_f_7();
  v42_0->set_f_0(0x5b1f98799a51dbd2);
  Message1::M1::M13* v43_0 = v33->add_f_6();
  v43_0->set_f_0(0x38eff0a9);
  v33->set_f_0(false);
  Message1::M1::M28* v44 = v33->mutable_f_11();
  v44->set_f_3(s->substr(0, 9));
  v44->set_f_1(s->substr(0, 16));
  message->set_f_25(Message1::E5_CONST_5);
  message->set_f_27(0x3ca44583cb31378d);
  message->set_f_13(0x6f187ccd);
  message->set_f_24(Message1::E4_CONST_3);
  Message1::M6* v45 = message->mutable_f_59();
  v45->set_f_0(s->substr(0, 13));
  Message1::M6::M30* v46 = v45->mutable_f_3();
  (void)v46;  // Suppresses clang-tidy.
  Message1::M6::M32* v47 = v45->mutable_f_4();
  v47->set_f_3(0xe8e65301f92a79d);
  v47->set_f_0(0x6be6317);
  v47->set_f_2(0x47);
  v47->set_f_1(0x42);
  message->set_f_5(s->substr(0, 32));
  message->set_f_2(0x5456aeb);
  message->set_f_26(s->substr(0, 6));
  message->set_f_22(s->substr(0, 13));
  message->set_f_11(s->substr(0, 418));
  message->set_f_28(0x318f597477a84a22);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_14(0.778306);
  message->set_f_7(0x722a089e);
  message->set_f_11(s->substr(0, 15));
  message->set_f_27(0x38ade8e459a0e4b9);
  message->set_f_8(0xcb2ac21);
  message->set_f_28(0x192cb5e679b45dff);
  message->set_f_12(s->substr(0, 21));
  message->set_f_13(0x7475d30f);
  message->set_f_22(s->substr(0, 4));
  message->set_f_4(s->substr(0, 21));
  message->set_f_23(0x396a444);
  Message1::M2* v0_0 = message->add_f_51();
  Message1::M2::M16* v1 = v0_0->mutable_f_2();
  v1->set_f_0(0x7e2bcd26);
  v0_0->set_f_0(0x211c4faad0b95106);
  Message1::M2::M25* v2 = v0_0->mutable_f_4();
  v2->set_f_3(0x60c4e5b10f359c11);
  v2->set_f_0(s->substr(0, 1));
  v2->set_f_2(0x1e27ba);
  v2->set_f_1(0x445517cc);
  Message1::E2 array_0[21] = {
      Message1::E2_CONST_4, Message1::E2_CONST_4, Message1::E2_CONST_5,
      Message1::E2_CONST_1, Message1::E2_CONST_5, Message1::E2_CONST_2,
      Message1::E2_CONST_3, Message1::E2_CONST_4, Message1::E2_CONST_4,
      Message1::E2_CONST_2, Message1::E2_CONST_2, Message1::E2_CONST_4,
      Message1::E2_CONST_5, Message1::E2_CONST_1, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_1, Message1::E2_CONST_5,
      Message1::E2_CONST_5, Message1::E2_CONST_2, Message1::E2_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_20(v);
  }
  message->set_f_17(0x3e00);
  message->set_f_6(0x1f1e748731ffabca);
  message->set_f_9(0x19a3ec29);
  message->set_f_19(Message1::E1_CONST_1);
  Message1::M3* v3 = message->mutable_f_53();
  Message1::M3::M31* v4 = v3->mutable_f_8();
  v4->set_f_0(s->substr(0, 10));
  Message1::M3::M34* v5_0 = v3->add_f_9();
  v5_0->set_f_17(s->substr(0, 5));
  v5_0->set_f_0(Message1::M3::M34::E13_CONST_4);
  v5_0->set_f_13(s->substr(0, 8));
  v5_0->set_f_11(s->substr(0, 7));
  v5_0->set_f_7(0x53f4fe83);
  v5_0->set_f_23(s->substr(0, 1));
  v5_0->set_f_6(0x50);
  v5_0->set_f_4(0x61f7306b2a14d4f6);
  v5_0->set_f_20(0x7dd8f8a4d737848b);
  v5_0->set_f_19(s->substr(0, 7));
  v5_0->set_f_21(s->substr(0, 7));
  v5_0->set_f_15(0x2dbac289);
  v5_0->set_f_18(0x5c3aa1f);
  Message1::M3::M34::M45* v6_0 = v5_0->add_f_35();
  Message1::M3::M34::M45::M53* v7 = v6_0->mutable_f_3();
  v7->set_f_0(s->substr(0, 22));
  v6_0->set_f_0(0x8bc5500);
  Message1::M3::M34::M45::M50* v8_0 = v6_0->add_f_2();
  Message1::M3::M34::M45::M50::M56* v9 = v8_0->mutable_f_2();
  v9->set_f_0(0x67ae31d1d84f5449);
  v8_0->set_f_0(0x55122c22);
  Message1::M3::M34::M45::M54* v10 = v6_0->mutable_f_5();
  (void)v10;  // Suppresses clang-tidy.
  v5_0->set_f_14(0x4d7f732d1b0bf624);
  v5_0->set_f_22(0x3f7b);
  v5_0->set_f_5(0x58b535a37d2bba17);
  v5_0->set_f_3(0x3a48);
  v5_0->set_f_10(0x54961da7e41a39f1);
  v5_0->set_f_8(0x25);
  v5_0->set_f_2(Message1::M3::M34::E14_CONST_4);
  v5_0->set_f_12(0.990789);
  v5_0->set_f_9(false);
  v3->set_f_4(0x22fd486);
  v3->set_f_3(s->substr(0, 5));
  v3->set_f_2(0x59d676d5);
  v3->set_f_0(0x3406);
  message->set_f_26(s->substr(0, 2));
  message->set_f_24(Message1::E4_CONST_3);
  Message1::M6* v11 = message->mutable_f_59();
  Message1::M6::M30* v12 = v11->mutable_f_3();
  v12->set_f_0(0xec8b489);
  Message1::M6::M32* v13 = v11->mutable_f_4();
  v13->set_f_3(0xd52814d3b98c546);
  v13->set_f_2(0xf);
  v13->set_f_1(0x10bd692);
  v13->set_f_0(0x69);
  v11->set_f_0(s->substr(0, 30));
  message->set_f_3(0x1679c2c1);
  Message1::M7* v14_0 = message->add_f_60();
  Message1::M7::M14* v15 = v14_0->mutable_f_4();
  (void)v15;  // Suppresses clang-tidy.
  v14_0->set_f_0(0x12c4ad52);
  Message1::M7::M22* v16 = v14_0->mutable_f_6();
  Message1::M7::M22::M37* v17_0 = v16->add_f_5();
  v17_0->set_f_1(0x40e600f112e55de7);
  Message1::M7::M22::M37::M47* v18 = v17_0->mutable_f_7();
  v18->set_f_5(0x654);
  v18->set_f_7(0x20);
  v18->set_f_3(true);
  v18->set_f_1(0x3a);
  v18->set_f_4(false);
  Message1::M7::M22::M37::M47::M57* v19 = v18->mutable_f_14();
  v19->set_f_1(s->substr(0, 15));
  v19->set_f_0(s->substr(0, 10));
  v19->set_f_2(0.859345);
  v19->set_f_4(s->substr(0, 1));
  v19->set_f_3(s->substr(0, 5));
  v18->set_f_6(0x29fff4c228c73d3a);
  v18->set_f_0(0x5c9801bfc32413f5);
  v17_0->add_f_3(Message1::M7::M22::M37::E16_CONST_4);
  v17_0->set_f_2(s->substr(0, 2));
  v17_0->set_f_0(0x28f9d30);
  v16->set_f_1(0x6a5695bc94130a67);
  v16->set_f_0(0x255bac4f873b8fb5);
  v16->set_f_2(0x3dcff3ed8d80cedb);
  v14_0->set_f_1(0xd006e473ee8f5da);
  Message1::M7::M19* v20 = v14_0->mutable_f_5();
  v20->set_f_0(0x4f153650c679a9c8);
  v20->set_f_5(s->substr(0, 8));
  v20->set_f_2(s->substr(0, 6));
  v20->set_f_3(0x2f536bd);
  Message1::M7::M19::M35* v21 = v20->mutable_f_10();
  v21->set_f_1(s->substr(0, 3591));
  v21->set_f_2(0.271144);
  Message1::M7::M19::M35::M48* v22_0 = v21->add_f_9();
  v22_0->set_f_1(s->substr(0, 7));
  v22_0->set_f_0(0x43d02eb);
  v21->set_f_3(0x4f1e7b0fc863a3f);
  v21->set_f_0(0xdec4860);
  v20->set_f_4(0x3798db3881563f8b);
  Message1::M7::M19::E10 array_1[9] = {
      Message1::M7::M19::E10_CONST_5, Message1::M7::M19::E10_CONST_3,
      Message1::M7::M19::E10_CONST_2, Message1::M7::M19::E10_CONST_3,
      Message1::M7::M19::E10_CONST_4, Message1::M7::M19::E10_CONST_2,
      Message1::M7::M19::E10_CONST_2, Message1::M7::M19::E10_CONST_1,
      Message1::M7::M19::E10_CONST_2,
  };
  for (auto v : array_1) {
    v20->add_f_1(v);
  }
  message->set_f_0(s->substr(0, 36));
  Message1::M8* v23_0 = message->add_f_62();
  Message1::M8::M20* v24 = v23_0->mutable_f_7();
  Message1::M8::M20::M43* v25 = v24->mutable_f_5();
  v25->set_f_0(0x62);
  v24->set_f_0(0xd005d0b);
  v24->set_f_1(true);
  v24->set_f_2(s->substr(0, 2));
  v23_0->set_f_2(0x29ba);
  v23_0->set_f_1(0x74f65ddb);
  v23_0->set_f_3(Message1::M8::E6_CONST_1);
  v23_0->set_f_0(0xabf4b3a);
  message->set_f_29(0x26f0);
  message->set_f_25(Message1::E5_CONST_5);
  message->set_f_1(false);
  message->set_f_15(0xfe28687);
  message->set_f_18(0x11b333dfb79e3298);
  Message1::M5* v26 = message->mutable_f_58();
  Message1::M5::M27* v27 = v26->mutable_f_10();
  v27->set_f_0(0x574cbf4);
  v27->set_f_4(0x43aac5e1cfbf42e3);
  v27->set_f_1(Message1::M5::M27::E12_CONST_1);
  v27->set_f_2(0x64);
  v27->set_f_3(0x6080aad1f10b7a00);
  Message1::M5::M11* v28 = v26->mutable_f_6();
  v28->add_f_0(Message1::M5::M11::E7_CONST_2);
  Message1::M5::M26* v29_0 = v26->add_f_8();
  v29_0->set_f_0(0x1745287f8c957d10);
  v26->set_f_2(0x6cd81053b7ea2d74);
  Message1::M5::M23* v30 = v26->mutable_f_7();
  v30->set_f_1(Message1::M5::M23::E11_CONST_2);
  Message1::M5::M23::M46* v31 = v30->mutable_f_5();
  v31->set_f_2(0xc4a3b06);
  Message1::M5::M23::M46::M52* v32 = v31->mutable_f_5();
  v32->set_f_0(0x13fb95c699560f1);
  Message1::M5::M23::M46::M49* v33_0 = v31->add_f_4();
  v33_0->set_f_0(s->substr(0, 5));
  v33_0->set_f_1(0x1aa1727cebf51e24);
  v31->set_f_0(0xf9b6701);
  v31->set_f_1(0x2115522af8924b30);
  v30->set_f_2(0xd);
  v26->set_f_0(0xa7b6b6c);
  v26->set_f_1(0x2607887d18244fcf);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M5* v0 = message->mutable_f_58();
  Message1::M5::M26* v1_0 = v0->add_f_8();
  (void)v1_0;  // Suppresses clang-tidy.
  v0->set_f_1(0x3451823ec38b219d);
  Message1::M5::M29* v2 = v0->mutable_f_11();
  v2->set_f_0(0xf153f06);
  v0->set_f_2(0x4cf147106a6af4c3);
  Message1::M5::M23* v3 = v0->mutable_f_7();
  v3->set_f_2(0x11);
  v3->set_f_1(Message1::M5::M23::E11_CONST_3);
  v3->set_f_0(0x4aca4ccf);
  Message1::M5::M23::M46* v4 = v3->mutable_f_5();
  Message1::M5::M23::M46::M49* v5_0 = v4->add_f_4();
  v5_0->set_f_0(s->substr(0, 7));
  v5_0->set_f_1(0x5d9af78b32aa9da2);
  v4->set_f_1(0x362fe90bbc0527a5);
  v4->set_f_2(0x77);
  v4->set_f_0(0x66);
  Message1::M5::M23::M46::M52* v6 = v4->mutable_f_5();
  (void)v6;  // Suppresses clang-tidy.
  Message1::M5::M27* v7 = v0->mutable_f_10();
  v7->set_f_1(Message1::M5::M27::E12_CONST_4);
  v7->set_f_3(0x2ba87295e90a1e27);
  Message1::M5::M11* v8 = v0->mutable_f_6();
  (void)v8;  // Suppresses clang-tidy.
  v0->set_f_0(0x7);
  message->set_f_25(Message1::E5_CONST_5);
  message->set_f_24(Message1::E4_CONST_1);
  message->set_f_3(0x6129ec32);
  message->set_f_10(0x6b1fd8c9bedd52da);
  message->set_f_27(0x29c3c9c1467fdf3c);
  Message1::M8* v9_0 = message->add_f_62();
  v9_0->set_f_2(0xae736ad);
  v9_0->set_f_3(Message1::M8::E6_CONST_3);
  v9_0->set_f_0(0x54);
  Message1::M8::M21* v10 = v9_0->mutable_f_8();
  v10->set_f_0(0x7a1de8b);
  v9_0->set_f_1(0x53210beb);
  message->set_f_6(0x6fbdc238521f4da7);
  message->set_f_12(s->substr(0, 43));
  message->set_f_5(s->substr(0, 6));
  message->set_f_7(0x3d754903);
  Message1::M7* v11_0 = message->add_f_60();
  v11_0->set_f_1(0x76b9ca8e2a8a659d);
  Message1::M7::M14* v12 = v11_0->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M7::M19* v13 = v11_0->mutable_f_5();
  v13->set_f_5(s->substr(0, 6));
  v13->set_f_3(0x36);
  v13->set_f_0(0x1c1d61ac7cb4a5f2);
  v13->set_f_4(0x6616385871c3f4c8);
  v11_0->set_f_0(0x17be6dca);
  Message1::M1* v14 = message->mutable_f_48();
  Message1::M1::M17* v15_0 = v14->add_f_8();
  v15_0->add_f_3(Message1::M1::M17::E8_CONST_5);
  v15_0->set_f_1(0x941cf7e);
  v15_0->set_f_4(0x6847a8bbcaec4b75);
  v15_0->set_f_0(0.201947);
  v15_0->set_f_2(0x16b1da98680e10ac);
  Message1::M1::M9* v16_0 = v14->add_f_4();
  v16_0->set_f_0(0x5049fd6d);
  Message1::M1::M9::M44* v17 = v16_0->mutable_f_3();
  v17->add_f_3(Message1::M1::M9::M44::E18_CONST_4);
  v17->set_f_2(0x5657ef3d9dd232c5);
  v17->set_f_1(0x3473f7893849c431);
  Message1::M1::M9::M44::M55* v18 = v17->mutable_f_5();
  v18->set_f_0(s->substr(0, 25));
  v18->set_f_1(0x7465f286039b2a45);
  v18->set_f_4(0x49);
  v17->set_f_0(0x19de9ff79c9e679b);
  Message1::M1::M9::M39* v19_0 = v16_0->add_f_2();
  v19_0->set_f_2(s->substr(0, 17));
  v19_0->set_f_0(0x1d4b8d);
  Message1::M1::M10* v20 = v14->mutable_f_5();
  v20->set_f_2(s->substr(0, 8));
  v20->set_f_0(0x45);
  v20->set_f_1(s->substr(0, 1));
  Message1::M1::M10::M42* v21 = v20->mutable_f_6();
  (void)v21;  // Suppresses clang-tidy.
  v14->set_f_0(true);
  Message1::M1::M15* v22_0 = v14->add_f_7();
  (void)v22_0;  // Suppresses clang-tidy.
  Message1::M1::M13* v23_0 = v14->add_f_6();
  v23_0->set_f_0(0x2f8b624a);
  message->set_f_15(0x584a4c2);
  message->set_f_21(Message1::E3_CONST_3);
  message->set_f_22(s->substr(0, 1));
  message->set_f_8(0xb25207a);
  message->set_f_4(s->substr(0, 125));
  message->set_f_16(0xc616f);
  message->set_f_14(0.442051);
  Message1::M2* v24_0 = message->add_f_51();
  Message1::M2::M25* v25 = v24_0->mutable_f_4();
  v25->set_f_1(0x2039077e);
  v25->set_f_3(0x1fafeca94ea36a86);
  v25->set_f_0(s->substr(0, 14));
  v25->set_f_2(0x3c);
  Message1::M2::M16* v26 = v24_0->mutable_f_2();
  v26->set_f_0(0x676c7313);
  v24_0->set_f_0(0x4b7c5471c5593f71);
  message->set_f_19(Message1::E1_CONST_4);
  Message1::M6* v27 = message->mutable_f_59();
  v27->set_f_0(s->substr(0, 1));
  Message1::M6::M32* v28 = v27->mutable_f_4();
  v28->set_f_1(0x1d);
  v28->set_f_0(0x570b8b1);
  v28->set_f_3(0x6a489bfc519da4d);
  v28->set_f_2(0x76);
  Message1::M6::M30* v29 = v27->mutable_f_3();
  v29->set_f_0(0xf908b);
  message->add_f_20(Message1::E2_CONST_5);
  message->set_f_17(0x13c31d);
  message->set_f_13(0x782241d2);
  message->set_f_23(0x61adab8);
  message->set_f_28(0x279e574a7616774e);
  message->set_f_11(s->substr(0, 4));
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
}  // namespace fleetbench::rpc::P1::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
