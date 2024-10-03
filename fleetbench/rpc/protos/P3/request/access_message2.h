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

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message2.pb.h"

namespace fleetbench::rpc::P3::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_14(0x22908bae);
  message->set_f_22(0x568f90231a314a9);
  message->set_f_1(0x791f51667cd01eef);
  Message2::M12* v0 = message->mutable_f_64();
  v0->set_f_2(true);
  v0->set_f_3(0x262318be67eb499a);
  Message2::M12::M25* v1 = v0->mutable_f_5();
  v1->set_f_2(0x973d2);
  v1->set_f_0(0x29bf827952f1678);
  Message2::M12::M25::M43* v2 = v1->mutable_f_6();
  v2->set_f_1(0x3e853e418665c777);
  v2->set_f_3(0x3f0b2f8807baf86b);
  v2->add_f_4(Message2::M12::M25::M43::E17_CONST_1);
  v2->set_f_0(0x1de25f9145d5e511);
  Message2::M15* v3_0 = message->add_f_68();
  v3_0->set_f_0(s->substr(0, 6));
  v3_0->set_f_1(s->substr(0, 3));
  Message2::M15::M20* v4_0 = v3_0->add_f_6();
  (void)v4_0;  // Suppresses clang-tidy.
  message->set_f_20(0x78);
  message->set_f_3(0x6ee50d534228fa3a);
  message->set_f_19(0.029735);
  message->set_f_10(0x238a4b5fe55c31c1);
  Message2::M8* v5 = message->mutable_f_54();
  v5->set_f_0(true);
  Message2::M8::M26* v6_0 = v5->add_f_3();
  v6_0->set_f_0(0x40);
  Message2::M14* v7_0 = message->add_f_66();
  v7_0->set_f_2(0x1b1749f9c0b0741e);
  v7_0->set_f_4(0x1778);
  v7_0->set_f_0(s->substr(0, 29));
  message->set_f_26(0x714b81f1b1b2322b);
  Message2::M7* v8 = message->mutable_f_53();
  Message2::M7::M34* v9 = v8->mutable_f_3();
  Message2::M7::M34::E15 array_1[21] = {
      Message2::M7::M34::E15_CONST_2, Message2::M7::M34::E15_CONST_4,
      Message2::M7::M34::E15_CONST_4, Message2::M7::M34::E15_CONST_4,
      Message2::M7::M34::E15_CONST_2, Message2::M7::M34::E15_CONST_2,
      Message2::M7::M34::E15_CONST_5, Message2::M7::M34::E15_CONST_2,
      Message2::M7::M34::E15_CONST_2, Message2::M7::M34::E15_CONST_5,
      Message2::M7::M34::E15_CONST_1, Message2::M7::M34::E15_CONST_4,
      Message2::M7::M34::E15_CONST_1, Message2::M7::M34::E15_CONST_2,
      Message2::M7::M34::E15_CONST_2, Message2::M7::M34::E15_CONST_1,
      Message2::M7::M34::E15_CONST_3, Message2::M7::M34::E15_CONST_2,
      Message2::M7::M34::E15_CONST_1, Message2::M7::M34::E15_CONST_3,
      Message2::M7::M34::E15_CONST_1,
  };
  for (auto v : array_1) {
    v9->add_f_19(v);
  }
  v9->set_f_6(0x47288c5a);
  v9->set_f_0(0x7a);
  v9->set_f_13(s->substr(0, 1500));
  Message2::M7::M34::E14 array_2[22] = {
      Message2::M7::M34::E14_CONST_4, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_1, Message2::M7::M34::E14_CONST_3,
      Message2::M7::M34::E14_CONST_5, Message2::M7::M34::E14_CONST_5,
      Message2::M7::M34::E14_CONST_3, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_2, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_4, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_5, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_4, Message2::M7::M34::E14_CONST_1,
      Message2::M7::M34::E14_CONST_4, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_5, Message2::M7::M34::E14_CONST_4,
      Message2::M7::M34::E14_CONST_4, Message2::M7::M34::E14_CONST_2,
  };
  for (auto v : array_2) {
    v9->add_f_2(v);
  }
  v9->set_f_18(s->substr(0, 2));
  v9->set_f_1(0x7213e99);
  v9->set_f_16(0xc449b68);
  v9->set_f_7(s->substr(0, 13));
  v9->set_f_14(0x11a35e);
  Message2::M7::M34::M40* v10 = v9->mutable_f_38();
  Message2::M7::M34::M40::M66* v11 = v10->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  v10->set_f_0(false);
  v9->set_f_12(s->substr(0, 4));
  v9->set_f_4(s->substr(0, 75));
  v9->set_f_22(s->substr(0, 19));
  v9->set_f_15(0x487b193);
  v9->set_f_17(0x497149d4);
  v9->set_f_10(s->substr(0, 15));
  v9->set_f_11(0x2f);
  v8->set_f_0(0x79261d6f66f3c723);
  message->add_f_25(s->substr(0, 1));
  message->set_f_18(0x691cf8164c320715);
  message->set_f_29(s->substr(0, 9));
  message->set_f_17(0x35);
  message->set_f_8(0x1c);
  Message2::E2 array_3[21] = {
      Message2::E2_CONST_1, Message2::E2_CONST_5, Message2::E2_CONST_1,
      Message2::E2_CONST_1, Message2::E2_CONST_5, Message2::E2_CONST_4,
      Message2::E2_CONST_4, Message2::E2_CONST_5, Message2::E2_CONST_4,
      Message2::E2_CONST_3, Message2::E2_CONST_4, Message2::E2_CONST_2,
      Message2::E2_CONST_5, Message2::E2_CONST_5, Message2::E2_CONST_4,
      Message2::E2_CONST_5, Message2::E2_CONST_2, Message2::E2_CONST_1,
      Message2::E2_CONST_1, Message2::E2_CONST_5, Message2::E2_CONST_5,
  };
  for (auto v : array_3) {
    message->add_f_16(v);
  }
  Message2::M3* v12_0 = message->add_f_48();
  v12_0->set_f_0(Message2::M3::E4_CONST_1);
  message->add_f_12(Message2::E1_CONST_5);
  message->set_f_24(s->substr(0, 379));
  Message2::M11* v13 = message->mutable_f_62();
  v13->set_f_0(0x2675b12);
  v13->set_f_2(0x3df35274db62275d);
  v13->set_f_1(true);
  v13->set_f_3(0x920e0ca);
  v13->set_f_4(0x5cd6f);
  Message2::M9* v14 = message->mutable_f_58();
  Message2::M9::M31* v15 = v14->mutable_f_5();
  v15->set_f_2(s->substr(0, 5));
  Message2::M9::M31::M52* v16_0 = v15->add_f_6();
  Message2::M9::M31::M52::M70* v17 = v16_0->mutable_f_4();
  v17->set_f_0(0x7ddf5edcf4947156);
  v16_0->set_f_0(s->substr(0, 5));
  v15->set_f_1(0x2253f6c77a9df46d);
  v15->set_f_0(0x1d);
  v14->set_f_0(0xaddbe8a);
  message->set_f_6(0x674b230d94d7fc47);
  message->set_f_2(true);
  message->set_f_9(s->substr(0, 51));
  message->set_f_5(0x1a9c);
  message->set_f_13(0x44a7ed74);
  message->set_f_15(s->substr(0, 2));
  Message2::M4* v18 = message->mutable_f_49();
  v18->set_f_0(0x90ba1);
  Message2::M4::M28* v19 = v18->mutable_f_2();
  (void)v19;  // Suppresses clang-tidy.
  message->set_f_21(0xa319a39);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M8* v0 = message->mutable_f_54();
  v0->set_f_0(true);
  Message2::M8::M26* v1_0 = v0->add_f_3();
  v1_0->set_f_0(0x23);
  Message2::M12* v2 = message->mutable_f_64();
  v2->set_f_3(0x50d6d78b377e73c8);
  Message2::M12::M25* v3 = v2->mutable_f_5();
  v3->set_f_0(0x39ae936be361a2b2);
  Message2::M12::M25::M43* v4 = v3->mutable_f_6();
  v4->set_f_0(0x25ec419cbf4cc1e3);
  v4->set_f_1(0x490a23ba1f94c24);
  Message2::M12::M25::M43::E17 array_0[17] = {
      Message2::M12::M25::M43::E17_CONST_5,
      Message2::M12::M25::M43::E17_CONST_3,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_5,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_3,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_4,
  };
  for (auto v : array_0) {
    v4->add_f_4(v);
  }
  v4->set_f_3(0x2cdc46a7ff7e2d8e);
  v3->set_f_2(0x19);
  v2->set_f_1(s->substr(0, 13));
  message->set_f_26(0x5a36c920d4c6f70a);
  message->set_f_29(s->substr(0, 1));
  Message2::M5* v5_0 = message->add_f_50();
  v5_0->set_f_0(0x72);
  Message2::M10* v6 = message->mutable_f_59();
  Message2::M10::M27* v7_0 = v6->add_f_4();
  v7_0->set_f_3(false);
  v7_0->set_f_0(0x7ca0da11815b3dab);
  v6->set_f_0(s->substr(0, 509));
  message->set_f_11(0x54);
  message->set_f_28(s->substr(0, 8));
  Message2::M3* v8_0 = message->add_f_48();
  v8_0->set_f_0(Message2::M3::E4_CONST_3);
  message->set_f_23(0x17775e372b52c8d5);
  Message2::M11* v9 = message->mutable_f_62();
  v9->set_f_0(0x35f8a3a);
  v9->set_f_4(0xd002090);
  v9->set_f_1(true);
  v9->set_f_5(0x5236bd180c96eb16);
  v9->set_f_3(0xabc);
  Message2::M11::M33* v10 = v9->mutable_f_16();
  Message2::M11::M33::M53* v11_0 = v10->add_f_5();
  v11_0->set_f_14(0x3577917b31811235);
  v11_0->set_f_23(s->substr(0, 22));
  v11_0->set_f_7(0x7dee634f27b9ce46);
  v11_0->set_f_18(0x592e25bb);
  v11_0->set_f_20(0x4533fec4fd8953e1);
  v11_0->set_f_13(s->substr(0, 20));
  v11_0->set_f_12(0x1d);
  v11_0->set_f_15(s->substr(0, 401));
  v11_0->set_f_21(0x3);
  v11_0->set_f_8(0x5daff8a8897ca9bb);
  v11_0->set_f_16(0x50a02d1);
  v11_0->add_f_19(Message2::M11::M33::M53::E22_CONST_5);
  v11_0->set_f_5(s->substr(0, 2732));
  v11_0->set_f_17(0x453ed29c97836aff);
  v11_0->set_f_22(0x2ce4d517152e1fa2);
  v11_0->set_f_25(true);
  v11_0->set_f_1(Message2::M11::M33::M53::E20_CONST_1);
  v11_0->set_f_6(0x412949dcd8048de4);
  v11_0->set_f_9(0x4d6a348);
  v11_0->set_f_0(0x13c486);
  v11_0->set_f_3(Message2::M11::M33::M53::E21_CONST_2);
  v11_0->set_f_26(s->substr(0, 3));
  v11_0->set_f_4(s->substr(0, 63));
  v11_0->set_f_10(0x3b1b79b200dc6a47);
  v11_0->set_f_27(0x288a5a130bb5274a);
  Message2::M11::M33::M44* v12_0 = v10->add_f_3();
  v12_0->set_f_0(0x29eb148a0e0e51bb);
  v12_0->set_f_1(0x19acce);
  v12_0->set_f_2(0x38e617e);
  v10->set_f_0(s->substr(0, 1));
  Message2::M11::M33::M36* v13 = v10->mutable_f_2();
  v13->set_f_2(Message2::M11::M33::M36::E16_CONST_3);
  v13->set_f_1(0x49b51d90fac1324f);
  v13->set_f_0(true);
  message->set_f_15(s->substr(0, 107));
  message->add_f_16(Message2::E2_CONST_4);
  message->set_f_21(0xb1183c);
  message->set_f_5(0x17);
  Message2::M14* v14_0 = message->add_f_66();
  v14_0->set_f_2(0x642bcd1e67a1066c);
  v14_0->set_f_3(Message2::M14::E6_CONST_5);
  Message2::M14::M21* v15 = v14_0->mutable_f_11();
  v15->set_f_0(0x774feee0);
  Message2::M14::M21::M42* v16 = v15->mutable_f_3();
  Message2::M14::M21::M42::M68* v17 = v16->mutable_f_16();
  v17->set_f_2(0xe6482ec3f114b33);
  v17->set_f_3(0x662a0fbb04637101);
  v17->set_f_1(0x609b9e0f);
  v16->set_f_1(s->substr(0, 192));
  v16->set_f_5(0x7d19653609e6c85);
  v16->set_f_4(s->substr(0, 27));
  v16->set_f_0(0x4fa4e8e5e05503fe);
  v16->set_f_6(0x48e47e8);
  v16->set_f_2(0x56203220efb22b01);
  v14_0->set_f_1(0x76dbeb328a2b2686);
  v14_0->set_f_0(s->substr(0, 22));
  message->set_f_17(0x16);
  message->set_f_10(0x5240c84d31ffafc7);
  message->set_f_22(0x4c06280db8fe6699);
  message->set_f_1(0x34c109f5350c2b7b);
  message->set_f_4(0x21877de910c6a436);
  message->set_f_0(0x1d);
  message->set_f_19(0.462507);
  message->set_f_24(s->substr(0, 2));
  Message2::M13* v18 = message->mutable_f_65();
  Message2::M13::M32* v19_0 = v18->add_f_5();
  v19_0->set_f_1(s->substr(0, 181));
  v19_0->set_f_0(0x5d563fd5d1aa3a2e);
  v18->set_f_0(0x63);
  Message2::M2* v20 = message->mutable_f_45();
  Message2::M2::M23* v21_0 = v20->add_f_4();
  v21_0->set_f_1(0x12);
  Message2::M2::M29* v22 = v20->mutable_f_6();
  v22->set_f_3(0x180583cfc7cfa390);
  v22->set_f_2(true);
  v22->set_f_1(0x7a);
  v22->set_f_0(0x21fa5ed4b280029e);
  v22->set_f_4(0xdbc3f6fe4ae23a8);
  Message2::M2::M18* v23 = v20->mutable_f_3();
  Message2::M2::M18::M41* v24_0 = v23->add_f_6();
  v24_0->set_f_0(0x2526);
  Message2::M2::M18::E9 array_1[21] = {
      Message2::M2::M18::E9_CONST_2, Message2::M2::M18::E9_CONST_4,
      Message2::M2::M18::E9_CONST_1, Message2::M2::M18::E9_CONST_1,
      Message2::M2::M18::E9_CONST_2, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_1, Message2::M2::M18::E9_CONST_5,
      Message2::M2::M18::E9_CONST_5, Message2::M2::M18::E9_CONST_5,
      Message2::M2::M18::E9_CONST_4, Message2::M2::M18::E9_CONST_1,
      Message2::M2::M18::E9_CONST_3, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_2, Message2::M2::M18::E9_CONST_4,
      Message2::M2::M18::E9_CONST_1, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_4, Message2::M2::M18::E9_CONST_4,
      Message2::M2::M18::E9_CONST_4,
  };
  for (auto v : array_1) {
    v23->add_f_0(v);
  }
  v23->set_f_1(Message2::M2::M18::E10_CONST_3);
  message->set_f_14(0x18a2df00);
  message->set_f_13(0x2065a1fc);
  message->set_f_9(s->substr(0, 65));
  message->set_f_7(0x2204);
  message->set_f_27(s->substr(0, 34));
  message->set_f_18(0x7786f30c0f6ccbfe);
  message->set_f_3(0x146ea1658ff62a8b);
  Message2::M6* v25 = message->mutable_f_51();
  v25->set_f_0(s->substr(0, 15));
  Message2::M9* v26 = message->mutable_f_58();
  Message2::M9::M31* v27 = v26->mutable_f_5();
  v27->set_f_1(0x114677442303b93f);
  v27->set_f_0(0x7);
  Message2::M9::M31::M52* v28_0 = v27->add_f_6();
  Message2::M9::M31::M52::M55* v29 = v28_0->mutable_f_2();
  v29->set_f_0(0x27);
  Message2::M9::M31::M52::M70* v30 = v28_0->mutable_f_4();
  v30->set_f_0(0x19f27062310bcbe4);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_11(0x57);
  Message2::E1 array_0[19] = {
      Message2::E1_CONST_2, Message2::E1_CONST_1, Message2::E1_CONST_3,
      Message2::E1_CONST_1, Message2::E1_CONST_1, Message2::E1_CONST_5,
      Message2::E1_CONST_1, Message2::E1_CONST_2, Message2::E1_CONST_2,
      Message2::E1_CONST_1, Message2::E1_CONST_5, Message2::E1_CONST_3,
      Message2::E1_CONST_1, Message2::E1_CONST_2, Message2::E1_CONST_2,
      Message2::E1_CONST_2, Message2::E1_CONST_2, Message2::E1_CONST_1,
      Message2::E1_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_12(v);
  }
  message->set_f_20(0x745d7ae);
  message->set_f_8(0x16);
  Message2::M7* v0 = message->mutable_f_53();
  v0->set_f_0(0x2cc649225d6bb4ca);
  Message2::M12* v1 = message->mutable_f_64();
  v1->set_f_3(0x53533d850076de69);
  Message2::M12::M25* v2 = v1->mutable_f_5();
  v2->set_f_1(Message2::M12::M25::E12_CONST_1);
  v2->set_f_0(0xedba4e6c26f4736);
  Message2::M12::M25::M43* v3 = v2->mutable_f_6();
  v3->set_f_2(0x1443);
  v3->set_f_3(0x419691d03333c837);
  v3->set_f_1(0x664564ddc13757de);
  v1->set_f_1(s->substr(0, 4090));
  Message2::M12::M30* v4 = v1->mutable_f_8();
  v4->set_f_0(0x4d);
  message->set_f_17(0x222d);
  message->set_f_29(s->substr(0, 8));
  message->set_f_1(0x505957fd2d2ed8f1);
  message->set_f_5(0x30);
  message->set_f_27(s->substr(0, 294));
  message->set_f_22(0x69d3ee22b447bff1);
  message->set_f_24(s->substr(0, 62));
  message->set_f_19(0.376325);
  message->set_f_15(s->substr(0, 27));
  Message2::M9* v5 = message->mutable_f_58();
  Message2::M9::M24* v6 = v5->mutable_f_4();
  Message2::M9::M24::M48* v7 = v6->mutable_f_10();
  Message2::M9::M24::M48::M71* v8 = v7->mutable_f_6();
  v8->set_f_0(0x5c);
  Message2::M9::M24::M48::M59* v9 = v7->mutable_f_4();
  v9->set_f_0(0x39844a51e34ae756);
  Message2::M9::M24::M48::M59::M76* v10_0 = v9->add_f_5();
  v10_0->set_f_29(0x1c2498e390a60128);
  v10_0->set_f_30(s->substr(0, 450));
  v10_0->set_f_17(s->substr(0, 124));
  v10_0->set_f_18(0x13);
  v10_0->set_f_9(0x271476eea6665f0b);
  v10_0->set_f_14(s->substr(0, 6));
  v10_0->set_f_6(s->substr(0, 5));
  v10_0->set_f_27(0x2f);
  v10_0->set_f_0(0x30);
  v10_0->add_f_11(s->substr(0, 2));
  v10_0->set_f_19(0xe);
  v10_0->set_f_23(Message2::M9::M24::M48::M59::M76::E28_CONST_1);
  v10_0->set_f_10(0x4f);
  v10_0->set_f_12(0x966f3);
  v10_0->set_f_16(s->substr(0, 103));
  v10_0->set_f_15(s->substr(0, 11));
  v10_0->set_f_3(0x47);
  v10_0->set_f_26(s->substr(0, 256));
  v10_0->set_f_24(0x1512f9bf30f75383);
  v10_0->set_f_22(0x318ab46b1c121755);
  v10_0->set_f_5(0xd7c028e);
  v10_0->set_f_25(s->substr(0, 18));
  v10_0->set_f_8(s->substr(0, 3));
  v10_0->set_f_28(s->substr(0, 137));
  Message2::M9::M24::M37* v11_0 = v6->add_f_6();
  Message2::M9::M24::M37::M69* v12 = v11_0->mutable_f_2();
  v12->set_f_0(s->substr(0, 5));
  v6->set_f_1(0x1d);
  v6->set_f_2(s->substr(0, 4));
  Message2::M9::M31* v13 = v5->mutable_f_5();
  v13->set_f_0(0x137f07);
  v13->set_f_1(0x2806f3c15328ce24);
  Message2::M3* v14_0 = message->add_f_48();
  (void)v14_0;  // Suppresses clang-tidy.
  message->set_f_10(0x18f1cc26c07c48c3);
  Message2::M6* v15 = message->mutable_f_51();
  v15->set_f_0(s->substr(0, 7));
  Message2::M5* v16_0 = message->add_f_50();
  Message2::M5::M22* v17 = v16_0->mutable_f_2();
  Message2::M5::M22::M47* v18 = v17->mutable_f_4();
  v18->set_f_4(0x1ece7a);
  Message2::M5::M22::M47::M67* v19_0 = v18->add_f_8();
  v19_0->set_f_0(0x4452ea4);
  v18->set_f_0(0x2572697);
  v18->set_f_1(s->substr(0, 12));
  v18->set_f_3(0x5a7a0d7049dffab3);
  v17->set_f_0(0x1b);
  message->set_f_23(0x17ce6f379b1819e2);
  message->set_f_0(0x7a);
  message->set_f_4(0x1116a16df5632a9a);
  Message2::M1* v20 = message->mutable_f_43();
  v20->set_f_0(0x73b2f8a3);
  Message2::M15* v21_0 = message->add_f_68();
  v21_0->set_f_0(s->substr(0, 3));
  Message2::M15::M20* v22_0 = v21_0->add_f_6();
  v22_0->set_f_0(0x1c894e42);
  v21_0->set_f_1(s->substr(0, 305));
  message->set_f_18(0x8b70a6ffe1d0458);
  message->set_f_9(s->substr(0, 64));
  message->set_f_26(0x444e59a4b1555b6d);
  message->set_f_3(0x73a2d994374a10ae);
  Message2::M16* v23 = message->mutable_f_69();
  v23->add_f_4(Message2::M16::E8_CONST_3);
  v23->set_f_2(0x4f488481);
  v23->set_f_1(s->substr(0, 32));
  v23->set_f_3(0x6e6f88e5b3300fe1);
  message->set_f_21(0x6f);
  Message2::M2* v24 = message->mutable_f_45();
  Message2::M2::M18* v25 = v24->mutable_f_3();
  v25->set_f_1(Message2::M2::M18::E10_CONST_3);
  v25->add_f_0(Message2::M2::M18::E9_CONST_2);
  v24->set_f_0(Message2::M2::E3_CONST_5);
  Message2::M2::M29* v26 = v24->mutable_f_6();
  v26->set_f_0(0x32a4c25c9a4c7ec9);
  v26->set_f_3(0x45bd8943598a14c6);
  v26->set_f_4(0x60e48fdcbccc5718);
  Message2::M14* v27_0 = message->add_f_66();
  v27_0->set_f_1(0x7c62aba1719a9029);
  v27_0->set_f_4(0x2ed3);
  Message2::M14::M21* v28 = v27_0->mutable_f_11();
  v28->set_f_0(0x7a7b3f78);
  Message2::M14::M21::M45* v29_0 = v28->add_f_5();
  v29_0->set_f_0(0x75c59f63d71b20c1);
  Message2::M14::M21::M42* v30 = v28->mutable_f_3();
  v30->set_f_6(0xc03b1d);
  v30->set_f_0(0x2911d05773c7c976);
  v30->set_f_2(0x309b5e0ec27495d7);
  Message2::M14::M21::M42::M56* v31 = v30->mutable_f_13();
  v31->set_f_1(s->substr(0, 19));
  v31->set_f_0(0xb6eae);
  v31->set_f_2(0x3a);
  v30->set_f_3(0x937c8a6);
  v30->set_f_5(0x7e09f1c99c6a572f);
  v30->set_f_4(s->substr(0, 31));
  v30->set_f_1(s->substr(0, 301));
  v27_0->set_f_0(s->substr(0, 48));
  v27_0->set_f_2(0xda493f1bec0e473);
  message->set_f_13(0x48b96239);
  message->set_f_2(true);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_26(0x76980b3f0a1ea1fd);
  Message2::M2* v0 = message->mutable_f_45();
  Message2::M2::M23* v1_0 = v0->add_f_4();
  v1_0->set_f_1(0x2a);
  Message2::M2::M23::M46* v2 = v1_0->mutable_f_8();
  v2->set_f_1(0x71);
  v2->set_f_0(0x7adbf3);
  Message2::M2::M23::M35* v3_0 = v1_0->add_f_7();
  (void)v3_0;  // Suppresses clang-tidy.
  Message2::M2::M18* v4 = v0->mutable_f_3();
  Message2::M2::M18::M41* v5_0 = v4->add_f_6();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M2::M18::E9 array_0[18] = {
      Message2::M2::M18::E9_CONST_2, Message2::M2::M18::E9_CONST_1,
      Message2::M2::M18::E9_CONST_5, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_4, Message2::M2::M18::E9_CONST_3,
      Message2::M2::M18::E9_CONST_3, Message2::M2::M18::E9_CONST_4,
      Message2::M2::M18::E9_CONST_1, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_1, Message2::M2::M18::E9_CONST_2,
      Message2::M2::M18::E9_CONST_4, Message2::M2::M18::E9_CONST_5,
      Message2::M2::M18::E9_CONST_5, Message2::M2::M18::E9_CONST_1,
      Message2::M2::M18::E9_CONST_4, Message2::M2::M18::E9_CONST_1,
  };
  for (auto v : array_0) {
    v4->add_f_0(v);
  }
  Message2::M2::M29* v6 = v0->mutable_f_6();
  v6->set_f_3(0x7272a50d5ea042a4);
  v6->set_f_4(0x6c257fa10eb74606);
  v6->set_f_0(0x1e5734133fd6d02c);
  v6->set_f_2(false);
  message->set_f_11(0x6a);
  Message2::M3* v7_0 = message->add_f_48();
  v7_0->set_f_0(Message2::M3::E4_CONST_1);
  message->set_f_2(true);
  Message2::M11* v8 = message->mutable_f_62();
  v8->set_f_2(0x1a5413a61139d8d2);
  v8->set_f_4(0x7402e79);
  v8->set_f_1(false);
  v8->set_f_0(0x5a);
  Message2::M7* v9 = message->mutable_f_53();
  (void)v9;  // Suppresses clang-tidy.
  message->set_f_9(s->substr(0, 20));
  message->set_f_22(0x30497b8bfc728901);
  Message2::M12* v10 = message->mutable_f_64();
  v10->set_f_3(0x6233ec092a81e001);
  v10->set_f_1(s->substr(0, 18));
  Message2::M12::M25* v11 = v10->mutable_f_5();
  v11->set_f_1(Message2::M12::M25::E12_CONST_5);
  Message2::M12::M25::M43* v12 = v11->mutable_f_6();
  v12->set_f_3(0x21248add9be1ab19);
  v12->set_f_1(0x7f56d7467210c0c7);
  Message2::M12::M25::M43::E17 array_1[18] = {
      Message2::M12::M25::M43::E17_CONST_5,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_5,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_3,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_1,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_3,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_2,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_4,
      Message2::M12::M25::M43::E17_CONST_4,
  };
  for (auto v : array_1) {
    v12->add_f_4(v);
  }
  v11->set_f_2(0x6);
  v11->set_f_0(0x44cdd0c61bfd012e);
  v10->set_f_0(Message2::M12::E5_CONST_2);
  v10->set_f_2(false);
  message->set_f_14(0x79fe3ad4);
  message->set_f_28(s->substr(0, 7));
  message->set_f_4(0x63cba25ba7610ad6);
  message->set_f_27(s->substr(0, 413));
  Message2::M14* v13_0 = message->add_f_66();
  v13_0->set_f_1(0x7e9da419fb0bccf7);
  Message2::M14::M21* v14 = v13_0->mutable_f_11();
  Message2::M14::M21::M42* v15 = v14->mutable_f_3();
  v15->set_f_3(0x75af911);
  v15->set_f_0(0x20c2f7da92ec334c);
  Message2::M14::M21::M42::M68* v16 = v15->mutable_f_16();
  v16->set_f_1(0x26b99774);
  v16->set_f_2(0x14592eea4f3c5f2c);
  Message2::M14::M21::M42::M56* v17 = v15->mutable_f_13();
  (void)v17;  // Suppresses clang-tidy.
  v15->set_f_6(0xaf6223b);
  v15->set_f_4(s->substr(0, 31));
  v15->set_f_1(s->substr(0, 16));
  Message2::M14::M21::M45* v18_0 = v14->add_f_5();
  Message2::M14::M21::M45::M62* v19_0 = v18_0->add_f_4();
  v19_0->set_f_0(0x65);
  v18_0->set_f_0(0x5ace0c6e15d65651);
  v18_0->set_f_1(0xd7898db);
  v13_0->set_f_3(Message2::M14::E6_CONST_3);
  v13_0->set_f_4(0xf8e);
  message->set_f_5(0x2c1e);
  message->set_f_10(0x1d6244beb7349bc6);
  message->set_f_13(0x31ffdec5);
  message->set_f_15(s->substr(0, 60));
  Message2::M15* v20_0 = message->add_f_68();
  Message2::M15::M19* v21 = v20_0->mutable_f_5();
  Message2::M15::M19::M50* v22 = v21->mutable_f_3();
  v22->set_f_2(0x6e07de002fe5c818);
  v22->add_f_0(Message2::M15::M19::M50::E19_CONST_1);
  v22->set_f_4(s->substr(0, 35));
  v22->set_f_1(s->substr(0, 4));
  v22->set_f_3(0x6c37c33f18ea9e79);
  v20_0->set_f_0(s->substr(0, 24));
  message->set_f_0(0x75);
  message->set_f_29(s->substr(0, 66));
  Message2::M8* v23 = message->mutable_f_54();
  (void)v23;  // Suppresses clang-tidy.
  message->set_f_19(0.323225);
  message->add_f_16(Message2::E2_CONST_4);
  message->add_f_12(Message2::E1_CONST_1);
  message->set_f_8(0xd60f87d);
  message->set_f_7(0xdce4ff1);
  message->set_f_1(0x4925c8f81270cb6d);
  Message2::M10* v24 = message->mutable_f_59();
  Message2::M10::M27* v25_0 = v24->add_f_4();
  v25_0->set_f_1(0xef7d014);
  v25_0->set_f_2(0x4f2b2351);
  message->set_f_6(0x42b049cdbb5e5955);
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
