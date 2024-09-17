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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message1.pb.h"

namespace fleetbench::rpc::P3::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M7* v0_0 = message->add_f_54();
  v0_0->set_f_0(0x38);
  v0_0->set_f_3(0xd822e76);
  Message1::M7::M30* v1_0 = v0_0->add_f_9();
  (void)v1_0;  // Suppresses clang-tidy.
  v0_0->set_f_5(0x14e3e9);
  v0_0->set_f_1(0x1e);
  Message1::M9* v2_0 = message->add_f_56();
  v2_0->set_f_1(0x766f98065bc485cf);
  Message1::M9::E11 array_1[18] = {
      Message1::M9::E11_CONST_3, Message1::M9::E11_CONST_4,
      Message1::M9::E11_CONST_1, Message1::M9::E11_CONST_3,
      Message1::M9::E11_CONST_5, Message1::M9::E11_CONST_2,
      Message1::M9::E11_CONST_1, Message1::M9::E11_CONST_2,
      Message1::M9::E11_CONST_2, Message1::M9::E11_CONST_1,
      Message1::M9::E11_CONST_1, Message1::M9::E11_CONST_1,
      Message1::M9::E11_CONST_5, Message1::M9::E11_CONST_3,
      Message1::M9::E11_CONST_1, Message1::M9::E11_CONST_5,
      Message1::M9::E11_CONST_4, Message1::M9::E11_CONST_1,
  };
  for (auto v : array_1) {
    v2_0->add_f_2(v);
  }
  Message1::M9::M42* v3 = v2_0->mutable_f_11();
  v3->set_f_5(0x243173cb);
  v3->set_f_4(0x13c753687060c993);
  Message1::M9::M42::M67* v4 = v3->mutable_f_8();
  v4->set_f_0(s->substr(0, 6));
  v4->set_f_1(0x38);
  v3->set_f_3(0x3d35e9eae8f33589);
  v3->set_f_1(0x65);
  Message1::M9::M19* v5_0 = v2_0->add_f_8();
  v5_0->set_f_3(0x223a7a63fec29989);
  Message1::M8* v6 = message->mutable_f_55();
  v6->set_f_3(Message1::M8::E9_CONST_2);
  Message1::M8::M25* v7_0 = v6->add_f_9();
  v7_0->set_f_5(s->substr(0, 8));
  Message1::M8::M25::M89* v8 = v7_0->mutable_f_14();
  Message1::M8::M25::M89::E30 array_2[21] = {
      Message1::M8::M25::M89::E30_CONST_3, Message1::M8::M25::M89::E30_CONST_4,
      Message1::M8::M25::M89::E30_CONST_2, Message1::M8::M25::M89::E30_CONST_5,
      Message1::M8::M25::M89::E30_CONST_3, Message1::M8::M25::M89::E30_CONST_5,
      Message1::M8::M25::M89::E30_CONST_1, Message1::M8::M25::M89::E30_CONST_2,
      Message1::M8::M25::M89::E30_CONST_5, Message1::M8::M25::M89::E30_CONST_2,
      Message1::M8::M25::M89::E30_CONST_5, Message1::M8::M25::M89::E30_CONST_2,
      Message1::M8::M25::M89::E30_CONST_2, Message1::M8::M25::M89::E30_CONST_1,
      Message1::M8::M25::M89::E30_CONST_4, Message1::M8::M25::M89::E30_CONST_1,
      Message1::M8::M25::M89::E30_CONST_3, Message1::M8::M25::M89::E30_CONST_2,
      Message1::M8::M25::M89::E30_CONST_4, Message1::M8::M25::M89::E30_CONST_5,
      Message1::M8::M25::M89::E30_CONST_1,
  };
  for (auto v : array_2) {
    v8->add_f_0(v);
  }
  v7_0->set_f_4(0x3ab29d78c5d665f);
  v7_0->set_f_6(0x2f55);
  v7_0->set_f_3(0x6f2e683a);
  v6->set_f_0(s->substr(0, 6));
  Message1::M8::M50* v9 = v6->mutable_f_10();
  v9->set_f_3(s->substr(0, 24));
  v9->set_f_1(0xc);
  v9->set_f_2(0x1e262ebc50d00261);
  Message1::M8::M56* v10 = v6->mutable_f_11();
  Message1::M8::M56::M88* v11_0 = v10->add_f_2();
  v11_0->set_f_0(true);
  v10->set_f_0(0x35);
  message->set_f_0(false);
  Message1::M12* v12_0 = message->add_f_60();
  Message1::M12::M35* v13 = v12_0->mutable_f_9();
  v13->set_f_3(0x7b);
  v13->set_f_1(0xc363efe);
  Message1::M12::M40* v14 = v12_0->mutable_f_10();
  (void)v14;  // Suppresses clang-tidy.
  v12_0->set_f_1(0x104b46026d06b260);
  v12_0->set_f_0(0xf);
  message->set_f_15(0.420722);
  message->add_f_27(Message1::E4_CONST_1);
  message->set_f_17(0x6e85175074344191);
  Message1::M11* v15_0 = message->add_f_59();
  Message1::M11::M62* v16 = v15_0->mutable_f_7();
  v16->set_f_1(0x326abb0afd28780a);
  v16->set_f_3(s->substr(0, 13));
  v16->set_f_5(Message1::M11::M62::E24_CONST_1);
  Message1::M11::M62::M84* v17_0 = v16->add_f_9();
  v17_0->set_f_3(0x51a3a868);
  v17_0->set_f_5(true);
  v17_0->set_f_4(s->substr(0, 1));
  v17_0->set_f_0(0x14912b97);
  v15_0->set_f_0(false);
  message->set_f_1(0x1276);
  Message1::M3* v18 = message->mutable_f_49();
  Message1::M3::M16* v19_0 = v18->add_f_2();
  v19_0->add_f_1(Message1::M3::M16::E15_CONST_3);
  v19_0->add_f_1(Message1::M3::M16::E15_CONST_4);
  v19_0->add_f_1(Message1::M3::M16::E15_CONST_5);
  v19_0->add_f_1(Message1::M3::M16::E15_CONST_1);
  Message1::M3::M16::M86* v20 = v19_0->mutable_f_15();
  v20->set_f_0(0x3927);
  v19_0->set_f_2(0x18bf83);
  v19_0->set_f_3(s->substr(0, 21));
  v19_0->set_f_0(0x6f);
  Message1::M3::M34* v21 = v18->mutable_f_4();
  v21->set_f_20(0x5a3d914467f6df63);
  v21->set_f_26(0xefc1d);
  v21->set_f_12(s->substr(0, 2));
  v21->set_f_2(0x5ce88fe);
  v21->set_f_25(0xb035b98);
  v21->set_f_17(0x463c2c0edfc8ce6a);
  v21->set_f_27(s->substr(0, 20));
  v21->set_f_24(s->substr(0, 2));
  v21->set_f_0(false);
  v21->set_f_5(0x14af);
  v21->set_f_1(s->substr(0, 32));
  v21->set_f_28(true);
  v21->set_f_3(0x50);
  v21->set_f_4(0x26791);
  v21->add_f_18(Message1::M3::M34::E18_CONST_4);
  v21->set_f_19(s->substr(0, 8));
  v21->set_f_8(0xbec5341);
  v21->set_f_22(0x73c8bdf464f6156e);
  v21->set_f_30(0x76e5494);
  v21->set_f_6(0x3d37a0e7f4c8afa3);
  v18->set_f_0(0x2b);
  Message1::M3::M36* v22 = v18->mutable_f_5();
  v22->set_f_0(0x3280f2768630d2a3);
  v22->set_f_4(false);
  v22->set_f_2(0x6519f196cf59a367);
  v22->set_f_3(0x21);
  Message1::M3::M38* v23 = v18->mutable_f_6();
  (void)v23;  // Suppresses clang-tidy.
  Message1::M3::M52* v24 = v18->mutable_f_8();
  v24->set_f_0(0x4f1aab424eb063e7);
  Message1::M4* v25_0 = message->add_f_50();
  Message1::M4::M29* v26_0 = v25_0->add_f_2();
  Message1::M4::M29::M72* v27_0 = v26_0->add_f_8();
  v27_0->set_f_0(s->substr(0, 48));
  v26_0->set_f_2(0x9b281a8);
  v26_0->set_f_1(0x32bf32fd);
  v26_0->set_f_3(0x7b82635900778303);
  message->set_f_26(Message1::E3_CONST_5);
  message->set_f_10(0x3dc833a6660f5a16);
  Message1::M13* v28_0 = message->add_f_62();
  v28_0->set_f_15(true);
  v28_0->set_f_7(s->substr(0, 3));
  v28_0->add_f_12(Message1::M13::E14_CONST_5);
  v28_0->set_f_0(s->substr(0, 25));
  v28_0->set_f_23(0x5);
  Message1::M13::M28* v29_0 = v28_0->add_f_40();
  Message1::M13::M28::M70* v30_0 = v29_0->add_f_2();
  v30_0->set_f_0(0xa1981a3);
  v28_0->set_f_24(0x5fc311);
  Message1::M13::M60* v31 = v28_0->mutable_f_41();
  Message1::M13::M60::M83* v32 = v31->mutable_f_3();
  v32->set_f_0(0x1fb23717f29638b8);
  v28_0->set_f_26(0x52f8b17ea4ca429b);
  v28_0->set_f_20(0x4);
  v28_0->set_f_8(0x1731d9b8b79ac85b);
  v28_0->set_f_16(0x5);
  v28_0->set_f_25(0x5c);
  message->set_f_11(Message1::E2_CONST_4);
  message->set_f_13(0x6db347aeb3f4ee9b);
  message->set_f_9(0x68);
  message->set_f_25(0x6e398);
  Message1::M10* v33 = message->mutable_f_58();
  Message1::M10::M41* v34_0 = v33->add_f_5();
  v34_0->set_f_1(s->substr(0, 5));
  v34_0->set_f_4(s->substr(0, 18));
  v34_0->set_f_0(0x6865505);
  v34_0->set_f_2(Message1::M10::M41::E19_CONST_3);
  Message1::M10::M26* v35 = v33->mutable_f_4();
  v35->set_f_0(s->substr(0, 3));
  Message1::M10::M26::M94* v36 = v35->mutable_f_6();
  v36->set_f_0(s->substr(0, 11));
  message->set_f_20(0x4dd0a17ff339fed9);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_30(0x67);
  Message1::M5* v0_0 = message->add_f_51();
  Message1::M5::M54* v1 = v0_0->mutable_f_8();
  v1->set_f_0(0x1a09f3b5364726ba);
  Message1::M5::M46* v2 = v0_0->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M5::M17* v3 = v0_0->mutable_f_2();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_1(0x17ed);
  message->set_f_10(0x3712652dd73750e6);
  message->set_f_19(s->substr(0, 7));
  message->set_f_21(s->substr(0, 9));
  Message1::E4 array_0[15] = {
      Message1::E4_CONST_1, Message1::E4_CONST_2, Message1::E4_CONST_2,
      Message1::E4_CONST_2, Message1::E4_CONST_3, Message1::E4_CONST_3,
      Message1::E4_CONST_2, Message1::E4_CONST_2, Message1::E4_CONST_4,
      Message1::E4_CONST_5, Message1::E4_CONST_3, Message1::E4_CONST_5,
      Message1::E4_CONST_1, Message1::E4_CONST_2, Message1::E4_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_27(v);
  }
  message->set_f_16(0x27296e9d);
  Message1::M12* v4_0 = message->add_f_60();
  Message1::M12::M40* v5 = v4_0->mutable_f_10();
  (void)v5;  // Suppresses clang-tidy.
  v4_0->set_f_0(0x2ddf);
  Message1::M12::M35* v6 = v4_0->mutable_f_9();
  v6->set_f_4(0x148a61773e747471);
  Message1::M12::M35::M95* v7 = v6->mutable_f_12();
  v7->set_f_0(0x13a484093d0e1619);
  v6->set_f_3(0x1);
  v6->set_f_2(0x743348e5);
  v6->set_f_0(0x23);
  v4_0->set_f_1(0x1fc5f99eae3ab450);
  Message1::M12::M31* v8 = v4_0->mutable_f_8();
  (void)v8;  // Suppresses clang-tidy.
  Message1::M12::M21* v9 = v4_0->mutable_f_7();
  v9->set_f_0(0x28);
  message->set_f_0(true);
  message->set_f_11(Message1::E2_CONST_4);
  Message1::M7* v10_0 = message->add_f_54();
  Message1::M7::M30* v11_0 = v10_0->add_f_9();
  v11_0->set_f_0(0x3ed84435ebfb5d1d);
  Message1::M7::M47* v12 = v10_0->mutable_f_10();
  v12->set_f_4(0x6a);
  v10_0->set_f_0(0x2f);
  v10_0->add_f_2(Message1::M7::E6_CONST_2);
  v10_0->set_f_3(0x55);
  v10_0->set_f_1(0x6fdfd26);
  message->set_f_8(s->substr(0, 153));
  message->set_f_24(0x18424fe6);
  Message1::M10* v13 = message->mutable_f_58();
  Message1::M10::M24* v14 = v13->mutable_f_3();
  Message1::M10::M24::M69* v15 = v14->mutable_f_3();
  v15->set_f_1(0xc718a);
  v15->set_f_0(s->substr(0, 108));
  Message1::M10::M26* v16 = v13->mutable_f_4();
  Message1::M10::M26::M94* v17 = v16->mutable_f_6();
  (void)v17;  // Suppresses clang-tidy.
  Message1::M10::M41* v18_0 = v13->add_f_5();
  v18_0->set_f_1(s->substr(0, 17));
  v18_0->set_f_2(Message1::M10::M41::E19_CONST_4);
  v18_0->set_f_4(s->substr(0, 3));
  v18_0->set_f_3(0x7e2f28b3803869c5);
  message->set_f_9(0x65);
  Message1::M4* v19_0 = message->add_f_50();
  int32_t array_1[215] = {
      0x477c2,   0x194413,  0x1e,      0x137e7d,  0xa85ccf,  0x330ed81,
      0xe9d635d, 0xa3669ec, 0xdb65d,   0x4,       0x8af2c87, 0x17c027,
      0x2b,      0x9086094, 0x1f2b1d,  0x41,      0x13d4f,   0x1cba9,
      0x10,      0x1887ed,  0x193e0,   0x28,      0x16,      0x6d714,
      0x4e404,   0xb43e1cb, 0x20bf710, 0x34,      0xec32da8, 0x1783c4,
      0x1bcb83,  0x2a,      0x1d4c6d,  0x32,      0x5f,      0x1e0cdc,
      0x67,      0xae349,   0x1ddf82,  0x2f,      0xe9a4,    0x1,
      0x5f,      0x77,      0x506b95,  0x53bb7c8, 0x1e,      0x173650,
      0xd648a49, 0x578da,   0x526e2,   0x8893c30, 0x42,      0x1cdfa0,
      0x90cf840, 0x79,      0xc0be0fe, 0x113860,  0x46935d0, 0x92f7ae,
      0x51390d3, 0x199aaf,  0x1f47e8,  0x4a,      0x72,      0x5,
      0x5049c,   0x203b5,   0x2e,      0x1c,      0x5d,      0x63d90d7,
      0x2dca4,   0xcb6f29b, 0x1896dc3, 0x19,      0x10fa32,  0xb09602e,
      0xc,       0x3c,      0x188a0f,  0x3f9be,   0x63,      0x51,
      0xaf874a9, 0x4b,      0x64ba8,   0x7fbd6b7, 0x3054655, 0x13,
      0x52f6e83, 0x8ec3fdb, 0x42,      0x14e702,  0x1f,      0x68,
      0x8,       0x78,      0x89c6ec,  0x1cd661,  0x121049,  0x109f78f,
      0x4cbee66, 0xbd1ff,   0x1e7d26,  0x6c,      0xbe700,   0xe8f56a5,
      0x79fbd,   0x809e162, 0x995d75a, 0x4c655,   0x29,      0x3aa322a,
      0x125f6c,  0x15,      0xa0ac033, 0x786a9,   0x7b,      0x1acef,
      0x8ced2b,  0x44,      0x18cae8,  0x12600c,  0xf75393d, 0x7d0cda7,
      0x15ac5c,  0x7c,      0xb363de5, 0xca6912b, 0x67dcdfa, 0x4cdecda,
      0x1f5091,  0x55,      0x50,      0xc9d0a,   0x17,      0x45,
      0x127d3a,  0x2f,      0x169b9,   0x112eaa,  0x61fa834, 0x11d28e,
      0x19,      0x5,       0x1dbb99,  0x566d191, 0x40,      0x5a,
      0xa52bd,   0x48,      0xd2c7d,   0x1ef038,  0xc39c97c, 0x53,
      0x1c,      0x2b,      0x46,      0x18,      0x106e90,  0x88d438a,
      0x105d5b,  0xc0f1f,   0x119e30,  0x15d4bbd, 0x1ce35a,  0xe27cd0c,
      0x1e8d93,  0x4b,      0xa7dd26,  0x39ccc63, 0x60,      0x10aa6e,
      0x43,      0x1bee656, 0x7d,      0x55,      0x6e,      0x4,
      0x3,       0x1a658,   0x849bda5, 0x1da083,  0xa7ab2,   0x18af81,
      0x7,       0x16ef63,  0x1e006c,  0x156f32,  0xe002dbe, 0x55,
      0x70a0a31, 0xde531ce, 0x1d8a65,  0xed7ed,   0x32c366f, 0xaceb31d,
      0x3e,      0x43,      0x22,      0x23,      0x1f83e5,  0xb09d7fc,
      0x7e205d9, 0x5e,      0x73,      0x122880,  0x23,      0x9e406,
      0x1b5435,  0x7c,      0x13f70a,  0x3e,      0xe88ed25,
  };
  for (auto v : array_1) {
    v19_0->add_f_0(v);
  }
  Message1::M4::M55* v20 = v19_0->mutable_f_4();
  Message1::M4::M55::M78* v21 = v20->mutable_f_3();
  v21->set_f_0(0x3);
  Message1::M13* v22_0 = message->add_f_62();
  v22_0->set_f_14(0x76);
  v22_0->set_f_15(false);
  v22_0->set_f_26(0x32bae0b92d102664);
  v22_0->set_f_4(Message1::M13::E12_CONST_4);
  v22_0->set_f_0(s->substr(0, 9));
  v22_0->set_f_6(s->substr(0, 23));
  v22_0->set_f_7(s->substr(0, 848));
  v22_0->set_f_11(Message1::M13::E13_CONST_5);
  v22_0->set_f_1(0x50295045d8738e);
  v22_0->set_f_22(s->substr(0, 11));
  v22_0->set_f_24(0x20);
  v22_0->set_f_2(0x3d6c);
  v22_0->set_f_10(0x4c67600f102dcfad);
  message->set_f_22(false);
  Message1::M9* v23_0 = message->add_f_56();
  v23_0->set_f_0(s->substr(0, 46));
  Message1::M9::M39* v24 = v23_0->mutable_f_10();
  (void)v24;  // Suppresses clang-tidy.
  v23_0->add_f_2(Message1::M9::E11_CONST_4);
  v23_0->add_f_2(Message1::M9::E11_CONST_3);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_18(0x35bf1f8);
  message->set_f_4(s->substr(0, 14));
  Message1::M1* v0_0 = message->add_f_47();
  Message1::M1::M61* v1 = v0_0->mutable_f_5();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_23(0xf393a877776e826);
  Message1::M13* v2_0 = message->add_f_62();
  v2_0->set_f_22(s->substr(0, 21));
  v2_0->set_f_17(s->substr(0, 21));
  v2_0->set_f_9(0x15380a3c35e2f642);
  v2_0->set_f_15(false);
  v2_0->set_f_7(s->substr(0, 29));
  v2_0->set_f_19(0xd977112);
  v2_0->set_f_3(0.435040);
  Message1::M13::M60* v3 = v2_0->mutable_f_41();
  Message1::M13::M60::M83* v4 = v3->mutable_f_3();
  v4->set_f_0(0x680597178d9c1b21);
  Message1::M13::M60::M83::M110* v5 = v4->mutable_f_2();
  Message1::M13::M60::M83::M110::M135* v6 = v5->mutable_f_5();
  v6->set_f_4(0xdf219319c7b808e);
  v6->set_f_3(0x29be80cc03282a90);
  v6->set_f_0(s->substr(0, 26));
  Message1::M13::M60::M83::M110::M137* v7 = v5->mutable_f_6();
  v7->set_f_12(0x3e152c8dec82193e);
  v7->set_f_2(0x381d5606);
  v7->set_f_8(0x56ffd6dd8f66ce19);
  v7->set_f_6(s->substr(0, 9));
  v7->set_f_0(0x44b74f45);
  v7->set_f_4(s->substr(0, 1));
  v7->set_f_14(s->substr(0, 11));
  v7->set_f_10(0x3e0b);
  v7->set_f_13(s->substr(0, 2));
  v7->set_f_5(0x25711433);
  v5->set_f_0(0x7e4ed48621ae911e);
  v2_0->set_f_11(Message1::M13::E13_CONST_3);
  v2_0->set_f_4(Message1::M13::E12_CONST_2);
  v2_0->set_f_2(0x5a);
  v2_0->set_f_6(s->substr(0, 29));
  v2_0->set_f_21(s->substr(0, 2));
  v2_0->set_f_16(0xf);
  v2_0->set_f_20(0x49);
  v2_0->set_f_14(0x4a);
  v2_0->set_f_25(0x5d);
  message->set_f_19(s->substr(0, 19));
  message->set_f_0(false);
  Message1::M2* v8 = message->mutable_f_48();
  v8->set_f_0(0x12b0b129bae0f7b1);
  message->add_f_27(Message1::E4_CONST_4);
  message->set_f_26(Message1::E3_CONST_1);
  message->set_f_24(0x647ad3a2);
  message->set_f_10(0x27857e830275798c);
  Message1::M12* v9_0 = message->add_f_60();
  v9_0->set_f_0(0xb500ab9);
  Message1::M12::M31* v10 = v9_0->mutable_f_8();
  Message1::M12::M31::M90* v11_0 = v10->add_f_6();
  v11_0->set_f_0(0xd1b9bbcab680166);
  v10->set_f_0(0x3c0f1);
  Message1::M12::M31::M79* v12 = v10->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M12::M21* v13 = v9_0->mutable_f_7();
  (void)v13;  // Suppresses clang-tidy.
  Message1::M12::M40* v14 = v9_0->mutable_f_10();
  v14->set_f_0(0x7b8b59947e8cd6b8);
  v9_0->set_f_1(0x5c0292ac42fb81d3);
  message->set_f_6(0x735482e7);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_22(false);
  Message1::M12* v0_0 = message->add_f_60();
  Message1::M12::M40* v1 = v0_0->mutable_f_10();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M12::M21* v2 = v0_0->mutable_f_7();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_0(false);
  message->set_f_30(0x547087f);
  Message1::M6* v3 = message->mutable_f_52();
  v3->set_f_2(0x1f73dffab2b6fea0);
  Message1::M6::M51* v4 = v3->mutable_f_16();
  v4->set_f_0(0x7f8cee26);
  v4->set_f_4(s->substr(0, 5));
  v3->set_f_0(s->substr(0, 19));
  Message1::M6::M18* v5 = v3->mutable_f_10();
  Message1::M6::M18::M65* v6_0 = v5->add_f_4();
  Message1::M6::M18::M65::M107* v7 = v6_0->mutable_f_2();
  Message1::M6::M18::M65::M107::M132* v8_0 = v7->add_f_8();
  v8_0->set_f_0(0xede33c4f5a453e1);
  Message1::M6::M18::M65::M107::M129* v9 = v7->mutable_f_5();
  v9->set_f_1(0x201df2392d0cb988);
  v9->set_f_4(0x28cfdf16);
  v6_0->set_f_0(s->substr(0, 7));
  v5->set_f_0(Message1::M6::M18::E16_CONST_5);
  Message1::M6::M53* v10 = v3->mutable_f_18();
  v10->set_f_0(0x72404a0ac618efcd);
  Message1::M6::M20* v11 = v3->mutable_f_11();
  Message1::M6::M20::M99* v12 = v11->mutable_f_2();
  v12->set_f_19(false);
  v12->set_f_13(0x4211596);
  v12->set_f_8(0x5d);
  v12->set_f_21(s->substr(0, 8));
  v12->set_f_29(0x2b0ecfd34a7e8812);
  v12->set_f_10(true);
  v12->add_f_12(Message1::M6::M20::M99::E32_CONST_5);
  v12->set_f_18(s->substr(0, 8));
  v12->set_f_0(0xb13bc94);
  v12->add_f_14(Message1::M6::M20::M99::E33_CONST_3);
  v12->set_f_23(0x7a);
  v12->set_f_5(0x4ca9806c);
  v12->set_f_4(0x60cbfb5f3dae9887);
  v12->set_f_16(0x6ca59dc1a7700e41);
  v12->set_f_28(0x96ae7);
  v12->set_f_17(s->substr(0, 7));
  v12->set_f_25(0x46f820ee);
  Message1::M6::M37* v13 = v3->mutable_f_15();
  v13->set_f_3(0xaec7);
  v13->set_f_5(0x694031f2);
  v13->set_f_0(0x5f5148c81dc22207);
  v3->set_f_1(0xa);
  message->set_f_18(0x5);
  message->set_f_24(0x613f479);
  Message1::M13* v14_0 = message->add_f_62();
  v14_0->set_f_17(s->substr(0, 22));
  v14_0->set_f_22(s->substr(0, 3));
  v14_0->set_f_23(0x1e5f152);
  v14_0->set_f_1(0x13fead925d290d5c);
  v14_0->set_f_16(0xd);
  v14_0->set_f_18(0x10f696b322a7f09f);
  Message1::M13::M60* v15 = v14_0->mutable_f_41();
  Message1::M13::M60::M83* v16 = v15->mutable_f_3();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_0(0x40ecafd440ffdc2b);
  v14_0->set_f_9(0x136ebb3a7aed418b);
  v14_0->set_f_19(0x4);
  v14_0->set_f_11(Message1::M13::E13_CONST_4);
  Message1::M13::M28* v17_0 = v14_0->add_f_40();
  Message1::M13::M28::M70* v18_0 = v17_0->add_f_2();
  (void)v18_0;  // Suppresses clang-tidy.
  v14_0->set_f_5(0x18790d93e3e11b63);
  v14_0->set_f_24(0x1a572d);
  v14_0->set_f_21(s->substr(0, 7));
  v14_0->set_f_25(0x72);
  v14_0->set_f_10(0x4eb728a5cdf25270);
  message->set_f_21(s->substr(0, 2));
  Message1::M2* v19 = message->mutable_f_48();
  v19->set_f_0(0x48cb12138fbe8e1f);
  Message1::M11* v20_0 = message->add_f_59();
  Message1::M11::M57* v21_0 = v20_0->add_f_4();
  (void)v21_0;  // Suppresses clang-tidy.
  Message1::M11::M23* v22 = v20_0->mutable_f_2();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M11::M58* v23_0 = v20_0->add_f_6();
  Message1::M11::M58::M74* v24 = v23_0->mutable_f_7();
  v24->set_f_3(s->substr(0, 369));
  v24->set_f_0(0x113fcbaa1e13b6f5);
  v24->set_f_4(0x70a093fb3987819b);
  v23_0->set_f_2(0x3b);
  message->set_f_15(0.726548);
  message->set_f_23(0x3628b2fc15efffda);
  message->set_f_13(0x1f592f29d3f32067);
  message->set_f_7(0x166fd356d080cf49);
  message->set_f_1(0x196a81b);
  Message1::M9* v25_0 = message->add_f_56();
  Message1::M9::M42* v26 = v25_0->mutable_f_11();
  v26->set_f_5(0xc5340ca);
  Message1::M9::M42::M67* v27 = v26->mutable_f_8();
  v27->set_f_1(0x1d);
  v26->set_f_2(s->substr(0, 11));
  Message1::M9::M39* v28 = v25_0->mutable_f_10();
  v28->set_f_0(true);
  Message1::M9::M39::M85* v29 = v28->mutable_f_3();
  v29->set_f_13(0x3cb4);
  v29->set_f_5(0x1ecac5c);
  v29->set_f_10(true);
  v29->set_f_4(0x5d89a88711d95d18);
  v29->set_f_3(s->substr(0, 6));
  v29->set_f_12(0x5ec7ba7a);
  v25_0->set_f_1(0x37acdd9ad226224a);
  Message1::M9::M19* v30_0 = v25_0->add_f_8();
  v30_0->set_f_4(0x3e);
  v30_0->set_f_1(0x375b944);
  message->set_f_4(s->substr(0, 157));
  message->set_f_11(Message1::E2_CONST_1);
  Message1::M3* v31 = message->mutable_f_49();
  Message1::M3::M16* v32_0 = v31->add_f_2();
  v32_0->add_f_1(Message1::M3::M16::E15_CONST_5);
  Message1::M3::M16::M86* v33 = v32_0->mutable_f_15();
  (void)v33;  // Suppresses clang-tidy.
  v32_0->set_f_0(0x1b);
  v32_0->set_f_2(0xee8c795);
  Message1::M3::M49* v34_0 = v31->add_f_7();
  v34_0->set_f_0(0x4f);
  v31->set_f_0(0x5a);
  Message1::M10* v35 = message->mutable_f_58();
  Message1::M10::M24* v36 = v35->mutable_f_3();
  Message1::M10::M24::M69* v37 = v36->mutable_f_3();
  v37->set_f_0(s->substr(0, 21));
  v37->set_f_2(false);
  Message1::M10::M26* v38 = v35->mutable_f_4();
  v38->set_f_0(s->substr(0, 413));
  Message1::M7* v39_0 = message->add_f_54();
  v39_0->set_f_1(0x3ecf);
  v39_0->set_f_0(0xcb068ca);
  Message1::M7::M47* v40 = v39_0->mutable_f_10();
  v40->set_f_0(0x1f);
  v40->add_f_2(Message1::M7::M47::E22_CONST_2);
  v40->set_f_5(0x272341851b582d08);
  Message1::M7::M30* v41_0 = v39_0->add_f_9();
  (void)v41_0;  // Suppresses clang-tidy.
  v39_0->set_f_3(0x12e24e);
  Message1::M7::E6 array_0[21] = {
      Message1::M7::E6_CONST_3, Message1::M7::E6_CONST_1,
      Message1::M7::E6_CONST_4, Message1::M7::E6_CONST_5,
      Message1::M7::E6_CONST_4, Message1::M7::E6_CONST_4,
      Message1::M7::E6_CONST_1, Message1::M7::E6_CONST_1,
      Message1::M7::E6_CONST_1, Message1::M7::E6_CONST_4,
      Message1::M7::E6_CONST_2, Message1::M7::E6_CONST_5,
      Message1::M7::E6_CONST_2, Message1::M7::E6_CONST_4,
      Message1::M7::E6_CONST_4, Message1::M7::E6_CONST_2,
      Message1::M7::E6_CONST_2, Message1::M7::E6_CONST_5,
      Message1::M7::E6_CONST_4, Message1::M7::E6_CONST_5,
      Message1::M7::E6_CONST_2,
  };
  for (auto v : array_0) {
    v39_0->add_f_2(v);
  }
  Message1::M5* v42_0 = message->add_f_51();
  v42_0->set_f_0(s->substr(0, 44));
  Message1::M5::M33* v43 = v42_0->mutable_f_3();
  v43->set_f_1(s->substr(0, 18));
  v43->set_f_0(0xc92afaa);
  Message1::M5::M54* v44 = v42_0->mutable_f_8();
  v44->set_f_0(0x53bbb174682fc58a);
  Message1::M5::M48* v45 = v42_0->mutable_f_6();
  (void)v45;  // Suppresses clang-tidy.
  message->set_f_29(0x2f0a072d6c9bbbe2);
  message->set_f_14(0x661bfe0c15223a55);
  message->set_f_12(0xb56d74c);
  Message1::M1* v46_0 = message->add_f_47();
  Message1::M1::E5 array_1[21] = {
      Message1::M1::E5_CONST_2, Message1::M1::E5_CONST_5,
      Message1::M1::E5_CONST_1, Message1::M1::E5_CONST_1,
      Message1::M1::E5_CONST_5, Message1::M1::E5_CONST_4,
      Message1::M1::E5_CONST_4, Message1::M1::E5_CONST_3,
      Message1::M1::E5_CONST_5, Message1::M1::E5_CONST_1,
      Message1::M1::E5_CONST_4, Message1::M1::E5_CONST_1,
      Message1::M1::E5_CONST_3, Message1::M1::E5_CONST_5,
      Message1::M1::E5_CONST_2, Message1::M1::E5_CONST_1,
      Message1::M1::E5_CONST_2, Message1::M1::E5_CONST_3,
      Message1::M1::E5_CONST_5, Message1::M1::E5_CONST_1,
      Message1::M1::E5_CONST_2,
  };
  for (auto v : array_1) {
    v46_0->add_f_1(v);
  }
  Message1::M1::M44* v47 = v46_0->mutable_f_4();
  v47->set_f_0(s->substr(0, 4));
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
}  // namespace fleetbench::rpc::P3::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
