// Copyright 2025 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: DO NOT EDIT! This file is auto-generated.

#include "fleetbench/proto/access_message18.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message18.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message18_Set_1(Message18* message, std::string* s) {
  Message18::M1* v0 = message->mutable_f_3();
  v0->set_f_0(s->substr(0, 7));
  Message18::M1::M2* v1 = v0->mutable_f_9();
  Message18::M1::M2::M8* v2 = v1->mutable_f_5();
  Message18::M1::M2::M8::M10* v3 = v2->mutable_f_2();
  (void)v3;  // Suppresses clang-tidy.
  Message18::M1::M2::M8::M13* v4 = v2->mutable_f_4();
  Message18::M1::M2::M8::M13::M16* v5 = v4->mutable_f_4();
  v5->set_f_0(Message18::M1::M2::M8::M13::M16::E6_CONST_2);
  Message18::M1::M2::M8::M13::M17* v6_0 = v4->add_f_5();
  v6_0->set_f_0(Message18::M1::M2::M8::M13::M17::E7_CONST_2);
  v4->set_f_0(s->substr(0, 8));
  v2->set_f_0(0x19fb2bceb8806b37);
  Message18::M1::M2::M7* v7 = v1->mutable_f_4();
  Message18::M1::M2::M7::M12* v8 = v7->mutable_f_3();
  Message18::M1::M2::M7::M12::M15* v9 = v8->mutable_f_3();
  Message18::M1::M2::M7::M12::M15::M21* v10 = v9->mutable_f_2();
  (void)v10;  // Suppresses clang-tidy.
  Message18::M1::M2::M6* v11 = v1->mutable_f_3();
  Message18::M1::M2::M6::M9* v12 = v11->mutable_f_3();
  Message18::M1::M2::M6::M9::M14* v13 = v12->mutable_f_2();
  Message18::M1::M2::M6::M9::M14::M19* v14 = v13->mutable_f_2();
  (void)v14;  // Suppresses clang-tidy.
  Message18::M1::M2::M6::M9::M14::M22* v15_0 = v13->add_f_3();
  v15_0->set_f_11(s->substr(0, 15));
  v15_0->set_f_1(0xe);
  v15_0->set_f_8(s->substr(0, 4));
  v15_0->set_f_2(0x58885);
  Message18::M1::M2::M6::M9::M18* v16_0 = v12->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v17_0 = v16_0->add_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M25* v18_0 = v17_0->add_f_4();
  v18_0->set_f_6(true);
  v18_0->set_f_18(Message18::M1::M2::M6::M9::M18::M20::M25::E13_CONST_4);
  v18_0->set_f_5(s->substr(0, 27));
  v18_0->set_f_19(0x6c);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v19_0 = v18_0->add_f_43();
  v19_0->set_f_0(s->substr(0, 22));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v20 =
      v19_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v21 =
      v20->mutable_f_2();
  v21->set_f_5(false);
  v21->set_f_6(0x31709);
  v21->add_f_11(0x43);
  v21->add_f_11(0x7144d);
  v21->add_f_11(0x34e02f6);
  v21->set_f_8(s->substr(0, 6));
  v18_0->set_f_14(0.105437);
  v18_0->set_f_36(s->substr(0, 27));
  v18_0->set_f_8(0x5a);
  v18_0->set_f_11(0x28);
  v18_0->set_f_31(s->substr(0, 8));
  v18_0->set_f_10(0x50f19ca9289969);
  v18_0->set_f_22(0x37);
  v18_0->add_f_7(0x462ad13180e5d4e6);
  v18_0->set_f_12(0x61a2a);
  v18_0->set_f_1(0x4f);
  Message18::M1::M2::M6::M9::M18::M20::M25* v18_1 = v17_0->add_f_4();
  v18_1->set_f_24(true);
  v18_1->set_f_29(0x7d);
  v18_1->set_f_28(Message18::M1::M2::M6::M9::M18::M20::M25::E17_CONST_2);
  v18_1->set_f_2(true);
  v18_1->set_f_18(Message18::M1::M2::M6::M9::M18::M20::M25::E13_CONST_4);
  v18_1->set_f_16(s->substr(0, 6));
  v18_1->set_f_33(s->substr(0, 16));
  v18_1->set_f_3(s->substr(0, 15));
  v18_1->set_f_14(0.646721);
  v18_1->set_f_10(0x18);
  v18_1->set_f_6(true);
  v18_1->set_f_34(s->substr(0, 16));
  v18_1->set_f_19(0x75978af);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v22_0 = v18_1->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v23 =
      v22_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v24 =
      v23->mutable_f_2();
  v24->add_f_4(s->substr(0, 4));
  v24->set_f_10(0x5965b69);
  v23->set_f_0(s->substr(0, 5));
  v18_1->set_f_1(0x1b);
  v18_1->set_f_22(0x39845cf96);
  v18_1->set_f_30(0x52);
  Message18::M1::M2::M6::M9::M18::M20::M24* v25 = v17_0->mutable_f_3();
  v25->set_f_0(Message18::M1::M2::M6::M9::M18::M20::M24::E10_CONST_3);
  v16_0->set_f_0(0xe7b6d9b2c8ad27);
  Message18::M1::M2::M6::M9::M18* v16_1 = v12->add_f_3();
  v16_1->set_f_0(0xf260a713e68cd7);
  Message18::M1::M2::M6::M9::M18::M20* v26_0 = v16_1->add_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M24* v27 = v26_0->mutable_f_3();
  (void)v27;  // Suppresses clang-tidy.
  Message18::M1::M2::M6::M9::M18::M20::M25* v28_0 = v26_0->add_f_4();
  v28_0->set_f_6(false);
  v28_0->set_f_29(0xab0da);
  v28_0->set_f_26(Message18::M1::M2::M6::M9::M18::M20::M25::E15_CONST_2);
  v28_0->set_f_30(0x42c6976);
  v28_0->set_f_11(0x5b);
  v28_0->set_f_32(s->substr(0, 18));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v29_0 = v28_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v30 =
      v29_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v31 =
      v30->mutable_f_2();
  v31->set_f_1(
      Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29::E18_CONST_1);
  v31->set_f_8(s->substr(0, 4));
  v31->set_f_3(0x2f311f5cb42);
  v31->set_f_14(0x16);
  v28_0->set_f_2(true);
  v28_0->set_f_17(Message18::M1::M2::M6::M9::M18::M20::M25::E12_CONST_3);
  v28_0->set_f_28(Message18::M1::M2::M6::M9::M18::M20::M25::E17_CONST_3);
  v28_0->set_f_15(s->substr(0, 39));
  v26_0->set_f_0(0x67d913e00);
  Message18::M1::M2::M6::M11* v32_0 = v11->add_f_4();
  (void)v32_0;  // Suppresses clang-tidy.
  v0->add_f_3(Message18::M1::E2_CONST_4);
  v0->add_f_3(Message18::M1::E2_CONST_2);
  v0->add_f_3(Message18::M1::E2_CONST_1);
  v0->add_f_3(Message18::M1::E2_CONST_1);
}
void Message18_Set_2(Message18* message, std::string* s) {
  Message18::M1* v0 = message->mutable_f_3();
  v0->set_f_5(Message18::M1::E3_CONST_1);
  Message18::M1::M3* v1_0 = v0->add_f_10();
  (void)v1_0;  // Suppresses clang-tidy.
  v0->add_f_3(Message18::M1::E2_CONST_3);
  v0->set_f_2(Message18::M1::E1_CONST_4);
  Message18::M1::M2* v2 = v0->mutable_f_9();
  Message18::M1::M2::M7* v3 = v2->mutable_f_4();
  v3->set_f_0(false);
  Message18::M1::M2::M7::M12* v4 = v3->mutable_f_3();
  Message18::M1::M2::M7::M12::M15* v5 = v4->mutable_f_3();
  Message18::M1::M2::M7::M12::M15::M21* v6 = v5->mutable_f_2();
  (void)v6;  // Suppresses clang-tidy.
  v4->set_f_0(Message18::M1::M2::M7::M12::E5_CONST_1);
  Message18::M1::M2::M8* v7 = v2->mutable_f_5();
  v7->set_f_0(0xb2a259e00cfe649);
  Message18::M1::M2::M8::M10* v8 = v7->mutable_f_2();
  (void)v8;  // Suppresses clang-tidy.
  Message18::M1::M2::M6* v9 = v2->mutable_f_3();
  Message18::M1::M2::M6::M11* v10_0 = v9->add_f_4();
  (void)v10_0;  // Suppresses clang-tidy.
  Message18::M1::M2::M6::M9* v11 = v9->mutable_f_3();
  Message18::M1::M2::M6::M9::M18* v12_0 = v11->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v13_0 = v12_0->add_f_2();
  v13_0->set_f_0(0xcac12);
  Message18::M1::M2::M6::M9::M18::M20::M24* v14 = v13_0->mutable_f_3();
  (void)v14;  // Suppresses clang-tidy.
  Message18::M1::M2::M6::M9::M18::M20::M25* v15_0 = v13_0->add_f_4();
  v15_0->set_f_32(s->substr(0, 19));
  v15_0->set_f_9(Message18::M1::M2::M6::M9::M18::M20::M25::E11_CONST_1);
  v15_0->set_f_30(0x4c);
  v15_0->set_f_12(0x236802e2a);
  v15_0->set_f_27(Message18::M1::M2::M6::M9::M18::M20::M25::E16_CONST_4);
  v15_0->set_f_4(0x100da892584dc);
  v15_0->set_f_28(Message18::M1::M2::M6::M9::M18::M20::M25::E17_CONST_3);
  v15_0->set_f_6(true);
  v15_0->set_f_23(0x104cc11c3b341);
  v15_0->set_f_20(0xf93e2279202f2);
  v15_0->set_f_1(0x37);
  v15_0->set_f_29(0xc2440778ccf393);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v16_0 = v15_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v17 =
      v16_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v18 =
      v17->mutable_f_2();
  v18->set_f_9(0x62);
  v18->add_f_11(0x1130b6);
  v18->add_f_11(0x1);
  v18->set_f_8(s->substr(0, 212));
  v18->set_f_13(s->substr(0, 10));
  v18->set_f_10(0x170cd7);
  v18->set_f_14(0x54);
  v16_0->set_f_0(s->substr(0, 32));
  v15_0->set_f_19(0x6f);
  v15_0->set_f_31(s->substr(0, 5));
  v15_0->set_f_21(s->substr(0, 4));
  v15_0->set_f_25(Message18::M1::M2::M6::M9::M18::M20::M25::E14_CONST_1);
  v15_0->set_f_22(0x4bc538f);
  Message18::M1::M2::M6::M9::M14* v19 = v11->mutable_f_2();
  Message18::M1::M2::M6::M9::M14::M22* v20_0 = v19->add_f_3();
  v20_0->add_f_14(0x6aecb18);
  v20_0->set_f_12(0x4e8832a52);
  v20_0->set_f_1(0x37);
  v9->set_f_0(0x36);
}
void Message18_Set_3(Message18* message, std::string* s) {
  Message18::M1* v0 = message->mutable_f_3();
  v0->set_f_0(s->substr(0, 88));
  Message18::M1::M4* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_2(Message18::M1::E1_CONST_2);
  v0->add_f_3(Message18::M1::E2_CONST_1);
  Message18::M1::M2* v2 = v0->mutable_f_9();
  Message18::M1::M2::M8* v3 = v2->mutable_f_5();
  Message18::M1::M2::M8::M13* v4 = v3->mutable_f_4();
  (void)v4;  // Suppresses clang-tidy.
  Message18::M1::M2::M6* v5 = v2->mutable_f_3();
  v5->set_f_0(0xd88ddfb1de66);
  Message18::M1::M2::M6::M9* v6 = v5->mutable_f_3();
  Message18::M1::M2::M6::M9::M14* v7 = v6->mutable_f_2();
  v7->set_f_0(0x3c26);
  Message18::M1::M2::M6::M9::M14::M22* v8_0 = v7->add_f_3();
  int32_t array_0[8] = {
      0x3c, 0x6, 0xe9413, 0x5, 0x6cc06, 0x77dd6db, 0xaf9e703, 0x2280,
  };
  for (auto v : array_0) {
    v8_0->add_f_14(v);
  }
  v8_0->add_f_6(Message18::M1::M2::M6::M9::M14::M22::E9_CONST_2);
  v8_0->set_f_7(0x9300a6b6608);
  v8_0->set_f_5(s->substr(0, 5));
  v8_0->set_f_12(0x9);
  v8_0->set_f_15(s->substr(0, 51));
  v8_0->set_f_8(s->substr(0, 8));
  Message18::M1::M2::M6::M9::M18* v9_0 = v6->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v10_0 = v9_0->add_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M23* v11 = v10_0->mutable_f_2();
  v11->set_f_0(0x4a);
  v10_0->set_f_0(0x68076d47bc0c63);
  Message18::M1::M2::M6::M9::M18::M20::M25* v12_0 = v10_0->add_f_4();
  v12_0->set_f_15(s->substr(0, 3));
  v12_0->set_f_20(0x4b31fdcc42c92a52);
  v12_0->set_f_24(true);
  v12_0->set_f_34(s->substr(0, 21));
  v12_0->set_f_8(0xb4c52c6b7c);
  v12_0->set_f_16(s->substr(0, 28));
  v12_0->set_f_17(Message18::M1::M2::M6::M9::M18::M20::M25::E12_CONST_3);
  v12_0->set_f_1(0x2a9a3);
  v12_0->set_f_5(s->substr(0, 12));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v13_0 = v12_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v14 =
      v13_0->mutable_f_3();
  v14->set_f_0(s->substr(0, 13));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v15 =
      v14->mutable_f_2();
  v15->set_f_7(s->substr(0, 4));
  int array_1[25] = {
      1, 25, 1, 1,  8, 19, 60, 7,  17, 2,  38, 6, 6,
      5, 57, 5, 29, 1, 1,  17, 10, 11, 29, 2,  6,
  };
  for (size_t i = 0; i < 25; ++i) {
    v15->add_f_4(s->substr(0, array_1[i]));
  }
  v15->set_f_0(false);
  v15->set_f_14(0x67);
  v15->set_f_10(0x32);
  v15->set_f_12(0x4b1ed908);
  v15->set_f_13(s->substr(0, 1));
  Message18::M1::M2::M6::M9::M18::M20::M24* v16 = v10_0->mutable_f_3();
  (void)v16;  // Suppresses clang-tidy.
  Message18::M1::M2::M6::M9::M18* v9_1 = v6->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v17_0 = v9_1->add_f_2();
  v17_0->set_f_0(0x2d365b3a5);
  Message18::M1::M2::M6::M9::M18::M20::M25* v18_0 = v17_0->add_f_4();
  v18_0->set_f_10(0x26641c3ecea01b);
  v18_0->set_f_26(Message18::M1::M2::M6::M9::M18::M20::M25::E15_CONST_3);
  v18_0->set_f_6(false);
  v18_0->set_f_17(Message18::M1::M2::M6::M9::M18::M20::M25::E12_CONST_5);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v19_0 = v18_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v20 =
      v19_0->mutable_f_3();
  v20->set_f_0(s->substr(0, 2));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v21 =
      v20->mutable_f_2();
  v21->set_f_12(0x3b74283f);
  v21->add_f_4(s->substr(0, 1));
  v21->add_f_4(s->substr(0, 13));
  v21->add_f_4(s->substr(0, 20));
  v21->set_f_14(0x2d);
  v21->set_f_13(s->substr(0, 29));
  v21->add_f_11(0x67);
  v21->add_f_11(0x7);
  v19_0->set_f_0(s->substr(0, 11));
  v18_0->set_f_1(0x11ccf4);
  v18_0->set_f_0(0x258209966);
  v18_0->set_f_19(0xe);
  v18_0->set_f_35(0x3bda);
  v18_0->set_f_4(0x53);
  v18_0->set_f_13(s->substr(0, 3));
  v18_0->set_f_14(0.453593);
  v18_0->set_f_11(0x36bf);
  v18_0->set_f_24(false);
  v18_0->set_f_20(0x6bbd72852da80edb);
  v18_0->set_f_32(s->substr(0, 3));
  v18_0->set_f_5(s->substr(0, 15));
  Message18::M1::M2::M6::M9::M18::M20::M23* v22 = v17_0->mutable_f_2();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 24));
}
void Message18_Set_4(Message18* message, std::string* s) {
  Message18::M1* v0 = message->mutable_f_3();
  Message18::M1::M2* v1 = v0->mutable_f_9();
  Message18::M1::M2::M7* v2 = v1->mutable_f_4();
  Message18::M1::M2::M7::M12* v3 = v2->mutable_f_3();
  v3->set_f_0(Message18::M1::M2::M7::M12::E5_CONST_5);
  v2->set_f_0(true);
  v1->set_f_0(Message18::M1::M2::E4_CONST_1);
  Message18::M1::M2::M6* v4 = v1->mutable_f_3();
  Message18::M1::M2::M6::M9* v5 = v4->mutable_f_3();
  Message18::M1::M2::M6::M9::M14* v6 = v5->mutable_f_2();
  Message18::M1::M2::M6::M9::M14::M22* v7_0 = v6->add_f_3();
  v7_0->set_f_15(s->substr(0, 3));
  v7_0->set_f_1(0x51);
  v7_0->set_f_7(0x26);
  v7_0->set_f_11(s->substr(0, 5));
  v7_0->add_f_6(Message18::M1::M2::M6::M9::M14::M22::E9_CONST_3);
  Message18::M1::M2::M6::M9::M18* v8_0 = v5->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v9_0 = v8_0->add_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M23* v10 = v9_0->mutable_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M23::M26* v11 = v10->mutable_f_2();
  v11->set_f_0(0x5510b497);
  Message18::M1::M2::M6::M9::M18::M20::M24* v12 = v9_0->mutable_f_3();
  v12->set_f_0(Message18::M1::M2::M6::M9::M18::M20::M24::E10_CONST_2);
  Message18::M1::M2::M6::M9::M18::M20::M25* v13_0 = v9_0->add_f_4();
  v13_0->set_f_16(s->substr(0, 1));
  v13_0->set_f_32(s->substr(0, 5));
  v13_0->set_f_18(Message18::M1::M2::M6::M9::M18::M20::M25::E13_CONST_2);
  v13_0->set_f_25(Message18::M1::M2::M6::M9::M18::M20::M25::E14_CONST_1);
  v13_0->set_f_21(s->substr(0, 9));
  v13_0->set_f_17(Message18::M1::M2::M6::M9::M18::M20::M25::E12_CONST_2);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v14_0 = v13_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v15 =
      v14_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v16 =
      v15->mutable_f_2();
  v16->set_f_12(0x72f238d5);
  v16->set_f_8(s->substr(0, 6));
  v16->set_f_6(0x23cec1a);
  v16->set_f_1(
      Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29::E18_CONST_1);
  v16->set_f_2(0x39);
  v16->add_f_4(s->substr(0, 23));
  v16->set_f_10(0x6d);
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v14_1 = v13_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v17 =
      v14_1->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v18 =
      v17->mutable_f_2();
  v18->set_f_6(0x51);
  v18->set_f_9(0xc304bb66cbf815);
  v18->set_f_8(s->substr(0, 122));
  v18->set_f_3(0xd11cd68);
  v18->set_f_1(
      Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29::E18_CONST_5);
  v18->set_f_5(true);
  v18->set_f_0(false);
  v13_0->set_f_3(s->substr(0, 2));
  v13_0->set_f_30(0x1b);
  v13_0->set_f_26(Message18::M1::M2::M6::M9::M18::M20::M25::E15_CONST_3);
  v13_0->set_f_10(0x1da8e0);
  v13_0->set_f_19(0x5b);
  v13_0->set_f_24(true);
  v13_0->set_f_0(0x3eca031376a1);
  Message18::M1::M2::M6::M9::M18* v8_1 = v5->add_f_3();
  Message18::M1::M2::M6::M9::M18::M20* v19_0 = v8_1->add_f_2();
  Message18::M1::M2::M6::M9::M18::M20::M24* v20 = v19_0->mutable_f_3();
  v20->set_f_0(Message18::M1::M2::M6::M9::M18::M20::M24::E10_CONST_4);
  Message18::M1::M2::M6::M9::M18::M20::M25* v21_0 = v19_0->add_f_4();
  v21_0->set_f_0(0x2450cfe170aa3c);
  v21_0->set_f_24(false);
  v21_0->set_f_5(s->substr(0, 5));
  v21_0->set_f_3(s->substr(0, 5));
  Message18::M1::M2::M6::M9::M18::M20::M25::M27* v22_0 = v21_0->add_f_43();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28* v23 =
      v22_0->mutable_f_3();
  Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29* v24 =
      v23->mutable_f_2();
  v24->add_f_4(s->substr(0, 16));
  v24->set_f_12(0x7362492a);
  v24->set_f_7(s->substr(0, 54));
  v24->set_f_8(s->substr(0, 13));
  v24->set_f_3(0x9);
  v24->set_f_9(0x7f145bb45);
  v24->add_f_11(0xb5c0);
  v24->set_f_2(0x1308c0448f7ad);
  v21_0->set_f_34(s->substr(0, 21));
  v21_0->set_f_6(true);
  v21_0->set_f_2(false);
  v21_0->set_f_18(Message18::M1::M2::M6::M9::M18::M20::M25::E13_CONST_1);
  v21_0->set_f_8(0x13ac284e8d53f);
  v21_0->set_f_23(0xe935af890819a7);
  v21_0->set_f_16(s->substr(0, 5));
  v21_0->set_f_31(s->substr(0, 8));
  v21_0->set_f_20(0x5059f7b1ad8f1f3f);
  v21_0->set_f_15(s->substr(0, 8));
  v21_0->set_f_19(0x5535780);
  v21_0->set_f_28(Message18::M1::M2::M6::M9::M18::M20::M25::E17_CONST_2);
  v21_0->set_f_30(0x325e);
  v21_0->set_f_1(0xa);
  Message18::M1::M2::M6::M9::M18::M20::M23* v25 = v19_0->mutable_f_2();
  v25->set_f_0(0x716554f90);
  Message18::M1::M2::M8* v26 = v1->mutable_f_5();
  Message18::M1::M2::M8::M13* v27 = v26->mutable_f_4();
  v27->set_f_0(s->substr(0, 21));
  Message18::M1::M2::M8::M13::M16* v28 = v27->mutable_f_4();
  (void)v28;  // Suppresses clang-tidy.
  Message18::M1::M2::M8::M10* v29 = v26->mutable_f_2();
  (void)v29;  // Suppresses clang-tidy.
  v26->set_f_0(0x342d05c527a97d6c);
  v0->set_f_2(Message18::M1::E1_CONST_1);
  v0->set_f_1(true);
  Message18::M1::M4* v30 = v0->mutable_f_12();
  (void)v30;  // Suppresses clang-tidy.
}
void Message18_Get_1(Message18* message) {
  const Message18::M1& v0 = (*message).f_3();
  const Message18::M1::M4& v1 = v0.f_12();
  Receive(v1.f_0());
  Receive(v0.f_2());
  Receive(v0.f_5());
  Receive(v0.f_1());
  Receive(v0.f_4());
  Receive(v0.f_0());
  const Message18::M1::M2& v2 = v0.f_9();
  Receive(v2.f_0());
  const Message18::M1::M2::M6& v3 = v2.f_3();
  const Message18::M1::M2::M6::M9& v4 = v3.f_3();
  for (const auto& v5 : v4.f_3()) {
    for (const auto& v6 : v5.f_2()) {
      Receive(v6.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M24& v7 = v6.f_3();
      Receive(v7.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23& v8 = v6.f_2();
      const Message18::M1::M2::M6::M9::M18::M20::M23::M26& v9 = v8.f_2();
      Receive(v9.f_0());
      Receive(v8.f_0());
      for (const auto& v10 : v6.f_4()) {
        Receive(v10.f_21());
        Receive(v10.f_13());
        Receive(v10.f_29());
        Receive(v10.f_18());
        Receive(v10.f_11());
        Receive(v10.f_4());
        Receive(v10.f_25());
        Receive(v10.f_17());
        Receive(v10.f_16());
        Receive(v10.f_23());
        Receive(v10.f_27());
        for (int i = 0; i < v10.f_7_size(); ++i) {
          Receive(v10.f_7(i));
        }
        Receive(v10.f_15());
        Receive(v10.f_19());
        Receive(v10.f_0());
        Receive(v10.f_34());
        Receive(v10.f_30());
        Receive(v10.f_22());
        for (const auto& v11 : v10.f_43()) {
          Receive(v11.f_0());
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28& v12 =
              v11.f_3();
          Receive(v12.f_0());
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29& v13 =
              v12.f_2();
          Receive(v13.f_0());
          Receive(v13.f_8());
          Receive(v13.f_7());
          Receive(v13.f_10());
          Receive(v13.f_13());
          Receive(v13.f_3());
          Receive(v13.f_2());
          for (int i = 0; i < v13.f_11_size(); ++i) {
            Receive(v13.f_11(i));
          }
          Receive(v13.f_12());
          Receive(v13.f_14());
          Receive(v13.f_5());
          for (int i = 0; i < v13.f_4_size(); ++i) {
            Receive(v13.f_4(i));
          }
          Receive(v13.f_9());
          Receive(v13.f_1());
          Receive(v13.f_6());
        }
        Receive(v10.f_33());
        Receive(v10.f_10());
        Receive(v10.f_6());
        Receive(v10.f_12());
        Receive(v10.f_20());
        Receive(v10.f_36());
        Receive(v10.f_14());
        Receive(v10.f_9());
        Receive(v10.f_1());
        Receive(v10.f_2());
        Receive(v10.f_32());
        Receive(v10.f_28());
        Receive(v10.f_8());
        Receive(v10.f_35());
        Receive(v10.f_31());
        Receive(v10.f_24());
        Receive(v10.f_26());
        Receive(v10.f_3());
        Receive(v10.f_5());
      }
    }
    Receive(v5.f_0());
  }
  Receive(v4.f_0());
  const Message18::M1::M2::M6::M9::M14& v14 = v4.f_2();
  for (const auto& v15 : v14.f_3()) {
    Receive(v15.f_3());
    Receive(v15.f_4());
    Receive(v15.f_9());
    Receive(v15.f_0());
    for (int i = 0; i < v15.f_6_size(); ++i) {
      Receive(v15.f_6(i));
    }
    Receive(v15.f_15());
    Receive(v15.f_10());
    Receive(v15.f_12());
    Receive(v15.f_8());
    for (int i = 0; i < v15.f_14_size(); ++i) {
      Receive(v15.f_14(i));
    }
    Receive(v15.f_5());
    Receive(v15.f_11());
    Receive(v15.f_2());
    Receive(v15.f_13());
    Receive(v15.f_1());
    Receive(v15.f_7());
  }
  Receive(v14.f_0());
  const Message18::M1::M2::M6::M9::M14::M19& v16 = v14.f_2();
  Receive(v16.f_0());
  for (const auto& v17 : v3.f_4()) {
    Receive(v17.f_0());
  }
  Receive(v3.f_0());
  const Message18::M1::M2::M8& v18 = v2.f_5();
  Receive(v18.f_0());
  const Message18::M1::M2::M8::M10& v19 = v18.f_2();
  Receive(v19.f_0());
  const Message18::M1::M2::M8::M13& v20 = v18.f_4();
  Receive(v20.f_0());
  const Message18::M1::M2::M8::M13::M16& v21 = v20.f_4();
  Receive(v21.f_0());
  for (const auto& v22 : v20.f_5()) {
    Receive(v22.f_0());
  }
  const Message18::M1::M2::M7& v23 = v2.f_4();
  Receive(v23.f_0());
  const Message18::M1::M2::M7::M12& v24 = v23.f_3();
  Receive(v24.f_0());
  const Message18::M1::M2::M7::M12::M15& v25 = v24.f_3();
  Receive(v25.f_0());
  const Message18::M1::M2::M7::M12::M15::M21& v26 = v25.f_2();
  Receive(v26.f_0());
  for (const auto& v27 : v0.f_10()) {
    for (const auto& v28 : v27.f_3()) {
      Receive(v28.f_0());
    }
    Receive(v27.f_0());
  }
  for (int i = 0; i < v0.f_3_size(); ++i) {
    Receive(v0.f_3(i));
  }
  Receive((*message).f_0());
}
void Message18_Get_2(Message18* message) {
  const Message18::M1& v0 = (*message).f_3();
  const Message18::M1::M4& v1 = v0.f_12();
  Receive(v1.f_0());
  const Message18::M1::M2& v2 = v0.f_9();
  const Message18::M1::M2::M8& v3 = v2.f_5();
  Receive(v3.f_0());
  const Message18::M1::M2::M8::M13& v4 = v3.f_4();
  const Message18::M1::M2::M8::M13::M16& v5 = v4.f_4();
  Receive(v5.f_0());
  Receive(v4.f_0());
  for (const auto& v6 : v4.f_5()) {
    Receive(v6.f_0());
  }
  const Message18::M1::M2::M8::M10& v7 = v3.f_2();
  Receive(v7.f_0());
  const Message18::M1::M2::M7& v8 = v2.f_4();
  const Message18::M1::M2::M7::M12& v9 = v8.f_3();
  Receive(v9.f_0());
  const Message18::M1::M2::M7::M12::M15& v10 = v9.f_3();
  const Message18::M1::M2::M7::M12::M15::M21& v11 = v10.f_2();
  Receive(v11.f_0());
  Receive(v10.f_0());
  Receive(v8.f_0());
  Receive(v2.f_0());
  const Message18::M1::M2::M6& v12 = v2.f_3();
  Receive(v12.f_0());
  const Message18::M1::M2::M6::M9& v13 = v12.f_3();
  for (const auto& v14 : v13.f_3()) {
    Receive(v14.f_0());
    for (const auto& v15 : v14.f_2()) {
      for (const auto& v16 : v15.f_4()) {
        Receive(v16.f_26());
        Receive(v16.f_20());
        Receive(v16.f_6());
        Receive(v16.f_3());
        Receive(v16.f_36());
        Receive(v16.f_17());
        Receive(v16.f_5());
        for (const auto& v17 : v16.f_43()) {
          Receive(v17.f_0());
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28& v18 =
              v17.f_3();
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29& v19 =
              v18.f_2();
          Receive(v19.f_3());
          Receive(v19.f_8());
          Receive(v19.f_2());
          Receive(v19.f_10());
          for (int i = 0; i < v19.f_11_size(); ++i) {
            Receive(v19.f_11(i));
          }
          Receive(v19.f_13());
          Receive(v19.f_5());
          for (int i = 0; i < v19.f_4_size(); ++i) {
            Receive(v19.f_4(i));
          }
          Receive(v19.f_0());
          Receive(v19.f_1());
          Receive(v19.f_6());
          Receive(v19.f_12());
          Receive(v19.f_14());
          Receive(v19.f_7());
          Receive(v19.f_9());
          Receive(v18.f_0());
        }
        Receive(v16.f_14());
        Receive(v16.f_4());
        Receive(v16.f_18());
        Receive(v16.f_16());
        Receive(v16.f_22());
        Receive(v16.f_9());
        Receive(v16.f_25());
        Receive(v16.f_10());
        Receive(v16.f_31());
        Receive(v16.f_29());
        Receive(v16.f_30());
        Receive(v16.f_1());
        Receive(v16.f_8());
        Receive(v16.f_34());
        Receive(v16.f_23());
        Receive(v16.f_13());
        Receive(v16.f_35());
        Receive(v16.f_24());
        Receive(v16.f_33());
        Receive(v16.f_28());
        Receive(v16.f_11());
        Receive(v16.f_12());
        for (int i = 0; i < v16.f_7_size(); ++i) {
          Receive(v16.f_7(i));
        }
        Receive(v16.f_15());
        Receive(v16.f_0());
        Receive(v16.f_19());
        Receive(v16.f_32());
        Receive(v16.f_27());
        Receive(v16.f_2());
        Receive(v16.f_21());
      }
      const Message18::M1::M2::M6::M9::M18::M20::M23& v20 = v15.f_2();
      Receive(v20.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23::M26& v21 = v20.f_2();
      Receive(v21.f_0());
      Receive(v15.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M24& v22 = v15.f_3();
      Receive(v22.f_0());
    }
  }
  const Message18::M1::M2::M6::M9::M14& v23 = v13.f_2();
  for (const auto& v24 : v23.f_3()) {
    Receive(v24.f_4());
    Receive(v24.f_8());
    Receive(v24.f_12());
    Receive(v24.f_15());
    Receive(v24.f_2());
    Receive(v24.f_11());
    Receive(v24.f_9());
    Receive(v24.f_1());
    Receive(v24.f_3());
    Receive(v24.f_7());
    Receive(v24.f_0());
    Receive(v24.f_10());
    Receive(v24.f_13());
    for (int i = 0; i < v24.f_6_size(); ++i) {
      Receive(v24.f_6(i));
    }
    Receive(v24.f_5());
    for (int i = 0; i < v24.f_14_size(); ++i) {
      Receive(v24.f_14(i));
    }
  }
  const Message18::M1::M2::M6::M9::M14::M19& v25 = v23.f_2();
  Receive(v25.f_0());
  Receive(v23.f_0());
  Receive(v13.f_0());
  for (const auto& v26 : v12.f_4()) {
    Receive(v26.f_0());
  }
  Receive(v0.f_0());
  Receive(v0.f_5());
  Receive(v0.f_1());
  Receive(v0.f_2());
  Receive(v0.f_4());
  for (const auto& v27 : v0.f_10()) {
    Receive(v27.f_0());
    for (const auto& v28 : v27.f_3()) {
      Receive(v28.f_0());
    }
  }
  for (int i = 0; i < v0.f_3_size(); ++i) {
    Receive(v0.f_3(i));
  }
  Receive((*message).f_0());
}
void Message18_Get_3(Message18* message) {
  Receive((*message).f_0());
  const Message18::M1& v0 = (*message).f_3();
  const Message18::M1::M4& v1 = v0.f_12();
  Receive(v1.f_0());
  for (const auto& v2 : v0.f_10()) {
    Receive(v2.f_0());
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_0());
    }
  }
  Receive(v0.f_2());
  Receive(v0.f_5());
  Receive(v0.f_4());
  Receive(v0.f_1());
  const Message18::M1::M2& v4 = v0.f_9();
  Receive(v4.f_0());
  const Message18::M1::M2::M6& v5 = v4.f_3();
  for (const auto& v6 : v5.f_4()) {
    Receive(v6.f_0());
  }
  const Message18::M1::M2::M6::M9& v7 = v5.f_3();
  const Message18::M1::M2::M6::M9::M14& v8 = v7.f_2();
  const Message18::M1::M2::M6::M9::M14::M19& v9 = v8.f_2();
  Receive(v9.f_0());
  Receive(v8.f_0());
  for (const auto& v10 : v8.f_3()) {
    Receive(v10.f_11());
    Receive(v10.f_5());
    Receive(v10.f_2());
    Receive(v10.f_13());
    for (int i = 0; i < v10.f_14_size(); ++i) {
      Receive(v10.f_14(i));
    }
    for (int i = 0; i < v10.f_6_size(); ++i) {
      Receive(v10.f_6(i));
    }
    Receive(v10.f_0());
    Receive(v10.f_7());
    Receive(v10.f_12());
    Receive(v10.f_1());
    Receive(v10.f_10());
    Receive(v10.f_8());
    Receive(v10.f_15());
    Receive(v10.f_9());
    Receive(v10.f_4());
    Receive(v10.f_3());
  }
  Receive(v7.f_0());
  for (const auto& v11 : v7.f_3()) {
    Receive(v11.f_0());
    for (const auto& v12 : v11.f_2()) {
      Receive(v12.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M24& v13 = v12.f_3();
      Receive(v13.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23& v14 = v12.f_2();
      Receive(v14.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23::M26& v15 = v14.f_2();
      Receive(v15.f_0());
      for (const auto& v16 : v12.f_4()) {
        Receive(v16.f_30());
        Receive(v16.f_0());
        Receive(v16.f_3());
        Receive(v16.f_1());
        Receive(v16.f_22());
        Receive(v16.f_27());
        Receive(v16.f_18());
        Receive(v16.f_9());
        Receive(v16.f_5());
        Receive(v16.f_15());
        Receive(v16.f_17());
        Receive(v16.f_36());
        Receive(v16.f_35());
        Receive(v16.f_12());
        Receive(v16.f_14());
        Receive(v16.f_6());
        Receive(v16.f_11());
        Receive(v16.f_20());
        Receive(v16.f_2());
        Receive(v16.f_16());
        Receive(v16.f_26());
        Receive(v16.f_21());
        Receive(v16.f_31());
        Receive(v16.f_4());
        Receive(v16.f_19());
        Receive(v16.f_25());
        for (int i = 0; i < v16.f_7_size(); ++i) {
          Receive(v16.f_7(i));
        }
        Receive(v16.f_24());
        Receive(v16.f_29());
        for (const auto& v17 : v16.f_43()) {
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28& v18 =
              v17.f_3();
          Receive(v18.f_0());
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29& v19 =
              v18.f_2();
          for (int i = 0; i < v19.f_4_size(); ++i) {
            Receive(v19.f_4(i));
          }
          Receive(v19.f_10());
          Receive(v19.f_1());
          Receive(v19.f_7());
          Receive(v19.f_12());
          Receive(v19.f_14());
          Receive(v19.f_2());
          Receive(v19.f_9());
          Receive(v19.f_0());
          for (int i = 0; i < v19.f_11_size(); ++i) {
            Receive(v19.f_11(i));
          }
          Receive(v19.f_5());
          Receive(v19.f_3());
          Receive(v19.f_8());
          Receive(v19.f_6());
          Receive(v19.f_13());
          Receive(v17.f_0());
        }
        Receive(v16.f_28());
        Receive(v16.f_33());
        Receive(v16.f_34());
        Receive(v16.f_23());
        Receive(v16.f_32());
        Receive(v16.f_10());
        Receive(v16.f_13());
        Receive(v16.f_8());
      }
    }
  }
  Receive(v5.f_0());
  const Message18::M1::M2::M7& v20 = v4.f_4();
  const Message18::M1::M2::M7::M12& v21 = v20.f_3();
  Receive(v21.f_0());
  const Message18::M1::M2::M7::M12::M15& v22 = v21.f_3();
  const Message18::M1::M2::M7::M12::M15::M21& v23 = v22.f_2();
  Receive(v23.f_0());
  Receive(v22.f_0());
  Receive(v20.f_0());
  const Message18::M1::M2::M8& v24 = v4.f_5();
  Receive(v24.f_0());
  const Message18::M1::M2::M8::M13& v25 = v24.f_4();
  const Message18::M1::M2::M8::M13::M16& v26 = v25.f_4();
  Receive(v26.f_0());
  Receive(v25.f_0());
  for (const auto& v27 : v25.f_5()) {
    Receive(v27.f_0());
  }
  const Message18::M1::M2::M8::M10& v28 = v24.f_2();
  Receive(v28.f_0());
  for (int i = 0; i < v0.f_3_size(); ++i) {
    Receive(v0.f_3(i));
  }
  Receive(v0.f_0());
}
void Message18_Get_4(Message18* message) {
  const Message18::M1& v0 = (*message).f_3();
  const Message18::M1::M4& v1 = v0.f_12();
  Receive(v1.f_0());
  Receive(v0.f_0());
  Receive(v0.f_2());
  for (const auto& v2 : v0.f_10()) {
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_0());
    }
    Receive(v2.f_0());
  }
  const Message18::M1::M2& v4 = v0.f_9();
  Receive(v4.f_0());
  const Message18::M1::M2::M7& v5 = v4.f_4();
  Receive(v5.f_0());
  const Message18::M1::M2::M7::M12& v6 = v5.f_3();
  Receive(v6.f_0());
  const Message18::M1::M2::M7::M12::M15& v7 = v6.f_3();
  Receive(v7.f_0());
  const Message18::M1::M2::M7::M12::M15::M21& v8 = v7.f_2();
  Receive(v8.f_0());
  const Message18::M1::M2::M8& v9 = v4.f_5();
  Receive(v9.f_0());
  const Message18::M1::M2::M8::M13& v10 = v9.f_4();
  const Message18::M1::M2::M8::M13::M16& v11 = v10.f_4();
  Receive(v11.f_0());
  Receive(v10.f_0());
  for (const auto& v12 : v10.f_5()) {
    Receive(v12.f_0());
  }
  const Message18::M1::M2::M8::M10& v13 = v9.f_2();
  Receive(v13.f_0());
  const Message18::M1::M2::M6& v14 = v4.f_3();
  Receive(v14.f_0());
  for (const auto& v15 : v14.f_4()) {
    Receive(v15.f_0());
  }
  const Message18::M1::M2::M6::M9& v16 = v14.f_3();
  const Message18::M1::M2::M6::M9::M14& v17 = v16.f_2();
  Receive(v17.f_0());
  for (const auto& v18 : v17.f_3()) {
    Receive(v18.f_4());
    Receive(v18.f_2());
    Receive(v18.f_5());
    Receive(v18.f_15());
    Receive(v18.f_12());
    Receive(v18.f_1());
    Receive(v18.f_13());
    Receive(v18.f_9());
    for (int i = 0; i < v18.f_6_size(); ++i) {
      Receive(v18.f_6(i));
    }
    Receive(v18.f_0());
    Receive(v18.f_3());
    Receive(v18.f_7());
    Receive(v18.f_11());
    Receive(v18.f_10());
    for (int i = 0; i < v18.f_14_size(); ++i) {
      Receive(v18.f_14(i));
    }
    Receive(v18.f_8());
  }
  const Message18::M1::M2::M6::M9::M14::M19& v19 = v17.f_2();
  Receive(v19.f_0());
  Receive(v16.f_0());
  for (const auto& v20 : v16.f_3()) {
    Receive(v20.f_0());
    for (const auto& v21 : v20.f_2()) {
      for (const auto& v22 : v21.f_4()) {
        Receive(v22.f_31());
        Receive(v22.f_33());
        Receive(v22.f_28());
        Receive(v22.f_21());
        Receive(v22.f_25());
        Receive(v22.f_8());
        Receive(v22.f_15());
        Receive(v22.f_29());
        Receive(v22.f_2());
        Receive(v22.f_5());
        Receive(v22.f_14());
        Receive(v22.f_24());
        Receive(v22.f_30());
        Receive(v22.f_20());
        Receive(v22.f_34());
        for (int i = 0; i < v22.f_7_size(); ++i) {
          Receive(v22.f_7(i));
        }
        Receive(v22.f_35());
        Receive(v22.f_3());
        Receive(v22.f_17());
        Receive(v22.f_10());
        Receive(v22.f_27());
        Receive(v22.f_19());
        Receive(v22.f_22());
        Receive(v22.f_12());
        Receive(v22.f_13());
        Receive(v22.f_1());
        Receive(v22.f_16());
        Receive(v22.f_9());
        Receive(v22.f_36());
        for (const auto& v23 : v22.f_43()) {
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28& v24 =
              v23.f_3();
          Receive(v24.f_0());
          const Message18::M1::M2::M6::M9::M18::M20::M25::M27::M28::M29& v25 =
              v24.f_2();
          Receive(v25.f_9());
          Receive(v25.f_2());
          Receive(v25.f_7());
          for (int i = 0; i < v25.f_4_size(); ++i) {
            Receive(v25.f_4(i));
          }
          Receive(v25.f_10());
          Receive(v25.f_6());
          Receive(v25.f_5());
          Receive(v25.f_14());
          for (int i = 0; i < v25.f_11_size(); ++i) {
            Receive(v25.f_11(i));
          }
          Receive(v25.f_3());
          Receive(v25.f_13());
          Receive(v25.f_1());
          Receive(v25.f_12());
          Receive(v25.f_0());
          Receive(v25.f_8());
          Receive(v23.f_0());
        }
        Receive(v22.f_11());
        Receive(v22.f_6());
        Receive(v22.f_0());
        Receive(v22.f_4());
        Receive(v22.f_32());
        Receive(v22.f_18());
        Receive(v22.f_23());
        Receive(v22.f_26());
      }
      Receive(v21.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M24& v26 = v21.f_3();
      Receive(v26.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23& v27 = v21.f_2();
      Receive(v27.f_0());
      const Message18::M1::M2::M6::M9::M18::M20::M23::M26& v28 = v27.f_2();
      Receive(v28.f_0());
    }
  }
  Receive(v0.f_4());
  for (int i = 0; i < v0.f_3_size(); ++i) {
    Receive(v0.f_3(i));
  }
  Receive(v0.f_5());
  Receive(v0.f_1());
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
