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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message0.pb.h"

namespace fleetbench::rpc::P7::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_22(0x2231424e);
  message->set_f_18(s->substr(0, 64));
  message->set_f_15(s->substr(0, 3));
  Message0::M2* v0 = message->mutable_f_64();
  Message0::M2::M12* v1 = v0->mutable_f_4();
  v1->set_f_5(0x4bd4ac7e1eb44062);
  Message0::M2::M12::M38* v2 = v1->mutable_f_11();
  v2->set_f_3(0x6e);
  Message0::M2::M12::M38::M44* v3 = v2->mutable_f_7();
  v3->set_f_1(0x66);
  v3->set_f_3(0x27980631);
  v3->set_f_0(0x11a67d1e);
  v2->set_f_2(0x16c898760850a6c0);
  v2->set_f_1(Message0::M2::M12::M38::E8_CONST_3);
  v1->set_f_4(0x6978ff3baf9f2b6);
  v1->set_f_2(0x77e48);
  v1->set_f_0(s->substr(0, 21));
  Message0::M2::M21* v4_0 = v0->add_f_7();
  Message0::M2::M21::M36* v5 = v4_0->mutable_f_6();
  v5->set_f_21(0x1);
  v5->set_f_2(s->substr(0, 19));
  v5->set_f_14(0x58cb11ec);
  v5->set_f_24(0x17);
  v5->set_f_19(0x1cac5cb);
  v5->set_f_16(s->substr(0, 43));
  v5->add_f_10(Message0::M2::M21::M36::E7_CONST_4);
  v5->set_f_6(0x157e4a163d7ea145);
  v5->set_f_3(s->substr(0, 4));
  v5->set_f_12(true);
  v5->set_f_11(0x28c1f5c3);
  v5->set_f_20(0x47);
  v5->set_f_4(s->substr(0, 19));
  v5->set_f_22(s->substr(0, 29));
  v5->set_f_5(0x4aaad56be338e3c9);
  v5->set_f_23(0x20b9);
  v4_0->set_f_0(0x6bccd12a44c4eaf3);
  v4_0->set_f_1(0x5575eac39daca924);
  v4_0->set_f_2(0xae64c);
  v0->set_f_0(s->substr(0, 8));
  message->set_f_7(0x6a118312fdac7da);
  Message0::M5* v6 = message->mutable_f_70();
  Message0::M5::M26* v7_0 = v6->add_f_5();
  v7_0->set_f_0(0x6416f63f);
  message->set_f_9(s->substr(0, 17));
  message->set_f_27(0x139c8f7b1422aa58);
  message->set_f_6(0xd9b55898b58f6e6);
  message->set_f_8(true);
  message->set_f_28(s->substr(0, 19));
  message->set_f_17(0x5f004e6d);
  message->set_f_20(0x11ff402308a8566c);
  message->set_f_13(0xf);
  message->set_f_24(s->substr(0, 363));
  message->set_f_10(0x5fbef9e9);
  Message0::M10* v8 = message->mutable_f_78();
  v8->set_f_10(0x59ddd90d5d2bdc5a);
  v8->set_f_27(Message0::M10::E3_CONST_4);
  v8->set_f_20(0x146e6488d6a025c);
  v8->set_f_22(0x1d27ecf234f90e80);
  v8->set_f_17(0x4bb87e52af3399fc);
  v8->set_f_8(0x3b730fb);
  v8->set_f_14(0xad5aada);
  v8->set_f_7(true);
  v8->set_f_18(s->substr(0, 44));
  v8->set_f_1(0x3dc798253d8);
  v8->set_f_26(0x7fa7afae);
  v8->set_f_0(s->substr(0, 4));
  v8->set_f_29(s->substr(0, 29));
  v8->set_f_9(0x7990a5205bf2cc30);
  v8->add_f_5(Message0::M10::E1_CONST_1);
  v8->set_f_16(s->substr(0, 2));
  v8->set_f_28(0x2974610ecdca08c0);
  v8->set_f_19(0x15);
  v8->set_f_24(0x753ef1e13d16d7f4);
  v8->set_f_12(s->substr(0, 4));
  v8->set_f_25(0x1f);
  v8->set_f_2(s->substr(0, 21));
  v8->set_f_13(s->substr(0, 32));
  v8->set_f_15(s->substr(0, 24));
  message->set_f_1(0x4aeb4);
  message->set_f_25(0x271f77b92d57618d);
  Message0::M4* v9 = message->mutable_f_68();
  v9->set_f_0(true);
  Message0::M8* v10 = message->mutable_f_74();
  (void)v10;  // Suppresses clang-tidy.
  Message0::M9* v11 = message->mutable_f_76();
  Message0::M9::M33* v12 = v11->mutable_f_9();
  v12->set_f_0(true);
  Message0::M9::M25* v13_0 = v11->add_f_5();
  Message0::M9::M25::M39* v14_0 = v13_0->add_f_2();
  v14_0->set_f_1(s->substr(0, 52));
  v14_0->set_f_3(0x420c32ec46d8276b);
  v14_0->set_f_2(0x4b612bd377ccd9d0);
  v11->set_f_0(s->substr(0, 31));
  Message0::M9::M29* v15_0 = v11->add_f_7();
  v15_0->set_f_0(0x66);
  Message0::M9::M17* v16_0 = v11->add_f_3();
  v16_0->set_f_0(0x75ae8b66791d11ae);
  Message0::M3* v17_0 = message->add_f_65();
  Message0::M3::M30* v18_0 = v17_0->add_f_5();
  v18_0->set_f_4(s->substr(0, 64));
  v18_0->set_f_2(Message0::M3::M30::E5_CONST_1);
  v18_0->set_f_0(0x2ba3c1286bf3e95a);
  v17_0->set_f_0(s->substr(0, 22));
  Message0::M3::M28* v19 = v17_0->mutable_f_4();
  v19->set_f_0(0x791d755);
  message->set_f_3(s->substr(0, 15));
  message->set_f_11(0x46d6166419f461b3);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_68();
  Message0::M4::M31* v1_0 = v0->add_f_2();
  (void)v1_0;  // Suppresses clang-tidy.
  message->set_f_13(0x1abdfd);
  message->set_f_24(s->substr(0, 7));
  message->set_f_5(0x48938f54c462a229);
  Message0::M3* v2_0 = message->add_f_65();
  v2_0->set_f_0(s->substr(0, 35));
  Message0::M3::M30* v3_0 = v2_0->add_f_5();
  v3_0->set_f_3(s->substr(0, 7));
  v3_0->set_f_2(Message0::M3::M30::E5_CONST_1);
  v3_0->set_f_1(s->substr(0, 15));
  message->set_f_7(0x31428b1f123f4bdf);
  Message0::M1* v4 = message->mutable_f_61();
  v4->set_f_0(0.412468);
  Message0::M1::M13* v5_0 = v4->add_f_6();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_19(0x45);
  message->set_f_8(false);
  message->set_f_11(0x3be14f56f5166e4e);
  message->set_f_14(0x533e2d66da73c365);
  message->set_f_27(0x31638163ede6c353);
  message->set_f_10(0x32631f8f);
  message->set_f_9(s->substr(0, 55));
  Message0::M8* v6 = message->mutable_f_74();
  v6->set_f_0(s->substr(0, 207));
  message->set_f_18(s->substr(0, 1600));
  Message0::M9* v7 = message->mutable_f_76();
  Message0::M9::M25* v8_0 = v7->add_f_5();
  v8_0->set_f_0(0x7d17f3d18236c91a);
  Message0::M9::M25::M39* v9_0 = v8_0->add_f_2();
  v9_0->set_f_2(0x3f293c9d10a07938);
  v9_0->set_f_4(true);
  v9_0->set_f_3(0x3e476e054c54611f);
  Message0::M9::M25::M39::M45* v10 = v9_0->mutable_f_8();
  v10->set_f_1(s->substr(0, 4));
  v10->set_f_2(0x1a6d1f3a9b906f24);
  Message0::M9::M25::M39::M45::M52* v11 = v10->mutable_f_5();
  v11->set_f_0(false);
  v9_0->set_f_1(s->substr(0, 7));
  v9_0->set_f_0(0x2fa71edd2a326d22);
  Message0::M9::M17* v12_0 = v7->add_f_3();
  v12_0->set_f_0(0x597dc2cacbe49bfe);
  message->set_f_6(0xecf68cb4e4cd27b);
  message->set_f_1(0x15);
  message->set_f_20(0x25a210680db13246);
  message->set_f_3(s->substr(0, 16));
  message->set_f_23(s->substr(0, 32));
  Message0::M6* v13 = message->mutable_f_71();
  v13->set_f_0(0x32208f62);
  Message0::M6::M32* v14 = v13->mutable_f_10();
  v14->set_f_1(0x1045ca);
  v14->set_f_0(0x1f);
  Message0::M7* v15_0 = message->add_f_72();
  v15_0->set_f_0(0x5597b1c6699de8c2);
  Message0::M7::M19* v16 = v15_0->mutable_f_4();
  v16->set_f_3(0x41e3d92ae9496b77);
  v16->set_f_0(0.636820);
  v16->set_f_1(s->substr(0, 7));
  Message0::M7::M23* v17_0 = v15_0->add_f_9();
  v17_0->set_f_1(s->substr(0, 38));
  v17_0->set_f_3(s->substr(0, 5));
  v17_0->set_f_5(Message0::M7::M23::E4_CONST_2);
  v17_0->set_f_0(true);
  v17_0->set_f_4(0x24);
  v17_0->set_f_2(0.060061);
  message->set_f_4(0x3e2a);
  message->set_f_12(0x2ca4f8dae231c06a);
  message->set_f_25(0x6143f1f4611b721f);
  message->set_f_21(0x1f377d9c0352996b);
  message->set_f_2(0x18);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_5(0x4565ab838c46a166);
  message->set_f_3(s->substr(0, 32));
  message->set_f_20(0x770dd97c30e1c3df);
  message->set_f_7(0x72e687eb1e8b6700);
  Message0::M3* v0_0 = message->add_f_65();
  Message0::M3::M30* v1_0 = v0_0->add_f_5();
  v1_0->set_f_4(s->substr(0, 28));
  v1_0->set_f_2(Message0::M3::M30::E5_CONST_3);
  v1_0->set_f_1(s->substr(0, 8));
  v1_0->set_f_3(s->substr(0, 51));
  v0_0->set_f_0(s->substr(0, 1));
  message->set_f_11(0x6fbb893a64e741d1);
  message->set_f_1(0x1a9753);
  message->set_f_25(0x32c47d5fd189e682);
  message->set_f_23(s->substr(0, 11));
  Message0::M9* v2 = message->mutable_f_76();
  Message0::M9::M17* v3_0 = v2->add_f_3();
  v3_0->set_f_0(0x4aeb0bb4024d6642);
  v2->set_f_0(s->substr(0, 9));
  Message0::M9::M33* v4 = v2->mutable_f_9();
  (void)v4;  // Suppresses clang-tidy.
  Message0::M9::M25* v5_0 = v2->add_f_5();
  v5_0->set_f_0(0xd218bd2fc101f56);
  Message0::M9::M25::M39* v6_0 = v5_0->add_f_2();
  v6_0->set_f_4(false);
  v6_0->set_f_3(0x64da96fb7c16d419);
  v6_0->set_f_0(0x68bfe79620e486a3);
  message->set_f_9(s->substr(0, 2));
  message->set_f_28(s->substr(0, 7));
  message->set_f_8(false);
  message->set_f_21(0x4882abba8b6eb073);
  message->set_f_19(0x48);
  message->set_f_12(0x62e71bcd8f95418a);
  message->set_f_22(0x3fa1ba8a);
  Message0::M6* v7 = message->mutable_f_71();
  Message0::M6::M32* v8 = v7->mutable_f_10();
  v8->set_f_1(0x5a);
  v8->set_f_0(0x12);
  Message0::M6::M15* v9_0 = v7->add_f_4();
  (void)v9_0;  // Suppresses clang-tidy.
  v7->set_f_0(0x7a4792fd);
  Message0::M6::M18* v10_0 = v7->add_f_6();
  v10_0->set_f_1(0x77);
  Message0::M6::M18::M34* v11_0 = v10_0->add_f_7();
  Message0::M6::M18::M34::M43* v12 = v11_0->mutable_f_3();
  v12->set_f_3(0xf8400f1a2fac477);
  v12->set_f_0(s->substr(0, 4));
  v12->set_f_2(0x6672f965265ed0f2);
  v12->set_f_1(0x2498422a1a9487ae);
  message->set_f_15(s->substr(0, 8));
  Message0::M1* v13 = message->mutable_f_61();
  v13->set_f_0(0.152119);
  Message0::M1::M11* v14 = v13->mutable_f_3();
  v14->set_f_2(0xf437aec);
  Message0::M1::M11::M37* v15 = v14->mutable_f_14();
  v15->set_f_0(0x163);
  Message0::M1::M11::M37::M46* v16 = v15->mutable_f_4();
  v16->set_f_0(0x3ae3c1507f155536);
  v16->set_f_2(0x2a3f23c7a800094c);
  v16->set_f_1(0x56);
  v14->set_f_0(0x44);
  v14->set_f_4(0x7);
  message->set_f_13(0x24);
  message->set_f_27(0x744d91298c6dda7);
  message->set_f_26(0.406747);
  message->set_f_18(s->substr(0, 18));
  message->set_f_16(0x1b);
  Message0::M4* v17 = message->mutable_f_68();
  v17->set_f_0(true);
  Message0::M4::M31* v18_0 = v17->add_f_2();
  v18_0->set_f_0(0.171032);
  Message0::M8* v19 = message->mutable_f_74();
  v19->set_f_0(s->substr(0, 18));
  message->set_f_17(0x470a1a9);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_14(0x6ae8ee4a357b19a6);
  Message0::M8* v0 = message->mutable_f_74();
  v0->set_f_1(0x72);
  v0->set_f_0(s->substr(0, 7));
  message->set_f_3(s->substr(0, 4));
  Message0::M10* v1 = message->mutable_f_78();
  v1->set_f_10(0x3d712773d559a583);
  v1->set_f_29(s->substr(0, 5));
  v1->set_f_8(0x46f1093b);
  v1->set_f_25(0x5b);
  v1->set_f_2(s->substr(0, 47));
  v1->set_f_13(s->substr(0, 12));
  v1->set_f_12(s->substr(0, 20));
  v1->set_f_24(0x22d0e2e81e57edc4);
  v1->set_f_21(0x146098);
  v1->set_f_27(Message0::M10::E3_CONST_4);
  v1->set_f_0(s->substr(0, 1));
  v1->set_f_22(0x256bf17bbf732096);
  v1->set_f_18(s->substr(0, 51));
  v1->set_f_14(0xb8086a7);
  v1->set_f_15(s->substr(0, 6));
  v1->set_f_1(0x65);
  Message0::M10::M24* v2 = v1->mutable_f_63();
  v2->set_f_0(s->substr(0, 24));
  v1->set_f_20(0x2fcfe31b83942b1f);
  v1->set_f_23(Message0::M10::E2_CONST_2);
  v1->set_f_26(0x3c88ca34);
  v1->set_f_28(0x4423cacfa7335a1a);
  v1->set_f_11(true);
  Message0::M2* v3 = message->mutable_f_64();
  v3->set_f_0(s->substr(0, 14));
  Message0::M2::M27* v4 = v3->mutable_f_9();
  v4->set_f_1(s->substr(0, 30));
  Message0::M2::M21* v5_0 = v3->add_f_7();
  Message0::M2::M21::M36* v6 = v5_0->mutable_f_6();
  v6->set_f_3(s->substr(0, 22));
  v6->set_f_16(s->substr(0, 4));
  v6->set_f_24(0x68);
  v6->set_f_11(0x5968aa8c);
  v6->set_f_17(0x34);
  v6->set_f_12(true);
  v6->set_f_7(s->substr(0, 28));
  v6->set_f_14(0x38480ad1);
  v6->set_f_1(s->substr(0, 216));
  v6->set_f_22(s->substr(0, 10));
  v6->set_f_21(0x52);
  v6->set_f_18(0x405750a54c41bac9);
  v6->set_f_8(0x92cdf5af9e354d);
  v6->set_f_25(s->substr(0, 101));
  Message0::M2::M21::M36::E7 array_0[22] = {
      Message0::M2::M21::M36::E7_CONST_5, Message0::M2::M21::M36::E7_CONST_1,
      Message0::M2::M21::M36::E7_CONST_4, Message0::M2::M21::M36::E7_CONST_2,
      Message0::M2::M21::M36::E7_CONST_4, Message0::M2::M21::M36::E7_CONST_3,
      Message0::M2::M21::M36::E7_CONST_5, Message0::M2::M21::M36::E7_CONST_2,
      Message0::M2::M21::M36::E7_CONST_5, Message0::M2::M21::M36::E7_CONST_2,
      Message0::M2::M21::M36::E7_CONST_3, Message0::M2::M21::M36::E7_CONST_4,
      Message0::M2::M21::M36::E7_CONST_3, Message0::M2::M21::M36::E7_CONST_4,
      Message0::M2::M21::M36::E7_CONST_5, Message0::M2::M21::M36::E7_CONST_3,
      Message0::M2::M21::M36::E7_CONST_5, Message0::M2::M21::M36::E7_CONST_4,
      Message0::M2::M21::M36::E7_CONST_2, Message0::M2::M21::M36::E7_CONST_4,
      Message0::M2::M21::M36::E7_CONST_3, Message0::M2::M21::M36::E7_CONST_4,
  };
  for (auto v : array_0) {
    v6->add_f_10(v);
  }
  v6->set_f_0(0x52d35be004d71ad8);
  v5_0->set_f_2(0x21);
  Message0::M2::M14* v7 = v3->mutable_f_5();
  Message0::M2::M14::M41* v8_0 = v7->add_f_4();
  v8_0->set_f_24(s->substr(0, 1));
  v8_0->set_f_0(0x66);
  v8_0->set_f_11(0x1709458ffaef0aef);
  v8_0->set_f_2(0xc494f57);
  v8_0->set_f_10(0x4bfb960);
  v8_0->set_f_1(s->substr(0, 41));
  v8_0->set_f_12(true);
  v8_0->set_f_20(s->substr(0, 17));
  v8_0->set_f_13(0x75);
  v8_0->set_f_8(true);
  v8_0->set_f_28(0x6);
  Message0::M2::M14::M41::M48* v9 = v8_0->mutable_f_55();
  v9->set_f_2(0x3c3fece1f6bdfc95);
  Message0::M2::M14::M41::M48::M51* v10 = v9->mutable_f_8();
  v10->set_f_0(0x46490b4a);
  v9->set_f_1(0xb4c6a);
  v8_0->set_f_31(0x587c45a7fcda6176);
  Message0::M2::M14::M41::M47* v11_0 = v8_0->add_f_54();
  v11_0->set_f_2(0x63984fecb1cf7891);
  v8_0->set_f_30(Message0::M2::M14::M41::E9_CONST_1);
  v8_0->set_f_26(true);
  v8_0->set_f_16(0x7a862fe7b9abb738);
  v8_0->set_f_9(0.527277);
  v8_0->set_f_22(0x35);
  v8_0->set_f_27(0x63);
  v8_0->set_f_5(s->substr(0, 63));
  v8_0->set_f_6(s->substr(0, 1));
  v8_0->set_f_23(s->substr(0, 331));
  v8_0->set_f_4(true);
  v7->set_f_0(0x528ce0a7);
  message->set_f_22(0xa25c34a);
  message->set_f_16(0x32);
  message->set_f_5(0x12d3e109878fe268);
  message->set_f_19(0xf910e);
  message->set_f_23(s->substr(0, 22));
  message->set_f_8(false);
  message->set_f_2(0x23);
  Message0::M7* v12_0 = message->add_f_72();
  Message0::M7::M22* v13 = v12_0->mutable_f_7();
  v13->set_f_4(0x24d0e7e45742e2bf);
  Message0::M7::M22::M40* v14 = v13->mutable_f_11();
  v14->set_f_0(0x1dfbc12273bd3c27);
  v13->set_f_3(0x258a276cc2a31cbe);
  v13->set_f_1(0.856643);
  v13->set_f_2(s->substr(0, 6));
  v12_0->set_f_0(0x75565bc3cffca59b);
  Message0::M7::M19* v15 = v12_0->mutable_f_4();
  v15->set_f_3(0x25fb14f2156c55c0);
  v15->set_f_0(0.028175);
  v15->set_f_1(s->substr(0, 9));
  Message0::M7::M23* v16_0 = v12_0->add_f_9();
  v16_0->set_f_5(Message0::M7::M23::E4_CONST_2);
  v16_0->set_f_2(0.767537);
  v16_0->set_f_0(false);
  message->set_f_24(s->substr(0, 17));
  Message0::M5* v17 = message->mutable_f_70();
  Message0::M5::M26* v18_0 = v17->add_f_5();
  (void)v18_0;  // Suppresses clang-tidy.
  message->set_f_7(0x1832fbbc4a942da3);
  message->set_f_9(s->substr(0, 29));
  message->set_f_26(0.392271);
  message->set_f_21(0x3d3cf7d7d436ce);
  message->set_f_6(0x31c49567dd3e3541);
  Message0::M6* v19 = message->mutable_f_71();
  v19->set_f_0(0x6b6d8797);
  Message0::M6::M15* v20_0 = v19->add_f_4();
  v20_0->set_f_0(true);
  Message0::M6::M32* v21 = v19->mutable_f_10();
  v21->set_f_0(0xf);
  v21->set_f_1(0x9a89cc9);
  Message0::M6::M18* v22_0 = v19->add_f_6();
  Message0::M6::M18::M34* v23_0 = v22_0->add_f_7();
  Message0::M6::M18::M34::M43* v24 = v23_0->mutable_f_3();
  v24->set_f_3(0x7f327d19f860303e);
  v24->set_f_1(0x31e54e43e0f4d0bc);
  v24->set_f_2(0x7e6f77f8c2ece510);
  v24->set_f_0(s->substr(0, 17));
  v23_0->set_f_0(0x31);
  v22_0->set_f_0(true);
  Message0::M6::M20* v25 = v19->mutable_f_8();
  v25->set_f_3(0x41);
  v25->set_f_0(true);
  v25->set_f_2(0x6e);
  v25->set_f_5(0x8ede548);
  v25->set_f_1(0x624a99a8f7ce08de);
  Message0::M6::M20::M35* v26 = v25->mutable_f_14();
  Message0::M6::M20::M35::E6 array_1[6] = {
      Message0::M6::M20::M35::E6_CONST_4, Message0::M6::M20::M35::E6_CONST_1,
      Message0::M6::M20::M35::E6_CONST_3, Message0::M6::M20::M35::E6_CONST_4,
      Message0::M6::M20::M35::E6_CONST_2, Message0::M6::M20::M35::E6_CONST_4,
  };
  for (auto v : array_1) {
    v26->add_f_4(v);
  }
  v26->set_f_2(s->substr(0, 290));
  v26->set_f_3(0x51fea68fb07fe40e);
  message->set_f_12(0x5c14b95a743bc5ce);
  Message0::M1* v27 = message->mutable_f_61();
  v27->set_f_0(0.697401);
  Message0::M4* v28 = message->mutable_f_68();
  v28->set_f_0(false);
  Message0::M4::M31* v29_0 = v28->add_f_2();
  v29_0->set_f_0(0.194164);
  message->set_f_4(0x65c2d7a);
  message->set_f_13(0x338d);
  message->set_f_17(0x19f82e36);
  message->set_f_25(0x4799176625158846);
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
}  // namespace fleetbench::rpc::P7::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
