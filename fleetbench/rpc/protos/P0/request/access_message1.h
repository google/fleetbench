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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message1.pb.h"

namespace fleetbench::rpc::P0::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_15();
  Message1::M1::M13* v1 = v0->mutable_f_9();
  v1->set_f_0(s->substr(0, 8));
  Message1::M1::M14* v2 = v0->mutable_f_10();
  v2->set_f_1(0x2e);
  v2->set_f_0(false);
  Message1::M1::M7* v3_0 = v0->add_f_5();
  v3_0->set_f_1(0x43e447c87e60);
  Message1::M1::M7* v3_1 = v0->add_f_5();
  v3_1->set_f_0(false);
  v3_1->set_f_1(0x6b);
  v3_1->set_f_2(0x1478c3f7e77);
  v0->set_f_0(false);
  message->set_f_1(s->substr(0, 84));
  message->set_f_3(0x1c);
  Message1::M4* v4 = message->mutable_f_18();
  v4->set_f_2(s->substr(0, 11));
  v4->set_f_1(0x1b);
  Message1::M4::M10* v5 = v4->mutable_f_10();
  v5->set_f_0(0x2f);
  message->set_f_6(s->substr(0, 16));
  Message1::M3* v6_0 = message->add_f_17();
  v6_0->set_f_1(0x17);
  v6_0->set_f_0(0x2a);
  Message1::M3::M9* v7 = v6_0->mutable_f_6();
  v7->set_f_0(false);
  Message1::M3* v6_1 = message->add_f_17();
  Message1::M3::M16* v8 = v6_1->mutable_f_10();
  v8->set_f_6(true);
  v8->set_f_3(0x3c55918572ea);
  v8->set_f_13(Message1::M3::M16::E1_CONST_4);
  v8->set_f_9(false);
  v8->set_f_7(s->substr(0, 3));
  v8->set_f_8(0x2d8467758ad);
  v8->set_f_12(true);
  v8->set_f_0(true);
  v6_1->set_f_1(0x6c);
  v6_1->set_f_0(0x1d52);
  Message1::M3::M9* v9 = v6_1->mutable_f_6();
  v9->set_f_0(true);
  message->set_f_5(0.695329);
  message->set_f_4(0.603528);
  message->set_f_2(s->substr(0, 5));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_3(0x38);
  message->set_f_4(0.533280);
  Message1::M3* v0_0 = message->add_f_17();
  Message1::M3::M16* v1 = v0_0->mutable_f_10();
  v1->set_f_10(0x462652b00a90db69);
  v1->set_f_9(false);
  v1->set_f_1(s->substr(0, 32));
  v1->set_f_8(0x50);
  v1->set_f_7(s->substr(0, 20));
  v1->set_f_3(0x3b57);
  v1->set_f_4(s->substr(0, 46));
  v1->set_f_14(s->substr(0, 361));
  v1->set_f_6(false);
  v1->set_f_11(s->substr(0, 8));
  v1->set_f_13(Message1::M3::M16::E1_CONST_2);
  v1->set_f_0(false);
  v1->set_f_12(true);
  v0_0->set_f_1(0x4c);
  v0_0->set_f_0(0x2e);
  Message1::M3::M9* v2 = v0_0->mutable_f_6();
  v2->set_f_0(true);
  Message1::M3* v0_1 = message->add_f_17();
  v0_1->set_f_0(0x3ce1);
  Message1::M3::M9* v3 = v0_1->mutable_f_6();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M3::M16* v4 = v0_1->mutable_f_10();
  v4->set_f_4(s->substr(0, 21));
  v4->set_f_13(Message1::M3::M16::E1_CONST_3);
  v4->set_f_12(false);
  v4->set_f_7(s->substr(0, 90));
  v4->set_f_8(0x3de3);
  v4->set_f_0(true);
  v4->set_f_5(true);
  v4->set_f_1(s->substr(0, 38));
  message->set_f_0(s->substr(0, 63));
  Message1::M2* v5_0 = message->add_f_16();
  Message1::M2::M5* v6 = v5_0->mutable_f_3();
  v6->set_f_0(true);
  v5_0->set_f_0(false);
  Message1::M2::M11* v7 = v5_0->mutable_f_5();
  Message1::M2::M11::M18* v8_0 = v7->add_f_4();
  v8_0->set_f_0(Message1::M2::M11::M18::E2_CONST_3);
  v8_0->set_f_1(0x6c);
  Message1::M2::M11::M18* v8_1 = v7->add_f_4();
  v8_1->set_f_1(0x28);
  v8_1->set_f_0(Message1::M2::M11::M18::E2_CONST_5);
  v7->set_f_0(s->substr(0, 2));
  Message1::M2* v5_1 = message->add_f_16();
  Message1::M2::M11* v9 = v5_1->mutable_f_5();
  Message1::M2::M11::M18* v10_0 = v9->add_f_4();
  v10_0->set_f_0(Message1::M2::M11::M18::E2_CONST_2);
  v10_0->set_f_1(0x5b);
  Message1::M2::M11::M18* v10_1 = v9->add_f_4();
  (void)v10_1;  // Suppresses clang-tidy.
  v5_1->set_f_0(false);
  message->set_f_2(s->substr(0, 5));
  message->set_f_5(0.747633);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_3(0x341f);
  Message1::M2* v0_0 = message->add_f_16();
  v0_0->set_f_0(false);
  Message1::M2::M11* v1 = v0_0->mutable_f_5();
  v1->set_f_0(s->substr(0, 4));
  Message1::M2::M11::M18* v2_0 = v1->add_f_4();
  v2_0->set_f_0(Message1::M2::M11::M18::E2_CONST_5);
  v2_0->set_f_1(0x64);
  Message1::M2::M11::M18* v2_1 = v1->add_f_4();
  v2_1->set_f_0(Message1::M2::M11::M18::E2_CONST_3);
  Message1::M2* v0_1 = message->add_f_16();
  Message1::M2::M11* v3 = v0_1->mutable_f_5();
  v3->set_f_0(s->substr(0, 74));
  Message1::M2::M5* v4 = v0_1->mutable_f_3();
  v4->set_f_0(false);
  Message1::M2::M5::M17* v5_0 = v4->add_f_2();
  Message1::M2::M5::M17::M20* v6 = v5_0->mutable_f_6();
  v6->set_f_0(Message1::M2::M5::M17::M20::E3_CONST_2);
  v6->set_f_5(0x7d);
  v6->set_f_38(0xc0490a96b2cbf2);
  v6->set_f_12(s->substr(0, 5));
  v6->set_f_3(true);
  v6->set_f_35(s->substr(0, 6));
  v6->set_f_25(0x14);
  v6->set_f_10(0x18);
  v6->set_f_7(0x795495adf);
  v6->set_f_23(false);
  v6->set_f_19(0x5a);
  v6->set_f_17(0.752406);
  v6->set_f_34(s->substr(0, 31));
  v6->set_f_4(Message1::M2::M5::M17::M20::E5_CONST_2);
  v6->set_f_18(s->substr(0, 21));
  v6->set_f_16(0x6f);
  v6->set_f_39(0x248914e00);
  v6->set_f_8(s->substr(0, 30));
  v6->set_f_20(0xfb12592cbb);
  v6->set_f_9(0x8cb);
  v6->set_f_40(0.146649);
  v6->set_f_27(0x2ffdc02dcbe);
  v6->set_f_21(0.309298);
  v6->set_f_15(false);
  v6->set_f_30(0x4a);
  v6->set_f_1(Message1::M2::M5::M17::M20::E4_CONST_4);
  v6->set_f_13(0xc79b122ead4f);
  v6->set_f_31(s->substr(0, 1));
  v6->set_f_28(0.152121);
  v6->set_f_37(0xb7bac9f);
  v6->set_f_41(0x299f);
  v6->set_f_6(0x23);
  v6->set_f_2(0x6b);
  v6->set_f_26(0x22df);
  v5_0->set_f_0(0x1e);
  Message1::M2::M5::M17* v5_1 = v4->add_f_2();
  Message1::M2::M5::M17::M20* v7 = v5_1->mutable_f_6();
  v7->set_f_17(0.035249);
  v7->set_f_5(0x68);
  v7->set_f_40(0.568673);
  v7->set_f_16(0x48);
  v7->set_f_29(0.606061);
  v7->set_f_0(Message1::M2::M5::M17::M20::E3_CONST_2);
  v7->set_f_14(0x46);
  v7->set_f_36(false);
  v7->set_f_19(0xe);
  v7->set_f_27(0x71);
  v7->set_f_42(0x4d);
  v7->set_f_4(Message1::M2::M5::M17::M20::E5_CONST_4);
  v7->set_f_41(0x61);
  v7->set_f_33(0.748841);
  v7->set_f_12(s->substr(0, 23));
  v7->set_f_35(s->substr(0, 8));
  v7->set_f_13(0x5586a601ec46);
  v7->set_f_37(0x74);
  v7->set_f_8(s->substr(0, 5));
  v7->set_f_20(0x3bdd);
  v7->set_f_7(0x8bb);
  v7->set_f_21(0.237162);
  v7->set_f_11(true);
  v7->set_f_25(0x3f);
  v7->set_f_32(s->substr(0, 23));
  v7->set_f_43(true);
  v7->set_f_10(0x3f88f913f15);
  v7->set_f_24(0xa0b);
  v7->set_f_39(0x581212706);
  v7->set_f_15(false);
  Message1::M2::M12* v8 = v0_1->mutable_f_6();
  (void)v8;  // Suppresses clang-tidy.
  v0_1->set_f_0(true);
  message->set_f_4(0.914742);
  message->set_f_6(s->substr(0, 72));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_15();
  Message1::M1::M7* v1_0 = v0->add_f_5();
  v1_0->set_f_2(0x1079ba8b1aa46);
  Message1::M1::M7* v1_1 = v0->add_f_5();
  v1_1->set_f_2(0x1e54);
  v1_1->set_f_0(false);
  v1_1->set_f_1(0x56);
  Message1::M1::M13* v2 = v0->mutable_f_9();
  v2->set_f_0(s->substr(0, 71));
  Message1::M1::M14* v3 = v0->mutable_f_10();
  v3->set_f_0(true);
  v3->set_f_1(0x2b27);
  message->set_f_0(s->substr(0, 8));
  message->set_f_1(s->substr(0, 248));
  message->set_f_4(0.632591);
  Message1::M2* v4_0 = message->add_f_16();
  Message1::M2::M12* v5 = v4_0->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M2::M11* v6 = v4_0->mutable_f_5();
  Message1::M2::M11::M18* v7_0 = v6->add_f_4();
  v7_0->set_f_0(Message1::M2::M11::M18::E2_CONST_1);
  v7_0->set_f_1(0x4d);
  Message1::M2::M11::M18* v7_1 = v6->add_f_4();
  v7_1->set_f_0(Message1::M2::M11::M18::E2_CONST_5);
  v6->set_f_0(s->substr(0, 10529));
  Message1::M2* v4_1 = message->add_f_16();
  v4_1->set_f_0(false);
  Message1::M2::M5* v8 = v4_1->mutable_f_3();
  v8->set_f_0(false);
  Message1::M4* v9 = message->mutable_f_18();
  v9->set_f_1(0x31);
  Message1::M4::M6* v10_0 = v9->add_f_8();
  Message1::M4::M6::M19* v11 = v10_0->mutable_f_2();
  v11->set_f_2(s->substr(0, 22));
  v11->set_f_0(s->substr(0, 254));
  v11->set_f_1(0x15bbaabbd63);
  v11->set_f_3(0xc52e63cc85cbb0e);
  Message1::M4::M6* v10_1 = v9->add_f_8();
  Message1::M4::M6::M19* v12 = v10_1->mutable_f_2();
  v12->set_f_0(s->substr(0, 19));
  v12->set_f_1(0x623ccd210);
  v12->set_f_3(0x200fe8d6dbb5b9ba);
  v10_1->set_f_0(0x20);
  Message1::M4::M10* v13 = v9->mutable_f_10();
  v13->set_f_0(0x6beae6a);
  Message1::M4::M15* v14 = v9->mutable_f_11();
  v14->set_f_0(0.622860);
  message->set_f_6(s->substr(0, 103));
  message->set_f_2(s->substr(0, 3));
  Message1::M3* v15_0 = message->add_f_17();
  Message1::M3::M16* v16 = v15_0->mutable_f_10();
  v16->set_f_10(0x3d22c58de4580fdb);
  v16->set_f_12(false);
  v16->set_f_13(Message1::M3::M16::E1_CONST_4);
  v16->set_f_1(s->substr(0, 25));
  v16->set_f_0(true);
  v16->set_f_5(true);
  v16->set_f_4(s->substr(0, 2));
  v16->set_f_3(0x33fd96a12);
  v16->set_f_11(s->substr(0, 5));
  v16->set_f_14(s->substr(0, 32));
  Message1::M3::M9* v17 = v15_0->mutable_f_6();
  v17->set_f_0(true);
  v15_0->set_f_0(0x2ede);
  v15_0->set_f_1(0xb);
  Message1::M3* v15_1 = message->add_f_17();
  v15_1->set_f_1(0x37);
  v15_1->set_f_0(0x489);
  Message1::M3::M16* v18 = v15_1->mutable_f_10();
  v18->set_f_4(s->substr(0, 11));
  v18->set_f_13(Message1::M3::M16::E1_CONST_5);
  v18->set_f_0(true);
  v18->set_f_9(true);
  v18->set_f_1(s->substr(0, 18));
  v18->set_f_10(0x3d5567eb971e7763);
  v18->set_f_7(s->substr(0, 9));
  v18->set_f_12(true);
  v18->set_f_14(s->substr(0, 432));
  v18->set_f_11(s->substr(0, 3));
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE1_H_
