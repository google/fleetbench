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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message2.pb.h"

namespace fleetbench::rpc::P0::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_24(s->substr(0, 98));
  message->set_f_5(0x59);
  message->set_f_13(s->substr(0, 14));
  message->set_f_10(0xd2bfea34d534a4a9);
  message->set_f_4(0.559185);
  message->add_f_21(Message2::E2_CONST_3);
  message->add_f_21(Message2::E2_CONST_2);
  Message2::M7* v0 = message->mutable_f_58();
  Message2::M7::M23* v1_0 = v0->add_f_4();
  Message2::M7::M23::M48* v2 = v1_0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  v0->set_f_0(0x2f767c81);
  message->set_f_16(0x3c23);
  Message2::M10* v3_0 = message->add_f_63();
  v3_0->set_f_0(s->substr(0, 300));
  Message2::M4* v4 = message->mutable_f_53();
  Message2::M4::M25* v5 = v4->mutable_f_4();
  v5->set_f_4(0x73887d84d7873e66);
  v5->set_f_1(false);
  v5->set_f_0(s->substr(0, 292));
  v5->set_f_2(0xfb89d8818793f875);
  v4->set_f_0(false);
  Message2::M4::M34* v6_0 = v4->add_f_5();
  v6_0->set_f_0(0x27);
  v6_0->set_f_1(Message2::M4::M34::E7_CONST_5);
  v6_0->set_f_2(0xb7e005762bf60f02);
  Message2::M4::E4 array_1[20] = {
      Message2::M4::E4_CONST_5, Message2::M4::E4_CONST_1,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_1,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_1, Message2::M4::E4_CONST_4,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_2, Message2::M4::E4_CONST_2,
      Message2::M4::E4_CONST_5, Message2::M4::E4_CONST_2,
      Message2::M4::E4_CONST_1, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_3,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_2,
  };
  for (auto v : array_1) {
    v4->add_f_1(v);
  }
  message->set_f_29(0x685ee2fd04802094);
  message->set_f_22(0x1c);
  message->set_f_6(0xa0866e20160c7da0);
  message->set_f_3(0xdaed944c8eafa283);
  message->set_f_7(0x3db2);
  Message2::M2* v7_0 = message->add_f_49();
  Message2::M2::M14* v8 = v7_0->mutable_f_23();
  v8->set_f_0(0x3aa3f012f1d98cb6);
  v7_0->set_f_8(false);
  v7_0->set_f_1(0x63f2ddb);
  v7_0->set_f_6(0x6c783466);
  v7_0->set_f_11(0x1bfa0718);
  v7_0->set_f_7(0x79);
  v7_0->set_f_2(0x3c);
  v7_0->add_f_9(Message2::M2::E3_CONST_1);
  v7_0->add_f_9(Message2::M2::E3_CONST_2);
  Message2::M2::M26* v9 = v7_0->mutable_f_24();
  Message2::M2::M26::M68* v10 = v9->mutable_f_11();
  v10->set_f_1(s->substr(0, 412));
  Message2::M2::M26::M68::M88* v11 = v10->mutable_f_4();
  Message2::M2::M26::M68::M88::M96* v12 = v11->mutable_f_2();
  v12->set_f_7(0xebe6579516df93c8);
  v12->set_f_6(0x3c);
  v12->set_f_3(s->substr(0, 80));
  v12->set_f_14(s->substr(0, 19));
  v12->set_f_15(0x78354ab63693c882);
  v12->set_f_11(0x6ddc5af7);
  v12->set_f_2(0xdc66fde);
  Message2::M2::M26::M68::M88::M96::M102* v13 = v12->mutable_f_27();
  v13->set_f_0(0x57);
  v12->set_f_18(s->substr(0, 196));
  v12->set_f_9(0x5);
  v12->set_f_17(0.756687);
  v12->set_f_10(0x300ecb5e);
  v12->set_f_5(0x32);
  v10->set_f_0(0x29b749f8d4b034ff);
  v9->set_f_1(s->substr(0, 369));
  Message2::M2::M26::M62* v14_0 = v9->add_f_9();
  v14_0->set_f_2(0.609084);
  v14_0->set_f_0(0x3e);
  v14_0->set_f_1(0xfc69d18);
  Message2::M2::M26::M62::M74* v15 = v14_0->mutable_f_5();
  (void)v15;  // Suppresses clang-tidy.
  v9->set_f_0(s->substr(0, 2679));
  Message2::M2::M26::M45* v16 = v9->mutable_f_8();
  v16->set_f_3(0x9fdd55a);
  v16->set_f_2(0.578649);
  v16->set_f_1(0x85dd69d86ec5d1f7);
  v16->set_f_5(0x21);
  v16->set_f_10(0x8ddfeed);
  v16->set_f_8(0x4d3307601e3746bc);
  v16->set_f_9(s->substr(0, 419));
  v16->set_f_0(s->substr(0, 2059));
  v16->set_f_7(0x8219385338967d76);
  v9->set_f_2(0x216635b);
  v9->set_f_3(0xf049);
  v7_0->set_f_13(0x8886d96);
  v7_0->set_f_4(0x530ba96e);
  message->set_f_20(0x5adbb16247660b58);
  Message2::M8* v17 = message->mutable_f_59();
  v17->set_f_0(0x42);
  v17->set_f_1(0xf099ccc);
  message->set_f_30(0x28);
  message->set_f_27(0x4f);
  message->set_f_19(0xa41dd9f7e62d197);
  message->set_f_28(0x74);
  message->set_f_14(0xd5d9475f40111c74);
  Message2::M11* v18 = message->mutable_f_64();
  v18->set_f_14(0xc58ab643f06b8e9f);
  v18->set_f_30(0x291e95c837715a96);
  v18->set_f_11(0x9ffd3f549411ac3f);
  v18->set_f_29(s->substr(0, 87));
  v18->set_f_12(0x4d);
  v18->add_f_6(Message2::M11::E5_CONST_4);
  v18->set_f_23(0xd54dcd6cedcd9fb3);
  v18->set_f_0(0xa74d6e1);
  v18->set_f_28(0x53);
  v18->set_f_25(s->substr(0, 12));
  v18->set_f_17(0x60);
  v18->set_f_15(0x5e48b5f2760274e9);
  v18->set_f_24(true);
  v18->set_f_9(0.935051);
  v18->set_f_7(0x3930);
  v18->set_f_21(0x3e);
  v18->set_f_3(s->substr(0, 66));
  v18->set_f_16(0x6bce3fec);
  v18->set_f_8(0xaa1f37923e71001);
  Message2::M11::M12* v19_0 = v18->add_f_51();
  v19_0->set_f_4(s->substr(0, 164));
  v19_0->set_f_3(0x74);
  v19_0->set_f_0(s->substr(0, 60));
  Message2::M11::M12::M63* v20 = v19_0->mutable_f_11();
  (void)v20;  // Suppresses clang-tidy.
  v19_0->set_f_1(0xc11410b710a8d9dd);
  Message2::M11::M12::M41* v21 = v19_0->mutable_f_7();
  v21->set_f_15(0x175615);
  v21->set_f_21(0x13ff);
  v21->set_f_18(0x559a848);
  v21->set_f_13(0x6);
  v21->set_f_14(s->substr(0, 461));
  v21->set_f_26(0xe24ce8f3b0a3fe4e);
  v21->set_f_29(true);
  Message2::M11::M12::M41::M84* v22 = v21->mutable_f_49();
  v22->set_f_1(0.224388);
  v21->set_f_4(0x58b4f0b6);
  v21->set_f_16(0x14);
  v21->set_f_1(0x8da1aef76e2fd3b9);
  v21->set_f_9(0x71);
  v21->set_f_5(s->substr(0, 27));
  v21->set_f_0(0xc090955);
  v21->set_f_22(0x65);
  v21->set_f_23(s->substr(0, 7));
  v21->set_f_17(s->substr(0, 14));
  v21->set_f_12(0xd395e012ab5d84a2);
  v21->set_f_28(0.206959);
  v21->set_f_25(true);
  v21->set_f_20(0x7c7ef1ec1);
  v21->set_f_8(true);
  v21->set_f_11(s->substr(0, 21));
  v21->set_f_6(0xf18a6);
  v21->set_f_2(0x196848);
  v21->set_f_10(s->substr(0, 252));
  v18->set_f_5(0.815209);
  v18->set_f_19(0x1591f9);
  v18->set_f_20(0x15);
  v18->set_f_10(0x8f83003);
  v18->set_f_27(s->substr(0, 34));
  v18->set_f_22(0x8c62141);
  v18->set_f_18(s->substr(0, 1166));
  Message2::M11::E6 array_2[17] = {
      Message2::M11::E6_CONST_5, Message2::M11::E6_CONST_1,
      Message2::M11::E6_CONST_3, Message2::M11::E6_CONST_5,
      Message2::M11::E6_CONST_3, Message2::M11::E6_CONST_3,
      Message2::M11::E6_CONST_1, Message2::M11::E6_CONST_1,
      Message2::M11::E6_CONST_5, Message2::M11::E6_CONST_4,
      Message2::M11::E6_CONST_3, Message2::M11::E6_CONST_4,
      Message2::M11::E6_CONST_5, Message2::M11::E6_CONST_2,
      Message2::M11::E6_CONST_5, Message2::M11::E6_CONST_2,
      Message2::M11::E6_CONST_2,
  };
  for (auto v : array_2) {
    v18->add_f_26(v);
  }
  Message2::M11::M33* v23 = v18->mutable_f_52();
  v23->set_f_0(0x5d);
  message->add_f_0(Message2::E1_CONST_2);
  message->set_f_25(s->substr(0, 7));
  message->set_f_18(0x5d211f86);
  message->set_f_1(0x9a1bdaebf6c840c);
  message->set_f_26(0x69);
  message->set_f_23(0x8495f15c98f297ca);
  message->set_f_9(s->substr(0, 7));
  Message2::M9* v24 = message->mutable_f_62();
  Message2::M9::M37* v25 = v24->mutable_f_10();
  v25->set_f_20(0x3e0f9f7118e867d9);
  v25->set_f_2(0x41314a4);
  v25->set_f_5(s->substr(0, 24));
  v25->set_f_11(0x89a6dea);
  v25->set_f_7(0xf045542);
  v25->set_f_15(0x69);
  v25->set_f_0(0xbf0db754c61caff1);
  v25->set_f_12(0xfd48d82e438d48e7);
  v25->set_f_8(s->substr(0, 75));
  v25->set_f_17(0x6e);
  v25->set_f_19(0x5f0d55bcb94b1970);
  v25->set_f_4(s->substr(0, 35));
  v25->set_f_13(0x7db125f9);
  v25->set_f_18(false);
  v25->set_f_6(0x51ae135);
  v25->add_f_1(Message2::M9::M37::E8_CONST_4);
  v25->add_f_1(Message2::M9::M37::E8_CONST_4);
  v25->set_f_21(0x5c);
  Message2::M9::M16* v26_0 = v24->add_f_2();
  Message2::M9::M16::M38* v27_0 = v26_0->add_f_2();
  v27_0->set_f_0(s->substr(0, 72));
  Message2::M9::M16::M38::M76* v28 = v27_0->mutable_f_3();
  v28->set_f_2(0xc79);
  v28->set_f_0(false);
  v28->set_f_1(0x30440d2);
  v28->set_f_3(0x9cb262298217a8f);
  v24->set_f_0(0x29);
  Message2::M9::M27* v29 = v24->mutable_f_6();
  Message2::M9::M27::M51* v30 = v29->mutable_f_5();
  v30->set_f_0(0x54);
  message->set_f_2(true);
  message->set_f_17(0x3245b47370ddd181);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_25(s->substr(0, 26));
  message->set_f_23(0xf2a33bbe5aaec91f);
  message->set_f_9(s->substr(0, 20));
  message->set_f_29(0x49dc133ebe543ee6);
  message->set_f_19(0x23e7c879ac6673df);
  Message2::M10* v0_0 = message->add_f_63();
  v0_0->set_f_0(s->substr(0, 122));
  Message2::M10* v0_1 = message->add_f_63();
  v0_1->set_f_0(s->substr(0, 16));
  message->set_f_18(0x26e9f774);
  Message2::M6* v1 = message->mutable_f_57();
  Message2::M6::M20* v2_0 = v1->add_f_5();
  v2_0->set_f_3(0x18);
  v2_0->set_f_1(0.523595);
  Message2::M6::M20::M42* v3 = v2_0->mutable_f_5();
  v3->set_f_2(0x708cf8110db86a3a);
  v3->set_f_4(0.600765);
  v3->set_f_11(0x7618903b);
  v3->set_f_9(Message2::M6::M20::M42::E12_CONST_5);
  v3->add_f_6(Message2::M6::M20::M42::E11_CONST_1);
  v3->set_f_12(false);
  v3->set_f_8(s->substr(0, 2461));
  v3->set_f_10(0xb94faae31937c9a);
  v3->set_f_14(s->substr(0, 111));
  v3->set_f_16(0xb9cb39fbbabf496d);
  v3->set_f_15(0x9171a6a6252148ff);
  v3->set_f_7(0x60);
  v3->set_f_13(0x3df39676465e5e9d);
  v2_0->set_f_2(0.037129);
  Message2::M6::M20::M46* v4_0 = v2_0->add_f_6();
  Message2::M6::M20::M46::M90* v5 = v4_0->mutable_f_4();
  Message2::M6::M20::M46::M90::M99* v6 = v5->mutable_f_4();
  v6->set_f_2(s->substr(0, 61));
  v5->set_f_1(0x19);
  v5->set_f_2(0x6268a4594386c47e);
  v4_0->set_f_0(0x1558c5f);
  Message2::M6::M19* v7 = v1->mutable_f_2();
  v7->set_f_0(0x444de359be83b4f7);
  Message2::M6::M28* v8 = v1->mutable_f_7();
  v8->set_f_0(0xe15273f266ad22c3);
  v1->set_f_0(true);
  message->set_f_17(0x40aa9ce7ecc5b736);
  message->set_f_5(0xa76f0b5);
  message->set_f_11(s->substr(0, 460));
  message->set_f_16(0x2c);
  message->set_f_3(0xe28dce45b178d616);
  message->add_f_21(Message2::E2_CONST_5);
  Message2::M11* v9 = message->mutable_f_64();
  v9->set_f_10(0xec3bc05);
  Message2::M11::M12* v10_0 = v9->add_f_51();
  v10_0->set_f_4(s->substr(0, 21));
  Message2::M11::M12::M63* v11 = v10_0->mutable_f_11();
  v11->set_f_0(0x11);
  v10_0->set_f_0(s->substr(0, 55));
  Message2::M11::M12::M41* v12 = v10_0->mutable_f_7();
  v12->set_f_18(0x247ddb1);
  v12->set_f_2(0x14);
  v12->set_f_13(0x5c);
  v12->set_f_20(0x70625ad774);
  v12->set_f_25(true);
  v12->set_f_4(0x71868591);
  v12->set_f_8(true);
  v12->set_f_16(0x34e5b2068655a9);
  Message2::M11::M12::M41::M84* v13 = v12->mutable_f_49();
  v13->set_f_0(0x757dd93d3cf6bf25);
  v13->set_f_1(0.149440);
  v12->set_f_27(0x7438ea4dfad097e5);
  v12->set_f_22(0x6a);
  v12->set_f_14(s->substr(0, 19));
  v12->set_f_26(0x8c7e6faac0b84dd4);
  v12->set_f_11(s->substr(0, 9));
  v12->set_f_12(0xa039aff6b5f179c3);
  v12->set_f_1(0x4dee5f3b341ec1);
  Message2::M11::M12::M49* v14_0 = v10_0->add_f_8();
  Message2::M11::M12::M49::M71* v15 = v14_0->mutable_f_3();
  v15->set_f_0(0x64135d791b198602);
  Message2::M11::M12::M49::M80* v16_0 = v14_0->add_f_4();
  v16_0->set_f_0(0x5f774694d5351874);
  v14_0->set_f_0(0xf66f84cd9c5e42d5);
  Message2::M11::M12::M49* v14_1 = v10_0->add_f_8();
  Message2::M11::M12::M49::M89* v17_0 = v14_1->add_f_5();
  v17_0->set_f_0(s->substr(0, 120));
  Message2::M11::M12::M49::M89::M92* v18 = v17_0->mutable_f_3();
  v18->set_f_0(0x1b);
  Message2::M11::M12::M49::M80* v19_0 = v14_1->add_f_4();
  Message2::M11::M12::M49::M80::M95* v20 = v19_0->mutable_f_2();
  (void)v20;  // Suppresses clang-tidy.
  Message2::M11::M12::M49::M71* v21 = v14_1->mutable_f_3();
  (void)v21;  // Suppresses clang-tidy.
  v14_1->set_f_0(0x3d7ae5d835b324fb);
  v10_0->set_f_3(0x4a);
  v9->set_f_28(0x1a);
  v9->set_f_19(0x5e);
  v9->set_f_4(0xdc14944b1e8586f3);
  v9->set_f_21(0x2c96d55);
  v9->set_f_27(s->substr(0, 19));
  v9->set_f_18(s->substr(0, 50));
  v9->add_f_6(Message2::M11::E5_CONST_4);
  v9->set_f_15(0xc327872b72e8c3da);
  v9->set_f_17(0x40);
  v9->set_f_23(0x57df643101a82719);
  v9->set_f_7(0x29d6097);
  Message2::M11::M33* v22 = v9->mutable_f_52();
  v22->set_f_0(0xba3626b);
  v9->set_f_29(s->substr(0, 4));
  v9->set_f_2(true);
  v9->set_f_5(0.318778);
  v9->set_f_31(0x1c);
  v9->set_f_16(0x4dda072b);
  v9->set_f_22(0x1a);
  v9->set_f_9(0.175532);
  v9->set_f_14(0xb93896a209fd15bc);
  v9->set_f_8(0xb49b28e42bf186fb);
  message->set_f_14(0x9bd66d71b1187e33);
  Message2::M7* v23 = message->mutable_f_58();
  Message2::M7::M23* v24_0 = v23->add_f_4();
  Message2::M7::M23::M48* v25 = v24_0->mutable_f_2();
  v25->set_f_0(0xdc73049715429ab3);
  Message2::M2* v26_0 = message->add_f_49();
  v26_0->set_f_3(s->substr(0, 17));
  v26_0->set_f_10(0x6b);
  v26_0->set_f_11(0x4c98cdd3);
  v26_0->set_f_6(0x28b214a9);
  Message2::M2::M26* v27 = v26_0->mutable_f_24();
  v27->set_f_1(s->substr(0, 11));
  v27->set_f_2(0xd9b);
  v27->set_f_4(0x13);
  Message2::M2::M26::M45* v28 = v27->mutable_f_8();
  v28->set_f_3(0x5583d15);
  v28->set_f_7(0xa553073cc8fe8a66);
  v28->set_f_9(s->substr(0, 509));
  v28->set_f_6(0x4eae6a0);
  v28->set_f_4(0x6b50b47);
  v28->set_f_1(0xef2be1b333723e44);
  v28->set_f_0(s->substr(0, 61));
  v28->set_f_10(0x56);
  v28->set_f_8(0x9b559603ecfd6ed0);
  Message2::M2::M26::M62* v29_0 = v27->add_f_9();
  v29_0->set_f_2(0.623961);
  v29_0->set_f_0(0x3d50a3b);
  Message2::M2::M26::M62::M74* v30 = v29_0->mutable_f_5();
  v30->set_f_0(s->substr(0, 1));
  v29_0->set_f_1(0x9c24d28);
  Message2::M2::M26::M68* v31 = v27->mutable_f_11();
  Message2::M2::M26::M68::M88* v32 = v31->mutable_f_4();
  Message2::M2::M26::M68::M88::M96* v33 = v32->mutable_f_2();
  v33->set_f_4(s->substr(0, 75));
  v33->set_f_18(s->substr(0, 2581));
  v33->set_f_0(0x518a9e2);
  v33->set_f_5(0x1d);
  v33->set_f_1(0x5ffa68f);
  v33->set_f_6(0xd);
  v33->set_f_2(0x2e);
  v33->set_f_14(s->substr(0, 31));
  v33->set_f_10(0x24d6bf4e0ce);
  v33->set_f_12(s->substr(0, 30));
  v33->set_f_8(0xd3a505180eba0a4f);
  v33->set_f_19(s->substr(0, 259));
  v33->set_f_7(0x10e2b86d796d5152);
  v33->set_f_3(s->substr(0, 52));
  v33->set_f_11(0x40b3fa02);
  v33->set_f_15(0x5d1a36b70179a378);
  v33->set_f_9(0x4837dc9);
  v33->set_f_16(0xe27f609);
  v32->set_f_0(0xf698f2fa492da7aa);
  v31->set_f_1(s->substr(0, 23));
  v31->set_f_0(0xb5289caba38cdd42);
  v26_0->set_f_8(true);
  v26_0->set_f_4(0x6523cfa5);
  v26_0->set_f_5(0x765e35e0a0f3ad17);
  v26_0->set_f_0(0x4250e8b7);
  v26_0->set_f_1(0x23);
  Message2::M2::M14* v34 = v26_0->mutable_f_23();
  v34->set_f_0(0x74a4b4885aa9614f);
  Message2::M2* v26_1 = message->add_f_49();
  v26_1->set_f_3(s->substr(0, 1));
  v26_1->set_f_12(0x4738a061f4b02dde);
  v26_1->set_f_4(0x25a760f0);
  v26_1->set_f_10(0xff7);
  v26_1->set_f_5(0xa7b9a82fbb6edcc5);
  Message2::M2::M14* v35 = v26_1->mutable_f_23();
  v35->set_f_0(0x4b107613d897836e);
  v26_1->set_f_13(0x55);
  v26_1->set_f_0(0x79d8d221);
  v26_1->set_f_2(0x627a0ab);
  v26_1->set_f_6(0x143739b0);
  v26_1->set_f_8(false);
  message->set_f_4(0.645645);
  message->set_f_24(s->substr(0, 5));
  Message2::E1 array_0[19] = {
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_3,
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_1,
      Message2::E1_CONST_2, Message2::E1_CONST_1, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_3,
      Message2::E1_CONST_4, Message2::E1_CONST_4, Message2::E1_CONST_2,
      Message2::E1_CONST_4, Message2::E1_CONST_5, Message2::E1_CONST_5,
      Message2::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_0(v);
  }
  message->set_f_30(0x18);
  message->set_f_20(0x4bd362def932177);
  message->set_f_26(0x47);
  message->set_f_22(0x59f1ac7);
  Message2::M8* v36 = message->mutable_f_59();
  v36->set_f_0(0x5d);
  Message2::M8::M30* v37 = v36->mutable_f_8();
  Message2::M8::M30::M64* v38_0 = v37->add_f_3();
  v38_0->add_f_0(Message2::M8::M30::M64::E13_CONST_3);
  v36->set_f_1(0x1a091d4d);
  message->set_f_10(0xe09d080e01f1cde3);
  message->set_f_12(s->substr(0, 121));
  Message2::M4* v39 = message->mutable_f_53();
  Message2::M4::M25* v40 = v39->mutable_f_4();
  v40->set_f_2(0x26fea574bef191c7);
  v40->set_f_4(0xb8c08e0094aca40d);
  v40->set_f_3(false);
  v40->set_f_1(false);
  Message2::M4::M25::M66* v41 = v40->mutable_f_8();
  (void)v41;  // Suppresses clang-tidy.
  Message2::M4::M25::M50* v42 = v40->mutable_f_6();
  v42->set_f_0(0x19);
  v42->set_f_1(0x38136a383fd3d18f);
  Message2::M4::M25::M50::M77* v43 = v42->mutable_f_8();
  v43->set_f_0(0x6a380edd);
  v40->set_f_0(s->substr(0, 24));
  Message2::M4::E4 array_1[7] = {
      Message2::M4::E4_CONST_3, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_1,
      Message2::M4::E4_CONST_5, Message2::M4::E4_CONST_3,
      Message2::M4::E4_CONST_3,
  };
  for (auto v : array_1) {
    v39->add_f_1(v);
  }
  v39->set_f_0(true);
  message->set_f_28(0x1a2056);
  Message2::M1* v44 = message->mutable_f_46();
  Message2::M1::M17* v45 = v44->mutable_f_6();
  v45->set_f_9(0x87a7cd08020a889e);
  v45->set_f_12(s->substr(0, 101));
  v45->set_f_5(false);
  v45->set_f_15(0xf1870293d160f2ad);
  v45->set_f_21(0x5b00ad0);
  v45->set_f_2(0x48);
  v45->set_f_3(0x2ce31daecdd6000);
  v45->set_f_6(0x46);
  v45->set_f_17(0xe585a03f8d20184e);
  v45->set_f_11(s->substr(0, 422));
  v45->set_f_20(0x789ad3be);
  v45->set_f_8(s->substr(0, 28));
  v45->set_f_18(0x3bdfc77895c14693);
  v45->set_f_0(s->substr(0, 4));
  v45->set_f_10(s->substr(0, 107));
  v45->set_f_16(0x155c);
  v45->set_f_19(0x18a82c4441a71b9c);
  Message2::M1::M17::M43* v46 = v45->mutable_f_41();
  (void)v46;  // Suppresses clang-tidy.
  Message2::M1::M15* v47 = v44->mutable_f_4();
  Message2::M1::M15::M40* v48 = v47->mutable_f_2();
  v48->set_f_0(0xd);
  v48->add_f_1(Message2::M1::M15::M40::E9_CONST_4);
  v47->set_f_0(s->substr(0, 164));
  v44->set_f_0(0.853470);
  message->set_f_8(s->substr(0, 15));
  Message2::M3* v49 = message->mutable_f_51();
  Message2::M3::M32* v50 = v49->mutable_f_7();
  v50->set_f_11(0x55);
  v50->set_f_14(s->substr(0, 11));
  v50->set_f_2(0xc3ff8fe);
  Message2::M3::M32::M56* v51 = v50->mutable_f_33();
  (void)v51;  // Suppresses clang-tidy.
  v50->set_f_17(0x3289f5ab2ff2fe2);
  Message2::M3::M32::M60* v52_0 = v50->add_f_34();
  v52_0->set_f_1(0x60c9ee3ac45de666);
  v52_0->set_f_0(0x5f);
  v50->set_f_15(0xe7066b59a2646de4);
  v50->set_f_21(true);
  v50->set_f_16(s->substr(0, 261));
  v50->set_f_7(0x326047c);
  v50->set_f_8(s->substr(0, 1));
  v50->set_f_20(s->substr(0, 15));
  v50->set_f_19(0x26);
  Message2::M3::M24* v53 = v49->mutable_f_6();
  v53->set_f_2(0x29032e3a4ce3a7b4);
  v53->set_f_10(s->substr(0, 14));
  v53->set_f_5(s->substr(0, 21));
  v53->set_f_0(0x1ee99936dd828558);
  v53->set_f_9(0x35);
  v53->set_f_1(s->substr(0, 28));
  v53->set_f_3(0x51);
  v53->set_f_8(s->substr(0, 115));
  v53->set_f_4(s->substr(0, 27));
  Message2::M3::M24::M65* v54_0 = v53->add_f_16();
  v54_0->set_f_0(0x1050);
  v54_0->set_f_1(0xdb94af1a70301114);
  v53->set_f_7(0x78);
  v53->set_f_6(0x7);
  v49->set_f_0(s->substr(0, 3073));
  Message2::M3::M18* v55_0 = v49->add_f_3();
  v55_0->set_f_2(0xc4dabcb24c1bc071);
  v55_0->set_f_4(0x17f6c3);
  v55_0->set_f_1(0x4b370d22f621ea23);
  v55_0->set_f_0(0x1a);
  v55_0->set_f_3(0x7dcf35);
  Message2::M3::M18* v55_1 = v49->add_f_3();
  v55_1->set_f_2(0x7c658b4f5d200d3d);
  v55_1->set_f_3(0x3);
  v55_1->set_f_0(0x58b4c71);
  v55_1->set_f_1(0x48491c1f59cd1eae);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_13(s->substr(0, 17));
  message->set_f_29(0xb18b84a07e06ba3e);
  message->set_f_6(0xc2e9ef4487d98a5f);
  message->set_f_23(0xc45f4bea12e956ee);
  Message2::M1* v0 = message->mutable_f_46();
  v0->set_f_0(0.614410);
  Message2::M1::M13* v1 = v0->mutable_f_2();
  v1->set_f_2(0xe1712b89dc3ed56f);
  Message2::M1::M13::M39* v2_0 = v1->add_f_9();
  v2_0->set_f_0(0.357605);
  v2_0->set_f_1(0x56663b17b43e422e);
  v1->set_f_0(0x7e217556c9657767);
  Message2::M1::M17* v3 = v0->mutable_f_6();
  v3->set_f_15(0x57707b079217393c);
  v3->set_f_21(0x75);
  v3->set_f_3(0x52e2f4c98fd2e277);
  v3->set_f_11(s->substr(0, 29));
  v3->set_f_0(s->substr(0, 22));
  v3->set_f_10(s->substr(0, 18));
  v3->set_f_18(0x501497f3a9d99494);
  v3->set_f_6(0xc);
  v3->set_f_1(s->substr(0, 15));
  Message2::M1::M17::M43* v4 = v3->mutable_f_41();
  v4->set_f_0(0x6d);
  Message2::M1::M17::M43::M82* v5 = v4->mutable_f_3();
  v5->set_f_0(0x5d);
  v3->set_f_12(s->substr(0, 184));
  v3->set_f_2(0x32);
  v3->set_f_8(s->substr(0, 16));
  v3->set_f_16(0x5);
  v3->set_f_14(0x864c105);
  v3->set_f_13(0.013215);
  v3->set_f_20(0x1e3e4043);
  v3->set_f_9(0x874695a65305361a);
  message->set_f_26(0x14);
  message->set_f_27(0xb7533c0);
  message->set_f_20(0x3cc30e98e3a72306);
  Message2::M2* v6_0 = message->add_f_49();
  v6_0->set_f_6(0x7bf1ec95);
  Message2::M2::M14* v7 = v6_0->mutable_f_23();
  (void)v7;  // Suppresses clang-tidy.
  v6_0->set_f_5(0xaa9fd051bc385fab);
  v6_0->set_f_12(0xec7bfd085230f19a);
  v6_0->set_f_0(0x53481786);
  v6_0->set_f_13(0x1a);
  v6_0->set_f_8(true);
  v6_0->set_f_2(0x3a50826);
  v6_0->set_f_1(0xfb52d6e);
  v6_0->set_f_11(0x8bc81cd);
  Message2::M2::E3 array_0[13] = {
      Message2::M2::E3_CONST_5, Message2::M2::E3_CONST_5,
      Message2::M2::E3_CONST_5, Message2::M2::E3_CONST_3,
      Message2::M2::E3_CONST_2, Message2::M2::E3_CONST_4,
      Message2::M2::E3_CONST_1, Message2::M2::E3_CONST_2,
      Message2::M2::E3_CONST_4, Message2::M2::E3_CONST_4,
      Message2::M2::E3_CONST_2, Message2::M2::E3_CONST_5,
      Message2::M2::E3_CONST_4,
  };
  for (auto v : array_0) {
    v6_0->add_f_9(v);
  }
  v6_0->set_f_4(0x6e7cca71);
  Message2::M9* v8 = message->mutable_f_62();
  Message2::M9::M31* v9 = v8->mutable_f_8();
  v9->set_f_1(s->substr(0, 8));
  v9->set_f_4(0x31336df7);
  v9->set_f_2(s->substr(0, 27));
  v9->set_f_3(0x7d);
  v9->set_f_0(0xe7995a1);
  Message2::M9::M37* v10 = v8->mutable_f_10();
  v10->set_f_21(0xbfb29);
  v10->set_f_16(0xc4a0833371532042);
  v10->set_f_10(s->substr(0, 79));
  v10->set_f_12(0x60c23d0320a22494);
  v10->set_f_20(0x49d87b2db3eae9b0);
  v10->set_f_7(0x4956f91e);
  v10->set_f_19(0x860177ccdf956c12);
  v10->set_f_9(0x5f);
  v10->set_f_2(0xbb4);
  v10->set_f_15(0x848148);
  v10->set_f_6(0xcf1ac05);
  v10->set_f_17(0x425);
  v10->set_f_8(s->substr(0, 25));
  Message2::M9::M16* v11_0 = v8->add_f_2();
  Message2::M9::M16::M47* v12 = v11_0->mutable_f_3();
  Message2::M9::M16::M47::M70* v13 = v12->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_0(true);
  Message2::M9::M16::M59* v14 = v11_0->mutable_f_5();
  Message2::M9::M16::M59::M87* v15 = v14->mutable_f_2();
  v15->set_f_1(0x8);
  v15->set_f_0(0x2d778c97b4919678);
  Message2::M9::M16::M59::M87::M100* v16_0 = v15->add_f_5();
  v16_0->set_f_0(0x34);
  Message2::M9::M16::M38* v17_0 = v11_0->add_f_2();
  v17_0->set_f_1(false);
  Message2::M9::M16::M38::M76* v18 = v17_0->mutable_f_3();
  Message2::M9::M16::M38::M76::M94* v19 = v18->mutable_f_10();
  (void)v19;  // Suppresses clang-tidy.
  Message2::M9::M16::M38::M76::E14 array_1[21] = {
      Message2::M9::M16::M38::M76::E14_CONST_4,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_1,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_1,
      Message2::M9::M16::M38::M76::E14_CONST_4,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_4,
      Message2::M9::M16::M38::M76::E14_CONST_2,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_4,
      Message2::M9::M16::M38::M76::E14_CONST_2,
      Message2::M9::M16::M38::M76::E14_CONST_4,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_1,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_1,
      Message2::M9::M16::M38::M76::E14_CONST_3,
      Message2::M9::M16::M38::M76::E14_CONST_1,
      Message2::M9::M16::M38::M76::E14_CONST_1,
  };
  for (auto v : array_1) {
    v18->add_f_4(v);
  }
  v18->set_f_3(0x39d15aad04323de);
  v18->set_f_0(false);
  v18->set_f_2(0x26);
  Message2::M9::M27* v20 = v8->mutable_f_6();
  Message2::M9::M27::M51* v21 = v20->mutable_f_5();
  v21->set_f_0(0x82e94a5);
  v20->set_f_0(0xf54456bd9b87cd9f);
  v8->set_f_0(0x2f);
  message->set_f_19(0x7bb63a3e12c4f9d1);
  Message2::M6* v22 = message->mutable_f_57();
  Message2::M6::M28* v23 = v22->mutable_f_7();
  v23->set_f_0(0x21487ad0274371d0);
  Message2::M6::M20* v24_0 = v22->add_f_5();
  v24_0->set_f_2(0.505104);
  v24_0->set_f_0(0x47ab052);
  v24_0->set_f_1(0.999157);
  Message2::M6::M20::M42* v25 = v24_0->mutable_f_5();
  v25->set_f_4(0.600613);
  v25->set_f_13(0x119cc2f6a2e84b38);
  v25->set_f_10(0x50fc8c5d5e9d3c3d);
  v25->set_f_3(s->substr(0, 1321));
  Message2::M6::M20::M42::M75* v26 = v25->mutable_f_28();
  v26->set_f_0(0x308d);
  Message2::M6::M20::M42::M75::M93* v27 = v26->mutable_f_6();
  v27->set_f_1(0x67e7dc755b652e4);
  v27->set_f_0(0xb6a3464a5d3c0e9f);
  v25->add_f_6(Message2::M6::M20::M42::E11_CONST_3);
  v25->set_f_12(true);
  v25->set_f_15(0x1bc45d23644bca72);
  v25->set_f_11(0x684316a1);
  v25->set_f_14(s->substr(0, 98));
  v25->set_f_5(0x2ffbb56);
  v25->set_f_9(Message2::M6::M20::M42::E12_CONST_3);
  v25->set_f_0(0x71);
  Message2::M6::M19* v28 = v22->mutable_f_2();
  v28->set_f_0(0xa80080cd23847bfa);
  v22->set_f_0(true);
  message->set_f_2(false);
  Message2::M7* v29 = message->mutable_f_58();
  (void)v29;  // Suppresses clang-tidy.
  Message2::M3* v30 = message->mutable_f_51();
  Message2::M3::M18* v31_0 = v30->add_f_3();
  v31_0->set_f_1(0x4e88b4ec780e8f30);
  v31_0->set_f_3(0x17ff);
  v31_0->set_f_4(0x67);
  Message2::M3::M24* v32 = v30->mutable_f_6();
  v32->set_f_5(s->substr(0, 12));
  v32->set_f_0(0xb92e8a7a68c8eefc);
  v32->set_f_1(s->substr(0, 51));
  v32->set_f_6(0x4bc5f92);
  v32->set_f_3(0x90a8837);
  Message2::M3::M24::M65* v33_0 = v32->add_f_16();
  v33_0->set_f_1(0x623d93daad8e2069);
  v32->set_f_4(s->substr(0, 20));
  v32->set_f_2(0x181480b1475ef9f5);
  v32->set_f_7(0xa443246);
  v32->set_f_11(0xecb15e0);
  Message2::M3::M21* v34_0 = v30->add_f_4();
  Message2::M3::M21::M67* v35 = v34_0->mutable_f_3();
  v35->set_f_0(0x4b);
  v34_0->set_f_0(0x7ea87e1fb3a3884d);
  Message2::M3::M32* v36 = v30->mutable_f_7();
  v36->set_f_21(false);
  v36->set_f_0(0x3802);
  v36->set_f_8(s->substr(0, 278));
  v36->set_f_20(s->substr(0, 30));
  v36->set_f_5(0xc0587f9b214873b2);
  v36->set_f_2(0x54);
  v36->set_f_19(0xf191757);
  v36->set_f_14(s->substr(0, 25));
  v36->set_f_3(0xde27c65fcaf2feb7);
  v36->set_f_12(s->substr(0, 474));
  v36->set_f_4(0x72c21367ceaba2a8);
  v36->set_f_9(0x43);
  v36->set_f_16(s->substr(0, 7));
  v36->set_f_7(0x3640);
  v36->set_f_6(0x8e2600a47298ccc);
  v36->set_f_1(0xa);
  v36->set_f_11(0x38);
  v36->set_f_18(0x4ba3c049);
  v36->set_f_13(0x1bb5f314);
  v36->set_f_15(0x772715aee9e900d0);
  message->set_f_7(0x4e09919);
  message->set_f_10(0xcd0eb146390b1bf1);
  message->set_f_4(0.008832);
  message->set_f_3(0x900086692485bc60);
  message->set_f_22(0x1db422f);
  message->add_f_21(Message2::E2_CONST_2);
  message->set_f_5(0x295);
  message->set_f_14(0x5379d9ac5dc630e7);
  message->set_f_24(s->substr(0, 17));
  message->set_f_9(s->substr(0, 102));
  Message2::M10* v37_0 = message->add_f_63();
  v37_0->set_f_0(s->substr(0, 428));
  message->set_f_12(s->substr(0, 5));
  message->set_f_17(0xa53dfec683c8aea1);
  Message2::M8* v38 = message->mutable_f_59();
  Message2::M8::M22* v39 = v38->mutable_f_3();
  v39->set_f_2(true);
  Message2::M8::M22::M44* v40 = v39->mutable_f_8();
  v40->set_f_0(0x4d);
  v39->set_f_4(0x457b07b);
  v38->set_f_1(0x63e9fffd);
  v38->set_f_0(0x317dcd7);
  Message2::M5* v41_0 = message->add_f_56();
  Message2::M5::M36* v42 = v41_0->mutable_f_7();
  Message2::M5::M36::M58* v43 = v42->mutable_f_4();
  Message2::M5::M36::M58::M73* v44_0 = v43->add_f_5();
  Message2::M5::M36::M58::M73::M98* v45 = v44_0->mutable_f_5();
  Message2::M5::M36::M58::M73::M98::M101* v46 = v45->mutable_f_2();
  v46->set_f_0(0x784e503ead5b1ef8);
  v45->set_f_0(true);
  Message2::M5::M36::M52* v47 = v42->mutable_f_2();
  v47->set_f_0(0x58);
  Message2::M5::M36::M57* v48 = v42->mutable_f_3();
  Message2::M5::M36::M57::M72* v49 = v48->mutable_f_2();
  v49->set_f_2(false);
  v49->set_f_0(0x7ee02d0);
  v49->set_f_1(0xdb7a082d52f8854f);
  v48->set_f_0(0xc8dc1b0b17cae2e2);
  v42->set_f_0(0xf8eb87320454a599);
  Message2::M5::M29* v50 = v41_0->mutable_f_5();
  (void)v50;  // Suppresses clang-tidy.
  v41_0->set_f_2(0x1d);
  v41_0->set_f_1(0xc);
  message->set_f_8(s->substr(0, 26));
  Message2::M4* v51 = message->mutable_f_53();
  Message2::M4::M34* v52_0 = v51->add_f_5();
  v52_0->set_f_2(0x40661dfbf20bc409);
  v52_0->set_f_1(Message2::M4::M34::E7_CONST_5);
  v51->set_f_0(false);
  Message2::M4::M25* v53 = v51->mutable_f_4();
  Message2::M4::M25::M50* v54 = v53->mutable_f_6();
  v54->set_f_1(0xd87a0a70df2e8a23);
  Message2::M4::M25::M50::M77* v55 = v54->mutable_f_8();
  (void)v55;  // Suppresses clang-tidy.
  v53->set_f_3(true);
  v53->set_f_0(s->substr(0, 28));
  Message2::M4::M25::M66* v56 = v53->mutable_f_8();
  v56->set_f_0(0x15fe899dd63cab1d);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_23(0x5b5477a8a683fabb);
  message->set_f_6(0x8cc556bb8fd5f333);
  Message2::M1* v0 = message->mutable_f_46();
  Message2::M1::M17* v1 = v0->mutable_f_6();
  v1->set_f_9(0xde14f6143a8b2108);
  v1->set_f_17(0x890249a1591dbd42);
  Message2::M1::M17::M43* v2 = v1->mutable_f_41();
  Message2::M1::M17::M43::M82* v3 = v2->mutable_f_3();
  v3->set_f_0(0x6f3d66d);
  v1->set_f_10(s->substr(0, 171));
  v1->set_f_0(s->substr(0, 69));
  v1->set_f_3(0x4ae056ff8fd8cf28);
  v1->set_f_4(0xd9fb516cfc42d677);
  v1->set_f_11(s->substr(0, 113));
  v1->set_f_8(s->substr(0, 3862));
  v1->set_f_6(0x11);
  v1->set_f_2(0xdf617);
  v1->set_f_18(0x8e45b0b944f42dfa);
  v1->set_f_15(0x973f468193cbb790);
  v1->set_f_7(0x7);
  v1->set_f_19(0x996414f34f6d5720);
  v1->set_f_20(0x26c2083b);
  v0->set_f_0(0.755480);
  Message2::M1::M15* v4 = v0->mutable_f_4();
  Message2::M1::M15::M54* v5_0 = v4->add_f_4();
  Message2::M1::M15::M54::M78* v6 = v5_0->mutable_f_3();
  (void)v6;  // Suppresses clang-tidy.
  Message2::M1::M15::M69* v7 = v4->mutable_f_6();
  v7->set_f_0(0x23);
  v4->set_f_0(s->substr(0, 174));
  Message2::M9* v8 = message->mutable_f_62();
  Message2::M9::M16* v9_0 = v8->add_f_2();
  v9_0->set_f_0(0x5d65f48);
  Message2::M9::M16::M59* v10 = v9_0->mutable_f_5();
  v10->set_f_0(true);
  Message2::M9::M16::M59::M87* v11 = v10->mutable_f_2();
  Message2::M9::M16::M59::M87::M100* v12_0 = v11->add_f_5();
  (void)v12_0;  // Suppresses clang-tidy.
  v11->set_f_1(0x5cf7d46);
  v11->set_f_0(0xf637176cf28416d9);
  Message2::M9::M16::M47* v13 = v9_0->mutable_f_3();
  Message2::M9::M16::M47::M70* v14 = v13->mutable_f_3();
  v14->set_f_0(0xe9fcbfb);
  Message2::M9::M31* v15 = v8->mutable_f_8();
  v15->set_f_4(0x750cc236);
  v15->set_f_0(0x73);
  v15->set_f_1(s->substr(0, 180));
  v15->set_f_3(0x1e14565);
  Message2::M9::M37* v16 = v8->mutable_f_10();
  v16->set_f_13(0x4d8aeaf4);
  v16->set_f_7(0x14b45702);
  v16->set_f_16(0x850d3afb4daede6c);
  v16->set_f_2(0x5d);
  v16->set_f_19(0x9b1a5e6438e5ab97);
  v16->set_f_4(s->substr(0, 491));
  v16->add_f_1(Message2::M9::M37::E8_CONST_3);
  v16->set_f_20(0xc10852b8f9a2b611);
  v16->set_f_14(0xab1122b);
  v16->set_f_10(s->substr(0, 502));
  v16->set_f_15(0xd7cf2);
  v16->set_f_18(true);
  v16->set_f_21(0x5f);
  v16->set_f_0(0x90948fe0161c8688);
  v16->set_f_3(0.113504);
  Message2::M9::M27* v17 = v8->mutable_f_6();
  v17->set_f_0(0x77e08b1038085c29);
  Message2::M9::M27::M51* v18 = v17->mutable_f_5();
  (void)v18;  // Suppresses clang-tidy.
  message->set_f_18(0x1349fdd4);
  message->add_f_0(Message2::E1_CONST_3);
  message->set_f_13(s->substr(0, 371));
  Message2::M7* v19 = message->mutable_f_58();
  v19->set_f_0(0x27b25626);
  Message2::M7::M23* v20_0 = v19->add_f_4();
  v20_0->set_f_0(0x5151c680e752ddd3);
  Message2::M7::M23::M48* v21 = v20_0->mutable_f_2();
  v21->set_f_0(0x3aadfcbf10755ce7);
  message->set_f_9(s->substr(0, 472));
  Message2::M8* v22 = message->mutable_f_59();
  Message2::M8::M30* v23 = v22->mutable_f_8();
  Message2::M8::M30::M55* v24 = v23->mutable_f_2();
  v24->set_f_0(0x10);
  Message2::M8::M30::M64* v25_0 = v23->add_f_3();
  (void)v25_0;  // Suppresses clang-tidy.
  v22->set_f_0(0x16);
  Message2::M6* v26 = message->mutable_f_57();
  Message2::M6::M20* v27_0 = v26->add_f_5();
  Message2::M6::M20::M42* v28 = v27_0->mutable_f_5();
  v28->set_f_14(s->substr(0, 19));
  v28->set_f_5(0x6f76b7c);
  v28->set_f_11(0x58deec9c);
  v28->set_f_4(0.249651);
  v28->set_f_0(0xa77b7c9);
  v28->set_f_16(0x6adefe2b5f75c277);
  Message2::M6::M20::M42::M75* v29 = v28->mutable_f_28();
  Message2::M6::M20::M42::M75::M93* v30 = v29->mutable_f_6();
  Message2::M6::M20::M42::M75::M93::M105* v31 = v30->mutable_f_8();
  v31->add_f_0(Message2::M6::M20::M42::M75::M93::M105::E16_CONST_2);
  v30->set_f_0(0xc5263c0de518e02a);
  v30->set_f_1(0x8d4f7050753716e);
  Message2::M6::M20::M42::M75::M93::M103* v32 = v30->mutable_f_6();
  v32->set_f_1(s->substr(0, 31));
  Message2::M6::M20::M42::M75::M91* v33_0 = v29->add_f_5();
  Message2::M6::M20::M42::M75::M91::M106* v34 = v33_0->mutable_f_3();
  v34->set_f_0(0x653fd449f85a4f3f);
  v34->set_f_1(0x48424926);
  v34->set_f_2(0x2083794b);
  v33_0->set_f_1(0x12fe);
  Message2::M6::M20::M42::M75::M91* v33_1 = v29->add_f_5();
  v33_1->set_f_0(0x20e6);
  v33_1->set_f_1(0x9);
  Message2::M6::M20::M42::M75::M91::M106* v35 = v33_1->mutable_f_3();
  v35->set_f_0(0x73e14cc7f8be187f);
  v35->set_f_4(s->substr(0, 76));
  v35->set_f_1(0x2f755fd5);
  v35->set_f_3(0x27);
  v28->set_f_7(0x1c);
  v28->set_f_10(0xf2fac19a4ed7b702);
  v28->set_f_3(s->substr(0, 9));
  v28->add_f_6(Message2::M6::M20::M42::E11_CONST_1);
  v28->add_f_6(Message2::M6::M20::M42::E11_CONST_2);
  v28->add_f_6(Message2::M6::M20::M42::E11_CONST_3);
  v27_0->set_f_3(0x5d);
  v27_0->set_f_2(0.213582);
  v27_0->set_f_1(0.711752);
  Message2::M6::M35* v36 = v26->mutable_f_8();
  v36->set_f_0(0x4e);
  v26->set_f_0(false);
  Message2::M6::M28* v37 = v26->mutable_f_7();
  (void)v37;  // Suppresses clang-tidy.
  message->set_f_15(s->substr(0, 32));
  message->set_f_27(0x25f1be0);
  message->set_f_16(0x79);
  Message2::M4* v38 = message->mutable_f_53();
  Message2::M4::M34* v39_0 = v38->add_f_5();
  v39_0->set_f_0(0x1853);
  v38->add_f_1(Message2::M4::E4_CONST_3);
  message->set_f_24(s->substr(0, 129));
  Message2::M2* v40_0 = message->add_f_49();
  v40_0->set_f_5(0xbf4750c2e559af95);
  v40_0->set_f_11(0x2ea2e2c7);
  v40_0->set_f_2(0x47);
  v40_0->set_f_7(0x7b);
  Message2::M2::M26* v41 = v40_0->mutable_f_24();
  Message2::M2::M26::M68* v42 = v41->mutable_f_11();
  v42->set_f_1(s->substr(0, 20));
  Message2::M2::M26::M68::M88* v43 = v42->mutable_f_4();
  Message2::M2::M26::M68::M88::M96* v44 = v43->mutable_f_2();
  Message2::M2::M26::M68::M88::M96::M102* v45 = v44->mutable_f_27();
  v45->set_f_0(0x73);
  v44->set_f_12(s->substr(0, 303));
  v44->set_f_9(0xed953f6);
  v44->set_f_16(0x2693);
  v44->set_f_3(s->substr(0, 79));
  v44->set_f_2(0x74);
  v44->set_f_7(0x8a5d6f51cbe3b645);
  v44->set_f_19(s->substr(0, 15));
  v44->set_f_4(s->substr(0, 25));
  v44->set_f_13(0xdf2edb62fe0a368f);
  v44->set_f_17(0.701377);
  v44->set_f_8(0xe0a1337abcd76e68);
  Message2::M2::M26::M45* v46 = v41->mutable_f_8();
  v46->set_f_4(0x59e5d6b9);
  v46->set_f_6(0x551d2a4);
  v46->set_f_10(0x71);
  v46->set_f_3(0xa);
  v46->set_f_2(0.454949);
  v46->set_f_9(s->substr(0, 10));
  v41->set_f_0(s->substr(0, 396));
  v41->set_f_2(0x5f);
  v41->set_f_1(s->substr(0, 17));
  v41->set_f_4(0x69);
  Message2::M2::M26::M62* v47_0 = v41->add_f_9();
  v47_0->set_f_2(0.763167);
  v47_0->set_f_1(0x1c90e1);
  Message2::M2::M26::M62::M74* v48 = v47_0->mutable_f_5();
  v48->set_f_0(s->substr(0, 6));
  v47_0->set_f_3(0x6f);
  v40_0->set_f_13(0x15);
  v40_0->set_f_8(false);
  v40_0->set_f_4(0x4f542d79);
  message->set_f_7(0xe6e);
  Message2::M5* v49_0 = message->add_f_56();
  v49_0->set_f_1(0xe48a413);
  Message2::M5::M29* v50 = v49_0->mutable_f_5();
  v50->set_f_1(0x4e4ade1a3edb8f51);
  message->set_f_5(0x15acfa);
  message->set_f_4(0.634620);
  message->set_f_25(s->substr(0, 10));
  message->set_f_8(s->substr(0, 8));
  Message2::E2 array_0[20] = {
      Message2::E2_CONST_3, Message2::E2_CONST_4, Message2::E2_CONST_1,
      Message2::E2_CONST_5, Message2::E2_CONST_5, Message2::E2_CONST_1,
      Message2::E2_CONST_3, Message2::E2_CONST_4, Message2::E2_CONST_1,
      Message2::E2_CONST_3, Message2::E2_CONST_2, Message2::E2_CONST_4,
      Message2::E2_CONST_2, Message2::E2_CONST_2, Message2::E2_CONST_4,
      Message2::E2_CONST_5, Message2::E2_CONST_3, Message2::E2_CONST_2,
      Message2::E2_CONST_5, Message2::E2_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_21(v);
  }
  message->set_f_29(0x9e71f92483f06679);
  message->set_f_14(0xcfd6f68109f693aa);
  message->set_f_26(0x12);
}
const int kMessage2MaxProtoSetters = 4;
inline void Message2_Set(const int i, Message2* message, std::string* s) {
  CHECK(i < kMessage2MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message2_Set_1(message, s);
      break;
    case 1:
      Message2_Set_2(message, s);
      break;
    case 2:
      Message2_Set_3(message, s);
      break;
    case 3:
      Message2_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P0::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE2_H_
