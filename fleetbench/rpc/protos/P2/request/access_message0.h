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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message0.pb.h"

namespace fleetbench::rpc::P2::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_22(0x6d7ce8e67c80ef8d);
  message->set_f_30(s->substr(0, 18));
  message->set_f_7(0x1cb3);
  message->set_f_12(s->substr(0, 3));
  Message0::M5* v0 = message->mutable_f_53();
  Message0::M5::M13* v1 = v0->mutable_f_4();
  v1->set_f_0(0x89dab02);
  v1->set_f_1(0xd83d523);
  v1->set_f_2(0x7613d2240daab82d);
  v0->set_f_0(Message0::M5::E4_CONST_4);
  Message0::M5::M17* v2 = v0->mutable_f_5();
  v2->set_f_0(0x4945198);
  v0->set_f_2(0x631359f8fa976648);
  Message0::M5::M23* v3 = v0->mutable_f_6();
  v3->set_f_1(0xb352686);
  v3->set_f_0(0.483603);
  message->set_f_29(s->substr(0, 28));
  message->set_f_27(0x6443efd0692f6c9e);
  message->set_f_21(0xd954d1c482361ec8);
  message->set_f_10(s->substr(0, 19));
  message->set_f_20(0x3d28);
  message->set_f_17(0x34);
  message->set_f_18(0x25908c30caffc1a7);
  message->set_f_14(s->substr(0, 4));
  Message0::M4* v4 = message->mutable_f_52();
  v4->set_f_3(0x370b7425);
  v4->set_f_1(0x2f);
  v4->set_f_2(Message0::M4::E3_CONST_3);
  Message0::M4::M25* v5 = v4->mutable_f_10();
  v5->set_f_0(0x33513ed8cf25a505);
  v5->set_f_1(0x13);
  v5->set_f_3(0x7be6ad5c);
  v5->set_f_5(s->substr(0, 3364));
  v5->set_f_4(0x18cce2);
  v5->set_f_2(s->substr(0, 96));
  v4->set_f_0(0x93338150a3817f00);
  Message0::M4::M30* v6_0 = v4->add_f_11();
  (void)v6_0;  // Suppresses clang-tidy.
  Message0::M4::M9* v7 = v4->mutable_f_7();
  v7->set_f_0(0.482528);
  v7->set_f_3(0x3e);
  v7->set_f_2(0x498992e);
  v7->set_f_1(0x51827f1fad959796);
  Message0::M4::M24* v8 = v4->mutable_f_9();
  v8->set_f_0(0x1399e1fa);
  Message0::M2* v9 = message->mutable_f_48();
  Message0::M2::M21* v10 = v9->mutable_f_8();
  v10->set_f_0(0xcffe1717362941e7);
  Message0::M2::M7* v11 = v9->mutable_f_4();
  Message0::M2::M7::E5 array_1[18] = {
      Message0::M2::M7::E5_CONST_4, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_4, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_1, Message0::M2::M7::E5_CONST_5,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_2,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_4,
      Message0::M2::M7::E5_CONST_5, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_2, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_5, Message0::M2::M7::E5_CONST_1,
      Message0::M2::M7::E5_CONST_2, Message0::M2::M7::E5_CONST_4,
  };
  for (auto v : array_1) {
    v11->add_f_0(v);
  }
  Message0::M2::M18* v12 = v9->mutable_f_7();
  v12->set_f_0(s->substr(0, 8));
  Message0::M2::M31* v13 = v9->mutable_f_9();
  v13->set_f_0(0x7c6a2e2a);
  v13->set_f_1(s->substr(0, 54));
  v13->set_f_2(true);
  v9->set_f_0(0xce8e6998d79f3961);
  Message0::M2::M15* v14 = v9->mutable_f_5();
  v14->set_f_3(0x450933af);
  v14->add_f_1(Message0::M2::M15::E7_CONST_2);
  v14->set_f_0(s->substr(0, 7));
  v14->set_f_4(false);
  message->set_f_26(0x1009cb2e);
  message->set_f_24(Message0::E2_CONST_2);
  message->set_f_0(0x5399bb11);
  message->set_f_2(true);
  message->set_f_19(Message0::E1_CONST_2);
  message->set_f_9(0x11);
  message->set_f_28(0x1574a4f);
  message->set_f_15(0x97202c6a014db3b9);
  message->set_f_5(0xcbbe0f9);
  Message0::M6* v15 = message->mutable_f_54();
  Message0::M6::M11* v16 = v15->mutable_f_9();
  v16->set_f_1(0x1127ebde);
  v16->set_f_3(0x6e);
  v16->set_f_0(0x36);
  v16->set_f_4(0x75c737a1);
  v16->set_f_2(0xf2cd593e59e79d94);
  v15->set_f_1(false);
  v15->set_f_2(0x39dfbc9);
  Message0::M6::M10* v17 = v15->mutable_f_8();
  Message0::M6::M10::M40* v18 = v17->mutable_f_3();
  Message0::M6::M10::M40::M48* v19_0 = v18->add_f_4();
  v19_0->set_f_0(s->substr(0, 18));
  Message0::M6::M10::M40::M51* v20_0 = v18->add_f_8();
  Message0::M6::M10::M40::M51::M55* v21 = v20_0->mutable_f_6();
  v21->set_f_0(0x29);
  v20_0->set_f_1(0x5ccdd2f1);
  v20_0->set_f_3(0x6f6b75c);
  v20_0->set_f_2(s->substr(0, 4));
  v20_0->set_f_0(0x48);
  v18->set_f_0(0x6f5cb028);
  Message0::M6::M10::M40::M49* v22 = v18->mutable_f_6();
  (void)v22;  // Suppresses clang-tidy.
  Message0::M6::M10::M40::M50* v23 = v18->mutable_f_7();
  v23->set_f_0(false);
  v18->set_f_1(true);
  Message0::M6::M10::M40::M52* v24_0 = v18->add_f_9();
  v24_0->set_f_4(0x8f68ea1869e599b);
  v24_0->set_f_0(0x12);
  Message0::M6::M10::M40::M52::M54* v25 = v24_0->mutable_f_8();
  v25->set_f_0(0x46e7a);
  v24_0->set_f_1(0x3766);
  v24_0->set_f_2(0x89ca44d);
  v17->set_f_0(0xd1b850f);
  Message0::M6::M20* v26 = v15->mutable_f_12();
  v26->set_f_0(s->substr(0, 1));
  Message0::M6::M12* v27 = v15->mutable_f_10();
  v27->add_f_0(Message0::M6::M12::E6_CONST_3);
  Message0::M6::M39* v28 = v15->mutable_f_17();
  v28->set_f_0(0.591347);
  Message0::M6::M28* v29 = v15->mutable_f_13();
  (void)v29;  // Suppresses clang-tidy.
  message->set_f_13(true);
  Message0::M3* v30 = message->mutable_f_49();
  Message0::M3::M36* v31 = v30->mutable_f_13();
  v31->set_f_1(0x76);
  v31->set_f_2(0x24c1442);
  v31->set_f_0(0x52ea1132);
  Message0::M3::M26* v32 = v30->mutable_f_7();
  Message0::M3::M26::M42* v33 = v32->mutable_f_3();
  v33->set_f_12(s->substr(0, 32));
  v33->set_f_21(0x77);
  v33->set_f_4(0.157795);
  v33->set_f_10(0x74);
  v33->set_f_23(0x1f);
  v33->set_f_8(0xe4fa7ea86333de91);
  v33->set_f_3(0xa63114f34a3ea78a);
  v33->add_f_5(Message0::M3::M26::M42::E11_CONST_1);
  v33->set_f_11(0x395fae3db755ebc8);
  v33->set_f_28(0xa379b5c35988fd46);
  v33->set_f_2(0x14670a7a);
  v33->set_f_14(0x2ff9e52f19e);
  v33->set_f_29(s->substr(0, 21624));
  v33->set_f_0(0xf09403841867c67b);
  v33->set_f_13(0x5c51e4f);
  v33->set_f_17(s->substr(0, 319));
  v33->set_f_7(0x1728472bb7e8a5a8);
  v33->set_f_18(0x9e028bb78ee427f0);
  v33->set_f_27(false);
  v33->set_f_15(s->substr(0, 98));
  Message0::M3::M26::M42::M43* v34 = v33->mutable_f_53();
  v34->set_f_0(s->substr(0, 2));
  v34->set_f_1(0x595a0b7c35f3602);
  v34->set_f_2(s->substr(0, 25));
  v34->set_f_3(0xf5152fe14db6d962);
  Message0::M3::M26::M42::M43::M53* v35 = v34->mutable_f_6();
  v35->set_f_1(0xe2817b6115765df5);
  v35->set_f_2(s->substr(0, 99));
  v35->set_f_0(0x36);
  v33->set_f_25(s->substr(0, 2));
  v33->set_f_9(0.544113);
  v33->set_f_26(s->substr(0, 8));
  v33->set_f_19(0x45869e18);
  v33->set_f_24(0x7e8d7a3);
  Message0::M3::M37* v36 = v30->mutable_f_14();
  v36->set_f_6(0x4a);
  v36->set_f_11(0x1a9aa9);
  v36->set_f_2(true);
  v36->set_f_4(0x6c);
  v36->set_f_14(false);
  v36->set_f_3(s->substr(0, 27));
  v36->set_f_8(0x52);
  v36->set_f_13(s->substr(0, 21));
  v36->set_f_1(s->substr(0, 14));
  v36->set_f_10(s->substr(0, 25));
  v36->set_f_15(0xe9f9340);
  v36->set_f_5(s->substr(0, 27));
  v36->set_f_16(s->substr(0, 9));
  Message0::M3::M29* v37 = v30->mutable_f_10();
  (void)v37;  // Suppresses clang-tidy.
  Message0::M3::M32* v38_0 = v30->add_f_11();
  v38_0->set_f_1(0x268a0);
  v38_0->add_f_2(Message0::M3::M32::E9_CONST_2);
  Message0::M3::M14* v39 = v30->mutable_f_5();
  v39->set_f_0(s->substr(0, 22));
  v30->set_f_0(0x1e9627fb9);
  message->set_f_23(0x453d214f);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 26));
  message->set_f_30(s->substr(0, 3));
  message->set_f_3(s->substr(0, 13));
  message->set_f_28(0x79c0706);
  message->set_f_14(s->substr(0, 12));
  message->set_f_20(0x2f6a077);
  message->set_f_16(0x5a5209e);
  Message0::M1* v0 = message->mutable_f_47();
  v0->set_f_5(false);
  v0->set_f_3(s->substr(0, 6));
  v0->set_f_2(s->substr(0, 11));
  v0->set_f_4(0x8ca4df5);
  v0->set_f_1(0xdb552b0);
  message->set_f_25(0xc131679);
  message->set_f_12(s->substr(0, 28));
  message->set_f_10(s->substr(0, 111));
  message->set_f_18(0xd304ce898cab0c3c);
  message->set_f_2(false);
  message->set_f_19(Message0::E1_CONST_1);
  message->set_f_27(0x704d6c10d266b239);
  message->set_f_5(0xbe4);
  message->set_f_4(0xb83623a12644b4e9);
  message->set_f_8(0x35);
  message->set_f_0(0x509e335e);
  Message0::M6* v1 = message->mutable_f_54();
  v1->set_f_1(false);
  Message0::M6::M20* v2 = v1->mutable_f_12();
  v2->set_f_0(s->substr(0, 25));
  v1->set_f_2(0x74);
  Message0::M6::M12* v3 = v1->mutable_f_10();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M6::M39* v4 = v1->mutable_f_17();
  v4->set_f_0(0.860790);
  Message0::M6::M28* v5 = v1->mutable_f_13();
  v5->set_f_0(s->substr(0, 3));
  v1->set_f_0(0x39);
  Message0::M6::M10* v6 = v1->mutable_f_8();
  Message0::M6::M10::M40* v7 = v6->mutable_f_3();
  Message0::M6::M10::M40::M52* v8_0 = v7->add_f_9();
  v8_0->set_f_0(0x1a);
  v8_0->set_f_3(s->substr(0, 7));
  v8_0->set_f_2(0x18);
  Message0::M6::M10::M40::M52::M54* v9 = v8_0->mutable_f_8();
  v9->set_f_0(0x4c4);
  v9->set_f_1(s->substr(0, 121));
  v9->set_f_2(0x3ba98f6eed55a5c4);
  v8_0->set_f_1(0x6c);
  Message0::M6::M10::M40::M50* v10 = v7->mutable_f_7();
  v10->set_f_0(false);
  v7->set_f_0(0x1beabd22);
  v7->set_f_1(true);
  Message0::M6::M10::M40::M49* v11 = v7->mutable_f_6();
  v11->set_f_0(false);
  Message0::M6::M10::M40::M48* v12_0 = v7->add_f_4();
  v12_0->set_f_0(s->substr(0, 200));
  message->set_f_6(0x2aaefbb);
  message->set_f_22(0x22af4386f4f7e7d0);
  message->set_f_17(0xdb3);
  Message0::M2* v13 = message->mutable_f_48();
  Message0::M2::M31* v14 = v13->mutable_f_9();
  v14->set_f_0(0x16680809);
  v14->set_f_2(true);
  v14->set_f_1(s->substr(0, 6));
  Message0::M2::M18* v15 = v13->mutable_f_7();
  v15->set_f_0(s->substr(0, 70));
  Message0::M2::M15* v16 = v13->mutable_f_5();
  v16->set_f_3(0x64d1bf43);
  v16->add_f_1(Message0::M2::M15::E7_CONST_3);
  v16->set_f_2(0x66567fca52f626ab);
  v16->set_f_4(false);
  v16->set_f_0(s->substr(0, 32));
  Message0::M2::M35* v17 = v13->mutable_f_10();
  v17->set_f_0(0x2f3908cd7de892e2);
  Message0::M2::M7* v18 = v13->mutable_f_4();
  v18->add_f_0(Message0::M2::M7::E5_CONST_4);
  Message0::M2::M21* v19 = v13->mutable_f_8();
  v19->set_f_0(0x99eec2f53167a7ea);
  message->set_f_26(0x3be165fa);
  message->set_f_29(s->substr(0, 6));
  message->set_f_11(0x31c8cb0);
  message->set_f_9(0x1e2783);
  message->set_f_15(0x96b442e29b7f2be9);
  message->set_f_7(0x3522);
  message->set_f_21(0x101248d93f0c604c);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_28(0x58753736);
  message->set_f_27(0x4c652c302d856d0d);
  message->set_f_2(false);
  message->set_f_6(0xd);
  Message0::M1* v0 = message->mutable_f_47();
  v0->set_f_0(s->substr(0, 27));
  v0->set_f_2(s->substr(0, 136));
  Message0::M1::M16* v1_0 = v0->add_f_10();
  v1_0->set_f_1(s->substr(0, 13));
  v1_0->set_f_0(0x4bec71e58b407228);
  Message0::M1::M22* v2 = v0->mutable_f_11();
  v2->set_f_2(0xaf033e3c79dfe575);
  v2->set_f_3(0xd);
  v2->set_f_0(0x776e1d74);
  v2->set_f_1(0x34b30591);
  v0->set_f_1(0x25a9070);
  v0->set_f_3(s->substr(0, 2));
  v0->set_f_5(true);
  message->set_f_29(s->substr(0, 152));
  message->set_f_26(0x6b41f355);
  message->set_f_8(0xa);
  message->set_f_20(0x3c161);
  message->set_f_5(0xd59fb6e);
  message->set_f_22(0x7b7b0599a04378df);
  message->set_f_19(Message0::E1_CONST_5);
  Message0::M6* v3 = message->mutable_f_54();
  Message0::M6::M20* v4 = v3->mutable_f_12();
  v4->set_f_0(s->substr(0, 8));
  v3->set_f_1(false);
  Message0::M6::M11* v5 = v3->mutable_f_9();
  v5->set_f_3(0x283f8c3aa72);
  v5->set_f_1(0x4bd9e3eb);
  Message0::M6::M10* v6 = v3->mutable_f_8();
  Message0::M6::M10::M40* v7 = v6->mutable_f_3();
  Message0::M6::M10::M40::M50* v8 = v7->mutable_f_7();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M6::M10::M40::M49* v9 = v7->mutable_f_6();
  v9->set_f_0(true);
  Message0::M6::M10::M40::M48* v10_0 = v7->add_f_4();
  v10_0->set_f_0(s->substr(0, 82));
  v7->set_f_1(false);
  Message0::M6::M10::M40::M52* v11_0 = v7->add_f_9();
  v11_0->set_f_4(0x29078d9143933d54);
  v11_0->set_f_1(0x28);
  Message0::M6::M10::M40::M52::M54* v12 = v11_0->mutable_f_8();
  v12->set_f_0(0xb733255);
  v12->set_f_2(0xa3af227e731ba12c);
  v12->set_f_1(s->substr(0, 27));
  v7->set_f_0(0x1ed874a7);
  v6->set_f_0(0x38);
  Message0::M6::M28* v13 = v3->mutable_f_13();
  v13->set_f_0(s->substr(0, 26));
  Message0::M6::M39* v14 = v3->mutable_f_17();
  v14->set_f_0(0.162555);
  Message0::M6::M12* v15 = v3->mutable_f_10();
  (void)v15;  // Suppresses clang-tidy.
  v3->set_f_2(0x59);
  v3->set_f_0(0x9ecd658);
  message->set_f_15(0xdca61792a871f634);
  message->set_f_10(s->substr(0, 222));
  message->set_f_4(0x21880c0760a8dd0e);
  message->set_f_24(Message0::E2_CONST_5);
  message->set_f_16(0xf2e3618);
  Message0::M2* v16 = message->mutable_f_48();
  v16->set_f_0(0x3556c060edce42fd);
  Message0::M2::M15* v17 = v16->mutable_f_5();
  v17->set_f_2(0x5ec4d9e4b5efd97c);
  v17->add_f_1(Message0::M2::M15::E7_CONST_5);
  v17->set_f_0(s->substr(0, 2));
  v17->set_f_3(0x20ca35c9);
  v17->set_f_4(false);
  Message0::M2::M21* v18 = v16->mutable_f_8();
  v18->set_f_0(0xa64a85b19f2f8a95);
  Message0::M2::M31* v19 = v16->mutable_f_9();
  v19->set_f_0(0x72fce8b4);
  v19->set_f_1(s->substr(0, 18));
  v19->set_f_2(false);
  Message0::M2::M35* v20 = v16->mutable_f_10();
  v20->set_f_0(0x1abcf93b6bf6653b);
  Message0::M2::M35::M41* v21 = v20->mutable_f_3();
  Message0::M2::M35::M41::M47* v22_0 = v21->add_f_9();
  v22_0->set_f_0(0x19cd61);
  Message0::M2::M35::M41::M45* v23 = v21->mutable_f_5();
  v23->set_f_0(s->substr(0, 8));
  v23->set_f_1(0x65);
  v21->set_f_0(true);
  Message0::M2::M35::M41::M46* v24 = v21->mutable_f_6();
  v24->set_f_1(0x8f7c1cb);
  v24->set_f_0(s->substr(0, 5));
  Message0::M2::M18* v25 = v16->mutable_f_7();
  (void)v25;  // Suppresses clang-tidy.
  message->set_f_17(0xcfbf574);
  message->set_f_18(0x4d429873d5198dbb);
  message->set_f_13(false);
  Message0::M3* v26 = message->mutable_f_49();
  Message0::M3::M27* v27 = v26->mutable_f_8();
  v27->set_f_0(0x81ed4aa711b6188a);
  v26->set_f_0(0x416945a9e5);
  Message0::M3::M37* v28 = v26->mutable_f_14();
  v28->set_f_4(0x740305a);
  v28->set_f_13(s->substr(0, 17));
  v28->set_f_2(true);
  v28->set_f_11(0x9ed8a8e);
  v28->set_f_3(s->substr(0, 5));
  v28->set_f_1(s->substr(0, 26));
  v28->set_f_10(s->substr(0, 37));
  v28->set_f_6(0x1a59);
  v28->set_f_16(s->substr(0, 487));
  v28->set_f_5(s->substr(0, 630));
  v28->set_f_14(true);
  v28->set_f_9(0x5e0792a0);
  v28->set_f_8(0x97be9ca);
  v28->set_f_7(true);
  v28->set_f_12(0x1b938661d9540be8);
  Message0::M3::M8* v29 = v26->mutable_f_3();
  v29->set_f_0(0x24);
  Message0::M3::M14* v30 = v26->mutable_f_5();
  v30->set_f_0(s->substr(0, 6));
  Message0::M3::M29* v31 = v26->mutable_f_10();
  v31->set_f_0(Message0::M3::M29::E8_CONST_5);
  Message0::M3::M33* v32 = v26->mutable_f_12();
  (void)v32;  // Suppresses clang-tidy.
  Message0::M3::M36* v33 = v26->mutable_f_13();
  v33->set_f_2(0x70);
  v33->set_f_1(0xefb25);
  v33->set_f_3(0x19);
  v33->set_f_0(0x717425d8);
  message->set_f_7(0x1aabda);
  message->set_f_21(0xf81c36b5db47319);
  message->set_f_3(s->substr(0, 3));
  message->set_f_12(s->substr(0, 22));
  Message0::M5* v34 = message->mutable_f_53();
  v34->set_f_1(s->substr(0, 51));
  Message0::M5::M17* v35 = v34->mutable_f_5();
  (void)v35;  // Suppresses clang-tidy.
  Message0::M5::M13* v36 = v34->mutable_f_4();
  v36->set_f_1(0xad0e5b8);
  v36->set_f_0(0x24);
  v34->set_f_2(0xd065740b67ace6c1);
  Message0::M5::M23* v37 = v34->mutable_f_6();
  v37->set_f_1(0x4);
  v37->set_f_0(0.304042);
  Message0::M5::M38* v38_0 = v34->add_f_7();
  (void)v38_0;  // Suppresses clang-tidy.
  v34->set_f_0(Message0::M5::E4_CONST_1);
  message->set_f_30(s->substr(0, 2));
  message->set_f_11(0x899d080);
  message->set_f_23(0x4f70d8bd);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_22(0xc8c6e9545e9d955);
  message->set_f_13(false);
  message->set_f_4(0xee6ac9cae05d9c55);
  message->set_f_30(s->substr(0, 437));
  Message0::M2* v0 = message->mutable_f_48();
  v0->set_f_0(0xc04bbace12d248e9);
  Message0::M2::M18* v1 = v0->mutable_f_7();
  v1->set_f_0(s->substr(0, 441));
  Message0::M2::M15* v2 = v0->mutable_f_5();
  v2->set_f_4(true);
  v2->set_f_3(0x7feb9b51);
  v2->add_f_1(Message0::M2::M15::E7_CONST_2);
  v2->set_f_0(s->substr(0, 46));
  v2->set_f_2(0x4dac76d94fb7255);
  Message0::M2::M35* v3 = v0->mutable_f_10();
  v3->set_f_0(0x6199125f63e284dc);
  Message0::M2::M31* v4 = v0->mutable_f_9();
  v4->set_f_0(0x44f207ea);
  v4->set_f_2(false);
  Message0::M2::M7* v5 = v0->mutable_f_4();
  Message0::M2::M7::E5 array_0[20] = {
      Message0::M2::M7::E5_CONST_5, Message0::M2::M7::E5_CONST_4,
      Message0::M2::M7::E5_CONST_2, Message0::M2::M7::E5_CONST_4,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_2,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_3,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_5,
      Message0::M2::M7::E5_CONST_4, Message0::M2::M7::E5_CONST_2,
      Message0::M2::M7::E5_CONST_4, Message0::M2::M7::E5_CONST_1,
      Message0::M2::M7::E5_CONST_3, Message0::M2::M7::E5_CONST_5,
      Message0::M2::M7::E5_CONST_4, Message0::M2::M7::E5_CONST_3,
  };
  for (auto v : array_0) {
    v5->add_f_0(v);
  }
  message->set_f_24(Message0::E2_CONST_5);
  message->set_f_28(0x25c083b1);
  message->set_f_12(s->substr(0, 3));
  message->set_f_3(s->substr(0, 113));
  message->set_f_6(0x6eef529);
  message->set_f_29(s->substr(0, 18));
  Message0::M6* v6 = message->mutable_f_54();
  v6->set_f_1(false);
  v6->set_f_2(0x28ca142);
  v6->set_f_0(0x22);
  Message0::M6::M10* v7 = v6->mutable_f_8();
  v7->set_f_0(0xc66346a);
  Message0::M6::M10::M40* v8 = v7->mutable_f_3();
  v8->set_f_1(true);
  Message0::M6::M10::M40::M49* v9 = v8->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  v8->set_f_0(0x71331dcd);
  Message0::M6::M10::M40::M50* v10 = v8->mutable_f_7();
  v10->set_f_0(false);
  Message0::M6::M12* v11 = v6->mutable_f_10();
  v11->add_f_0(Message0::M6::M12::E6_CONST_1);
  Message0::M6::M28* v12 = v6->mutable_f_13();
  v12->set_f_0(s->substr(0, 2));
  Message0::M6::M11* v13 = v6->mutable_f_9();
  v13->set_f_2(0x33d7d302b80f86da);
  v13->set_f_0(0x159c);
  v13->set_f_4(0x14cfcfa2);
  v13->set_f_1(0x674aba0a);
  v13->set_f_3(0xd9321a4bb1);
  Message0::M4* v14 = message->mutable_f_52();
  Message0::M4::M24* v15 = v14->mutable_f_9();
  v15->set_f_0(0x482e3122);
  Message0::M4::M30* v16_0 = v14->add_f_11();
  (void)v16_0;  // Suppresses clang-tidy.
  v14->set_f_0(0xdecc22d0d31baeea);
  v14->set_f_1(0x22);
  v14->set_f_3(0x23d61ed9);
  Message0::M4::M9* v17 = v14->mutable_f_7();
  v17->set_f_3(0x48);
  v17->set_f_2(0x1b792b);
  v17->set_f_0(0.451637);
  v17->set_f_1(0x39d80c8491d1ad12);
  v17->set_f_4(s->substr(0, 53));
  v14->set_f_2(Message0::M4::E3_CONST_5);
  Message0::M4::M25* v18 = v14->mutable_f_10();
  v18->set_f_3(0x4b704c1c);
  v18->set_f_4(0x1b);
  v18->set_f_0(0x5744e8fa316a2800);
  v18->set_f_2(s->substr(0, 18));
  Message0::M5* v19 = message->mutable_f_53();
  Message0::M5::M23* v20 = v19->mutable_f_6();
  v20->set_f_1(0x2c87);
  v20->set_f_0(0.117250);
  Message0::M5::M17* v21 = v19->mutable_f_5();
  v21->set_f_0(0xbd5f4af);
  v19->set_f_0(Message0::M5::E4_CONST_1);
  Message0::M5::M38* v22_0 = v19->add_f_7();
  (void)v22_0;  // Suppresses clang-tidy.
  v19->set_f_2(0x28f64975eb14f12f);
  v19->set_f_1(s->substr(0, 20));
  message->set_f_19(Message0::E1_CONST_5);
  message->set_f_14(s->substr(0, 5));
  message->set_f_10(s->substr(0, 11));
  message->set_f_15(0x4d156258bf334f42);
  message->set_f_23(0x6d64a9e9);
  message->set_f_1(s->substr(0, 104));
  message->set_f_17(0x9f333a6);
  message->set_f_26(0x5ad4b92);
  message->set_f_16(0x9f86f93);
  message->set_f_11(0x5d);
  Message0::M3* v23 = message->mutable_f_49();
  Message0::M3::M27* v24 = v23->mutable_f_8();
  v24->set_f_0(0x73fc591db11ff40d);
  Message0::M3::M19* v25 = v23->mutable_f_6();
  v25->set_f_0(0x5301a539046feb65);
  Message0::M3::M37* v26 = v23->mutable_f_14();
  v26->set_f_8(0x20);
  v26->set_f_7(true);
  v26->set_f_3(s->substr(0, 5));
  v26->set_f_10(s->substr(0, 27));
  v26->set_f_2(true);
  v26->set_f_12(0xbebf81dc86baaad5);
  v26->set_f_11(0x957c084);
  v26->set_f_6(0x529a391);
  v26->set_f_1(s->substr(0, 29));
  v26->set_f_4(0x16);
  v26->set_f_14(false);
  v26->set_f_9(0x6b8e4637);
  v26->set_f_15(0x1813);
  v26->set_f_5(s->substr(0, 183));
  v26->set_f_13(s->substr(0, 8));
  Message0::M3::M32* v27_0 = v23->add_f_11();
  v27_0->add_f_2(Message0::M3::M32::E9_CONST_5);
  v27_0->set_f_0(0x860a30c);
  v27_0->set_f_1(0x481e8);
  v23->set_f_0(0x355b74b9142);
  Message0::M3::M36* v28 = v23->mutable_f_13();
  v28->set_f_3(0x3b);
  v28->set_f_1(0x4e);
  v28->set_f_2(0x28be);
  Message0::M3::M14* v29 = v23->mutable_f_5();
  v29->set_f_0(s->substr(0, 19));
  Message0::M3::M8* v30 = v23->mutable_f_3();
  (void)v30;  // Suppresses clang-tidy.
  Message0::M3::M29* v31 = v23->mutable_f_10();
  v31->set_f_0(Message0::M3::M29::E8_CONST_5);
  Message0::M3::M33* v32 = v23->mutable_f_12();
  v32->set_f_0(0x7eacf04);
  message->set_f_2(true);
  message->set_f_9(0x6c83efa);
  message->set_f_5(0x1a7c);
  message->set_f_27(0x3a2da6157959f4b0);
  message->set_f_25(0x1fab2b);
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
}  // namespace fleetbench::rpc::P2::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_
