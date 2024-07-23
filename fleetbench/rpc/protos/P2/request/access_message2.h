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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message2.pb.h"

namespace fleetbench::rpc::P2::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_27(s->substr(0, 6));
  message->set_f_18(0xb203ab0);
  message->set_f_17(0x9b7a69db93711595);
  message->set_f_14(0x990aa885c2ae191);
  message->set_f_20(0x663b541);
  Message2::M1* v0_0 = message->add_f_47();
  Message2::M1::M9* v1 = v0_0->mutable_f_5();
  v1->set_f_0(s->substr(0, 17));
  Message2::M1::M17* v2 = v0_0->mutable_f_8();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M1::M8* v3 = v0_0->mutable_f_4();
  v3->set_f_1(0x5a66a6c0a69c1ce3);
  v3->set_f_2(0xf107f06);
  v3->set_f_0(s->substr(0, 17));
  Message2::M1::M32* v4_0 = v0_0->add_f_13();
  Message2::M1::M32::M35* v5 = v4_0->mutable_f_4();
  v5->set_f_3(0x6989fbee);
  v5->set_f_1(0x2c9a4e8b);
  v5->set_f_4(0x23);
  v5->set_f_2(0x94056b4c75072afd);
  Message2::M1::M32::M39* v6_0 = v4_0->add_f_7();
  v6_0->set_f_1(0x7b0ccd7a4287288b);
  v6_0->set_f_2(0xe4ac30cb6d24596b);
  v4_0->set_f_0(0x33a26c473c88dc7b);
  v0_0->set_f_0(0x45);
  Message2::M1::M27* v7 = v0_0->mutable_f_12();
  v7->set_f_0(0xe3aea6087ace7d33);
  v7->set_f_1(0x2fc467dea06);
  Message2::M1::M19* v8 = v0_0->mutable_f_9();
  v8->set_f_1(0x3b7a);
  v8->set_f_0(0x79);
  message->set_f_4(0x4f9b83e);
  message->set_f_22(0xe07);
  message->set_f_0(0x3de5fc9f);
  message->set_f_13(0x12154cc5209b2513);
  Message2::M2* v9_0 = message->add_f_48();
  Message2::M2::M20* v10 = v9_0->mutable_f_10();
  v10->add_f_0(Message2::M2::M20::E5_CONST_3);
  Message2::M2::M12* v11 = v9_0->mutable_f_7();
  v11->set_f_1(0x4182b7c4362403a0);
  v11->set_f_0(0x1fbf8156f46a6612);
  v11->set_f_2(true);
  Message2::M2::M25* v12 = v9_0->mutable_f_12();
  v12->set_f_1(true);
  v12->set_f_0(0x42020a4);
  v12->set_f_4(0x7b9b38332894d179);
  v12->set_f_2(true);
  Message2::M2::M15* v13 = v9_0->mutable_f_8();
  v13->set_f_3(true);
  v13->set_f_2(0xcba1a8136f07f7e3);
  v13->set_f_4(0xa941c7f);
  v13->set_f_0(0x42298e15cf47fb57);
  Message2::M2::M16* v14 = v9_0->mutable_f_9();
  v14->set_f_0(0x24d8fad);
  Message2::M2::M7* v15_0 = v9_0->add_f_6();
  v15_0->set_f_0(s->substr(0, 32));
  Message2::M2::M22* v16 = v9_0->mutable_f_11();
  v16->set_f_1(0x10);
  Message2::M2::M22::M37* v17 = v16->mutable_f_5();
  Message2::M2::M22::M37::M48* v18_0 = v17->add_f_4();
  v18_0->set_f_0(0x73bc570c);
  v18_0->set_f_1(0.608840);
  Message2::M2::M22::M37::M46* v19 = v17->mutable_f_3();
  v19->set_f_0(0xd5998bcf602398fe);
  v17->set_f_0(0xfc236eb859f15d20);
  v16->set_f_0(0xd488f953c6848850);
  v9_0->set_f_1(0xe5da9cb75510b56);
  Message2::M2::M29* v20_0 = v9_0->add_f_13();
  v20_0->set_f_0(0x23810e);
  v9_0->set_f_0(s->substr(0, 2));
  message->set_f_16(0xa2d21dfc1be662dc);
  Message2::M6* v21 = message->mutable_f_55();
  v21->set_f_0(0x3e);
  Message2::M6::M18* v22_0 = v21->add_f_4();
  Message2::M6::M18::M42* v23_0 = v22_0->add_f_3();
  Message2::M6::M18::M42::E7 array_1[8] = {
      Message2::M6::M18::M42::E7_CONST_4, Message2::M6::M18::M42::E7_CONST_3,
      Message2::M6::M18::M42::E7_CONST_2, Message2::M6::M18::M42::E7_CONST_1,
      Message2::M6::M18::M42::E7_CONST_1, Message2::M6::M18::M42::E7_CONST_1,
      Message2::M6::M18::M42::E7_CONST_4, Message2::M6::M18::M42::E7_CONST_3,
  };
  for (auto v : array_1) {
    v23_0->add_f_0(v);
  }
  v22_0->set_f_0(0x4242a2a);
  Message2::M6::M14* v24 = v21->mutable_f_3();
  v24->set_f_0(false);
  message->set_f_6(0x33440f08);
  message->set_f_2(0x8ea2c8f19982156f);
  message->set_f_11(0x61e733c4252dd7f2);
  message->set_f_1(true);
  message->set_f_5(0x36c4493);
  Message2::M4* v25_0 = message->add_f_52();
  Message2::M4::M28* v26_0 = v25_0->add_f_11();
  v26_0->set_f_1(s->substr(0, 26));
  v26_0->set_f_5(0xf2ebf977428d15a3);
  v26_0->set_f_4(true);
  v26_0->set_f_6(0x3346cf3b842f981b);
  v26_0->set_f_3(0x3acc1b5);
  v26_0->set_f_2(false);
  Message2::M4::M26* v27_0 = v25_0->add_f_9();
  Message2::M4::M26::M41* v28 = v27_0->mutable_f_5();
  v28->set_f_2(s->substr(0, 4));
  v28->set_f_4(0xd5a540930725ff7b);
  Message2::M4::M26::M41::M47* v29 = v28->mutable_f_12();
  v29->set_f_0(Message2::M4::M26::M41::M47::E9_CONST_4);
  v28->set_f_1(0xec6ae4969c2b3660);
  v27_0->set_f_3(0x2d4a);
  v27_0->set_f_2(0x3a);
  v27_0->set_f_1(0x6d9bb85);
  v27_0->set_f_0(0x41);
  Message2::M4::M10* v30 = v25_0->mutable_f_7();
  v30->set_f_2(0xd19658fe143dc9d2);
  v30->set_f_0(s->substr(0, 4));
  v30->set_f_1(0x5b9);
  v30->set_f_4(0x5b1abf3);
  v30->add_f_3(Message2::M4::M10::E4_CONST_5);
  v25_0->set_f_1(s->substr(0, 10));
  v25_0->set_f_0(0xaeb5069a4523959d);
  message->set_f_25(0x60);
  Message2::M3* v31 = message->mutable_f_49();
  v31->set_f_6(0x2d);
  v31->set_f_0(0x5b459b9fb4b5f69f);
  v31->set_f_7(0xb09775a);
  Message2::M3::M24* v32_0 = v31->add_f_18();
  v32_0->set_f_2(s->substr(0, 79));
  v32_0->set_f_3(0x77900a2);
  v32_0->set_f_0(0xb51bd071416ba3e4);
  v32_0->set_f_1(s->substr(0, 2));
  v31->set_f_3(0x53228b89);
  Message2::M3::E3 array_2[9] = {
      Message2::M3::E3_CONST_5, Message2::M3::E3_CONST_5,
      Message2::M3::E3_CONST_2, Message2::M3::E3_CONST_5,
      Message2::M3::E3_CONST_2, Message2::M3::E3_CONST_2,
      Message2::M3::E3_CONST_5, Message2::M3::E3_CONST_4,
      Message2::M3::E3_CONST_4,
  };
  for (auto v : array_2) {
    v31->add_f_5(v);
  }
  v31->set_f_4(0xf196efd);
  v31->set_f_1(false);
  message->set_f_29(s->substr(0, 355));
  message->set_f_28(0xf66253b2ad20b35d);
  Message2::M5* v33 = message->mutable_f_54();
  v33->set_f_1(0x19a4);
  Message2::M5::M11* v34 = v33->mutable_f_5();
  v34->set_f_0(0x4a);
  v34->set_f_1(s->substr(0, 317));
  Message2::M5::M21* v35 = v33->mutable_f_7();
  v35->set_f_0(0x97999bc2f4f7ab71);
  v33->set_f_0(0x7615f991);
  Message2::M5::M30* v36 = v33->mutable_f_8();
  v36->set_f_0(false);
  v36->set_f_1(s->substr(0, 27));
  v36->set_f_3(0xe67acce349a9bcdf);
  v36->set_f_2(false);
  message->set_f_26(s->substr(0, 422));
  message->set_f_7(Message2::E1_CONST_2);
  message->set_f_10(0xf7cb9fe47ba8bc49);
  message->set_f_15(0x653daa2249122397);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_27(s->substr(0, 4));
  message->set_f_18(0x89be197);
  message->set_f_5(0x5e);
  message->set_f_17(0x248024354a4025ee);
  message->set_f_26(s->substr(0, 8));
  message->set_f_13(0x5469663cabdb2bd5);
  message->set_f_22(0x3b);
  Message2::M4* v0_0 = message->add_f_52();
  Message2::M4::M26* v1_0 = v0_0->add_f_9();
  Message2::M4::M26::M41* v2 = v1_0->mutable_f_5();
  Message2::M4::M26::M41::M47* v3 = v2->mutable_f_12();
  v3->set_f_0(Message2::M4::M26::M41::M47::E9_CONST_3);
  v2->set_f_2(s->substr(0, 6));
  v2->set_f_1(0xbeb72c42149992e8);
  v2->set_f_4(0x20355a5614039803);
  v2->set_f_3(s->substr(0, 22));
  v2->set_f_0(0x72923);
  v1_0->set_f_3(0x4c);
  v1_0->set_f_1(0x58);
  Message2::M4::M28* v4_0 = v0_0->add_f_11();
  v4_0->set_f_4(true);
  v4_0->set_f_3(0x1a48);
  v4_0->set_f_0(s->substr(0, 6));
  v4_0->set_f_1(s->substr(0, 7));
  v4_0->set_f_2(false);
  Message2::M4::M31* v5 = v0_0->mutable_f_12();
  v5->set_f_1(0xd26efb139b231676);
  v5->set_f_0(0x79b45b7442d7f688);
  v0_0->set_f_0(0xaf916887e9ec79a6);
  v0_0->set_f_1(s->substr(0, 109));
  Message2::M4::M10* v6 = v0_0->mutable_f_7();
  v6->set_f_1(0xc3115fc);
  v6->set_f_4(0x51);
  v6->set_f_2(0x8c08783cbebed2ce);
  v6->add_f_3(Message2::M4::M10::E4_CONST_2);
  message->set_f_15(0x4b19a288f54a1090);
  Message2::M2* v7_0 = message->add_f_48();
  Message2::M2::M12* v8 = v7_0->mutable_f_7();
  v8->set_f_0(0x9a0a9775d0ae3758);
  Message2::M2::M12::M38* v9 = v8->mutable_f_10();
  v9->set_f_0(s->substr(0, 13));
  Message2::M2::M12::M38::M44* v10_0 = v9->add_f_2();
  v10_0->set_f_3(s->substr(0, 5));
  v10_0->set_f_2(s->substr(0, 21));
  v10_0->set_f_1(0x6ed0b92);
  Message2::M2::M12::M38::M44::M51* v11_0 = v10_0->add_f_7();
  v11_0->set_f_0(0xa4b912921231892f);
  v11_0->set_f_1(0x34);
  Message2::M2::M12::M38::M45* v12 = v9->mutable_f_3();
  v12->set_f_0(0xdcff);
  v8->set_f_2(false);
  v8->set_f_1(0xbb66a7f8cbfb245f);
  Message2::M2::M20* v13 = v7_0->mutable_f_10();
  Message2::M2::M20::M40* v14 = v13->mutable_f_3();
  v14->set_f_0(0xc067c3bb01ebd2b0);
  Message2::M2::M20::M40::M50* v15_0 = v14->add_f_6();
  v15_0->set_f_1(s->substr(0, 30));
  v15_0->set_f_2(0x1e);
  v15_0->set_f_4(0x3c);
  v13->add_f_0(Message2::M2::M20::E5_CONST_1);
  Message2::M2::M29* v16_0 = v7_0->add_f_13();
  v16_0->set_f_0(0x3b5bdede);
  Message2::M2::M16* v17 = v7_0->mutable_f_9();
  v17->set_f_0(0x195825);
  Message2::M2::M25* v18 = v7_0->mutable_f_12();
  v18->set_f_4(0xa231374c7b602e45);
  v18->set_f_2(true);
  message->set_f_21(0x17399b);
  message->set_f_9(0xfc2914930c2c8f2f);
  Message2::M5* v19 = message->mutable_f_54();
  Message2::M5::M30* v20 = v19->mutable_f_8();
  v20->set_f_2(false);
  v20->set_f_3(0x7d94755475d3c2b3);
  v20->set_f_0(false);
  v20->set_f_1(s->substr(0, 86));
  Message2::M5::M11* v21 = v19->mutable_f_5();
  v21->set_f_0(0xa884b1f);
  v21->set_f_1(s->substr(0, 2));
  Message2::M5::M21* v22 = v19->mutable_f_7();
  v22->set_f_0(0xce5c3ee8955bcd0b);
  v19->set_f_1(0x55);
  message->set_f_24(0x31add426);
  message->set_f_6(0x273de177);
  message->set_f_23(s->substr(0, 7));
  Message2::M6* v23 = message->mutable_f_55();
  Message2::M6::M18* v24_0 = v23->add_f_4();
  Message2::M6::M18::M42* v25_0 = v24_0->add_f_3();
  v25_0->add_f_0(Message2::M6::M18::M42::E7_CONST_1);
  v24_0->set_f_0(0x5a62728);
  Message2::M6::M14* v26 = v23->mutable_f_3();
  v26->set_f_0(false);
  v26->set_f_1(0x5c4aa52);
  message->set_f_25(0x4d);
  message->set_f_4(0x1e3d);
  message->set_f_0(0x5ac6c4f4);
  message->set_f_11(0x5667bf9f84acbb4b);
  message->set_f_7(Message2::E1_CONST_3);
  message->set_f_20(0x37b6);
  message->set_f_19(false);
  Message2::M1* v27_0 = message->add_f_47();
  Message2::M1::M17* v28 = v27_0->mutable_f_8();
  v28->set_f_0(true);
  Message2::M1::M32* v29_0 = v27_0->add_f_13();
  Message2::M1::M32::M39* v30_0 = v29_0->add_f_7();
  v30_0->set_f_0(0x1d8446);
  v30_0->set_f_1(0xad59f21e6b9651fc);
  v30_0->set_f_2(0x7656903bb646ed82);
  Message2::M1::M34* v31_0 = v27_0->add_f_15();
  v31_0->set_f_14(0.867695);
  v31_0->set_f_7(0xcd5bf70);
  v31_0->set_f_9(0xc993ed6538edbd8e);
  v31_0->set_f_10(s->substr(0, 1));
  v31_0->set_f_6(0.172490);
  v31_0->set_f_12(0x556d916c266880d0);
  v31_0->set_f_17(true);
  v31_0->set_f_5(0x976828bfb924482c);
  v31_0->set_f_20(true);
  v31_0->add_f_4(Message2::M1::M34::E6_CONST_5);
  v31_0->set_f_3(0xb8e833d89a5d37ef);
  v31_0->set_f_8(0.615653);
  v31_0->set_f_15(0x3d37);
  v31_0->set_f_19(0x7b433a27488df85d);
  v31_0->set_f_13(true);
  v31_0->set_f_1(0x34);
  v31_0->set_f_16(0x13131d5dccbb3fb9);
  v31_0->set_f_18(0x47e5033846fee11b);
  v31_0->set_f_0(true);
  v31_0->set_f_11(0xfac76);
  Message2::M1::M19* v32 = v27_0->mutable_f_9();
  v32->set_f_1(0x28);
  v32->set_f_0(0x1d);
  Message2::M1::M23* v33 = v27_0->mutable_f_10();
  v33->set_f_4(s->substr(0, 104));
  v33->set_f_0(s->substr(0, 7));
  v33->set_f_3(0x6d);
  v33->set_f_1(s->substr(0, 13));
  v33->set_f_2(0x52);
  message->set_f_28(0x42990937df0a7d1d);
  message->set_f_3(0xffa9dfe);
  message->set_f_10(0x9520029f7bf736dc);
  message->set_f_1(false);
  message->set_f_29(s->substr(0, 22));
  message->set_f_2(0x86af826a5b436e7e);
  Message2::M3* v34 = message->mutable_f_49();
  v34->add_f_5(Message2::M3::E3_CONST_1);
  v34->add_f_5(Message2::M3::E3_CONST_1);
  v34->set_f_0(0x46eb1800a67a2f80);
  v34->set_f_7(0x4a);
  v34->set_f_4(0x365ee696);
  v34->set_f_6(0x1a4944);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_18(0x2bb1ea1);
  message->set_f_2(0xf6922e5edf6c017a);
  message->set_f_3(0x2ca7f68);
  message->set_f_7(Message2::E1_CONST_2);
  message->set_f_9(0x19895c00fc343e83);
  message->set_f_13(0xba86186fc68f0dcd);
  message->set_f_21(0x3955);
  message->set_f_8(0x316417609930e8e1);
  message->set_f_19(true);
  Message2::M5* v0 = message->mutable_f_54();
  v0->set_f_1(0x5d);
  v0->set_f_0(0x4d4687dc);
  Message2::M5::M30* v1 = v0->mutable_f_8();
  v1->set_f_2(true);
  v1->set_f_3(0xe77dc24d1c63d1d8);
  v1->set_f_1(s->substr(0, 92));
  Message2::M5::M21* v2 = v0->mutable_f_7();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M5::M11* v3 = v0->mutable_f_5();
  v3->set_f_0(0x73);
  v3->set_f_1(s->substr(0, 1));
  message->set_f_27(s->substr(0, 64));
  Message2::M6* v4 = message->mutable_f_55();
  Message2::M6::M18* v5_0 = v4->add_f_4();
  v5_0->set_f_0(0x5f);
  Message2::M6::M18::M42* v6_0 = v5_0->add_f_3();
  Message2::M6::M18::M42::E7 array_0[18] = {
      Message2::M6::M18::M42::E7_CONST_1, Message2::M6::M18::M42::E7_CONST_5,
      Message2::M6::M18::M42::E7_CONST_5, Message2::M6::M18::M42::E7_CONST_3,
      Message2::M6::M18::M42::E7_CONST_4, Message2::M6::M18::M42::E7_CONST_2,
      Message2::M6::M18::M42::E7_CONST_2, Message2::M6::M18::M42::E7_CONST_1,
      Message2::M6::M18::M42::E7_CONST_3, Message2::M6::M18::M42::E7_CONST_2,
      Message2::M6::M18::M42::E7_CONST_1, Message2::M6::M18::M42::E7_CONST_5,
      Message2::M6::M18::M42::E7_CONST_3, Message2::M6::M18::M42::E7_CONST_5,
      Message2::M6::M18::M42::E7_CONST_2, Message2::M6::M18::M42::E7_CONST_4,
      Message2::M6::M18::M42::E7_CONST_2, Message2::M6::M18::M42::E7_CONST_2,
  };
  for (auto v : array_0) {
    v6_0->add_f_0(v);
  }
  Message2::M6::M14* v7 = v4->mutable_f_3();
  v7->set_f_1(0x28);
  v7->set_f_0(true);
  message->set_f_14(0xc54a2b1a6761b311);
  Message2::M1* v8_0 = message->add_f_47();
  v8_0->set_f_0(0xe975a);
  Message2::M1::M34* v9_0 = v8_0->add_f_15();
  v9_0->add_f_4(Message2::M1::M34::E6_CONST_4);
  v9_0->add_f_4(Message2::M1::M34::E6_CONST_5);
  v9_0->set_f_15(0x4c);
  v9_0->set_f_1(0x5e);
  v9_0->set_f_9(0xd4e15b0d048a346b);
  v9_0->set_f_19(0x87f773c1ed237e7c);
  v9_0->set_f_0(true);
  v9_0->set_f_17(false);
  v9_0->set_f_13(true);
  v9_0->set_f_6(0.009944);
  v9_0->set_f_20(false);
  v9_0->set_f_11(0xdd28be9);
  v9_0->set_f_12(0xf8ba8e0c3880ddc1);
  v9_0->set_f_18(0xa5e9e77c6a94342f);
  v9_0->set_f_7(0x31b933d);
  v9_0->set_f_5(0x9fa970b930b1a6e2);
  v9_0->set_f_2(0xaf5d4);
  v9_0->set_f_16(0xe3a7d602c625965b);
  v9_0->set_f_10(s->substr(0, 7));
  Message2::M1::M9* v10 = v8_0->mutable_f_5();
  v10->set_f_0(s->substr(0, 6));
  Message2::M1::M19* v11 = v8_0->mutable_f_9();
  v11->set_f_1(0xd0a24);
  v11->set_f_0(0x25);
  Message2::M1::M32* v12_0 = v8_0->add_f_13();
  Message2::M1::M32::M39* v13_0 = v12_0->add_f_7();
  v13_0->set_f_0(0x79);
  v13_0->set_f_1(0x8fb882d5db805bc);
  Message2::M1::M32::M35* v14 = v12_0->mutable_f_4();
  v14->set_f_4(0x300a);
  v14->set_f_0(true);
  v14->set_f_3(0x7c52c922);
  v14->set_f_2(0x88de6fa1b735b21d);
  v14->set_f_1(0x33b184f0);
  v12_0->set_f_0(0x18944892d97110c9);
  Message2::M1::M27* v15 = v8_0->mutable_f_12();
  v15->set_f_0(0x4698c41b31d9125e);
  Message2::M1::M8* v16 = v8_0->mutable_f_4();
  v16->set_f_1(0xde516872eb13f1a7);
  v16->set_f_2(0x55);
  v16->set_f_0(s->substr(0, 101));
  Message2::M4* v17_0 = message->add_f_52();
  Message2::M4::M31* v18 = v17_0->mutable_f_12();
  v18->set_f_2(0x69);
  v18->set_f_0(0x8ce31f8b76c1a9d6);
  v17_0->set_f_1(s->substr(0, 1));
  v17_0->set_f_0(0x3eece443d70034ea);
  Message2::M4::M26* v19_0 = v17_0->add_f_9();
  v19_0->set_f_3(0x8);
  v19_0->set_f_1(0x13c822);
  v19_0->set_f_2(0xc1d4657);
  v19_0->set_f_0(0x6086b88);
  message->set_f_4(0x1b0713);
  message->set_f_11(0x85e23ac66370d18d);
  message->set_f_26(s->substr(0, 106));
  Message2::M3* v20 = message->mutable_f_49();
  v20->set_f_1(false);
  v20->set_f_7(0x1c);
  Message2::M3::M24* v21_0 = v20->add_f_18();
  v21_0->set_f_3(0x66);
  v21_0->set_f_2(s->substr(0, 7));
  v21_0->set_f_1(s->substr(0, 32));
  v21_0->set_f_0(0x3cf05162e3c85b60);
  Message2::M3::M13* v22 = v20->mutable_f_16();
  Message2::M3::M13::M36* v23_0 = v22->add_f_5();
  v23_0->set_f_1(0x599ea37e6ee4b5fc);
  v23_0->set_f_3(0xad8f34);
  v23_0->set_f_2(0x4aa6cd421372f0a);
  v23_0->set_f_4(0xd1e7656);
  v22->set_f_1(0x9784115);
  v22->set_f_0(0x13cc643);
  v20->add_f_5(Message2::M3::E3_CONST_4);
  v20->add_f_5(Message2::M3::E3_CONST_4);
  v20->set_f_3(0x71f2270a);
  v20->set_f_0(0xbebda12ff771eb91);
  v20->set_f_6(0x1339);
  message->set_f_12(s->substr(0, 22));
  message->set_f_15(0x7de907e58b863d0c);
  message->set_f_20(0x23);
  message->set_f_25(0x4f);
  message->set_f_24(0x6ce20d24);
  message->set_f_23(s->substr(0, 106));
  message->set_f_29(s->substr(0, 427));
  message->set_f_5(0x9);
  message->set_f_17(0x4482ed738d88403d);
  message->set_f_30(0xdd56df48905c8337);
  message->set_f_1(true);
  Message2::M2* v24_0 = message->add_f_48();
  v24_0->set_f_0(s->substr(0, 3813));
  v24_0->set_f_2(Message2::M2::E2_CONST_4);
  v24_0->set_f_1(0xd3a1e6a564dca682);
  Message2::M2::M15* v25 = v24_0->mutable_f_8();
  v25->set_f_3(false);
  v25->set_f_4(0x7538674);
  v25->set_f_0(0x91fe0e32ffcedf10);
  v25->set_f_2(0x4ab342fccdbbad9f);
  Message2::M2::M7* v26_0 = v24_0->add_f_6();
  v26_0->set_f_0(s->substr(0, 8));
  Message2::M2::M22* v27 = v24_0->mutable_f_11();
  v27->set_f_3(s->substr(0, 115));
  v27->set_f_1(0x1b5654);
  v27->set_f_0(0x488633ffe31cd385);
  Message2::M2::M20* v28 = v24_0->mutable_f_10();
  Message2::M2::M20::E5 array_1[6] = {
      Message2::M2::M20::E5_CONST_4, Message2::M2::M20::E5_CONST_2,
      Message2::M2::M20::E5_CONST_1, Message2::M2::M20::E5_CONST_4,
      Message2::M2::M20::E5_CONST_4, Message2::M2::M20::E5_CONST_3,
  };
  for (auto v : array_1) {
    v28->add_f_0(v);
  }
  Message2::M2::M12* v29 = v24_0->mutable_f_7();
  v29->set_f_0(0xd406aff62d83dab7);
  v29->set_f_1(0x11f805ff2e9c49de);
  v29->set_f_2(true);
  Message2::M2::M25* v30 = v24_0->mutable_f_12();
  v30->set_f_2(true);
  v30->set_f_4(0x28bbda808d83231);
  v30->set_f_3(0x7a);
  v30->set_f_1(true);
  Message2::M2::M29* v31_0 = v24_0->add_f_13();
  (void)v31_0;  // Suppresses clang-tidy.
  Message2::M2::M16* v32 = v24_0->mutable_f_9();
  (void)v32;  // Suppresses clang-tidy.
  message->set_f_0(0x70d54c42);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_49();
  v0->set_f_6(0xfab);
  Message2::M3::M13* v1 = v0->mutable_f_16();
  Message2::M3::M13::M36* v2_0 = v1->add_f_5();
  v2_0->set_f_4(0x6a);
  v2_0->set_f_1(0x8892196a92b5f297);
  v2_0->set_f_0(0x74c145cab790b5a);
  v2_0->set_f_3(0x6a76430);
  v2_0->set_f_2(0x344d5e973405750);
  v1->set_f_0(0x12);
  v1->set_f_1(0x1e28);
  v0->set_f_4(0x6a22bb35);
  v0->set_f_7(0xbe44d73);
  v0->set_f_3(0x2876dbe5);
  v0->set_f_0(0x17237f298e3626a1);
  v0->set_f_2(0xe10e8c4bda84cdcb);
  message->set_f_7(Message2::E1_CONST_2);
  message->set_f_13(0x513a785b27f47320);
  message->set_f_11(0x99b2a8f03ea74e17);
  message->set_f_0(0x60a12009);
  message->set_f_28(0x6ef4e1c3d874434c);
  message->set_f_23(s->substr(0, 45));
  message->set_f_24(0x63eff502);
  Message2::M4* v3_0 = message->add_f_52();
  Message2::M4::M33* v4_0 = v3_0->add_f_14();
  v4_0->set_f_1(s->substr(0, 10));
  v4_0->set_f_4(s->substr(0, 110));
  v4_0->set_f_0(s->substr(0, 6));
  v4_0->set_f_2(0.759371);
  v4_0->set_f_3(0x3cda1ede0a818682);
  Message2::M4::M28* v5_0 = v3_0->add_f_11();
  v5_0->set_f_1(s->substr(0, 17));
  v5_0->set_f_5(0x550eef4aa1ec0a67);
  v5_0->set_f_0(s->substr(0, 16));
  v5_0->set_f_2(true);
  v5_0->set_f_4(true);
  v5_0->set_f_6(0x2534d47f70946232);
  Message2::M4::M26* v6_0 = v3_0->add_f_9();
  v6_0->set_f_3(0xb9993ab);
  v6_0->set_f_1(0x4e8dd57);
  v6_0->set_f_0(0x189e2a);
  v6_0->set_f_2(0x3750);
  Message2::M4::M26::M41* v7 = v6_0->mutable_f_5();
  Message2::M4::M26::M41::M47* v8 = v7->mutable_f_12();
  v8->set_f_0(Message2::M4::M26::M41::M47::E9_CONST_1);
  v7->set_f_0(0xc68521e);
  v7->set_f_1(0x954b5e9e096fa02c);
  v7->set_f_4(0x4636ef70e08c8c14);
  v7->set_f_2(s->substr(0, 29));
  v7->set_f_3(s->substr(0, 64));
  v3_0->set_f_1(s->substr(0, 1));
  Message2::M4::M10* v9 = v3_0->mutable_f_7();
  v9->set_f_4(0x3c);
  v9->set_f_2(0x94d4863189e5bc78);
  Message2::M4::M10::E4 array_0[8] = {
      Message2::M4::M10::E4_CONST_1, Message2::M4::M10::E4_CONST_2,
      Message2::M4::M10::E4_CONST_1, Message2::M4::M10::E4_CONST_5,
      Message2::M4::M10::E4_CONST_3, Message2::M4::M10::E4_CONST_4,
      Message2::M4::M10::E4_CONST_2, Message2::M4::M10::E4_CONST_4,
  };
  for (auto v : array_0) {
    v9->add_f_3(v);
  }
  v9->set_f_0(s->substr(0, 3));
  Message2::M4::M31* v10 = v3_0->mutable_f_12();
  v10->set_f_2(0xa);
  v10->set_f_0(0x89d41756334b84d9);
  v3_0->set_f_0(0x3bdcdaaf33d3135e);
  message->set_f_2(0xf6b8f81c29b89f19);
  message->set_f_5(0x65);
  message->set_f_15(0x9117d8bc02d4c3ca);
  Message2::M6* v11 = message->mutable_f_55();
  Message2::M6::M18* v12_0 = v11->add_f_4();
  v12_0->set_f_1(s->substr(0, 5));
  Message2::M6::M18::M43* v13 = v12_0->mutable_f_4();
  v13->set_f_3(0x60c21738c8a51ca7);
  v13->set_f_1(0xc6ed87b2c3644451);
  v13->set_f_2(s->substr(0, 14));
  v13->add_f_0(Message2::M6::M18::M43::E8_CONST_2);
  v13->add_f_0(Message2::M6::M18::M43::E8_CONST_5);
  v12_0->set_f_0(0x3e);
  v11->set_f_0(0xc);
  Message2::M6::M14* v14 = v11->mutable_f_3();
  v14->set_f_0(false);
  message->set_f_21(0xb968548);
  message->set_f_25(0x1e92);
  message->set_f_14(0x9f6fb47db5df910e);
  message->set_f_20(0x18d4);
  Message2::M2* v15_0 = message->add_f_48();
  v15_0->set_f_1(0x4cfe43e54915651);
  Message2::M2::M7* v16_0 = v15_0->add_f_6();
  v16_0->set_f_0(s->substr(0, 8));
  Message2::M2::M12* v17 = v15_0->mutable_f_7();
  v17->set_f_0(0xe3d591efdbc1230e);
  v17->set_f_2(true);
  v17->set_f_1(0xd0058969901b5f26);
  Message2::M2::M12::M38* v18 = v17->mutable_f_10();
  v18->set_f_0(s->substr(0, 179));
  Message2::M2::M12::M38::M45* v19 = v18->mutable_f_3();
  (void)v19;  // Suppresses clang-tidy.
  Message2::M2::M12::M38::M44* v20_0 = v18->add_f_2();
  v20_0->set_f_0(0xabb4f13d1696300a);
  v20_0->set_f_3(s->substr(0, 7));
  v20_0->set_f_2(s->substr(0, 3));
  Message2::M2::M12::M38::M44::M51* v21_0 = v20_0->add_f_7();
  v21_0->set_f_1(0x3cb8601);
  v21_0->set_f_0(0x632edda68b53710a);
  v20_0->set_f_1(0x183dc);
  v15_0->set_f_0(s->substr(0, 1));
  Message2::M2::M25* v22 = v15_0->mutable_f_12();
  v22->set_f_1(true);
  v22->set_f_0(0x44);
  v22->set_f_2(false);
  v22->set_f_4(0xc9e21c1d95cb12a0);
  v22->set_f_3(0xcae65cb);
  v15_0->set_f_2(Message2::M2::E2_CONST_5);
  Message2::M2::M20* v23 = v15_0->mutable_f_10();
  v23->add_f_0(Message2::M2::M20::E5_CONST_5);
  Message2::M2::M20::M40* v24 = v23->mutable_f_3();
  Message2::M2::M20::M40::M50* v25_0 = v24->add_f_6();
  v25_0->set_f_2(0x44d7a68);
  v25_0->set_f_0(0xe43b2e73b71a006b);
  v25_0->set_f_3(0x34);
  v25_0->set_f_1(s->substr(0, 52));
  v25_0->set_f_4(0x2e);
  v25_0->set_f_5(0xeb2bd83f29453b69);
  v24->set_f_0(0x775f6e2629dc8491);
  Message2::M2::M20::M40::M49* v26 = v24->mutable_f_4();
  v26->set_f_0(s->substr(0, 165));
  v26->set_f_2(s->substr(0, 16));
  v26->set_f_1(s->substr(0, 17));
  Message2::M2::M15* v27 = v15_0->mutable_f_8();
  v27->set_f_1(0x289d3694);
  v27->set_f_4(0x28);
  v27->set_f_3(true);
  v27->set_f_2(0x87b2afb52ef0af79);
  Message2::M2::M16* v28 = v15_0->mutable_f_9();
  v28->set_f_0(0xd554303);
  message->set_f_27(s->substr(0, 184));
  Message2::M1* v29_0 = message->add_f_47();
  Message2::M1::M8* v30 = v29_0->mutable_f_4();
  v30->set_f_1(0x7cbbb099bef94b12);
  v30->set_f_0(s->substr(0, 6));
  v30->set_f_2(0x372e);
  Message2::M1::M34* v31_0 = v29_0->add_f_15();
  v31_0->set_f_7(0x43);
  v31_0->set_f_14(0.212670);
  v31_0->set_f_3(0x6242cf21f3455ff4);
  v31_0->add_f_4(Message2::M1::M34::E6_CONST_4);
  v31_0->set_f_11(0xa5fec0);
  v31_0->set_f_12(0x3d8d5ce8b7b8dc53);
  v31_0->set_f_17(true);
  v31_0->set_f_13(true);
  v31_0->set_f_9(0xebefcb0e9df7fdd3);
  v31_0->set_f_0(true);
  v31_0->set_f_10(s->substr(0, 7));
  v31_0->set_f_16(0x79b855ea5193f223);
  v31_0->set_f_6(0.284013);
  v31_0->set_f_5(0xab05d687c7e61ea8);
  v31_0->set_f_19(0xd6fdd696431d774a);
  v31_0->set_f_1(0x20);
  v31_0->set_f_8(0.492371);
  v31_0->set_f_15(0x24);
  Message2::M1::M19* v32 = v29_0->mutable_f_9();
  v32->set_f_1(0x1116);
  Message2::M1::M27* v33 = v29_0->mutable_f_12();
  v33->set_f_0(0xbcb1e5b95411ceae);
  Message2::M1::M9* v34 = v29_0->mutable_f_5();
  v34->set_f_0(s->substr(0, 60));
  v29_0->set_f_0(0x3fe3);
  Message2::M1::M32* v35_0 = v29_0->add_f_13();
  Message2::M1::M32::M39* v36_0 = v35_0->add_f_7();
  v36_0->set_f_2(0x3307a8072f5fb965);
  v36_0->set_f_0(0x195);
  v36_0->set_f_1(0xa7d80ce3e0e4fdcb);
  v35_0->set_f_0(0x73be876e1f560524);
  Message2::M1::M32::M35* v37 = v35_0->mutable_f_4();
  v37->set_f_2(0xe5569b9deb4a2501);
  v37->set_f_4(0x62);
  v37->set_f_1(0x194dcfc3);
  v37->set_f_3(0x4f7adf84);
  Message2::M1::M23* v38 = v29_0->mutable_f_10();
  v38->set_f_2(0x34);
  v38->set_f_0(s->substr(0, 20));
  v38->set_f_4(s->substr(0, 124));
  v38->set_f_3(0xf7795d7);
  Message2::M1::M17* v39 = v29_0->mutable_f_8();
  v39->set_f_0(false);
  message->set_f_12(s->substr(0, 1));
  message->set_f_4(0x3c2c);
  message->set_f_3(0x653e9019);
  message->set_f_10(0xf24fde6a06f5b8ce);
  Message2::M5* v40 = message->mutable_f_54();
  v40->set_f_0(0x7f12dc6);
  Message2::M5::M21* v41 = v40->mutable_f_7();
  v41->set_f_0(0x20548d2e94a15e22);
  Message2::M5::M11* v42 = v40->mutable_f_5();
  v42->set_f_1(s->substr(0, 116));
  v42->set_f_0(0x1d5df0);
  v40->set_f_1(0x23);
  Message2::M5::M30* v43 = v40->mutable_f_8();
  v43->set_f_0(false);
  v43->set_f_1(s->substr(0, 29));
  v43->set_f_3(0xe83a20292f8b2c0);
  message->set_f_22(0xe8ff527);
  message->set_f_26(s->substr(0, 18));
  message->set_f_6(0x74e01ded);
  message->set_f_30(0x351e146ab0b0abe3);
  message->set_f_9(0xd25fbae0b2945bf3);
  message->set_f_18(0xbd109bb);
  message->set_f_17(0x67ca1fc1c4c36da0);
  message->set_f_8(0xd6f3f2085fc97923);
  message->set_f_19(true);
  message->set_f_1(true);
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
}  // namespace fleetbench::rpc::P2::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
