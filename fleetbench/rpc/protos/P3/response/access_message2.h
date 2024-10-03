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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/response/Message2.pb.h"

namespace fleetbench::rpc::P3::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_24(0x71d9b7e9d3dd347b);
  message->set_f_17(0x49);
  message->set_f_7(0.767349);
  message->set_f_14(0x3abb406a440c04);
  Message2::E1 array_1[10] = {
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_4, Message2::E1_CONST_4,
      Message2::E1_CONST_2, Message2::E1_CONST_4, Message2::E1_CONST_3,
      Message2::E1_CONST_1,
  };
  for (auto v : array_1) {
    message->add_f_6(v);
  }
  message->set_f_10(0x72f4af52afd1bbcb);
  Message2::M1* v0 = message->mutable_f_31();
  Message2::M1::M20* v1 = v0->mutable_f_4();
  v1->set_f_0(0.303600);
  v1->set_f_1(0x98d94bd2859477);
  Message2::M1::M20::M24* v2 = v1->mutable_f_9();
  v2->set_f_0(0.385154);
  v2->set_f_1(0.303004);
  v2->set_f_2(0x270f);
  Message2::M1::M20::M30* v3 = v1->mutable_f_11();
  v3->set_f_0(0.746493);
  Message2::M1::M20::M27* v4 = v1->mutable_f_10();
  v4->set_f_0(0.951120);
  v1->set_f_6(0.462395);
  Message2::M1::M11* v5 = v0->mutable_f_3();
  v5->set_f_2(0x20);
  v5->set_f_3(0x77c5e1d8);
  Message2::M1::M11::M39* v6 = v5->mutable_f_9();
  v6->set_f_2(0.106954);
  Message2::M1::M11::M34* v7 = v5->mutable_f_8();
  (void)v7;  // Suppresses clang-tidy.
  v5->set_f_1(0xaeb4a2ffe06630);
  v0->set_f_0(0.590534);
  message->set_f_23(0.082385);
  message->set_f_18(0x6e967882a1b68d);
  message->set_f_11(0.019017);
  Message2::M6* v8 = message->mutable_f_37();
  v8->set_f_16(Message2::M6::E3_CONST_4);
  v8->set_f_17(0x17fe86af7b09ffff);
  v8->set_f_14(0.485005);
  v8->set_f_0(0.574537);
  v8->set_f_19(0xc78e5a6da853b);
  v8->set_f_18(0.074363);
  v8->set_f_1(0x548a17e56a285a);
  v8->set_f_15(0.406360);
  v8->set_f_11(0.799829);
  v8->set_f_8(0x4ae74212727f98);
  v8->set_f_10(0.242434);
  Message2::M6::M18* v9 = v8->mutable_f_26();
  v9->set_f_3(Message2::M6::M18::E4_CONST_5);
  v9->set_f_0(0x11166c380d7522d6);
  v8->set_f_2(0.197883);
  message->set_f_15(0x24);
  Message2::M2* v10 = message->mutable_f_33();
  Message2::M2::M14* v11 = v10->mutable_f_4();
  Message2::M2::M14::M31* v12 = v11->mutable_f_2();
  (void)v12;  // Suppresses clang-tidy.
  v10->set_f_0(false);
  Message2::M2::M12* v13 = v10->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  Message2::M2::M10* v14 = v10->mutable_f_2();
  v14->set_f_0(0x7a);
  Message2::M2::M10::M37* v15 = v14->mutable_f_2();
  v15->set_f_0(0.968339);
  Message2::M5* v16 = message->mutable_f_36();
  Message2::M5::M22* v17 = v16->mutable_f_5();
  v17->add_f_12(false);
  v17->set_f_4(0.340000);
  v17->set_f_8(0.794409);
  v17->set_f_15(0x9f5a0ed7dd3f4b);
  v17->set_f_13(0x12);
  v17->set_f_2(0x742068446270dd);
  v17->set_f_16(0.102346);
  v17->set_f_10(0x707d5f567327ef08);
  v17->set_f_14(0xc76f05c6c42b91);
  v17->set_f_0(0.959300);
  Message2::M5::M22::M38* v18 = v17->mutable_f_28();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_11(0.301094);
  v17->set_f_18(0.269733);
  v17->set_f_19(0x3b);
  Message2::M5::M21* v19 = v16->mutable_f_4();
  v19->set_f_0(0x31);
  v16->set_f_0(0x7a);
  message->set_f_21(0.579059);
  message->set_f_1(0x499724fda5ce3811);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_19(0x45);
  Message2::M5* v0 = message->mutable_f_36();
  Message2::M5::M21* v1 = v0->mutable_f_4();
  v1->set_f_0(0x7e);
  v0->set_f_0(0x5);
  Message2::M5::M22* v2 = v0->mutable_f_5();
  v2->set_f_14(0xa6e9e95c68ce1c);
  v2->set_f_11(0.689804);
  v2->add_f_12(true);
  v2->set_f_6(0x1b80ec6d6a9df053);
  v2->set_f_4(0.656433);
  v2->set_f_3(0.779838);
  v2->set_f_1(0x219773fd30f9ba9a);
  v2->set_f_7(false);
  v2->set_f_2(0x21f26bfa12ca7f1d);
  v2->set_f_10(0xd50b9db92857067);
  v2->set_f_18(0.975091);
  Message2::M5::M22::M38* v3 = v2->mutable_f_28();
  (void)v3;  // Suppresses clang-tidy.
  v2->set_f_5(0.279401);
  v2->set_f_13(0x2c36);
  v2->set_f_21(0.355112);
  v2->set_f_22(0x55caa1ef);
  Message2::M5::M16* v4 = v0->mutable_f_3();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M1* v5 = message->mutable_f_31();
  v5->set_f_0(0.528836);
  message->add_f_6(Message2::E1_CONST_1);
  message->set_f_10(0x57667cd34d5bb4d4);
  message->set_f_11(0.026517);
  message->set_f_18(0xb4b1170b7a0b32);
  message->set_f_21(0.182684);
  message->set_f_14(0x7c943c2bd9f202);
  Message2::M3* v6 = message->mutable_f_34();
  v6->set_f_0(0x76);
  message->set_f_1(0x1d25d4a54989de6c);
  message->set_f_15(0x1c3a);
  message->set_f_25(0x2e9480c48050550b);
  Message2::M4* v7 = message->mutable_f_35();
  v7->set_f_0(0.209353);
  v7->set_f_1(0x6e);
  Message2::M4::M8* v8 = v7->mutable_f_6();
  v8->set_f_0(0.855055);
  Message2::M4::M7* v9 = v7->mutable_f_5();
  Message2::M4::M7::M28* v10 = v9->mutable_f_2();
  v10->set_f_1(0x22e2);
  v7->set_f_2(0.715035);
  message->set_f_22(0x68);
  Message2::M6* v11 = message->mutable_f_37();
  v11->set_f_19(0x4bc685ea3074b1);
  v11->set_f_17(0x683d7c1d445127d);
  v11->set_f_16(Message2::M6::E3_CONST_3);
  v11->set_f_0(0.824056);
  v11->set_f_7(0.193300);
  v11->set_f_12(0.372938);
  v11->set_f_4(0.712272);
  v11->set_f_15(0.369709);
  v11->set_f_13(0x394afcbbca25c917);
  v11->set_f_6(0.798924);
  Message2::M6::M18* v12 = v11->mutable_f_26();
  v12->set_f_2(0x771d5c321ce246);
  v12->set_f_0(0x7706d42c159253ee);
  v11->set_f_9(Message2::M6::E2_CONST_1);
  v11->set_f_2(0.347085);
  message->set_f_2(0x3d23f49d8495b717);
  message->set_f_9(0.924070);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_34();
  Message2::M3::M13* v1 = v0->mutable_f_2();
  v1->set_f_4(0x5892d68998dc91fe);
  v1->set_f_2(0x2d);
  v1->set_f_0(0.274574);
  Message2::M4* v2 = message->mutable_f_35();
  Message2::M4::M7* v3 = v2->mutable_f_5();
  (void)v3;  // Suppresses clang-tidy.
  v2->set_f_0(0.805228);
  v2->set_f_1(0x60);
  message->set_f_20(0x2b);
  message->set_f_4(0.071709);
  message->set_f_16(0.267761);
  message->set_f_21(0.964712);
  message->set_f_14(0x1533e5dc22002b);
  message->set_f_7(0.467920);
  message->set_f_19(0x39);
  message->set_f_12(0x21cb82c2bd9859dd);
  Message2::E1 array_0[11] = {
      Message2::E1_CONST_2, Message2::E1_CONST_5, Message2::E1_CONST_3,
      Message2::E1_CONST_4, Message2::E1_CONST_3, Message2::E1_CONST_3,
      Message2::E1_CONST_5, Message2::E1_CONST_3, Message2::E1_CONST_2,
      Message2::E1_CONST_5, Message2::E1_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_6(v);
  }
  message->set_f_18(0x68ea885f3a8131);
  Message2::M6* v4 = message->mutable_f_37();
  v4->set_f_4(0.535757);
  v4->set_f_11(0.468725);
  v4->set_f_15(0.020755);
  v4->set_f_7(0.208559);
  v4->set_f_0(0.707018);
  v4->set_f_16(Message2::M6::E3_CONST_2);
  v4->set_f_10(0.913574);
  v4->set_f_14(0.646861);
  v4->set_f_2(0.150900);
  message->set_f_17(0x59);
  message->set_f_24(0x20111fff16e1c616);
  message->set_f_3(0x26541d9aa874e1ec);
  message->set_f_5(0x2c76);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M6* v0 = message->mutable_f_37();
  v0->set_f_10(0.526034);
  v0->set_f_16(Message2::M6::E3_CONST_3);
  v0->set_f_5(0x544988d65b1ae081);
  v0->set_f_14(0.192263);
  v0->set_f_18(0.193841);
  v0->set_f_8(0x1c10381684b121);
  v0->set_f_1(0x1a5d8ec366d28c);
  Message2::M6::M18* v1 = v0->mutable_f_26();
  v1->set_f_2(0x192c8a3ba0b07e);
  v1->set_f_0(0x57f29e783b841b19);
  v0->set_f_3(false);
  v0->set_f_17(0x4f8394852506924c);
  v0->set_f_19(0x19);
  v0->set_f_2(0.198109);
  v0->set_f_11(0.405347);
  message->set_f_1(0x30d7e6bb9d29734a);
  message->set_f_20(0x1);
  message->set_f_14(0xd222c207a438c8);
  Message2::M5* v2 = message->mutable_f_36();
  Message2::M5::M21* v3 = v2->mutable_f_4();
  v3->set_f_0(0x24);
  Message2::M5::M15* v4 = v2->mutable_f_2();
  Message2::M5::M15::M25* v5 = v4->mutable_f_3();
  v5->set_f_0(Message2::M5::M15::M25::E7_CONST_2);
  v4->set_f_0(0x386b9c7246af2d96);
  Message2::M3* v6 = message->mutable_f_34();
  Message2::M3::M13* v7 = v6->mutable_f_2();
  v7->set_f_0(0.063191);
  v7->set_f_1(0xc);
  v7->set_f_4(0x155246b6c0e78bfa);
  message->set_f_13(0x67);
  message->set_f_3(0x25018e9861cc43d2);
  message->set_f_5(0x16);
  message->set_f_7(0.506135);
  message->set_f_21(0.335266);
  message->set_f_9(0.950474);
  message->set_f_10(0x464de7e7a040bef0);
  message->set_f_23(0.007615);
  Message2::M4* v8 = message->mutable_f_35();
  v8->set_f_0(0.579214);
  Message2::M4::M8* v9 = v8->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  v8->set_f_1(0x48);
  message->set_f_18(0x3c01fa1d42a1d3);
  Message2::M2* v10 = message->mutable_f_33();
  Message2::M2::M19* v11 = v10->mutable_f_5();
  v11->set_f_1(0x38);
  Message2::M2::M19::M35* v12 = v11->mutable_f_3();
  (void)v12;  // Suppresses clang-tidy.
  v11->set_f_0(0x38);
  v10->set_f_0(true);
  message->set_f_0(0.184458);
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
}  // namespace fleetbench::rpc::P3::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_
