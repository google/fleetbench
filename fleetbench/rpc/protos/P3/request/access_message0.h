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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message0.pb.h"

namespace fleetbench::rpc::P3::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->add_f_5(Message0::E2_CONST_3);
  message->set_f_7(0x12);
  Message0::M7* v0 = message->mutable_f_55();
  Message0::M7::M46* v1 = v0->mutable_f_14();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_0(s->substr(0, 6));
  Message0::M7::M10* v2_0 = v0->add_f_2();
  (void)v2_0;  // Suppresses clang-tidy.
  Message0::M7::M42* v3 = v0->mutable_f_13();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_16(0x34c44008);
  message->set_f_11(s->substr(0, 29));
  Message0::M2* v4 = message->mutable_f_47();
  Message0::M2::M56* v5 = v4->mutable_f_8();
  v5->set_f_0(0x9e40b9e414644e84);
  Message0::M2::M18* v6 = v4->mutable_f_2();
  v6->set_f_0(0x37);
  Message0::M2::M43* v7 = v4->mutable_f_4();
  v7->set_f_0(0xf8d7c7d46b977943);
  v7->set_f_1(s->substr(0, 5));
  v7->set_f_3(0x1f);
  Message0::M2::M65* v8 = v4->mutable_f_11();
  v8->set_f_0(0x43);
  message->set_f_25(s->substr(0, 62));
  message->set_f_10(false);
  message->set_f_2(0x49);
  Message0::M5* v9 = message->mutable_f_51();
  Message0::M5::M37* v10 = v9->mutable_f_4();
  v10->set_f_0(0xa8e33ca5c18f1abc);
  Message0::M5::M37::M85* v11_0 = v10->add_f_2();
  v11_0->set_f_1(0x70);
  v11_0->set_f_2(0xff57416e04b7500f);
  Message0::M5::M62* v12 = v9->mutable_f_12();
  v12->set_f_0(s->substr(0, 13));
  Message0::M5::M62::M105* v13 = v12->mutable_f_2();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M5::M38* v14 = v9->mutable_f_8();
  Message0::M5::M38::M75* v15 = v14->mutable_f_7();
  v15->set_f_0(0xe18ac907dfb86442);
  Message0::M5::M71* v16 = v9->mutable_f_13();
  Message0::M5::M71::M80* v17 = v16->mutable_f_5();
  v17->set_f_1(s->substr(0, 128));
  v17->set_f_0(s->substr(0, 28));
  Message0::M5::M12* v18 = v9->mutable_f_2();
  v18->set_f_0(s->substr(0, 1));
  message->set_f_0(0x8e7481314c963222);
  message->set_f_1(0x2f);
  message->set_f_13(s->substr(0, 4));
  message->set_f_6(0x172c0f6);
  Message0::M4* v19 = message->mutable_f_50();
  Message0::M4::M14* v20 = v19->mutable_f_5();
  (void)v20;  // Suppresses clang-tidy.
  Message0::M4::M57* v21 = v19->mutable_f_13();
  v21->set_f_0(0xcfabcef0853ad9d3);
  Message0::M4::M55* v22 = v19->mutable_f_12();
  v22->set_f_0(0x19f937);
  Message0::M4::M70* v23 = v19->mutable_f_18();
  Message0::M4::M70::M74* v24 = v23->mutable_f_6();
  v24->set_f_0(0x58774dc);
  v23->set_f_2(0x3e88a7d);
  Message0::M4::M54* v25 = v19->mutable_f_11();
  (void)v25;  // Suppresses clang-tidy.
  Message0::M4::M11* v26 = v19->mutable_f_4();
  Message0::M4::M11::M98* v27 = v26->mutable_f_2();
  v27->set_f_0(s->substr(0, 2));
  v26->set_f_0(true);
  Message0::M4::M64* v28 = v19->mutable_f_16();
  (void)v28;  // Suppresses clang-tidy.
  Message0::M4::M36* v29 = v19->mutable_f_7();
  Message0::M4::M36::M81* v30_0 = v29->add_f_8();
  (void)v30_0;  // Suppresses clang-tidy.
  v29->set_f_1(s->substr(0, 39));
  v29->set_f_3(s->substr(0, 8));
  Message0::M4::M36::M109* v31 = v29->mutable_f_10();
  v31->set_f_1(s->substr(0, 5));
  v31->set_f_4(s->substr(0, 30));
  v31->set_f_25(0x9);
  v31->set_f_18(s->substr(0, 20));
  v31->set_f_0(0xe95d4f2e240d2abf);
  v31->set_f_11(s->substr(0, 19));
  v31->set_f_21(0x775e299a5e452706);
  v31->set_f_12(0x5a35f3c1409743c8);
  v31->set_f_2(0x68b5035);
  v31->set_f_24(0x2e);
  v31->set_f_3(false);
  v31->set_f_9(s->substr(0, 15));
  v31->set_f_17(s->substr(0, 23));
  v31->set_f_14(0xe35ad664f04ca4aa);
  v31->set_f_7(0xfa8e8a1);
  v31->set_f_28(0x8);
  Message0::M4::M8* v32 = v19->mutable_f_3();
  v32->set_f_0(s->substr(0, 168));
  Message0::M4::M19* v33_0 = v19->add_f_6();
  v33_0->set_f_1(s->substr(0, 23));
  v33_0->set_f_7(s->substr(0, 2));
  v33_0->set_f_15(0x69);
  Message0::M4::M19::M96* v34 = v33_0->mutable_f_34();
  v34->set_f_0(0x4dd3c686ff528673);
  v33_0->set_f_24(0x5ab72a5);
  v33_0->set_f_8(0x377d);
  message->set_f_23(s->substr(0, 6));
  message->set_f_29(0xf18777c6088c66af);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_15(0xe09c8);
  message->set_f_14(false);
  message->set_f_19(0x1846c3d);
  message->set_f_0(0x9436a860ebfb6dc);
  message->set_f_12(0x3110f0415bfc36c2);
  Message0::M1* v0 = message->mutable_f_46();
  Message0::M1::M67* v1 = v0->mutable_f_13();
  v1->set_f_0(s->substr(0, 2));
  Message0::M1::M51* v2 = v0->mutable_f_10();
  v2->set_f_0(s->substr(0, 6));
  Message0::M1::M23* v3_0 = v0->add_f_5();
  v3_0->set_f_0(0x30);
  Message0::M1::M45* v4_0 = v0->add_f_7();
  v4_0->set_f_1(s->substr(0, 17));
  Message0::M1::M34* v5 = v0->mutable_f_6();
  v5->add_f_1(Message0::M1::M34::E6_CONST_5);
  v5->set_f_0(0xa7e40e93dcd6840a);
  Message0::M1::M48* v6 = v0->mutable_f_8();
  v6->set_f_0(0xa19e664);
  Message0::M7* v7 = message->mutable_f_55();
  Message0::M7::M46* v8 = v7->mutable_f_14();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M7::M42* v9 = v7->mutable_f_13();
  v9->set_f_0(0x2570ab4);
  Message0::M7::M26* v10 = v7->mutable_f_6();
  v10->set_f_0(true);
  Message0::M7::M15* v11 = v7->mutable_f_3();
  v11->set_f_0(s->substr(0, 17));
  Message0::M7::M39* v12 = v7->mutable_f_9();
  v12->set_f_0(s->substr(0, 8));
  Message0::M7::M40* v13_0 = v7->add_f_11();
  Message0::M7::M40::M99* v14 = v13_0->mutable_f_3();
  Message0::M7::M40::M99::M112* v15 = v14->mutable_f_2();
  v15->set_f_11(0x23);
  v15->set_f_15(s->substr(0, 103));
  v15->set_f_2(0x66ebbbafd6c2e39e);
  v15->set_f_14(0x94cc75);
  v15->set_f_7(0x10);
  Message0::M7::M40::M99::M112::M122* v16 = v15->mutable_f_28();
  v16->set_f_25(0x7ed4bdd54a131717);
  Message0::M7::M40::M99::M112::M122::E15 array_0[21] = {
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_1,
      Message0::M7::M40::M99::M112::M122::E15_CONST_1,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_4,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_1,
      Message0::M7::M40::M99::M112::M122::E15_CONST_4,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_3,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_4,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_5,
      Message0::M7::M40::M99::M112::M122::E15_CONST_1,
      Message0::M7::M40::M99::M112::M122::E15_CONST_1,
      Message0::M7::M40::M99::M112::M122::E15_CONST_5,
      Message0::M7::M40::M99::M112::M122::E15_CONST_2,
      Message0::M7::M40::M99::M112::M122::E15_CONST_4,
      Message0::M7::M40::M99::M112::M122::E15_CONST_5,
      Message0::M7::M40::M99::M112::M122::E15_CONST_3,
  };
  for (auto v : array_0) {
    v16->add_f_16(v);
  }
  v16->set_f_26(0x50);
  v16->set_f_19(0x69);
  v16->add_f_7(s->substr(0, 3));
  v16->set_f_27(0xc2e7e);
  v16->set_f_15(0x14c01f);
  Message0::M7::M40::M99::M112::M122::M123* v17 = v16->mutable_f_48();
  v17->set_f_0(0x3);
  v16->set_f_29(false);
  v16->set_f_1(0x14f5412);
  v16->set_f_11(0x366bfd4);
  v16->set_f_18(s->substr(0, 3));
  v16->set_f_17(s->substr(0, 1));
  v16->set_f_2(0xcc00268);
  v16->set_f_0(s->substr(0, 5));
  v16->set_f_6(0xc690e22);
  v16->set_f_21(0xb825fea);
  v16->set_f_8(s->substr(0, 8));
  v16->set_f_28(0xe2f9122);
  v16->add_f_3(Message0::M7::M40::M99::M112::M122::E13_CONST_4);
  v16->add_f_3(Message0::M7::M40::M99::M112::M122::E13_CONST_1);
  v16->add_f_3(Message0::M7::M40::M99::M112::M122::E13_CONST_1);
  v16->set_f_24(0x7712b03c);
  v16->set_f_4(0x8a7bffeacaba0426);
  v15->set_f_8(0xe88c32d9531e9160);
  v15->set_f_12(0xc3bb2dd);
  v15->set_f_17(0x9);
  v15->set_f_0(0.406772);
  v14->set_f_0(0xc61604685fd11268);
  message->set_f_18(false);
  message->set_f_9(0xe1c9579c0e04ab35);
  Message0::M6* v18 = message->mutable_f_52();
  v18->set_f_13(0x38);
  v18->set_f_17(s->substr(0, 124));
  v18->set_f_21(0x1e48fc8b);
  v18->set_f_15(0xa100d751b111413c);
  Message0::M6::M24* v19 = v18->mutable_f_49();
  (void)v19;  // Suppresses clang-tidy.
  v18->add_f_10(Message0::M6::E4_CONST_2);
  v18->set_f_23(s->substr(0, 92));
  Message0::M6::M69* v20_0 = v18->add_f_55();
  (void)v20_0;  // Suppresses clang-tidy.
  v18->add_f_2(Message0::M6::E3_CONST_4);
  v18->set_f_16(0x351fcf00f20f4551);
  Message0::M6::M13* v21 = v18->mutable_f_45();
  Message0::M6::M13::M78* v22_0 = v21->add_f_4();
  v22_0->set_f_0(0x51ffd93);
  v18->set_f_22(s->substr(0, 5));
  v18->set_f_6(0xb915dcee67c456f9);
  v18->set_f_14(0x541efd989ec377f);
  v18->set_f_1(0xdb07e3381b241da0);
  v18->set_f_7(0x7e7c84ad55fbd3a2);
  v18->set_f_19(0xfa21a63a0fa1b891);
  v18->set_f_12(0xa);
  v18->set_f_3(0x529290d431fe556f);
  Message0::M6::M9* v23_0 = v18->add_f_43();
  (void)v23_0;  // Suppresses clang-tidy.
  Message0::M6::M22* v24 = v18->mutable_f_47();
  v24->set_f_0(0x50);
  message->set_f_8(0xa410f9c);
  Message0::M5* v25 = message->mutable_f_51();
  Message0::M5::M62* v26 = v25->mutable_f_12();
  v26->set_f_0(s->substr(0, 21));
  Message0::M5::M62::M105* v27 = v26->mutable_f_2();
  v27->set_f_0(0x77a52a8f);
  Message0::M5::M71* v28 = v25->mutable_f_13();
  v28->set_f_0(0xc826974);
  Message0::M5::M71::M80* v29 = v28->mutable_f_5();
  v29->set_f_2(0x7d);
  v25->set_f_0(0xb6b97ae91bb83856);
  Message0::M5::M47* v30 = v25->mutable_f_10();
  v30->set_f_0(0x4dda4927);
  Message0::M5::M37* v31 = v25->mutable_f_4();
  (void)v31;  // Suppresses clang-tidy.
  Message0::M5::M27* v32 = v25->mutable_f_3();
  v32->set_f_0(false);
  message->set_f_7(0x2b);
  message->set_f_29(0xf0638d5f1acd675a);
  message->add_f_5(Message0::E2_CONST_2);
  message->add_f_5(Message0::E2_CONST_3);
  message->add_f_5(Message0::E2_CONST_1);
  message->add_f_5(Message0::E2_CONST_1);
  message->set_f_22(0x40f1e69cb236a43e);
  message->set_f_30(0x500179a2);
  message->set_f_31(0x5);
  message->set_f_28(true);
  message->set_f_6(0x267b90b);
  Message0::M4* v33 = message->mutable_f_50();
  Message0::M4::M59* v34 = v33->mutable_f_14();
  v34->set_f_1(0x78228846e13e8e2b);
  v34->set_f_0(s->substr(0, 29));
  v33->set_f_0(0x33);
  Message0::M4::M36* v35 = v33->mutable_f_7();
  v35->set_f_1(s->substr(0, 18));
  v35->set_f_2(0x3c);
  Message0::M4::M36::M81* v36_0 = v35->add_f_8();
  v36_0->set_f_0(0xe4cdfc1);
  Message0::M4::M54* v37 = v33->mutable_f_11();
  v37->set_f_0(0xa);
  Message0::M4::M64* v38 = v33->mutable_f_16();
  (void)v38;  // Suppresses clang-tidy.
  Message0::M4::M19* v39_0 = v33->add_f_6();
  v39_0->set_f_12(0x29f85e3f);
  Message0::M4::M19::M96* v40 = v39_0->mutable_f_34();
  (void)v40;  // Suppresses clang-tidy.
  v39_0->set_f_14(0x46);
  v39_0->set_f_16(false);
  v39_0->set_f_13(0x7199a3190cdb1a41);
  v39_0->set_f_15(0x26);
  v39_0->set_f_17(true);
  v39_0->set_f_3(0x30a2e);
  v39_0->set_f_23(s->substr(0, 31));
  v39_0->set_f_4(0x203);
  v39_0->set_f_5(0x2b369d92);
  message->set_f_20(0x6b2daeb38f10c482);
  message->set_f_11(s->substr(0, 2));
  message->set_f_27(0x48);
  message->set_f_17(0xe6aff65);
  message->set_f_26(true);
  message->set_f_23(s->substr(0, 3));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_50();
  Message0::M4::M36* v1 = v0->mutable_f_7();
  Message0::M4::M36::M109* v2 = v1->mutable_f_10();
  v2->set_f_14(0x664279a5369e77e8);
  v2->set_f_18(s->substr(0, 13));
  v2->set_f_2(0x29);
  v2->set_f_16(0x196ce4dedcc7743f);
  v2->set_f_19(0x2f87);
  v2->set_f_10(0x3e);
  v2->set_f_3(true);
  v2->set_f_25(0x3c34e1);
  v2->set_f_7(0x7b);
  v2->set_f_0(0x319175ea9a0ac15a);
  v2->set_f_9(s->substr(0, 31));
  v2->set_f_13(0x8f6485678c504f72);
  v2->set_f_11(s->substr(0, 26));
  v2->set_f_24(0x197947);
  v2->set_f_1(s->substr(0, 15));
  v1->set_f_0(0x3682);
  v1->set_f_2(0x3e);
  Message0::M4::M54* v3 = v0->mutable_f_11();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M4::M57* v4 = v0->mutable_f_13();
  v4->set_f_0(0x9214792fbaa911cd);
  Message0::M4::M57::M72* v5 = v4->mutable_f_4();
  v5->set_f_0(s->substr(0, 72));
  Message0::M4::M64* v6 = v0->mutable_f_16();
  (void)v6;  // Suppresses clang-tidy.
  Message0::M4::M44* v7 = v0->mutable_f_8();
  Message0::M4::M44::M86* v8 = v7->mutable_f_5();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_9(0x5638315426dfb1f1);
  message->set_f_1(0xa);
  message->set_f_31(0xf805f);
  message->set_f_2(0xe9ef061);
  message->set_f_25(s->substr(0, 20));
  message->set_f_8(0xfa4cb0d);
  message->set_f_12(0x2ad3753fae58ce88);
  message->set_f_24(s->substr(0, 36));
  message->set_f_4(0xe);
  Message0::M6* v9 = message->mutable_f_52();
  v9->set_f_19(0x5e6c9a00b986df74);
  v9->set_f_20(0x39);
  Message0::M6::E4 array_0[22] = {
      Message0::M6::E4_CONST_3, Message0::M6::E4_CONST_4,
      Message0::M6::E4_CONST_5, Message0::M6::E4_CONST_5,
      Message0::M6::E4_CONST_4, Message0::M6::E4_CONST_1,
      Message0::M6::E4_CONST_2, Message0::M6::E4_CONST_2,
      Message0::M6::E4_CONST_2, Message0::M6::E4_CONST_3,
      Message0::M6::E4_CONST_2, Message0::M6::E4_CONST_2,
      Message0::M6::E4_CONST_5, Message0::M6::E4_CONST_3,
      Message0::M6::E4_CONST_2, Message0::M6::E4_CONST_4,
      Message0::M6::E4_CONST_1, Message0::M6::E4_CONST_3,
      Message0::M6::E4_CONST_2, Message0::M6::E4_CONST_2,
      Message0::M6::E4_CONST_3, Message0::M6::E4_CONST_2,
  };
  for (auto v : array_0) {
    v9->add_f_10(v);
  }
  v9->set_f_23(s->substr(0, 25));
  v9->set_f_7(0xf59e6070be78a941);
  v9->set_f_22(s->substr(0, 24));
  v9->set_f_13(0x2);
  Message0::M6::M35* v10 = v9->mutable_f_52();
  (void)v10;  // Suppresses clang-tidy.
  v9->set_f_18(0x1c7d2a6773456fe9);
  v9->set_f_27(0x50f7cef);
  Message0::M6::M13* v11 = v9->mutable_f_45();
  v11->set_f_0(0x122c);
  Message0::M6::M13::M78* v12_0 = v11->add_f_4();
  (void)v12_0;  // Suppresses clang-tidy.
  v9->set_f_21(0x4413fb7);
  v9->set_f_9(0xf4a923a6aa0d6f03);
  Message0::M6::M29* v13 = v9->mutable_f_51();
  v13->set_f_3(0x31);
  v13->set_f_1(0x13);
  v13->set_f_2(0x1f95ca2);
  Message0::M6::M25* v14_0 = v9->add_f_50();
  v14_0->set_f_0(0x11);
  Message0::M6::M22* v15 = v9->mutable_f_47();
  (void)v15;  // Suppresses clang-tidy.
  v9->set_f_24(false);
  v9->set_f_3(0x227f3c33cbfef6c7);
  v9->set_f_0(false);
  v9->set_f_4(0xd75599f05c4f738b);
  v9->set_f_12(0x1a9323);
  message->set_f_13(s->substr(0, 30));
  message->set_f_18(true);
  message->set_f_16(0x679bbad3);
  message->set_f_11(s->substr(0, 24));
  message->set_f_17(0x57a28ff);
  message->set_f_7(0x2);
  message->set_f_10(true);
  message->add_f_5(Message0::E2_CONST_5);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_18(false);
  message->set_f_8(0x56);
  message->set_f_7(0x16);
  message->set_f_0(0x85dedcddb5e126f5);
  message->set_f_30(0x2111e473);
  message->set_f_2(0x4);
  Message0::M4* v0 = message->mutable_f_50();
  Message0::M4::M8* v1 = v0->mutable_f_3();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M4::M59* v2 = v0->mutable_f_14();
  v2->set_f_1(0x945718e937f0b429);
  v2->set_f_0(s->substr(0, 32));
  Message0::M4::M54* v3 = v0->mutable_f_11();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M4::M36* v4 = v0->mutable_f_7();
  Message0::M4::M36::M109* v5 = v4->mutable_f_10();
  v5->set_f_0(0xffc74893b8b8f8d2);
  v5->set_f_13(0x5a86d9c9dad95598);
  v5->set_f_12(0x236931d389d1ba40);
  v5->set_f_22(0x93516a5);
  v5->set_f_25(0x21);
  v5->set_f_20(0xffb);
  v5->set_f_21(0xf8a4dadcb629bd18);
  v5->set_f_23(s->substr(0, 21));
  v5->set_f_18(s->substr(0, 90));
  v5->set_f_27(0x91d12);
  v5->set_f_19(0x1dd0d7);
  v5->set_f_1(s->substr(0, 197));
  v5->set_f_14(0x1c97877f999f2895);
  v5->set_f_8(0x5367f3bc0864e6a2);
  v5->set_f_29(0x85f);
  v5->set_f_6(0x494bcadd8ebf47e8);
  v5->set_f_7(0xd88e248);
  v5->set_f_15(true);
  v4->set_f_3(s->substr(0, 8));
  Message0::M4::M14* v6 = v0->mutable_f_5();
  v6->set_f_0(0xf457b9b09492a5eb);
  Message0::M4::M14::M87* v7 = v6->mutable_f_4();
  v7->set_f_0(0xf5c3fd62450d5279);
  Message0::M4::M19* v8_0 = v0->add_f_6();
  v8_0->set_f_1(s->substr(0, 116));
  v8_0->set_f_3(0x7d);
  v8_0->set_f_20(0x562404d);
  v8_0->set_f_23(s->substr(0, 7));
  v8_0->set_f_8(0x45);
  v8_0->set_f_13(0xad1d3c9f7f797ed2);
  v8_0->set_f_11(0xe4d2834d6003fefc);
  v8_0->set_f_7(s->substr(0, 19));
  v8_0->set_f_4(0xfa017ad);
  v8_0->set_f_17(false);
  v8_0->set_f_19(0xc31fcc946d4ea7ef);
  Message0::M4::M19::M96* v9 = v8_0->mutable_f_34();
  (void)v9;  // Suppresses clang-tidy.
  v8_0->set_f_5(0x17fa9ccd);
  v8_0->set_f_22(0x433873c5fd9aaab);
  Message0::M4::M11* v10 = v0->mutable_f_4();
  Message0::M4::M11::M98* v11 = v10->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  Message0::M6* v12 = message->mutable_f_52();
  v12->set_f_24(true);
  v12->set_f_23(s->substr(0, 25));
  v12->add_f_2(Message0::M6::E3_CONST_5);
  v12->set_f_14(0x8fb5f5f41b68ac9a);
  v12->set_f_26(0xef2c73f1c369af0c);
  v12->set_f_15(0x5bd7d4adb3188776);
  Message0::M6::M29* v13 = v12->mutable_f_51();
  v13->set_f_0(0xc8d10f93805e91f8);
  v13->set_f_3(0x7e);
  v12->set_f_12(0xe7f25b5);
  v12->set_f_9(0x3537e0b4744bf8f6);
  v12->set_f_25(0x2d71a52e03156dc2);
  v12->set_f_20(0xc5da3);
  Message0::M6::M69* v14_0 = v12->add_f_55();
  (void)v14_0;  // Suppresses clang-tidy.
  v12->set_f_5(s->substr(0, 6));
  v12->set_f_8(0x6d);
  v12->set_f_21(0x36f04bd9);
  Message0::M6::M22* v15 = v12->mutable_f_47();
  v15->set_f_0(0x74e23e3);
  v12->set_f_3(0x1d3c8e6c9adb6e69);
  message->set_f_1(0x65);
  Message0::M1* v16 = message->mutable_f_46();
  Message0::M1::M21* v17 = v16->mutable_f_4();
  v17->set_f_2(0x664a04774de88296);
  Message0::M1::M21::M106* v18 = v17->mutable_f_6();
  Message0::M1::M21::M106::M116* v19 = v18->mutable_f_4();
  Message0::M1::M21::M106::M116::M119* v20 = v19->mutable_f_5();
  v20->set_f_3(0x746edb96d0971cc9);
  v20->set_f_0(0x25187f5c50c64ecc);
  Message0::M1::M23* v21_0 = v16->add_f_5();
  Message0::M1::M23::M94* v22 = v21_0->mutable_f_2();
  (void)v22;  // Suppresses clang-tidy.
  Message0::M1::M67* v23 = v16->mutable_f_13();
  v23->set_f_0(s->substr(0, 88));
  Message0::M1::M16* v24_0 = v16->add_f_2();
  v24_0->set_f_5(0x33);
  v24_0->set_f_2(0x20);
  v24_0->set_f_1(s->substr(0, 13));
  Message0::M1::M16::M95* v25 = v24_0->mutable_f_7();
  (void)v25;  // Suppresses clang-tidy.
  v24_0->set_f_3(0x343693f2de7d304f);
  Message0::M1::M51* v26 = v16->mutable_f_10();
  v26->set_f_0(s->substr(0, 5));
  message->set_f_13(s->substr(0, 26));
  message->set_f_26(false);
  message->set_f_6(0xc5fe487);
  message->set_f_15(0x4d3a2d5);
  Message0::M5* v27 = message->mutable_f_51();
  Message0::M5::M47* v28 = v27->mutable_f_10();
  (void)v28;  // Suppresses clang-tidy.
  Message0::M5::M37* v29 = v27->mutable_f_4();
  (void)v29;  // Suppresses clang-tidy.
  Message0::M7* v30 = message->mutable_f_55();
  Message0::M7::M20* v31 = v30->mutable_f_4();
  v31->set_f_2(0x178bd6fa4c37d9aa);
  Message0::M7::M46* v32 = v30->mutable_f_14();
  v32->set_f_0(s->substr(0, 14));
  Message0::M7::M42* v33 = v30->mutable_f_13();
  (void)v33;  // Suppresses clang-tidy.
  Message0::M7::M28* v34 = v30->mutable_f_7();
  (void)v34;  // Suppresses clang-tidy.
  Message0::M7::M40* v35_0 = v30->add_f_11();
  (void)v35_0;  // Suppresses clang-tidy.
  Message0::M7::M63* v36 = v30->mutable_f_15();
  (void)v36;  // Suppresses clang-tidy.
  Message0::M7::M15* v37 = v30->mutable_f_3();
  v37->set_f_0(s->substr(0, 6));
  message->set_f_28(false);
  message->set_f_21(0x7fe6b31a2470e7be);
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
}  // namespace fleetbench::rpc::P3::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
