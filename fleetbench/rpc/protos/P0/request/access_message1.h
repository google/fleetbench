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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message1.pb.h"

namespace fleetbench::rpc::P0::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_21(true);
  message->set_f_24(0xcc62ece62775af36);
  message->set_f_19(s->substr(0, 107));
  message->set_f_14(s->substr(0, 3079));
  message->set_f_22(0.487784);
  message->set_f_7(0x6a8bbb4802d6d79a);
  message->set_f_27(0x364f9996);
  Message1::E1 array_1[22] = {
      Message1::E1_CONST_2, Message1::E1_CONST_1, Message1::E1_CONST_5,
      Message1::E1_CONST_3, Message1::E1_CONST_3, Message1::E1_CONST_3,
      Message1::E1_CONST_2, Message1::E1_CONST_2, Message1::E1_CONST_2,
      Message1::E1_CONST_3, Message1::E1_CONST_2, Message1::E1_CONST_4,
      Message1::E1_CONST_2, Message1::E1_CONST_1, Message1::E1_CONST_1,
      Message1::E1_CONST_3, Message1::E1_CONST_2, Message1::E1_CONST_1,
      Message1::E1_CONST_3, Message1::E1_CONST_4, Message1::E1_CONST_2,
      Message1::E1_CONST_1,
  };
  for (auto v : array_1) {
    message->add_f_13(v);
  }
  message->set_f_8(0.654745);
  message->set_f_6(s->substr(0, 262));
  Message1::M2* v0 = message->mutable_f_47();
  Message1::M2::M21* v1 = v0->mutable_f_67();
  v1->set_f_3(0x6bb1b29f23738393);
  v1->set_f_0(true);
  v1->set_f_1(0.161285);
  Message1::M2::M16* v2 = v0->mutable_f_63();
  v2->set_f_4(0x2c23d9d);
  v2->set_f_7(0xa6e872c034c53fe4);
  v2->set_f_8(0x747e86f);
  v2->set_f_6(0x6c);
  v2->set_f_2(0xc0ff0);
  v2->set_f_5(s->substr(0, 89));
  Message1::M2::M27* v3_0 = v0->add_f_69();
  v3_0->set_f_0(0x9fb1bdd5a3e04988);
  Message1::M2::M27::M68* v4 = v3_0->mutable_f_3();
  v4->set_f_0(0x71aa62435fe510cc);
  Message1::M2::M29* v5 = v0->mutable_f_70();
  (void)v5;  // Suppresses clang-tidy.
  v0->set_f_8(0xf0a837111f13763e);
  v0->set_f_17(0x2f7fb6127a65968b);
  Message1::M2::M23* v6 = v0->mutable_f_68();
  v6->set_f_1(0x1fab);
  v6->set_f_3(0xa55d5d3bded825ae);
  v6->set_f_2(Message1::M2::M23::E5_CONST_1);
  Message1::M2::M23::M56* v7 = v6->mutable_f_6();
  v7->set_f_0(0x14);
  Message1::M2::M39* v8 = v0->mutable_f_76();
  (void)v8;  // Suppresses clang-tidy.
  v0->set_f_16(0x782242f91e25ca45);
  v0->set_f_0(0x72);
  v0->set_f_4(false);
  v0->set_f_24(s->substr(0, 29));
  v0->set_f_10(0.923734);
  Message1::M2::M3* v9_0 = v0->add_f_57();
  Message1::M2::M3::M48* v10 = v9_0->mutable_f_5();
  v10->set_f_21(s->substr(0, 352));
  v10->set_f_2(0x40);
  v10->set_f_13(s->substr(0, 22));
  v10->set_f_27(s->substr(0, 2));
  v10->set_f_18(0x34);
  v10->set_f_7(s->substr(0, 223));
  v10->set_f_16(0x1f47e562);
  v10->set_f_14(s->substr(0, 22));
  v10->set_f_4(0x3b);
  Message1::M2::M3::M48::M81* v11 = v10->mutable_f_47();
  (void)v11;  // Suppresses clang-tidy.
  v10->set_f_24(0xbce586a2f704b012);
  v10->set_f_30(s->substr(0, 74));
  v10->set_f_19(0x326db719);
  v10->set_f_3(0xe);
  v10->set_f_23(0x5c33a14);
  v10->set_f_5(0x172c);
  v10->set_f_8(0x3429c8beb8985cb5);
  v10->set_f_6(false);
  v10->set_f_20(s->substr(0, 87));
  v10->set_f_0(0x9be7036);
  v10->set_f_17(s->substr(0, 360));
  v10->set_f_12(0xab6cea9251b61f14);
  v10->set_f_1(0x3e62a68);
  v10->set_f_29(0xb);
  v10->set_f_22(0x92399edbbce3134d);
  v10->set_f_26(0xbcbe5b93ff038de1);
  v10->set_f_25(true);
  v10->set_f_9(0xf472fdbb94e57206);
  v10->set_f_10(true);
  v10->set_f_28(s->substr(0, 328));
  Message1::M2::M3::M54* v12 = v9_0->mutable_f_6();
  v12->set_f_1(0x3c0cb58);
  v0->set_f_12(s->substr(0, 2));
  v0->set_f_2(s->substr(0, 1));
  v0->set_f_13(Message1::M2::E2_CONST_2);
  v0->set_f_5(s->substr(0, 209));
  Message1::M2::M38* v13 = v0->mutable_f_75();
  Message1::M2::M38::M64* v14 = v13->mutable_f_3();
  v14->set_f_1(0x61857a23775433e0);
  v14->set_f_0(s->substr(0, 89));
  Message1::M2::M13* v15_0 = v0->add_f_61();
  (void)v15_0;  // Suppresses clang-tidy.
  Message1::M2::M42* v16 = v0->mutable_f_78();
  v16->set_f_0(0x4ed5d48008cf5ec1);
  v0->set_f_15(0x855545fdaa392cfb);
  v0->set_f_20(0x912555e032e1d032);
  v0->set_f_31(s->substr(0, 22));
  v0->set_f_3(0x138e165d59c2a827);
  v0->set_f_1(0xfc06a3910e5ff0a);
  Message1::M2::M18* v17_0 = v0->add_f_66();
  v17_0->set_f_0(0x395f14ae0d27a2af);
  v17_0->set_f_3(0x2c86);
  v17_0->set_f_1(0x73054dc6b42458a1);
  v17_0->set_f_2(Message1::M2::M18::E4_CONST_4);
  Message1::M2::M18::M47* v18_0 = v17_0->add_f_7();
  v18_0->set_f_0(0x5c04d41fee03057);
  Message1::M2::M18::M49* v19 = v17_0->mutable_f_8();
  Message1::M2::M18::M49::M74* v20 = v19->mutable_f_7();
  v20->set_f_0(0x98d5400770e0f267);
  Message1::M2::M18::M49::M73* v21 = v19->mutable_f_5();
  (void)v21;  // Suppresses clang-tidy.
  v19->set_f_2(0x267d597d5);
  v19->set_f_1(s->substr(0, 9));
  Message1::M2::M18* v17_1 = v0->add_f_66();
  Message1::M2::M18::M47* v22_0 = v17_1->add_f_7();
  v22_0->set_f_0(0x3ad37b4cc4117594);
  Message1::M2::M18::M47::M90* v23 = v22_0->mutable_f_4();
  v23->set_f_0(0x6d);
  v17_1->set_f_1(0x538c27091bb38c60);
  v17_1->set_f_2(Message1::M2::M18::E4_CONST_3);
  v17_1->set_f_3(0x7a);
  v17_1->set_f_0(0x4797f3f53e1420c);
  Message1::M2::M18::M66* v24_0 = v17_1->add_f_9();
  v24_0->set_f_0(s->substr(0, 4));
  Message1::M2::M18::M66::M82* v25 = v24_0->mutable_f_4();
  v25->set_f_2(0x664c129aae39ded5);
  Message1::M2::M7* v26 = v0->mutable_f_59();
  Message1::M2::M7::M46* v27 = v26->mutable_f_5();
  (void)v27;  // Suppresses clang-tidy.
  v26->set_f_0(0x60cb9f3);
  Message1::M2::M14* v28_0 = v0->add_f_62();
  v28_0->set_f_1(0x5720d173);
  v28_0->set_f_0(false);
  Message1::M2::M14::M62* v29_0 = v28_0->add_f_5();
  Message1::M2::M14::M62::M77* v30 = v29_0->mutable_f_4();
  v30->set_f_2(0xf4edfd4);
  v30->set_f_0(true);
  v30->set_f_5(0x28);
  v29_0->set_f_0(0x8);
  v0->set_f_19(0x30e657bb);
  Message1::M2::M36* v31 = v0->mutable_f_74();
  Message1::M2::M36::M55* v32 = v31->mutable_f_4();
  v32->set_f_0(0x75);
  v32->set_f_1(0xca1240e);
  v31->set_f_0(0x6943118d);
  v31->set_f_1(0x47);
  v0->set_f_7(0xccf1d);
  v0->set_f_14(0x282ec69bd18c62e1);
  v0->add_f_30(Message1::M2::E3_CONST_2);
  v0->set_f_22(0.708819);
  Message1::M2::M17* v33_0 = v0->add_f_64();
  v33_0->set_f_0(0xaabbd02bc3ffa404);
  v0->set_f_28(s->substr(0, 5));
  v0->set_f_9(s->substr(0, 80));
  Message1::M2::M33* v34_0 = v0->add_f_73();
  v34_0->set_f_3(0xfa36f1adcf34c590);
  v34_0->set_f_8(s->substr(0, 8));
  v34_0->set_f_6(false);
  v34_0->set_f_9(0x3ac14e12);
  v34_0->set_f_1(0x3);
  v34_0->set_f_2(0x516436064d8c55b9);
  v34_0->set_f_7(0xfae0f801285b3bf5);
  v34_0->set_f_0(0x7da67e8d7cbf232b);
  v34_0->set_f_5(0x2de973e2);
  Message1::M2::M45* v35_0 = v0->add_f_80();
  v35_0->set_f_0(0x22);
  v35_0->set_f_3(0xdf3ac59838d8d825);
  Message1::M2::M45::M72* v36 = v35_0->mutable_f_11();
  Message1::M2::M45::M72::M75* v37 = v36->mutable_f_3();
  v37->set_f_0(0x187d);
  v35_0->set_f_1(s->substr(0, 7));
  v0->set_f_27(0xce5235761420db90);
  Message1::M2::M12* v38 = v0->mutable_f_60();
  Message1::M2::M12::M71* v39 = v38->mutable_f_2();
  v39->set_f_0(0x2905);
  v38->set_f_0(s->substr(0, 434));
  v0->set_f_26(s->substr(0, 504));
  v0->set_f_23(0xe49339f4da8fe3f);
  message->set_f_16(s->substr(0, 80));
  message->set_f_26(0.063941);
  message->set_f_9(0x1bdc);
  Message1::M1* v40 = message->mutable_f_45();
  Message1::M1::M9* v41_0 = v40->add_f_8();
  v41_0->set_f_0(0xe30edf1ae75461c5);
  v41_0->set_f_1(0x68);
  Message1::M1::M20* v42 = v40->mutable_f_16();
  v42->set_f_0(0x50b91ffd4322af2d);
  Message1::M1::M8* v43 = v40->mutable_f_7();
  v43->set_f_3(0x2082);
  v43->set_f_1(0.297537);
  Message1::M1::M24* v44 = v40->mutable_f_21();
  v44->set_f_1(0x219108cf);
  Message1::M1::M24::M67* v45 = v44->mutable_f_8();
  v45->set_f_2(0x829);
  v45->set_f_1(0x58);
  v45->set_f_3(s->substr(0, 98));
  v44->set_f_3(0x57b35f97);
  v44->set_f_0(0x57a32a0f881c4e1d);
  v44->set_f_2(s->substr(0, 344));
  Message1::M1::M37* v46_0 = v40->add_f_33();
  v46_0->add_f_10(Message1::M1::M37::E7_CONST_1);
  v46_0->add_f_10(Message1::M1::M37::E7_CONST_2);
  v46_0->add_f_10(Message1::M1::M37::E7_CONST_4);
  v46_0->set_f_1(s->substr(0, 17));
  v46_0->set_f_16(0x2ecf1de);
  v46_0->set_f_7(0x45);
  v46_0->set_f_23(0x77c1250);
  v46_0->set_f_21(0x6b);
  v46_0->set_f_27(true);
  v46_0->set_f_25(0x2d524c512e4c2615);
  v46_0->set_f_15(0xf143188c63959585);
  v46_0->set_f_18(s->substr(0, 8));
  v46_0->set_f_13(0x1c8647);
  v46_0->set_f_24(0x1d);
  v46_0->set_f_3(0x49431c93f77f1084);
  v46_0->set_f_6(s->substr(0, 9));
  v46_0->set_f_12(0x3231eba0);
  v46_0->set_f_29(0x45);
  v46_0->set_f_8(0xf3006894af9cec83);
  v46_0->set_f_9(0xc162cf0);
  v46_0->set_f_28(s->substr(0, 2));
  Message1::M1::M37::E6 array_2[6] = {
      Message1::M1::M37::E6_CONST_2, Message1::M1::M37::E6_CONST_2,
      Message1::M1::M37::E6_CONST_1, Message1::M1::M37::E6_CONST_5,
      Message1::M1::M37::E6_CONST_1, Message1::M1::M37::E6_CONST_5,
  };
  for (auto v : array_2) {
    v46_0->add_f_5(v);
  }
  Message1::M1::M37* v46_1 = v40->add_f_33();
  v46_1->set_f_16(0x30);
  v46_1->set_f_1(s->substr(0, 200));
  v46_1->set_f_3(0xee6d72982ddc2c0b);
  v46_1->set_f_9(0xf22e4eb);
  v46_1->set_f_18(s->substr(0, 104));
  v46_1->set_f_29(0x3775b70);
  v46_1->set_f_11(0x8a7ebe24d7997a6b);
  v46_1->set_f_22(0x2753edca05db6b7c);
  v46_1->set_f_30(0x4102f6fd);
  v46_1->set_f_28(s->substr(0, 12));
  v46_1->set_f_4(0.904109);
  v46_1->set_f_14(0.095220);
  v46_1->set_f_26(0x9cfab7155e8bc196);
  v46_1->add_f_5(Message1::M1::M37::E6_CONST_2);
  v46_1->set_f_25(0x76446a36d9d0dc8c);
  v46_1->set_f_8(0x2793bad5dc0a22a5);
  Message1::M1::M26* v47 = v40->mutable_f_24();
  v47->set_f_0(s->substr(0, 281));
  Message1::M1::M10* v48_0 = v40->add_f_10();
  v48_0->set_f_0(0x6cd6af49);
  Message1::M1::M10* v48_1 = v40->add_f_10();
  v48_1->set_f_1(false);
  v48_1->set_f_0(0xc51c5a7);
  Message1::M1::M15* v49 = v40->mutable_f_12();
  v49->set_f_0(0x185ffd3);
  Message1::M1::M11* v50 = v40->mutable_f_11();
  (void)v50;  // Suppresses clang-tidy.
  Message1::M1::M4* v51 = v40->mutable_f_5();
  Message1::M1::M4::M60* v52 = v51->mutable_f_4();
  v52->set_f_3(0x70);
  v52->set_f_1(0.652281);
  v52->set_f_2(0xcb80dd105d8a41bc);
  v52->set_f_0(0.564243);
  v52->set_f_5(0x4c6cd2020972f4e6);
  v52->set_f_4(0x4a);
  v51->set_f_0(0x49);
  Message1::M1::M25* v53_0 = v40->add_f_22();
  (void)v53_0;  // Suppresses clang-tidy.
  Message1::M1::M25* v53_1 = v40->add_f_22();
  v53_1->set_f_0(false);
  Message1::M1::M28* v54 = v40->mutable_f_25();
  v54->set_f_0(0x22);
  Message1::M1::M30* v55_0 = v40->add_f_28();
  v55_0->set_f_0(0x7936fda0);
  message->set_f_17(0x42);
  message->set_f_3(0x50ceae37039257a2);
  message->set_f_4(0x3ce3fc7003aed621);
  message->set_f_0(0x21e811b5);
  message->set_f_11(s->substr(0, 2644));
  message->set_f_29(0x5b);
  message->set_f_20(0xb1b01841045ff52e);
  message->set_f_5(0xf324f172e08c083b);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_26(0.326604);
  message->set_f_20(0x1b5f3e33c4c33144);
  message->set_f_9(0xdcbf639);
  message->set_f_6(s->substr(0, 499));
  message->set_f_27(0x28a9d13f);
  message->set_f_7(0x6b29d8dc029f9712);
  message->set_f_30(0xbe1cd87bd7dfd25f);
  message->set_f_1(0x120a5b505b4);
  message->set_f_15(false);
  message->set_f_2(0x59);
  message->set_f_21(true);
  message->set_f_11(s->substr(0, 9));
  message->set_f_24(0x1c66f3bd654774b4);
  message->set_f_0(0x18ac5303);
  message->set_f_28(0x37835708a0beb1ed);
  message->set_f_12(0x5bd2a9c5);
  message->set_f_19(s->substr(0, 2269));
  message->set_f_5(0x1ddf80acf3806537);
  message->set_f_17(0xe1300b1);
  Message1::M2* v0 = message->mutable_f_47();
  v0->add_f_30(Message1::M2::E3_CONST_1);
  v0->set_f_24(s->substr(0, 25));
  v0->set_f_21(0x2e8ce134679f928f);
  v0->set_f_31(s->substr(0, 12));
  v0->set_f_25(0x98bfa04bffc982b4);
  Message1::M2::M14* v1_0 = v0->add_f_62();
  Message1::M2::M14::M62* v2_0 = v1_0->add_f_5();
  v2_0->set_f_1(true);
  Message1::M2::M14::M62::M77* v3 = v2_0->mutable_f_4();
  v3->set_f_4(0xbf729be0b8c1450d);
  v3->set_f_3(0x7bc1ecf774f58b92);
  v3->set_f_1(0x73253da7be9583a6);
  v3->set_f_5(0x205c216);
  v3->set_f_0(true);
  v1_0->set_f_0(false);
  v0->set_f_9(s->substr(0, 2453));
  v0->set_f_16(0x73e138b27fd903df);
  v0->set_f_17(0x186854606568e374);
  Message1::M2::M21* v4 = v0->mutable_f_67();
  v4->set_f_3(0x5e37f870d83427cd);
  v4->set_f_1(0.826350);
  v4->set_f_4(0x1e4bbcd69e968da9);
  v4->set_f_0(true);
  v4->set_f_2(0xfc8a767);
  Message1::M2::M32* v5 = v0->mutable_f_72();
  Message1::M2::M32::M63* v6 = v5->mutable_f_2();
  v6->set_f_19(0x3bbf019f5e0fa65b);
  v6->set_f_0(0x69c989bef4cbf88);
  v6->set_f_14(0xd23);
  v6->set_f_8(s->substr(0, 9));
  v6->set_f_3(false);
  v6->set_f_7(s->substr(0, 2));
  v6->set_f_15(0x72);
  v6->set_f_16(Message1::M2::M32::M63::E11_CONST_4);
  v6->set_f_20(0x46716);
  v6->set_f_18(0xc66381a299d6c5b5);
  v6->set_f_12(false);
  v6->set_f_6(0x734af062aa3dd8bb);
  v6->set_f_13(s->substr(0, 17));
  v6->set_f_5(0x55);
  v5->set_f_0(0x41c0716ad7898dac);
  Message1::M2::M44* v7 = v0->mutable_f_79();
  v7->set_f_0(0x8c37b6bf8d7ac9fa);
  v0->set_f_7(0x1d);
  Message1::M2::M41* v8_0 = v0->add_f_77();
  v8_0->set_f_1(0xce94789f482d6239);
  Message1::M2::M41::M61* v9 = v8_0->mutable_f_11();
  v9->set_f_1(0xffbd59dda15160a4);
  v8_0->set_f_2(0x2592);
  v8_0->set_f_0(0x35);
  v8_0->set_f_4(0xddf3217287362010);
  Message1::M2::M41::M53* v10_0 = v8_0->add_f_9();
  Message1::M2::M41::M53::M79* v11_0 = v10_0->add_f_3();
  (void)v11_0;  // Suppresses clang-tidy.
  v10_0->set_f_0(0x22);
  Message1::M2::M16* v12 = v0->mutable_f_63();
  v12->set_f_1(0x18f6ffe7e3714fc7);
  v12->set_f_0(0x94ec953702c9b05e);
  v12->set_f_4(0x1cd9);
  v12->set_f_7(0x23c6ad9158c92246);
  Message1::M2::M16::M57* v13 = v12->mutable_f_14();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_6(0xc);
  v12->set_f_2(0x5b);
  v12->set_f_9(0x333c45e);
  v12->set_f_8(0xa0b8e68);
  v12->set_f_10(s->substr(0, 18));
  v0->set_f_18(0x46);
  Message1::M2::M17* v14_0 = v0->add_f_64();
  Message1::M2::M17::M52* v15 = v14_0->mutable_f_3();
  Message1::M2::M17::M52::M89* v16 = v15->mutable_f_6();
  v16->set_f_0(0xb58c52fe5494e841);
  v15->set_f_2(0x178b);
  v15->add_f_0(Message1::M2::M17::M52::E9_CONST_3);
  v15->set_f_1(0x63);
  Message1::M2::M17* v14_1 = v0->add_f_64();
  v14_1->set_f_0(0x62f639f25a799ab3);
  Message1::M2::M17::M52* v17 = v14_1->mutable_f_3();
  Message1::M2::M17::M52::M89* v18 = v17->mutable_f_6();
  v18->set_f_0(0xdc68dd2046769e5f);
  v17->set_f_2(0x6b);
  v17->set_f_1(0xef0bb46);
  v17->add_f_0(Message1::M2::M17::M52::E9_CONST_3);
  Message1::M2::M29* v19 = v0->mutable_f_70();
  v19->set_f_0(false);
  Message1::M2::M18* v20_0 = v0->add_f_66();
  Message1::M2::M18::M66* v21_0 = v20_0->add_f_9();
  v21_0->set_f_0(s->substr(0, 310));
  Message1::M2::M18::M66::M82* v22 = v21_0->mutable_f_4();
  v22->set_f_2(0xad22cb4aa098ed8a);
  v22->set_f_1(0xb157d43);
  v22->set_f_3(0x1852563);
  Message1::M2::M18::M49* v23 = v20_0->mutable_f_8();
  v23->set_f_0(0x797c63e);
  Message1::M2::M18::M49::M74* v24 = v23->mutable_f_7();
  v24->set_f_0(0xa7556c69bed65a2f);
  Message1::M2::M18::M49::M73* v25 = v23->mutable_f_5();
  v25->set_f_0(0x54);
  v23->set_f_2(0x2c);
  v20_0->set_f_3(0x9ab68);
  Message1::M2::M18::M47* v26_0 = v20_0->add_f_7();
  Message1::M2::M18::M47::M90* v27 = v26_0->mutable_f_4();
  v27->set_f_0(0x53b7bc6);
  v20_0->set_f_0(0x8ad86620c11b4b2a);
  v0->set_f_5(s->substr(0, 10));
  v0->set_f_20(0xf12b951f77217cdc);
  Message1::M2::M45* v28_0 = v0->add_f_80();
  Message1::M2::M45::M72* v29 = v28_0->mutable_f_11();
  v29->set_f_0(s->substr(0, 21));
  v28_0->set_f_1(s->substr(0, 449));
  v28_0->set_f_0(0x1a62535);
  v28_0->set_f_3(0x7bda3d4bd381d6ca);
  Message1::M2::M7* v30 = v0->mutable_f_59();
  v30->set_f_1(0.892380);
  Message1::M2::M7::M46* v31 = v30->mutable_f_5();
  v31->set_f_0(s->substr(0, 15));
  Message1::M2::M23* v32 = v0->mutable_f_68();
  Message1::M2::M23::M56* v33 = v32->mutable_f_6();
  v33->set_f_0(0x28);
  v32->set_f_0(s->substr(0, 255));
  v32->set_f_3(0x72a33247fabfd57b);
  v32->set_f_2(Message1::M2::M23::E5_CONST_3);
  v0->set_f_22(0.298733);
  v0->set_f_29(0x4d);
  v0->set_f_4(true);
  v0->set_f_15(0x7349665fd3d590ea);
  Message1::M2::M38* v34 = v0->mutable_f_75();
  Message1::M2::M38::M64* v35 = v34->mutable_f_3();
  v35->set_f_1(0x3835fbb10a9abab0);
  v35->set_f_0(s->substr(0, 9));
  v34->set_f_0(0x41);
  v0->set_f_26(s->substr(0, 63));
  v0->set_f_2(s->substr(0, 21));
  Message1::M2::M5* v36 = v0->mutable_f_58();
  v36->set_f_0(0xd);
  v0->set_f_14(0x494588b967c69f93);
  Message1::M2::M36* v37 = v0->mutable_f_74();
  v37->set_f_0(0x44e1d390);
  Message1::M2::M36::M55* v38 = v37->mutable_f_4();
  Message1::M2::M36::M55::M76* v39 = v38->mutable_f_4();
  v39->set_f_0(0x63902faf08bdae6e);
  v39->set_f_3(0x6d505dbbe995208f);
  v39->set_f_1(0x33fd);
  v39->set_f_4(0x2d5b46);
  v38->set_f_0(0x27);
  v37->set_f_1(0x2e17);
  v0->set_f_28(s->substr(0, 4081));
  v0->set_f_23(0x67d3608ef6c8f363);
  message->set_f_8(0.264555);
  message->set_f_23(0x3567bd8c);
  message->set_f_16(s->substr(0, 118));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_1(0x1ea938656c);
  message->set_f_16(s->substr(0, 2));
  message->set_f_2(0x41);
  message->set_f_11(s->substr(0, 3));
  message->set_f_26(0.618481);
  message->set_f_3(0x17bd64787a1bd2e6);
  message->set_f_0(0x3e5bfd6e);
  message->set_f_6(s->substr(0, 16));
  message->set_f_23(0x3934f40b);
  message->set_f_10(0x2441d209b1e6402c);
  message->set_f_30(0x601038ae76185fe5);
  Message1::E1 array_0[13] = {
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_5,
      Message1::E1_CONST_2, Message1::E1_CONST_4, Message1::E1_CONST_1,
      Message1::E1_CONST_4, Message1::E1_CONST_2, Message1::E1_CONST_5,
      Message1::E1_CONST_4, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_13(v);
  }
  message->set_f_21(false);
  message->set_f_7(0xd19a8b612b7cbe39);
  message->set_f_4(0xeaa9cd8467da673f);
  message->set_f_29(0x7c);
  message->set_f_24(0x15f5fa038fffd59b);
  message->set_f_20(0x7a1e6647eb6e6ac4);
  Message1::M2* v0 = message->mutable_f_47();
  v0->set_f_19(0x1ec29aab);
  v0->set_f_21(0x2ccad3255a5b5454);
  v0->set_f_4(false);
  v0->set_f_0(0x79a08a1);
  v0->set_f_22(0.562642);
  Message1::M2::M21* v1 = v0->mutable_f_67();
  v1->set_f_3(0xab01550bcbefab28);
  v1->set_f_0(true);
  v1->set_f_1(0.911714);
  v1->set_f_2(0x13);
  v0->set_f_29(0xf4fce);
  Message1::M2::M29* v2 = v0->mutable_f_70();
  v2->set_f_0(false);
  v0->set_f_7(0x50);
  Message1::M2::M18* v3_0 = v0->add_f_66();
  Message1::M2::M18::M49* v4 = v3_0->mutable_f_8();
  v4->set_f_2(0x5404db1f3b);
  v4->set_f_0(0x42);
  Message1::M2::M18::M49::M73* v5 = v4->mutable_f_5();
  v5->set_f_0(0x6e);
  Message1::M2::M18::M49::M74* v6 = v4->mutable_f_7();
  v6->set_f_0(0x8746113b76043c4e);
  v3_0->set_f_3(0x349e);
  v3_0->set_f_0(0x91f57d23309c1b43);
  v3_0->set_f_2(Message1::M2::M18::E4_CONST_2);
  v3_0->set_f_1(0x677afd974b3ddc68);
  Message1::M2::M18::M66* v7_0 = v3_0->add_f_9();
  v7_0->set_f_0(s->substr(0, 80));
  Message1::M2::M18::M47* v8_0 = v3_0->add_f_7();
  Message1::M2::M18::M47::M90* v9 = v8_0->mutable_f_4();
  v9->set_f_0(0x11b8d5);
  v0->set_f_10(0.305136);
  Message1::M2::M17* v10_0 = v0->add_f_64();
  (void)v10_0;  // Suppresses clang-tidy.
  v0->set_f_23(0xe1c3fdf60dd396e6);
  v0->add_f_30(Message1::M2::E3_CONST_4);
  v0->add_f_30(Message1::M2::E3_CONST_4);
  v0->set_f_9(s->substr(0, 109));
  Message1::M2::M39* v11 = v0->mutable_f_76();
  v11->set_f_1(true);
  v11->set_f_0(0x15b9b9);
  v0->set_f_24(s->substr(0, 282));
  Message1::M2::M41* v12_0 = v0->add_f_77();
  v12_0->set_f_0(0x10fbf5);
  v12_0->set_f_3(0x44d2500d);
  Message1::M2::M41::M61* v13 = v12_0->mutable_f_11();
  Message1::M2::M41::M61::M84* v14 = v13->mutable_f_8();
  v14->set_f_4(false);
  v14->set_f_3(0x30b38368f999518e);
  v14->add_f_0(Message1::M2::M41::M61::M84::E15_CONST_3);
  v14->set_f_1(0x1e);
  Message1::M2::M41::M61::M80* v15 = v13->mutable_f_6();
  v15->set_f_1(s->substr(0, 21));
  v15->set_f_0(true);
  Message1::M2::M41::M61::M83* v16_0 = v13->add_f_7();
  v16_0->set_f_0(s->substr(0, 77));
  v16_0->set_f_2(0x156a7f41);
  v16_0->set_f_5(0x28);
  v13->set_f_0(0xd6808196c5c220cf);
  v12_0->set_f_2(0x5c);
  Message1::M2::M41::M53* v17_0 = v12_0->add_f_9();
  v17_0->set_f_0(0xe);
  Message1::M2::M41::M53::M79* v18_0 = v17_0->add_f_3();
  v18_0->set_f_0(0xae04987d1bf43f76);
  Message1::M2::M41* v12_1 = v0->add_f_77();
  v12_1->set_f_3(0x2b45d39b);
  v12_1->set_f_1(0xdc4cd40cb5609909);
  v12_1->set_f_2(0x41);
  Message1::M2::M41::M53* v19_0 = v12_1->add_f_9();
  Message1::M2::M41::M53::M79* v20_0 = v19_0->add_f_3();
  (void)v20_0;  // Suppresses clang-tidy.
  v19_0->set_f_0(0x9ec4c00);
  Message1::M2::M41::M53* v19_1 = v12_1->add_f_9();
  (void)v19_1;  // Suppresses clang-tidy.
  v12_1->set_f_0(0xe443b);
  v0->set_f_31(s->substr(0, 27));
  v0->set_f_13(Message1::M2::E2_CONST_1);
  Message1::M2::M42* v21 = v0->mutable_f_78();
  v21->set_f_0(0xd6a61fe834233f64);
  v0->set_f_26(s->substr(0, 40));
  Message1::M2::M33* v22_0 = v0->add_f_73();
  v22_0->set_f_2(0xfb5f806022530b81);
  v22_0->set_f_5(0x1280b0cc);
  v22_0->set_f_9(0x24de2835);
  v22_0->set_f_7(0x128a1249e7cf244c);
  v22_0->set_f_3(0xc9688e28033a216b);
  v22_0->set_f_10(s->substr(0, 23));
  v22_0->set_f_8(s->substr(0, 391));
  v22_0->set_f_0(0xcbbbe97e42cc1cab);
  v0->set_f_18(0x49);
  v0->set_f_8(0xc3fd630c4b53a5b);
  Message1::M2::M16* v23 = v0->mutable_f_63();
  v23->set_f_6(0x3d13);
  v23->set_f_9(0x66);
  v23->set_f_0(0x11d1fa9061d4c021);
  v23->set_f_1(0x31094dd2023ba7cf);
  v23->set_f_10(s->substr(0, 22));
  v23->set_f_3(0.488550);
  v23->set_f_4(0x2a44);
  v23->set_f_2(0x573f961);
  Message1::M2::M7* v24 = v0->mutable_f_59();
  v24->set_f_1(0.250534);
  Message1::M2::M7::M46* v25 = v24->mutable_f_5();
  v25->set_f_0(s->substr(0, 182));
  v24->set_f_0(0x70);
  v0->set_f_16(0x1faf5d992dede14e);
  Message1::M2::M14* v26_0 = v0->add_f_62();
  Message1::M2::M14::M62* v27_0 = v26_0->add_f_5();
  v27_0->set_f_0(0x6b);
  v27_0->set_f_1(true);
  v26_0->set_f_0(true);
  v26_0->set_f_1(0x467625fd);
  v0->set_f_14(0x10cfca9d97c6c9ef);
  v0->set_f_27(0x2d715cac8173389e);
  Message1::M2::M23* v28 = v0->mutable_f_68();
  Message1::M2::M23::M56* v29 = v28->mutable_f_6();
  v29->set_f_0(0x1c);
  v28->set_f_1(0x57);
  v28->set_f_3(0xa81b046c585fa2f3);
  v28->set_f_0(s->substr(0, 433));
  v0->set_f_5(s->substr(0, 6));
  v0->set_f_12(s->substr(0, 303));
  Message1::M2::M38* v30 = v0->mutable_f_75();
  Message1::M2::M38::M64* v31 = v30->mutable_f_3();
  v31->set_f_0(s->substr(0, 20));
  v31->set_f_1(0x31aadabc4a614f14);
  v30->set_f_0(0x3b);
  v0->set_f_2(s->substr(0, 27));
  Message1::M2::M27* v32_0 = v0->add_f_69();
  v32_0->set_f_0(0x97ad1a0e2d9d2300);
  v0->set_f_6(0x69086ce5d4c1cb3f);
  message->set_f_19(s->substr(0, 36));
  message->set_f_27(0x5cfc1b6c);
  message->set_f_8(0.090285);
  message->set_f_9(0xd17);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_14(s->substr(0, 95));
  message->set_f_17(0x7);
  message->set_f_21(false);
  message->set_f_8(0.967837);
  message->set_f_25(s->substr(0, 9));
  message->set_f_1(0x19cba067a84);
  message->set_f_18(0x920338727cbed3da);
  message->set_f_27(0x544d193d);
  message->set_f_20(0x4373c6e8337d0d89);
  message->set_f_2(0x72);
  message->set_f_9(0x12);
  message->set_f_11(s->substr(0, 58));
  message->set_f_26(0.049798);
  message->set_f_28(0xb63da9d77d18c012);
  message->set_f_16(s->substr(0, 66));
  message->set_f_19(s->substr(0, 10));
  message->set_f_6(s->substr(0, 20));
  message->set_f_24(0x6139390579661c9a);
  message->set_f_10(0xd87276d2abd849ce);
  message->set_f_22(0.723309);
  message->set_f_12(0x5925c4c3);
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
}  // namespace fleetbench::rpc::P0::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
