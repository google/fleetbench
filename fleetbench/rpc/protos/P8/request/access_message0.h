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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message0.pb.h"

namespace fleetbench::rpc::P8::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_28(0x66ec9646f5a289f);
  Message0::M6* v0 = message->mutable_f_51();
  Message0::M6::M46* v1_0 = v0->add_f_15();
  Message0::M6::M46::M56* v2 = v1_0->mutable_f_2();
  v2->set_f_5(0x5e815425);
  v2->set_f_0(s->substr(0, 8));
  Message0::M6::M46::M56::M62* v3 = v2->mutable_f_11();
  v3->add_f_0(Message0::M6::M46::M56::M62::E16_CONST_3);
  v2->set_f_4(s->substr(0, 52));
  v2->set_f_1(0x72);
  v2->set_f_3(0x5cc8693f);
  v1_0->set_f_0(s->substr(0, 19));
  Message0::M6::E2 array_1[13] = {
      Message0::M6::E2_CONST_1, Message0::M6::E2_CONST_4,
      Message0::M6::E2_CONST_4, Message0::M6::E2_CONST_2,
      Message0::M6::E2_CONST_1, Message0::M6::E2_CONST_4,
      Message0::M6::E2_CONST_3, Message0::M6::E2_CONST_4,
      Message0::M6::E2_CONST_3, Message0::M6::E2_CONST_1,
      Message0::M6::E2_CONST_5, Message0::M6::E2_CONST_5,
      Message0::M6::E2_CONST_2,
  };
  for (auto v : array_1) {
    v0->add_f_3(v);
  }
  v0->set_f_0(0x638e3c29123e3ff3);
  Message0::M6::M36* v4 = v0->mutable_f_13();
  v4->set_f_1(0x38e4a425cf343456);
  v4->set_f_2(0x6a92968a85b02e4e);
  v4->set_f_0(0x292c810d5acd11d7);
  Message0::M6::M28* v5 = v0->mutable_f_12();
  Message0::M6::M28::M52* v6 = v5->mutable_f_2();
  Message0::M6::M28::M52::M60* v7 = v6->mutable_f_2();
  v7->set_f_1(s->substr(0, 26));
  Message0::M6::M28::M52::M60::E14 array_2[14] = {
      Message0::M6::M28::M52::M60::E14_CONST_1,
      Message0::M6::M28::M52::M60::E14_CONST_1,
      Message0::M6::M28::M52::M60::E14_CONST_4,
      Message0::M6::M28::M52::M60::E14_CONST_2,
      Message0::M6::M28::M52::M60::E14_CONST_1,
      Message0::M6::M28::M52::M60::E14_CONST_3,
      Message0::M6::M28::M52::M60::E14_CONST_2,
      Message0::M6::M28::M52::M60::E14_CONST_4,
      Message0::M6::M28::M52::M60::E14_CONST_5,
      Message0::M6::M28::M52::M60::E14_CONST_3,
      Message0::M6::M28::M52::M60::E14_CONST_5,
      Message0::M6::M28::M52::M60::E14_CONST_4,
      Message0::M6::M28::M52::M60::E14_CONST_5,
      Message0::M6::M28::M52::M60::E14_CONST_2,
  };
  for (auto v : array_2) {
    v7->add_f_0(v);
  }
  v5->add_f_0(Message0::M6::M28::E8_CONST_4);
  Message0::M6::M19* v8 = v0->mutable_f_11();
  v8->set_f_3(s->substr(0, 1));
  v8->set_f_4(0xfa501812608eef2);
  Message0::M6::M19::M49* v9 = v8->mutable_f_10();
  v9->set_f_0(0x24ab45cb);
  Message0::M6::M19::M49::M65* v10 = v9->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message0::M6::M19::M49::M64* v11_0 = v9->add_f_3();
  v11_0->set_f_1(s->substr(0, 21));
  v11_0->set_f_0(0x67537d2642f69086);
  Message0::M6::M19::M49::M64::M70* v12 = v11_0->mutable_f_8();
  v12->set_f_1(false);
  v12->set_f_5(false);
  v12->set_f_3(Message0::M6::M19::M49::M64::M70::E18_CONST_3);
  v12->set_f_4(0x3cb435e783e77210);
  v11_0->set_f_2(s->substr(0, 2689));
  Message0::M6::M19::E6 array_3[21] = {
      Message0::M6::M19::E6_CONST_1, Message0::M6::M19::E6_CONST_4,
      Message0::M6::M19::E6_CONST_3, Message0::M6::M19::E6_CONST_1,
      Message0::M6::M19::E6_CONST_4, Message0::M6::M19::E6_CONST_5,
      Message0::M6::M19::E6_CONST_5, Message0::M6::M19::E6_CONST_4,
      Message0::M6::M19::E6_CONST_4, Message0::M6::M19::E6_CONST_5,
      Message0::M6::M19::E6_CONST_2, Message0::M6::M19::E6_CONST_4,
      Message0::M6::M19::E6_CONST_2, Message0::M6::M19::E6_CONST_5,
      Message0::M6::M19::E6_CONST_2, Message0::M6::M19::E6_CONST_3,
      Message0::M6::M19::E6_CONST_1, Message0::M6::M19::E6_CONST_1,
      Message0::M6::M19::E6_CONST_5, Message0::M6::M19::E6_CONST_4,
      Message0::M6::M19::E6_CONST_3,
  };
  for (auto v : array_3) {
    v8->add_f_0(v);
  }
  v8->set_f_1(0x1789ed96);
  v8->set_f_2(Message0::M6::M19::E7_CONST_1);
  v8->set_f_6(0x7e);
  v0->set_f_1(s->substr(0, 5));
  message->set_f_29(0x44245a932ab19e83);
  Message0::M8* v13 = message->mutable_f_55();
  Message0::M8::M47* v14_0 = v13->add_f_6();
  v14_0->set_f_2(true);
  v14_0->set_f_0(s->substr(0, 7));
  Message0::M8::M47::M50* v15_0 = v14_0->add_f_4();
  v15_0->set_f_0(0x72f1d171d3e0e582);
  Message0::M8::M47::M50::M59* v16 = v15_0->mutable_f_3();
  v16->set_f_2(0.334095);
  v16->set_f_0(s->substr(0, 24));
  v16->set_f_1(s->substr(0, 3));
  v13->set_f_0(0x3c93cb7265f6d547);
  Message0::M8::M27* v17_0 = v13->add_f_2();
  v17_0->set_f_0(0x7f648a2f);
  message->add_f_13(s->substr(0, 4));
  Message0::M9* v18_0 = message->add_f_56();
  v18_0->set_f_0(s->substr(0, 8));
  Message0::M14* v19 = message->mutable_f_66();
  v19->set_f_2(s->substr(0, 3));
  Message0::M14::M21* v20 = v19->mutable_f_8();
  v20->set_f_1(0x3374ea04f36bd86b);
  v20->set_f_2(0x374c7c637bab57af);
  v19->add_f_0(Message0::M14::E4_CONST_2);
  Message0::M14::M34* v21 = v19->mutable_f_9();
  v21->set_f_1(0xaea49);
  v21->set_f_2(0xddf0);
  v21->set_f_10(0x3b8f4f76f3dbd64c);
  v21->set_f_6(s->substr(0, 14));
  v21->set_f_3(Message0::M14::M34::E9_CONST_2);
  v21->set_f_7(0x5c7f8fea7d7bc492);
  v21->set_f_11(0x6504b9d0eda8ea1b);
  v21->set_f_8(s->substr(0, 19));
  v21->set_f_4(s->substr(0, 1));
  Message0::M14::M34::E10 array_4[11] = {
      Message0::M14::M34::E10_CONST_1, Message0::M14::M34::E10_CONST_5,
      Message0::M14::M34::E10_CONST_2, Message0::M14::M34::E10_CONST_4,
      Message0::M14::M34::E10_CONST_1, Message0::M14::M34::E10_CONST_2,
      Message0::M14::M34::E10_CONST_5, Message0::M14::M34::E10_CONST_2,
      Message0::M14::M34::E10_CONST_4, Message0::M14::M34::E10_CONST_2,
      Message0::M14::M34::E10_CONST_3,
  };
  for (auto v : array_4) {
    v21->add_f_5(v);
  }
  v21->set_f_9(false);
  v19->set_f_3(0x65ae7f5d7fe66daf);
  message->set_f_16(0x69f1b30927b5753c);
  message->set_f_25(s->substr(0, 492));
  Message0::M11* v22 = message->mutable_f_61();
  v22->set_f_2(0xede22e2);
  Message0::M11::M33* v23 = v22->mutable_f_7();
  Message0::M11::M33::M54* v24_0 = v23->add_f_3();
  v24_0->set_f_1(0x2a02950);
  v24_0->set_f_0(0x3d5128f578d211a1);
  v23->set_f_0(0x568c294808e6df0a);
  v22->set_f_0(0x6fa8fec8);
  v22->set_f_1(0x37ee);
  v22->set_f_4(0x1e0540c3eacdacda);
  v22->set_f_3(0x57030);
  Message0::M11::M24* v25 = v22->mutable_f_6();
  v25->set_f_0(0x66a4f1b2e0eb4569);
  v25->set_f_1(0x8657f4);
  v25->set_f_2(0x1a03763e8b28e5e1);
  Message0::M1* v26_0 = message->add_f_45();
  v26_0->set_f_0(0.761616);
  Message0::M1::M25* v27_0 = v26_0->add_f_3();
  v27_0->set_f_1(0x26cc1a1dbcca1907);
  Message0::M1::M40* v28_0 = v26_0->add_f_4();
  v28_0->set_f_0(true);
  Message0::M1::M18* v29 = v26_0->mutable_f_2();
  v29->set_f_0(0x6daf665a62e20cb1);
  v29->set_f_2(s->substr(0, 32));
  v29->set_f_6(s->substr(0, 5));
  v29->set_f_1(0x7319baacb2244849);
  v29->set_f_3(0x57598570b76b26f2);
  message->set_f_11(0x5267c93f998bfff6);
  message->set_f_18(s->substr(0, 24));
  message->set_f_10(0xfa66fdb9256339d);
  message->set_f_17(0xfbf30a9);
  message->set_f_7(0x4f838a1b1b01e6f1);
  message->set_f_8(0xde28a);
  Message0::M4* v30 = message->mutable_f_49();
  (void)v30;  // Suppresses clang-tidy.
  Message0::M13* v31 = message->mutable_f_65();
  Message0::M13::M20* v32 = v31->mutable_f_6();
  Message0::M13::M20::M55* v33_0 = v32->add_f_4();
  v33_0->set_f_0(0.317092);
  v33_0->add_f_1(Message0::M13::M20::M55::E12_CONST_5);
  v32->set_f_0(0x70);
  Message0::M13::M26* v34 = v31->mutable_f_8();
  v34->set_f_0(0x32e808fdc6515e64);
  v31->set_f_1(s->substr(0, 44));
  v31->set_f_0(Message0::M13::E3_CONST_4);
  v31->set_f_2(0x27);
  Message0::M2* v35 = message->mutable_f_46();
  Message0::M2::M39* v36 = v35->mutable_f_2();
  v36->set_f_0(0x1e9f58fbebdf11d0);
  Message0::M2::M44* v37 = v35->mutable_f_4();
  Message0::M2::M44::M58* v38 = v37->mutable_f_9();
  v38->set_f_29(0x28);
  v38->set_f_19(0xca1cc9c);
  v38->set_f_27(0x2773ac5);
  v38->set_f_13(0x6cc26a1);
  v38->set_f_30(0x2755b361);
  v38->set_f_4(0x6b);
  v38->set_f_11(s->substr(0, 7));
  v38->set_f_9(0x24071f62502c5fb7);
  v38->set_f_17(Message0::M2::M44::M58::E13_CONST_5);
  v38->set_f_10(0x74fbb2b7);
  v38->set_f_1(0x4d);
  v38->set_f_6(0x9eee04d);
  v38->set_f_25(0xfa09e25);
  v38->set_f_5(0xec70747);
  v38->set_f_14(0x784ab8190339aba5);
  v38->set_f_12(0x7e);
  v38->set_f_20(s->substr(0, 72));
  v38->set_f_8(0x2d2f3c72e6c1d60d);
  v38->set_f_26(0x6ba15d72c02722e9);
  v38->set_f_21(0x23a3018a0bbfb2d2);
  v38->set_f_7(0xd38ceed);
  v38->set_f_16(s->substr(0, 3));
  v38->set_f_28(s->substr(0, 118));
  v38->set_f_18(true);
  v38->set_f_22(0xd2743a336161aab);
  v38->set_f_15(0x29ddff8f3e8b33dd);
  v37->set_f_1(0x38);
  v37->set_f_3(0.181494);
  v37->set_f_2(s->substr(0, 6));
  v37->set_f_0(s->substr(0, 22));
  message->set_f_14(s->substr(0, 20));
  message->set_f_2(0x67d3fe377725afa4);
  message->set_f_12(0x579);
  message->set_f_19(0x60dba);
  message->set_f_21(0x7453ad8);
  message->set_f_24(0x4);
  message->set_f_3(0x145586);
  message->set_f_15(0x2c);
  message->set_f_22(s->substr(0, 46));
  Message0::M7* v39 = message->mutable_f_52();
  Message0::M7::M30* v40 = v39->mutable_f_6();
  v40->set_f_0(0x5d7aa6035ba0142d);
  v40->set_f_1(s->substr(0, 4));
  Message0::M7::M48* v41 = v39->mutable_f_10();
  v41->set_f_1(s->substr(0, 12));
  v41->set_f_2(0x7d6b806d);
  v41->set_f_0(false);
  v39->set_f_1(0x16647c1d1f0e8a5e);
  Message0::M7::M41* v42 = v39->mutable_f_8();
  Message0::M7::M41::M53* v43 = v42->mutable_f_4();
  v43->set_f_2(0x8780);
  v43->set_f_4(0xf18e450);
  v43->set_f_0(0x74b3537860a36bdc);
  Message0::M7::M38* v44 = v39->mutable_f_7();
  v44->set_f_0(s->substr(0, 1));
  message->set_f_20(Message0::E1_CONST_3);
  message->set_f_23(0x2da0c2054dca3acd);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_24(0x1c);
  message->set_f_4(0x49faf64c37ac25aa);
  message->set_f_9(0x360dde7af03c293b);
  message->set_f_18(s->substr(0, 4));
  Message0::M8* v0 = message->mutable_f_55();
  v0->set_f_0(0x326f9efcc64dce00);
  Message0::M8::M47* v1_0 = v0->add_f_6();
  v1_0->set_f_0(s->substr(0, 4));
  v1_0->set_f_2(true);
  Message0::M8::M47::M50* v2_0 = v1_0->add_f_4();
  v2_0->set_f_0(0x63ca2d32e006f86a);
  Message0::M8::M47::M50::M59* v3 = v2_0->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M8::M27* v4_0 = v0->add_f_2();
  v4_0->set_f_0(0x5f7cdc2);
  message->set_f_12(0x5003bdf);
  message->set_f_17(0x328cfab5);
  message->set_f_29(0x46891e97ec6a7a3);
  Message0::M6* v5 = message->mutable_f_51();
  Message0::M6::M36* v6 = v5->mutable_f_13();
  v6->set_f_0(0xbe7614202cb00ce);
  v6->set_f_1(0xf93576b4fe53c39);
  v5->set_f_5(false);
  v5->set_f_4(s->substr(0, 277));
  Message0::M6::E2 array_0[13] = {
      Message0::M6::E2_CONST_1, Message0::M6::E2_CONST_4,
      Message0::M6::E2_CONST_1, Message0::M6::E2_CONST_1,
      Message0::M6::E2_CONST_1, Message0::M6::E2_CONST_4,
      Message0::M6::E2_CONST_4, Message0::M6::E2_CONST_1,
      Message0::M6::E2_CONST_2, Message0::M6::E2_CONST_5,
      Message0::M6::E2_CONST_2, Message0::M6::E2_CONST_1,
      Message0::M6::E2_CONST_4,
  };
  for (auto v : array_0) {
    v5->add_f_3(v);
  }
  v5->set_f_0(0x18723a10ba78a39);
  v5->set_f_1(s->substr(0, 15));
  v5->set_f_2(false);
  Message0::M6::M19* v7 = v5->mutable_f_11();
  v7->add_f_0(Message0::M6::M19::E6_CONST_3);
  v7->set_f_6(0x71);
  v7->set_f_5(false);
  v7->set_f_2(Message0::M6::M19::E7_CONST_4);
  v7->set_f_4(0x17249d09150cf868);
  message->set_f_22(s->substr(0, 4));
  message->set_f_25(s->substr(0, 3));
  Message0::M9* v8_0 = message->add_f_56();
  (void)v8_0;  // Suppresses clang-tidy.
  Message0::M5* v9 = message->mutable_f_50();
  v9->set_f_0(0x17f00ed9382c173e);
  v9->set_f_2(0x715e3b88432f7d70);
  v9->set_f_4(0x9d1ed94);
  v9->set_f_1(0x2bace8e62596109b);
  Message0::M5::M42* v10 = v9->mutable_f_10();
  v10->set_f_0(s->substr(0, 14));
  Message0::M5::M16* v11_0 = v9->add_f_9();
  Message0::M5::M16::E5 array_1[18] = {
      Message0::M5::M16::E5_CONST_3, Message0::M5::M16::E5_CONST_5,
      Message0::M5::M16::E5_CONST_1, Message0::M5::M16::E5_CONST_2,
      Message0::M5::M16::E5_CONST_5, Message0::M5::M16::E5_CONST_1,
      Message0::M5::M16::E5_CONST_2, Message0::M5::M16::E5_CONST_5,
      Message0::M5::M16::E5_CONST_5, Message0::M5::M16::E5_CONST_4,
      Message0::M5::M16::E5_CONST_1, Message0::M5::M16::E5_CONST_5,
      Message0::M5::M16::E5_CONST_2, Message0::M5::M16::E5_CONST_1,
      Message0::M5::M16::E5_CONST_5, Message0::M5::M16::E5_CONST_5,
      Message0::M5::M16::E5_CONST_4, Message0::M5::M16::E5_CONST_3,
  };
  for (auto v : array_1) {
    v11_0->add_f_2(v);
  }
  v11_0->set_f_1(0x45afebae0057ee0a);
  message->set_f_16(0x25b0e39587506d46);
  Message0::M2* v12 = message->mutable_f_46();
  Message0::M2::M44* v13 = v12->mutable_f_4();
  Message0::M2::M44::M58* v14 = v13->mutable_f_9();
  v14->set_f_29(0x4a);
  v14->set_f_27(0x31);
  v14->set_f_20(s->substr(0, 54));
  v14->set_f_10(0x25956278);
  v14->set_f_22(0x154499478f3c44cb);
  v14->set_f_23(0x741d7a52e09cfe1e);
  v14->set_f_17(Message0::M2::M44::M58::E13_CONST_5);
  v14->set_f_28(s->substr(0, 19));
  v14->set_f_5(0xff492f0);
  v14->set_f_7(0xf75435c);
  v14->set_f_19(0x71258804);
  v14->set_f_9(0x1e8dc55cd3d13734);
  v14->set_f_15(0x76a5a3c1cb31ff8a);
  v14->set_f_14(0x1a0afe6ceeb8692);
  v14->set_f_21(0x2fa43f0c5d904dce);
  v14->set_f_18(false);
  v14->set_f_4(0x7c);
  v14->set_f_1(0x143998);
  v14->set_f_8(0x2da0de6a56a13708);
  v14->set_f_3(0x2d);
  v14->set_f_24(s->substr(0, 2));
  v14->set_f_2(s->substr(0, 21));
  v14->set_f_30(0x6f5de1b2);
  v13->set_f_1(0xe3d);
  v13->set_f_0(s->substr(0, 6));
  v13->set_f_2(s->substr(0, 64));
  Message0::M2::M39* v15 = v12->mutable_f_2();
  v15->set_f_0(0x79e0bf5f25032a94);
  message->set_f_8(0xad353);
  message->set_f_5(s->substr(0, 8));
  message->set_f_1(s->substr(0, 2));
  message->set_f_6(0.773807);
  message->set_f_23(0x10d7552b7540dfe9);
  message->set_f_15(0x64);
  Message0::M3* v16 = message->mutable_f_47();
  Message0::M3::M35* v17 = v16->mutable_f_2();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_2(0x57c6ec2bf33eb9ee);
  message->add_f_13(s->substr(0, 7));
  message->set_f_14(s->substr(0, 9));
  Message0::M11* v18 = message->mutable_f_61();
  Message0::M11::M24* v19 = v18->mutable_f_6();
  v19->set_f_0(0x5346ed481596063d);
  v19->set_f_1(0x18);
  v19->set_f_2(0x5ce57578cc754c59);
  v18->set_f_3(0x58);
  v18->set_f_4(0x141f4e2fb4a021fb);
  v18->set_f_0(0x2054eac9);
  Message0::M11::M33* v20 = v18->mutable_f_7();
  Message0::M11::M33::M54* v21_0 = v20->add_f_3();
  v21_0->set_f_1(0x7b);
  v21_0->set_f_2(0x4cb127d7fa8fc395);
  v21_0->set_f_0(0x5b047667e5c8b1a6);
  Message0::M11::M33::M57* v22 = v20->mutable_f_4();
  v22->set_f_1(0.465375);
  v22->set_f_0(0x31614a0f4c56918e);
  v20->set_f_0(0x77ac436b9c4e94f3);
  v18->set_f_2(0x787e5ad);
  message->set_f_0(true);
  message->set_f_19(0x3908);
  Message0::M12* v23 = message->mutable_f_62();
  Message0::M12::M23* v24 = v23->mutable_f_3();
  v24->set_f_0(0x6fb000e40f83966e);
  Message0::M12::M23::M51* v25_0 = v24->add_f_3();
  v25_0->set_f_1(0x67f6f236);
  Message0::M12::M23::M51::M66* v26 = v25_0->mutable_f_6();
  v26->set_f_4(0x58f1ff058cfeadf9);
  v26->set_f_6(true);
  v26->set_f_1(0x227719f799877093);
  v26->set_f_0(s->substr(0, 8));
  v26->set_f_3(0x220e06034bf35838);
  v26->set_f_5(0x59df7e732fd02f49);
  v25_0->set_f_2(0x4c);
  v25_0->set_f_0(0x5b);
  v23->set_f_0(false);
  Message0::M12::M31* v27_0 = v23->add_f_4();
  v27_0->set_f_2(0xef186331dae7b79);
  v27_0->set_f_1(s->substr(0, 7));
  v27_0->set_f_0(0x4a);
  Message0::M12::M17* v28 = v23->mutable_f_2();
  v28->set_f_0(0xff967b6182fcc8c);
  Message0::M12::M32* v29 = v23->mutable_f_5();
  v29->set_f_0(0x522ab14b);
  Message0::M7* v30 = message->mutable_f_52();
  v30->set_f_0(0.687734);
  Message0::M7::M41* v31 = v30->mutable_f_8();
  Message0::M7::M41::M53* v32 = v31->mutable_f_4();
  v32->set_f_1(s->substr(0, 4));
  v32->set_f_0(0x5f783963b1bc580);
  v32->set_f_3(0x46c538e);
  v31->set_f_0(0x44f8e6feb3fe615f);
  Message0::M7::M29* v33 = v30->mutable_f_5();
  v33->set_f_0(s->substr(0, 13));
  Message0::M7::M30* v34 = v30->mutable_f_6();
  v34->set_f_1(s->substr(0, 3));
  Message0::M7::M48* v35 = v30->mutable_f_10();
  v35->set_f_1(s->substr(0, 8));
  v35->set_f_2(0x3ec99873);
  v35->set_f_3(0x7);
  Message0::M7::M38* v36 = v30->mutable_f_7();
  v36->set_f_0(s->substr(0, 6));
  message->set_f_20(Message0::E1_CONST_1);
  Message0::M10* v37 = message->mutable_f_57();
  v37->set_f_0(0x7c7e48d);
  message->set_f_3(0x2f4ec6d);
  message->set_f_11(0x45c9d7eb1fb2c6e2);
  message->set_f_7(0x333c9cc148e35ec8);
  message->set_f_28(0x683aa01b18f42228);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_24(0x67);
  Message0::M10* v0 = message->mutable_f_57();
  v0->set_f_0(0x2d4c);
  message->set_f_26(0x743566b0d7b2ad31);
  message->set_f_27(0x636466b9);
  Message0::M4* v1 = message->mutable_f_49();
  v1->set_f_0(0x34);
  Message0::M4::M15* v2_0 = v1->add_f_2();
  (void)v2_0;  // Suppresses clang-tidy.
  message->set_f_7(0x288c9a3b5a7a30fb);
  message->set_f_6(0.760082);
  message->set_f_1(s->substr(0, 3));
  Message0::M13* v3 = message->mutable_f_65();
  v3->set_f_2(0x38);
  Message0::M13::M37* v4_0 = v3->add_f_9();
  v4_0->set_f_1(0.910038);
  v4_0->set_f_2(true);
  Message0::M13::M20* v5 = v3->mutable_f_6();
  Message0::M13::M20::M55* v6_0 = v5->add_f_4();
  v6_0->set_f_0(0.106998);
  v5->set_f_0(0x74);
  Message0::M13::M26* v7 = v3->mutable_f_8();
  v7->set_f_0(0x1dae6ec2e590959e);
  v3->set_f_1(s->substr(0, 1));
  Message0::M11* v8 = message->mutable_f_61();
  v8->set_f_2(0x3e3f);
  Message0::M11::M24* v9 = v8->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  Message0::M11::M33* v10 = v8->mutable_f_7();
  Message0::M11::M33::M54* v11_0 = v10->add_f_3();
  Message0::M11::M33::M54::M61* v12 = v11_0->mutable_f_8();
  Message0::M11::M33::M54::M61::E15 array_0[6] = {
      Message0::M11::M33::M54::M61::E15_CONST_2,
      Message0::M11::M33::M54::M61::E15_CONST_4,
      Message0::M11::M33::M54::M61::E15_CONST_1,
      Message0::M11::M33::M54::M61::E15_CONST_5,
      Message0::M11::M33::M54::M61::E15_CONST_5,
      Message0::M11::M33::M54::M61::E15_CONST_4,
  };
  for (auto v : array_0) {
    v12->add_f_0(v);
  }
  v10->set_f_0(0x62f9f7cc9e03acf3);
  v8->set_f_3(0x5);
  Message0::M2* v13 = message->mutable_f_46();
  Message0::M2::M39* v14 = v13->mutable_f_2();
  v14->set_f_0(0x1c3226ffa92e0b24);
  Message0::M2::M44* v15 = v13->mutable_f_4();
  v15->set_f_2(s->substr(0, 191));
  v15->set_f_0(s->substr(0, 31));
  v15->set_f_3(0.458316);
  message->set_f_2(0x44af2de13031d220);
  Message0::M9* v16_0 = message->add_f_56();
  v16_0->set_f_0(s->substr(0, 14));
  message->set_f_15(0x63);
  message->set_f_8(0x9170fcb);
  Message0::M12* v17 = message->mutable_f_62();
  Message0::M12::M23* v18 = v17->mutable_f_3();
  v18->set_f_0(0x450a35ba61715a95);
  Message0::M12::M31* v19_0 = v17->add_f_4();
  v19_0->set_f_2(0x6cf232a9b679b469);
  v19_0->set_f_1(s->substr(0, 7));
  Message0::M12::M45* v20 = v17->mutable_f_7();
  Message0::M12::M45::E11 array_1[16] = {
      Message0::M12::M45::E11_CONST_4, Message0::M12::M45::E11_CONST_4,
      Message0::M12::M45::E11_CONST_4, Message0::M12::M45::E11_CONST_4,
      Message0::M12::M45::E11_CONST_5, Message0::M12::M45::E11_CONST_4,
      Message0::M12::M45::E11_CONST_1, Message0::M12::M45::E11_CONST_1,
      Message0::M12::M45::E11_CONST_4, Message0::M12::M45::E11_CONST_1,
      Message0::M12::M45::E11_CONST_3, Message0::M12::M45::E11_CONST_1,
      Message0::M12::M45::E11_CONST_5, Message0::M12::M45::E11_CONST_3,
      Message0::M12::M45::E11_CONST_1, Message0::M12::M45::E11_CONST_2,
  };
  for (auto v : array_1) {
    v20->add_f_0(v);
  }
  v17->set_f_0(true);
  Message0::M12::M17* v21 = v17->mutable_f_2();
  v21->set_f_0(0x31ef4fec13dd7443);
  message->set_f_10(0x72f168de58977443);
  message->set_f_16(0x671fa21b60fe0dca);
  message->set_f_14(s->substr(0, 10));
  message->set_f_22(s->substr(0, 3));
  message->set_f_11(0x168ed1f948ae71a1);
  message->add_f_13(s->substr(0, 8));
  message->set_f_4(0x318b136c2832d151);
  Message0::M7* v22 = message->mutable_f_52();
  Message0::M7::M38* v23 = v22->mutable_f_7();
  v23->set_f_0(s->substr(0, 50));
  Message0::M7::M22* v24_0 = v22->add_f_3();
  v24_0->set_f_3(s->substr(0, 5));
  v24_0->set_f_1(0x22);
  Message0::M7::M30* v25 = v22->mutable_f_6();
  v25->set_f_2(0x12);
  v25->set_f_0(0x62952efaf7376969);
  v25->set_f_1(s->substr(0, 49));
  Message0::M7::M41* v26 = v22->mutable_f_8();
  v26->set_f_0(0x3f061c5570d41a6f);
  Message0::M7::M41::M53* v27 = v26->mutable_f_4();
  v27->set_f_0(0x2c9116d19c040db8);
  v27->set_f_1(s->substr(0, 20));
  v27->set_f_3(0x41);
  Message0::M7::M29* v28 = v22->mutable_f_5();
  v28->set_f_0(s->substr(0, 13));
  Message0::M7::M48* v29 = v22->mutable_f_10();
  v29->set_f_1(s->substr(0, 431));
  v29->set_f_0(true);
  message->set_f_17(0x333d49a7);
  Message0::M1* v30_0 = message->add_f_45();
  Message0::M1::M18* v31 = v30_0->mutable_f_2();
  v31->set_f_4(0x1e);
  v31->set_f_2(s->substr(0, 22));
  v31->set_f_1(0x55510ab83e5507f4);
  v31->set_f_5(0x7f773);
  v31->set_f_6(s->substr(0, 9));
  Message0::M1::M40* v32_0 = v30_0->add_f_4();
  v32_0->set_f_0(false);
  Message0::M1::M25* v33_0 = v30_0->add_f_3();
  v33_0->set_f_1(0x3235bf6482720435);
  v33_0->set_f_0(false);
  v30_0->set_f_0(0.349915);
  message->set_f_21(0x12ca57);
  message->set_f_19(0x67e98cd);
  message->set_f_18(s->substr(0, 506));
  message->set_f_0(true);
  message->set_f_28(0x49d9e04d21736e38);
  Message0::M5* v34 = message->mutable_f_50();
  v34->set_f_4(0x6f8bc);
  v34->set_f_0(0x509b960e6b20e715);
  v34->set_f_2(0x290a504a50009332);
  Message0::M5::M16* v35_0 = v34->add_f_9();
  v35_0->add_f_2(Message0::M5::M16::E5_CONST_3);
  v35_0->set_f_0(0x4a2869f2);
  v34->set_f_3(0x33bdab8f96ba69b8);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M10* v0 = message->mutable_f_57();
  v0->set_f_0(0x8ee953);
  message->set_f_24(0x7);
  Message0::M5* v1 = message->mutable_f_50();
  v1->set_f_2(0x194ced9f188da3be);
  Message0::M5::M42* v2 = v1->mutable_f_10();
  (void)v2;  // Suppresses clang-tidy.
  v1->set_f_0(0xed1145f9cb2debf);
  v1->set_f_1(0x75a420ed45b01296);
  message->set_f_10(0x3be63313f5a04906);
  message->set_f_26(0x2dcb9e58372f496d);
  message->set_f_2(0x5a39496d67a69b14);
  message->set_f_7(0xb7b3025b613c09d);
  message->set_f_6(0.088686);
  message->add_f_13(s->substr(0, 5));
  Message0::M14* v3 = message->mutable_f_66();
  v3->add_f_0(Message0::M14::E4_CONST_1);
  Message0::M14::M21* v4 = v3->mutable_f_8();
  v4->set_f_0(0x649b6a94ef47ede);
  v4->set_f_1(0x1939c6590d641302);
  v4->set_f_2(0x58df2fdfe1fb4fd0);
  v3->set_f_2(s->substr(0, 7));
  v3->set_f_3(0x3b6f9bafe2171a30);
  v3->set_f_1(s->substr(0, 12));
  Message0::M14::M34* v5 = v3->mutable_f_9();
  v5->set_f_12(0x590c87a7eeb3f244);
  v5->set_f_11(0x2cb260d1d791f004);
  v5->set_f_6(s->substr(0, 6));
  v5->add_f_5(Message0::M14::M34::E10_CONST_4);
  v5->set_f_3(Message0::M14::M34::E9_CONST_4);
  v5->set_f_4(s->substr(0, 8));
  v5->set_f_2(0x464649c);
  v5->set_f_9(true);
  v5->set_f_8(s->substr(0, 10));
  v5->set_f_0(s->substr(0, 21));
  v5->set_f_7(0x1c4b42e045091643);
  Message0::M6* v6 = message->mutable_f_51();
  Message0::M6::M36* v7 = v6->mutable_f_13();
  v7->set_f_2(0x3890c19838de3196);
  v7->set_f_1(0x10a1edf04dad846f);
  v7->set_f_0(0x4e94d590c35be2a8);
  v6->set_f_0(0x4b0993b694707c4);
  Message0::M6::M46* v8_0 = v6->add_f_15();
  (void)v8_0;  // Suppresses clang-tidy.
  Message0::M6::M19* v9 = v6->mutable_f_11();
  v9->add_f_0(Message0::M6::M19::E6_CONST_4);
  v9->set_f_4(0x728222fc8dfce316);
  v9->set_f_5(true);
  v9->set_f_2(Message0::M6::M19::E7_CONST_1);
  Message0::M6::M19::M49* v10 = v9->mutable_f_10();
  Message0::M6::M19::M49::M64* v11_0 = v10->add_f_3();
  Message0::M6::M19::M49::M64::M68* v12 = v11_0->mutable_f_5();
  v12->set_f_0(0x6bf0683f8d9020ac);
  v12->add_f_1(Message0::M6::M19::M49::M64::M68::E17_CONST_3);
  v12->set_f_2(0x6b8bb7dd56d0cc57);
  v11_0->set_f_2(s->substr(0, 6));
  Message0::M6::M19::M49::M64::M70* v13 = v11_0->mutable_f_8();
  v13->set_f_2(0x4ae6df729d547dcd);
  v13->set_f_3(Message0::M6::M19::M49::M64::M70::E18_CONST_4);
  v13->set_f_4(0x1300311c6d189c92);
  v13->set_f_5(false);
  v13->set_f_0(s->substr(0, 5));
  v13->set_f_1(false);
  v11_0->set_f_0(0xd5f18496a8a737d);
  v10->set_f_0(0x7aa4f2eb);
  v9->set_f_3(s->substr(0, 1));
  v6->set_f_4(s->substr(0, 45));
  v6->set_f_2(false);
  v6->add_f_3(Message0::M6::E2_CONST_2);
  Message0::M1* v14_0 = message->add_f_45();
  v14_0->set_f_0(0.938522);
  Message0::M1::M25* v15_0 = v14_0->add_f_3();
  v15_0->set_f_0(false);
  message->set_f_29(0x4d6bb83561459063);
  message->set_f_21(0x48fe30d);
  Message0::M9* v16_0 = message->add_f_56();
  (void)v16_0;  // Suppresses clang-tidy.
  message->set_f_5(s->substr(0, 5));
  message->set_f_18(s->substr(0, 68));
  Message0::M13* v17 = message->mutable_f_65();
  v17->set_f_0(Message0::M13::E3_CONST_1);
  v17->set_f_1(s->substr(0, 56));
  Message0::M13::M26* v18 = v17->mutable_f_8();
  (void)v18;  // Suppresses clang-tidy.
  Message0::M13::M37* v19_0 = v17->add_f_9();
  v19_0->set_f_1(0.310359);
  v19_0->set_f_2(true);
  v19_0->set_f_0(0x3cf0c7af);
  Message0::M13::M20* v20 = v17->mutable_f_6();
  Message0::M13::M20::M55* v21_0 = v20->add_f_4();
  v21_0->set_f_0(0.434454);
  Message0::M13::M20::M55::E12 array_0[17] = {
      Message0::M13::M20::M55::E12_CONST_2,
      Message0::M13::M20::M55::E12_CONST_2,
      Message0::M13::M20::M55::E12_CONST_2,
      Message0::M13::M20::M55::E12_CONST_1,
      Message0::M13::M20::M55::E12_CONST_1,
      Message0::M13::M20::M55::E12_CONST_5,
      Message0::M13::M20::M55::E12_CONST_5,
      Message0::M13::M20::M55::E12_CONST_4,
      Message0::M13::M20::M55::E12_CONST_3,
      Message0::M13::M20::M55::E12_CONST_3,
      Message0::M13::M20::M55::E12_CONST_3,
      Message0::M13::M20::M55::E12_CONST_4,
      Message0::M13::M20::M55::E12_CONST_1,
      Message0::M13::M20::M55::E12_CONST_3,
      Message0::M13::M20::M55::E12_CONST_3,
      Message0::M13::M20::M55::E12_CONST_4,
      Message0::M13::M20::M55::E12_CONST_4,
  };
  for (auto v : array_0) {
    v21_0->add_f_1(v);
  }
  Message0::M11* v22 = message->mutable_f_61();
  Message0::M11::M24* v23 = v22->mutable_f_6();
  v23->set_f_1(0x9a8777c);
  v23->set_f_0(0x1594a3d63a70c6f2);
  v22->set_f_1(0x523faae);
  Message0::M11::M33* v24 = v22->mutable_f_7();
  v24->set_f_0(0x5268477bc9365e71);
  Message0::M11::M33::M54* v25_0 = v24->add_f_3();
  v25_0->set_f_1(0xd4ac305);
  v25_0->set_f_0(0x1ee9541f85ca2124);
  v25_0->set_f_2(0x3c504e56da421217);
  Message0::M11::M33::M57* v26 = v24->mutable_f_4();
  v26->set_f_0(0x51eed2a52765e2b5);
  v26->set_f_1(0.986318);
  v22->set_f_2(0x6d3d665);
  v22->set_f_4(0x3f64973a02608c0d);
  message->set_f_16(0x77bfcfc6bcade1c9);
  message->set_f_14(s->substr(0, 16));
  Message0::M8* v27 = message->mutable_f_55();
  Message0::M8::M47* v28_0 = v27->add_f_6();
  v28_0->set_f_1(0x2360e9f6681d664);
  Message0::M8::M47::M50* v29_0 = v28_0->add_f_4();
  Message0::M8::M47::M50::M59* v30 = v29_0->mutable_f_3();
  v30->set_f_0(s->substr(0, 18));
  v30->set_f_1(s->substr(0, 52));
  v29_0->set_f_0(0x4ce3c65462128909);
  Message0::M8::M27* v31_0 = v27->add_f_2();
  v31_0->set_f_0(0x337b4134);
  v27->set_f_0(0x48cf46515744f7f9);
  message->set_f_8(0x47);
  message->set_f_28(0x65b5cb06c0407530);
  message->set_f_11(0x525c53e21946de9b);
  Message0::M7* v32 = message->mutable_f_52();
  Message0::M7::M29* v33 = v32->mutable_f_5();
  v33->set_f_0(s->substr(0, 5));
  Message0::M7::M41* v34 = v32->mutable_f_8();
  Message0::M7::M41::M53* v35 = v34->mutable_f_4();
  v35->set_f_1(s->substr(0, 16));
  v35->set_f_2(0x1e);
  v35->set_f_3(0xa92318);
  v35->set_f_4(0x92a7076);
  v34->set_f_0(0x7bed86ec34301ced);
  Message0::M7::M48* v36 = v32->mutable_f_10();
  v36->set_f_1(s->substr(0, 32));
  v36->set_f_2(0x620c4a28);
  v36->set_f_0(true);
  v36->set_f_3(0xc);
  Message0::M7::M30* v37 = v32->mutable_f_6();
  v37->set_f_0(0x64a17a80aabc9210);
  v37->set_f_1(s->substr(0, 73));
  v32->set_f_1(0x3614c3e775460d23);
  Message0::M7::M38* v38 = v32->mutable_f_7();
  v38->set_f_0(s->substr(0, 92));
  v32->set_f_0(0.863230);
  message->set_f_15(0xd);
  message->set_f_4(0x3498e80881deaf3c);
  message->set_f_19(0x9b8);
  message->set_f_9(0x6c45a7a534a79a03);
  message->set_f_1(s->substr(0, 2));
  message->set_f_27(0x19391cb7);
  Message0::M2* v39 = message->mutable_f_46();
  v39->set_f_0(0x5abe991);
  Message0::M2::M44* v40 = v39->mutable_f_4();
  v40->set_f_0(s->substr(0, 483));
  v40->set_f_3(0.778890);
  Message0::M2::M44::M58* v41 = v40->mutable_f_9();
  v41->set_f_13(0x1);
  v41->set_f_20(s->substr(0, 3));
  v41->set_f_2(s->substr(0, 18));
  v41->set_f_3(0xd05ca06);
  v41->set_f_28(s->substr(0, 20));
  v41->set_f_19(0x6e511e20);
  v41->set_f_0(true);
  v41->set_f_15(0x56f00f1f9e277477);
  v41->set_f_10(0x2a183b81);
  v41->set_f_26(0x12dd0631e0da80d3);
  v41->set_f_14(0x7808688a9a714882);
  v41->set_f_23(0x2bb6776cdd948490);
  v41->set_f_4(0x60);
  v41->set_f_18(false);
  v41->set_f_27(0x1c);
  v41->set_f_8(0x278a22e57920e1b8);
  v41->set_f_24(s->substr(0, 3));
  v41->set_f_9(0x482890b77e570c59);
  v41->set_f_22(0xb0b1a4cf289b1da);
  v41->set_f_7(0x99d32);
  v41->set_f_17(Message0::M2::M44::M58::E13_CONST_1);
  v41->set_f_6(0x8fb6ccf);
  v41->set_f_21(0x6400281c2bea4a4f);
  v41->set_f_1(0x52);
  v40->set_f_2(s->substr(0, 46));
  message->set_f_0(false);
  Message0::M4* v42 = message->mutable_f_49();
  Message0::M4::M15* v43_0 = v42->add_f_2();
  v43_0->set_f_0(0.837436);
  v42->set_f_0(0x6c728);
  Message0::M3* v44 = message->mutable_f_47();
  v44->set_f_0(0x115116d4e2a006a);
  message->set_f_12(0x82bdbf0);
  message->set_f_17(0x381bfddd);
  message->set_f_22(s->substr(0, 7));
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
}  // namespace fleetbench::rpc::P8::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
