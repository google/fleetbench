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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message1.pb.h"

namespace fleetbench::rpc::P5::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_5(0xfd4ee60);
  message->set_f_27(0x13689b83aa4ad7b7);
  message->set_f_13(0x29);
  message->set_f_7(0x533674e6);
  message->set_f_19(0x91a);
  message->set_f_28(0x4059aff250f4c72e);
  message->set_f_6(0x5);
  message->set_f_1(0x6e9b2252);
  Message1::E1 array_1[16] = {
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_5,
      Message1::E1_CONST_3, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_5, Message1::E1_CONST_2,
      Message1::E1_CONST_3, Message1::E1_CONST_2, Message1::E1_CONST_4,
      Message1::E1_CONST_3, Message1::E1_CONST_5, Message1::E1_CONST_4,
      Message1::E1_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  message->set_f_17(0x10c9325fb9b8fbb1);
  message->set_f_0(s->substr(0, 15));
  message->set_f_8(false);
  message->set_f_2(0x59);
  message->set_f_18(0x5e);
  message->set_f_10(s->substr(0, 14));
  message->set_f_16(0x4ab1d065241434f2);
  message->set_f_21(s->substr(0, 157));
  message->set_f_15(s->substr(0, 6));
  message->set_f_24(0x3dc49413b447aede);
  message->set_f_26(0x18);
  message->set_f_25(0x37eb6b79b9537c81);
  message->set_f_11(0x30);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_3(0x170f01050e6fed4f);
  message->set_f_24(0x2e6d51ffbe6a7900);
  message->set_f_2(0x2c28b);
  message->set_f_6(0xf4f7b06);
  message->set_f_1(0x10e39305);
  message->set_f_14(0x7763dabb);
  message->set_f_17(0x6c4036c939ddd9e4);
  message->set_f_12(0x5);
  message->set_f_26(0x39);
  message->set_f_22(s->substr(0, 24));
  Message1::E1 array_0[20] = {
      Message1::E1_CONST_1, Message1::E1_CONST_4, Message1::E1_CONST_1,
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_3,
      Message1::E1_CONST_2, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_5,
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_4, Message1::E1_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_20(v);
  }
  message->set_f_18(0x229a);
  message->set_f_27(0x7984d3777f1c7506);
  message->set_f_28(0x196856a0c6753f7d);
  message->set_f_8(true);
  message->set_f_10(s->substr(0, 86));
  message->set_f_5(0x3db9);
  message->set_f_29(s->substr(0, 1));
  message->set_f_19(0x1ef8);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_8(true);
  message->set_f_17(0x5706f45a6143210c);
  message->set_f_26(0x45);
  message->set_f_11(0xd4a1654);
  message->set_f_12(0xf5debf5);
  message->set_f_24(0x77e0789cfb4e3aa3);
  message->set_f_27(0x4b9383faf252779c);
  message->set_f_15(s->substr(0, 3));
  Message1::M1* v0 = message->mutable_f_53();
  Message1::M1::M11* v1 = v0->mutable_f_6();
  v1->set_f_0(0x1e1ed5);
  Message1::M1::M13* v2_0 = v0->add_f_8();
  v2_0->set_f_2(0x15b40d);
  v2_0->set_f_1(0x12e16f2e94898857);
  v2_0->set_f_0(true);
  Message1::M1::M9* v3 = v0->mutable_f_5();
  v3->set_f_0(0x43);
  v0->set_f_0(0x31d95f40);
  Message1::M1::M40* v4_0 = v0->add_f_29();
  v4_0->set_f_0(0x64);
  Message1::M1::M45* v5 = v0->mutable_f_34();
  v5->set_f_2(s->substr(0, 20));
  v5->set_f_0(0x579b6203246b2eff);
  v5->set_f_3(0x6a00e13237e022c2);
  v5->set_f_1(0xf81e485);
  Message1::M1::M42* v6_0 = v0->add_f_30();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M1::M22* v7 = v0->mutable_f_17();
  v7->set_f_0(true);
  Message1::M1::M36* v8 = v0->mutable_f_28();
  (void)v8;  // Suppresses clang-tidy.
  Message1::M1::M35* v9 = v0->mutable_f_25();
  v9->set_f_0(s->substr(0, 28));
  Message1::M1::M25* v10_0 = v0->add_f_20();
  v10_0->set_f_2(0x1e);
  v10_0->set_f_0(0x7c4947c463d427e1);
  v10_0->set_f_1(0x22c587b2);
  v10_0->set_f_3(0x5aadf861fe295bbf);
  Message1::M1::M32* v11 = v0->mutable_f_23();
  v11->set_f_0(0.328896);
  Message1::M1::M6* v12_0 = v0->add_f_4();
  v12_0->set_f_0(0x41f6a415);
  v12_0->set_f_1(s->substr(0, 1354));
  v12_0->set_f_2(0x6ed70bc747ad1ee7);
  Message1::M1::M20* v13_0 = v0->add_f_15();
  v13_0->set_f_3(s->substr(0, 457));
  v13_0->set_f_2(false);
  v13_0->set_f_1(false);
  v13_0->set_f_4(0x69260a9);
  Message1::M1::M31* v14_0 = v0->add_f_22();
  v14_0->set_f_2(0x56);
  v14_0->set_f_0(false);
  Message1::M1::M30* v15 = v0->mutable_f_21();
  Message1::M1::M30::E9 array_0[21] = {
      Message1::M1::M30::E9_CONST_3, Message1::M1::M30::E9_CONST_2,
      Message1::M1::M30::E9_CONST_4, Message1::M1::M30::E9_CONST_5,
      Message1::M1::M30::E9_CONST_4, Message1::M1::M30::E9_CONST_1,
      Message1::M1::M30::E9_CONST_5, Message1::M1::M30::E9_CONST_3,
      Message1::M1::M30::E9_CONST_2, Message1::M1::M30::E9_CONST_1,
      Message1::M1::M30::E9_CONST_5, Message1::M1::M30::E9_CONST_5,
      Message1::M1::M30::E9_CONST_4, Message1::M1::M30::E9_CONST_1,
      Message1::M1::M30::E9_CONST_1, Message1::M1::M30::E9_CONST_4,
      Message1::M1::M30::E9_CONST_1, Message1::M1::M30::E9_CONST_5,
      Message1::M1::M30::E9_CONST_3, Message1::M1::M30::E9_CONST_2,
      Message1::M1::M30::E9_CONST_3,
  };
  for (auto v : array_0) {
    v15->add_f_0(v);
  }
  Message1::M1::M12* v16 = v0->mutable_f_7();
  v16->set_f_2(s->substr(0, 110));
  Message1::M1::M19* v17 = v0->mutable_f_13();
  v17->set_f_1(0x7b);
  message->set_f_6(0x23);
  message->set_f_7(0x44c0e3f);
  message->set_f_22(s->substr(0, 11));
  message->set_f_14(0xf6089d2);
  message->set_f_1(0x6e0bae17);
  message->set_f_16(0x5d7de52d8eb6d84f);
  message->set_f_0(s->substr(0, 10));
  message->set_f_13(0x732f43d);
  message->set_f_29(s->substr(0, 27));
  message->set_f_19(0x7752bf2);
  message->set_f_3(0x3d2c2c54b6a8035d);
  message->set_f_25(0x2c6d2c85d094042b);
  message->set_f_21(s->substr(0, 26));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_23(0x1a);
  message->set_f_21(s->substr(0, 14));
  Message1::M1* v0 = message->mutable_f_53();
  Message1::M1::M40* v1_0 = v0->add_f_29();
  (void)v1_0;  // Suppresses clang-tidy.
  Message1::M1::M32* v2 = v0->mutable_f_23();
  (void)v2;  // Suppresses clang-tidy.
  v0->set_f_2(0x4fca47e573571d57);
  Message1::M1::M31* v3_0 = v0->add_f_22();
  v3_0->set_f_2(0x60);
  v3_0->set_f_3(0xecd21fa80853ff);
  v3_0->set_f_0(false);
  v3_0->set_f_1(s->substr(0, 18));
  Message1::M1::M43* v4 = v0->mutable_f_31();
  (void)v4;  // Suppresses clang-tidy.
  Message1::M1::M25* v5_0 = v0->add_f_20();
  v5_0->set_f_2(0x803aff2);
  v5_0->set_f_1(0x5eb6d86b);
  v5_0->set_f_0(0x60b1472b3683851b);
  Message1::M1::M6* v6_0 = v0->add_f_4();
  v6_0->set_f_1(s->substr(0, 20));
  v6_0->set_f_0(0x6a81dd5);
  v6_0->set_f_2(0x3e6f588659d9f893);
  Message1::M1::M6::M50* v7_0 = v6_0->add_f_6();
  Message1::M1::M6::M50::M58* v8_0 = v7_0->add_f_10();
  (void)v8_0;  // Suppresses clang-tidy.
  Message1::M1::M6::M50::M57* v9_0 = v7_0->add_f_9();
  v9_0->set_f_0(s->substr(0, 24));
  v7_0->set_f_0(false);
  Message1::M1::M6::M50::M59* v10 = v7_0->mutable_f_11();
  v10->set_f_0(0x3658);
  v7_0->set_f_1(0x4984c5fd);
  v7_0->set_f_2(0x3b);
  v0->set_f_1(0x385737098d6);
  Message1::M1::M20* v11_0 = v0->add_f_15();
  v11_0->set_f_1(false);
  v11_0->set_f_0(0x412c992026738093);
  v11_0->set_f_4(0x7c);
  Message1::M1::M36* v12 = v0->mutable_f_28();
  v12->set_f_0(0x272aa65);
  Message1::M1::M13* v13_0 = v0->add_f_8();
  v13_0->set_f_2(0xc7d79);
  v13_0->set_f_3(s->substr(0, 29));
  v13_0->set_f_1(0x6a6870b7a38c69df);
  Message1::M1::M35* v14 = v0->mutable_f_25();
  v14->set_f_0(s->substr(0, 266));
  Message1::M1::M30* v15 = v0->mutable_f_21();
  v15->add_f_0(Message1::M1::M30::E9_CONST_2);
  Message1::M1::M45* v16 = v0->mutable_f_34();
  v16->set_f_0(0x7ac676a4202d51a0);
  v16->set_f_3(0x1e5edacced801215);
  v16->set_f_2(s->substr(0, 5));
  Message1::M1::M23* v17 = v0->mutable_f_19();
  v17->set_f_1(s->substr(0, 28));
  Message1::M1::M23::M46* v18 = v17->mutable_f_8();
  Message1::M1::M23::M46::M75* v19_0 = v18->add_f_4();
  v19_0->add_f_0(Message1::M1::M23::M46::M75::E19_CONST_1);
  v18->set_f_1(0x1c3ed64b);
  Message1::M1::M11* v20 = v0->mutable_f_6();
  (void)v20;  // Suppresses clang-tidy.
  Message1::M1::M14* v21_0 = v0->add_f_10();
  v21_0->set_f_30(0x2d);
  v21_0->set_f_6(0x7476ce33);
  v21_0->set_f_7(0x1ae182d48c8074f8);
  v21_0->set_f_0(0x4c888003f85677ca);
  v21_0->set_f_28(0x5d);
  v21_0->set_f_18(0x23);
  v21_0->set_f_12(0x200a387b131894e);
  v21_0->set_f_3(0x4a0555343c08faa5);
  v21_0->set_f_29(0x4c);
  v21_0->set_f_19(0x661a344dc07da39b);
  v21_0->set_f_8(0x3cc09);
  v21_0->set_f_20(0x6d12947b);
  v21_0->set_f_16(s->substr(0, 74));
  v21_0->set_f_4(false);
  v21_0->add_f_14(Message1::M1::M14::E6_CONST_5);
  v21_0->set_f_13(true);
  v21_0->set_f_31(0x1a34);
  v21_0->set_f_10(s->substr(0, 2));
  v21_0->set_f_25(0x23c4dfc8);
  v21_0->set_f_15(0x1b49b9ddeb0);
  v21_0->set_f_5(0x14d74fb);
  v21_0->set_f_2(0x6258a5bfab287ba0);
  v21_0->set_f_1(0x69);
  v21_0->set_f_24(s->substr(0, 6));
  message->set_f_2(0x687b563);
  Message1::M2* v22_0 = message->add_f_56();
  v22_0->set_f_22(true);
  Message1::M2::M41* v23 = v22_0->mutable_f_75();
  v23->set_f_1(false);
  v23->set_f_4(0x199e84);
  v23->set_f_2(0x63b8ee92);
  v23->set_f_3(true);
  v23->set_f_0(0x7d4a0bde32ad906);
  Message1::M2::M21* v24_0 = v22_0->add_f_56();
  v24_0->set_f_0(0x15);
  Message1::M2::M21::M48* v25 = v24_0->mutable_f_5();
  v25->set_f_0(0x34);
  Message1::M2::M38* v26 = v22_0->mutable_f_69();
  v26->set_f_0(s->substr(0, 384));
  Message1::M2::M27* v27_0 = v22_0->add_f_59();
  v27_0->set_f_19(s->substr(0, 122));
  v27_0->set_f_10(true);
  v27_0->set_f_3(0x55a5d1b);
  v27_0->set_f_6(0x456a20cd69305ff0);
  v27_0->set_f_20(s->substr(0, 1));
  v27_0->set_f_1(false);
  v27_0->set_f_2(0x64a768c1b7e3ae9);
  v27_0->set_f_9(false);
  v27_0->set_f_18(0x3835ed2);
  v27_0->set_f_0(0x14a79bbc66d4df47);
  v27_0->add_f_15(Message1::M2::M27::E8_CONST_4);
  v27_0->set_f_13(s->substr(0, 21));
  v27_0->set_f_21(0x51cff85e4b1e2e8);
  v27_0->set_f_16(0x60);
  Message1::M2::M37* v28 = v22_0->mutable_f_66();
  v28->set_f_0(0x52);
  Message1::M2::M15* v29_0 = v22_0->add_f_52();
  v29_0->set_f_0(0x1a85ac80f4d79f74);
  Message1::M2::M15::M53* v30 = v29_0->mutable_f_3();
  Message1::M2::M15::M53::M65* v31 = v30->mutable_f_2();
  (void)v31;  // Suppresses clang-tidy.
  Message1::M2::M15::M53::M69* v32 = v30->mutable_f_4();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M2::M44* v33_0 = v22_0->add_f_76();
  v33_0->set_f_0(s->substr(0, 24));
  v33_0->set_f_2(s->substr(0, 122));
  Message1::M2::M44::M49* v34 = v33_0->mutable_f_6();
  v34->set_f_0(s->substr(0, 5));
  Message1::M2::M44::M49::M66* v35 = v34->mutable_f_4();
  (void)v35;  // Suppresses clang-tidy.
  Message1::M2::M44::M49::M63* v36 = v34->mutable_f_3();
  v36->set_f_1(0x3d2c90763e275dbb);
  v36->set_f_0(false);
  Message1::M2::M44::M49::M68* v37 = v34->mutable_f_5();
  v37->set_f_0(0x273516446956a960);
  v33_0->set_f_1(Message1::M2::M44::E11_CONST_3);
  Message1::M2::M26* v38_0 = v22_0->add_f_58();
  v38_0->set_f_0(false);
  v22_0->set_f_16(0x70);
  v22_0->set_f_21(s->substr(0, 5));
  v22_0->set_f_25(s->substr(0, 104));
  Message1::M2::E2 array_0[22] = {
      Message1::M2::E2_CONST_4, Message1::M2::E2_CONST_2,
      Message1::M2::E2_CONST_1, Message1::M2::E2_CONST_4,
      Message1::M2::E2_CONST_5, Message1::M2::E2_CONST_2,
      Message1::M2::E2_CONST_3, Message1::M2::E2_CONST_5,
      Message1::M2::E2_CONST_3, Message1::M2::E2_CONST_3,
      Message1::M2::E2_CONST_2, Message1::M2::E2_CONST_3,
      Message1::M2::E2_CONST_3, Message1::M2::E2_CONST_2,
      Message1::M2::E2_CONST_3, Message1::M2::E2_CONST_1,
      Message1::M2::E2_CONST_4, Message1::M2::E2_CONST_3,
      Message1::M2::E2_CONST_1, Message1::M2::E2_CONST_1,
      Message1::M2::E2_CONST_3, Message1::M2::E2_CONST_3,
  };
  for (auto v : array_0) {
    v22_0->add_f_2(v);
  }
  Message1::M2::M29* v39 = v22_0->mutable_f_62();
  v39->set_f_0(s->substr(0, 21));
  v22_0->set_f_24(0x40a948a);
  v22_0->set_f_7(s->substr(0, 22));
  Message1::M2::M28* v40 = v22_0->mutable_f_60();
  v40->set_f_1(0x7);
  Message1::M2::M28::M47* v41_0 = v40->add_f_4();
  v41_0->set_f_1(s->substr(0, 19));
  v41_0->set_f_27(0x1b1e93f);
  v41_0->set_f_20(s->substr(0, 3));
  v41_0->set_f_5(s->substr(0, 3));
  v41_0->set_f_6(0x7d6f8ffe);
  v41_0->set_f_11(0x280a);
  v41_0->set_f_29(s->substr(0, 6));
  v41_0->set_f_0(0x5f);
  Message1::M2::M28::M47::M74* v42 = v41_0->mutable_f_48();
  v42->set_f_0(false);
  v41_0->set_f_17(0x15bc3357);
  v41_0->set_f_4(0x523899f9c);
  v41_0->set_f_18(s->substr(0, 20));
  v41_0->set_f_3(0x174e668d);
  v41_0->set_f_24(0xaf5da07272fd4f3);
  Message1::M2::M28::M47::M62* v43_0 = v41_0->add_f_46();
  v43_0->set_f_13(0x215e8e9520d8429a);
  v43_0->set_f_12(0x797ab51767fb30cd);
  v43_0->set_f_5(0x5cb05d8f);
  v43_0->set_f_15(0x9633dcee94889c7);
  v43_0->add_f_1(Message1::M2::M28::M47::M62::E18_CONST_5);
  v43_0->add_f_1(Message1::M2::M28::M47::M62::E18_CONST_5);
  v43_0->add_f_1(Message1::M2::M28::M47::M62::E18_CONST_5);
  v43_0->set_f_2(s->substr(0, 8));
  v43_0->set_f_17(false);
  v43_0->set_f_3(0x629f825d7951f8c2);
  v43_0->set_f_10(0x9e16e40);
  v43_0->set_f_14(s->substr(0, 6));
  v43_0->set_f_6(0x1eb715851865cef9);
  v43_0->set_f_16(0x746da93a);
  v43_0->set_f_0(0.485343);
  v41_0->set_f_15(0x2f59d02072215145);
  v41_0->set_f_8(0x2eb55762ed6090a7);
  v41_0->add_f_16(Message1::M2::M28::M47::E13_CONST_5);
  v41_0->add_f_16(Message1::M2::M28::M47::E13_CONST_2);
  v41_0->add_f_16(Message1::M2::M28::M47::E13_CONST_3);
  v41_0->add_f_16(Message1::M2::M28::M47::E13_CONST_1);
  v41_0->set_f_19(0x5e);
  v41_0->set_f_21(0xd);
  v41_0->add_f_7(Message1::M2::M28::M47::E12_CONST_2);
  v41_0->set_f_28(0.503323);
  Message1::M2::M28::M47::M61* v44 = v41_0->mutable_f_44();
  (void)v44;  // Suppresses clang-tidy.
  v41_0->set_f_9(s->substr(0, 454));
  v41_0->set_f_12(0x16c0f9c162909b0f);
  v41_0->set_f_25(0x77);
  Message1::M2::M24* v45 = v22_0->mutable_f_57();
  v45->set_f_0(0x3500cfd);
  v22_0->set_f_4(0x6a);
  v22_0->set_f_1(0x492720c7851b7905);
  v22_0->set_f_19(0x37);
  v22_0->set_f_15(0.043544);
  Message1::M2::M8* v46_0 = v22_0->add_f_49();
  v46_0->set_f_1(false);
  v46_0->add_f_0(Message1::M2::M8::E5_CONST_3);
  v46_0->set_f_2(0xe804a4aba1046e3);
  v22_0->set_f_23(true);
  v22_0->set_f_26(0x3b5e0430ceb50674);
  v22_0->set_f_28(0xf2fe9c9);
  Message1::M2::M16* v47 = v22_0->mutable_f_53();
  (void)v47;  // Suppresses clang-tidy.
  v22_0->set_f_11(false);
  v22_0->set_f_5(s->substr(0, 24));
  Message1::M2::M34* v48_0 = v22_0->add_f_64();
  v48_0->set_f_0(s->substr(0, 18));
  Message1::M2::M7* v49_0 = v22_0->add_f_48();
  v49_0->set_f_2(s->substr(0, 22));
  v49_0->set_f_0(0x26b5b2106c4b7b7);
  v22_0->set_f_10(0x6f20512be639220e);
  v22_0->set_f_3(0x2dfa93dec968952);
  Message1::M2::M17* v50_0 = v22_0->add_f_54();
  v50_0->set_f_0(0x3d3243dbd79790b6);
  v22_0->set_f_27(s->substr(0, 19));
  Message1::M2::M39* v51 = v22_0->mutable_f_74();
  v51->set_f_0(0x9f314c3);
  Message1::M2::M10* v52 = v22_0->mutable_f_50();
  v52->set_f_0(s->substr(0, 15));
  v22_0->set_f_13(false);
  v22_0->set_f_0(false);
  v22_0->set_f_14(s->substr(0, 26));
  v22_0->set_f_18(0x464aa2f867c7ce6c);
  v22_0->set_f_29(0xc41e6b1);
  message->set_f_3(0x6c8988d835971c6);
  message->set_f_14(0x1cf2e5c0);
  message->set_f_7(0x7d9048d3);
  message->set_f_8(true);
  message->set_f_10(s->substr(0, 84));
  message->set_f_24(0x7865cc86b44323c6);
  message->set_f_25(0x352fde0af475a9ce);
  message->set_f_1(0x2bd4f15e);
  message->set_f_13(0xf95bcd9);
  message->set_f_12(0xd0ea);
  message->set_f_19(0x4e);
  message->set_f_16(0x6f905926a7cad657);
  message->set_f_4(s->substr(0, 3667));
  message->set_f_9(0x5a6bc4f0c0836839);
  message->set_f_17(0xf6dc930c734fa17);
  message->set_f_6(0x384);
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
