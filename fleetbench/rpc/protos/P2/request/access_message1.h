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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message1.pb.h"

namespace fleetbench::rpc::P2::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_18(0x4f9d4d98fdac4826);
  message->set_f_26(Message1::E4_CONST_1);
  message->set_f_20(s->substr(0, 15));
  message->set_f_6(s->substr(0, 1));
  message->set_f_13(false);
  Message1::M1* v0 = message->mutable_f_50();
  Message1::M1::M18* v1 = v0->mutable_f_12();
  v1->set_f_1(s->substr(0, 5));
  v1->set_f_2(0.538056);
  v1->set_f_3(0x7a);
  v0->set_f_1(0xe7bb041);
  Message1::M1::M22* v2_0 = v0->add_f_15();
  v2_0->set_f_0(s->substr(0, 32));
  v2_0->set_f_1(0.514469);
  v0->set_f_2(s->substr(0, 34));
  Message1::M1::M23* v3_0 = v0->add_f_16();
  v3_0->set_f_0(false);
  v0->set_f_0(0x5f045d81351066e4);
  v0->set_f_3(0.956093);
  message->set_f_9(0xa9ce31d2f3b14f5);
  message->set_f_7(s->substr(0, 1365));
  message->set_f_29(0x311c0d0669dee6bb);
  message->add_f_15(Message1::E2_CONST_2);
  message->set_f_24(true);
  message->set_f_17(Message1::E3_CONST_3);
  message->set_f_0(s->substr(0, 32));
  message->set_f_16(0x7cdee4db8648ada0);
  message->set_f_21(0x31b7b8e0899c1de3);
  message->set_f_11(0x50e28);
  message->set_f_1(0x4703ffc19dff1f60);
  Message1::M2* v4_0 = message->add_f_53();
  Message1::M2::M10* v5_0 = v4_0->add_f_7();
  v5_0->set_f_3(0x6b3141b3);
  v5_0->set_f_2(0x4a0ebe8652eb9d44);
  v5_0->set_f_5(s->substr(0, 121));
  v5_0->set_f_1(s->substr(0, 29));
  v5_0->set_f_0(false);
  v5_0->set_f_4(0.019736);
  Message1::M2::M16* v6 = v4_0->mutable_f_10();
  v6->set_f_1(0x6b7ca0a587b9e083);
  v6->set_f_0(0x40);
  Message1::M2::M16::M32* v7 = v6->mutable_f_6();
  Message1::M2::M16::M32::M48* v8_0 = v7->add_f_8();
  v8_0->set_f_0(s->substr(0, 14));
  v7->set_f_0(0xba3d9);
  v7->set_f_1(0x6f);
  v7->add_f_3(Message1::M2::M16::M32::E9_CONST_1);
  v7->set_f_2(s->substr(0, 30));
  v4_0->set_f_1(s->substr(0, 17));
  Message1::M2::M25* v9_0 = v4_0->add_f_12();
  v9_0->set_f_1(0x243cb8224984ae5);
  Message1::M2::M25::M27* v10 = v9_0->mutable_f_6();
  v10->set_f_6(s->substr(0, 8));
  v10->set_f_5(false);
  v10->set_f_3(0x2f83d6d9aac226cb);
  v10->set_f_2(s->substr(0, 774));
  v10->set_f_4(s->substr(0, 3));
  v10->set_f_1(false);
  v10->set_f_0(0x38571961);
  v9_0->set_f_0(0x74d054912d2c76c1);
  v9_0->set_f_2(0xc7fd2b6);
  v4_0->set_f_2(0x72c59bd322ec11a2);
  v4_0->set_f_0(s->substr(0, 23));
  Message1::M2::M11* v11_0 = v4_0->add_f_9();
  v11_0->set_f_0(0xcdf673a);
  Message1::M2::M21* v12 = v4_0->mutable_f_11();
  Message1::M2::M21::M35* v13 = v12->mutable_f_4();
  v13->set_f_0(0x340b46a5e7cabf50);
  Message1::M2::M21::M35::M45* v14 = v13->mutable_f_2();
  v14->set_f_0(0x16da7a2d);
  v14->set_f_1(s->substr(0, 2));
  Message1::M2::M21::M35::M47* v15 = v13->mutable_f_3();
  v15->set_f_0(0xd2ca90af0c41e9d);
  v12->set_f_0(0x7881a8f16b84c5bd);
  Message1::M2::M21::M33* v16 = v12->mutable_f_3();
  v16->set_f_7(s->substr(0, 8));
  v16->set_f_3(0x6909eb74209ec32);
  Message1::M2::M21::M33::E10 array_1[20] = {
      Message1::M2::M21::M33::E10_CONST_3, Message1::M2::M21::M33::E10_CONST_2,
      Message1::M2::M21::M33::E10_CONST_1, Message1::M2::M21::M33::E10_CONST_2,
      Message1::M2::M21::M33::E10_CONST_3, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_4, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_5, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_3, Message1::M2::M21::M33::E10_CONST_3,
      Message1::M2::M21::M33::E10_CONST_2, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_4, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_5, Message1::M2::M21::M33::E10_CONST_1,
      Message1::M2::M21::M33::E10_CONST_5, Message1::M2::M21::M33::E10_CONST_5,
  };
  for (auto v : array_1) {
    v16->add_f_1(v);
  }
  v16->set_f_5(0xbb0);
  Message1::M2::M21::M33::M36* v17 = v16->mutable_f_12();
  (void)v17;  // Suppresses clang-tidy.
  v16->set_f_2(s->substr(0, 24));
  v16->set_f_4(true);
  message->set_f_5(s->substr(0, 20));
  message->set_f_10(0x401a1590);
  message->set_f_12(s->substr(0, 22));
  message->set_f_28(0xd958ec);
  message->set_f_19(0x7c247c77938af8e8);
  message->set_f_4(0x2108);
  message->add_f_3(Message1::E1_CONST_1);
  message->set_f_27(false);
  Message1::M4* v18_0 = message->add_f_57();
  Message1::M4::M19* v19_0 = v18_0->add_f_17();
  v19_0->set_f_0(s->substr(0, 7));
  v18_0->set_f_0(0x8983dd6);
  Message1::M4::M8* v20 = v18_0->mutable_f_13();
  (void)v20;  // Suppresses clang-tidy.
  v18_0->set_f_6(0x156fc092cee67d0a);
  v18_0->set_f_7(0x4a71246b972b5ee6);
  v18_0->set_f_4(0x229ea43eaf69de57);
  Message1::M4::M13* v21 = v18_0->mutable_f_14();
  v21->set_f_4(0x14);
  v21->set_f_3(0x5d4f4ab60c0f7f9f);
  v21->set_f_1(0x7803cd02);
  v21->set_f_0(0x711cea3ba2723d7a);
  v18_0->set_f_1(0x2a4cd2211dd96588);
  v18_0->set_f_3(s->substr(0, 93));
  v18_0->set_f_2(0x63a38937);
  v18_0->set_f_5(0x1f5fc5);
  Message1::M3* v22 = message->mutable_f_55();
  Message1::M3::M24* v23 = v22->mutable_f_8();
  v23->set_f_28(true);
  v23->set_f_29(0x9c14efc);
  v23->set_f_7(0x42);
  v23->set_f_18(s->substr(0, 31));
  v23->set_f_12(false);
  v23->set_f_3(0x9b0a7b8);
  v23->set_f_20(0x2a0d);
  v23->set_f_10(s->substr(0, 52));
  v23->set_f_15(0x2b);
  v23->set_f_17(0x781469a76be2043f);
  v23->set_f_0(0x5000f91f43f640ba);
  v23->set_f_8(0x2e6e5b73b850ea11);
  v23->set_f_27(Message1::M3::M24::E7_CONST_1);
  v23->set_f_1(0x6384bc3b7e1f146e);
  v23->set_f_6(false);
  v23->set_f_22(false);
  v23->set_f_19(0x10c976);
  v23->set_f_11(0x44);
  v23->set_f_26(0.396848);
  v23->set_f_25(0x74bc3df00e7fc1d6);
  v23->set_f_14(0x69b5c7e379d6a16a);
  v23->set_f_4(s->substr(0, 6));
  v23->set_f_24(s->substr(0, 7));
  v23->set_f_5(0x7a);
  v23->set_f_13(0x102c4acf189d0);
  v23->set_f_16(0x5a6be1fed0f1fea7);
  v23->set_f_9(0xb8ea846);
  Message1::M3::M5* v24 = v22->mutable_f_3();
  v24->set_f_1(s->substr(0, 4));
  v24->set_f_2(0x293e1c308200a2e9);
  v24->set_f_3(0x205803d4);
  v24->set_f_0(0x7b8e9ecd);
  Message1::M3::M9* v25 = v22->mutable_f_4();
  v25->set_f_0(0x2f293662b12c308f);
  Message1::M3::M15* v26_0 = v22->add_f_6();
  v26_0->set_f_1(s->substr(0, 25));
  v22->set_f_0(Message1::M3::E5_CONST_1);
  Message1::M3::M12* v27_0 = v22->add_f_5();
  v27_0->set_f_1(0x4b0192444ebf2694);
  v27_0->set_f_4(0x2bca63dcb4a625c9);
  v27_0->set_f_2(0.889487);
  v27_0->set_f_0(0x4);
  Message1::M3::M12::M34* v28 = v27_0->mutable_f_9();
  v28->set_f_0(0x706a75dfc75e578);
  Message1::M3::M12::M34::M46* v29 = v28->mutable_f_5();
  v29->set_f_0(0x5a2bddbd61041de9);
  Message1::M3::M12::M34::M37* v30 = v28->mutable_f_3();
  v30->set_f_0(0x5816f1e8709da53a);
  Message1::M3::M17* v31 = v22->mutable_f_7();
  v31->set_f_0(s->substr(0, 172));
  message->set_f_22(s->substr(0, 454));
  message->set_f_25(s->substr(0, 23));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_20(s->substr(0, 23));
  message->set_f_14(0x5c6891d886e1ed40);
  message->set_f_17(Message1::E3_CONST_3);
  message->set_f_21(0x476f9b5a6d17e062);
  message->set_f_2(true);
  Message1::M4* v0_0 = message->add_f_57();
  v0_0->set_f_8(s->substr(0, 28));
  v0_0->set_f_5(0x1f7286);
  v0_0->set_f_4(0x58374c0070429a19);
  Message1::M4::M8* v1 = v0_0->mutable_f_13();
  (void)v1;  // Suppresses clang-tidy.
  v0_0->set_f_3(s->substr(0, 429));
  v0_0->set_f_2(0x41ef8930);
  v0_0->set_f_7(0x40b22efb7ca7cf57);
  v0_0->set_f_6(0x41421b2f18b1f8f5);
  Message1::M4::M19* v2_0 = v0_0->add_f_17();
  v2_0->set_f_0(s->substr(0, 3));
  Message1::M4::M14* v3 = v0_0->mutable_f_15();
  v3->set_f_0(0x6ca047ab7dab38b);
  v3->set_f_1(false);
  v3->set_f_2(0x2f75520366e8bf7d);
  Message1::M4::M13* v4 = v0_0->mutable_f_14();
  v4->set_f_1(0x4f09d3e5);
  v4->set_f_4(0xa0281bc);
  v4->set_f_0(0x2e5c785eca1e5048);
  v4->set_f_2(s->substr(0, 22));
  v4->set_f_3(0x7c05c73a2d2afe18);
  message->set_f_7(s->substr(0, 16148));
  message->set_f_8(0x3f0622aae33009b3);
  message->set_f_23(0x9da16fa);
  message->set_f_27(false);
  message->set_f_5(s->substr(0, 18));
  message->set_f_24(false);
  message->set_f_29(0x39a722c67997683f);
  message->set_f_0(s->substr(0, 47));
  message->set_f_11(0x26);
  message->add_f_3(Message1::E1_CONST_5);
  message->add_f_3(Message1::E1_CONST_3);
  Message1::M1* v5 = message->mutable_f_50();
  Message1::M1::M7* v6 = v5->mutable_f_11();
  v6->add_f_0(Message1::M1::M7::E6_CONST_4);
  v6->add_f_0(Message1::M1::M7::E6_CONST_1);
  Message1::M1::M7::M28* v7_0 = v6->add_f_3();
  v7_0->set_f_2(0xff5);
  Message1::M1::M20* v8 = v5->mutable_f_13();
  v8->set_f_0(0x12809ec3);
  v5->set_f_0(0x662abd19220a584f);
  Message1::M1::M22* v9_0 = v5->add_f_15();
  v9_0->set_f_1(0.162801);
  v9_0->set_f_0(s->substr(0, 85));
  Message1::M1::M23* v10_0 = v5->add_f_16();
  v10_0->set_f_0(false);
  Message1::M1::M18* v11 = v5->mutable_f_12();
  v11->set_f_3(0x74);
  v11->set_f_1(s->substr(0, 29));
  v11->set_f_2(0.870328);
  v5->set_f_3(0.702028);
  v5->set_f_1(0x38);
  v5->set_f_2(s->substr(0, 437));
  message->set_f_10(0x20411d15);
  message->set_f_9(0x2c883f7eca55376e);
  message->set_f_1(0x6a68bc6476a72bbf);
  Message1::M3* v12 = message->mutable_f_55();
  Message1::M3::M15* v13_0 = v12->add_f_6();
  v13_0->set_f_0(0x1a);
  Message1::M3::M17* v14 = v12->mutable_f_7();
  v14->set_f_0(s->substr(0, 17));
  Message1::M3::M12* v15_0 = v12->add_f_5();
  v15_0->set_f_1(0x45d028cf0521d496);
  v15_0->set_f_0(0xaa4854e);
  Message1::M3::M12::M26* v16 = v15_0->mutable_f_8();
  Message1::M3::M12::M26::M41* v17 = v16->mutable_f_3();
  v17->set_f_0(s->substr(0, 11));
  v16->set_f_0(0x39fa591db8ca9063);
  v15_0->set_f_3(s->substr(0, 27));
  v15_0->set_f_2(0.092519);
  Message1::M3::M12::M34* v18 = v15_0->mutable_f_9();
  v18->set_f_0(0x1628c48e659177c0);
  Message1::M3::M12::M34::M46* v19 = v18->mutable_f_5();
  v19->set_f_0(0x70622f4643bfde00);
  Message1::M3::M12::M34::M37* v20 = v18->mutable_f_3();
  v20->set_f_0(0x637b154cac3ee785);
  Message1::M3::M24* v21 = v12->mutable_f_8();
  v21->set_f_8(0x5a8792edbb72b9ab);
  v21->set_f_1(0x23a6a9fbb764ac2e);
  v21->set_f_3(0xef074eb);
  v21->set_f_19(0x21);
  v21->set_f_14(0x1ddff80a4aed7c0c);
  v21->set_f_11(0x1a20ab);
  v21->set_f_18(s->substr(0, 27));
  v21->set_f_20(0x1d);
  v21->set_f_15(0xe);
  v21->set_f_5(0xe55ed60);
  v21->set_f_22(false);
  v21->set_f_7(0x20);
  v21->set_f_24(s->substr(0, 21));
  v21->set_f_10(s->substr(0, 32));
  v21->set_f_27(Message1::M3::M24::E7_CONST_3);
  v21->set_f_4(s->substr(0, 5));
  v21->set_f_2(s->substr(0, 19));
  v21->set_f_6(true);
  v21->set_f_0(0x274ae35558ee5fb);
  v21->set_f_23(true);
  v21->set_f_21(s->substr(0, 1));
  v21->set_f_16(0x3fe7460aa7eda7f9);
  v21->set_f_9(0x4968ef8);
  v21->set_f_29(0x15);
  v21->set_f_25(0x72ef0f9295adf7fa);
  v21->set_f_13(0x2c0f258dc);
  v21->set_f_30(s->substr(0, 21));
  Message1::M3::M9* v22 = v12->mutable_f_4();
  v22->set_f_0(0x27c1bae62b943669);
  v12->set_f_0(Message1::M3::E5_CONST_2);
  Message1::M2* v23_0 = message->add_f_53();
  v23_0->set_f_1(s->substr(0, 28));
  Message1::M2::M21* v24 = v23_0->mutable_f_11();
  Message1::M2::M21::M33* v25 = v24->mutable_f_3();
  v25->set_f_2(s->substr(0, 37));
  v25->add_f_1(Message1::M2::M21::M33::E10_CONST_5);
  v25->set_f_6(0x5b37658351fdc227);
  v25->set_f_0(s->substr(0, 75));
  Message1::M2::M21::M33::M36* v26 = v25->mutable_f_12();
  (void)v26;  // Suppresses clang-tidy.
  v25->set_f_3(0x59ca12ac3aa7e421);
  v25->set_f_7(s->substr(0, 32));
  v25->set_f_5(0x3f);
  v24->set_f_0(0x359df6c307d845fd);
  Message1::M2::M21::M35* v27 = v24->mutable_f_4();
  Message1::M2::M21::M35::M45* v28 = v27->mutable_f_2();
  v28->set_f_0(0x68e3a9d7);
  v28->set_f_1(s->substr(0, 10));
  v27->set_f_0(0x4c1a2e38ee945100);
  Message1::M2::M11* v29_0 = v23_0->add_f_9();
  v29_0->set_f_0(0x5);
  Message1::M2::M6* v30 = v23_0->mutable_f_6();
  v30->set_f_1(s->substr(0, 6));
  v30->set_f_3(0.412975);
  Message1::M2::M6::M30* v31_0 = v30->add_f_8();
  v31_0->set_f_0(0.540049);
  Message1::M2::M6::M29* v32 = v30->mutable_f_6();
  Message1::M2::M6::M29::M50* v33 = v32->mutable_f_8();
  Message1::M2::M6::M29::M50::M57* v34 = v33->mutable_f_5();
  (void)v34;  // Suppresses clang-tidy.
  v33->set_f_0(0x69b5ac108b19d4f3);
  Message1::M2::M6::M29::M50::M54* v35 = v33->mutable_f_4();
  v35->set_f_0(0x32b9ac2f23e65965);
  Message1::M2::M6::M29::M50::M58* v36 = v33->mutable_f_8();
  v36->set_f_0(0x46d6e10c2e34b27e);
  Message1::M2::M6::M29::M49* v37 = v32->mutable_f_7();
  (void)v37;  // Suppresses clang-tidy.
  v32->set_f_0(s->substr(0, 8));
  Message1::M2::M6::M29::M40* v38_0 = v32->add_f_5();
  v38_0->set_f_0(0x19384836);
  Message1::M2::M6::M29::M40::M55* v39_0 = v38_0->add_f_5();
  Message1::M2::M6::M29::M40::M55::M59* v40 = v39_0->mutable_f_6();
  v40->set_f_1(0x74337a913f469bcf);
  v40->set_f_0(0x2802b32);
  v39_0->set_f_0(0xd578174898010ab);
  Message1::M2::M6::M29::M42* v41 = v32->mutable_f_6();
  v41->set_f_0(0xc5b5e);
  v32->set_f_1(Message1::M2::M6::M29::E8_CONST_2);
  Message1::M2::M6::M31* v42 = v30->mutable_f_9();
  Message1::M2::M6::M31::M51* v43_0 = v42->add_f_3();
  v43_0->set_f_2(0x24b0);
  v43_0->set_f_0(s->substr(0, 21));
  v42->set_f_0(s->substr(0, 509));
  v30->set_f_0(s->substr(0, 3));
  v30->set_f_2(0x53);
  Message1::M2::M16* v44 = v23_0->mutable_f_10();
  v44->set_f_0(0x47);
  v44->set_f_1(0x3d509874166b2471);
  Message1::M2::M10* v45_0 = v23_0->add_f_7();
  v45_0->set_f_3(0x473df8d3);
  v45_0->set_f_1(s->substr(0, 49));
  v45_0->set_f_6(s->substr(0, 116));
  v45_0->set_f_2(0x8a7c109c099b966);
  v45_0->set_f_0(true);
  v45_0->set_f_4(0.801440);
  v23_0->set_f_2(0x6ee54574b2a89673);
  v23_0->set_f_0(s->substr(0, 21));
  Message1::M2::M25* v46_0 = v23_0->add_f_12();
  v46_0->set_f_1(0x4c1fb42dcdd24c2b);
  v46_0->set_f_0(0x5331f1f69b6255ef);
  Message1::M2::M25::M27* v47 = v46_0->mutable_f_6();
  v47->set_f_6(s->substr(0, 28));
  v47->set_f_2(s->substr(0, 271));
  v47->set_f_0(0x86ca125);
  v47->set_f_4(s->substr(0, 1));
  message->set_f_26(Message1::E4_CONST_2);
  message->set_f_6(s->substr(0, 14));
  message->set_f_19(0x18873a76767f5b55);
  message->set_f_16(0x2338adb01f33f5c2);
  message->add_f_15(Message1::E2_CONST_4);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_19(0x5bc0b463c0ea296b);
  message->set_f_10(0x3f097945);
  message->set_f_1(0x345a3a62ae1b999c);
  message->set_f_8(0x2df6df82f850ab55);
  Message1::M2* v0_0 = message->add_f_53();
  Message1::M2::M11* v1_0 = v0_0->add_f_9();
  (void)v1_0;  // Suppresses clang-tidy.
  v0_0->set_f_1(s->substr(0, 20));
  v0_0->set_f_0(s->substr(0, 7));
  v0_0->set_f_2(0x4f7b5b04b7bc6af4);
  Message1::M2::M21* v2 = v0_0->mutable_f_11();
  Message1::M2::M21::M33* v3 = v2->mutable_f_3();
  v3->set_f_2(s->substr(0, 22));
  v3->set_f_0(s->substr(0, 1));
  Message1::M2::M21::M33::M44* v4 = v3->mutable_f_14();
  (void)v4;  // Suppresses clang-tidy.
  Message1::M2::M21::M33::M36* v5 = v3->mutable_f_12();
  v5->set_f_0(0x2b50817);
  v3->add_f_1(Message1::M2::M21::M33::E10_CONST_3);
  v3->set_f_3(0x6c5991347c7e12fb);
  v3->set_f_4(true);
  v3->set_f_5(0x3ba3);
  v3->set_f_6(0x7b2d6a5684eddeb);
  v2->set_f_0(0x591301a777a84b88);
  Message1::M2::M21::M35* v6 = v2->mutable_f_4();
  v6->set_f_0(0x66c4e27e58f8eb69);
  Message1::M2::M21::M35::M47* v7 = v6->mutable_f_3();
  v7->set_f_0(0x34f202ce016777fa);
  Message1::M2::M21::M35::M45* v8 = v6->mutable_f_2();
  v8->set_f_0(0x287dfb91);
  v8->set_f_1(s->substr(0, 30));
  Message1::M2::M6* v9 = v0_0->mutable_f_6();
  v9->set_f_3(0.192668);
  v9->set_f_0(s->substr(0, 66));
  Message1::M2::M6::M30* v10_0 = v9->add_f_8();
  v10_0->set_f_0(0.343487);
  Message1::M2::M6::M29* v11 = v9->mutable_f_6();
  Message1::M2::M6::M29::M50* v12 = v11->mutable_f_8();
  Message1::M2::M6::M29::M50::M58* v13 = v12->mutable_f_8();
  v13->set_f_0(0x6c777ca4d4acef38);
  Message1::M2::M6::M29::M50::M54* v14 = v12->mutable_f_4();
  v14->set_f_0(0x3949b701a5632acb);
  Message1::M2::M6::M29::M50::M57* v15 = v12->mutable_f_5();
  v15->set_f_0(0xe7272b);
  v11->set_f_1(Message1::M2::M6::M29::E8_CONST_3);
  v11->set_f_2(0x1d1a428);
  v11->set_f_0(s->substr(0, 31));
  Message1::M2::M6::M29::M49* v16 = v11->mutable_f_7();
  v16->set_f_0(0x38c1502f0ffa417a);
  Message1::M2::M6::M29::M42* v17 = v11->mutable_f_6();
  v17->set_f_0(0x2ab3319);
  Message1::M2::M6::M29::M42::M52* v18_0 = v17->add_f_2();
  v18_0->set_f_0(s->substr(0, 6));
  Message1::M2::M6::M29::M40* v19_0 = v11->add_f_5();
  v19_0->set_f_0(0x8bed748);
  Message1::M2::M6::M29::M40::M55* v20_0 = v19_0->add_f_5();
  Message1::M2::M6::M29::M40::M55::M59* v21 = v20_0->mutable_f_6();
  v21->set_f_1(0x264888c284d67c79);
  v21->set_f_0(0xe01608e);
  v20_0->set_f_0(0x7e2665413f65809a);
  Message1::M2::M6::M31* v22 = v9->mutable_f_9();
  v22->set_f_0(s->substr(0, 5));
  Message1::M2::M6::M31::M51* v23_0 = v22->add_f_3();
  Message1::M2::M6::M31::M51::E12 array_0[20] = {
      Message1::M2::M6::M31::M51::E12_CONST_5,
      Message1::M2::M6::M31::M51::E12_CONST_2,
      Message1::M2::M6::M31::M51::E12_CONST_2,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_1,
      Message1::M2::M6::M31::M51::E12_CONST_5,
      Message1::M2::M6::M31::M51::E12_CONST_2,
      Message1::M2::M6::M31::M51::E12_CONST_5,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_3,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_1,
      Message1::M2::M6::M31::M51::E12_CONST_1,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_2,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_4,
      Message1::M2::M6::M31::M51::E12_CONST_1,
  };
  for (auto v : array_0) {
    v23_0->add_f_3(v);
  }
  v23_0->set_f_0(s->substr(0, 1));
  v23_0->set_f_2(0x38);
  v9->set_f_2(0x2b);
  Message1::M2::M10* v24_0 = v0_0->add_f_7();
  v24_0->set_f_2(0x2da954983f619a98);
  v24_0->set_f_1(s->substr(0, 7));
  v24_0->set_f_5(s->substr(0, 20));
  v24_0->set_f_4(0.594755);
  v24_0->set_f_0(false);
  v24_0->set_f_6(s->substr(0, 27));
  message->set_f_23(0x750772b);
  message->set_f_28(0x4e);
  message->set_f_14(0x1dbf55faea5e9273);
  Message1::M3* v25 = message->mutable_f_55();
  v25->set_f_0(Message1::M3::E5_CONST_2);
  Message1::M3::M24* v26 = v25->mutable_f_8();
  v26->set_f_14(0x1fd0e7112b950d0d);
  v26->set_f_8(0x37bd115121b16053);
  v26->set_f_11(0x1fb378);
  v26->set_f_27(Message1::M3::M24::E7_CONST_3);
  v26->set_f_25(0x4d1fa4900ff580ee);
  v26->set_f_3(0xcd944e3);
  v26->set_f_18(s->substr(0, 44));
  v26->set_f_7(0x3fb2);
  v26->set_f_17(0x20ad0e97d85af54f);
  v26->set_f_13(0x17);
  v26->set_f_9(0xbda);
  v26->set_f_12(false);
  v26->set_f_4(s->substr(0, 8));
  v26->set_f_23(true);
  v26->set_f_0(0x4f9dbab8062543dc);
  v26->set_f_29(0x10a3);
  v26->set_f_2(s->substr(0, 30));
  v26->set_f_28(true);
  v26->set_f_22(true);
  v26->set_f_20(0x6d);
  v26->set_f_5(0x45);
  v26->set_f_26(0.910429);
  v26->set_f_10(s->substr(0, 3));
  v26->set_f_21(s->substr(0, 2));
  v26->set_f_15(0x188f);
  v26->set_f_19(0x1970896);
  v26->set_f_1(0x7b82dd8685cee89e);
  v26->set_f_16(0x2a90002d3ce04061);
  Message1::M3::M17* v27 = v25->mutable_f_7();
  v27->set_f_0(s->substr(0, 56));
  Message1::M3::M15* v28_0 = v25->add_f_6();
  v28_0->set_f_1(s->substr(0, 18));
  v28_0->set_f_0(0x59d0a);
  Message1::M3::M5* v29 = v25->mutable_f_3();
  v29->set_f_1(s->substr(0, 12));
  v29->set_f_0(0x3c5f1d0a);
  v29->set_f_3(0x2bd8a56f);
  message->set_f_0(s->substr(0, 417));
  message->set_f_25(s->substr(0, 4));
  message->set_f_27(true);
  message->set_f_24(true);
  message->set_f_20(s->substr(0, 9));
  message->set_f_4(0x4e);
  message->set_f_18(0x34947bb9ac0d3d06);
  message->set_f_29(0x55a51af40945ae41);
  message->set_f_12(s->substr(0, 24));
  message->set_f_2(false);
  message->set_f_9(0x4b7d97a8173b3c2d);
  message->set_f_13(false);
  message->set_f_26(Message1::E4_CONST_1);
  message->set_f_21(0x7178d07c61241654);
  message->set_f_7(s->substr(0, 2154));
  message->set_f_11(0x2a);
  message->set_f_17(Message1::E3_CONST_1);
  message->add_f_3(Message1::E1_CONST_1);
  Message1::M4* v30_0 = message->add_f_57();
  v30_0->set_f_3(s->substr(0, 20));
  v30_0->set_f_8(s->substr(0, 31));
  v30_0->set_f_1(0x70cbce39781324c7);
  v30_0->set_f_7(0x5cb15acfa52f9356);
  Message1::M4::M19* v31_0 = v30_0->add_f_17();
  (void)v31_0;  // Suppresses clang-tidy.
  Message1::M4::M8* v32 = v30_0->mutable_f_13();
  (void)v32;  // Suppresses clang-tidy.
  v30_0->set_f_4(0x25cbcd75c059838d);
  v30_0->set_f_6(0x311cb589ba314916);
  v30_0->set_f_2(0x285e3f2a);
  Message1::M4::M14* v33 = v30_0->mutable_f_15();
  v33->set_f_2(0x53d2299e98711fce);
  v33->set_f_0(0x73848f9ae6666f);
  Message1::M4::M13* v34 = v30_0->mutable_f_14();
  v34->set_f_3(0x7e47dd7c92a117e7);
  v34->set_f_0(0x97fef556feb8636);
  v34->set_f_2(s->substr(0, 6));
  v34->set_f_4(0x6f44bfc);
  v30_0->set_f_5(0xc720dae);
  v30_0->set_f_0(0x8f3a6db);
  message->set_f_16(0x2e039d1c3c9baa21);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_24(false);
  message->set_f_1(0x197329295ca419d1);
  message->set_f_16(0x77cb8f3eb26b1ddc);
  message->add_f_15(Message1::E2_CONST_5);
  message->set_f_23(0x22);
  message->set_f_9(0x20247bf98745d76d);
  Message1::M1* v0 = message->mutable_f_50();
  v0->set_f_3(0.701991);
  v0->set_f_0(0xc032cd384363255);
  Message1::M1::M18* v1 = v0->mutable_f_12();
  v1->set_f_2(0.017816);
  v1->set_f_0(false);
  v1->set_f_3(0x2ff4);
  v1->set_f_1(s->substr(0, 2));
  Message1::M1::M23* v2_0 = v0->add_f_16();
  v2_0->set_f_0(true);
  Message1::M1::M22* v3_0 = v0->add_f_15();
  v3_0->set_f_0(s->substr(0, 49));
  Message1::M1::M7* v4 = v0->mutable_f_11();
  Message1::M1::M7::M28* v5_0 = v4->add_f_3();
  v5_0->set_f_0(s->substr(0, 8));
  v5_0->set_f_1(s->substr(0, 421));
  v5_0->set_f_2(0xd68b3ab);
  v4->add_f_0(Message1::M1::M7::E6_CONST_3);
  v4->add_f_0(Message1::M1::M7::E6_CONST_3);
  v0->set_f_1(0x12);
  v0->set_f_2(s->substr(0, 2));
  Message1::M1::M20* v6 = v0->mutable_f_13();
  v6->set_f_0(0x32c6545e);
  message->set_f_11(0xf2e12);
  message->set_f_28(0xe24e2c0);
  message->set_f_22(s->substr(0, 3299));
  message->set_f_20(s->substr(0, 30));
  message->set_f_29(0x55fcca4b465db6ff);
  message->set_f_19(0x2e6cd5a3bfb471d1);
  message->set_f_6(s->substr(0, 102));
  message->set_f_13(false);
  message->set_f_10(0x32ff6425);
  message->set_f_12(s->substr(0, 8));
  message->set_f_21(0x6fa64b95d9174199);
  Message1::M2* v7_0 = message->add_f_53();
  v7_0->set_f_0(s->substr(0, 207));
  Message1::M2::M21* v8 = v7_0->mutable_f_11();
  v8->set_f_0(0x1cf72e389bd3e245);
  Message1::M2::M21::M33* v9 = v8->mutable_f_3();
  v9->set_f_5(0x3e);
  Message1::M2::M21::M33::M44* v10 = v9->mutable_f_14();
  v10->set_f_0(Message1::M2::M21::M33::M44::E11_CONST_5);
  Message1::M2::M21::M33::M36* v11 = v9->mutable_f_12();
  v11->set_f_0(0x71cda);
  v9->set_f_6(0x6fc61f56d86bf25);
  v9->set_f_3(0x591bed3a19e208cb);
  v9->set_f_4(true);
  v9->add_f_1(Message1::M2::M21::M33::E10_CONST_2);
  v9->set_f_0(s->substr(0, 7));
  v9->set_f_7(s->substr(0, 8));
  Message1::M2::M21::M35* v12 = v8->mutable_f_4();
  Message1::M2::M21::M35::M45* v13 = v12->mutable_f_2();
  v13->set_f_1(s->substr(0, 2));
  v13->set_f_0(0x3c9a7542);
  v12->set_f_0(0xaf6e005066b3e1);
  Message1::M2::M21::M35::M47* v14 = v12->mutable_f_3();
  v14->set_f_0(0x3fb27792493c87a8);
  Message1::M2::M11* v15_0 = v7_0->add_f_9();
  v15_0->set_f_0(0xdf32b21);
  Message1::M2::M10* v16_0 = v7_0->add_f_7();
  v16_0->set_f_0(true);
  v16_0->set_f_1(s->substr(0, 24));
  v16_0->set_f_2(0x749fceed425e56d);
  v16_0->set_f_3(0x2179feee);
  v16_0->set_f_4(0.678705);
  v16_0->set_f_5(s->substr(0, 4));
  v7_0->set_f_1(s->substr(0, 1));
  Message1::M2::M25* v17_0 = v7_0->add_f_12();
  v17_0->set_f_1(0x52ea3837ff9370e4);
  Message1::M2::M25::M27* v18 = v17_0->mutable_f_6();
  v18->set_f_0(0x7a1b569b);
  v18->set_f_3(0x6d99f13aca557272);
  v18->set_f_5(true);
  v18->set_f_2(s->substr(0, 32));
  v18->set_f_1(true);
  v18->set_f_6(s->substr(0, 18));
  v18->set_f_4(s->substr(0, 21));
  v17_0->set_f_2(0xc14d6ab);
  v17_0->set_f_0(0x2e11494dc2e4fb74);
  Message1::M2::M6* v19 = v7_0->mutable_f_6();
  v19->set_f_2(0x110e06b);
  v19->set_f_0(s->substr(0, 16));
  Message1::M2::M6::M30* v20_0 = v19->add_f_8();
  v20_0->set_f_0(0.168992);
  Message1::M2::M6::M31* v21 = v19->mutable_f_9();
  Message1::M2::M6::M31::M51* v22_0 = v21->add_f_3();
  v22_0->set_f_0(s->substr(0, 36));
  v22_0->set_f_1(true);
  v22_0->add_f_3(Message1::M2::M6::M31::M51::E12_CONST_3);
  v21->set_f_0(s->substr(0, 4));
  Message1::M2::M6::M29* v23 = v19->mutable_f_6();
  v23->set_f_2(0x1f0f20);
  Message1::M2::M6::M29::M49* v24 = v23->mutable_f_7();
  v24->set_f_0(0x780da612d40d599d);
  v23->set_f_0(s->substr(0, 3223));
  Message1::M2::M6::M29::M40* v25_0 = v23->add_f_5();
  Message1::M2::M6::M29::M40::M55* v26_0 = v25_0->add_f_5();
  v26_0->set_f_0(0x200aaaa50dd8831c);
  Message1::M2::M6::M29::M40::M55::M59* v27 = v26_0->mutable_f_6();
  v27->set_f_0(0x7b);
  v27->set_f_1(0x1aa5965603b7ff2c);
  v25_0->set_f_0(0x452f9f0d);
  Message1::M2::M6::M29::M42* v28 = v23->mutable_f_6();
  Message1::M2::M6::M29::M42::M52* v29_0 = v28->add_f_2();
  v29_0->set_f_0(s->substr(0, 219));
  v28->set_f_0(0x11a7);
  v23->set_f_1(Message1::M2::M6::M29::E8_CONST_4);
  v19->set_f_1(s->substr(0, 30));
  Message1::M3* v30 = message->mutable_f_55();
  Message1::M3::M12* v31_0 = v30->add_f_5();
  v31_0->set_f_4(0x24b1fc5cd591faf3);
  Message1::M3::M12::M26* v32 = v31_0->mutable_f_8();
  v32->set_f_0(0x11c8d38b31302726);
  v31_0->set_f_0(0x2f82);
  v31_0->set_f_3(s->substr(0, 3147));
  Message1::M3::M12::M34* v33 = v31_0->mutable_f_9();
  Message1::M3::M12::M34::M37* v34 = v33->mutable_f_3();
  (void)v34;  // Suppresses clang-tidy.
  v33->set_f_0(0x34b869d2aa2c46a0);
  v31_0->set_f_2(0.026809);
  Message1::M3::M24* v35 = v30->mutable_f_8();
  v35->set_f_10(s->substr(0, 23));
  v35->set_f_25(0x4ee1d43460432796);
  v35->set_f_17(0x30c7045fa4088886);
  v35->set_f_28(true);
  v35->set_f_27(Message1::M3::M24::E7_CONST_3);
  v35->set_f_11(0x1497b);
  v35->set_f_20(0x2c);
  v35->set_f_7(0x39a7);
  v35->set_f_21(s->substr(0, 5));
  v35->set_f_8(0x435fbcb9601bcd88);
  v35->set_f_15(0xc27bed4);
  v35->set_f_1(0x33b977028b5a54be);
  v35->set_f_9(0x9c268de);
  v35->set_f_3(0xa);
  v35->set_f_6(false);
  v35->set_f_2(s->substr(0, 278));
  v35->set_f_4(s->substr(0, 8));
  v35->set_f_14(0x7dc111f50695f700);
  v35->set_f_16(0x17ec429d0a96e6e0);
  v35->set_f_22(false);
  v35->set_f_19(0x161db38);
  v35->set_f_26(0.373790);
  v35->set_f_0(0x6e1d618694348617);
  v35->set_f_18(s->substr(0, 3060));
  v35->set_f_12(true);
  Message1::M3::M5* v36 = v30->mutable_f_3();
  v36->set_f_0(0x7ca20252);
  v36->set_f_1(s->substr(0, 4));
  v36->set_f_3(0x6dcfdbd0);
  v36->set_f_2(0x306f7baea70578be);
  Message1::M3::M17* v37 = v30->mutable_f_7();
  v37->set_f_0(s->substr(0, 9));
  v30->set_f_0(Message1::M3::E5_CONST_3);
  Message1::M3::M15* v38_0 = v30->add_f_6();
  v38_0->set_f_1(s->substr(0, 25));
  v38_0->set_f_0(0x74);
  message->set_f_17(Message1::E3_CONST_4);
  message->set_f_14(0x62e280445e47737d);
  message->set_f_5(s->substr(0, 25));
  message->set_f_27(true);
  message->set_f_0(s->substr(0, 229));
  message->add_f_3(Message1::E1_CONST_4);
  message->add_f_3(Message1::E1_CONST_5);
  message->set_f_2(true);
  message->set_f_7(s->substr(0, 7));
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
}  // namespace fleetbench::rpc::P2::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE1_H_
