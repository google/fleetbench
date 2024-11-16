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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message0.pb.h"

namespace fleetbench::rpc::P7::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_29();
  v0->set_f_0(s->substr(0, 6));
  message->set_f_1(0xcdbfa3);
  message->set_f_13(false);
  Message0::M9* v1 = message->mutable_f_36();
  Message0::M9::M16* v2 = v1->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M9::M15* v3 = v1->mutable_f_2();
  v3->set_f_0(0x6c1eeae);
  Message0::M9::M15::M35* v4_0 = v3->add_f_3();
  Message0::M9::M15::M35::M53* v5 = v4_0->mutable_f_6();
  v5->set_f_0(0x58);
  Message0::M9::M15::M35::M49* v6_0 = v4_0->add_f_3();
  v6_0->set_f_0(0xe1d162);
  Message0::M9::M15::M35::M49::M66* v7 = v6_0->mutable_f_4();
  v7->set_f_0(Message0::M9::M15::M35::M49::M66::E16_CONST_2);
  Message0::M9::M15::M35::M49::M66::M85* v8 = v7->mutable_f_17();
  Message0::M9::M15::M35::M49::M66::M85::M92* v9 = v8->mutable_f_2();
  v9->set_f_0(s->substr(0, 1));
  Message0::M9::M15::M35::M49::M66::M85::M92::M95* v10_0 = v9->add_f_3();
  v10_0->set_f_5(s->substr(0, 4));
  v10_0->set_f_4(s->substr(0, 7));
  Message0::M9::M15::M35::M49::M66::M85::M92::M95::M104* v11 =
      v10_0->mutable_f_12();
  v11->set_f_0(0x2e40);
  v11->set_f_5(s->substr(0, 18));
  v10_0->set_f_1(0x1d685e63d);
  v10_0->set_f_2(0x6564347);
  int64_t array_1[19] = {
      0x4e, 0x2b, 0x7c, 0x2c, 0x45, 0x2c, 0x4c, 0x3d,   0x61, 0x4b,
      0x60, 0x49, 0x54, 0x64, 0x3f, 0x19, 0x18, 0x30f5, 0x74,
  };
  for (auto v : array_1) {
    v7->add_f_3(v);
  }
  v7->set_f_2(s->substr(0, 1));
  v7->set_f_4(false);
  v7->set_f_9(s->substr(0, 6));
  v7->set_f_5(0x309a68a02);
  Message0::M9::M15::M37* v12 = v3->mutable_f_4();
  v12->set_f_0(s->substr(0, 5));
  Message0::M3* v13 = message->mutable_f_27();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M12* v14_0 = message->add_f_41();
  v14_0->set_f_0(s->substr(0, 5));
  v14_0->set_f_2(0x3993066147da8e);
  Message0::M6* v15 = message->mutable_f_33();
  v15->set_f_2(0x1be75fa);
  Message0::M6::M27* v16_0 = v15->add_f_5();
  Message0::M6::M27::M43* v17 = v16_0->mutable_f_3();
  v17->set_f_0(0x75);
  v17->set_f_9(Message0::M6::M27::M43::E12_CONST_4);
  v17->set_f_8(s->substr(0, 4));
  Message0::M6::M27::M43::M55* v18_0 = v17->add_f_25();
  Message0::M6::M27::M43::M55::M67* v19 = v18_0->mutable_f_4();
  v19->set_f_0(s->substr(0, 7));
  v17->set_f_4(0x53cca06);
  v17->set_f_1(s->substr(0, 12));
  v15->set_f_0(s->substr(0, 19));
  v15->set_f_1(0x31f2);
  message->set_f_11(0x13d9);
  message->set_f_2(s->substr(0, 16));
  Message0::M7* v20_0 = message->add_f_34();
  Message0::M7::M20* v21 = v20_0->mutable_f_10();
  v21->set_f_1(0x8e61c3a);
  v21->set_f_5(0.235106);
  v21->set_f_0(false);
  v21->set_f_4(s->substr(0, 6));
  v21->set_f_2(Message0::M7::M20::E4_CONST_1);
  v20_0->set_f_1(s->substr(0, 12));
  v20_0->set_f_3(s->substr(0, 7));
  Message0::M8* v22 = message->mutable_f_35();
  v22->set_f_5(0x1e);
  v22->set_f_1(s->substr(0, 7));
  v22->set_f_0(s->substr(0, 8));
  v22->set_f_3(0xd942c5a);
  v22->set_f_6(s->substr(0, 22));
  int64_t array_2[8] = {
      0x52, 0x42, 0x5d, 0x4a, 0x7, 0x18, 0x22, 0x16,
  };
  for (auto v : array_2) {
    message->add_f_7(v);
  }
  message->set_f_3(0x4d5ecbf1d);
  message->set_f_8(0.042230);
  message->set_f_5(0x30);
  Message0::M13* v23_0 = message->add_f_44();
  Message0::M13::M33* v24 = v23_0->mutable_f_4();
  Message0::M13::M33::M36* v25 = v24->mutable_f_9();
  Message0::M13::M33::M36::M57* v26 = v25->mutable_f_4();
  v26->set_f_0(s->substr(0, 21));
  Message0::M13::M33::M36::M57::M62* v27_0 = v26->add_f_6();
  Message0::M13::M33::M36::M57::M62::M79* v28 = v27_0->mutable_f_5();
  Message0::M13::M33::M36::M57::M62::M79::M93* v29_0 = v28->add_f_4();
  v29_0->set_f_0(s->substr(0, 31));
  v28->set_f_0(0xaabd742);
  Message0::M13::M33::M36::M57::M62::M83* v30_0 = v27_0->add_f_6();
  v30_0->set_f_3(0x95434a7);
  Message0::M13::M33::M36::M57::M62::M83::M91* v31 = v30_0->mutable_f_11();
  v31->set_f_1(0xa7be324);
  v31->set_f_2(s->substr(0, 27));
  v31->set_f_0(s->substr(0, 2));
  v30_0->set_f_1(false);
  v30_0->set_f_0(0x6303d9f);
  Message0::M13::M33::M36::M57::M62::M75* v32 = v27_0->mutable_f_2();
  Message0::M13::M33::M36::M57::M62::M75::M87* v33 = v32->mutable_f_4();
  Message0::M13::M33::M36::M57::M62::M75::M87::M98* v34 = v33->mutable_f_4();
  (void)v34;  // Suppresses clang-tidy.
  v33->set_f_0(0x210f8f360);
  v27_0->set_f_0(s->substr(0, 8));
  Message0::M13::M33::M36::M57::M62::M77* v35_0 = v27_0->add_f_3();
  v35_0->set_f_0(Message0::M13::M33::M36::M57::M62::M77::E21_CONST_3);
  v24->set_f_1(s->substr(0, 3));
  v23_0->set_f_0(true);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M5* v0 = message->mutable_f_31();
  v0->set_f_0(s->substr(0, 41));
  Message0::M11* v1_0 = message->add_f_38();
  Message0::M11::M31* v2 = v1_0->mutable_f_11();
  v2->set_f_0(0xc);
  v1_0->set_f_0(0x2);
  Message0::M11::M21* v3 = v1_0->mutable_f_7();
  v3->set_f_1(0.427817);
  message->set_f_8(0.130880);
  message->set_f_1(0xbed389486f046d);
  message->set_f_5(0x6f);
  message->set_f_10(true);
  Message0::M7* v4_0 = message->add_f_34();
  v4_0->set_f_2(s->substr(0, 3));
  Message0::M8* v5 = message->mutable_f_35();
  v5->set_f_2(s->substr(0, 14));
  v5->set_f_3(0x9965eba);
  v5->set_f_4(true);
  v5->set_f_1(s->substr(0, 6));
  v5->set_f_5(0xd49e5f7);
  v5->set_f_6(s->substr(0, 24));
  v5->set_f_0(s->substr(0, 6));
  message->set_f_0(0xdbbced9);
  message->set_f_3(0x1cffc3d);
  Message0::M2* v6_0 = message->add_f_26();
  v6_0->set_f_0(s->substr(0, 6));
  message->set_f_4(s->substr(0, 5));
  Message0::M6* v7 = message->mutable_f_33();
  Message0::M6::M28* v8 = v7->mutable_f_6();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M6::M27* v9_0 = v7->add_f_5();
  (void)v9_0;  // Suppresses clang-tidy.
  v7->set_f_2(0x1c03966);
  v7->set_f_1(0x459a9fc);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_3(0x55);
  Message0::M10* v0 = message->mutable_f_37();
  v0->set_f_0(0x63983ff);
  Message0::M10::M17* v1_0 = v0->add_f_3();
  v1_0->set_f_0(0xa280fc8);
  Message0::M1* v2 = message->mutable_f_24();
  Message0::M1::M18* v3 = v2->mutable_f_4();
  v3->set_f_0(s->substr(0, 15));
  message->add_f_7(0x57);
  message->add_f_7(0x54);
  message->add_f_7(0x3a);
  message->add_f_7(0x11);
  Message0::M11* v4_0 = message->add_f_38();
  v4_0->set_f_3(0xdfde51d);
  Message0::M11::M26* v5 = v4_0->mutable_f_10();
  v5->set_f_2(0x478d8d843);
  Message0::M11::M26::M42* v6_0 = v5->add_f_11();
  (void)v6_0;  // Suppresses clang-tidy.
  v5->set_f_6(false);
  v5->set_f_0(Message0::M11::M26::E6_CONST_3);
  v5->set_f_4(s->substr(0, 5));
  v5->set_f_5(s->substr(0, 10));
  v5->set_f_1(Message0::M11::M26::E7_CONST_1);
  message->set_f_13(false);
  message->set_f_4(s->substr(0, 4));
  Message0::M12* v7_0 = message->add_f_41();
  v7_0->set_f_1(0x66);
  v7_0->set_f_0(s->substr(0, 8));
  Message0::M12::M19* v8 = v7_0->mutable_f_7();
  v8->set_f_4(s->substr(0, 1));
  v8->set_f_2(Message0::M12::M19::E3_CONST_1);
  v8->set_f_3(0x6c1cb21);
  v8->set_f_5(s->substr(0, 19));
  v8->set_f_1(0x3e0edd4);
  Message0::M12::M29* v9 = v7_0->mutable_f_10();
  Message0::M12::M29::M40* v10 = v9->mutable_f_3();
  Message0::M12::M29::M40::M52* v11_0 = v10->add_f_3();
  v11_0->set_f_1(0x67);
  v11_0->set_f_2(s->substr(0, 2));
  v11_0->set_f_0(s->substr(0, 8));
  Message0::M12::M29::M40::M52::M64* v12_0 = v11_0->add_f_7();
  (void)v12_0;  // Suppresses clang-tidy.
  v10->set_f_0(0x59);
  v9->set_f_0(0xbdd3ad7);
  message->set_f_12(Message0::E1_CONST_2);
  Message0::M9* v13 = message->mutable_f_36();
  v13->set_f_0(true);
  Message0::M9::M16* v14 = v13->mutable_f_4();
  Message0::M9::M16::M38* v15 = v14->mutable_f_6();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_0(Message0::M9::M16::E2_CONST_3);
  Message0::M9::M25* v16 = v13->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  Message0::M9::M15* v17 = v13->mutable_f_2();
  Message0::M9::M15::M35* v18_0 = v17->add_f_3();
  Message0::M9::M15::M35::M49* v19_0 = v18_0->add_f_3();
  (void)v19_0;  // Suppresses clang-tidy.
  v18_0->set_f_0(s->substr(0, 3));
  message->set_f_9(s->substr(0, 4));
  message->set_f_2(s->substr(0, 4));
  Message0::M2* v20_0 = message->add_f_26();
  Message0::M2::M24* v21_0 = v20_0->add_f_2();
  v21_0->set_f_0(true);
  message->set_f_6(0x865bc1a);
  message->set_f_8(0.287456);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_9(s->substr(0, 5));
  message->set_f_13(false);
  message->set_f_4(s->substr(0, 5));
  message->set_f_11(0x4c471ea);
  Message0::M11* v0_0 = message->add_f_38();
  Message0::M11::M31* v1 = v0_0->mutable_f_11();
  v1->set_f_0(0x22);
  Message0::M11::M26* v2 = v0_0->mutable_f_10();
  v2->set_f_3(0x79);
  v2->set_f_1(Message0::M11::M26::E7_CONST_2);
  v2->set_f_2(0x28c22a1be);
  v2->set_f_4(s->substr(0, 5));
  Message0::M11::M26::M42* v3_0 = v2->add_f_11();
  (void)v3_0;  // Suppresses clang-tidy.
  Message0::M11::M32* v4 = v0_0->mutable_f_12();
  v4->set_f_0(0xa55e9aa);
  v4->set_f_1(0x5c4733c);
  message->set_f_6(0xbe5e4f);
  message->set_f_3(0x46a84e0d3);
  message->set_f_1(0x3410196f13c);
  message->set_f_2(s->substr(0, 7));
  message->set_f_10(true);
  Message0::M10* v5 = message->mutable_f_37();
  v5->set_f_0(0x1e9c2a);
  Message0::M10::M17* v6_0 = v5->add_f_3();
  v6_0->set_f_0(0x21);
  Message0::M12* v7_0 = message->add_f_41();
  v7_0->set_f_0(s->substr(0, 5));
  v7_0->set_f_2(0x3ecc03af3);
  Message0::M12::M19* v8 = v7_0->mutable_f_7();
  v8->set_f_5(s->substr(0, 15));
  Message0::M8* v9 = message->mutable_f_35();
  v9->set_f_4(false);
  v9->set_f_0(s->substr(0, 16));
  v9->set_f_6(s->substr(0, 6));
  v9->set_f_2(s->substr(0, 34));
  Message0::M5* v10 = message->mutable_f_31();
  v10->set_f_0(s->substr(0, 8));
  int64_t array_0[5] = {
      0x17, 0x2d, 0x59, 0x1c, 0x3f,
  };
  for (auto v : array_0) {
    message->add_f_7(v);
  }
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
}  // namespace fleetbench::rpc::P7::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
