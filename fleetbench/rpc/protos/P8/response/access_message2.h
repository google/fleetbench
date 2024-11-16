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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/response/Message2.pb.h"

namespace fleetbench::rpc::P8::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_6(0x998);
  message->set_f_11(0x3c1d);
  Message2::M7* v0 = message->mutable_f_41();
  v0->set_f_9(0.518969);
  v0->set_f_12(0x9);
  v0->set_f_0(Message2::M7::E2_CONST_5);
  v0->set_f_1(true);
  v0->set_f_11(true);
  v0->set_f_2(0x78);
  v0->add_f_4(s->substr(0, 9));
  v0->set_f_3(0.565646);
  v0->set_f_10(s->substr(0, 45));
  message->set_f_10(0x348e);
  Message2::M8* v1 = message->mutable_f_42();
  v1->set_f_1(0x67);
  v1->set_f_2(false);
  v1->set_f_5(0x85464);
  v1->set_f_4(Message2::M8::E6_CONST_5);
  v1->set_f_3(Message2::M8::E5_CONST_3);
  v1->set_f_0(0xdf1714502cfc36);
  Message2::M1* v2_0 = message->add_f_31();
  v2_0->set_f_0(s->substr(0, 12));
  Message2::M1* v2_1 = message->add_f_31();
  (void)v2_1;  // Suppresses clang-tidy.
  Message2::M20* v3 = message->mutable_f_65();
  v3->set_f_0(s->substr(0, 7));
  v3->set_f_8(s->substr(0, 15));
  v3->set_f_7(0x46c);
  v3->set_f_3(0.771574);
  message->set_f_9(s->substr(0, 7));
  message->set_f_4(0x11e66f);
  Message2::M14* v4 = message->mutable_f_54();
  v4->set_f_1(0x7b);
  Message2::M17* v5 = message->mutable_f_60();
  v5->set_f_3(0x17951e3117f8a);
  v5->set_f_0(s->substr(0, 3));
  v5->set_f_1(0xf485e1843801ea);
  v5->set_f_2(s->substr(0, 38));
  Message2::M19* v6 = message->mutable_f_64();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_8(0x9e5cf);
  Message2::M18* v7 = message->mutable_f_62();
  v7->set_f_0(0xe);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_0(s->substr(0, 3));
  message->set_f_3(s->substr(0, 23));
  Message2::M15* v0 = message->mutable_f_57();
  v0->set_f_0(Message2::M15::E8_CONST_1);
  Message2::M9* v1_0 = message->add_f_43();
  v1_0->set_f_0(false);
  Message2::M9* v1_1 = message->add_f_43();
  (void)v1_1;  // Suppresses clang-tidy.
  message->set_f_5(s->substr(0, 9));
  message->set_f_2(s->substr(0, 9));
  Message2::M14* v2 = message->mutable_f_54();
  v2->set_f_0(s->substr(0, 4));
  message->set_f_11(0x7b);
  Message2::M12* v3_0 = message->add_f_50();
  v3_0->set_f_0(0.128360);
  v3_0->set_f_3(s->substr(0, 8));
  v3_0->set_f_2(0x585045a402fe);
  message->set_f_10(0x4);
  Message2::M8* v4 = message->mutable_f_42();
  v4->set_f_4(Message2::M8::E6_CONST_2);
  Message2::M6* v5_0 = message->add_f_38();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M5* v6_0 = message->add_f_37();
  v6_0->set_f_0(0x71a47e55);
  Message2::M5::M25* v7 = v6_0->mutable_f_4();
  Message2::M5::M25::M44* v8 = v7->mutable_f_7();
  (void)v8;  // Suppresses clang-tidy.
  Message2::M5::M25::M49* v9_0 = v7->add_f_8();
  v9_0->set_f_0(0.179007);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M14* v0 = message->mutable_f_54();
  v0->set_f_0(s->substr(0, 2));
  message->set_f_7(s->substr(0, 23));
  Message2::M15* v1 = message->mutable_f_57();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 88));
  Message2::M9* v2_0 = message->add_f_43();
  (void)v2_0;  // Suppresses clang-tidy.
  Message2::M10* v3 = message->mutable_f_46();
  v3->set_f_0(Message2::M10::E7_CONST_1);
  Message2::M13* v4 = message->mutable_f_53();
  v4->set_f_0(0x5a);
  message->set_f_0(s->substr(0, 3));
  message->set_f_3(s->substr(0, 15));
  Message2::M12* v5_0 = message->add_f_50();
  v5_0->set_f_0(0.285868);
  Message2::M11* v6 = message->mutable_f_48();
  v6->set_f_0(0.162870);
  v6->set_f_1(0x606a01b9);
  Message2::M11::M24* v7 = v6->mutable_f_12();
  Message2::M11::M24::M38* v8 = v7->mutable_f_8();
  (void)v8;  // Suppresses clang-tidy.
  Message2::M11::M24::M39* v9 = v7->mutable_f_10();
  Message2::M11::M24::M39::M55* v10 = v9->mutable_f_6();
  Message2::M11::M24::M39::M55::M64* v11_0 = v10->add_f_3();
  Message2::M11::M24::M39::M55::M64::M70* v12 = v11_0->mutable_f_10();
  v12->set_f_0(true);
  Message2::M11::M24::M39::M55::M64::M70::M88* v13_0 = v12->add_f_9();
  v13_0->set_f_4(0x15);
  v13_0->set_f_1(0.741024);
  v13_0->set_f_2(0x1e);
  Message2::M11::M24::M39::M55::M64::M70::M84* v14_0 = v12->add_f_7();
  v14_0->set_f_0(true);
  Message2::M11::M24::M54* v15 = v7->mutable_f_13();
  (void)v15;  // Suppresses clang-tidy.
  v7->set_f_0(0x7067e24);
  Message2::M17* v16 = message->mutable_f_60();
  v16->set_f_3(0x34078d8eb02525);
  v16->set_f_1(0xf3183ecd66fb);
  v16->set_f_0(s->substr(0, 3));
  Message2::M17::M21* v17 = v16->mutable_f_13();
  Message2::M17::M21::M31* v18 = v17->mutable_f_3();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M17::M21::M51* v19 = v17->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  v17->set_f_0(0x1091);
  Message2::M5* v20_0 = message->add_f_37();
  v20_0->set_f_0(0x616223cd);
  Message2::M5::M25* v21 = v20_0->mutable_f_4();
  Message2::M5::M25::M34* v22_0 = v21->add_f_4();
  (void)v22_0;  // Suppresses clang-tidy.
  Message2::M5::M25::M49* v23_0 = v21->add_f_8();
  v23_0->set_f_0(0.203284);
  Message2::M5::M25::M44* v24 = v21->mutable_f_7();
  v24->set_f_0(0xb19);
  Message2::M18* v25 = message->mutable_f_62();
  v25->set_f_0(0x42);
  Message2::M16* v26 = message->mutable_f_59();
  Message2::M16::M29* v27_0 = v26->add_f_5();
  v27_0->set_f_0(s->substr(0, 16));
  Message2::M16::M29* v27_1 = v26->add_f_5();
  v27_1->set_f_0(s->substr(0, 7));
  Message2::M1* v28_0 = message->add_f_31();
  v28_0->set_f_0(s->substr(0, 80));
  Message2::M1* v28_1 = message->add_f_31();
  (void)v28_1;  // Suppresses clang-tidy.
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_10(0x50);
  Message2::M12* v0_0 = message->add_f_50();
  v0_0->set_f_1(true);
  v0_0->set_f_2(0xc0e01b3);
  v0_0->set_f_3(s->substr(0, 23));
  Message2::M14* v1 = message->mutable_f_54();
  v1->set_f_1(0x4e);
  Message2::M11* v2 = message->mutable_f_48();
  Message2::M11::M24* v3 = v2->mutable_f_12();
  v3->set_f_0(0xf161c);
  v2->set_f_0(0.493452);
  Message2::M10* v4 = message->mutable_f_46();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M1* v5_0 = message->add_f_31();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 17));
  message->set_f_5(s->substr(0, 9));
  Message2::M13* v6 = message->mutable_f_53();
  v6->set_f_0(0xba3);
  message->set_f_4(0x1055c6);
  Message2::M9* v7_0 = message->add_f_43();
  v7_0->set_f_0(true);
  Message2::M9* v7_1 = message->add_f_43();
  v7_1->set_f_0(true);
  Message2::M8* v8 = message->mutable_f_42();
  v8->set_f_1(0x4b43020bdb3904);
  v8->set_f_3(Message2::M8::E5_CONST_5);
  v8->set_f_0(0x4f);
  v8->set_f_4(Message2::M8::E6_CONST_3);
  message->set_f_1(0x7d);
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
}  // namespace fleetbench::rpc::P8::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
