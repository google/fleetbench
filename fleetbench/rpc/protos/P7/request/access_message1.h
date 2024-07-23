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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message1.pb.h"

namespace fleetbench::rpc::P7::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_20(0xf5ef77b252fc5292);
  message->set_f_12(0xba0bc2b2a38d8349);
  message->set_f_23(0x35e37aa9);
  Message1::M12* v0_0 = message->add_f_77();
  v0_0->set_f_2(0xc845394c3189bf29);
  v0_0->set_f_1(s->substr(0, 26));
  message->set_f_7(s->substr(0, 26));
  message->set_f_21(0x3cfd3788ee1d7003);
  Message1::M1* v1 = message->mutable_f_58();
  Message1::M1::M47* v2 = v1->mutable_f_4();
  v2->set_f_2(0x11);
  v2->set_f_0(Message1::M1::M47::E7_CONST_3);
  Message1::M1::M14* v3_0 = v1->add_f_3();
  (void)v3_0;  // Suppresses clang-tidy.
  v1->set_f_1(s->substr(0, 9));
  v1->set_f_0(0xd10ff7b7f90e0d2d);
  Message1::M9* v4_0 = message->add_f_70();
  v4_0->set_f_3(0x74);
  v4_0->set_f_7(0x3d);
  Message1::M9::M49* v5_0 = v4_0->add_f_17();
  Message1::M9::M49::M58* v6 = v5_0->mutable_f_3();
  v6->set_f_0(0x246ced51d4ba4ed);
  v6->set_f_2(0x368295e9f98f6563);
  v6->set_f_3(0x4298f3548bc50eba);
  v4_0->set_f_0(0x16d75c);
  Message1::M9::M40* v7 = v4_0->mutable_f_16();
  v7->set_f_2(0x9ef86fcf0ccf87e3);
  v7->set_f_1(0x3b03715b4fba2a68);
  Message1::M9::M40::M76* v8_0 = v7->add_f_6();
  v8_0->set_f_0(0x84abbb91d6931c43);
  v4_0->set_f_2(s->substr(0, 32));
  v4_0->set_f_1(0xaf095dffb43c0558);
  v4_0->set_f_9(0xd011570);
  Message1::M13* v9 = message->mutable_f_79();
  Message1::M13::M42* v10 = v9->mutable_f_9();
  Message1::M13::M42::M66* v11 = v10->mutable_f_3();
  v11->set_f_1(0xf3899470ae6fd6e3);
  v10->set_f_0(0.852476);
  v9->set_f_0(0x1a5c);
  Message1::M13::M35* v12 = v9->mutable_f_4();
  v12->set_f_0(s->substr(0, 56));
  message->set_f_14(0x43b5bdff40b7a824);
  message->set_f_9(s->substr(0, 25));
  message->set_f_24(0xdc03130);
  Message1::M5* v13 = message->mutable_f_64();
  Message1::M5::M41* v14 = v13->mutable_f_9();
  v14->set_f_2(0x92e9c34ab352e351);
  v14->set_f_3(0x17);
  v14->set_f_1(0x130184d6);
  v13->set_f_0(0x573aa30);
  Message1::M5::M25* v15 = v13->mutable_f_5();
  Message1::M5::M25::M64* v16 = v15->mutable_f_5();
  v16->set_f_0(s->substr(0, 24));
  v15->set_f_1(0x2e2a04f386bcf230);
  Message1::M5::M29* v17 = v13->mutable_f_8();
  v17->set_f_0(0xe4d7728);
  Message1::M5::M29::M59* v18 = v17->mutable_f_4();
  v18->set_f_1(true);
  v18->set_f_0(false);
  v17->set_f_1(0.090460);
  Message1::M5::M43* v19_0 = v13->add_f_12();
  (void)v19_0;  // Suppresses clang-tidy.
  message->set_f_16(s->substr(0, 37));
  message->add_f_17(Message1::E2_CONST_2);
  message->set_f_15(0x14147375);
  message->set_f_2(0xe32bfd15d4f1bb00);
  message->set_f_4(true);
  Message1::M7* v20 = message->mutable_f_67();
  Message1::M7::M16* v21_0 = v20->add_f_3();
  Message1::M7::M16::M56* v22_0 = v21_0->add_f_13();
  (void)v22_0;  // Suppresses clang-tidy.
  v21_0->set_f_4(0x2e);
  v21_0->set_f_2(0x4bf81e8);
  v21_0->set_f_0(0xd827a4a);
  Message1::M7::M20* v23 = v20->mutable_f_4();
  v23->set_f_0(s->substr(0, 64));
  Message1::M7::M20::M62* v24 = v23->mutable_f_6();
  v24->set_f_2(0x77b6ce2dcee38f5f);
  v24->set_f_7(0x2c2caa2db2993bab);
  v24->set_f_12(0xa5ddcf0a30b1a6dd);
  v24->set_f_4(s->substr(0, 25));
  v24->set_f_5(true);
  v24->set_f_14(0x4);
  Message1::M7::M20::M62::M88* v25 = v24->mutable_f_32();
  Message1::M7::M20::M62::M88::M96* v26 = v25->mutable_f_3();
  v26->set_f_0(0x52);
  v25->set_f_0(0x1715b2);
  v24->set_f_0(s->substr(0, 27));
  v24->set_f_11(0x4f);
  v24->set_f_10(0x5d53581d1189a4c0);
  v24->set_f_8(0x47);
  v24->set_f_13(0x6723f1ea977e4520);
  v24->set_f_3(s->substr(0, 6));
  v24->set_f_6(s->substr(0, 6));
  v24->set_f_1(false);
  message->set_f_8(0x4b);
  message->set_f_18(0x6b1cc1ab);
  message->set_f_29(0x5d);
  Message1::M3* v27 = message->mutable_f_62();
  Message1::M3::M33* v28_0 = v27->add_f_5();
  v28_0->set_f_0(0x4c96f4671fece6ec);
  v28_0->set_f_1(0xbb72240);
  Message1::M3::M33::M78* v29 = v28_0->mutable_f_9();
  (void)v29;  // Suppresses clang-tidy.
  v28_0->set_f_3(false);
  Message1::M3::E3 array_1[21] = {
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_1,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_1, Message1::M3::E3_CONST_1,
      Message1::M3::E3_CONST_2, Message1::M3::E3_CONST_4,
      Message1::M3::E3_CONST_1, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_4, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_4,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_4,
      Message1::M3::E3_CONST_2, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_2,
  };
  for (auto v : array_1) {
    v27->add_f_0(v);
  }
  Message1::M3::M44* v30 = v27->mutable_f_8();
  v30->set_f_0(0.016850);
  message->set_f_3(0xc46866);
  message->set_f_25(s->substr(0, 29));
  message->set_f_26(0xba8a5fe5075f5efa);
  message->set_f_5(0x1ff7);
  message->set_f_19(0x70);
  Message1::M2* v31 = message->mutable_f_60();
  Message1::M2::M37* v32 = v31->mutable_f_3();
  v32->set_f_2(0x26ca9da);
  v32->set_f_3(0x1550e2);
  Message1::M2::M46* v33 = v31->mutable_f_5();
  Message1::M2::M46::M79* v34_0 = v33->add_f_12();
  v34_0->set_f_0(0.119556);
  v33->set_f_1(false);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_13(s->substr(0, 7));
  Message1::E1 array_0[21] = {
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_1,
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_2,
      Message1::E1_CONST_4, Message1::E1_CONST_5, Message1::E1_CONST_5,
      Message1::E1_CONST_5, Message1::E1_CONST_3, Message1::E1_CONST_2,
      Message1::E1_CONST_4, Message1::E1_CONST_5, Message1::E1_CONST_1,
      Message1::E1_CONST_4, Message1::E1_CONST_2, Message1::E1_CONST_3,
      Message1::E1_CONST_1, Message1::E1_CONST_2, Message1::E1_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_1(v);
  }
  Message1::M4* v0 = message->mutable_f_63();
  v0->set_f_0(0xd26);
  Message1::M4::M24* v1 = v0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M4::M50* v2 = v0->mutable_f_6();
  v2->set_f_15(0xba25b79b8fe31db1);
  v2->set_f_6(0x3e4635839e812fb4);
  v2->set_f_26(0xf7b310df60ba8b78);
  v2->set_f_30(0xa2126);
  v2->set_f_27(s->substr(0, 15));
  v2->set_f_17(0x4700ecb8);
  v2->set_f_9(s->substr(0, 19));
  v2->set_f_13(s->substr(0, 41));
  v2->set_f_29(0xc3ef3bd4dd3847fb);
  v2->set_f_19(0x60915ea);
  v2->set_f_10(0x7292f70441c84ca6);
  v2->set_f_12(0x60);
  Message1::M4::M50::M81* v3 = v2->mutable_f_53();
  v3->set_f_0(0x358ed4afada718a8);
  v2->set_f_3(0xeb447f9ce6b84771);
  v2->set_f_16(0xd21cbfbc945cd21a);
  v2->set_f_8(0x3e4a02e8);
  v2->set_f_21(0xcc6990998400e3a);
  v2->set_f_24(0x7ad2498);
  v2->set_f_5(0x23);
  v2->set_f_25(0x5);
  v2->set_f_22(0x88187728c22762f1);
  message->set_f_27(0xd4e266bbd575aede);
  message->set_f_20(0xd3ea1632abbf7059);
  message->set_f_16(s->substr(0, 2));
  message->set_f_28(s->substr(0, 7));
  message->set_f_5(0x6d);
  Message1::M12* v4_0 = message->add_f_77();
  v4_0->set_f_1(s->substr(0, 1));
  v4_0->set_f_2(0xa7aaa061ccc0aae2);
  v4_0->set_f_0(s->substr(0, 7));
  message->set_f_11(false);
  Message1::M1* v5 = message->mutable_f_58();
  v5->set_f_0(0x39b768c6193411aa);
  Message1::M1::M47* v6 = v5->mutable_f_4();
  v6->set_f_0(Message1::M1::M47::E7_CONST_5);
  v6->set_f_1(0x2319393b);
  Message1::M6* v7 = message->mutable_f_65();
  Message1::M6::M17* v8 = v7->mutable_f_6();
  v8->set_f_0(s->substr(0, 6));
  v8->set_f_1(s->substr(0, 5));
  Message1::M6::M38* v9 = v7->mutable_f_8();
  Message1::M6::M38::M52* v10 = v9->mutable_f_7();
  v10->set_f_0(0x52f2e3e);
  v9->set_f_1(0xef35e9b);
  Message1::M6::M38::M84* v11_0 = v9->add_f_8();
  v11_0->set_f_1(0xe57e0e2059eeb175);
  v11_0->set_f_0(s->substr(0, 46));
  v9->set_f_2(s->substr(0, 28));
  Message1::M3* v12 = message->mutable_f_62();
  Message1::M3::M33* v13_0 = v12->add_f_5();
  v13_0->set_f_1(0x3f8dbd0);
  Message1::M3::M33::M77* v14 = v13_0->mutable_f_8();
  (void)v14;  // Suppresses clang-tidy.
  Message1::M3::M33::M78* v15 = v13_0->mutable_f_9();
  v15->set_f_0(0x89853);
  v12->add_f_0(Message1::M3::E3_CONST_3);
  Message1::M3::M26* v16_0 = v12->add_f_3();
  v16_0->set_f_0(false);
  Message1::M3::M26::M68* v17 = v16_0->mutable_f_2();
  v17->set_f_0(s->substr(0, 26));
  message->set_f_26(0x7c2f16c97cc93e0e);
  message->set_f_3(0x3b);
  Message1::M8* v18 = message->mutable_f_69();
  (void)v18;  // Suppresses clang-tidy.
  Message1::M5* v19 = message->mutable_f_64();
  Message1::M5::M41* v20 = v19->mutable_f_9();
  v20->set_f_0(0x348ecc6668665b06);
  v20->set_f_1(0x7384619d);
  Message1::M5::M41::M74* v21 = v20->mutable_f_7();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M5::M18* v22_0 = v19->add_f_4();
  v22_0->set_f_1(false);
  v22_0->set_f_2(0x6c);
  v22_0->set_f_0(0.479087);
  Message1::M5::M18::M82* v23_0 = v22_0->add_f_5();
  (void)v23_0;  // Suppresses clang-tidy.
  Message1::M5::M25* v24 = v19->mutable_f_5();
  Message1::M5::M25::M64* v25 = v24->mutable_f_5();
  v25->set_f_0(s->substr(0, 60));
  v24->set_f_1(0x2d42541c33a156ab);
  Message1::M5::M43* v26_0 = v19->add_f_12();
  Message1::M5::M43::M75* v27 = v26_0->mutable_f_4();
  Message1::M5::M43::M75::M86* v28 = v27->mutable_f_12();
  v28->set_f_1(true);
  Message1::M5::M43::M75::M86::M102* v29 = v28->mutable_f_8();
  v29->set_f_0(0xf);
  v29->set_f_2(0xdab1c5f98c33a393);
  Message1::M5::M43::M75::M86::M95* v30 = v28->mutable_f_6();
  Message1::M5::M43::M75::M86::M95::E13 array_1[20] = {
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_2,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_2,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
  };
  for (auto v : array_1) {
    v30->add_f_0(v);
  }
  v27->set_f_5(s->substr(0, 5));
  v27->set_f_3(s->substr(0, 3));
  v27->set_f_2(s->substr(0, 9));
  v26_0->set_f_0(0xd64fe822577f9b0b);
  v19->set_f_0(0x7a);
  Message1::M13* v31 = message->mutable_f_79();
  Message1::M13::M42* v32 = v31->mutable_f_9();
  v32->set_f_0(0.698105);
  Message1::M13::M42::M66* v33 = v32->mutable_f_3();
  v33->add_f_0(Message1::M13::M42::M66::E8_CONST_3);
  v32->set_f_1(0xb803dd3babc62d47);
  Message1::M13::M35* v34 = v31->mutable_f_4();
  v34->set_f_0(s->substr(0, 45));
  Message1::M13::M39* v35 = v31->mutable_f_8();
  Message1::M13::M39::M51* v36_0 = v35->add_f_7();
  v36_0->set_f_0(0x10a9297aeacf952b);
  Message1::M13::M39::M83* v37 = v35->mutable_f_12();
  v37->set_f_9(0xda3168a5223c62f8);
  v37->set_f_8(0x6d);
  v37->set_f_10(0xc07c6e2a2d92128c);
  v37->set_f_4(s->substr(0, 22));
  v37->set_f_16(s->substr(0, 6));
  v37->set_f_11(s->substr(0, 6));
  v37->set_f_6(true);
  v37->set_f_1(s->substr(0, 32));
  v37->set_f_5(0.306871);
  v37->set_f_14(s->substr(0, 14));
  v37->set_f_12(s->substr(0, 5));
  v37->set_f_2(0x1afb);
  Message1::M13::M39::M57* v38 = v35->mutable_f_9();
  v38->set_f_0(s->substr(0, 5));
  Message1::M13::M36* v39_0 = v31->add_f_6();
  Message1::M13::M36::M53* v40 = v39_0->mutable_f_3();
  v40->set_f_0(s->substr(0, 13));
  v40->set_f_2(s->substr(0, 23));
  message->set_f_19(0x34);
  message->set_f_0(0x124a4b);
  Message1::M9* v41_0 = message->add_f_70();
  v41_0->set_f_1(0x1aa1388733a0fbba);
  Message1::M9::M40* v42 = v41_0->mutable_f_16();
  v42->set_f_1(0xe7d14ae1a1b3ffc);
  v42->set_f_0(0.489684);
  v42->set_f_2(0x1e0a9e52e4ae731b);
  Message1::M9::M40::M76* v43_0 = v42->add_f_6();
  v43_0->set_f_0(0xf6696a160738f50a);
  v41_0->set_f_7(0x33);
  v41_0->set_f_5(0xdf7b81e);
  v41_0->set_f_9(0x6a);
  Message1::M9::M49* v44_0 = v41_0->add_f_17();
  Message1::M9::M49::M58* v45 = v44_0->mutable_f_3();
  v45->set_f_1(false);
  v45->set_f_2(0x2056656c5b9a6ce1);
  v45->set_f_3(0xcc5d3e34cc9540ec);
  v44_0->set_f_0(0xc4895366bde9e26b);
  Message1::M7* v46 = message->mutable_f_67();
  (void)v46;  // Suppresses clang-tidy.
  message->set_f_25(s->substr(0, 23));
  message->set_f_10(s->substr(0, 28));
  Message1::M11* v47 = message->mutable_f_75();
  Message1::M11::M31* v48 = v47->mutable_f_14();
  v48->set_f_0(s->substr(0, 25));
  v47->set_f_2(0x56398423);
  Message1::M11::M30* v49 = v47->mutable_f_13();
  (void)v49;  // Suppresses clang-tidy.
  v47->add_f_3(Message1::M11::E4_CONST_2);
  v47->set_f_0(0x5483bd27);
  message->set_f_2(0x6da73b861c2d275e);
  message->set_f_9(s->substr(0, 28));
  message->set_f_24(0x7d);
  message->set_f_22(0x47);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M13* v0 = message->mutable_f_79();
  Message1::M13::M42* v1 = v0->mutable_f_9();
  Message1::M13::M42::M66* v2 = v1->mutable_f_3();
  v2->set_f_1(0x691b5e9212b23ace);
  v2->add_f_0(Message1::M13::M42::M66::E8_CONST_5);
  Message1::M13::M32* v3 = v0->mutable_f_3();
  v3->set_f_3(0x48);
  v3->set_f_2(true);
  v3->set_f_4(0x4fd3b0ffb0ab33dd);
  v0->set_f_0(0x2764f77);
  Message1::M13::M36* v4_0 = v0->add_f_6();
  Message1::M13::M36::M53* v5 = v4_0->mutable_f_3();
  Message1::M13::M36::M53::M89* v6 = v5->mutable_f_6();
  v6->set_f_10(0.147253);
  v6->set_f_23(0xe29ac2d0fc356af8);
  v6->set_f_3(0x5f2e1a3ad0f7e877);
  v6->set_f_5(0x15e6);
  v6->set_f_19(0x87a05353fcdf93c5);
  v6->set_f_18(0xfae31ed);
  v6->set_f_4(0x10d15cb4dea0ec6b);
  v6->set_f_13(s->substr(0, 12));
  v6->set_f_11(0xf70a87f6e8d63d51);
  v6->set_f_8(0xdfb63a4bc24e5706);
  v6->set_f_1(0x3999f206);
  v6->set_f_20(0x50);
  v6->set_f_24(s->substr(0, 2));
  v6->set_f_14(Message1::M13::M36::M53::M89::E10_CONST_4);
  v6->set_f_9(0xb1bc29330bc5de4d);
  v6->set_f_12(0x597b4332);
  v6->set_f_0(0xcecb255);
  v6->set_f_15(0x40ce8087);
  v5->set_f_1(0xc96cab393a55b853);
  v4_0->set_f_0(0x222a4f7cb839590c);
  message->set_f_23(0x75f5589b);
  Message1::M6* v7 = message->mutable_f_65();
  v7->set_f_0(0x2db200184f6b37ac);
  Message1::M6::M17* v8 = v7->mutable_f_6();
  v8->set_f_0(s->substr(0, 10));
  Message1::M6::M38* v9 = v7->mutable_f_8();
  v9->set_f_1(0x61);
  v9->set_f_0(0x49c17b78);
  v9->set_f_2(s->substr(0, 54));
  Message1::M6::M38::M52* v10 = v9->mutable_f_7();
  v10->set_f_0(0x6d);
  Message1::M6::M38::M84* v11_0 = v9->add_f_8();
  v11_0->set_f_1(0x87cf51adc5db1d32);
  v11_0->set_f_0(s->substr(0, 2));
  Message1::M6::M21* v12_0 = v7->add_f_7();
  v12_0->set_f_0(0x3e9b2297e675687b);
  v12_0->set_f_1(true);
  Message1::M6::M15* v13 = v7->mutable_f_2();
  v13->set_f_0(0x10eece32);
  v13->set_f_2(Message1::M6::M15::E5_CONST_1);
  v13->set_f_3(0x4d1b7a37a34dc47f);
  Message1::M5* v14 = message->mutable_f_64();
  Message1::M5::M29* v15 = v14->mutable_f_8();
  v15->set_f_0(0x70);
  Message1::M5::M27* v16 = v14->mutable_f_7();
  Message1::M5::M27::M55* v17 = v16->mutable_f_3();
  Message1::M5::M27::M55::M87* v18 = v17->mutable_f_6();
  v18->set_f_0(0x7dee8f405766ede6);
  v16->set_f_0(0x6e652e2461691834);
  Message1::M5::M43* v19_0 = v14->add_f_12();
  Message1::M5::M43::M75* v20 = v19_0->mutable_f_4();
  v20->set_f_2(s->substr(0, 4));
  Message1::M5::M43::M75::M86* v21 = v20->mutable_f_12();
  Message1::M5::M43::M75::M86::M95* v22 = v21->mutable_f_6();
  Message1::M5::M43::M75::M86::M95::E13 array_0[20] = {
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_2,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_2,
      Message1::M5::M43::M75::M86::M95::E13_CONST_1,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_2,
      Message1::M5::M43::M75::M86::M95::E13_CONST_5,
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
      Message1::M5::M43::M75::M86::M95::E13_CONST_4,
      Message1::M5::M43::M75::M86::M95::E13_CONST_3,
  };
  for (auto v : array_0) {
    v22->add_f_0(v);
  }
  v21->set_f_0(0x26);
  Message1::M5::M43::M75::M86::M102* v23 = v21->mutable_f_8();
  v23->set_f_0(0x19);
  v20->set_f_4(0x2aef52f5817);
  v20->set_f_3(s->substr(0, 7));
  Message1::M5::M18* v24_0 = v14->add_f_4();
  v24_0->set_f_2(0x44);
  Message1::M5::M18::M82* v25_0 = v24_0->add_f_5();
  v25_0->set_f_0(0xc3a7730);
  v24_0->set_f_1(true);
  v14->set_f_0(0x7a);
  message->set_f_16(s->substr(0, 10));
  message->set_f_24(0x2f);
  message->set_f_11(true);
  Message1::M8* v26 = message->mutable_f_69();
  v26->set_f_0(0x62875d7b88d21fd2);
  Message1::M3* v27 = message->mutable_f_62();
  Message1::M3::E3 array_1[5] = {
      Message1::M3::E3_CONST_3, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_2, Message1::M3::E3_CONST_4,
      Message1::M3::E3_CONST_2,
  };
  for (auto v : array_1) {
    v27->add_f_0(v);
  }
  Message1::M3::M44* v28 = v27->mutable_f_8();
  v28->set_f_0(0.492682);
  Message1::M3::M26* v29_0 = v27->add_f_3();
  v29_0->set_f_0(true);
  Message1::M3::M26::M68* v30 = v29_0->mutable_f_2();
  (void)v30;  // Suppresses clang-tidy.
  message->set_f_25(s->substr(0, 181));
  message->set_f_19(0x3);
  Message1::M11* v31 = message->mutable_f_75();
  Message1::M11::M30* v32 = v31->mutable_f_13();
  v32->set_f_0(true);
  Message1::M11::M31* v33 = v31->mutable_f_14();
  (void)v33;  // Suppresses clang-tidy.
  v31->add_f_3(Message1::M11::E4_CONST_3);
  v31->set_f_1(0x1);
  v31->set_f_0(0x7c2044bc);
  v31->set_f_2(0x53ad40dc);
  message->set_f_27(0x893ea7842df0805);
  message->set_f_29(0x50da8c0);
  message->set_f_18(0x44db59b9);
  message->set_f_8(0xa97e139);
  message->add_f_1(Message1::E1_CONST_1);
  message->set_f_5(0x8a07ed3);
  message->set_f_2(0x9771da3f6b7f7638);
  Message1::M9* v34_0 = message->add_f_70();
  Message1::M9::M40* v35 = v34_0->mutable_f_16();
  v35->set_f_2(0x6a1bd7a4a49e711b);
  v35->set_f_0(0.181978);
  v34_0->set_f_7(0x6);
  v34_0->set_f_6(0x76);
  v34_0->set_f_1(0x5f721937a6f3fe0c);
  v34_0->set_f_8(0.565931);
  v34_0->set_f_5(0xbb54e88);
  Message1::M9::M49* v36_0 = v34_0->add_f_17();
  v36_0->set_f_0(0xb209f10b175571b3);
  Message1::M9::M49::M58* v37 = v36_0->mutable_f_3();
  v37->set_f_3(0x7dc7765525f44f9e);
  Message1::M10* v38 = message->mutable_f_72();
  v38->set_f_0(0x44f311d9208ce68c);
  v38->set_f_1(s->substr(0, 7));
  message->set_f_4(true);
  message->set_f_0(0x7a);
  message->set_f_12(0x45e12ea083d69b36);
  message->set_f_13(s->substr(0, 20));
  message->set_f_9(s->substr(0, 6));
  message->set_f_6(0.532458);
  message->set_f_28(s->substr(0, 8));
  message->set_f_14(0x8346f55c436cb02c);
  message->add_f_17(Message1::E2_CONST_3);
  message->set_f_20(0xa84e6b8630772bd0);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_28(s->substr(0, 52));
  message->set_f_23(0x16d7c229);
  message->set_f_11(false);
  Message1::M4* v0 = message->mutable_f_63();
  Message1::M4::M50* v1 = v0->mutable_f_6();
  v1->set_f_9(s->substr(0, 20));
  v1->set_f_23(0x8e5974edaf6161a5);
  v1->set_f_19(0x1fcd73);
  v1->set_f_2(0x50);
  v1->set_f_1(0x60);
  v1->set_f_0(s->substr(0, 25));
  v1->set_f_12(0x1d3dfa1);
  v1->set_f_3(0x172f72b96b2799b6);
  v1->set_f_4(s->substr(0, 4));
  v1->set_f_7(0x22);
  v1->set_f_21(0xd3256e54ecc64c14);
  v1->set_f_8(0x42f1aa0c);
  v1->set_f_28(0x62);
  v1->set_f_14(s->substr(0, 18));
  v1->set_f_17(0x79ff83c5);
  v1->set_f_5(0x29ad);
  v1->set_f_18(0x878dcdf2f2df58d2);
  v1->set_f_26(0x3c5b6b85b4d2e3e8);
  Message1::M4::M19* v2 = v0->mutable_f_2();
  v2->set_f_3(0x4efbf56);
  v2->set_f_1(s->substr(0, 2));
  Message1::M4::M19::M73* v3_0 = v2->add_f_9();
  (void)v3_0;  // Suppresses clang-tidy.
  v2->set_f_0(0x17b3447);
  v0->set_f_0(0x24bd0f6);
  message->set_f_24(0x5215412);
  message->set_f_13(s->substr(0, 2));
  message->set_f_2(0xfcbdbdee18fa18e4);
  message->set_f_8(0x72);
  message->set_f_7(s->substr(0, 11));
  message->set_f_15(0x5fb5f547);
  Message1::M5* v4 = message->mutable_f_64();
  Message1::M5::M25* v5 = v4->mutable_f_5();
  Message1::M5::M25::M64* v6 = v5->mutable_f_5();
  (void)v6;  // Suppresses clang-tidy.
  v5->set_f_1(0xcb88978496459e5c);
  Message1::M5::M29* v7 = v4->mutable_f_8();
  v7->set_f_0(0xe37be);
  Message1::M5::M29::M59* v8 = v7->mutable_f_4();
  v8->set_f_1(true);
  Message1::M5::M18* v9_0 = v4->add_f_4();
  Message1::M5::M18::M82* v10_0 = v9_0->add_f_5();
  v10_0->set_f_0(0x55);
  v9_0->set_f_2(0x6c);
  v9_0->set_f_1(true);
  v9_0->set_f_0(0.639168);
  Message1::M5::M27* v11 = v4->mutable_f_7();
  Message1::M5::M27::M55* v12 = v11->mutable_f_3();
  v12->set_f_0(s->substr(0, 27));
  v4->set_f_0(0x1d);
  message->set_f_19(0x53);
  message->set_f_6(0.644629);
  message->set_f_26(0x5d985be5b6a308b3);
  message->set_f_16(s->substr(0, 2));
  Message1::M2* v13 = message->mutable_f_60();
  v13->set_f_0(s->substr(0, 6));
  Message1::M2::M37* v14 = v13->mutable_f_3();
  v14->set_f_0(0xc04c88b);
  v14->set_f_3(0xf7bf1fd);
  v14->set_f_2(0x1ce3);
  Message1::M2::M37::M60* v15 = v14->mutable_f_8();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_1(0x1e17d01f);
  Message1::M2::M46* v16 = v13->mutable_f_5();
  v16->set_f_0(0.924637);
  v16->set_f_3(0x1816c54623c619c4);
  Message1::M2::M46::M63* v17_0 = v16->add_f_11();
  v17_0->set_f_1(s->substr(0, 62));
  v17_0->set_f_2(s->substr(0, 17));
  Message1::M2::M46::M79* v18_0 = v16->add_f_12();
  v18_0->set_f_0(0.893522);
  v16->set_f_4(s->substr(0, 29));
  v16->set_f_2(0xba9bc03);
  message->set_f_12(0x5d32a42a915fa550);
  Message1::M3* v19 = message->mutable_f_62();
  Message1::M3::M44* v20 = v19->mutable_f_8();
  Message1::M3::M44::M70* v21 = v20->mutable_f_2();
  v21->set_f_0(s->substr(0, 129));
  v20->set_f_0(0.521945);
  Message1::M3::E3 array_0[22] = {
      Message1::M3::E3_CONST_2, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_4, Message1::M3::E3_CONST_1,
      Message1::M3::E3_CONST_3, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_5,
      Message1::M3::E3_CONST_1, Message1::M3::E3_CONST_4,
      Message1::M3::E3_CONST_4, Message1::M3::E3_CONST_3,
      Message1::M3::E3_CONST_5, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_4, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_3, Message1::M3::E3_CONST_2,
      Message1::M3::E3_CONST_2, Message1::M3::E3_CONST_3,
  };
  for (auto v : array_0) {
    v19->add_f_0(v);
  }
  Message1::M3::M33* v22_0 = v19->add_f_5();
  v22_0->set_f_3(false);
  v22_0->set_f_2(0x3fdaa40af26a926f);
  v22_0->set_f_1(0x14e6);
  Message1::M3::M33::M78* v23 = v22_0->mutable_f_9();
  v23->set_f_0(0x7c);
  Message1::M1* v24 = message->mutable_f_58();
  Message1::M1::M14* v25_0 = v24->add_f_3();
  (void)v25_0;  // Suppresses clang-tidy.
  Message1::M1::M47* v26 = v24->mutable_f_4();
  v26->set_f_0(Message1::M1::M47::E7_CONST_1);
  v26->set_f_2(0x99b5a40);
  v24->set_f_0(0x7ed74ca602cca8a3);
  message->set_f_18(0x37aee774);
  Message1::M10* v27 = message->mutable_f_72();
  Message1::M10::M28* v28 = v27->mutable_f_6();
  v28->set_f_2(s->substr(0, 31));
  v28->set_f_0(0x8aec320b2b9f6e3c);
  Message1::M10::M28::M71* v29 = v28->mutable_f_8();
  v29->set_f_0(0x37);
  v28->set_f_1(0xdf48e4558eec76b);
  v28->set_f_3(0.117411);
  v27->set_f_2(0xa6fd64ea51f08781);
  v27->set_f_0(0xb87833d5a9c034a9);
  Message1::M11* v30 = message->mutable_f_75();
  Message1::M11::M30* v31 = v30->mutable_f_13();
  v31->set_f_1(0x34);
  Message1::M11::M30::M67* v32 = v31->mutable_f_4();
  (void)v32;  // Suppresses clang-tidy.
  v31->set_f_0(true);
  v30->set_f_2(0x6428d658);
  Message1::M11::M45* v33 = v30->mutable_f_15();
  v33->set_f_0(false);
  v30->set_f_0(0x405e0c5b);
  v30->set_f_1(0x4f);
  message->set_f_29(0x2b27c);
  Message1::M13* v34 = message->mutable_f_79();
  Message1::M13::M32* v35 = v34->mutable_f_3();
  v35->set_f_1(s->substr(0, 8));
  v35->set_f_4(0x7155937e2661c6ec);
  v35->set_f_3(0x79e7d);
  v35->set_f_2(true);
  v35->set_f_0(0x47);
  Message1::M13::M39* v36 = v34->mutable_f_8();
  v36->set_f_0(0x191e2b6d);
  Message1::M13::M39::M61* v37 = v36->mutable_f_11();
  v37->set_f_0(0x64518fee36baf51d);
  Message1::M13::M39::M57* v38 = v36->mutable_f_9();
  v38->set_f_0(s->substr(0, 4));
  Message1::M13::M39::M83* v39 = v36->mutable_f_12();
  v39->set_f_14(s->substr(0, 24));
  v39->set_f_7(s->substr(0, 3));
  v39->set_f_0(0x94acd411cc0b3599);
  v39->set_f_13(s->substr(0, 14));
  v39->set_f_9(0x31c017f965eae965);
  v39->set_f_10(0x5c6e986529afad9e);
  v39->set_f_1(s->substr(0, 2));
  v39->set_f_4(s->substr(0, 21));
  v39->set_f_6(false);
  v39->set_f_12(s->substr(0, 6));
  v39->set_f_3(0x15);
  v36->set_f_3(false);
  v36->set_f_2(0xfb0215a);
  v36->set_f_1(0x26);
  v34->set_f_0(0x32e);
  Message1::M13::M35* v40 = v34->mutable_f_4();
  (void)v40;  // Suppresses clang-tidy.
  message->set_f_14(0x1a544bd5f1c3220);
  message->set_f_9(s->substr(0, 6));
  message->set_f_3(0x15ece3b);
  message->set_f_4(false);
  message->set_f_5(0xb1a17e4);
  message->add_f_17(Message1::E2_CONST_4);
  message->set_f_25(s->substr(0, 95));
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
}  // namespace fleetbench::rpc::P7::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
