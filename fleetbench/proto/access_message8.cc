// Copyright 2025 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: DO NOT EDIT! This file is auto-generated.

#include "fleetbench/proto/access_message8.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message8.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message8_Set_1(Message8* message, std::string* s) {
  Message8::M2* v0 = message->mutable_f_4();
  v0->set_f_0(0x7674dbf427caaedd);
  Message8::M2::M11* v1 = v0->mutable_f_4();
  Message8::M2::M11::M23* v2 = v1->mutable_f_4();
  Message8::M2::M11::M23::M26* v3 = v2->mutable_f_7();
  v3->set_f_0(0.442199);
  Message8::M2::M11::M23::M26::M38* v4_0 = v3->add_f_2();
  v4_0->set_f_0(0.082689);
  Message8::M2::M11::M23::M26::M38::M48* v5 = v4_0->mutable_f_2();
  v5->set_f_4(Message8::M2::M11::M23::M26::M38::M48::E22_CONST_1);
  int32_t array_1[204] = {
      0x96f1599, 0xcd62e01, 0x88bd9a4, 0x5befdd3, 0x31d8,    0x2453,
      0x26a38d0, 0x2ef6ce4, 0x627a9f8, 0xaa34f4c, 0xe7f578,  0x1d568c,
      0x3d,      0xc03bce8, 0x57969dc, 0x126abc,  0xd661dac, 0x49b7b32,
      0x62c39db, 0x19,      0x559fe9a, 0x5dec170, 0x4870879, 0x2d655,
      0x10ac,    0xa82c217, 0xdf57996, 0x2fb7e3d, 0xfdd5a95, 0x3b3,
      0xc7a3a43, 0x18839,   0x39b8,    0x9c91,    0x33dd88b, 0xf382576,
      0x5b72d2a, 0xd7de36f, 0x692cb3f, 0xb0e2f15, 0x6bd28,   0xed050,
      0x93570f3, 0x17f3e8,  0x8acd1fd, 0xfa6a881, 0x1ac528,  0xb7fe3a8,
      0x391d,    0xf1e8f,   0x54e6c,   0xa793112, 0x2988903, 0x52e2207,
      0xade6ebc, 0x1f8e6c1, 0x110daf,  0x30edcb9, 0x20196,   0x12c081,
      0x7c28ef2, 0x173df8,  0x94b6c34, 0x47738f2, 0x16,      0xeddc9,
      0x9675e53, 0x194f15,  0x2bc6,    0xf44d9,   0xe9d24df, 0x1396,
      0x184ed,   0x77af99f, 0x5a0ef68, 0x81b7021, 0xe1b8863, 0x937ff7d,
      0x8b0e2,   0x12beec,  0x189f98,  0x7a12e0,  0x42,      0x2abd,
      0x8bd8a,   0xd864c70, 0x7502189, 0x1c7d67,  0xe67984d, 0x413959,
      0x8e65a,   0x4b,      0xf4d3b2e, 0x31d1480, 0x3d154a5, 0x35c40d5,
      0x963e6,   0x1b7e4e,  0x49483dd, 0x78c8b8d, 0x3793,    0x16e23df,
      0x9f607,   0x771450b, 0x1f9a,    0x977f3e2, 0xc26c761, 0x7c67de0,
      0x25,      0x49152d8, 0x696,     0x9de3200, 0xce514,   0xa2d9982,
      0xa4c0d7b, 0x24d45c0, 0xf650688, 0x1d68,    0xd6116,   0x17b02de,
      0x17895c,  0xbab0,    0x1a0348,  0x1bdda8,  0xfb3cf,   0xbc97de7,
      0x1ad472,  0xf3d5e72, 0x29deeb2, 0xd0761,   0xad4992b, 0x4f3fceb,
      0x27bb6f0, 0xab5cfe3, 0x5c9ff7f, 0x1aea46,  0x113f77,  0xa6be6,
      0x351d77e, 0x2a9a82e, 0xe6866f3, 0x9e5b16a, 0xf85c8,   0xe5ddb17,
      0xe138e97, 0x614f597, 0x9f71625, 0xaba0bfe, 0x3c4f720, 0x24fa40a,
      0x9d9fdb,  0xd197f96, 0xf5b90e8, 0xf327b3c, 0x9693dae, 0x7b29032,
      0xd7dd129, 0xf9859e0, 0x2f960f2, 0xa928e10, 0x21,      0xfa003,
      0x4c16c8d, 0x1d471,   0x2454,    0xe456294, 0x78b8ca4, 0x178e1f,
      0x7e00d,   0x76,      0xd4c9c1c, 0x9154745, 0x843c6,   0x1908,
      0x8ac7baa, 0x34d8f30, 0xefee867, 0x112742f, 0x9,       0x331a09d,
      0x2c,      0x8ede031, 0xebe7203, 0xa3b8a35, 0x113753,  0xc7cf1eb,
      0x53605fc, 0x5c,      0x9df2f62, 0xc43f5f,  0x7cb000f, 0x38,
      0xedef5,   0xe7e5b98, 0x4c7698d, 0x7edc579, 0x97d,     0xd842e9f,
      0x2960,    0xd165d4b, 0x156e8f,  0xdf1b03a, 0x26dd71,  0x99bbd48,
  };
  for (auto v : array_1) {
    v5->add_f_2(v);
  }
  v5->set_f_17(0.182596);
  v5->set_f_42(s->substr(0, 71));
  Message8::M2::M11::M23::M26::M38::M48::M54* v6 = v5->mutable_f_64();
  v6->set_f_0(0x9213c2f);
  Message8::M2::M11::M23::M26::M38::M48::M54::M62* v7_0 = v6->add_f_9();
  v7_0->set_f_3(Message8::M2::M11::M23::M26::M38::M48::M54::M62::E35_CONST_2);
  v7_0->set_f_1(s->substr(0, 9));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59* v8 = v6->mutable_f_6();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63* v9 = v8->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68* v10_0 =
      v9->add_f_5();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69* v11 =
      v10_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70* v12 =
      v11->mutable_f_4();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71*
      v13 = v12->mutable_f_2();
  v13->set_f_0(false);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v14_0 = v13->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v15 = v14_0->mutable_f_3();
  v15->set_f_1(0x30);
  v15->set_f_6(Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
                   M70::M71::M72::M73::E39_CONST_1);
  v14_0->set_f_0(s->substr(0, 16));
  v11->set_f_0(s->substr(0, 62));
  v11->set_f_1(0.892968);
  v9->set_f_2(0x57c0251fc24e3bd2);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65* v16_0 = v8->add_f_3();
  v16_0->set_f_4(0x312d5926f);
  v16_0->set_f_1(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65::E37_CONST_4);
  v8->set_f_0(0x14bc27efb1fdf3);
  Message8::M2::M11::M23::M26::M38::M48::M54::M58* v17_0 = v6->add_f_5();
  (void)v17_0;  // Suppresses clang-tidy.
  v5->set_f_40(0x31df676);
  v5->set_f_28(0.129632);
  v5->set_f_26(0x3def82bbabe);
  v5->set_f_15(0x48);
  v5->set_f_10(0.551006);
  v5->set_f_12(s->substr(0, 19));
  v5->set_f_38(0x1a4c35);
  v5->set_f_23(s->substr(0, 16));
  v5->set_f_0(0x28a7);
  v5->set_f_8(s->substr(0, 26));
  Message8::M2::M11::M23::M26::M38* v4_1 = v3->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48* v18 = v4_1->mutable_f_2();
  v18->set_f_39(Message8::M2::M11::M23::M26::M38::M48::E28_CONST_1);
  v18->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_3);
  v18->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_5);
  v18->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_5);
  v18->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_2);
  v18->set_f_26(0x4e);
  v18->set_f_30(s->substr(0, 5));
  v18->add_f_44(0x111614);
  v18->add_f_44(0x19f25a0);
  v18->add_f_44(0x21);
  v18->add_f_44(0x131f96);
  v18->set_f_12(s->substr(0, 8));
  v18->set_f_17(0.507050);
  v18->add_f_32(0x8);
  v18->add_f_32(0xb729b09);
  v18->add_f_32(0x2b);
  v18->add_f_32(0x37);
  v18->set_f_19(Message8::M2::M11::M23::M26::M38::M48::E24_CONST_1);
  v18->set_f_8(s->substr(0, 86));
  Message8::M2::M11::M23::M26::M38::M48::M54* v19 = v18->mutable_f_64();
  Message8::M2::M11::M23::M26::M38::M48::M54::M57* v20 = v19->mutable_f_4();
  (void)v20;  // Suppresses clang-tidy.
  Message8::M2::M11::M23::M26::M38::M48::M54::M60* v21 = v19->mutable_f_7();
  v21->set_f_0(0x3ef26455643);
  v19->set_f_0(0x2f97);
  Message8::M2::M11::M23::M26::M38::M48::M54::M62* v22_0 = v19->add_f_9();
  v22_0->set_f_2(0.357021);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59* v23 = v19->mutable_f_6();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65* v24_0 = v23->add_f_3();
  v24_0->set_f_4(0xd2888968e1aa59);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63* v25 =
      v23->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68* v26_0 =
      v25->add_f_5();
  v26_0->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::E38_CONST_2);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69* v27 =
      v26_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70* v28 =
      v27->mutable_f_4();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71*
      v29 = v28->mutable_f_2();
  v29->set_f_0(true);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v30_0 = v29->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v31 = v30_0->mutable_f_3();
  v31->set_f_4(s->substr(0, 14));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73::M74* v32 = v31->mutable_f_12();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73::M74::E40 array_2[16] = {
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_2,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_5,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_1,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_4,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_5,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_2,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_1,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_1,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_4,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_2,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_2,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_3,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_4,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_2,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_4,
          Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::
              M71::M72::M73::M74::E40_CONST_4,
      };
  for (auto v : array_2) {
    v32->add_f_0(v);
  }
  v31->set_f_6(Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
                   M70::M71::M72::M73::E39_CONST_2);
  v31->set_f_0(0x1b41743c40b65);
  v30_0->set_f_0(s->substr(0, 4));
  v25->set_f_1(0x175fed);
  v25->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::E36_CONST_2);
  Message8::M2::M11::M23::M26::M38::M48::M55* v33_0 = v18->add_f_66();
  v33_0->set_f_0(s->substr(0, 2));
  v18->set_f_7(0x1f8e);
  v18->set_f_34(Message8::M2::M11::M23::M26::M38::M48::E26_CONST_3);
  v18->set_f_18(0x64);
  v18->set_f_42(s->substr(0, 1));
  v18->set_f_33(s->substr(0, 16));
  v18->set_f_10(0.689261);
  v18->set_f_27(Message8::M2::M11::M23::M26::M38::M48::E25_CONST_4);
  v18->set_f_0(0x4f);
  v18->set_f_20(0x11120ffa6);
  v18->set_f_46(0x5f);
  v18->set_f_29(s->substr(0, 3));
  v18->set_f_21(0x769e494113d5);
  v18->set_f_23(s->substr(0, 15));
  v4_1->set_f_0(0.959214);
  v2->set_f_0(0x2f3ef9a20);
  Message8::M2::M11::M13* v34 = v1->mutable_f_3();
  v34->set_f_0(s->substr(0, 4));
  Message8::M2::M11::M13::M36* v35_0 = v34->add_f_6();
  v35_0->set_f_2(0x2c58);
  v35_0->set_f_4(s->substr(0, 2));
  v35_0->set_f_3(Message8::M2::M11::M13::M36::E15_CONST_3);
  v35_0->set_f_11(0xda95149df247);
  v35_0->set_f_0(Message8::M2::M11::M13::M36::E14_CONST_1);
  Message8::M2::M11::M13::M34* v36_0 = v34->add_f_5();
  (void)v36_0;  // Suppresses clang-tidy.
  Message8::M1* v37 = message->mutable_f_2();
  Message8::M1::M5* v38_0 = v37->add_f_2();
  Message8::M1::M5::M17* v39_0 = v38_0->add_f_5();
  v39_0->set_f_0(0x1f);
  Message8::M1::M5::M17::M25* v40_0 = v39_0->add_f_3();
  Message8::M1::M5::M17::M25::M44* v41 = v40_0->mutable_f_2();
  (void)v41;  // Suppresses clang-tidy.
  Message8::M1::M5::M17* v39_1 = v38_0->add_f_5();
  v39_1->set_f_0(0x2f);
  v38_0->set_f_0(false);
  Message8::M1::M5::M21* v42 = v38_0->mutable_f_6();
  Message8::M1::M5::M21::M24* v43 = v42->mutable_f_2();
  Message8::M1::M5::M21::M24::M42* v44 = v43->mutable_f_2();
  v44->set_f_3(s->substr(0, 19));
  v44->set_f_0(true);
  v44->set_f_1(false);
  Message8::M1::M5::M21::M24::M42::M47* v45 = v44->mutable_f_11();
  Message8::M1::M5::M21::M24::M42::M47::M51* v46 = v45->mutable_f_4();
  v46->set_f_1(s->substr(0, 11));
  Message8::M1::M5::M21::M24::M42::M47::M50* v47_0 = v45->add_f_3();
  v47_0->set_f_0(0x68763fe23d54);
  Message8::M1::M5::M21::M24::M42::M47::M50* v47_1 = v45->add_f_3();
  v47_1->set_f_0(0x2ad6866facd600);
  Message8::M1::M5::M21::M30* v48 = v42->mutable_f_3();
  (void)v48;  // Suppresses clang-tidy.
  Message8::M4* v49_0 = message->add_f_6();
  v49_0->set_f_0(0x2b);
  Message8::M4::M7* v50_0 = v49_0->add_f_9();
  v50_0->set_f_0(0x3157);
  Message8::M4::M7::M14* v51 = v50_0->mutable_f_3();
  Message8::M4::M7::M14::M32* v52 = v51->mutable_f_5();
  Message8::M4::M7::M14::M32::M46* v53 = v52->mutable_f_5();
  (void)v53;  // Suppresses clang-tidy.
  v52->set_f_1(s->substr(0, 13));
  v51->set_f_0(0x18e99fd92);
  v49_0->set_f_4(0.560561);
  Message8::M4::M12* v54_0 = v49_0->add_f_10();
  int array_3[9] = {
      29, 90, 18, 3, 30, 15, 7, 127, 2,
  };
  for (size_t i = 0; i < 9; ++i) {
    v54_0->add_f_43(s->substr(0, array_3[i]));
  }
  v54_0->set_f_24(0x26);
  v54_0->set_f_8(0x263a4457c);
  v54_0->set_f_25(0x47);
  v54_0->set_f_49(0x51dfd33);
  int32_t array_4[12] = {
      0xde40,    0x1d,     0x585b0,   0x1a13d5, 0xc97f2dd, 0xeae5a60,
      0x52b7a9c, 0x1d2844, 0xc21de9e, 0x38,     0x1ebb82,  0xc2a35d7,
  };
  for (auto v : array_4) {
    v54_0->add_f_29(v);
  }
  v54_0->set_f_61(0x3e33e2de0);
  v54_0->set_f_51(0x6c43bdd7);
  v54_0->set_f_66(0.249070);
  v54_0->set_f_1(0x2d64);
  v54_0->set_f_67(0.382233);
  v54_0->set_f_20(0x74fa5a6e0);
  v54_0->set_f_11(0x419f0baf2c3d845f);
  v54_0->set_f_12(0x6744275);
  v54_0->set_f_46(Message8::M4::M12::E9_CONST_5);
  v54_0->add_f_18(s->substr(0, 4));
  v54_0->set_f_26(0.251312);
  v54_0->set_f_6(s->substr(0, 7));
  v54_0->set_f_52(Message8::M4::M12::E11_CONST_3);
  Message8::M4::M12::M15* v55 = v54_0->mutable_f_93();
  Message8::M4::M12::M15::M28* v56 = v55->mutable_f_2();
  Message8::M4::M12::M15::M28::M41* v57_0 = v56->add_f_5();
  v57_0->set_f_0(Message8::M4::M12::M15::M28::M41::E17_CONST_4);
  Message8::M4::M12::M15::M28::M45* v58 = v56->mutable_f_8();
  v58->set_f_4(0x1f621c);
  v58->set_f_0(true);
  v58->set_f_2(true);
  v55->set_f_0(0.532700);
  v54_0->set_f_27(0x103a69e);
  v54_0->add_f_64(0x251301d);
  v54_0->set_f_5(0.855853);
  v54_0->set_f_57(s->substr(0, 4));
  v54_0->set_f_13(s->substr(0, 24));
  v54_0->set_f_47(0.058435);
  v54_0->set_f_19(0x1d95afb2);
  v54_0->set_f_10(0x5);
  v54_0->set_f_17(Message8::M4::M12::E6_CONST_2);
  int array_5[9] = {
      5, 24, 6, 16, 1, 5, 1, 15, 6,
  };
  for (size_t i = 0; i < 9; ++i) {
    v49_0->add_f_5(s->substr(0, array_5[i]));
  }
  Message8::M3* v59 = message->mutable_f_5();
  Message8::M3::M10* v60_0 = v59->add_f_7();
  Message8::M3::M10::M22* v61 = v60_0->mutable_f_8();
  v61->set_f_5(0x461a7f);
  v61->set_f_3(s->substr(0, 12));
  v61->set_f_2(s->substr(0, 62));
  v61->set_f_6(s->substr(0, 1));
  v61->set_f_1(0x4e);
  v61->set_f_7(0x1ea061914d625);
  v61->set_f_0(0.306926);
  v60_0->set_f_0(false);
  Message8::M3::M10::M18* v62 = v60_0->mutable_f_3();
  Message8::M3::M10::M18::M35* v63 = v62->mutable_f_4();
  (void)v63;  // Suppresses clang-tidy.
  Message8::M3::M10::M18::M29* v64 = v62->mutable_f_3();
  v64->set_f_0(0x5);
  v64->set_f_2(s->substr(0, 3));
  v64->set_f_4(false);
  v64->set_f_1(0x6b);
  Message8::M3::M8* v65 = v59->mutable_f_3();
  (void)v65;  // Suppresses clang-tidy.
}
void Message8_Set_2(Message8* message, std::string* s) {
  Message8::M1* v0 = message->mutable_f_2();
  Message8::M1::M5* v1_0 = v0->add_f_2();
  v1_0->set_f_0(false);
  Message8::M1::M5::M17* v2_0 = v1_0->add_f_5();
  (void)v2_0;  // Suppresses clang-tidy.
  Message8::M1::M5::M16* v3 = v1_0->mutable_f_3();
  v3->set_f_0(0xe);
  Message8::M1::M5::M21* v4 = v1_0->mutable_f_6();
  Message8::M1::M5::M21::M24* v5 = v4->mutable_f_2();
  Message8::M1::M5::M21::M24::M42* v6 = v5->mutable_f_2();
  v6->set_f_2(0xfaab564);
  v6->set_f_1(false);
  Message8::M1::M5::M21::M24::M42::M47* v7 = v6->mutable_f_11();
  Message8::M1::M5::M21::M24::M42::M47::M49* v8 = v7->mutable_f_2();
  v8->set_f_0(0x76);
  Message8::M1::M5::M21::M24::M42::M47::M50* v9_0 = v7->add_f_3();
  v9_0->set_f_0(0x7e1bbb62d5d6);
  Message8::M1::M5::M21::M24::M42::M47::M50* v9_1 = v7->add_f_3();
  v9_1->set_f_0(0xe00b62d72bf2bd);
  Message8::M1::M5::M21::M24::M42::M47::M51* v10 = v7->mutable_f_4();
  v10->set_f_3(s->substr(0, 3));
  v6->set_f_4(0x148667880c52a);
  v5->set_f_0(s->substr(0, 7));
  v0->set_f_0(Message8::M1::E2_CONST_2);
  Message8::M2* v11 = message->mutable_f_4();
  Message8::M2::M11* v12 = v11->mutable_f_4();
  v12->set_f_0(Message8::M2::M11::E4_CONST_1);
  Message8::M2::M11::M23* v13 = v12->mutable_f_4();
  v13->set_f_1(0xcac53);
  Message8::M2::M11::M23::M26* v14 = v13->mutable_f_7();
  Message8::M2::M11::M23::M26::M38* v15_0 = v14->add_f_2();
  v15_0->set_f_0(0.326081);
  Message8::M2::M11::M23::M26::M38::M48* v16 = v15_0->mutable_f_2();
  v16->add_f_25(0x160a05b);
  v16->add_f_25(0x29b6);
  v16->set_f_34(Message8::M2::M11::M23::M26::M38::M48::E26_CONST_5);
  v16->set_f_11(0x4c);
  v16->add_f_32(0x70);
  v16->set_f_26(0x1b0b);
  v16->set_f_20(0x6261c5fea36ffa);
  int32_t array_0[283] = {
      0x5d32afb, 0x44,      0x43,      0x2ab32b9, 0xee6df,   0x1ee99b,
      0x892e8,   0x7580600, 0x8aa9534, 0x1e,      0xc02672b, 0xd506c12,
      0x72502df, 0x1509d,   0x661fd,   0xb0c6c,   0x7bac35e, 0x3a4d5,
      0x41,      0xd42f2,   0x5e,      0xd01f849, 0x499d026, 0x77dd1,
      0x3ba5058, 0x4b,      0x67,      0xa6f6f4b, 0x71,      0x60,
      0x13bdba,  0x21,      0x1b459a,  0xa3a7801, 0x1dda01,  0x36,
      0xb7032,   0x1db3f0,  0x1af4c81, 0x4a,      0x11cd33,  0x3e4ae0c,
      0xf500dc0, 0x60,      0x3322523, 0x15,      0x7096918, 0x12fa87,
      0xc679fc7, 0xcd84121, 0x47f4892, 0x139386,  0x30f80,   0xd8c296f,
      0x59767,   0x1c1925,  0x9a938ad, 0x294a7cc, 0x66c3b,   0x2fbfc2b,
      0x1a344c,  0x30723ed, 0x653c37a, 0x223d52b, 0x4c5093b, 0x17,
      0x106ca1,  0x66,      0x75bb881, 0x78d0978, 0x1c20,    0xa8602dc,
      0x132817,  0x836582f, 0x31f5efc, 0x19259e,  0x1a6346,  0xc3279c4,
      0x759f30f, 0xde388,   0x1ea0f7,  0x4f505fd, 0x3f,      0x178c85,
      0x99a41f9, 0xf4bcb09, 0x9dc74,   0x37656aa, 0x4e3e70,  0x1e,
      0x6a6db73, 0x698a4b3, 0x88e441f, 0x1cdd23,  0xd2057,   0x809e552,
      0x94eb1,   0xa5299a9, 0xd22027a, 0x66,      0xbcc1a24, 0x85db49a,
      0xa6b57bb, 0xc6c54,   0x5eb1b62, 0xd8cfba8, 0xc14c12a, 0x6d,
      0xd9577f3, 0x4614558, 0x6e42e8b, 0xa3477,   0x19ca44f, 0x513,
      0x2562,    0xfea23be, 0xae41c03, 0x169168,  0x68,      0x2e0d,
      0x6452bba, 0x22069c3, 0x18f211,  0x184fb7e, 0xae85fbd, 0x6b784,
      0xc1d,     0x5b967,   0x12b4a3,  0x11b1d26, 0x58,      0x78e1082,
      0xb4040,   0xf2849bf, 0x3a893c4, 0xd5462c,  0xa2331ae, 0x9e9d62c,
      0x5fa1628, 0xd8f1155, 0x1618e4,  0xb0fb40b, 0x1039bf1, 0xb66da70,
      0x85b0616, 0x20,      0x4657645, 0x79d839d, 0x11f9dd3, 0x971315f,
      0xb8854c5, 0x49ac5ee, 0x72,      0x9b4e373, 0x390ae83, 0x177028,
      0x5540018, 0x670140d, 0x2af990,  0xb8a97a5, 0xe3c265b, 0x40c761e,
      0xe29b274, 0x3daaa,   0x9fb1ef7, 0x6c3e5,   0x2ecdcd5, 0x61c2be0,
      0x1e3fc3,  0x8ca4891, 0x1d3569,  0x159e90,  0x1a2167,  0x4a,
      0x3e,      0x61e145c, 0x4c,      0x29ecd9a, 0xee7a833, 0xece5967,
      0x3017522, 0x40c63d6, 0x1b886b4, 0x12,      0xe648742, 0x6e9e984,
      0xfb5369a, 0xa8683d6, 0x45da393, 0x24ef8,   0x646ce23, 0xf2228b6,
      0x29825fe, 0x7cb4b,   0xe04c926, 0x9c955a9, 0x8812b3a, 0x69,
      0x88cc643, 0x1f3187a, 0xfac54c6, 0xadb573,  0x2d,      0x1c,
      0x972d1bf, 0x16,      0x16,      0x154eefd, 0x2be3c69, 0x14b03e,
      0x356b71b, 0xf,       0xfcf8552, 0x16b3358, 0x9c9df42, 0x2c59d5d,
      0x528f025, 0x6f,      0xb31516a, 0x198c295, 0x7,       0x92ccc90,
      0x5163732, 0x3efa,    0x1132,    0x19926b,  0x7e,      0xa063475,
      0x7e612c7, 0x1ccd31,  0xe3a38c9, 0x2a,      0xd8e9879, 0x1dbda1,
      0x17,      0x1b2701,  0x19c3f8,  0xe01cf7d, 0x6b8fb90, 0xe0f527c,
      0x850f61e, 0x39993eb, 0x19b152,  0x577aa7f, 0x4dd7f30, 0x32d0999,
      0x385c9,   0xa18907b, 0x3dd7cd5, 0x73bf873, 0x21,      0x761117a,
      0x88544,   0xb027205, 0x10c0ff,  0x8a599,   0xcacba61, 0x45d87d,
      0x1dc9ab,  0xb480c15, 0x3a283fc, 0xc796274, 0x2ba1ab3, 0xa8dac,
      0x1953ef,  0xffda5c9, 0xdec59cc, 0x7f639,   0xe1f99d7, 0x160090c,
      0x2aa3,    0x160b,    0xab4e3c5, 0xc2ecf64, 0xeb6a878, 0xfbfef2d,
      0xec5ad61, 0x1b3f,    0x469c93f, 0xd6ee725, 0xbbc73,   0x2ecf,
      0x1dae301,
  };
  for (auto v : array_0) {
    v16->add_f_2(v);
  }
  Message8::M2::M11::M23::M26::M38::M48::M56* v17 = v16->mutable_f_68();
  Message8::M2::M11::M23::M26::M38::M48::M56::M61* v18 = v17->mutable_f_4();
  Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64* v19 =
      v18->mutable_f_4();
  (void)v19;  // Suppresses clang-tidy.
  v16->set_f_36(Message8::M2::M11::M23::M26::M38::M48::E27_CONST_1);
  v16->set_f_3(s->substr(0, 1));
  Message8::M2::M11::M23::M26::M38::M48::M54* v20 = v16->mutable_f_64();
  Message8::M2::M11::M23::M26::M38::M48::M54::M60* v21 = v20->mutable_f_7();
  (void)v21;  // Suppresses clang-tidy.
  Message8::M2::M11::M23::M26::M38::M48::M54::M58* v22_0 = v20->add_f_5();
  v22_0->set_f_0(s->substr(0, 9));
  v20->set_f_0(0xa3bf455);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59* v23 = v20->mutable_f_6();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63* v24 =
      v23->mutable_f_2();
  v24->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::E36_CONST_2);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68* v25_0 =
      v24->add_f_5();
  v25_0->set_f_1(s->substr(0, 27));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69* v26 =
      v25_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70* v27 =
      v26->mutable_f_4();
  v27->set_f_0(false);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71*
      v28 = v27->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v29_0 = v28->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v30 = v29_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73::M74* v31 = v30->mutable_f_12();
  v31->add_f_0(Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
                   M70::M71::M72::M73::M74::E40_CONST_4);
  v30->set_f_7(s->substr(0, 124));
  v30->set_f_6(Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
                   M70::M71::M72::M73::E39_CONST_2);
  v29_0->set_f_0(s->substr(0, 32));
  v26->set_f_0(s->substr(0, 18));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65* v32_0 = v23->add_f_3();
  v32_0->set_f_1(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65::E37_CONST_1);
  v32_0->set_f_2(0x61);
  v32_0->set_f_0(0.004781);
  Message8::M2::M11::M23::M26::M38::M48::M54::M57* v33 = v20->mutable_f_4();
  (void)v33;  // Suppresses clang-tidy.
  Message8::M2::M11::M23::M26::M38::M48::M54::M62* v34_0 = v20->add_f_9();
  v34_0->set_f_3(Message8::M2::M11::M23::M26::M38::M48::M54::M62::E35_CONST_4);
  v34_0->set_f_1(s->substr(0, 13));
  v34_0->set_f_2(0.113677);
  v16->set_f_46(0xf58c2e8);
  v16->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_2);
  v16->set_f_28(0.425479);
  v16->set_f_23(s->substr(0, 83));
  v16->set_f_14(s->substr(0, 7));
  v16->set_f_31(0xadcd802);
  v16->set_f_33(s->substr(0, 10));
  Message8::M2::M11::M13* v35 = v12->mutable_f_3();
  Message8::M2::M11::M13::M36* v36_0 = v35->add_f_6();
  v36_0->set_f_0(Message8::M2::M11::M13::M36::E14_CONST_4);
  v36_0->add_f_14(0x28);
  v36_0->add_f_14(0x1d);
  v36_0->set_f_9(0x4df66834);
  v36_0->set_f_2(0x71);
  v36_0->set_f_4(s->substr(0, 11));
  v36_0->set_f_8(Message8::M2::M11::M13::M36::E16_CONST_4);
  v36_0->set_f_6(0xd493134);
  v11->set_f_0(0x3e960d4cabf0bc70);
  message->set_f_0(Message8::E1_CONST_2);
  Message8::M4* v37_0 = message->add_f_6();
  v37_0->set_f_3(Message8::M4::E3_CONST_2);
  v37_0->set_f_1(0x25229);
  v37_0->set_f_0(0x24);
  Message8::M4::M12* v38_0 = v37_0->add_f_10();
  v38_0->set_f_26(0.306706);
  v38_0->set_f_68(Message8::M4::M12::E12_CONST_5);
  v38_0->set_f_12(0xd);
  v38_0->set_f_35(0x4b27e);
  v38_0->set_f_31(s->substr(0, 3));
  v38_0->set_f_65(s->substr(0, 47));
  v38_0->add_f_29(0xb6e);
  v38_0->add_f_29(0xf8e875a);
  v38_0->add_f_29(0x3ff6e);
  v38_0->add_f_29(0x2c);
  v38_0->set_f_41(0xf9b41);
  v38_0->set_f_3(0x14);
  v38_0->add_f_43(s->substr(0, 6));
  v38_0->add_f_43(s->substr(0, 4));
  v38_0->set_f_0(s->substr(0, 2));
  v38_0->add_f_4(0xe843406);
  v38_0->add_f_4(0x8dfb9ae);
  v38_0->add_f_4(0x70db4f2);
  v38_0->set_f_63(0xad219de7035e2a);
  v38_0->set_f_39(0x44);
  v38_0->set_f_20(0x5dbf476b6);
  v38_0->set_f_10(0x3e54);
  v38_0->set_f_37(0x3f);
  v38_0->set_f_2(0.041718);
  v38_0->set_f_19(0x746e171a);
  v38_0->set_f_11(0x786d91eff534ee6e);
  v38_0->set_f_50(Message8::M4::M12::E10_CONST_5);
  v38_0->set_f_52(Message8::M4::M12::E11_CONST_4);
  v38_0->set_f_36(0x68cd4);
  v38_0->set_f_7(0x186c);
  v38_0->set_f_8(0x3565);
  v38_0->set_f_56(false);
  Message8::M4::M12::M15* v39 = v38_0->mutable_f_93();
  v39->set_f_0(0.640537);
  Message8::M4::M12::M15::M28* v40 = v39->mutable_f_2();
  Message8::M4::M12::M15::M28::M43* v41_0 = v40->add_f_7();
  v41_0->set_f_0(Message8::M4::M12::M15::M28::M43::E18_CONST_1);
  Message8::M4::M12::M15::M28::M43* v41_1 = v40->add_f_7();
  v41_1->set_f_0(Message8::M4::M12::M15::M28::M43::E18_CONST_3);
  Message8::M4::M12::M15::M28::M41* v42_0 = v40->add_f_5();
  (void)v42_0;  // Suppresses clang-tidy.
  v38_0->set_f_69(0x6e8630a2d20c02);
  v38_0->set_f_25(0x3574d6c37);
  v38_0->set_f_67(0.472605);
  Message8::M4::M7* v43_0 = v37_0->add_f_9();
  Message8::M4::M7::M14* v44 = v43_0->mutable_f_3();
  Message8::M4::M7::M14::M32* v45 = v44->mutable_f_5();
  Message8::M4::M7::M14::M32::M46* v46 = v45->mutable_f_5();
  v46->set_f_0(Message8::M4::M7::M14::M32::M46::E20_CONST_5);
  Message8::M4::M7::M14::M33* v47_0 = v44->add_f_8();
  v47_0->set_f_0(0xc);
  Message8::M3* v48 = message->mutable_f_5();
  Message8::M3::M9* v49 = v48->mutable_f_6();
  (void)v49;  // Suppresses clang-tidy.
  Message8::M3::M10* v50_0 = v48->add_f_7();
  Message8::M3::M10::M22* v51 = v50_0->mutable_f_8();
  v51->set_f_5(0xf127b30);
  v51->set_f_0(0.592087);
  v51->set_f_1(0x7a);
  v51->set_f_4(0.815406);
  Message8::M3::M10::M20* v52 = v50_0->mutable_f_5();
  (void)v52;  // Suppresses clang-tidy.
  Message8::M3::M10::M18* v53 = v50_0->mutable_f_3();
  Message8::M3::M10::M18::M35* v54 = v53->mutable_f_4();
  (void)v54;  // Suppresses clang-tidy.
  Message8::M3::M10::M18::M29* v55 = v53->mutable_f_3();
  v55->set_f_4(false);
  v55->set_f_5(0.773745);
  v55->set_f_7(false);
  v55->set_f_3(0x3ebf);
  v55->set_f_1(0x47);
}
void Message8_Set_3(Message8* message, std::string* s) {
  Message8::M2* v0 = message->mutable_f_4();
  Message8::M2::M11* v1 = v0->mutable_f_4();
  Message8::M2::M11::M13* v2 = v1->mutable_f_3();
  Message8::M2::M11::M13::M34* v3_0 = v2->add_f_5();
  v3_0->set_f_0(s->substr(0, 2));
  Message8::M2::M11::M13::M31* v4 = v2->mutable_f_4();
  v4->set_f_0(0x10);
  Message8::M2::M11::M13::M36* v5_0 = v2->add_f_6();
  v5_0->set_f_7(s->substr(0, 3));
  v5_0->set_f_2(0x18);
  v5_0->set_f_9(0x4ce54ad4);
  v5_0->set_f_4(s->substr(0, 7));
  Message8::M2::M11::M23* v6 = v1->mutable_f_4();
  Message8::M2::M11::M23::M26* v7 = v6->mutable_f_7();
  v7->set_f_0(0.022396);
  Message8::M2::M11::M23::M26::M38* v8_0 = v7->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48* v9 = v8_0->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M55* v10_0 = v9->add_f_66();
  v10_0->set_f_0(s->substr(0, 7));
  v9->set_f_37(0x45);
  Message8::M2::M11::M23::M26::M38::M48::M56* v11 = v9->mutable_f_68();
  Message8::M2::M11::M23::M26::M38::M48::M56::M61* v12 = v11->mutable_f_4();
  v12->add_f_0(0x79c06);
  v12->add_f_0(0xa);
  Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64* v13 =
      v12->mutable_f_4();
  (void)v13;  // Suppresses clang-tidy.
  v9->set_f_13(s->substr(0, 5));
  v9->set_f_27(Message8::M2::M11::M23::M26::M38::M48::E25_CONST_5);
  int32_t array_0[10] = {
      0xd75724f, 0x135d44, 0x3d47,    0x1eb4547, 0x2c,
      0xd6f4391, 0x1357db, 0x6128d23, 0x124e70e, 0x2648d95,
  };
  for (auto v : array_0) {
    v9->add_f_2(v);
  }
  v9->set_f_14(s->substr(0, 172));
  v9->set_f_26(0x7b);
  v9->set_f_28(0.311926);
  v9->set_f_18(0x27);
  v9->set_f_21(0xa71c575);
  Message8::M2::M11::M23::M26::M38::M48::M54* v14 = v9->mutable_f_64();
  Message8::M2::M11::M23::M26::M38::M48::M54::M60* v15 = v14->mutable_f_7();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_0(0x5a);
  Message8::M2::M11::M23::M26::M38::M48::M54::M62* v16_0 = v14->add_f_9();
  v16_0->set_f_1(s->substr(0, 22));
  v16_0->set_f_0(Message8::M2::M11::M23::M26::M38::M48::M54::M62::E34_CONST_3);
  v16_0->set_f_2(0.165842);
  Message8::M2::M11::M23::M26::M38::M48::M54::M62* v16_1 = v14->add_f_9();
  v16_1->set_f_1(s->substr(0, 28));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59* v17 = v14->mutable_f_6();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63* v18 =
      v17->mutable_f_2();
  v18->set_f_2(0x5417b736fcb5621d);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68* v19_0 =
      v18->add_f_5();
  v19_0->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::E38_CONST_1);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69* v20 =
      v19_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70* v21 =
      v20->mutable_f_4();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71*
      v22 = v21->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v23_0 = v22->add_f_2();
  v23_0->set_f_0(s->substr(0, 1));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v24 = v23_0->mutable_f_3();
  v24->set_f_4(s->substr(0, 6));
  v24->set_f_0(0x5128bcc514ba25);
  v24->set_f_1(0x41);
  v24->set_f_2(0x377ba1eddef654);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73::M74* v25 = v24->mutable_f_12();
  (void)v25;  // Suppresses clang-tidy.
  v22->set_f_0(true);
  v20->set_f_1(0.208729);
  v17->set_f_0(0xa422c37d54c5db);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65* v26_0 = v17->add_f_3();
  v26_0->set_f_3(0x6b);
  v26_0->set_f_0(0.858345);
  v26_0->set_f_4(0x1200);
  v9->set_f_3(s->substr(0, 18));
  v9->set_f_19(Message8::M2::M11::M23::M26::M38::M48::E24_CONST_3);
  v9->set_f_35(0x1f);
  v9->set_f_39(Message8::M2::M11::M23::M26::M38::M48::E28_CONST_5);
  v9->add_f_32(0x681);
  v9->set_f_7(0x3d);
  v9->add_f_25(0xc);
  v9->set_f_1(s->substr(0, 7));
  v9->set_f_12(s->substr(0, 31));
  v6->set_f_3(0xf57d6);
  v6->set_f_0(0x6c81ffa);
  v1->set_f_1(0x1c);
  Message8::M1* v27 = message->mutable_f_2();
  Message8::M1::M5* v28_0 = v27->add_f_2();
  Message8::M1::M5::M17* v29_0 = v28_0->add_f_5();
  Message8::M1::M5::M17::M25* v30_0 = v29_0->add_f_3();
  Message8::M1::M5::M17::M25::M44* v31 = v30_0->mutable_f_2();
  v31->add_f_0(0x47652);
  v31->add_f_0(0x1853768);
  v29_0->set_f_0(0xbfccfbd);
  Message8::M1::M5::M21* v32 = v28_0->mutable_f_6();
  Message8::M1::M5::M21::M24* v33 = v32->mutable_f_2();
  Message8::M1::M5::M21::M24::M42* v34 = v33->mutable_f_2();
  Message8::M1::M5::M21::M24::M42::M47* v35 = v34->mutable_f_11();
  Message8::M1::M5::M21::M24::M42::M47::M52* v36_0 = v35->add_f_6();
  v36_0->set_f_0(0.262258);
  Message8::M1::M5::M21::M24::M42::M47::M51* v37 = v35->mutable_f_4();
  v37->set_f_1(s->substr(0, 1));
  v37->set_f_3(s->substr(0, 2));
  v35->set_f_0(0xff4e4f1f424dd9);
  Message8::M1::M5::M21::M24::M42::M47::M50* v38_0 = v35->add_f_3();
  (void)v38_0;  // Suppresses clang-tidy.
  v34->set_f_1(true);
  v34->set_f_3(s->substr(0, 1));
  v34->set_f_4(0x48);
  v34->set_f_2(0x23);
  v32->set_f_0(0x24);
  v27->set_f_0(Message8::M1::E2_CONST_3);
  Message8::M4* v39_0 = message->add_f_6();
  Message8::M4::M12* v40_0 = v39_0->add_f_10();
  v40_0->set_f_7(0x58984def);
  v40_0->set_f_24(0xa2b5190);
  v40_0->set_f_12(0x3e);
  v40_0->set_f_56(true);
  v40_0->set_f_60(s->substr(0, 7));
  v40_0->set_f_38(0.737867);
  v40_0->set_f_44(0x869);
  v40_0->set_f_8(0x66d3e73ca);
  v40_0->set_f_41(0x2b81a);
  v40_0->set_f_68(Message8::M4::M12::E12_CONST_3);
  v40_0->set_f_2(0.832313);
  v40_0->set_f_52(Message8::M4::M12::E11_CONST_1);
  v40_0->set_f_34(false);
  v40_0->set_f_37(0x20);
  v40_0->add_f_64(0xa7d2fbd);
  v40_0->set_f_33(0.301587);
  v40_0->set_f_28(0x3c471f4228c01f09);
  Message8::M4::M12::M15* v41 = v40_0->mutable_f_93();
  Message8::M4::M12::M15::M28* v42 = v41->mutable_f_2();
  Message8::M4::M12::M15::M28::M45* v43 = v42->mutable_f_8();
  v43->set_f_4(0x2b);
  v43->set_f_1(0xb);
  Message8::M4::M12::M15::M28::M43* v44_0 = v42->add_f_7();
  (void)v44_0;  // Suppresses clang-tidy.
  v40_0->set_f_48(0.234045);
  v40_0->set_f_35(0x3c);
  v40_0->set_f_5(0.880064);
  v40_0->set_f_50(Message8::M4::M12::E10_CONST_5);
  v40_0->set_f_0(s->substr(0, 27));
  v40_0->set_f_21(s->substr(0, 1));
  v39_0->set_f_1(0x1e);
  v39_0->set_f_4(0.148504);
  Message8::M4::M7* v45_0 = v39_0->add_f_9();
  v45_0->set_f_0(0x39);
  Message8::M4::M7::M14* v46 = v45_0->mutable_f_3();
  Message8::M4::M7::M14::M33* v47_0 = v46->add_f_8();
  (void)v47_0;  // Suppresses clang-tidy.
  v46->set_f_0(0x80102455);
  Message8::M4::M7::M14::M32* v48 = v46->mutable_f_5();
  Message8::M4::M7::M14::M32::M46* v49 = v48->mutable_f_5();
  v49->set_f_3(0.263896);
  v49->set_f_0(Message8::M4::M7::M14::M32::M46::E20_CONST_4);
  Message8::M4* v39_1 = message->add_f_6();
  Message8::M4::M7* v50_0 = v39_1->add_f_9();
  Message8::M4::M7::M14* v51 = v50_0->mutable_f_3();
  v51->set_f_0(0x10e66b);
  Message8::M4::M7::M14::M33* v52_0 = v51->add_f_8();
  v52_0->set_f_0(0x1f735);
  Message8::M4::M7::M14::M32* v53 = v51->mutable_f_5();
  Message8::M4::M7::M14::M32::M40* v54 = v53->mutable_f_4();
  (void)v54;  // Suppresses clang-tidy.
  Message8::M4::M7::M14::M32::M46* v55 = v53->mutable_f_5();
  v55->set_f_1(s->substr(0, 1));
  v55->add_f_5(0x17fc);
  v55->set_f_4(Message8::M4::M7::M14::M32::M46::E21_CONST_3);
  v55->set_f_0(Message8::M4::M7::M14::M32::M46::E20_CONST_2);
  Message8::M4::M12* v56_0 = v39_1->add_f_10();
  v56_0->set_f_52(Message8::M4::M12::E11_CONST_4);
  v56_0->set_f_50(Message8::M4::M12::E10_CONST_1);
  v56_0->set_f_49(0xf53dbab1dd2a);
  v56_0->set_f_54(0.255209);
  v56_0->set_f_40(s->substr(0, 6));
  v56_0->set_f_19(0x79aeae12);
  v56_0->set_f_16(0xd86644d);
  v56_0->set_f_68(Message8::M4::M12::E12_CONST_2);
  int32_t array_1[21] = {
      0x12c8b0, 0x13a5ae,  0x144c93, 0x60346,  0x2f20aa7, 0xd10f2,   0x22,
      0xd7a,    0x176fc0,  0x5a,     0x1b20,   0xc06424c, 0xe14bcbb, 0x7ae1317,
      0x163e04, 0x4f882a9, 0x17,     0x1a866a, 0x5757863, 0xeb4f754, 0x9c21,
  };
  for (auto v : array_1) {
    v56_0->add_f_4(v);
  }
  v56_0->set_f_26(0.397460);
  v56_0->add_f_22(Message8::M4::M12::E7_CONST_4);
  v56_0->add_f_22(Message8::M4::M12::E7_CONST_1);
  v56_0->add_f_22(Message8::M4::M12::E7_CONST_3);
  v56_0->set_f_67(0.578847);
  v56_0->set_f_9(0.657933);
  v56_0->set_f_11(0x6679a4b3b13a5971);
  v56_0->set_f_20(0x7c);
  v56_0->set_f_25(0x1a4c69e533b3d);
  v56_0->set_f_27(0xa1e6661);
  v56_0->set_f_35(0xe2797b47c38a8b);
  v56_0->set_f_31(s->substr(0, 4));
  v56_0->set_f_5(0.517503);
  v56_0->set_f_32(0.737789);
  v56_0->set_f_30(0x26296e26fbcd84);
  v56_0->set_f_63(0x5fccccf9eed295);
  Message8::M4::M12::M15* v57 = v56_0->mutable_f_93();
  Message8::M4::M12::M15::M28* v58 = v57->mutable_f_2();
  Message8::M4::M12::M15::M28::M41* v59_0 = v58->add_f_5();
  v59_0->set_f_0(Message8::M4::M12::M15::M28::M41::E17_CONST_5);
  Message8::M4::M12::M15::M28::M43* v60_0 = v58->add_f_7();
  v60_0->set_f_0(Message8::M4::M12::M15::M28::M43::E18_CONST_3);
  Message8::M4::M12::M15::M28::M45* v61 = v58->mutable_f_8();
  v61->set_f_1(0x37ed);
  v61->set_f_2(false);
  v58->set_f_0(0.488624);
  v56_0->set_f_57(s->substr(0, 59));
  v56_0->set_f_28(0x3809d44fb4f61abc);
  v56_0->set_f_65(s->substr(0, 3));
  v56_0->set_f_58(0x8e73e2d);
  v56_0->set_f_60(s->substr(0, 28));
  v56_0->set_f_37(0x7a);
  v56_0->set_f_7(0x1fed);
  v56_0->set_f_13(s->substr(0, 20));
  int array_2[5] = {
      7, 6, 32, 56, 25,
  };
  for (size_t i = 0; i < 5; ++i) {
    v39_1->add_f_5(s->substr(0, array_2[i]));
  }
  v39_1->set_f_1(0xc7aee86);
  v39_1->set_f_2(0x7b);
  v39_1->set_f_4(0.744994);
  Message8::M3* v62 = message->mutable_f_5();
  Message8::M3::M9* v63 = v62->mutable_f_6();
  (void)v63;  // Suppresses clang-tidy.
  Message8::M3::M10* v64_0 = v62->add_f_7();
  Message8::M3::M10::M20* v65 = v64_0->mutable_f_5();
  (void)v65;  // Suppresses clang-tidy.
  Message8::M3::M10::M22* v66 = v64_0->mutable_f_8();
  (void)v66;  // Suppresses clang-tidy.
  Message8::M3::M10::M18* v67 = v64_0->mutable_f_3();
  Message8::M3::M10::M18::M29* v68 = v67->mutable_f_3();
  v68->set_f_7(false);
  v68->set_f_4(false);
  v68->set_f_0(0x16be);
  v68->set_f_3(0x552244d);
}
void Message8_Set_4(Message8* message, std::string* s) {
  Message8::M4* v0_0 = message->add_f_6();
  v0_0->set_f_2(0x35fe398);
  v0_0->set_f_0(0x43);
  Message8::M4::M12* v1_0 = v0_0->add_f_10();
  v1_0->set_f_67(0.580381);
  v1_0->set_f_28(0x1178863440299cef);
  v1_0->set_f_17(Message8::M4::M12::E6_CONST_2);
  v1_0->set_f_63(0xb8cf97c224a9b1);
  v1_0->set_f_30(0x31fb081f20e);
  v1_0->add_f_18(s->substr(0, 15));
  v1_0->add_f_18(s->substr(0, 25));
  v1_0->set_f_27(0x7a);
  int32_t array_0[8] = {
      0xc3dccb3, 0xdc04af1, 0x12163,   0x7632b39,
      0xde52a,   0x42fa116, 0xb76d39a, 0x7028306,
  };
  for (auto v : array_0) {
    v1_0->add_f_55(v);
  }
  v1_0->add_f_64(0x1ad0bd);
  v1_0->add_f_64(0x33a4eaa);
  v1_0->add_f_64(0x823bdb5);
  v1_0->set_f_59(0xdec);
  v1_0->set_f_23(0x15345bf25e0);
  v1_0->set_f_69(0x17c78c0ce2942);
  Message8::M4::M12::M15* v2 = v1_0->mutable_f_93();
  Message8::M4::M12::M15::M28* v3 = v2->mutable_f_2();
  v3->set_f_0(0.238803);
  Message8::M4::M12::M15::M28::M45* v4 = v3->mutable_f_8();
  v4->set_f_4(0x79fb6be);
  Message8::M4::M12::M15::M28::M43* v5_0 = v3->add_f_7();
  (void)v5_0;  // Suppresses clang-tidy.
  v1_0->set_f_8(0x109e51c);
  v1_0->set_f_9(0.348402);
  v1_0->set_f_45(Message8::M4::M12::E8_CONST_3);
  v1_0->set_f_48(0.905129);
  v1_0->set_f_58(0x71);
  v1_0->set_f_2(0.546591);
  v1_0->set_f_19(0x75d7706a);
  Message8::M4::M12::M19* v6 = v1_0->mutable_f_95();
  (void)v6;  // Suppresses clang-tidy.
  v1_0->set_f_53(0x16bda3d25bd832ae);
  v1_0->set_f_38(0.065595);
  v1_0->set_f_16(0x4a8d288);
  v1_0->add_f_15(0x3d58);
  v1_0->set_f_66(0.409254);
  v1_0->set_f_34(true);
  int32_t array_1[6] = {
      0x45ed442, 0xa2737fb, 0x7a56815, 0x1d4b18, 0x861a100, 0xb7a8085,
  };
  for (auto v : array_1) {
    v1_0->add_f_4(v);
  }
  v1_0->set_f_36(0x1f89);
  v1_0->set_f_12(0x9);
  Message8::M4::M7* v7_0 = v0_0->add_f_9();
  Message8::M4::M7::M14* v8 = v7_0->mutable_f_3();
  v8->set_f_0(0x6fc7ff3fce3f1);
  Message8::M4::M7::M14::M33* v9_0 = v8->add_f_8();
  v9_0->set_f_0(0xb692b8);
  Message8::M4::M7::M14::M33* v9_1 = v8->add_f_8();
  v9_1->set_f_0(0x5d671d7666106d);
  Message8::M4::M7::M14::M32* v10 = v8->mutable_f_5();
  v10->set_f_0(s->substr(0, 1));
  v10->set_f_1(s->substr(0, 7));
  Message8::M4::M7::M14::M32::M46* v11 = v10->mutable_f_5();
  v11->set_f_4(Message8::M4::M7::M14::M32::M46::E21_CONST_4);
  v11->set_f_3(0.150132);
  v0_0->set_f_1(0x4971c8f);
  Message8::M1* v12 = message->mutable_f_2();
  Message8::M1::M5* v13_0 = v12->add_f_2();
  Message8::M1::M5::M17* v14_0 = v13_0->add_f_5();
  v14_0->set_f_0(0x30);
  Message8::M1::M5::M21* v15 = v13_0->mutable_f_6();
  Message8::M1::M5::M21::M24* v16 = v15->mutable_f_2();
  Message8::M1::M5::M21::M24::M42* v17 = v16->mutable_f_2();
  v17->set_f_1(true);
  Message8::M1::M5::M21::M24::M42::M47* v18 = v17->mutable_f_11();
  Message8::M1::M5::M21::M24::M42::M47::M49* v19 = v18->mutable_f_2();
  v19->set_f_0(0x28);
  Message8::M1::M5::M21::M24::M42::M47::M52* v20_0 = v18->add_f_6();
  (void)v20_0;  // Suppresses clang-tidy.
  Message8::M1::M5::M21::M24::M42::M47::M50* v21_0 = v18->add_f_3();
  (void)v21_0;  // Suppresses clang-tidy.
  Message8::M1::M5::M21::M24::M42::M47::M51* v22 = v18->mutable_f_4();
  (void)v22;  // Suppresses clang-tidy.
  v18->set_f_0(0xfe14e99);
  v17->set_f_3(s->substr(0, 8));
  v17->set_f_2(0x16610b3);
  v16->set_f_0(s->substr(0, 8));
  Message8::M1::M5::M21::M30* v23 = v15->mutable_f_3();
  v23->set_f_0(Message8::M1::M5::M21::M30::E13_CONST_3);
  Message8::M1::M5::M21::M30::M37* v24 = v23->mutable_f_2();
  (void)v24;  // Suppresses clang-tidy.
  Message8::M3* v25 = message->mutable_f_5();
  Message8::M3::M9* v26 = v25->mutable_f_6();
  (void)v26;  // Suppresses clang-tidy.
  Message8::M3::M10* v27_0 = v25->add_f_7();
  Message8::M3::M10::M18* v28 = v27_0->mutable_f_3();
  Message8::M3::M10::M18::M29* v29 = v28->mutable_f_3();
  v29->set_f_6(0x13b2d6);
  v29->set_f_3(0x6739);
  v29->set_f_4(false);
  v29->set_f_7(true);
  v29->set_f_0(0x30);
  v27_0->set_f_0(true);
  Message8::M3::M10::M22* v30 = v27_0->mutable_f_8();
  v30->set_f_7(0x4);
  v30->set_f_5(0x3f);
  v30->set_f_3(s->substr(0, 29));
  Message8::M3::M10::M20* v31 = v27_0->mutable_f_5();
  (void)v31;  // Suppresses clang-tidy.
  Message8::M2* v32 = message->mutable_f_4();
  Message8::M2::M11* v33 = v32->mutable_f_4();
  Message8::M2::M11::M23* v34 = v33->mutable_f_4();
  Message8::M2::M11::M23::M26* v35 = v34->mutable_f_7();
  Message8::M2::M11::M23::M26::M38* v36_0 = v35->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48* v37 = v36_0->mutable_f_2();
  v37->add_f_5(Message8::M2::M11::M23::M26::M38::M48::E23_CONST_2);
  v37->set_f_40(0x2f5b7d803);
  Message8::M2::M11::M23::M26::M38::M48::M54* v38 = v37->mutable_f_64();
  Message8::M2::M11::M23::M26::M38::M48::M54::M58* v39_0 = v38->add_f_5();
  v39_0->set_f_0(s->substr(0, 6));
  v38->set_f_0(0x1096);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59* v40 = v38->mutable_f_6();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M65* v41_0 = v40->add_f_3();
  v41_0->set_f_0(0.379330);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63* v42 =
      v40->mutable_f_2();
  v42->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::E36_CONST_4);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68* v43_0 =
      v42->add_f_5();
  v43_0->set_f_0(
      Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::E38_CONST_4);
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69* v44 =
      v43_0->mutable_f_3();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70* v45 =
      v44->mutable_f_4();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71*
      v46 = v45->mutable_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v47_0 = v46->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v48 = v47_0->mutable_f_3();
  v48->set_f_1(0x33);
  v48->set_f_6(Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
                   M70::M71::M72::M73::E39_CONST_3);
  v48->add_f_5(0xf4fc00f);
  v48->set_f_0(0x3c36ddefe);
  v47_0->set_f_0(s->substr(0, 12));
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::M72*
      v47_1 = v46->add_f_2();
  Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70::M71::
      M72::M73* v49 = v47_1->mutable_f_3();
  v49->set_f_1(0x5);
  v49->set_f_7(s->substr(0, 8));
  v45->set_f_0(true);
  v43_0->set_f_1(s->substr(0, 6));
  int64_t array_2[25] = {
      0x4,      0x104a32,  0x4f235,   0xdec27,   0x5,      0xa5188fc, 0x57,
      0x1587eb, 0x28,      0x944f966, 0x23,      0x1daf25, 0x185a,    0x1e912b,
      0x279b2,  0xf85eb96, 0x1d7fee,  0x721af51, 0x133b,   0x2c,      0x2fc68,
      0x1e6e3e, 0x1a7066,  0x67,      0x64,
  };
  for (auto v : array_2) {
    v37->add_f_32(v);
  }
  v37->set_f_36(Message8::M2::M11::M23::M26::M38::M48::E27_CONST_1);
  v37->set_f_15(0x1c);
  v37->set_f_30(s->substr(0, 23));
  v37->set_f_22(0.409521);
  v37->set_f_42(s->substr(0, 8));
  v37->set_f_35(0xf101a5d);
  int32_t array_3[10] = {
      0x6e2c0f1, 0x16dad4, 0xa0b1aac, 0x8b06a14, 0x15,
      0xa31f499, 0x271a,   0x50,      0x395c,    0x66f0157,
  };
  for (auto v : array_3) {
    v37->add_f_44(v);
  }
  int32_t array_4[9] = {
      0x24,    0xa18e,    0xbc9ff63, 0xdccce08, 0xd06,
      0x8900c, 0xf43b552, 0xed10e04, 0xddec37b,
  };
  for (auto v : array_4) {
    v37->add_f_25(v);
  }
  v37->set_f_8(s->substr(0, 116));
  v37->set_f_6(0x15eb452);
  v37->set_f_9(s->substr(0, 6));
  v37->set_f_26(0x339ef3683);
  v37->set_f_17(0.679046);
  v37->set_f_13(s->substr(0, 19));
  v37->set_f_19(Message8::M2::M11::M23::M26::M38::M48::E24_CONST_2);
  v37->set_f_12(s->substr(0, 115));
  Message8::M2::M11::M23::M26::M38::M48::M56* v50 = v37->mutable_f_68();
  Message8::M2::M11::M23::M26::M38::M48::M56::M61* v51 = v50->mutable_f_4();
  v51->add_f_0(0x1eff);
  v51->add_f_0(0x1de6);
  v51->add_f_0(0x11474d);
  Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64* v52 =
      v51->mutable_f_4();
  v52->set_f_0(0x913ddbd);
  v37->set_f_1(s->substr(0, 3));
  v34->set_f_2(0x29f61d8d52190244);
  Message8::M2::M11::M13* v53 = v33->mutable_f_3();
  Message8::M2::M11::M13::M36* v54_0 = v53->add_f_6();
  v54_0->set_f_2(0x184e);
  v54_0->set_f_11(0xc4e6be8de9b3a7);
  v54_0->set_f_12(0x4de220ae);
  v54_0->set_f_7(s->substr(0, 4));
  v54_0->set_f_5(0x237c);
  v54_0->set_f_6(0x76);
  v54_0->set_f_4(s->substr(0, 1));
}
void Message8_Get_1(Message8* message) {
  const Message8::M2& v0 = (*message).f_4();
  const Message8::M2::M11& v1 = v0.f_4();
  Receive(v1.f_0());
  Receive(v1.f_1());
  const Message8::M2::M11::M13& v2 = v1.f_3();
  Receive(v2.f_0());
  for (const auto& v3 : v2.f_6()) {
    Receive(v3.f_5());
    Receive(v3.f_6());
    for (int i = 0; i < v3.f_14_size(); ++i) {
      Receive(v3.f_14(i));
    }
    Receive(v3.f_1());
    Receive(v3.f_12());
    Receive(v3.f_10());
    Receive(v3.f_8());
    Receive(v3.f_2());
    Receive(v3.f_13());
    Receive(v3.f_0());
    Receive(v3.f_4());
    Receive(v3.f_3());
    Receive(v3.f_9());
    Receive(v3.f_7());
    Receive(v3.f_11());
  }
  for (const auto& v4 : v2.f_5()) {
    Receive(v4.f_0());
  }
  const Message8::M2::M11::M13::M31& v5 = v2.f_4();
  Receive(v5.f_0());
  const Message8::M2::M11::M23& v6 = v1.f_4();
  const Message8::M2::M11::M23::M27& v7 = v6.f_8();
  Receive(v7.f_0());
  Receive(v6.f_1());
  Receive(v6.f_0());
  Receive(v6.f_3());
  Receive(v6.f_2());
  const Message8::M2::M11::M23::M26& v8 = v6.f_7();
  Receive(v8.f_0());
  for (const auto& v9 : v8.f_2()) {
    const Message8::M2::M11::M23::M26::M38::M48& v10 = v9.f_2();
    Receive(v10.f_23());
    Receive(v10.f_6());
    Receive(v10.f_43());
    Receive(v10.f_33());
    Receive(v10.f_8());
    Receive(v10.f_11());
    Receive(v10.f_41());
    for (const auto& v11 : v10.f_66()) {
      Receive(v11.f_0());
    }
    Receive(v10.f_46());
    Receive(v10.f_18());
    Receive(v10.f_28());
    for (int i = 0; i < v10.f_2_size(); ++i) {
      Receive(v10.f_2(i));
    }
    for (int i = 0; i < v10.f_44_size(); ++i) {
      Receive(v10.f_44(i));
    }
    Receive(v10.f_36());
    Receive(v10.f_7());
    Receive(v10.f_15());
    Receive(v10.f_31());
    Receive(v10.f_4());
    Receive(v10.f_37());
    Receive(v10.f_3());
    Receive(v10.f_27());
    for (int i = 0; i < v10.f_32_size(); ++i) {
      Receive(v10.f_32(i));
    }
    Receive(v10.f_13());
    Receive(v10.f_42());
    Receive(v10.f_26());
    for (int i = 0; i < v10.f_5_size(); ++i) {
      Receive(v10.f_5(i));
    }
    const Message8::M2::M11::M23::M26::M38::M48::M56& v12 = v10.f_68();
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61& v13 = v12.f_4();
    for (int i = 0; i < v13.f_0_size(); ++i) {
      Receive(v13.f_0(i));
    }
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64& v14 = v13.f_4();
    Receive(v14.f_0());
    for (const auto& v15 : v14.f_2()) {
      for (int i = 0; i < v15.f_0_size(); ++i) {
        Receive(v15.f_0(i));
      }
    }
    Receive(v12.f_1());
    Receive(v12.f_0());
    Receive(v10.f_19());
    Receive(v10.f_9());
    Receive(v10.f_10());
    Receive(v10.f_20());
    Receive(v10.f_29());
    Receive(v10.f_22());
    Receive(v10.f_12());
    Receive(v10.f_35());
    Receive(v10.f_40());
    Receive(v10.f_38());
    const Message8::M2::M11::M23::M26::M38::M48::M54& v16 = v10.f_64();
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59& v17 = v16.f_6();
    for (const auto& v18 : v17.f_3()) {
      for (const auto& v19 : v18.f_8()) {
        Receive(v19.f_0());
      }
      Receive(v18.f_0());
      Receive(v18.f_3());
      Receive(v18.f_1());
      Receive(v18.f_2());
      Receive(v18.f_4());
    }
    Receive(v17.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63& v20 = v17.f_2();
    Receive(v20.f_0());
    for (const auto& v21 : v20.f_5()) {
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69&
          v22 = v21.f_3();
      Receive(v22.f_0());
      Receive(v22.f_1());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70&
          v23 = v22.f_4();
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
          M70::M71& v24 = v23.f_2();
      Receive(v24.f_0());
      for (const auto& v25 : v24.f_2()) {
        Receive(v25.f_0());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73& v26 = v25.f_3();
        for (int i = 0; i < v26.f_5_size(); ++i) {
          Receive(v26.f_5(i));
        }
        Receive(v26.f_3());
        Receive(v26.f_0());
        Receive(v26.f_7());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73::M74& v27 = v26.f_12();
        for (int i = 0; i < v27.f_0_size(); ++i) {
          Receive(v27.f_0(i));
        }
        Receive(v26.f_6());
        Receive(v26.f_4());
        Receive(v26.f_1());
        Receive(v26.f_2());
      }
      Receive(v23.f_0());
      Receive(v21.f_0());
      Receive(v21.f_1());
    }
    Receive(v20.f_1());
    Receive(v20.f_2());
    Receive(v16.f_0());
    for (const auto& v28 : v16.f_5()) {
      Receive(v28.f_0());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M60& v29 = v16.f_7();
    Receive(v29.f_0());
    for (const auto& v30 : v16.f_9()) {
      Receive(v30.f_3());
      Receive(v30.f_1());
      Receive(v30.f_0());
      Receive(v30.f_2());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M57& v31 = v16.f_4();
    Receive(v31.f_0());
    Receive(v10.f_0());
    Receive(v10.f_39());
    for (int i = 0; i < v10.f_25_size(); ++i) {
      Receive(v10.f_25(i));
    }
    Receive(v10.f_34());
    Receive(v10.f_16());
    Receive(v10.f_30());
    Receive(v10.f_21());
    Receive(v10.f_17());
    Receive(v10.f_14());
    Receive(v10.f_45());
    const Message8::M2::M11::M23::M26::M38::M48::M53& v32 = v10.f_62();
    for (int i = 0; i < v32.f_0_size(); ++i) {
      Receive(v32.f_0(i));
    }
    Receive(v10.f_24());
    Receive(v10.f_1());
    Receive(v9.f_0());
  }
  for (const auto& v33 : v8.f_3()) {
    Receive(v33.f_0());
  }
  const Message8::M2::M6& v34 = v0.f_2();
  for (int i = 0; i < v34.f_0_size(); ++i) {
    Receive(v34.f_0(i));
  }
  Receive(v0.f_0());
  Receive((*message).f_0());
  const Message8::M3& v35 = (*message).f_5();
  const Message8::M3::M9& v36 = v35.f_6();
  Receive(v36.f_0());
  const Message8::M3::M8& v37 = v35.f_3();
  Receive(v37.f_0());
  Receive(v35.f_0());
  for (const auto& v38 : v35.f_7()) {
    const Message8::M3::M10::M22& v39 = v38.f_8();
    Receive(v39.f_7());
    Receive(v39.f_1());
    Receive(v39.f_3());
    Receive(v39.f_0());
    Receive(v39.f_5());
    Receive(v39.f_6());
    Receive(v39.f_2());
    Receive(v39.f_4());
    const Message8::M3::M10::M18& v40 = v38.f_3();
    Receive(v40.f_0());
    const Message8::M3::M10::M18::M29& v41 = v40.f_3();
    Receive(v41.f_1());
    Receive(v41.f_7());
    Receive(v41.f_3());
    Receive(v41.f_6());
    Receive(v41.f_4());
    Receive(v41.f_5());
    Receive(v41.f_2());
    Receive(v41.f_0());
    const Message8::M3::M10::M18::M35& v42 = v40.f_4();
    Receive(v42.f_0());
    const Message8::M3::M10::M20& v43 = v38.f_5();
    Receive(v43.f_0());
    Receive(v38.f_0());
  }
  const Message8::M1& v44 = (*message).f_2();
  for (const auto& v45 : v44.f_2()) {
    for (const auto& v46 : v45.f_5()) {
      Receive(v46.f_0());
      for (const auto& v47 : v46.f_3()) {
        Receive(v47.f_0());
        const Message8::M1::M5::M17::M25::M44& v48 = v47.f_2();
        for (int i = 0; i < v48.f_0_size(); ++i) {
          Receive(v48.f_0(i));
        }
      }
    }
    const Message8::M1::M5::M21& v49 = v45.f_6();
    const Message8::M1::M5::M21::M30& v50 = v49.f_3();
    Receive(v50.f_0());
    const Message8::M1::M5::M21::M30::M37& v51 = v50.f_2();
    Receive(v51.f_0());
    const Message8::M1::M5::M21::M24& v52 = v49.f_2();
    Receive(v52.f_0());
    const Message8::M1::M5::M21::M24::M42& v53 = v52.f_2();
    Receive(v53.f_1());
    Receive(v53.f_2());
    const Message8::M1::M5::M21::M24::M42::M47& v54 = v53.f_11();
    for (const auto& v55 : v54.f_6()) {
      Receive(v55.f_0());
    }
    for (const auto& v56 : v54.f_3()) {
      Receive(v56.f_0());
    }
    const Message8::M1::M5::M21::M24::M42::M47::M49& v57 = v54.f_2();
    Receive(v57.f_0());
    const Message8::M1::M5::M21::M24::M42::M47::M51& v58 = v54.f_4();
    Receive(v58.f_2());
    Receive(v58.f_0());
    Receive(v58.f_3());
    Receive(v58.f_1());
    Receive(v54.f_0());
    Receive(v53.f_3());
    Receive(v53.f_4());
    Receive(v53.f_0());
    Receive(v49.f_0());
    Receive(v45.f_0());
    const Message8::M1::M5::M16& v59 = v45.f_3();
    Receive(v59.f_0());
  }
  Receive(v44.f_0());
  for (const auto& v60 : (*message).f_6()) {
    Receive(v60.f_1());
    Receive(v60.f_4());
    Receive(v60.f_3());
    for (int i = 0; i < v60.f_5_size(); ++i) {
      Receive(v60.f_5(i));
    }
    for (const auto& v61 : v60.f_9()) {
      Receive(v61.f_0());
      const Message8::M4::M7::M14& v62 = v61.f_3();
      const Message8::M4::M7::M14::M32& v63 = v62.f_5();
      const Message8::M4::M7::M14::M32::M40& v64 = v63.f_4();
      for (int i = 0; i < v64.f_0_size(); ++i) {
        Receive(v64.f_0(i));
      }
      Receive(v63.f_0());
      Receive(v63.f_1());
      const Message8::M4::M7::M14::M32::M46& v65 = v63.f_5();
      Receive(v65.f_0());
      Receive(v65.f_3());
      for (int i = 0; i < v65.f_5_size(); ++i) {
        Receive(v65.f_5(i));
      }
      Receive(v65.f_1());
      Receive(v65.f_4());
      Receive(v65.f_2());
      Receive(v62.f_0());
      for (const auto& v66 : v62.f_8()) {
        Receive(v66.f_0());
      }
    }
    Receive(v60.f_2());
    for (const auto& v67 : v60.f_10()) {
      Receive(v67.f_31());
      for (int i = 0; i < v67.f_55_size(); ++i) {
        Receive(v67.f_55(i));
      }
      for (int i = 0; i < v67.f_4_size(); ++i) {
        Receive(v67.f_4(i));
      }
      for (int i = 0; i < v67.f_22_size(); ++i) {
        Receive(v67.f_22(i));
      }
      Receive(v67.f_54());
      Receive(v67.f_61());
      Receive(v67.f_17());
      Receive(v67.f_34());
      Receive(v67.f_35());
      Receive(v67.f_0());
      Receive(v67.f_19());
      Receive(v67.f_39());
      Receive(v67.f_59());
      Receive(v67.f_20());
      Receive(v67.f_66());
      Receive(v67.f_57());
      Receive(v67.f_8());
      Receive(v67.f_42());
      Receive(v67.f_67());
      Receive(v67.f_12());
      Receive(v67.f_69());
      Receive(v67.f_53());
      for (int i = 0; i < v67.f_15_size(); ++i) {
        Receive(v67.f_15(i));
      }
      Receive(v67.f_49());
      const Message8::M4::M12::M19& v68 = v67.f_95();
      Receive(v68.f_0());
      Receive(v67.f_6());
      Receive(v67.f_30());
      Receive(v67.f_25());
      Receive(v67.f_1());
      Receive(v67.f_44());
      Receive(v67.f_10());
      Receive(v67.f_14());
      Receive(v67.f_52());
      Receive(v67.f_60());
      for (int i = 0; i < v67.f_29_size(); ++i) {
        Receive(v67.f_29(i));
      }
      Receive(v67.f_50());
      Receive(v67.f_41());
      Receive(v67.f_56());
      Receive(v67.f_40());
      Receive(v67.f_37());
      Receive(v67.f_33());
      Receive(v67.f_13());
      Receive(v67.f_38());
      Receive(v67.f_11());
      Receive(v67.f_2());
      Receive(v67.f_5());
      Receive(v67.f_46());
      Receive(v67.f_23());
      Receive(v67.f_68());
      for (int i = 0; i < v67.f_64_size(); ++i) {
        Receive(v67.f_64(i));
      }
      Receive(v67.f_24());
      Receive(v67.f_26());
      Receive(v67.f_65());
      Receive(v67.f_63());
      Receive(v67.f_27());
      const Message8::M4::M12::M15& v69 = v67.f_93();
      const Message8::M4::M12::M15::M28& v70 = v69.f_2();
      for (const auto& v71 : v70.f_7()) {
        Receive(v71.f_0());
      }
      Receive(v70.f_1());
      const Message8::M4::M12::M15::M28::M45& v72 = v70.f_8();
      Receive(v72.f_4());
      Receive(v72.f_2());
      Receive(v72.f_0());
      Receive(v72.f_3());
      Receive(v72.f_1());
      Receive(v70.f_0());
      for (const auto& v73 : v70.f_5()) {
        Receive(v73.f_0());
      }
      Receive(v69.f_0());
      Receive(v67.f_58());
      Receive(v67.f_3());
      Receive(v67.f_51());
      Receive(v67.f_45());
      Receive(v67.f_36());
      Receive(v67.f_32());
      Receive(v67.f_16());
      for (int i = 0; i < v67.f_43_size(); ++i) {
        Receive(v67.f_43(i));
      }
      Receive(v67.f_21());
      for (int i = 0; i < v67.f_18_size(); ++i) {
        Receive(v67.f_18(i));
      }
      Receive(v67.f_7());
      Receive(v67.f_9());
      Receive(v67.f_28());
      Receive(v67.f_48());
      Receive(v67.f_62());
      Receive(v67.f_47());
    }
    Receive(v60.f_0());
  }
}
void Message8_Get_2(Message8* message) {
  for (const auto& v0 : (*message).f_6()) {
    for (const auto& v1 : v0.f_9()) {
      Receive(v1.f_0());
      const Message8::M4::M7::M14& v2 = v1.f_3();
      Receive(v2.f_0());
      for (const auto& v3 : v2.f_8()) {
        Receive(v3.f_0());
      }
      const Message8::M4::M7::M14::M32& v4 = v2.f_5();
      const Message8::M4::M7::M14::M32::M40& v5 = v4.f_4();
      for (int i = 0; i < v5.f_0_size(); ++i) {
        Receive(v5.f_0(i));
      }
      const Message8::M4::M7::M14::M32::M46& v6 = v4.f_5();
      Receive(v6.f_3());
      Receive(v6.f_0());
      Receive(v6.f_1());
      for (int i = 0; i < v6.f_5_size(); ++i) {
        Receive(v6.f_5(i));
      }
      Receive(v6.f_4());
      Receive(v6.f_2());
      Receive(v4.f_0());
      Receive(v4.f_1());
    }
    for (int i = 0; i < v0.f_5_size(); ++i) {
      Receive(v0.f_5(i));
    }
    Receive(v0.f_0());
    Receive(v0.f_3());
    for (const auto& v7 : v0.f_10()) {
      Receive(v7.f_66());
      Receive(v7.f_40());
      Receive(v7.f_14());
      for (int i = 0; i < v7.f_15_size(); ++i) {
        Receive(v7.f_15(i));
      }
      Receive(v7.f_7());
      Receive(v7.f_59());
      Receive(v7.f_28());
      Receive(v7.f_41());
      Receive(v7.f_44());
      Receive(v7.f_25());
      Receive(v7.f_36());
      Receive(v7.f_31());
      Receive(v7.f_67());
      Receive(v7.f_0());
      for (int i = 0; i < v7.f_18_size(); ++i) {
        Receive(v7.f_18(i));
      }
      Receive(v7.f_13());
      for (int i = 0; i < v7.f_64_size(); ++i) {
        Receive(v7.f_64(i));
      }
      Receive(v7.f_6());
      Receive(v7.f_35());
      Receive(v7.f_26());
      Receive(v7.f_38());
      Receive(v7.f_52());
      Receive(v7.f_2());
      Receive(v7.f_23());
      Receive(v7.f_53());
      Receive(v7.f_17());
      Receive(v7.f_8());
      Receive(v7.f_51());
      Receive(v7.f_54());
      Receive(v7.f_46());
      for (int i = 0; i < v7.f_22_size(); ++i) {
        Receive(v7.f_22(i));
      }
      for (int i = 0; i < v7.f_55_size(); ++i) {
        Receive(v7.f_55(i));
      }
      Receive(v7.f_21());
      Receive(v7.f_56());
      Receive(v7.f_42());
      Receive(v7.f_34());
      Receive(v7.f_47());
      Receive(v7.f_16());
      Receive(v7.f_30());
      Receive(v7.f_33());
      Receive(v7.f_48());
      Receive(v7.f_20());
      Receive(v7.f_62());
      for (int i = 0; i < v7.f_4_size(); ++i) {
        Receive(v7.f_4(i));
      }
      Receive(v7.f_63());
      Receive(v7.f_11());
      Receive(v7.f_24());
      Receive(v7.f_68());
      Receive(v7.f_27());
      Receive(v7.f_37());
      Receive(v7.f_1());
      Receive(v7.f_60());
      Receive(v7.f_9());
      Receive(v7.f_5());
      Receive(v7.f_3());
      Receive(v7.f_69());
      const Message8::M4::M12::M19& v8 = v7.f_95();
      Receive(v8.f_0());
      for (int i = 0; i < v7.f_43_size(); ++i) {
        Receive(v7.f_43(i));
      }
      Receive(v7.f_61());
      Receive(v7.f_50());
      for (int i = 0; i < v7.f_29_size(); ++i) {
        Receive(v7.f_29(i));
      }
      Receive(v7.f_65());
      const Message8::M4::M12::M15& v9 = v7.f_93();
      Receive(v9.f_0());
      const Message8::M4::M12::M15::M28& v10 = v9.f_2();
      for (const auto& v11 : v10.f_7()) {
        Receive(v11.f_0());
      }
      Receive(v10.f_1());
      const Message8::M4::M12::M15::M28::M45& v12 = v10.f_8();
      Receive(v12.f_2());
      Receive(v12.f_0());
      Receive(v12.f_3());
      Receive(v12.f_1());
      Receive(v12.f_4());
      Receive(v10.f_0());
      for (const auto& v13 : v10.f_5()) {
        Receive(v13.f_0());
      }
      Receive(v7.f_12());
      Receive(v7.f_49());
      Receive(v7.f_57());
      Receive(v7.f_39());
      Receive(v7.f_58());
      Receive(v7.f_10());
      Receive(v7.f_19());
      Receive(v7.f_45());
      Receive(v7.f_32());
    }
    Receive(v0.f_1());
    Receive(v0.f_4());
    Receive(v0.f_2());
  }
  const Message8::M3& v14 = (*message).f_5();
  const Message8::M3::M9& v15 = v14.f_6();
  Receive(v15.f_0());
  const Message8::M3::M8& v16 = v14.f_3();
  Receive(v16.f_0());
  Receive(v14.f_0());
  for (const auto& v17 : v14.f_7()) {
    const Message8::M3::M10::M20& v18 = v17.f_5();
    Receive(v18.f_0());
    const Message8::M3::M10::M18& v19 = v17.f_3();
    const Message8::M3::M10::M18::M35& v20 = v19.f_4();
    Receive(v20.f_0());
    Receive(v19.f_0());
    const Message8::M3::M10::M18::M29& v21 = v19.f_3();
    Receive(v21.f_1());
    Receive(v21.f_0());
    Receive(v21.f_4());
    Receive(v21.f_5());
    Receive(v21.f_3());
    Receive(v21.f_6());
    Receive(v21.f_7());
    Receive(v21.f_2());
    Receive(v17.f_0());
    const Message8::M3::M10::M22& v22 = v17.f_8();
    Receive(v22.f_6());
    Receive(v22.f_7());
    Receive(v22.f_0());
    Receive(v22.f_3());
    Receive(v22.f_4());
    Receive(v22.f_5());
    Receive(v22.f_2());
    Receive(v22.f_1());
  }
  const Message8::M2& v23 = (*message).f_4();
  const Message8::M2::M6& v24 = v23.f_2();
  for (int i = 0; i < v24.f_0_size(); ++i) {
    Receive(v24.f_0(i));
  }
  const Message8::M2::M11& v25 = v23.f_4();
  const Message8::M2::M11::M13& v26 = v25.f_3();
  const Message8::M2::M11::M13::M31& v27 = v26.f_4();
  Receive(v27.f_0());
  for (const auto& v28 : v26.f_5()) {
    Receive(v28.f_0());
  }
  for (const auto& v29 : v26.f_6()) {
    Receive(v29.f_8());
    Receive(v29.f_10());
    Receive(v29.f_7());
    Receive(v29.f_12());
    Receive(v29.f_9());
    Receive(v29.f_13());
    Receive(v29.f_4());
    Receive(v29.f_1());
    Receive(v29.f_6());
    for (int i = 0; i < v29.f_14_size(); ++i) {
      Receive(v29.f_14(i));
    }
    Receive(v29.f_2());
    Receive(v29.f_0());
    Receive(v29.f_11());
    Receive(v29.f_5());
    Receive(v29.f_3());
  }
  Receive(v26.f_0());
  Receive(v25.f_0());
  Receive(v25.f_1());
  const Message8::M2::M11::M23& v30 = v25.f_4();
  Receive(v30.f_0());
  Receive(v30.f_2());
  Receive(v30.f_3());
  Receive(v30.f_1());
  const Message8::M2::M11::M23::M27& v31 = v30.f_8();
  Receive(v31.f_0());
  const Message8::M2::M11::M23::M26& v32 = v30.f_7();
  for (const auto& v33 : v32.f_3()) {
    Receive(v33.f_0());
  }
  Receive(v32.f_0());
  for (const auto& v34 : v32.f_2()) {
    const Message8::M2::M11::M23::M26::M38::M48& v35 = v34.f_2();
    for (int i = 0; i < v35.f_2_size(); ++i) {
      Receive(v35.f_2(i));
    }
    for (int i = 0; i < v35.f_5_size(); ++i) {
      Receive(v35.f_5(i));
    }
    Receive(v35.f_34());
    Receive(v35.f_40());
    Receive(v35.f_39());
    Receive(v35.f_17());
    Receive(v35.f_46());
    for (int i = 0; i < v35.f_44_size(); ++i) {
      Receive(v35.f_44(i));
    }
    Receive(v35.f_20());
    Receive(v35.f_11());
    const Message8::M2::M11::M23::M26::M38::M48::M54& v36 = v35.f_64();
    for (const auto& v37 : v36.f_5()) {
      Receive(v37.f_0());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M57& v38 = v36.f_4();
    Receive(v38.f_0());
    Receive(v36.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M60& v39 = v36.f_7();
    Receive(v39.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59& v40 = v36.f_6();
    Receive(v40.f_0());
    for (const auto& v41 : v40.f_3()) {
      Receive(v41.f_1());
      for (const auto& v42 : v41.f_8()) {
        Receive(v42.f_0());
      }
      Receive(v41.f_4());
      Receive(v41.f_3());
      Receive(v41.f_2());
      Receive(v41.f_0());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63& v43 = v40.f_2();
    Receive(v43.f_1());
    for (const auto& v44 : v43.f_5()) {
      Receive(v44.f_1());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69&
          v45 = v44.f_3();
      Receive(v45.f_0());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70&
          v46 = v45.f_4();
      Receive(v46.f_0());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
          M70::M71& v47 = v46.f_2();
      for (const auto& v48 : v47.f_2()) {
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73& v49 = v48.f_3();
        Receive(v49.f_3());
        for (int i = 0; i < v49.f_5_size(); ++i) {
          Receive(v49.f_5(i));
        }
        Receive(v49.f_0());
        Receive(v49.f_6());
        Receive(v49.f_2());
        Receive(v49.f_4());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73::M74& v50 = v49.f_12();
        for (int i = 0; i < v50.f_0_size(); ++i) {
          Receive(v50.f_0(i));
        }
        Receive(v49.f_7());
        Receive(v49.f_1());
        Receive(v48.f_0());
      }
      Receive(v47.f_0());
      Receive(v45.f_1());
      Receive(v44.f_0());
    }
    Receive(v43.f_2());
    Receive(v43.f_0());
    for (const auto& v51 : v36.f_9()) {
      Receive(v51.f_0());
      Receive(v51.f_1());
      Receive(v51.f_2());
      Receive(v51.f_3());
    }
    Receive(v35.f_42());
    Receive(v35.f_14());
    for (const auto& v52 : v35.f_66()) {
      Receive(v52.f_0());
    }
    Receive(v35.f_29());
    Receive(v35.f_30());
    Receive(v35.f_23());
    Receive(v35.f_4());
    Receive(v35.f_10());
    Receive(v35.f_22());
    Receive(v35.f_41());
    Receive(v35.f_1());
    Receive(v35.f_12());
    Receive(v35.f_31());
    Receive(v35.f_24());
    Receive(v35.f_36());
    Receive(v35.f_13());
    Receive(v35.f_0());
    Receive(v35.f_28());
    Receive(v35.f_37());
    const Message8::M2::M11::M23::M26::M38::M48::M56& v53 = v35.f_68();
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61& v54 = v53.f_4();
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64& v55 = v54.f_4();
    for (const auto& v56 : v55.f_2()) {
      for (int i = 0; i < v56.f_0_size(); ++i) {
        Receive(v56.f_0(i));
      }
    }
    Receive(v55.f_0());
    for (int i = 0; i < v54.f_0_size(); ++i) {
      Receive(v54.f_0(i));
    }
    Receive(v53.f_0());
    Receive(v53.f_1());
    Receive(v35.f_15());
    Receive(v35.f_43());
    Receive(v35.f_6());
    for (int i = 0; i < v35.f_25_size(); ++i) {
      Receive(v35.f_25(i));
    }
    Receive(v35.f_19());
    Receive(v35.f_27());
    Receive(v35.f_7());
    Receive(v35.f_16());
    Receive(v35.f_45());
    Receive(v35.f_35());
    Receive(v35.f_33());
    for (int i = 0; i < v35.f_32_size(); ++i) {
      Receive(v35.f_32(i));
    }
    Receive(v35.f_26());
    Receive(v35.f_18());
    Receive(v35.f_3());
    Receive(v35.f_38());
    Receive(v35.f_21());
    const Message8::M2::M11::M23::M26::M38::M48::M53& v57 = v35.f_62();
    for (int i = 0; i < v57.f_0_size(); ++i) {
      Receive(v57.f_0(i));
    }
    Receive(v35.f_9());
    Receive(v35.f_8());
    Receive(v34.f_0());
  }
  Receive(v23.f_0());
  const Message8::M1& v58 = (*message).f_2();
  Receive(v58.f_0());
  for (const auto& v59 : v58.f_2()) {
    for (const auto& v60 : v59.f_5()) {
      for (const auto& v61 : v60.f_3()) {
        const Message8::M1::M5::M17::M25::M44& v62 = v61.f_2();
        for (int i = 0; i < v62.f_0_size(); ++i) {
          Receive(v62.f_0(i));
        }
        Receive(v61.f_0());
      }
      Receive(v60.f_0());
    }
    Receive(v59.f_0());
    const Message8::M1::M5::M21& v63 = v59.f_6();
    Receive(v63.f_0());
    const Message8::M1::M5::M21::M24& v64 = v63.f_2();
    const Message8::M1::M5::M21::M24::M42& v65 = v64.f_2();
    Receive(v65.f_0());
    Receive(v65.f_3());
    Receive(v65.f_1());
    Receive(v65.f_4());
    Receive(v65.f_2());
    const Message8::M1::M5::M21::M24::M42::M47& v66 = v65.f_11();
    const Message8::M1::M5::M21::M24::M42::M47::M49& v67 = v66.f_2();
    Receive(v67.f_0());
    for (const auto& v68 : v66.f_3()) {
      Receive(v68.f_0());
    }
    Receive(v66.f_0());
    const Message8::M1::M5::M21::M24::M42::M47::M51& v69 = v66.f_4();
    Receive(v69.f_3());
    Receive(v69.f_0());
    Receive(v69.f_2());
    Receive(v69.f_1());
    for (const auto& v70 : v66.f_6()) {
      Receive(v70.f_0());
    }
    Receive(v64.f_0());
    const Message8::M1::M5::M21::M30& v71 = v63.f_3();
    Receive(v71.f_0());
    const Message8::M1::M5::M21::M30::M37& v72 = v71.f_2();
    Receive(v72.f_0());
    const Message8::M1::M5::M16& v73 = v59.f_3();
    Receive(v73.f_0());
  }
  Receive((*message).f_0());
}
void Message8_Get_3(Message8* message) {
  const Message8::M1& v0 = (*message).f_2();
  Receive(v0.f_0());
  for (const auto& v1 : v0.f_2()) {
    const Message8::M1::M5::M16& v2 = v1.f_3();
    Receive(v2.f_0());
    for (const auto& v3 : v1.f_5()) {
      Receive(v3.f_0());
      for (const auto& v4 : v3.f_3()) {
        Receive(v4.f_0());
        const Message8::M1::M5::M17::M25::M44& v5 = v4.f_2();
        for (int i = 0; i < v5.f_0_size(); ++i) {
          Receive(v5.f_0(i));
        }
      }
    }
    Receive(v1.f_0());
    const Message8::M1::M5::M21& v6 = v1.f_6();
    const Message8::M1::M5::M21::M24& v7 = v6.f_2();
    Receive(v7.f_0());
    const Message8::M1::M5::M21::M24::M42& v8 = v7.f_2();
    const Message8::M1::M5::M21::M24::M42::M47& v9 = v8.f_11();
    const Message8::M1::M5::M21::M24::M42::M47::M49& v10 = v9.f_2();
    Receive(v10.f_0());
    const Message8::M1::M5::M21::M24::M42::M47::M51& v11 = v9.f_4();
    Receive(v11.f_0());
    Receive(v11.f_1());
    Receive(v11.f_3());
    Receive(v11.f_2());
    for (const auto& v12 : v9.f_3()) {
      Receive(v12.f_0());
    }
    for (const auto& v13 : v9.f_6()) {
      Receive(v13.f_0());
    }
    Receive(v9.f_0());
    Receive(v8.f_2());
    Receive(v8.f_1());
    Receive(v8.f_3());
    Receive(v8.f_0());
    Receive(v8.f_4());
    Receive(v6.f_0());
    const Message8::M1::M5::M21::M30& v14 = v6.f_3();
    const Message8::M1::M5::M21::M30::M37& v15 = v14.f_2();
    Receive(v15.f_0());
    Receive(v14.f_0());
  }
  const Message8::M2& v16 = (*message).f_4();
  const Message8::M2::M6& v17 = v16.f_2();
  for (int i = 0; i < v17.f_0_size(); ++i) {
    Receive(v17.f_0(i));
  }
  Receive(v16.f_0());
  const Message8::M2::M11& v18 = v16.f_4();
  Receive(v18.f_1());
  const Message8::M2::M11::M13& v19 = v18.f_3();
  for (const auto& v20 : v19.f_5()) {
    Receive(v20.f_0());
  }
  const Message8::M2::M11::M13::M31& v21 = v19.f_4();
  Receive(v21.f_0());
  Receive(v19.f_0());
  for (const auto& v22 : v19.f_6()) {
    Receive(v22.f_13());
    for (int i = 0; i < v22.f_14_size(); ++i) {
      Receive(v22.f_14(i));
    }
    Receive(v22.f_8());
    Receive(v22.f_11());
    Receive(v22.f_0());
    Receive(v22.f_9());
    Receive(v22.f_3());
    Receive(v22.f_2());
    Receive(v22.f_10());
    Receive(v22.f_6());
    Receive(v22.f_7());
    Receive(v22.f_4());
    Receive(v22.f_1());
    Receive(v22.f_12());
    Receive(v22.f_5());
  }
  const Message8::M2::M11::M23& v23 = v18.f_4();
  Receive(v23.f_0());
  const Message8::M2::M11::M23::M26& v24 = v23.f_7();
  for (const auto& v25 : v24.f_2()) {
    const Message8::M2::M11::M23::M26::M38::M48& v26 = v25.f_2();
    Receive(v26.f_15());
    Receive(v26.f_0());
    Receive(v26.f_41());
    Receive(v26.f_18());
    Receive(v26.f_39());
    for (int i = 0; i < v26.f_44_size(); ++i) {
      Receive(v26.f_44(i));
    }
    Receive(v26.f_10());
    Receive(v26.f_6());
    Receive(v26.f_38());
    Receive(v26.f_3());
    Receive(v26.f_29());
    for (int i = 0; i < v26.f_25_size(); ++i) {
      Receive(v26.f_25(i));
    }
    Receive(v26.f_37());
    Receive(v26.f_28());
    Receive(v26.f_26());
    Receive(v26.f_16());
    Receive(v26.f_8());
    const Message8::M2::M11::M23::M26::M38::M48::M53& v27 = v26.f_62();
    for (int i = 0; i < v27.f_0_size(); ++i) {
      Receive(v27.f_0(i));
    }
    Receive(v26.f_13());
    Receive(v26.f_20());
    Receive(v26.f_46());
    Receive(v26.f_19());
    Receive(v26.f_11());
    Receive(v26.f_7());
    Receive(v26.f_9());
    const Message8::M2::M11::M23::M26::M38::M48::M56& v28 = v26.f_68();
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61& v29 = v28.f_4();
    for (int i = 0; i < v29.f_0_size(); ++i) {
      Receive(v29.f_0(i));
    }
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64& v30 = v29.f_4();
    Receive(v30.f_0());
    for (const auto& v31 : v30.f_2()) {
      for (int i = 0; i < v31.f_0_size(); ++i) {
        Receive(v31.f_0(i));
      }
    }
    Receive(v28.f_1());
    Receive(v28.f_0());
    Receive(v26.f_30());
    Receive(v26.f_21());
    Receive(v26.f_45());
    Receive(v26.f_31());
    const Message8::M2::M11::M23::M26::M38::M48::M54& v32 = v26.f_64();
    for (const auto& v33 : v32.f_9()) {
      Receive(v33.f_0());
      Receive(v33.f_2());
      Receive(v33.f_1());
      Receive(v33.f_3());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59& v34 = v32.f_6();
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63& v35 = v34.f_2();
    Receive(v35.f_2());
    Receive(v35.f_1());
    Receive(v35.f_0());
    for (const auto& v36 : v35.f_5()) {
      Receive(v36.f_1());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69&
          v37 = v36.f_3();
      Receive(v37.f_1());
      Receive(v37.f_0());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70&
          v38 = v37.f_4();
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
          M70::M71& v39 = v38.f_2();
      Receive(v39.f_0());
      for (const auto& v40 : v39.f_2()) {
        Receive(v40.f_0());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73& v41 = v40.f_3();
        Receive(v41.f_3());
        Receive(v41.f_1());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73::M74& v42 = v41.f_12();
        for (int i = 0; i < v42.f_0_size(); ++i) {
          Receive(v42.f_0(i));
        }
        for (int i = 0; i < v41.f_5_size(); ++i) {
          Receive(v41.f_5(i));
        }
        Receive(v41.f_4());
        Receive(v41.f_7());
        Receive(v41.f_0());
        Receive(v41.f_2());
        Receive(v41.f_6());
      }
      Receive(v38.f_0());
      Receive(v36.f_0());
    }
    for (const auto& v43 : v34.f_3()) {
      Receive(v43.f_3());
      Receive(v43.f_1());
      Receive(v43.f_4());
      Receive(v43.f_0());
      Receive(v43.f_2());
      for (const auto& v44 : v43.f_8()) {
        Receive(v44.f_0());
      }
    }
    Receive(v34.f_0());
    for (const auto& v45 : v32.f_5()) {
      Receive(v45.f_0());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M60& v46 = v32.f_7();
    Receive(v46.f_0());
    Receive(v32.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M57& v47 = v32.f_4();
    Receive(v47.f_0());
    Receive(v26.f_34());
    for (int i = 0; i < v26.f_5_size(); ++i) {
      Receive(v26.f_5(i));
    }
    Receive(v26.f_33());
    Receive(v26.f_42());
    for (int i = 0; i < v26.f_2_size(); ++i) {
      Receive(v26.f_2(i));
    }
    for (int i = 0; i < v26.f_32_size(); ++i) {
      Receive(v26.f_32(i));
    }
    Receive(v26.f_4());
    Receive(v26.f_40());
    Receive(v26.f_43());
    for (const auto& v48 : v26.f_66()) {
      Receive(v48.f_0());
    }
    Receive(v26.f_23());
    Receive(v26.f_14());
    Receive(v26.f_36());
    Receive(v26.f_27());
    Receive(v26.f_17());
    Receive(v26.f_24());
    Receive(v26.f_22());
    Receive(v26.f_12());
    Receive(v26.f_1());
    Receive(v26.f_35());
    Receive(v25.f_0());
  }
  Receive(v24.f_0());
  for (const auto& v49 : v24.f_3()) {
    Receive(v49.f_0());
  }
  Receive(v23.f_2());
  Receive(v23.f_3());
  const Message8::M2::M11::M23::M27& v50 = v23.f_8();
  Receive(v50.f_0());
  Receive(v23.f_1());
  Receive(v18.f_0());
  for (const auto& v51 : (*message).f_6()) {
    Receive(v51.f_3());
    Receive(v51.f_1());
    for (const auto& v52 : v51.f_9()) {
      const Message8::M4::M7::M14& v53 = v52.f_3();
      Receive(v53.f_0());
      for (const auto& v54 : v53.f_8()) {
        Receive(v54.f_0());
      }
      const Message8::M4::M7::M14::M32& v55 = v53.f_5();
      Receive(v55.f_1());
      const Message8::M4::M7::M14::M32::M40& v56 = v55.f_4();
      for (int i = 0; i < v56.f_0_size(); ++i) {
        Receive(v56.f_0(i));
      }
      Receive(v55.f_0());
      const Message8::M4::M7::M14::M32::M46& v57 = v55.f_5();
      Receive(v57.f_1());
      Receive(v57.f_4());
      Receive(v57.f_2());
      Receive(v57.f_0());
      Receive(v57.f_3());
      for (int i = 0; i < v57.f_5_size(); ++i) {
        Receive(v57.f_5(i));
      }
      Receive(v52.f_0());
    }
    Receive(v51.f_0());
    for (const auto& v58 : v51.f_10()) {
      Receive(v58.f_23());
      Receive(v58.f_26());
      Receive(v58.f_39());
      Receive(v58.f_45());
      Receive(v58.f_6());
      Receive(v58.f_56());
      Receive(v58.f_65());
      for (int i = 0; i < v58.f_22_size(); ++i) {
        Receive(v58.f_22(i));
      }
      Receive(v58.f_69());
      Receive(v58.f_49());
      Receive(v58.f_25());
      for (int i = 0; i < v58.f_43_size(); ++i) {
        Receive(v58.f_43(i));
      }
      Receive(v58.f_46());
      Receive(v58.f_37());
      for (int i = 0; i < v58.f_15_size(); ++i) {
        Receive(v58.f_15(i));
      }
      Receive(v58.f_42());
      Receive(v58.f_16());
      Receive(v58.f_61());
      Receive(v58.f_14());
      Receive(v58.f_68());
      Receive(v58.f_24());
      Receive(v58.f_51());
      Receive(v58.f_67());
      Receive(v58.f_48());
      Receive(v58.f_10());
      Receive(v58.f_20());
      Receive(v58.f_38());
      Receive(v58.f_57());
      Receive(v58.f_66());
      Receive(v58.f_40());
      Receive(v58.f_34());
      for (int i = 0; i < v58.f_29_size(); ++i) {
        Receive(v58.f_29(i));
      }
      Receive(v58.f_35());
      Receive(v58.f_28());
      Receive(v58.f_9());
      Receive(v58.f_44());
      for (int i = 0; i < v58.f_64_size(); ++i) {
        Receive(v58.f_64(i));
      }
      Receive(v58.f_62());
      Receive(v58.f_36());
      Receive(v58.f_13());
      Receive(v58.f_41());
      Receive(v58.f_63());
      for (int i = 0; i < v58.f_4_size(); ++i) {
        Receive(v58.f_4(i));
      }
      Receive(v58.f_47());
      Receive(v58.f_27());
      Receive(v58.f_17());
      Receive(v58.f_8());
      const Message8::M4::M12::M15& v59 = v58.f_93();
      const Message8::M4::M12::M15::M28& v60 = v59.f_2();
      Receive(v60.f_1());
      for (const auto& v61 : v60.f_7()) {
        Receive(v61.f_0());
      }
      const Message8::M4::M12::M15::M28::M45& v62 = v60.f_8();
      Receive(v62.f_3());
      Receive(v62.f_0());
      Receive(v62.f_1());
      Receive(v62.f_2());
      Receive(v62.f_4());
      Receive(v60.f_0());
      for (const auto& v63 : v60.f_5()) {
        Receive(v63.f_0());
      }
      Receive(v59.f_0());
      Receive(v58.f_30());
      Receive(v58.f_21());
      Receive(v58.f_52());
      Receive(v58.f_3());
      Receive(v58.f_7());
      Receive(v58.f_50());
      Receive(v58.f_5());
      Receive(v58.f_60());
      Receive(v58.f_19());
      Receive(v58.f_0());
      Receive(v58.f_12());
      Receive(v58.f_32());
      Receive(v58.f_54());
      Receive(v58.f_59());
      Receive(v58.f_58());
      Receive(v58.f_33());
      Receive(v58.f_53());
      Receive(v58.f_31());
      Receive(v58.f_11());
      const Message8::M4::M12::M19& v64 = v58.f_95();
      Receive(v64.f_0());
      Receive(v58.f_1());
      for (int i = 0; i < v58.f_55_size(); ++i) {
        Receive(v58.f_55(i));
      }
      Receive(v58.f_2());
      for (int i = 0; i < v58.f_18_size(); ++i) {
        Receive(v58.f_18(i));
      }
    }
    Receive(v51.f_4());
    for (int i = 0; i < v51.f_5_size(); ++i) {
      Receive(v51.f_5(i));
    }
    Receive(v51.f_2());
  }
  const Message8::M3& v65 = (*message).f_5();
  const Message8::M3::M9& v66 = v65.f_6();
  Receive(v66.f_0());
  const Message8::M3::M8& v67 = v65.f_3();
  Receive(v67.f_0());
  for (const auto& v68 : v65.f_7()) {
    const Message8::M3::M10::M22& v69 = v68.f_8();
    Receive(v69.f_7());
    Receive(v69.f_3());
    Receive(v69.f_2());
    Receive(v69.f_1());
    Receive(v69.f_0());
    Receive(v69.f_6());
    Receive(v69.f_5());
    Receive(v69.f_4());
    Receive(v68.f_0());
    const Message8::M3::M10::M20& v70 = v68.f_5();
    Receive(v70.f_0());
    const Message8::M3::M10::M18& v71 = v68.f_3();
    const Message8::M3::M10::M18::M29& v72 = v71.f_3();
    Receive(v72.f_2());
    Receive(v72.f_1());
    Receive(v72.f_5());
    Receive(v72.f_3());
    Receive(v72.f_4());
    Receive(v72.f_6());
    Receive(v72.f_7());
    Receive(v72.f_0());
    const Message8::M3::M10::M18::M35& v73 = v71.f_4();
    Receive(v73.f_0());
    Receive(v71.f_0());
  }
  Receive(v65.f_0());
  Receive((*message).f_0());
}
void Message8_Get_4(Message8* message) {
  const Message8::M3& v0 = (*message).f_5();
  for (const auto& v1 : v0.f_7()) {
    Receive(v1.f_0());
    const Message8::M3::M10::M22& v2 = v1.f_8();
    Receive(v2.f_2());
    Receive(v2.f_0());
    Receive(v2.f_3());
    Receive(v2.f_4());
    Receive(v2.f_7());
    Receive(v2.f_1());
    Receive(v2.f_6());
    Receive(v2.f_5());
    const Message8::M3::M10::M20& v3 = v1.f_5();
    Receive(v3.f_0());
    const Message8::M3::M10::M18& v4 = v1.f_3();
    const Message8::M3::M10::M18::M35& v5 = v4.f_4();
    Receive(v5.f_0());
    Receive(v4.f_0());
    const Message8::M3::M10::M18::M29& v6 = v4.f_3();
    Receive(v6.f_3());
    Receive(v6.f_4());
    Receive(v6.f_0());
    Receive(v6.f_5());
    Receive(v6.f_2());
    Receive(v6.f_6());
    Receive(v6.f_1());
    Receive(v6.f_7());
  }
  Receive(v0.f_0());
  const Message8::M3::M9& v7 = v0.f_6();
  Receive(v7.f_0());
  const Message8::M3::M8& v8 = v0.f_3();
  Receive(v8.f_0());
  const Message8::M2& v9 = (*message).f_4();
  const Message8::M2::M6& v10 = v9.f_2();
  for (int i = 0; i < v10.f_0_size(); ++i) {
    Receive(v10.f_0(i));
  }
  const Message8::M2::M11& v11 = v9.f_4();
  Receive(v11.f_1());
  Receive(v11.f_0());
  const Message8::M2::M11::M23& v12 = v11.f_4();
  Receive(v12.f_1());
  const Message8::M2::M11::M23::M26& v13 = v12.f_7();
  for (const auto& v14 : v13.f_2()) {
    const Message8::M2::M11::M23::M26::M38::M48& v15 = v14.f_2();
    Receive(v15.f_35());
    Receive(v15.f_38());
    Receive(v15.f_16());
    Receive(v15.f_1());
    const Message8::M2::M11::M23::M26::M38::M48::M54& v16 = v15.f_64();
    for (const auto& v17 : v16.f_5()) {
      Receive(v17.f_0());
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M57& v18 = v16.f_4();
    Receive(v18.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M60& v19 = v16.f_7();
    Receive(v19.f_0());
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59& v20 = v16.f_6();
    for (const auto& v21 : v20.f_3()) {
      Receive(v21.f_4());
      Receive(v21.f_1());
      Receive(v21.f_2());
      Receive(v21.f_3());
      Receive(v21.f_0());
      for (const auto& v22 : v21.f_8()) {
        Receive(v22.f_0());
      }
    }
    const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63& v23 = v20.f_2();
    Receive(v23.f_2());
    Receive(v23.f_0());
    Receive(v23.f_1());
    for (const auto& v24 : v23.f_5()) {
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69&
          v25 = v24.f_3();
      Receive(v25.f_0());
      Receive(v25.f_1());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::M70&
          v26 = v25.f_4();
      Receive(v26.f_0());
      const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
          M70::M71& v27 = v26.f_2();
      Receive(v27.f_0());
      for (const auto& v28 : v27.f_2()) {
        Receive(v28.f_0());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73& v29 = v28.f_3();
        Receive(v29.f_2());
        Receive(v29.f_0());
        Receive(v29.f_4());
        Receive(v29.f_7());
        Receive(v29.f_6());
        for (int i = 0; i < v29.f_5_size(); ++i) {
          Receive(v29.f_5(i));
        }
        Receive(v29.f_1());
        Receive(v29.f_3());
        const Message8::M2::M11::M23::M26::M38::M48::M54::M59::M63::M68::M69::
            M70::M71::M72::M73::M74& v30 = v29.f_12();
        for (int i = 0; i < v30.f_0_size(); ++i) {
          Receive(v30.f_0(i));
        }
      }
      Receive(v24.f_0());
      Receive(v24.f_1());
    }
    Receive(v20.f_0());
    Receive(v16.f_0());
    for (const auto& v31 : v16.f_9()) {
      Receive(v31.f_3());
      Receive(v31.f_2());
      Receive(v31.f_1());
      Receive(v31.f_0());
    }
    Receive(v15.f_9());
    Receive(v15.f_37());
    Receive(v15.f_34());
    Receive(v15.f_43());
    for (int i = 0; i < v15.f_2_size(); ++i) {
      Receive(v15.f_2(i));
    }
    Receive(v15.f_15());
    for (int i = 0; i < v15.f_44_size(); ++i) {
      Receive(v15.f_44(i));
    }
    Receive(v15.f_29());
    for (int i = 0; i < v15.f_25_size(); ++i) {
      Receive(v15.f_25(i));
    }
    for (int i = 0; i < v15.f_32_size(); ++i) {
      Receive(v15.f_32(i));
    }
    Receive(v15.f_20());
    Receive(v15.f_41());
    Receive(v15.f_4());
    Receive(v15.f_22());
    const Message8::M2::M11::M23::M26::M38::M48::M56& v32 = v15.f_68();
    Receive(v32.f_0());
    Receive(v32.f_1());
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61& v33 = v32.f_4();
    for (int i = 0; i < v33.f_0_size(); ++i) {
      Receive(v33.f_0(i));
    }
    const Message8::M2::M11::M23::M26::M38::M48::M56::M61::M64& v34 = v33.f_4();
    for (const auto& v35 : v34.f_2()) {
      for (int i = 0; i < v35.f_0_size(); ++i) {
        Receive(v35.f_0(i));
      }
    }
    Receive(v34.f_0());
    Receive(v15.f_3());
    const Message8::M2::M11::M23::M26::M38::M48::M53& v36 = v15.f_62();
    for (int i = 0; i < v36.f_0_size(); ++i) {
      Receive(v36.f_0(i));
    }
    Receive(v15.f_36());
    Receive(v15.f_26());
    Receive(v15.f_6());
    Receive(v15.f_30());
    Receive(v15.f_21());
    for (int i = 0; i < v15.f_5_size(); ++i) {
      Receive(v15.f_5(i));
    }
    Receive(v15.f_28());
    Receive(v15.f_31());
    Receive(v15.f_11());
    Receive(v15.f_8());
    Receive(v15.f_18());
    for (const auto& v37 : v15.f_66()) {
      Receive(v37.f_0());
    }
    Receive(v15.f_12());
    Receive(v15.f_46());
    Receive(v15.f_0());
    Receive(v15.f_39());
    Receive(v15.f_27());
    Receive(v15.f_23());
    Receive(v15.f_40());
    Receive(v15.f_33());
    Receive(v15.f_45());
    Receive(v15.f_17());
    Receive(v15.f_10());
    Receive(v15.f_13());
    Receive(v15.f_24());
    Receive(v15.f_14());
    Receive(v15.f_19());
    Receive(v15.f_42());
    Receive(v15.f_7());
    Receive(v14.f_0());
  }
  for (const auto& v38 : v13.f_3()) {
    Receive(v38.f_0());
  }
  Receive(v13.f_0());
  Receive(v12.f_3());
  Receive(v12.f_2());
  Receive(v12.f_0());
  const Message8::M2::M11::M23::M27& v39 = v12.f_8();
  Receive(v39.f_0());
  const Message8::M2::M11::M13& v40 = v11.f_3();
  for (const auto& v41 : v40.f_5()) {
    Receive(v41.f_0());
  }
  for (const auto& v42 : v40.f_6()) {
    Receive(v42.f_7());
    Receive(v42.f_5());
    Receive(v42.f_12());
    Receive(v42.f_0());
    Receive(v42.f_11());
    Receive(v42.f_1());
    Receive(v42.f_4());
    Receive(v42.f_2());
    Receive(v42.f_10());
    Receive(v42.f_9());
    Receive(v42.f_8());
    Receive(v42.f_13());
    for (int i = 0; i < v42.f_14_size(); ++i) {
      Receive(v42.f_14(i));
    }
    Receive(v42.f_6());
    Receive(v42.f_3());
  }
  Receive(v40.f_0());
  const Message8::M2::M11::M13::M31& v43 = v40.f_4();
  Receive(v43.f_0());
  Receive(v9.f_0());
  Receive((*message).f_0());
  const Message8::M1& v44 = (*message).f_2();
  Receive(v44.f_0());
  for (const auto& v45 : v44.f_2()) {
    for (const auto& v46 : v45.f_5()) {
      for (const auto& v47 : v46.f_3()) {
        Receive(v47.f_0());
        const Message8::M1::M5::M17::M25::M44& v48 = v47.f_2();
        for (int i = 0; i < v48.f_0_size(); ++i) {
          Receive(v48.f_0(i));
        }
      }
      Receive(v46.f_0());
    }
    const Message8::M1::M5::M21& v49 = v45.f_6();
    Receive(v49.f_0());
    const Message8::M1::M5::M21::M24& v50 = v49.f_2();
    Receive(v50.f_0());
    const Message8::M1::M5::M21::M24::M42& v51 = v50.f_2();
    Receive(v51.f_3());
    const Message8::M1::M5::M21::M24::M42::M47& v52 = v51.f_11();
    for (const auto& v53 : v52.f_6()) {
      Receive(v53.f_0());
    }
    const Message8::M1::M5::M21::M24::M42::M47::M49& v54 = v52.f_2();
    Receive(v54.f_0());
    Receive(v52.f_0());
    for (const auto& v55 : v52.f_3()) {
      Receive(v55.f_0());
    }
    const Message8::M1::M5::M21::M24::M42::M47::M51& v56 = v52.f_4();
    Receive(v56.f_1());
    Receive(v56.f_0());
    Receive(v56.f_2());
    Receive(v56.f_3());
    Receive(v51.f_2());
    Receive(v51.f_4());
    Receive(v51.f_0());
    Receive(v51.f_1());
    const Message8::M1::M5::M21::M30& v57 = v49.f_3();
    const Message8::M1::M5::M21::M30::M37& v58 = v57.f_2();
    Receive(v58.f_0());
    Receive(v57.f_0());
    Receive(v45.f_0());
    const Message8::M1::M5::M16& v59 = v45.f_3();
    Receive(v59.f_0());
  }
  for (const auto& v60 : (*message).f_6()) {
    for (const auto& v61 : v60.f_9()) {
      Receive(v61.f_0());
      const Message8::M4::M7::M14& v62 = v61.f_3();
      const Message8::M4::M7::M14::M32& v63 = v62.f_5();
      Receive(v63.f_0());
      const Message8::M4::M7::M14::M32::M46& v64 = v63.f_5();
      Receive(v64.f_2());
      Receive(v64.f_0());
      Receive(v64.f_1());
      Receive(v64.f_3());
      Receive(v64.f_4());
      for (int i = 0; i < v64.f_5_size(); ++i) {
        Receive(v64.f_5(i));
      }
      Receive(v63.f_1());
      const Message8::M4::M7::M14::M32::M40& v65 = v63.f_4();
      for (int i = 0; i < v65.f_0_size(); ++i) {
        Receive(v65.f_0(i));
      }
      Receive(v62.f_0());
      for (const auto& v66 : v62.f_8()) {
        Receive(v66.f_0());
      }
    }
    Receive(v60.f_3());
    Receive(v60.f_1());
    for (const auto& v67 : v60.f_10()) {
      Receive(v67.f_28());
      Receive(v67.f_46());
      for (int i = 0; i < v67.f_22_size(); ++i) {
        Receive(v67.f_22(i));
      }
      Receive(v67.f_57());
      Receive(v67.f_48());
      Receive(v67.f_42());
      Receive(v67.f_11());
      Receive(v67.f_10());
      Receive(v67.f_0());
      Receive(v67.f_7());
      Receive(v67.f_45());
      Receive(v67.f_24());
      for (int i = 0; i < v67.f_55_size(); ++i) {
        Receive(v67.f_55(i));
      }
      Receive(v67.f_53());
      Receive(v67.f_41());
      Receive(v67.f_1());
      Receive(v67.f_58());
      Receive(v67.f_65());
      Receive(v67.f_30());
      Receive(v67.f_8());
      Receive(v67.f_3());
      for (int i = 0; i < v67.f_64_size(); ++i) {
        Receive(v67.f_64(i));
      }
      Receive(v67.f_49());
      for (int i = 0; i < v67.f_15_size(); ++i) {
        Receive(v67.f_15(i));
      }
      for (int i = 0; i < v67.f_29_size(); ++i) {
        Receive(v67.f_29(i));
      }
      const Message8::M4::M12::M19& v68 = v67.f_95();
      Receive(v68.f_0());
      Receive(v67.f_12());
      Receive(v67.f_59());
      Receive(v67.f_69());
      Receive(v67.f_13());
      Receive(v67.f_2());
      Receive(v67.f_38());
      Receive(v67.f_44());
      Receive(v67.f_39());
      Receive(v67.f_34());
      for (int i = 0; i < v67.f_43_size(); ++i) {
        Receive(v67.f_43(i));
      }
      Receive(v67.f_47());
      Receive(v67.f_56());
      Receive(v67.f_27());
      Receive(v67.f_32());
      for (int i = 0; i < v67.f_18_size(); ++i) {
        Receive(v67.f_18(i));
      }
      Receive(v67.f_61());
      Receive(v67.f_6());
      Receive(v67.f_66());
      Receive(v67.f_14());
      Receive(v67.f_37());
      Receive(v67.f_16());
      Receive(v67.f_26());
      Receive(v67.f_67());
      Receive(v67.f_21());
      Receive(v67.f_36());
      Receive(v67.f_50());
      Receive(v67.f_19());
      Receive(v67.f_17());
      for (int i = 0; i < v67.f_4_size(); ++i) {
        Receive(v67.f_4(i));
      }
      Receive(v67.f_35());
      Receive(v67.f_33());
      Receive(v67.f_51());
      Receive(v67.f_68());
      Receive(v67.f_9());
      Receive(v67.f_62());
      const Message8::M4::M12::M15& v69 = v67.f_93();
      Receive(v69.f_0());
      const Message8::M4::M12::M15::M28& v70 = v69.f_2();
      Receive(v70.f_1());
      const Message8::M4::M12::M15::M28::M45& v71 = v70.f_8();
      Receive(v71.f_0());
      Receive(v71.f_2());
      Receive(v71.f_1());
      Receive(v71.f_4());
      Receive(v71.f_3());
      Receive(v70.f_0());
      for (const auto& v72 : v70.f_7()) {
        Receive(v72.f_0());
      }
      for (const auto& v73 : v70.f_5()) {
        Receive(v73.f_0());
      }
      Receive(v67.f_31());
      Receive(v67.f_40());
      Receive(v67.f_5());
      Receive(v67.f_54());
      Receive(v67.f_20());
      Receive(v67.f_25());
      Receive(v67.f_63());
      Receive(v67.f_52());
      Receive(v67.f_60());
      Receive(v67.f_23());
    }
    Receive(v60.f_2());
    Receive(v60.f_0());
    for (int i = 0; i < v60.f_5_size(); ++i) {
      Receive(v60.f_5(i));
    }
    Receive(v60.f_4());
  }
}
}  // namespace fleetbench::proto
