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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message1.pb.h"

namespace fleetbench::rpc::P5::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_16(0x34);
  Message1::M11* v0_0 = message->add_f_60();
  Message1::M11::M28* v1 = v0_0->mutable_f_3();
  v1->set_f_0(s->substr(0, 31));
  Message1::M11::M28::M60* v2 = v1->mutable_f_3();
  (void)v2;  // Suppresses clang-tidy.
  v0_0->set_f_0(0xf9b0d36f01384e75);
  message->set_f_4(s->substr(0, 21));
  message->set_f_10(s->substr(0, 7));
  Message1::M9* v3 = message->mutable_f_54();
  Message1::M9::M50* v4_0 = v3->add_f_6();
  Message1::M9::M50::M61* v5 = v4_0->mutable_f_28();
  v5->set_f_1(false);
  v5->set_f_3(0xc473228a6de198d3);
  v5->set_f_0(0x162a2f);
  v4_0->set_f_1(s->substr(0, 12));
  v4_0->set_f_11(0x36b7c5eb7029535b);
  v4_0->set_f_12(0x74);
  v4_0->set_f_6(0x61);
  v4_0->set_f_0(0x6a);
  v4_0->set_f_19(0x6ca5d5b9cc1fb3f6);
  v4_0->set_f_17(false);
  v4_0->set_f_18(true);
  v4_0->set_f_8(s->substr(0, 22));
  v4_0->set_f_16(0x7d22d76f72653900);
  v4_0->set_f_9(0x4a);
  v3->set_f_1(s->substr(0, 7));
  Message1::M9::M34* v6 = v3->mutable_f_3();
  v6->set_f_0(true);
  v6->set_f_3(0xbf8c75d78023c92);
  v6->set_f_1(0xfc2959372bda13c2);
  message->set_f_26(0x5b29ee786d5a5cef);
  message->set_f_25(false);
  message->set_f_21(0x6901af534e1deded);
  Message1::M6* v7_0 = message->add_f_49();
  (void)v7_0;  // Suppresses clang-tidy.
  message->set_f_17(0xcdfe0a7);
  message->set_f_13(0x33);
  message->set_f_5(s->substr(0, 4));
  Message1::M2* v8 = message->mutable_f_45();
  Message1::M2::M30* v9 = v8->mutable_f_2();
  v9->set_f_0(0x79);
  message->set_f_19(s->substr(0, 8));
  message->set_f_18(false);
  Message1::M7* v10 = message->mutable_f_50();
  v10->set_f_0(s->substr(0, 17));
  v10->set_f_2(0x2d40);
  Message1::M7::M33* v11 = v10->mutable_f_11();
  v11->set_f_0(s->substr(0, 19));
  v10->set_f_1(0x8d618d851484e164);
  Message1::M7::M29* v12 = v10->mutable_f_10();
  v12->set_f_0(0x161ec7f54185fc23);
  v12->set_f_3(0xe895fa9ff9f61c6d);
  v12->set_f_2(s->substr(0, 6));
  v10->set_f_4(true);
  message->set_f_27(0x56ae6d81176ffd89);
  Message1::M10* v13 = message->mutable_f_57();
  v13->set_f_1(0x69c669ea);
  v13->set_f_0(0x597f661e45126710);
  v13->set_f_4(0x3f);
  Message1::M10::M36* v14 = v13->mutable_f_11();
  v14->set_f_1(0xba3fa3438a833e0a);
  v14->set_f_0(0xb9f774fbe893edb1);
  v14->set_f_4(s->substr(0, 12));
  v14->set_f_3(s->substr(0, 443));
  v13->set_f_2(0xcd8e7a86ef369229);
  v13->set_f_3(0x9c59511);
  Message1::M10::M42* v15 = v13->mutable_f_13();
  v15->set_f_1(s->substr(0, 9));
  v15->set_f_0(0x12);
  message->set_f_23(0xb620e1dafab1439);
  message->set_f_8(0xddff854c6a111a79);
  Message1::M8* v16 = message->mutable_f_52();
  Message1::M8::M43* v17 = v16->mutable_f_5();
  v17->set_f_5(0x5e06cb8);
  v17->set_f_1(s->substr(0, 2));
  v17->set_f_0(0x3b);
  v17->set_f_4(0x32);
  v17->set_f_3(0x55);
  v17->set_f_2(s->substr(0, 18));
  Message1::M8::M18* v18 = v16->mutable_f_2();
  v18->set_f_0(0x3877da33499bc62e);
  Message1::M8::M35* v19_0 = v16->add_f_4();
  v19_0->set_f_1(0x7a879588563ff693);
  Message1::M8::M35::M67* v20 = v19_0->mutable_f_3();
  v20->set_f_1(0x2d19dfe);
  Message1::M8::M35::M67::M75* v21 = v20->mutable_f_9();
  Message1::M8::M35::M67::M75::M84* v22 = v21->mutable_f_5();
  v22->add_f_0(Message1::M8::M35::M67::M75::M84::E11_CONST_4);
  v21->set_f_1(0x1b);
  v21->set_f_0(0x71);
  v16->set_f_0(0x4331aef692425c81);
  Message1::M8::M46* v23 = v16->mutable_f_7();
  v23->set_f_0(s->substr(0, 22));
  Message1::M5* v24_0 = message->add_f_48();
  Message1::M5::M21* v25_0 = v24_0->add_f_5();
  v25_0->set_f_0(0x623a868da915db67);
  v25_0->set_f_1(s->substr(0, 122));
  v24_0->set_f_0(0xe72);
  Message1::M5::M45* v26 = v24_0->mutable_f_7();
  v26->set_f_2(false);
  v26->set_f_1(0x871c08e);
  v26->set_f_4(0xad84d4066d9e6807);
  v26->set_f_0(s->substr(0, 3));
  message->set_f_0(false);
  message->set_f_29(0x2aa1f518f649334a);
  message->set_f_7(s->substr(0, 18));
  message->add_f_24(s->substr(0, 6));
  Message1::M13* v27 = message->mutable_f_63();
  v27->set_f_2(s->substr(0, 77));
  v27->set_f_5(Message1::M13::E5_CONST_1);
  v27->set_f_4(false);
  v27->set_f_1(0x2455716f0a263944);
  v27->set_f_3(0xe125ff39faa47ae4);
  v27->set_f_0(s->substr(0, 24));
  message->set_f_6(false);
  message->set_f_14(0x45);
  Message1::M3* v28 = message->mutable_f_46();
  v28->set_f_0(false);
  Message1::M14* v29_0 = message->add_f_65();
  Message1::M14::M32* v30 = v29_0->mutable_f_6();
  v30->set_f_0(0x8);
  v30->set_f_2(0x61ff361b);
  v30->set_f_1(0x4fd23000d);
  Message1::M14::M23* v31 = v29_0->mutable_f_4();
  Message1::M14::M23::M51* v32 = v31->mutable_f_3();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M14::M23::M57* v33 = v31->mutable_f_4();
  v33->set_f_0(s->substr(0, 10));
  v31->set_f_0(true);
  v29_0->set_f_0(s->substr(0, 5));
  message->set_f_1(Message1::E1_CONST_1);
  Message1::M12* v34 = message->mutable_f_62();
  Message1::M12::M26* v35 = v34->mutable_f_9();
  v35->set_f_0(s->substr(0, 3));
  Message1::M12::M26::M62* v36 = v35->mutable_f_3();
  (void)v36;  // Suppresses clang-tidy.
  Message1::M12::M24* v37 = v34->mutable_f_7();
  v37->set_f_0(0x8e7847853386cad5);
  message->set_f_15(s->substr(0, 448));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_43();
  v0->set_f_0(0x995be90396dc6da);
  Message1::M9* v1 = message->mutable_f_54();
  v1->set_f_1(s->substr(0, 3));
  Message1::M9::M34* v2 = v1->mutable_f_3();
  v2->set_f_3(0xb979148f6327ffd8);
  v2->set_f_1(0xc7ef89f4cc445d5e);
  v2->set_f_0(true);
  Message1::M9::E4 array_0[14] = {
      Message1::M9::E4_CONST_3, Message1::M9::E4_CONST_5,
      Message1::M9::E4_CONST_5, Message1::M9::E4_CONST_2,
      Message1::M9::E4_CONST_4, Message1::M9::E4_CONST_3,
      Message1::M9::E4_CONST_3, Message1::M9::E4_CONST_3,
      Message1::M9::E4_CONST_3, Message1::M9::E4_CONST_4,
      Message1::M9::E4_CONST_4, Message1::M9::E4_CONST_2,
      Message1::M9::E4_CONST_2, Message1::M9::E4_CONST_2,
  };
  for (auto v : array_0) {
    v1->add_f_0(v);
  }
  Message1::M9::M50* v3_0 = v1->add_f_6();
  v3_0->set_f_18(true);
  Message1::M9::M50::M58* v4_0 = v3_0->add_f_27();
  v4_0->set_f_0(0x61);
  v3_0->set_f_5(s->substr(0, 369));
  v3_0->set_f_3(0x1b91d10fa3710fbf);
  v3_0->set_f_13(0x2ce03e80);
  v3_0->set_f_8(s->substr(0, 23));
  v3_0->set_f_16(0x70dd3c9c147799f4);
  v3_0->set_f_12(0x24);
  v3_0->set_f_19(0xe290d4fa32493c83);
  v3_0->set_f_10(0x61184433);
  v3_0->set_f_0(0x324da79);
  v3_0->set_f_1(s->substr(0, 17));
  v3_0->set_f_2(0xdc81aba15c5e2535);
  v3_0->set_f_14(0xd426cdf10e242e81);
  v3_0->set_f_6(0x5f);
  Message1::M9::M50::M61* v5 = v3_0->mutable_f_28();
  v5->set_f_0(0x1708ed);
  v5->set_f_4(0xeb0f1);
  v5->set_f_1(false);
  v3_0->set_f_15(false);
  Message1::M9::M47* v6_0 = v1->add_f_5();
  v6_0->set_f_1(0x62);
  v6_0->set_f_0(0x6b74b06f);
  message->set_f_9(false);
  message->set_f_17(0x5c);
  message->set_f_5(s->substr(0, 9));
  message->set_f_10(s->substr(0, 18));
  Message1::M7* v7 = message->mutable_f_50();
  v7->set_f_1(0xdd807e2282404fac);
  v7->set_f_3(0x92586c532e118f1c);
  Message1::M7::M22* v8 = v7->mutable_f_9();
  v8->set_f_1(0xd967e7ba56453ec8);
  v8->set_f_0(0x1532e2be);
  v8->set_f_2(0xb61e150);
  v7->set_f_2(0x33ad);
  message->set_f_18(true);
  Message1::M2* v9 = message->mutable_f_45();
  Message1::M2::M30* v10 = v9->mutable_f_2();
  v10->set_f_0(0x1e);
  v9->set_f_0(0xe8acf0829fb530f5);
  message->set_f_4(s->substr(0, 20));
  message->set_f_22(s->substr(0, 136));
  message->set_f_2(false);
  Message1::M15* v11_0 = message->add_f_66();
  Message1::M15::M39* v12_0 = v11_0->add_f_7();
  Message1::M15::M39::M59* v13 = v12_0->mutable_f_2();
  Message1::M15::M39::M59::M78* v14 = v13->mutable_f_7();
  v14->set_f_1(false);
  v14->set_f_0(0xf698cf595ac411f4);
  Message1::M15::M39::M59::M76* v15_0 = v13->add_f_4();
  (void)v15_0;  // Suppresses clang-tidy.
  v13->set_f_1(s->substr(0, 435));
  v11_0->set_f_0(0x33d8f7f);
  Message1::M15::M40* v16 = v11_0->mutable_f_9();
  v16->set_f_0(s->substr(0, 31));
  v11_0->set_f_2(0x2f);
  v11_0->set_f_1(0x9f127d0900bcfc08);
  message->set_f_8(0x839ba0f0535dd686);
  message->add_f_24(s->substr(0, 2));
  message->add_f_24(s->substr(0, 2));
  message->set_f_25(false);
  message->set_f_29(0xdeea75a489d2e816);
  message->add_f_11(Message1::E3_CONST_3);
  Message1::M3* v17 = message->mutable_f_46();
  Message1::M3::M37* v18 = v17->mutable_f_3();
  v18->set_f_4(s->substr(0, 121));
  v18->set_f_1(0x4a288ff);
  v18->set_f_5(0x40b5fb8dad40a4d8);
  v18->set_f_0(0xeb375193f0ee04f1);
  Message1::M3::M20* v19 = v17->mutable_f_2();
  v19->set_f_3(false);
  v19->set_f_2(0xa82aa9d2545421c7);
  v19->set_f_1(s->substr(0, 23));
  message->set_f_7(s->substr(0, 85));
  message->set_f_16(0x12bb0);
  message->add_f_3(Message1::E2_CONST_4);
  Message1::M12* v20 = message->mutable_f_62();
  Message1::M12::M16* v21 = v20->mutable_f_5();
  v21->set_f_3(0x47);
  Message1::M12::M16::M70* v22 = v21->mutable_f_19();
  v22->set_f_2(s->substr(0, 2));
  Message1::M12::M16::M70::M82* v23_0 = v22->add_f_11();
  Message1::M12::M16::M70::M82::M85* v24 = v23_0->mutable_f_6();
  v24->set_f_3(0x84f917f1ad3937f4);
  v24->set_f_5(0x26);
  v24->set_f_1(true);
  v24->set_f_0(0x5047d702);
  v23_0->set_f_3(0x170434fac755649e);
  v23_0->set_f_1(0x40);
  v22->set_f_0(s->substr(0, 12));
  Message1::M12::M16::M70::M77* v25_0 = v22->add_f_10();
  v25_0->set_f_0(s->substr(0, 20));
  v25_0->set_f_1(0x56);
  v25_0->set_f_5(0x14a519);
  v25_0->set_f_3(false);
  v25_0->set_f_4(0xf072207432fd4786);
  v22->set_f_1(0x3ae6);
  v21->set_f_10(0x1fdbc2aefdc2f525);
  v21->set_f_1(false);
  Message1::M12::M16::M55* v26_0 = v21->add_f_17();
  v26_0->set_f_3(0x72f7059c34dde2ae);
  v26_0->set_f_1(0x6d20b5c67a390695);
  v26_0->set_f_0(false);
  v21->set_f_6(false);
  v21->set_f_0(s->substr(0, 31));
  v21->set_f_5(0x84ce5e378cc404d7);
  v21->set_f_8(0x4704bfa4603bcbc0);
  v21->set_f_9(0xdaae1c204c1e7d19);
  v21->set_f_4(0xddf4f9c6baca1a59);
  v20->set_f_0(true);
  message->set_f_27(0x1d5118f3adbe0fda);
  message->set_f_21(0x31172f9730e04d81);
  message->set_f_28(0x1443c411);
  message->set_f_14(0xab35143);
  message->set_f_15(s->substr(0, 45));
  message->set_f_1(Message1::E1_CONST_3);
  message->set_f_12(0.668765);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_15(s->substr(0, 8));
  message->set_f_1(Message1::E1_CONST_4);
  Message1::M12* v0 = message->mutable_f_62();
  Message1::M12::M26* v1 = v0->mutable_f_9();
  v1->set_f_0(s->substr(0, 3));
  Message1::M12::M26::M62* v2 = v1->mutable_f_3();
  v2->set_f_0(false);
  Message1::M12::M16* v3 = v0->mutable_f_5();
  v3->set_f_10(0x59ab58e31cfe0e35);
  v3->set_f_1(false);
  v3->set_f_4(0xf3b4cefc5d5a06e4);
  v3->set_f_0(s->substr(0, 2));
  v3->set_f_2(0x62);
  v3->set_f_7(0xe7fdf56901e754a9);
  v3->set_f_5(0xdc873030e71394d8);
  v3->set_f_9(0xbe25e6d8616e30d1);
  v3->set_f_6(true);
  Message1::M12::M16::M55* v4_0 = v3->add_f_17();
  Message1::M12::M16::M55::M74* v5_0 = v4_0->add_f_9();
  (void)v5_0;  // Suppresses clang-tidy.
  v4_0->set_f_4(0x6bc);
  v3->set_f_8(0x9bade0591c932c43);
  v0->set_f_0(true);
  Message1::M14* v6_0 = message->add_f_65();
  Message1::M14::M32* v7 = v6_0->mutable_f_6();
  v7->set_f_2(0x52870007);
  v7->set_f_1(0x15);
  v7->set_f_0(0x521fdce);
  Message1::M14::M23* v8 = v6_0->mutable_f_4();
  Message1::M14::M23::M51* v9 = v8->mutable_f_3();
  v9->set_f_0(0x1c);
  v8->set_f_0(false);
  Message1::M14::M23::M57* v10 = v8->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  v6_0->set_f_0(s->substr(0, 2925));
  message->set_f_29(0xb13c26f09d5bbde);
  message->add_f_11(Message1::E3_CONST_3);
  message->set_f_16(0xee238e9);
  Message1::M15* v11_0 = message->add_f_66();
  Message1::M15::M40* v12 = v11_0->mutable_f_9();
  (void)v12;  // Suppresses clang-tidy.
  v11_0->set_f_3(s->substr(0, 2));
  v11_0->set_f_0(0x75);
  Message1::M15::M39* v13_0 = v11_0->add_f_7();
  v13_0->set_f_0(0x31);
  v11_0->set_f_2(0x5f);
  message->set_f_13(0x7e);
  message->set_f_20(0x6a);
  message->set_f_17(0x4f);
  message->set_f_10(s->substr(0, 26));
  Message1::M3* v14 = message->mutable_f_46();
  Message1::M3::M20* v15 = v14->mutable_f_2();
  v15->set_f_2(0x7d29a4053823af75);
  v15->set_f_3(true);
  v15->set_f_0(s->substr(0, 10));
  v15->set_f_1(s->substr(0, 7));
  v14->set_f_0(false);
  Message1::M3::M37* v16 = v14->mutable_f_3();
  v16->set_f_3(0x2709cdd);
  v16->set_f_5(0xcd15e52a422c4771);
  v16->set_f_1(0x7062394);
  v16->set_f_2(0xab07c7b);
  v16->set_f_0(0x8ccaa8a5dfabf17);
  message->add_f_3(Message1::E2_CONST_4);
  message->set_f_5(s->substr(0, 1));
  message->set_f_22(s->substr(0, 4));
  message->set_f_26(0xa84fb2004d8dfe1f);
  message->set_f_9(true);
  Message1::M4* v17 = message->mutable_f_47();
  Message1::M4::M38* v18_0 = v17->add_f_2();
  Message1::M4::M38::M69* v19 = v18_0->mutable_f_4();
  v19->set_f_0(true);
  v19->set_f_13(s->substr(0, 8));
  v19->set_f_14(s->substr(0, 20));
  v19->set_f_21(0x2bebef7b5fe6d9a7);
  v19->set_f_4(s->substr(0, 7));
  v19->set_f_3(0x70);
  v19->set_f_2(0.905064);
  v19->set_f_18(true);
  v19->set_f_16(s->substr(0, 17));
  v19->set_f_6(s->substr(0, 91));
  Message1::M4::M38::M69::M73* v20 = v19->mutable_f_41();
  v20->set_f_2(true);
  v20->set_f_0(0xd9f0f83);
  v20->set_f_4(0xeb6232e);
  v20->set_f_1(false);
  v20->set_f_3(0xf219eb89f541ae62);
  v19->add_f_15(Message1::M4::M38::M69::E10_CONST_5);
  v19->set_f_8(s->substr(0, 18));
  v19->set_f_1(0x4f2ed23);
  v19->set_f_7(false);
  v19->set_f_11(0x49);
  v19->set_f_10(true);
  v19->set_f_12(s->substr(0, 31));
  v18_0->set_f_0(false);
  v17->set_f_0(0xb0239e7925572912);
  message->set_f_28(0x47834631);
  Message1::M10* v21 = message->mutable_f_57();
  v21->set_f_1(0x628ba01b);
  v21->set_f_4(0x1ba472);
  Message1::M10::M31* v22 = v21->mutable_f_9();
  v22->set_f_2(0x1b74a5);
  v22->set_f_5(0x80ce73f0801d6a41);
  v22->set_f_1(0x624851841e378826);
  Message1::M10::M31::M56* v23 = v22->mutable_f_16();
  Message1::M10::M31::M56::M72* v24 = v23->mutable_f_3();
  (void)v24;  // Suppresses clang-tidy.
  v23->set_f_0(0xf442ae8c5d6a46a8);
  v22->set_f_0(s->substr(0, 13));
  Message1::M10::M31::M63* v25_0 = v22->add_f_17();
  v25_0->set_f_3(0x5809cc4c6d2b0bb8);
  v25_0->set_f_0(0xa6abe4ccf740d886);
  Message1::M10::M42* v26 = v21->mutable_f_13();
  v26->set_f_1(s->substr(0, 32));
  v26->set_f_0(0xa9fda4a);
  Message1::M10::M27* v27 = v21->mutable_f_8();
  v27->set_f_0(false);
  v27->set_f_1(0x81fbf055b7f4e17c);
  v27->set_f_3(0x7f6791a);
  v27->set_f_2(0x34);
  Message1::M10::M36* v28 = v21->mutable_f_11();
  v28->set_f_1(0xe4ceacee0bceee3);
  v28->set_f_4(s->substr(0, 3));
  v28->set_f_0(0x746226b7cb24e67e);
  v28->set_f_3(s->substr(0, 20));
  v21->set_f_3(0x34f3);
  v21->set_f_0(0x3c92c0c09a6c3405);
  message->set_f_12(0.727568);
  Message1::M2* v29 = message->mutable_f_45();
  Message1::M2::M30* v30 = v29->mutable_f_2();
  v30->set_f_0(0x11);
  v29->set_f_0(0xdf766d5ab437faa4);
  message->set_f_18(true);
  Message1::M7* v31 = message->mutable_f_50();
  Message1::M7::M33* v32 = v31->mutable_f_11();
  v32->set_f_0(s->substr(0, 21));
  Message1::M7::M29* v33 = v31->mutable_f_10();
  v33->set_f_2(s->substr(0, 17));
  v33->set_f_1(s->substr(0, 2));
  v31->set_f_3(0x9f9e57383dd4c460);
  v31->set_f_1(0x5d7125cabf29ecb1);
  v31->set_f_4(false);
  Message1::M7::M22* v34 = v31->mutable_f_9();
  v34->set_f_2(0x1891);
  v34->set_f_0(0x554e3f5c);
  v31->set_f_0(s->substr(0, 19));
  Message1::M5* v35_0 = message->add_f_48();
  Message1::M5::M48* v36_0 = v35_0->add_f_9();
  v36_0->set_f_0(0x93a2d523b7db840e);
  Message1::M5::M21* v37_0 = v35_0->add_f_5();
  v37_0->set_f_0(0x73551b9af708c328);
  Message1::M5::M45* v38 = v35_0->mutable_f_7();
  v38->set_f_4(0x18d5a922551ac9c7);
  v38->set_f_2(false);
  v38->set_f_1(0xce54d38);
  v35_0->set_f_0(0x62ef8be);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_21(0xaf8593ef83a0a5c5);
  Message1::M11* v0_0 = message->add_f_60();
  Message1::M11::M28* v1 = v0_0->mutable_f_3();
  v1->set_f_0(s->substr(0, 14));
  v0_0->set_f_0(0x4cb1f21e64d00076);
  Message1::M11::M49* v2 = v0_0->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_12(0.654931);
  message->set_f_8(0xcbad7902bccff0ae);
  message->set_f_16(0x7d);
  Message1::E3 array_0[22] = {
      Message1::E3_CONST_3, Message1::E3_CONST_3, Message1::E3_CONST_1,
      Message1::E3_CONST_5, Message1::E3_CONST_3, Message1::E3_CONST_4,
      Message1::E3_CONST_5, Message1::E3_CONST_2, Message1::E3_CONST_4,
      Message1::E3_CONST_4, Message1::E3_CONST_3, Message1::E3_CONST_2,
      Message1::E3_CONST_2, Message1::E3_CONST_4, Message1::E3_CONST_1,
      Message1::E3_CONST_2, Message1::E3_CONST_3, Message1::E3_CONST_3,
      Message1::E3_CONST_3, Message1::E3_CONST_2, Message1::E3_CONST_5,
      Message1::E3_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_11(v);
  }
  message->set_f_17(0x5e);
  Message1::M4* v3 = message->mutable_f_47();
  Message1::M4::M38* v4_0 = v3->add_f_2();
  Message1::M4::M38::M69* v5 = v4_0->mutable_f_4();
  v5->set_f_18(false);
  v5->set_f_5(false);
  v5->set_f_22(0xd6bc0b3eff444e23);
  v5->set_f_8(s->substr(0, 12));
  v5->set_f_7(false);
  v5->set_f_11(0x1f04fa);
  v5->set_f_20(s->substr(0, 16));
  v5->set_f_17(0x46);
  v5->set_f_13(s->substr(0, 6));
  v5->set_f_6(s->substr(0, 20));
  v5->set_f_0(false);
  v5->set_f_9(0x61);
  v5->set_f_12(s->substr(0, 1));
  v5->set_f_14(s->substr(0, 88));
  v5->set_f_10(false);
  v5->set_f_4(s->substr(0, 6));
  v5->set_f_16(s->substr(0, 8));
  v5->set_f_3(0x21ab);
  v3->set_f_0(0x7e3e1d2fe1a561d);
  message->set_f_15(s->substr(0, 1843));
  Message1::M5* v6_0 = message->add_f_48();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M10* v7 = message->mutable_f_57();
  Message1::M10::M31* v8 = v7->mutable_f_9();
  Message1::M10::M31::M63* v9_0 = v8->add_f_17();
  v9_0->set_f_3(0xff2b5c475c35bebb);
  v9_0->set_f_0(0x7fd16143d87d8293);
  v9_0->set_f_1(s->substr(0, 3583));
  v8->set_f_1(0x728d8efc0218eea6);
  v8->set_f_5(0x970559ddd6d1a547);
  v8->set_f_0(s->substr(0, 297));
  v8->set_f_3(0x5a499edd7847ba8a);
  v8->set_f_6(Message1::M10::M31::E7_CONST_1);
  v8->set_f_4(0x702175a);
  v7->set_f_1(0x6f4deb55);
  Message1::M10::M36* v10 = v7->mutable_f_11();
  v10->set_f_4(s->substr(0, 7));
  v10->set_f_2(0x7467dbf);
  v10->set_f_0(0xbf68733a2821a922);
  v7->set_f_2(0x1fcb73e1f140cda4);
  Message1::M10::M42* v11 = v7->mutable_f_13();
  v11->set_f_1(s->substr(0, 11));
  v11->set_f_0(0x189b);
  Message1::M10::M27* v12 = v7->mutable_f_8();
  v12->set_f_0(false);
  v12->set_f_2(0x5);
  v12->set_f_1(0x707ed8bba525e3d2);
  Message1::M10::M27::M64* v13 = v12->mutable_f_10();
  v13->set_f_0(0x31);
  v12->set_f_3(0x2);
  v7->set_f_0(0x63101fe7941f9450);
  message->set_f_27(0x753981e2824375e5);
  message->set_f_25(false);
  message->set_f_5(s->substr(0, 24));
  message->set_f_19(s->substr(0, 30));
  Message1::M7* v14 = message->mutable_f_50();
  Message1::M7::M22* v15 = v14->mutable_f_9();
  v15->set_f_2(0x23);
  v15->set_f_0(0x5a12a4c7);
  Message1::M7::M33* v16 = v14->mutable_f_11();
  (void)v16;  // Suppresses clang-tidy.
  Message1::M7::M29* v17 = v14->mutable_f_10();
  v17->set_f_0(0x610f5c33f2838f4d);
  v17->set_f_2(s->substr(0, 19));
  v17->set_f_3(0x2d49a6892fdcde96);
  v17->set_f_1(s->substr(0, 4));
  v14->set_f_4(false);
  v14->set_f_0(s->substr(0, 25));
  v14->set_f_3(0x8210080d4227669d);
  message->set_f_0(false);
  message->set_f_28(0x55c49fd7);
  message->set_f_4(s->substr(0, 17));
  message->set_f_23(0xa1cf009ad4fd4afe);
  message->set_f_18(true);
  Message1::M8* v18 = message->mutable_f_52();
  Message1::M8::M46* v19 = v18->mutable_f_7();
  v19->set_f_0(s->substr(0, 3943));
  Message1::M8::M43* v20 = v18->mutable_f_5();
  v20->set_f_4(0x1cbd);
  v20->set_f_3(0x64098f2);
  v20->set_f_6(0xa9a915b579fa0f7d);
  v20->set_f_1(s->substr(0, 102));
  v20->set_f_0(0xa2ae0d0);
  Message1::M8::M44* v21 = v18->mutable_f_6();
  v21->set_f_0(s->substr(0, 31));
  v21->set_f_12(0.329552);
  v21->set_f_10(0x79f61f3d);
  v21->set_f_11(false);
  v21->set_f_7(0x6994a608cf3d04d5);
  v21->set_f_1(s->substr(0, 6));
  v21->set_f_9(0x648aedd3);
  v21->set_f_5(s->substr(0, 17));
  v21->set_f_2(0xff106903754fde8c);
  v18->set_f_0(0xffaff0c03718e4d4);
  message->set_f_10(s->substr(0, 27));
  message->set_f_2(true);
  Message1::M13* v22 = message->mutable_f_63();
  Message1::M13::M19* v23 = v22->mutable_f_16();
  v23->set_f_0(0x8d3850f);
  v23->set_f_4(0x80bf77d5cb5b29a2);
  v23->set_f_3(s->substr(0, 19));
  v23->set_f_2(0x813442e18bd12928);
  Message1::M13::M19::M52* v24_0 = v23->add_f_9();
  v24_0->set_f_12(0x6cbfd01a19a855ef);
  v24_0->set_f_5(s->substr(0, 17));
  v24_0->set_f_14(false);
  v24_0->set_f_18(s->substr(0, 98));
  v24_0->set_f_8(0x27e1d88fddbf1ec0);
  v24_0->set_f_0(true);
  v24_0->set_f_15(0xc016177a58c72dd2);
  v24_0->set_f_6(false);
  v24_0->set_f_16(0x40d09ee7);
  v24_0->set_f_2(0xe01be5cbc21ee694);
  v24_0->set_f_20(0.713815);
  v24_0->set_f_1(0x96bc130b76244764);
  v24_0->set_f_13(0.030123);
  v24_0->set_f_17(true);
  v24_0->set_f_11(s->substr(0, 25));
  v24_0->set_f_7(0x77);
  Message1::M13::M25* v25_0 = v22->add_f_18();
  v25_0->set_f_2(s->substr(0, 20));
  v25_0->set_f_1(0x40);
  v22->set_f_0(s->substr(0, 8));
  v22->set_f_2(s->substr(0, 6));
  v22->set_f_5(Message1::M13::E5_CONST_1);
  v22->set_f_4(false);
  v22->set_f_3(0xabcece1ed868a40f);
  message->add_f_3(Message1::E2_CONST_3);
  message->set_f_9(false);
  Message1::M14* v26_0 = message->add_f_65();
  Message1::M14::M32* v27 = v26_0->mutable_f_6();
  v27->set_f_0(0x18948f);
  v27->set_f_2(0xdf4a9ea);
  Message1::M14::M17* v28 = v26_0->mutable_f_3();
  v28->set_f_2(0x38c838b);
  v28->add_f_1(Message1::M14::M17::E6_CONST_1);
  v26_0->set_f_0(s->substr(0, 1));
  Message1::M14::M23* v29 = v26_0->mutable_f_4();
  v29->set_f_0(false);
  Message1::M14::M23::M57* v30 = v29->mutable_f_4();
  v30->set_f_0(s->substr(0, 20));
  Message1::M1* v31 = message->mutable_f_43();
  v31->set_f_0(0x7886dbaf781c2b05);
  Message1::M9* v32 = message->mutable_f_54();
  Message1::M9::M47* v33_0 = v32->add_f_5();
  v33_0->set_f_1(0x60);
  v33_0->set_f_0(0x2c2ed940);
  Message1::M9::M50* v34_0 = v32->add_f_6();
  v34_0->set_f_0(0xf66bbe5);
  v34_0->set_f_5(s->substr(0, 32));
  v34_0->set_f_11(0xbae9f418f8dce3a8);
  v34_0->set_f_8(s->substr(0, 228));
  v34_0->set_f_1(s->substr(0, 429));
  v34_0->set_f_10(0x25817fc);
  v34_0->set_f_13(0x39f0f59f);
  v34_0->set_f_18(true);
  v34_0->set_f_12(0x1caa);
  v34_0->set_f_16(0x6097ef2bc90064a6);
  Message1::M9::M50::M61* v35 = v34_0->mutable_f_28();
  v35->set_f_1(false);
  v35->set_f_3(0xee1e613db9438801);
  v35->set_f_0(0x6a);
  v35->set_f_2(0x9ab);
  v35->set_f_4(0x1b);
  Message1::M9::M50::M58* v36_0 = v34_0->add_f_27();
  (void)v36_0;  // Suppresses clang-tidy.
  v34_0->set_f_9(0xc74c0);
  v34_0->set_f_3(0x4e9206665512252a);
  v34_0->set_f_14(0x75ebb54d36d23c70);
  v34_0->set_f_4(0.560121);
  v34_0->set_f_19(0x970bce9fdc9bc47c);
  v32->set_f_1(s->substr(0, 6));
  v32->add_f_0(Message1::M9::E4_CONST_3);
  Message1::M9::M34* v37 = v32->mutable_f_3();
  v37->set_f_4(0x398525d36b1c367b);
  v37->set_f_3(0x592df6c1653edc0);
  v37->set_f_2(false);
  v37->set_f_0(true);
  message->set_f_6(true);
  message->set_f_1(Message1::E1_CONST_3);
  Message1::M12* v38 = message->mutable_f_62();
  Message1::M12::M16* v39 = v38->mutable_f_5();
  v39->set_f_5(0x2bc0132e874ed125);
  v39->set_f_10(0x4f01e77bb0466334);
  Message1::M12::M16::M70* v40 = v39->mutable_f_19();
  v40->set_f_2(s->substr(0, 1));
  v40->set_f_1(0x74);
  Message1::M12::M16::M70::M77* v41_0 = v40->add_f_10();
  v41_0->set_f_3(true);
  v41_0->set_f_0(s->substr(0, 4));
  v41_0->set_f_2(0xfc51eb4);
  v41_0->set_f_1(0x9b5b162);
  v41_0->set_f_5(0x71);
  Message1::M12::M16::M70::M82* v42_0 = v40->add_f_11();
  v42_0->set_f_0(0x1d7cf8ee79d);
  v42_0->set_f_1(0xe399ab);
  Message1::M12::M16::M70::M82::M85* v43 = v42_0->mutable_f_6();
  v43->set_f_2(0x2ddd6d2d946a7cd2);
  v43->set_f_1(true);
  v43->set_f_3(0x402de5a0e04079d0);
  v43->set_f_4(0x17fd502d5dce03f4);
  v42_0->set_f_2(0x78);
  v42_0->set_f_3(0xa4657dc2e67b69fe);
  v39->set_f_8(0x433445350465c713);
  v39->set_f_9(0xb909f647c46183d7);
  v39->set_f_2(0x20f738f);
  v39->set_f_6(true);
  v39->set_f_4(0xe7eb53bc09a8b0cf);
  Message1::M12::M16::M55* v44_0 = v39->add_f_17();
  v44_0->set_f_1(0xfc319d0f6b411add);
  Message1::M12::M16::M55::M74* v45_0 = v44_0->add_f_9();
  v45_0->set_f_0(s->substr(0, 7));
  v44_0->set_f_4(0x43);
  v44_0->set_f_0(false);
  v44_0->set_f_2(Message1::M12::M16::M55::E9_CONST_3);
  v39->set_f_7(0x8426ed2a8e83c0a);
  Message1::M12::M24* v46 = v38->mutable_f_7();
  v46->set_f_0(0x29c43abbef2a7280);
  Message1::M12::M26* v47 = v38->mutable_f_9();
  Message1::M12::M26::M62* v48 = v47->mutable_f_3();
  Message1::M12::M26::M62::M81* v49_0 = v48->add_f_3();
  v49_0->set_f_0(0x6e);
  v49_0->set_f_1(0xc61076adb);
  v48->set_f_0(true);
  v47->set_f_0(s->substr(0, 10));
  message->set_f_7(s->substr(0, 18));
  message->set_f_14(0x2b);
  message->set_f_13(0x60ae23a);
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
}  // namespace fleetbench::rpc::P5::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
