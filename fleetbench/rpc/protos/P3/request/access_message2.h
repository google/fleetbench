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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE2_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message2.pb.h"

namespace fleetbench::rpc::P3::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M1* v0 = message->mutable_f_47();
  Message2::M1::M18* v1_0 = v0->add_f_5();
  Message2::M1::M18::M62* v2 = v1_0->mutable_f_6();
  v2->add_f_2(s->substr(0, 5));
  v2->set_f_0(0x20d7c5a9f7d76b17);
  v2->set_f_3(0x39);
  v2->set_f_1(0xa388363);
  v1_0->set_f_0(0x79);
  Message2::M1::M27* v3 = v0->mutable_f_11();
  v3->set_f_4(0x13bb);
  v3->set_f_1(false);
  v3->set_f_0(0x55649b7b519747d6);
  Message2::M1::M20* v4 = v0->mutable_f_8();
  Message2::M1::M20::M46* v5_0 = v4->add_f_4();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M1::M20::M84* v6 = v4->mutable_f_6();
  v6->set_f_2(0x119a4f);
  v6->add_f_0(Message2::M1::M20::M84::E36_CONST_2);
  v6->add_f_3(Message2::M1::M20::M84::E37_CONST_3);
  Message2::M1::M30* v7_0 = v0->add_f_12();
  (void)v7_0;  // Suppresses clang-tidy.
  message->set_f_29(0x11);
  message->set_f_15(s->substr(0, 21));
  message->set_f_0(s->substr(0, 31));
  message->set_f_19(0x7fddca4a);
  Message2::M7* v8 = message->mutable_f_55();
  v8->set_f_0(0x32);
  Message2::M7::M23* v9_0 = v8->add_f_4();
  Message2::M7::M23::M76* v10_0 = v9_0->add_f_11();
  Message2::M7::M23::M76::M96* v11_0 = v10_0->add_f_3();
  v11_0->set_f_1(s->substr(0, 18));
  v9_0->set_f_2(0x23d975b3f8fb0e45);
  Message2::M7::M23::M75* v12 = v9_0->mutable_f_10();
  (void)v12;  // Suppresses clang-tidy.
  Message2::M7::M23::M64* v13_0 = v9_0->add_f_9();
  v13_0->set_f_1(0x6d130f9);
  v9_0->set_f_3(0x591b0a92dc9d1d98);
  v9_0->set_f_0(0x74);
  v9_0->set_f_1(0x15e8);
  Message2::M7::M29* v14 = v8->mutable_f_8();
  v14->set_f_2(s->substr(0, 6));
  Message2::M7::M29::M61* v15_0 = v14->add_f_6();
  v15_0->set_f_12(0xacaf369);
  v15_0->set_f_9(0x509fba8);
  v15_0->set_f_18(s->substr(0, 2));
  v15_0->set_f_7(s->substr(0, 98));
  v15_0->set_f_8(0x4b);
  v15_0->set_f_0(s->substr(0, 43));
  v15_0->set_f_6(0x70a6ebf);
  v15_0->set_f_16(0x30199ed65d336796);
  v15_0->set_f_13(s->substr(0, 21));
  v15_0->set_f_5(s->substr(0, 113));
  v14->set_f_1(0x19a59f);
  Message2::M7::M26* v16 = v8->mutable_f_7();
  Message2::M7::M26::M52* v17 = v16->mutable_f_4();
  v17->set_f_0(s->substr(0, 27));
  Message2::M7::M41* v18_0 = v8->add_f_11();
  (void)v18_0;  // Suppresses clang-tidy.
  message->set_f_17(0x42765d6e);
  message->set_f_4(0x2872fcfb189adab1);
  message->set_f_8(0x56b3e2fa6432b3ea);
  message->set_f_6(s->substr(0, 39));
  message->set_f_10(true);
  message->set_f_27(s->substr(0, 355));
  Message2::M4* v19 = message->mutable_f_52();
  Message2::M4::E4 array_1[10] = {
      Message2::M4::E4_CONST_5, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_5, Message2::M4::E4_CONST_5,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_3,
      Message2::M4::E4_CONST_4, Message2::M4::E4_CONST_3,
      Message2::M4::E4_CONST_2, Message2::M4::E4_CONST_3,
  };
  for (auto v : array_1) {
    v19->add_f_11(v);
  }
  Message2::M4::M31* v20_0 = v19->add_f_16();
  v20_0->set_f_1(s->substr(0, 5));
  v20_0->set_f_2(0x77072c5df92886ed);
  Message2::M4::M31::M47* v21_0 = v20_0->add_f_8();
  v21_0->add_f_0(Message2::M4::M31::M47::E24_CONST_5);
  v21_0->set_f_1(0x42362246);
  v19->set_f_4(0xfbbe025);
  v19->set_f_5(true);
  Message2::M4::M32* v22_0 = v19->add_f_19();
  v22_0->set_f_9(0.316396);
  v22_0->set_f_6(0x17);
  v22_0->set_f_4(0x290b79e1df307b6b);
  Message2::M4::M32::M71* v23_0 = v22_0->add_f_13();
  (void)v23_0;  // Suppresses clang-tidy.
  v22_0->set_f_2(0x6fff562f);
  v22_0->set_f_10(0x7f77e78b);
  v22_0->set_f_7(0x54c8);
  v19->set_f_8(s->substr(0, 5));
  v19->set_f_1(0x16);
  Message2::M4::M39* v24 = v19->mutable_f_20();
  Message2::M4::M39::M88* v25 = v24->mutable_f_10();
  v25->set_f_0(s->substr(0, 27));
  Message2::M4::M39::M79* v26 = v24->mutable_f_8();
  (void)v26;  // Suppresses clang-tidy.
  Message2::M4::M39::M58* v27 = v24->mutable_f_2();
  Message2::M4::M39::M58::E25 array_2[20] = {
      Message2::M4::M39::M58::E25_CONST_2, Message2::M4::M39::M58::E25_CONST_3,
      Message2::M4::M39::M58::E25_CONST_5, Message2::M4::M39::M58::E25_CONST_5,
      Message2::M4::M39::M58::E25_CONST_4, Message2::M4::M39::M58::E25_CONST_1,
      Message2::M4::M39::M58::E25_CONST_1, Message2::M4::M39::M58::E25_CONST_2,
      Message2::M4::M39::M58::E25_CONST_2, Message2::M4::M39::M58::E25_CONST_5,
      Message2::M4::M39::M58::E25_CONST_1, Message2::M4::M39::M58::E25_CONST_1,
      Message2::M4::M39::M58::E25_CONST_2, Message2::M4::M39::M58::E25_CONST_1,
      Message2::M4::M39::M58::E25_CONST_5, Message2::M4::M39::M58::E25_CONST_5,
      Message2::M4::M39::M58::E25_CONST_2, Message2::M4::M39::M58::E25_CONST_3,
      Message2::M4::M39::M58::E25_CONST_3, Message2::M4::M39::M58::E25_CONST_5,
  };
  for (auto v : array_2) {
    v27->add_f_1(v);
  }
  Message2::M4::M39::M58::M97* v28 = v27->mutable_f_9();
  v28->set_f_19(0x47fd73aeca06f808);
  Message2::M4::M39::M58::M97::M103* v29 = v28->mutable_f_46();
  v29->set_f_8(s->substr(0, 21));
  v29->set_f_12(0x46cad8a7d1a8fc95);
  v29->set_f_14(0x5a);
  v29->add_f_18(s->substr(0, 8));
  v29->set_f_10(0x34bccb9dce0b2724);
  v29->set_f_11(0x1df99398);
  v29->set_f_16(s->substr(0, 7));
  v29->set_f_1(s->substr(0, 5));
  v29->add_f_7(Message2::M4::M39::M58::M97::M103::E47_CONST_5);
  v29->set_f_22(0x2c2cd0d1d24ac189);
  Message2::M4::M39::M58::M97::M103::E48 array_3[21] = {
      Message2::M4::M39::M58::M97::M103::E48_CONST_5,
      Message2::M4::M39::M58::M97::M103::E48_CONST_3,
      Message2::M4::M39::M58::M97::M103::E48_CONST_2,
      Message2::M4::M39::M58::M97::M103::E48_CONST_5,
      Message2::M4::M39::M58::M97::M103::E48_CONST_4,
      Message2::M4::M39::M58::M97::M103::E48_CONST_3,
      Message2::M4::M39::M58::M97::M103::E48_CONST_5,
      Message2::M4::M39::M58::M97::M103::E48_CONST_3,
      Message2::M4::M39::M58::M97::M103::E48_CONST_2,
      Message2::M4::M39::M58::M97::M103::E48_CONST_2,
      Message2::M4::M39::M58::M97::M103::E48_CONST_4,
      Message2::M4::M39::M58::M97::M103::E48_CONST_2,
      Message2::M4::M39::M58::M97::M103::E48_CONST_3,
      Message2::M4::M39::M58::M97::M103::E48_CONST_2,
      Message2::M4::M39::M58::M97::M103::E48_CONST_5,
      Message2::M4::M39::M58::M97::M103::E48_CONST_4,
      Message2::M4::M39::M58::M97::M103::E48_CONST_1,
      Message2::M4::M39::M58::M97::M103::E48_CONST_1,
      Message2::M4::M39::M58::M97::M103::E48_CONST_1,
      Message2::M4::M39::M58::M97::M103::E48_CONST_3,
      Message2::M4::M39::M58::M97::M103::E48_CONST_5,
  };
  for (auto v : array_3) {
    v29->add_f_15(v);
  }
  v28->set_f_14(0x58);
  v28->set_f_4(s->substr(0, 123));
  v28->set_f_15(0x791027e258816826);
  v28->set_f_8(0x57);
  Message2::M4::M39::M58::M97::M100* v30 = v28->mutable_f_45();
  (void)v30;  // Suppresses clang-tidy.
  v28->set_f_6(s->substr(0, 19));
  v28->set_f_29(s->substr(0, 92));
  v28->set_f_7(0x2ab6d25f33ff2c0e);
  v28->set_f_13(0xb6925c6);
  v28->set_f_3(false);
  v28->set_f_1(0x1312e2b8);
  v28->set_f_23(0xad51f);
  v28->set_f_22(0xe132e6e);
  v28->set_f_9(s->substr(0, 19));
  v28->set_f_16(s->substr(0, 28));
  v27->set_f_3(0x769e78b3871a185c);
  v27->set_f_2(0x59);
  v19->set_f_10(s->substr(0, 27));
  v19->set_f_3(0x380c);
  v19->set_f_9(0x2);
  message->set_f_30(0x60);
  message->set_f_21(false);
  message->set_f_5(0x2e);
  message->set_f_26(Message2::E2_CONST_3);
  message->set_f_1(0x5d);
  message->set_f_12(s->substr(0, 72));
  Message2::M3* v31 = message->mutable_f_50();
  v31->set_f_4(0x3ad43db17785f874);
  v31->set_f_3(s->substr(0, 4));
  Message2::M3::M38* v32 = v31->mutable_f_10();
  v32->set_f_6(s->substr(0, 20));
  v32->add_f_16(0x9f90d7e);
  v32->set_f_18(Message2::M3::M38::E19_CONST_2);
  v32->set_f_3(0x5df2dab677aff27d);
  v32->set_f_10(0x29835e17cafd260);
  v32->set_f_4(0x5a92f1fbf1e8bfab);
  v32->set_f_22(s->substr(0, 26));
  v32->set_f_1(s->substr(0, 4));
  v32->set_f_14(0xa7205b1);
  v32->set_f_2(0x86a6142ff52102a);
  v32->set_f_21(0x636058d9cb10a890);
  v32->set_f_29(0x25c3525556d56e78);
  v32->set_f_28(0x2b);
  v32->set_f_5(false);
  v32->set_f_17(0x189ff1cc8a7979c0);
  v32->set_f_27(0x5077b209);
  v32->set_f_8(s->substr(0, 2));
  v31->set_f_1(0x22c93f63ace122b);
  v31->set_f_2(0x66);
  v31->set_f_5(0x6f);
  v31->set_f_0(0x17da20);
  Message2::M6* v33 = message->mutable_f_54();
  Message2::M6::M14* v34 = v33->mutable_f_3();
  v34->set_f_4(0x70);
  Message2::M6::M25* v35_0 = v33->add_f_6();
  v35_0->set_f_0(0xe17cb88);
  Message2::M6::M9* v36 = v33->mutable_f_2();
  v36->set_f_12(0x779df2d2342da20e);
  v36->set_f_9(s->substr(0, 92));
  v36->set_f_4(0x162e6659ea624999);
  Message2::M6::M9::E8 array_4[21] = {
      Message2::M6::M9::E8_CONST_3, Message2::M6::M9::E8_CONST_5,
      Message2::M6::M9::E8_CONST_4, Message2::M6::M9::E8_CONST_2,
      Message2::M6::M9::E8_CONST_3, Message2::M6::M9::E8_CONST_1,
      Message2::M6::M9::E8_CONST_3, Message2::M6::M9::E8_CONST_4,
      Message2::M6::M9::E8_CONST_3, Message2::M6::M9::E8_CONST_3,
      Message2::M6::M9::E8_CONST_2, Message2::M6::M9::E8_CONST_4,
      Message2::M6::M9::E8_CONST_5, Message2::M6::M9::E8_CONST_5,
      Message2::M6::M9::E8_CONST_4, Message2::M6::M9::E8_CONST_3,
      Message2::M6::M9::E8_CONST_5, Message2::M6::M9::E8_CONST_1,
      Message2::M6::M9::E8_CONST_5, Message2::M6::M9::E8_CONST_4,
      Message2::M6::M9::E8_CONST_1,
  };
  for (auto v : array_4) {
    v36->add_f_13(v);
  }
  v36->set_f_7(0x761f0bc86b106abe);
  v36->set_f_11(s->substr(0, 42));
  v36->set_f_17(0x27ab3f3f33d7c6e6);
  v36->set_f_16(true);
  v36->set_f_10(0xf78f507);
  v36->set_f_15(0x1404432b);
  v36->set_f_5(s->substr(0, 12));
  v36->set_f_8(0x2b3375c4480345df);
  v36->set_f_14(0x2c);
  Message2::M6::M9::M87* v37_0 = v36->add_f_33();
  v37_0->set_f_1(0x787e30a);
  v33->set_f_0(0xf);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::E1 array_0[21] = {
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_2,
      Message2::E1_CONST_5, Message2::E1_CONST_2, Message2::E1_CONST_3,
      Message2::E1_CONST_2, Message2::E1_CONST_2, Message2::E1_CONST_2,
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_5,
      Message2::E1_CONST_4, Message2::E1_CONST_2, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_2, Message2::E1_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_14(v);
  }
  message->set_f_16(0x388d);
  Message2::M6* v0 = message->mutable_f_54();
  Message2::M6::M43* v1_0 = v0->add_f_7();
  v1_0->set_f_5(0x17);
  v1_0->add_f_16(Message2::M6::M43::E23_CONST_5);
  v1_0->set_f_0(0x2b6d471a);
  v1_0->set_f_11(0x76c2e5489e5a61cb);
  v1_0->set_f_8(0xc);
  v1_0->set_f_3(0x7fabba1);
  Message2::M6::M43::M86* v2 = v1_0->mutable_f_25();
  v2->set_f_2(0x2ce12c15);
  v2->set_f_3(0x7afac928d51e8198);
  v2->set_f_0(Message2::M6::M43::M86::E38_CONST_5);
  v1_0->set_f_9(0x4b);
  v1_0->set_f_2(0x4b99825905fbd876);
  Message2::M6::M25* v3_0 = v0->add_f_6();
  Message2::M6::M25::M69* v4 = v3_0->mutable_f_2();
  v4->set_f_0(false);
  v4->set_f_4(0x27);
  v3_0->set_f_0(0x40);
  Message2::M6::M25::M89* v5 = v3_0->mutable_f_3();
  v5->set_f_2(0x162b05029d6eac49);
  v5->set_f_1(0x69);
  Message2::M6::M9* v6 = v0->mutable_f_2();
  v6->set_f_8(0x4fc56003931db99a);
  v6->set_f_11(s->substr(0, 7));
  v6->set_f_4(0x4e0361acdbe1ff22);
  v6->set_f_1(0x73);
  v6->set_f_16(false);
  v6->set_f_3(0x21a2a9516adacf0c);
  v6->set_f_14(0x23d2381);
  v6->set_f_10(0x77e4c776);
  Message2::M6::M9::E6 array_1[20] = {
      Message2::M6::M9::E6_CONST_5, Message2::M6::M9::E6_CONST_3,
      Message2::M6::M9::E6_CONST_2, Message2::M6::M9::E6_CONST_2,
      Message2::M6::M9::E6_CONST_3, Message2::M6::M9::E6_CONST_1,
      Message2::M6::M9::E6_CONST_3, Message2::M6::M9::E6_CONST_4,
      Message2::M6::M9::E6_CONST_1, Message2::M6::M9::E6_CONST_5,
      Message2::M6::M9::E6_CONST_2, Message2::M6::M9::E6_CONST_1,
      Message2::M6::M9::E6_CONST_1, Message2::M6::M9::E6_CONST_2,
      Message2::M6::M9::E6_CONST_2, Message2::M6::M9::E6_CONST_1,
      Message2::M6::M9::E6_CONST_1, Message2::M6::M9::E6_CONST_2,
      Message2::M6::M9::E6_CONST_5, Message2::M6::M9::E6_CONST_2,
  };
  for (auto v : array_1) {
    v6->add_f_0(v);
  }
  Message2::M6::M9::M87* v7_0 = v6->add_f_33();
  v7_0->set_f_0(0x27d9aaa22bf05207);
  v7_0->set_f_1(0x51);
  Message2::M6::M9::M49* v8 = v6->mutable_f_31();
  v8->set_f_0(0x49c25a1e108d0591);
  v6->set_f_12(0x1ab1c8759d8adad4);
  Message2::M2* v9 = message->mutable_f_49();
  Message2::M2::M36* v10 = v9->mutable_f_5();
  v10->set_f_1(s->substr(0, 782));
  v10->set_f_0(0x7);
  v9->set_f_0(0x21a86fcbc46f148e);
  Message2::M2::M12* v11 = v9->mutable_f_3();
  v11->set_f_0(0x173f4a172cbbf421);
  Message2::M2::M12::M82* v12 = v11->mutable_f_2();
  Message2::M2::M12::M82::E33 array_2[22] = {
      Message2::M2::M12::M82::E33_CONST_3, Message2::M2::M12::M82::E33_CONST_4,
      Message2::M2::M12::M82::E33_CONST_3, Message2::M2::M12::M82::E33_CONST_3,
      Message2::M2::M12::M82::E33_CONST_2, Message2::M2::M12::M82::E33_CONST_4,
      Message2::M2::M12::M82::E33_CONST_1, Message2::M2::M12::M82::E33_CONST_1,
      Message2::M2::M12::M82::E33_CONST_2, Message2::M2::M12::M82::E33_CONST_2,
      Message2::M2::M12::M82::E33_CONST_2, Message2::M2::M12::M82::E33_CONST_2,
      Message2::M2::M12::M82::E33_CONST_2, Message2::M2::M12::M82::E33_CONST_3,
      Message2::M2::M12::M82::E33_CONST_5, Message2::M2::M12::M82::E33_CONST_2,
      Message2::M2::M12::M82::E33_CONST_4, Message2::M2::M12::M82::E33_CONST_1,
      Message2::M2::M12::M82::E33_CONST_4, Message2::M2::M12::M82::E33_CONST_1,
      Message2::M2::M12::M82::E33_CONST_1, Message2::M2::M12::M82::E33_CONST_2,
  };
  for (auto v : array_2) {
    v12->add_f_2(v);
  }
  Message2::M2::M12::M82::M93* v13 = v12->mutable_f_8();
  v13->set_f_0(false);
  Message2::M2::M12::M82::M93::M104* v14 = v13->mutable_f_3();
  (void)v14;  // Suppresses clang-tidy.
  Message2::M2::M12::M82::M93::M102* v15_0 = v13->add_f_2();
  v15_0->set_f_0(s->substr(0, 347));
  v12->set_f_3(0x4d);
  Message2::M2::M42* v16 = v9->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  Message2::M4* v17 = message->mutable_f_52();
  v17->add_f_11(Message2::M4::E4_CONST_2);
  v17->set_f_5(false);
  Message2::M4::M40* v18 = v17->mutable_f_22();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_1(0x7477dad);
  Message2::M4::M31* v19_0 = v17->add_f_16();
  Message2::M4::M31::M74* v20_0 = v19_0->add_f_9();
  (void)v20_0;  // Suppresses clang-tidy.
  Message2::M4::M31::M47* v21_0 = v19_0->add_f_8();
  v21_0->set_f_1(0x123dbeb3);
  v19_0->set_f_0(s->substr(0, 4));
  v19_0->set_f_1(s->substr(0, 65));
  v17->set_f_8(s->substr(0, 7));
  v17->set_f_10(s->substr(0, 4));
  v17->set_f_0(true);
  message->set_f_20(0x3a62);
  message->set_f_25(0x26de776e50dfb359);
  Message2::M8* v22_0 = message->add_f_57();
  Message2::M8::M33* v23 = v22_0->mutable_f_6();
  v23->set_f_1(0x46e750f9);
  v23->set_f_0(s->substr(0, 32));
  message->set_f_24(0x4ba1b07a041aaaaf);
  message->set_f_26(Message2::E2_CONST_1);
  message->set_f_12(s->substr(0, 30));
  message->set_f_29(0x5b);
  message->set_f_8(0xe1005fa68ccb36e);
  message->set_f_10(true);
  message->set_f_23(0x33);
  Message2::M3* v24 = message->mutable_f_50();
  v24->set_f_2(0x7a);
  v24->set_f_3(s->substr(0, 2));
  v24->set_f_4(0x7f7b67f92ba577c7);
  Message2::M3::M38* v25 = v24->mutable_f_10();
  v25->set_f_20(0x28);
  v25->set_f_12(0x75c686f);
  v25->set_f_7(0xa);
  v25->set_f_14(0x34);
  v25->set_f_2(0x65dcaacf67b9cfef);
  v25->set_f_3(0x50bce56eab7d04fb);
  v25->set_f_10(0x35e3fdc323f0585);
  v25->set_f_17(0x3d088d3ef14979bb);
  v25->set_f_26(0x23f6);
  v25->set_f_28(0x78);
  v25->set_f_15(0x1042c99da3dc2e81);
  v25->set_f_11(0x7583d7d646649974);
  v25->set_f_19(0x5b);
  v25->set_f_21(0xc2d1fd166d27774);
  int32_t array_3[170] = {
      0xee430c4, 0xc8b41,   0x12f103,  0x61,      0x1e6110,  0x6bfc620,
      0x1aa05,   0x161909,  0xd9d14a9, 0x19,      0x1a05ee,  0x50,
      0x870db40, 0x2aa71,   0x71,      0xdb12f,   0x1d,      0xf8614,
      0x976c27,  0xf9746,   0xf573c,   0xc,       0x64,      0xdba85fe,
      0x1738b5,  0x19f99,   0xb8036,   0x76,      0x571c84b, 0x45,
      0xf6e5060, 0x2d,      0xc,       0xa5381,   0x1b591a,  0x13eb8,
      0x45,      0x1a,      0xf9fb5,   0x7872612, 0x3,       0x29,
      0x13,      0x60a3a8a, 0x141840,  0x5bc2b9f, 0x5bb81ee, 0x88d6c80,
      0x5,       0x49,      0x56024,   0x50c30a5, 0x12,      0x72,
      0x65,      0x52,      0x16,      0x75,      0x7f601,   0x52,
      0x6c0db,   0x23,      0x478b5,   0xc8d2a,   0x3f7c701, 0x11,
      0x1b8998,  0x22,      0x25,      0x66,      0x11aa35,  0x6,
      0xe459870, 0x50,      0x7aaa550, 0xc8c3,    0x27,      0x1c6f08,
      0x96434,   0x1bd95fa, 0x16cccb,  0x6bbf64e, 0x5d,      0x71,
      0x7b,      0x17a8e7,  0x1d4319e, 0xd5f5c,   0x3072382, 0x160e4e,
      0x7a,      0x674c126, 0x4e,      0xac966,   0x18b2af,  0x1d4243,
      0x20,      0x44,      0x3d,      0x3ae1d44, 0xb04b7d0, 0x36,
      0xd,       0x4,       0xde72f15, 0x10d45d,  0x5a32465, 0x5c33800,
      0x144701,  0x50,      0x40291b4, 0x62,      0x130b48,  0x2c,
      0xc76f927, 0x8,       0x1b342f,  0x3d,      0x20,      0x191947,
      0xa,       0x860a9fe, 0x12,      0x9b59c,   0x7c,      0x60,
      0x15,      0x1e,      0x7,       0x1dcf29,  0x4d,      0x20874ae,
      0x2cbf7a8, 0x53,      0x1b3d3f,  0x1a8b7,   0x1f5306,  0x44,
      0xce4e8ff, 0x1241cc,  0x28c2de0, 0x7c,      0x14d636,  0x5dd2,
      0x23,      0xae638bf, 0x98ba2fb, 0x718d18c, 0xa777bbc, 0x1b7f31,
      0x346e1cf, 0x106e37,  0x6a07246, 0xb77ffa7, 0x4a,      0x64,
      0x65,      0x171db1,  0x56,      0xd,       0x3d,      0x4a9a86c,
      0x32,      0xbca7066, 0x1647d84, 0x6ace61,  0x89f3a8,  0x23,
      0x3d,      0x6,
  };
  for (auto v : array_3) {
    v25->add_f_24(v);
  }
  message->set_f_3(false);
  message->set_f_21(true);
  message->set_f_1(0xa03b5);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M4* v0 = message->mutable_f_52();
  v0->set_f_2(s->substr(0, 4));
  Message2::M4::M31* v1_0 = v0->add_f_16();
  v1_0->set_f_3(0x14);
  Message2::M4::M31::M47* v2_0 = v1_0->add_f_8();
  v2_0->set_f_1(0xb541c41);
  v2_0->add_f_0(Message2::M4::M31::M47::E24_CONST_5);
  v0->set_f_8(s->substr(0, 18));
  v0->add_f_11(Message2::M4::E4_CONST_2);
  v0->set_f_5(false);
  v0->set_f_9(0x39);
  v0->set_f_3(0xa81c6a3);
  v0->set_f_1(0x3);
  v0->set_f_10(s->substr(0, 4));
  v0->set_f_4(0x3b9b2de);
  Message2::M4::M40* v3 = v0->mutable_f_22();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_1(0x3456);
  Message2::M5* v4_0 = message->add_f_53();
  v4_0->set_f_0(s->substr(0, 17));
  v4_0->set_f_2(0x347fca2cb940184c);
  v4_0->set_f_3(s->substr(0, 4));
  v4_0->set_f_7(0x743731838a91ebcc);
  v4_0->set_f_6(s->substr(0, 17));
  Message2::M5::M17* v5 = v4_0->mutable_f_17();
  v5->set_f_0(0x20bfbd809873336b);
  message->set_f_16(0x59);
  message->set_f_26(Message2::E2_CONST_2);
  message->set_f_13(s->substr(0, 124));
  message->set_f_0(s->substr(0, 1));
  message->set_f_19(0x9fb1eb3);
  message->set_f_27(s->substr(0, 6));
  message->set_f_2(0xeeb4c7a);
  message->set_f_6(s->substr(0, 12));
  message->set_f_30(0x392bc47);
  message->set_f_28(0xf4a4ce2);
  message->add_f_14(Message2::E1_CONST_1);
  message->set_f_8(0x1a878401f287b97a);
  message->set_f_12(s->substr(0, 42));
  message->set_f_4(0x141dd89bca2aab54);
  Message2::M2* v6 = message->mutable_f_49();
  Message2::M2::M36* v7 = v6->mutable_f_5();
  v7->set_f_0(0x4a85e8c);
  message->set_f_29(0x88f1dc);
  message->set_f_25(0x12da23f941c7633b);
  Message2::M8* v8_0 = message->add_f_57();
  Message2::M8::M33* v9 = v8_0->mutable_f_6();
  v9->set_f_2(s->substr(0, 6));
  v9->set_f_0(s->substr(0, 15));
  Message2::M8::M10* v10 = v8_0->mutable_f_3();
  v10->set_f_0(0x753ac98);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_17(0x72549b6);
  message->set_f_29(0x85844d0);
  Message2::E1 array_0[18] = {
      Message2::E1_CONST_5, Message2::E1_CONST_3, Message2::E1_CONST_2,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_3,
      Message2::E1_CONST_2, Message2::E1_CONST_2, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_3,
      Message2::E1_CONST_4, Message2::E1_CONST_1, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_14(v);
  }
  Message2::M7* v0 = message->mutable_f_55();
  Message2::M7::M24* v1 = v0->mutable_f_5();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M7::M37* v2 = v0->mutable_f_9();
  v2->set_f_0(0x6ecf7ae91985f3);
  Message2::M7::M37::M73* v3 = v2->mutable_f_4();
  v3->set_f_8(s->substr(0, 21));
  v3->set_f_4(0x51);
  v3->set_f_6(s->substr(0, 8));
  v3->set_f_12(0x6fb94f1e97aeee2b);
  v3->add_f_1(Message2::M7::M37::M73::E29_CONST_1);
  v3->set_f_13(s->substr(0, 5));
  v3->add_f_14(0x1107e5);
  v3->set_f_10(0x781a830);
  v3->set_f_7(0x676e24699dafffcd);
  v3->set_f_5(0x18abf9bb);
  v3->set_f_9(0x5f54c7a421631f7f);
  v3->set_f_16(0x50ded1d3722f2841);
  v3->set_f_11(0x26e47dca3faa5aa);
  v0->set_f_0(0x4f);
  Message2::M7::M23* v4_0 = v0->add_f_4();
  Message2::M7::M23::M45* v5 = v4_0->mutable_f_8();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M7::M23::M76* v6_0 = v4_0->add_f_11();
  v6_0->set_f_0(0x26);
  Message2::M7::M23::M76::M96* v7_0 = v6_0->add_f_3();
  v7_0->set_f_0(Message2::M7::M23::M76::M96::E40_CONST_5);
  v7_0->set_f_1(s->substr(0, 23));
  v6_0->set_f_1(0x30);
  v4_0->set_f_0(0x3f53);
  Message2::M7::M23::M75* v8 = v4_0->mutable_f_10();
  (void)v8;  // Suppresses clang-tidy.
  v4_0->set_f_4(0x71);
  v4_0->set_f_2(0x5787e985af6cc52e);
  Message2::M7::M23::M64* v9_0 = v4_0->add_f_9();
  (void)v9_0;  // Suppresses clang-tidy.
  Message2::M7::M26* v10 = v0->mutable_f_7();
  Message2::M7::M26::M52* v11 = v10->mutable_f_4();
  v11->set_f_0(s->substr(0, 3));
  v11->set_f_3(s->substr(0, 20));
  message->set_f_12(s->substr(0, 23));
  message->set_f_19(0x6f156a80);
  Message2::M4* v12 = message->mutable_f_52();
  Message2::M4::M39* v13 = v12->mutable_f_20();
  Message2::M4::M39::M78* v14 = v13->mutable_f_5();
  v14->set_f_0(0x2cbd018a);
  Message2::M4::M39::E20 array_1[19] = {
      Message2::M4::M39::E20_CONST_1, Message2::M4::M39::E20_CONST_5,
      Message2::M4::M39::E20_CONST_2, Message2::M4::M39::E20_CONST_5,
      Message2::M4::M39::E20_CONST_4, Message2::M4::M39::E20_CONST_2,
      Message2::M4::M39::E20_CONST_3, Message2::M4::M39::E20_CONST_3,
      Message2::M4::M39::E20_CONST_3, Message2::M4::M39::E20_CONST_5,
      Message2::M4::M39::E20_CONST_5, Message2::M4::M39::E20_CONST_3,
      Message2::M4::M39::E20_CONST_1, Message2::M4::M39::E20_CONST_3,
      Message2::M4::M39::E20_CONST_5, Message2::M4::M39::E20_CONST_2,
      Message2::M4::M39::E20_CONST_2, Message2::M4::M39::E20_CONST_3,
      Message2::M4::M39::E20_CONST_3,
  };
  for (auto v : array_1) {
    v13->add_f_0(v);
  }
  Message2::M4::M39::M79* v15 = v13->mutable_f_8();
  v15->set_f_0(0x5bd0ec1);
  Message2::M4::M39::M88* v16 = v13->mutable_f_10();
  v16->set_f_0(s->substr(0, 18));
  v12->set_f_2(s->substr(0, 366));
  Message2::M4::M32* v17_0 = v12->add_f_19();
  v17_0->set_f_9(0.160309);
  v17_0->set_f_0(0x2857);
  v17_0->set_f_5(s->substr(0, 2));
  v17_0->set_f_4(0x10998ac4f855d922);
  v17_0->set_f_7(0x64);
  v17_0->set_f_1(0x6a);
  v12->set_f_10(s->substr(0, 28));
  v12->set_f_4(0x58bcc728);
  v12->set_f_8(s->substr(0, 27));
  Message2::M4::M31* v18_0 = v12->add_f_16();
  v18_0->set_f_1(s->substr(0, 44));
  v18_0->set_f_3(0x12);
  v18_0->set_f_4(0x4);
  v18_0->set_f_2(0x1391d594fe98e7c2);
  v12->set_f_3(0x53954b5);
  v12->set_f_0(false);
  v12->set_f_1(0x21);
  message->set_f_13(s->substr(0, 11));
  message->set_f_16(0x8);
  message->set_f_15(s->substr(0, 102));
  Message2::M2* v19 = message->mutable_f_49();
  Message2::M2::M42* v20 = v19->mutable_f_7();
  v20->set_f_1(0x71);
  v20->set_f_0(s->substr(0, 92));
  v20->set_f_2(0x5cf093f344061fa1);
  Message2::M2::M36* v21 = v19->mutable_f_5();
  v21->set_f_0(0xe7fe731);
  v21->set_f_1(s->substr(0, 371));
  Message2::M2::M11* v22 = v19->mutable_f_2();
  Message2::M2::M11::M63* v23 = v22->mutable_f_2();
  Message2::M2::M11::M63::E27 array_2[21] = {
      Message2::M2::M11::M63::E27_CONST_5, Message2::M2::M11::M63::E27_CONST_1,
      Message2::M2::M11::M63::E27_CONST_3, Message2::M2::M11::M63::E27_CONST_2,
      Message2::M2::M11::M63::E27_CONST_5, Message2::M2::M11::M63::E27_CONST_3,
      Message2::M2::M11::M63::E27_CONST_2, Message2::M2::M11::M63::E27_CONST_5,
      Message2::M2::M11::M63::E27_CONST_4, Message2::M2::M11::M63::E27_CONST_3,
      Message2::M2::M11::M63::E27_CONST_1, Message2::M2::M11::M63::E27_CONST_4,
      Message2::M2::M11::M63::E27_CONST_3, Message2::M2::M11::M63::E27_CONST_4,
      Message2::M2::M11::M63::E27_CONST_5, Message2::M2::M11::M63::E27_CONST_5,
      Message2::M2::M11::M63::E27_CONST_2, Message2::M2::M11::M63::E27_CONST_2,
      Message2::M2::M11::M63::E27_CONST_1, Message2::M2::M11::M63::E27_CONST_5,
      Message2::M2::M11::M63::E27_CONST_4,
  };
  for (auto v : array_2) {
    v23->add_f_0(v);
  }
  Message2::M2::M12* v24 = v19->mutable_f_3();
  Message2::M2::M12::M82* v25 = v24->mutable_f_2();
  v25->set_f_3(0x5a);
  v25->add_f_2(Message2::M2::M12::M82::E33_CONST_3);
  v25->set_f_1(s->substr(0, 4));
  Message2::M2::M12::M82::M93* v26 = v25->mutable_f_8();
  Message2::M2::M12::M82::M93::M102* v27_0 = v26->add_f_2();
  v27_0->set_f_0(s->substr(0, 20));
  Message2::M8* v28_0 = message->add_f_57();
  Message2::M8::M10* v29 = v28_0->mutable_f_3();
  v29->set_f_0(0x7c);
  v28_0->set_f_0(0xc);
  Message2::M1* v30 = message->mutable_f_47();
  Message2::M1::E3 array_3[11] = {
      Message2::M1::E3_CONST_2, Message2::M1::E3_CONST_5,
      Message2::M1::E3_CONST_3, Message2::M1::E3_CONST_2,
      Message2::M1::E3_CONST_1, Message2::M1::E3_CONST_2,
      Message2::M1::E3_CONST_1, Message2::M1::E3_CONST_2,
      Message2::M1::E3_CONST_1, Message2::M1::E3_CONST_2,
      Message2::M1::E3_CONST_1,
  };
  for (auto v : array_3) {
    v30->add_f_1(v);
  }
  Message2::M1::M13* v31_0 = v30->add_f_3();
  v31_0->set_f_0(s->substr(0, 21));
  Message2::M1::M20* v32 = v30->mutable_f_8();
  Message2::M1::M20::M84* v33 = v32->mutable_f_6();
  v33->set_f_1(s->substr(0, 8));
  Message2::M1::M20::M46* v34_0 = v32->add_f_4();
  (void)v34_0;  // Suppresses clang-tidy.
  v32->set_f_0(0x7ea8d4be4ac98c05);
  Message2::M1::M27* v35 = v30->mutable_f_11();
  v35->set_f_3(0x753ff85);
  Message2::M1::M27::M90* v36_0 = v35->add_f_13();
  (void)v36_0;  // Suppresses clang-tidy.
  v35->set_f_1(false);
  Message2::M1::M27::M56* v37 = v35->mutable_f_10();
  (void)v37;  // Suppresses clang-tidy.
  v35->set_f_2(0x32c1bc46b808abbd);
  v35->set_f_5(0x32ffacfb);
  Message2::M1::M30* v38_0 = v30->add_f_12();
  Message2::M1::M30::M77* v39 = v38_0->mutable_f_3();
  (void)v39;  // Suppresses clang-tidy.
  Message2::M5* v40_0 = message->add_f_53();
  v40_0->set_f_1(0x70a24367ad563b89);
  v40_0->set_f_3(s->substr(0, 7));
  Message2::M5::M17* v41 = v40_0->mutable_f_17();
  (void)v41;  // Suppresses clang-tidy.
  v40_0->set_f_0(s->substr(0, 102));
  v40_0->set_f_2(0xefb30772107914a);
  message->set_f_0(s->substr(0, 3));
  message->set_f_18(s->substr(0, 19));
  message->set_f_30(0x5312e2);
  message->set_f_20(0x3afe0b);
  message->set_f_4(0x75e59721e51da5e1);
  message->set_f_3(false);
  message->set_f_23(0x25);
  message->set_f_25(0x402821d75b323691);
  message->set_f_2(0x53cb8e5c);
  message->set_f_21(false);
  Message2::M3* v42 = message->mutable_f_50();
  v42->set_f_5(0x7d);
  v42->set_f_2(0x4d);
  Message2::M3::M38* v43 = v42->mutable_f_10();
  v43->set_f_4(0x71c64921a4f08716);
  v43->set_f_3(0x4986911e70f428de);
  v43->set_f_23(0x28);
  v43->set_f_5(false);
  v43->set_f_28(0x43);
  v43->set_f_29(0x5407e33f4221fbe4);
  v43->set_f_18(Message2::M3::M38::E19_CONST_2);
  v43->set_f_1(s->substr(0, 93));
  v43->set_f_10(0x24f2266584277efa);
  int32_t array_4[189] = {
      0x141d01c, 0x1b7b2c,  0x53,      0x79,      0x1d1b92,  0x4e,
      0x48,      0xb21b5,   0x6b,      0x5302722, 0x9072454, 0x8c94453,
      0x4714435, 0x1a2d79,  0x3c,      0x259f7,   0x516df09, 0x7956e92,
      0xa1be342, 0x33,      0xd3d3a34, 0xc83c7ac, 0x1f972c,  0x30,
      0x34b729e, 0x1d,      0x99eb,    0x2f,      0x2f43ca9, 0x6c,
      0xab22ff3, 0x77fe369, 0x9d1b8,   0x2b,      0x2a,      0x1a,
      0x93d2879, 0x1b8eb1f, 0x9b8ef82, 0x10ac99,  0x234be,   0x4e,
      0xa1f4f3,  0x78,      0x2e,      0x2d,      0x2c,      0x54,
      0xe050373, 0xeebb7,   0x45,      0xf70fc06, 0x1eee44,  0x3d,
      0x64,      0x146433,  0x114b16,  0x5,       0x1ee60e,  0x94b2078,
      0x69b1829, 0xeda5eca, 0xd8854,   0x1398d57, 0x51c19e,  0x54b3626,
      0x65,      0xa,       0x48,      0x24,      0x7a51271, 0x1ef534,
      0x23,      0xcd8ef5b, 0xd49fa1a, 0x61,      0xd747abc, 0x35,
      0x89c42,   0x4,       0x60,      0x7c,      0x62,      0xea7fac1,
      0x4d514,   0xbfe0bae, 0x7a9f0ea, 0xbb5e0,   0x4e,      0xfc3d6b5,
      0x37,      0x957d943, 0xd,       0x2c,      0xe081ad4, 0x7d3a515,
      0xd9c0c8c, 0x5,       0x175160,  0x3d4cc,   0x2781bac, 0x8f68b,
      0x2c,      0x52,      0xfc138,   0x4c,      0x9,       0x8bbaca8,
      0x4d906a6, 0x65,      0xcf5fe07, 0x1b4caf,  0x272337,  0x4e,
      0x37,      0x40,      0xc067d,   0xe24c9ba, 0x6,       0x43,
      0x96c8d,   0xe,       0xb54a807, 0x1df3a,   0x12,      0xfb5cfc9,
      0x3c,      0xdde1e,   0x591eed9, 0x30,      0x30,      0x22,
      0x9836a8e, 0x1b,      0xd09a7,   0x5d,      0x14,      0x6a,
      0x5ccb30c, 0x4010,    0x4e,      0x2f,      0x1f832e,  0x865e4,
      0x13,      0x4c,      0x6d,      0x5f,      0x1f36dd,  0x71,
      0x8087273, 0x77,      0xef48b,   0x8f8eef,  0xd39c909, 0x2d7ac,
      0xbba0d,   0xd432f15, 0x2b3238b, 0x27,      0xb6ffc7,  0x157f9e7,
      0x4f,      0x10,      0x4c,      0x9e8be8e, 0xee0080b, 0x50,
      0x63b53,   0x4,       0x7212e7a, 0x7,       0x1687b,   0x50,
      0x7bfd953, 0xf0e173c, 0x74,      0x19,      0x5a,      0x194818,
      0x37,      0x1ff889,  0x80800f1, 0x199d5a,  0x66,      0x72df1,
      0xeac04d1, 0x41,      0x79,
  };
  for (auto v : array_4) {
    v43->add_f_16(v);
  }
  v43->set_f_8(s->substr(0, 232));
  v43->set_f_2(0x75381740e9aae);
  v43->set_f_20(0x9fdd9fe);
  int32_t array_5[115] = {
      0xde5163a, 0xce0adef, 0x1d,      0x1647c,   0x1b2fcd,  0xcc6a5ff,
      0x813bb46, 0x1aee8f,  0x6287231, 0x2a,      0xb391a2,  0x63,
      0x1b,      0xdfffffb, 0x37,      0x15aee2,  0xc,       0xcc5b08e,
      0x12,      0x4c,      0x4b,      0x20,      0x6174d,   0x2e,
      0xd0bb3c3, 0xd9af213, 0x1bfeee,  0x1a8627,  0x29d1c82, 0x2a30634,
      0xc448ecd, 0x90429c8, 0x3a,      0x10f5f8,  0x1b375c,  0x5b,
      0x1b1587,  0x63,      0x11,      0x4c9dc,   0x42da670, 0xa1806,
      0x39,      0x65,      0x33,      0xcf14e4d, 0x78,      0x53,
      0x91cd,    0x1cb0f88, 0x9ced42f, 0x3f,      0x1a6d2,   0x45173,
      0x15c7a9,  0x1f7e74,  0x76,      0x56,      0xe354588, 0x2e,
      0x60,      0xdb8b720, 0x16,      0x13,      0x12ee6,   0x360eb6d,
      0x55,      0xc8badb2, 0x65,      0x1ce264,  0xf7733d5, 0xda04f34,
      0x21,      0x34,      0x153a87,  0xf913a,   0x1d,      0xa815c,
      0x8,       0x181ec6,  0x13713f,  0x65,      0x39,      0x69,
      0x18,      0x2e,      0xb844841, 0x23,      0x14e69c,  0x107518,
      0xca8b9,   0x38,      0x6a,      0x102e94d, 0x53520a0, 0x15,
      0x77,      0x6b919,   0x3f42135, 0x51aac09, 0x7,       0x104dc5,
      0x62cbcb4, 0x43775,   0xc,       0x8203963, 0x4d,      0x26be7b9,
      0x134514,  0x9281492, 0x23,      0x79be565, 0x6d,      0x7d,
      0x5f,
  };
  for (auto v : array_5) {
    v43->add_f_24(v);
  }
  v43->set_f_12(0x73);
  v43->set_f_9(s->substr(0, 31));
  v43->set_f_7(0x6e);
  v43->set_f_21(0x436540abff3bf7c3);
  v43->set_f_6(s->substr(0, 25));
  v42->set_f_3(s->substr(0, 61));
  v42->set_f_1(0x253b9996ab23660c);
  Message2::M3::M34* v44_0 = v42->add_f_9();
  v44_0->set_f_0(0x44);
  v42->set_f_0(0xafc5115);
  message->set_f_28(0xb3c4053);
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
}  // namespace fleetbench::rpc::P3::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE2_H_
