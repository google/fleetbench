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

#include "fleetbench/proto/access_message2.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message2.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_3();
  v0_0->set_f_1(0x29);
  v0_0->set_f_2(0x7d85f822);
  v0_0->set_f_0(s->substr(0, 1));
  Message2::M1::M3* v1 = v0_0->mutable_f_8();
  Message2::M1::M3::M4* v2_0 = v1->add_f_3();
  v2_0->set_f_3(s->substr(0, 8));
  Message2::M1::M3::M4::M7* v3 = v2_0->mutable_f_10();
  v3->set_f_2(s->substr(0, 51));
  v3->set_f_1(0.230771);
  v2_0->set_f_4(0x26);
  Message2::M1::M3::M4::M6* v4_0 = v2_0->add_f_9();
  v4_0->set_f_0(s->substr(0, 8));
  Message2::M1::M3::M4::M6::M9* v5_0 = v4_0->add_f_6();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10* v6_0 = v4_0->add_f_8();
  v6_0->set_f_0(Message2::M1::M3::M4::M6::M10::E1_CONST_1);
  Message2::M1::M3::M4::M6::M10::M13* v7 = v6_0->mutable_f_5();
  v7->set_f_0(0.008543);
  Message2::M1::M3::M4::M6::M10::M13::M14* v8 = v7->mutable_f_6();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v9 = v8->mutable_f_10();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v10 = v9->mutable_f_5();
  v10->set_f_7(0x63);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v11_0 =
      v10->add_f_13();
  v11_0->set_f_1(0xffaaea3);
  v10->set_f_9(s->substr(0, 28));
  v10->set_f_3(0x31);
  v10->set_f_0(0x67);
  v10->set_f_1(0x76);
  v9->set_f_2(0x2ed);
  v9->set_f_0(0x2acb);
  v8->add_f_2(0xb);
  v8->add_f_2(0xa9bcedf);
  v8->set_f_1(s->substr(0, 7));
  v8->set_f_3(s->substr(0, 2));
  v8->set_f_7(0x3f);
  v8->set_f_4(0x8);
  v8->set_f_6(0x6f);
  int32_t array_1[63] = {
      0x1c7b33b, 0xbbd40e4, 0x2e2d786, 0x6b7e7,   0xbb97990, 0x3ff4768,
      0xe18724a, 0xae1a0c6, 0x2714f21, 0x10dd56,  0x7bc00ba, 0xe51afd5,
      0x10ddab,  0x2e66168, 0x29dba61, 0xf63e,    0x2b1e20,  0x251c564,
      0x218f709, 0x9857767, 0xacac18e, 0x9a66926, 0x282d1d3, 0x34ac,
      0x996cf72, 0x11f23f5, 0x189abe1, 0x3e712ef, 0x8337bf9, 0x1607d53,
      0x891fd37, 0x1c351b,  0xa6e25bd, 0xaf40f,   0xc44eba0, 0x3636,
      0x5e9506,  0x5f6a6b1, 0x8bcea,   0x3cb6a8,  0x33e167f, 0x681a5fe,
      0x271322d, 0xb4d1cf5, 0x14054a9, 0xcaac8bf, 0x13438c,  0xd0f54,
      0x73d04,   0x5653495, 0x7859ddc, 0x47f3b5f, 0x3de0,    0x65b89fa,
      0xb83e1cf, 0x3616d21, 0xcc7d2ad, 0xc31d337, 0xa7d3ae8, 0xed20a,
      0x1d1e025, 0x52,      0x18dc16a,
  };
  for (auto v : array_1) {
    v2_0->add_f_0(v);
  }
  Message2::M1::M3::M4* v2_1 = v1->add_f_3();
  Message2::M1::M3::M4::M7* v12 = v2_1->mutable_f_10();
  v12->set_f_0(0x361d);
  v2_1->set_f_3(s->substr(0, 45));
  Message2::M1::M3::M4::M5* v13_0 = v2_1->add_f_8();
  (void)v13_0;  // Suppresses clang-tidy.
  v2_1->add_f_0(0xaa69fd0);
  Message2::M1::M3::M4::M6* v14_0 = v2_1->add_f_9();
  Message2::M1::M3::M4::M6::M10* v15_0 = v14_0->add_f_8();
  Message2::M1::M3::M4::M6::M10::M13* v16 = v15_0->mutable_f_5();
  v16->set_f_1(s->substr(0, 14));
  v16->set_f_0(0.859772);
  Message2::M1::M3::M4::M6::M10::M13::M14* v17 = v16->mutable_f_6();
  v17->set_f_3(s->substr(0, 28));
  v17->add_f_2(0x19f95);
  v17->set_f_6(0x1255f1);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v18 = v17->mutable_f_10();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v19 = v18->mutable_f_5();
  v19->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_3);
  v19->set_f_6(s->substr(0, 27));
  v18->set_f_0(0x50);
  v18->set_f_1(0.126772);
  v17->set_f_0(Message2::M1::M3::M4::M6::M10::M13::M14::E2_CONST_5);
  v15_0->set_f_0(Message2::M1::M3::M4::M6::M10::E1_CONST_2);
  Message2::M1::M3::M4::M6::M10::M11* v20_0 = v15_0->add_f_3();
  v20_0->set_f_0(0x5a);
  Message2::M1::M3::M4::M6::M9* v21_0 = v14_0->add_f_6();
  (void)v21_0;  // Suppresses clang-tidy.
  v1->set_f_0(0x22bb);
}
void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_3();
  Message2::M1::M3* v1 = v0_0->mutable_f_8();
  Message2::M1::M3::M4* v2_0 = v1->add_f_3();
  Message2::M1::M3::M4::M6* v3_0 = v2_0->add_f_9();
  Message2::M1::M3::M4::M6::M10* v4_0 = v3_0->add_f_8();
  Message2::M1::M3::M4::M6::M10::M11* v5_0 = v4_0->add_f_3();
  v5_0->set_f_0(0x7);
  Message2::M1::M3::M4::M6::M10::M11* v5_1 = v4_0->add_f_3();
  (void)v5_1;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10::M13* v6 = v4_0->mutable_f_5();
  v6->set_f_1(s->substr(0, 43));
  Message2::M1::M3::M4::M6::M10::M13::M14* v7 = v6->mutable_f_6();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v8 = v7->mutable_f_10();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v9 = v8->mutable_f_5();
  v9->set_f_4(0x1e0b);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v10_0 =
      v9->add_f_13();
  v10_0->set_f_1(0x178229b77);
  int array_0[265] = {
      4,  23, 8,  9,  4,  4,  1,  26, 16,  3,  2,  58, 15, 60, 52, 8,  45,  31,
      51, 7,  3,  5,  31, 8,  2,  8,  32,  10, 29, 5,  22, 31, 11, 24, 415, 3,
      3,  8,  1,  17, 36, 3,  28, 57, 14,  3,  7,  30, 28, 11, 8,  3,  11,  60,
      31, 14, 59, 24, 3,  4,  8,  1,  30,  24, 9,  24, 5,  23, 34, 12, 8,   8,
      6,  27, 37, 22, 30, 16, 7,  31, 17,  27, 24, 7,  7,  57, 24, 25, 62,  15,
      4,  27, 8,  47, 7,  4,  3,  19, 49,  16, 18, 49, 31, 6,  1,  44, 25,  17,
      35, 45, 65, 6,  43, 46, 1,  28, 60,  2,  8,  46, 9,  19, 7,  41, 7,   39,
      27, 1,  14, 20, 7,  5,  25, 25, 5,   33, 6,  7,  23, 40, 27, 49, 19,  47,
      8,  50, 20, 3,  23, 28, 42, 10, 26,  12, 3,  4,  31, 26, 1,  7,  5,   35,
      20, 4,  62, 3,  3,  19, 1,  27, 116, 10, 58, 3,  2,  38, 17, 7,  23,  5,
      2,  12, 22, 7,  1,  47, 2,  32, 2,   8,  3,  38, 2,  64, 7,  32, 42,  4,
      27, 26, 14, 4,  7,  5,  31, 20, 23,  3,  18, 2,  8,  89, 3,  23, 31,  24,
      5,  10, 26, 17, 34, 8,  29, 3,  7,   2,  48, 30, 55, 74, 1,  18, 5,   30,
      20, 15, 29, 7,  3,  51, 9,  33, 22,  31, 19, 22, 6,  14, 30, 21, 4,   2,
      18, 1,  5,  8,  44, 12, 1,  44, 12,  5,  6,  47, 25,
  };
  for (size_t i = 0; i < 265; ++i) {
    v9->add_f_5(s->substr(0, array_0[i]));
  }
  v9->set_f_7(0x5b1ad9953dca68);
  v7->set_f_5(0xfaeff37);
  v7->set_f_4(0x1f);
  v6->set_f_0(0.095686);
  Message2::M1::M3::M4::M6* v3_1 = v2_0->add_f_9();
  Message2::M1::M3::M4::M6::M10* v11_0 = v3_1->add_f_8();
  Message2::M1::M3::M4::M6::M10::M13* v12 = v11_0->mutable_f_5();
  Message2::M1::M3::M4::M6::M10::M13::M14* v13 = v12->mutable_f_6();
  v13->set_f_4(0x3e);
  v13->set_f_6(0x4d);
  v13->add_f_2(0x83d5620);
  v13->add_f_2(0xb6069);
  v13->set_f_3(s->substr(0, 26));
  v13->set_f_7(0x71);
  v13->set_f_1(s->substr(0, 12));
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v14 = v13->mutable_f_10();
  v14->set_f_2(0x363276c9e);
  v14->set_f_0(0x8);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v15 = v14->mutable_f_5();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v16_0 =
      v15->add_f_13();
  v16_0->set_f_0(0xb);
  v16_0->set_f_2(s->substr(0, 7));
  v16_0->set_f_1(0x16f799d33ee0f1);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v16_1 =
      v15->add_f_13();
  v16_1->set_f_1(0x334d8e38b4f);
  v15->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_1);
  v15->set_f_7(0xcf3e070a08);
  v15->set_f_0(0x3b);
  v15->set_f_9(s->substr(0, 88));
  Message2::M1::M3::M4::M5* v17_0 = v2_0->add_f_8();
  Message2::M1::M3::M4::M5::M8* v18_0 = v17_0->add_f_2();
  v18_0->set_f_1(false);
  v17_0->set_f_0(0.205305);
  v2_0->set_f_4(0x54);
  v0_0->set_f_1(0x1ce262d9a70);
  v0_0->set_f_0(s->substr(0, 627));
}
void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_3();
  Message2::M1::M3* v1 = v0_0->mutable_f_8();
  Message2::M1::M3::M4* v2_0 = v1->add_f_3();
  Message2::M1::M3::M4::M7* v3 = v2_0->mutable_f_10();
  v3->set_f_2(s->substr(0, 8));
  v3->set_f_1(0.263595);
  Message2::M1::M3::M4::M6* v4_0 = v2_0->add_f_9();
  Message2::M1::M3::M4::M6::M9* v5_0 = v4_0->add_f_6();
  Message2::M1::M3::M4::M6::M9::M12* v6 = v5_0->mutable_f_3();
  (void)v6;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10* v7_0 = v4_0->add_f_8();
  Message2::M1::M3::M4::M6::M10::M11* v8_0 = v7_0->add_f_3();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10::M13* v9 = v7_0->mutable_f_5();
  v9->set_f_1(s->substr(0, 4));
  v9->set_f_2(0x62);
  Message2::M1::M3::M4::M6::M10::M13::M14* v10 = v9->mutable_f_6();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v11 = v10->mutable_f_10();
  v11->set_f_1(0.151262);
  v11->set_f_0(0x8106654);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v12 = v11->mutable_f_5();
  v12->set_f_0(0x1b);
  v12->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_1);
  v12->set_f_8(s->substr(0, 6));
  v12->set_f_9(s->substr(0, 16));
  v12->set_f_6(s->substr(0, 3));
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v13_0 =
      v12->add_f_13();
  v13_0->set_f_1(0x2f9);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v13_1 =
      v12->add_f_13();
  v13_1->set_f_2(s->substr(0, 11));
  v10->set_f_3(s->substr(0, 2));
  v10->set_f_6(0x2b);
  v10->set_f_4(0x75);
  v10->add_f_2(0x177edb);
  v10->add_f_2(0xe3c25);
  v10->add_f_2(0x58edd02);
  v10->set_f_7(0x9);
  v1->set_f_0(0x38bebd7c1cc021);
  Message2::M1::M2* v14_0 = v0_0->add_f_7();
  (void)v14_0;  // Suppresses clang-tidy.
  v0_0->set_f_1(0x3b7f);
  v0_0->set_f_0(s->substr(0, 2000));
  Message2::M1* v0_1 = message->add_f_3();
  v0_1->set_f_2(0x4602b0c9);
  Message2::M1::M2* v15_0 = v0_1->add_f_7();
  (void)v15_0;  // Suppresses clang-tidy.
  Message2::M1::M3* v16 = v0_1->mutable_f_8();
  Message2::M1::M3::M4* v17_0 = v16->add_f_3();
  Message2::M1::M3::M4::M5* v18_0 = v17_0->add_f_8();
  v18_0->set_f_0(0.433510);
  Message2::M1::M3::M4::M6* v19_0 = v17_0->add_f_9();
  Message2::M1::M3::M4::M6::M10* v20_0 = v19_0->add_f_8();
  Message2::M1::M3::M4::M6::M10::M11* v21_0 = v20_0->add_f_3();
  (void)v21_0;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10::M11* v21_1 = v20_0->add_f_3();
  v21_1->set_f_0(0x54);
  Message2::M1::M3::M4::M6::M10::M13* v22 = v20_0->mutable_f_5();
  Message2::M1::M3::M4::M6::M10::M13::M14* v23 = v22->mutable_f_6();
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v24 = v23->mutable_f_10();
  v24->set_f_1(0.090191);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v25 = v24->mutable_f_5();
  v25->set_f_1(0xdd2d32978c8894);
  v25->set_f_8(s->substr(0, 2));
  v25->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_1);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v26_0 =
      v25->add_f_13();
  v26_0->set_f_1(0x19a5e09342ad8);
  v23->set_f_4(0xf);
  v23->set_f_1(s->substr(0, 2));
  v23->add_f_2(0x13fbc4);
  v23->set_f_6(0x77);
  v22->set_f_0(0.004008);
  v20_0->set_f_0(Message2::M1::M3::M4::M6::M10::E1_CONST_5);
  Message2::M1::M3::M4::M6::M9* v27_0 = v19_0->add_f_6();
  v27_0->set_f_0(0x10);
  Message2::M1::M3::M4::M7* v28 = v17_0->mutable_f_10();
  v28->set_f_2(s->substr(0, 7));
  v0_1->set_f_0(s->substr(0, 27));
  message->set_f_0(s->substr(0, 7));
}
void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_3();
  Message2::M1::M3* v1 = v0_0->mutable_f_8();
  Message2::M1::M3::M4* v2_0 = v1->add_f_3();
  v2_0->set_f_3(s->substr(0, 8));
  Message2::M1::M3::M4::M7* v3 = v2_0->mutable_f_10();
  (void)v3;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6* v4_0 = v2_0->add_f_9();
  Message2::M1::M3::M4::M6::M10* v5_0 = v4_0->add_f_8();
  Message2::M1::M3::M4::M6::M10::M11* v6_0 = v5_0->add_f_3();
  (void)v6_0;  // Suppresses clang-tidy.
  Message2::M1::M3::M4::M6::M10::M13* v7 = v5_0->mutable_f_5();
  Message2::M1::M3::M4::M6::M10::M13::M14* v8 = v7->mutable_f_6();
  v8->set_f_1(s->substr(0, 107));
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v9 = v8->mutable_f_10();
  v9->set_f_0(0x64);
  v9->set_f_1(0.906851);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v10 = v9->mutable_f_5();
  v10->set_f_3(0x1ac2bf264c2f6);
  v10->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_1);
  v10->set_f_7(0x910dadd5d6);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v11_0 =
      v10->add_f_13();
  v11_0->set_f_0(0x3add);
  v8->add_f_2(0x56e27b1);
  v7->set_f_1(s->substr(0, 10));
  Message2::M1::M3::M4::M6::M9* v12_0 = v4_0->add_f_6();
  v12_0->set_f_0(0x5c);
  v4_0->set_f_0(s->substr(0, 10));
  Message2::M1::M3::M4::M6* v4_1 = v2_0->add_f_9();
  Message2::M1::M3::M4::M6::M9* v13_0 = v4_1->add_f_6();
  v13_0->set_f_0(0x63e8d38e386c56);
  Message2::M1::M3::M4::M6::M10* v14_0 = v4_1->add_f_8();
  Message2::M1::M3::M4::M6::M10::M13* v15 = v14_0->mutable_f_5();
  v15->set_f_1(s->substr(0, 3));
  Message2::M1::M3::M4::M6::M10::M13::M14* v16 = v15->mutable_f_6();
  int32_t array_0[585] = {
      0x2874,    0x18,      0x71,      0x2b73c75, 0x3a78bb7, 0x2507541,
      0x3c,      0x4c5e414, 0x536eafd, 0xb8eb342, 0x1ab63a,  0x3c98,
      0x28f0019, 0x4f5dd,   0xfe3e63,  0x21e7,    0xcdf372,  0x1f2f0a,
      0xfd3154a, 0x18fa52,  0xd1180b9, 0x7f8ca,   0x128d19,  0xa7f9aba,
      0xa84b747, 0x8b7722a, 0x6f241ce, 0x961fcb8, 0x1218b9,  0xd5b1667,
      0x943977,  0xad773db, 0x71074,   0x90c97b4, 0xe,       0x5686e3c,
      0x438ca07, 0x3e484f,  0x6e,      0x7222f,   0x13a9da,  0x39,
      0xc0a4897, 0xbcd4a4e, 0xba53203, 0x174d8f,  0x256c,    0xd9a8a56,
      0xdbe71,   0x78c68,   0x11d786,  0x54cc8c7, 0xbeea7b4, 0xe55ee80,
      0x7550,    0x98a07,   0x83c3ac5, 0x8fcb14,  0x1e593c,  0x481c8e4,
      0xb1ecf4e, 0xa7e2da1, 0x165771,  0x82842,   0xb0a7d17, 0xd52bd,
      0xf6fcbc7, 0x109ddff, 0x33,      0x59,      0x8,       0xab26805,
      0xf8ba58b, 0x6c,      0xaf0ef53, 0x9a40a59, 0x1ededd,  0x992aab2,
      0x9ae83f0, 0x31e105c, 0xe2aecc7, 0x3c,      0x8450647, 0x9e96a2,
      0x8,       0x66,      0x1fd7,    0x1966cd,  0x8441aac, 0xb6f909d,
      0x8d15f61, 0x8679af1, 0x11636b,  0x12c5ba,  0x10db0c,  0x5c308af,
      0x155eb4,  0x2f5d486, 0xa414738, 0x1115ade, 0xc5d9561, 0xcf8c2a9,
      0xa465897, 0x13e8aa,  0x9a7fb,   0x5d65463, 0x7d,      0xd60,
      0x62,      0xf6e6037, 0x34606a2, 0xc748a,   0xf01a525, 0x4fc88f5,
      0x341c,    0xda90b3c, 0x72,      0xabb65cb, 0x9f0fec0, 0xb1dc230,
      0x77e733f, 0xeebb28b, 0x3c215f,  0x1f5a,    0xda32005, 0xecdac3f,
      0xb7009fa, 0x15cb,    0x6b6c45e, 0x12c1,    0x34b0847, 0x6a,
      0x470c421, 0x189f8d,  0xb336f,   0xcc4ec4d, 0x6c,      0x89e4f8d,
      0xb21fabe, 0x137830,  0x1208c7,  0xb70f106, 0xda988aa, 0xf6494c7,
      0xa0fa990, 0xb0fe8da, 0x54914,   0x6d0e7eb, 0x1c2450,  0x76223b0,
      0x66bd9fa, 0xe486bfe, 0x1b86,    0xef6b6,   0x2964e,   0xd,
      0x1e58fe3, 0x13f218,  0x7a880ba, 0x3e6da,   0x5720cfb, 0x1a9,
      0xdbaaf74, 0x84788,   0x502de4c, 0x6eb0663, 0x99e09cd, 0x75cb6,
      0x213a099, 0x1cd316,  0x4d676,   0x5b8f1,   0x14fbbf,  0xe82f31e,
      0x6dd42e4, 0xc36bf88, 0xafc,     0xc45bc53, 0x1961f3,  0x718cdfd,
      0x60,      0x17,      0x90999f9, 0x776e007, 0x12ee4a,  0xe4ea2de,
      0x4fd02d0, 0xf1fbfbe, 0x1a4e51,  0xe46806,  0x6ff7304, 0x75cf24e,
      0x4578a28, 0x7290b33, 0xb96ceb,  0xa8e3689, 0x32ceaa0, 0xaaf622b,
      0x14ee89,  0xb7af96,  0x9ba385f, 0x72,      0x217b9ad, 0xe1487ed,
      0x18c4924, 0x4ce4a87, 0x23bf,    0x2c3ce44, 0x9bacda5, 0xfe92e,
      0xe,       0x4c590ce, 0xd2b27df, 0x19bc35c, 0xb712ef6, 0x66dca97,
      0xe41b4,   0x1cf49b,  0x1f8d53,  0x5c18336, 0x166399,  0x4a51869,
      0x1f2d03,  0x5cff563, 0x3f,      0x34ec,    0x5d7334c, 0x5d,
      0xd3d6d0b, 0x3c5a,    0x3b,      0xe7460f0, 0x4f,      0xfd4b099,
      0x12e3f9,  0x96d020,  0x57862d6, 0x11d8ca,  0x2c6,     0x1a1656,
      0x754fa8e, 0xd6e6fcf, 0x5908582, 0xca4efd1, 0x5e,      0x2724e,
      0x1f7d614, 0xbeaf7bc, 0x900de,   0x1b5933,  0x155239,  0x6a,
      0x3c,      0x696a6e2, 0x9cd90c1, 0xbcfd2bf, 0x842ec8a, 0x9b23,
      0x95ae566, 0x4477aa5, 0x63,      0x5b,      0x28,      0xd7b0b48,
      0x8a0dd97, 0x775a3af, 0x605aa14, 0x70f6c2b, 0xe25bef4, 0x26b4673,
      0x77b4239, 0x896ee1c, 0xf5b4f68, 0x45,      0xf893701, 0x22,
      0xecc3f,   0xc4b933c, 0x1ece1,   0x75,      0x3e3dd,   0x20e807d,
      0xccd69,   0x7f1,     0x16,      0xcdc6af8, 0x1db70ae, 0x47,
      0x1b9b350, 0x222a,    0x2d23,    0x562b2bf, 0xe65d2d8, 0x43f47fe,
      0x23c5b64, 0x140a,    0xb7e40be, 0x1e100,   0xf305550, 0x6e1000e,
      0x9c002,   0x1d74,    0xf521f5d, 0xae60b9c, 0x3316,    0xffa2e,
      0xdd8f7,   0x85a8e,   0x2f09367, 0x27f6,    0xfa63335, 0x126ca8,
      0x4828958, 0xbf36859, 0x43963,   0x69e3c22, 0xf2286a5, 0x20,
      0x90796,   0x63314bf, 0x7e5aebc, 0x6d72a7a, 0xd19546d, 0xe,
      0x6534ca6, 0x14de5d,  0xe89f1,   0x16ce2e,  0xfcdee94, 0x8b,
      0x28f14ea, 0x4ba353e, 0xcc0aca0, 0x147da4,  0x3b,      0xffd3eb2,
      0x6e22612, 0x5f,      0x53bbadf, 0xefbd7e,  0x62,      0x2,
      0xa84b231, 0x7f5741d, 0x2344b40, 0x1c11bc,  0x1c,      0x19c4af0,
      0x20fe0,   0x8c9c17d, 0x4fdce,   0x64e7d4,  0x8137a,   0x3731978,
      0x1f,      0xa9c3fc,  0x2e39,    0x89223d1, 0x72,      0x92f378a,
      0xaaa3d7a, 0x42e5d1f, 0x1cb361,  0x8f976aa, 0xd843edf, 0x29,
      0x7ef4764, 0x6391a,   0x5e30bc6, 0x1c8b14,  0x8,       0x386d86d,
      0x73,      0xb0406d,  0xbc5b613, 0x513fd78, 0x2be3348, 0x6dfcc58,
      0x5d,      0xdfd5464, 0x22,      0x5b336,   0x5a3c589, 0x94f4be4,
      0xbbb620f, 0x51a092e, 0xa5593da, 0x86ed0bb, 0x2649b,   0x1af1cd,
      0xbbc2c26, 0x2,       0x145b17,  0xf01c628, 0xc246ba1, 0x3071228,
      0x6761b31, 0x3e,      0xebf906a, 0x1d7375,  0x1385e3,  0x930652b,
      0x7160b26, 0x375c7f9, 0x52cd8,   0x1081ca,  0x51,      0xa0e5866,
      0x10be70,  0x2f,      0x1bfd23,  0x7adcf,   0xbcd7886, 0x6f741,
      0x1afc2d0, 0x4abf6,   0xab0535e, 0x1a9c7f,  0x5,       0x5c30a2,
      0x3d79b,   0x9a80e19, 0x4c,      0xd42cc1f, 0xced155c, 0xd62189,
      0x1c6555e, 0xcb65ea,  0x73,      0x8e94,    0x701de80, 0xec73a7a,
      0xf51f025, 0x24646,   0x6045b,   0x3cb5dbd, 0x90acdaf, 0x66,
      0x1cb,     0x7bd0b5,  0x3b014b4, 0x1df3d0,  0x19c0c7c, 0xab2078b,
      0xeb0c4db, 0x1244f1,  0xe1d3986, 0x186cbb,  0x3cb8046, 0xcf0c1c2,
      0x8e2daf5, 0xa96d866, 0x21,      0x7692e,   0x115da6,  0x453f7a6,
      0x45d1e3,  0xf445adc, 0x49,      0x61fe600, 0x535d63f, 0x5c3da64,
      0x1ce2c1e, 0xb9bc2,   0x5d1d7c8, 0x1622b68, 0x26d4,    0x18,
      0x12c9f58, 0x3951d68, 0x54,      0xaef,     0x2b9a464, 0x25a9a8b,
      0xc5072db, 0xcc14fa2, 0x1eb45d,  0x29a203e, 0x57cf030, 0xc1efd,
      0x6fbefbd, 0x7271f3,  0xf9a8f0a, 0xb14163e, 0x65d853e, 0x19389c,
      0xffadddf, 0xca8eb70, 0xc06cc,   0x75e13c0, 0x8f4a6c8, 0x8e8de8e,
      0x26b75ad, 0xe8c,     0x70c7282, 0xc4bae,   0x1e1761,  0x1308e1,
      0x119b,    0x1d91f96, 0x4f38f3e, 0xdf83ffa, 0x47,      0xd7467bc,
      0x166363,  0xd28974e, 0xe3ee6,   0xb96ddcd, 0x1eff6a,  0xa3be415,
      0x1bcef2,  0x16130b,  0x979f3bb, 0x1ab288,  0x972924a, 0x96c0105,
      0xab230ae, 0xd2dabbc, 0xb,       0x50df859, 0x49,      0xc0fe005,
      0x9af44e7, 0x82ce2,   0x40fc6,   0x82f5a41, 0x1537,    0x67c75,
      0x1cddbf,  0xcb50f,   0x11ce,    0x19713a,  0xc607528, 0xf32d9,
      0x1fb193,  0x1352d4,  0xa962,    0x159884,  0x72358,   0x837c8d7,
      0x1ec68c,  0x8075236, 0xaeb0216, 0x8080d96, 0x3d22864, 0xb860e59,
      0x14f6,    0xd948ee0, 0x2a,      0x3ac716f, 0xb93d8f4, 0x38,
      0x53715,   0x12,      0x40,      0xc68549,  0x9b667e6, 0x5d,
      0xea7c614, 0x12b332,  0x1c891a3, 0xe1d4f5c, 0x3e3b848, 0x11f114,
      0xfb86415, 0xaee62,   0x61,      0x9479e43, 0x11dd73,  0x57,
      0xc,       0xfb67f23, 0xa9d05a1, 0x66af16a, 0x9e03d02, 0x11701b,
      0x4074749, 0x59,      0x3f11f5c, 0x14279d,  0x48,      0x1116b,
      0x13b5ec,  0xe760460, 0x9ef6b90,
  };
  for (auto v : array_0) {
    v16->add_f_2(v);
  }
  v16->set_f_6(0x1b);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15* v17 = v16->mutable_f_10();
  v17->set_f_1(0.778288);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16* v18 = v17->mutable_f_5();
  v18->set_f_4(0x3f);
  v18->set_f_8(s->substr(0, 6));
  v18->set_f_0(0x39);
  v18->set_f_3(0x6);
  Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::M17* v19_0 =
      v18->add_f_13();
  v19_0->set_f_2(s->substr(0, 6));
  v19_0->set_f_1(0x1ac4a0);
  v18->set_f_2(Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16::E3_CONST_1);
  v18->add_f_5(s->substr(0, 4));
  v18->set_f_9(s->substr(0, 19));
  v16->set_f_4(0x103a5b);
  v16->set_f_7(0x5b);
  Message2::M1::M3::M4::M5* v20_0 = v2_0->add_f_8();
  Message2::M1::M3::M4::M5::M8* v21_0 = v20_0->add_f_2();
  v21_0->set_f_1(true);
  v0_0->set_f_0(s->substr(0, 5));
  v0_0->add_f_3(0.534404);
}
void Message2_Get_1(Message2* message) {
  for (const auto& v0 : (*message).f_3()) {
    Receive(v0.f_1());
    for (const auto& v1 : v0.f_7()) {
      Receive(v1.f_0());
    }
    const Message2::M1::M3& v2 = v0.f_8();
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_4());
      for (int i = 0; i < v3.f_0_size(); ++i) {
        Receive(v3.f_0(i));
      }
      Receive(v3.f_3());
      const Message2::M1::M3::M4::M7& v4 = v3.f_10();
      Receive(v4.f_1());
      Receive(v4.f_2());
      Receive(v4.f_0());
      for (const auto& v5 : v3.f_9()) {
        for (const auto& v6 : v5.f_8()) {
          const Message2::M1::M3::M4::M6::M10::M13& v7 = v6.f_5();
          const Message2::M1::M3::M4::M6::M10::M13::M14& v8 = v7.f_6();
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15& v9 = v8.f_10();
          Receive(v9.f_0());
          Receive(v9.f_2());
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16& v10 =
              v9.f_5();
          Receive(v10.f_1());
          for (int i = 0; i < v10.f_5_size(); ++i) {
            Receive(v10.f_5(i));
          }
          Receive(v10.f_9());
          Receive(v10.f_3());
          Receive(v10.f_0());
          Receive(v10.f_8());
          Receive(v10.f_7());
          Receive(v10.f_6());
          Receive(v10.f_4());
          for (const auto& v11 : v10.f_13()) {
            Receive(v11.f_1());
            Receive(v11.f_2());
            Receive(v11.f_0());
          }
          Receive(v10.f_2());
          Receive(v9.f_1());
          Receive(v8.f_5());
          Receive(v8.f_4());
          Receive(v8.f_0());
          for (int i = 0; i < v8.f_2_size(); ++i) {
            Receive(v8.f_2(i));
          }
          Receive(v8.f_3());
          Receive(v8.f_6());
          Receive(v8.f_1());
          Receive(v8.f_7());
          Receive(v7.f_1());
          Receive(v7.f_2());
          Receive(v7.f_0());
          Receive(v6.f_0());
          for (const auto& v12 : v6.f_3()) {
            Receive(v12.f_0());
          }
        }
        for (const auto& v13 : v5.f_6()) {
          const Message2::M1::M3::M4::M6::M9::M12& v14 = v13.f_3();
          Receive(v14.f_0());
          Receive(v13.f_0());
        }
        Receive(v5.f_0());
      }
      for (const auto& v15 : v3.f_8()) {
        for (const auto& v16 : v15.f_2()) {
          Receive(v16.f_0());
          Receive(v16.f_1());
        }
        Receive(v15.f_0());
      }
      Receive(v3.f_1());
      Receive(v3.f_2());
    }
    Receive(v2.f_0());
    Receive(v0.f_0());
    Receive(v0.f_2());
    for (int i = 0; i < v0.f_3_size(); ++i) {
      Receive(v0.f_3(i));
    }
  }
  Receive((*message).f_0());
}
void Message2_Get_2(Message2* message) {
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_3()) {
    Receive(v0.f_1());
    const Message2::M1::M3& v1 = v0.f_8();
    Receive(v1.f_0());
    for (const auto& v2 : v1.f_3()) {
      const Message2::M1::M3::M4::M7& v3 = v2.f_10();
      Receive(v3.f_1());
      Receive(v3.f_0());
      Receive(v3.f_2());
      for (const auto& v4 : v2.f_9()) {
        for (const auto& v5 : v4.f_6()) {
          const Message2::M1::M3::M4::M6::M9::M12& v6 = v5.f_3();
          Receive(v6.f_0());
          Receive(v5.f_0());
        }
        Receive(v4.f_0());
        for (const auto& v7 : v4.f_8()) {
          Receive(v7.f_0());
          const Message2::M1::M3::M4::M6::M10::M13& v8 = v7.f_5();
          Receive(v8.f_2());
          Receive(v8.f_1());
          const Message2::M1::M3::M4::M6::M10::M13::M14& v9 = v8.f_6();
          Receive(v9.f_7());
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15& v10 = v9.f_10();
          Receive(v10.f_1());
          Receive(v10.f_0());
          Receive(v10.f_2());
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16& v11 =
              v10.f_5();
          Receive(v11.f_7());
          Receive(v11.f_4());
          Receive(v11.f_6());
          Receive(v11.f_3());
          Receive(v11.f_8());
          Receive(v11.f_0());
          Receive(v11.f_9());
          Receive(v11.f_1());
          for (int i = 0; i < v11.f_5_size(); ++i) {
            Receive(v11.f_5(i));
          }
          for (const auto& v12 : v11.f_13()) {
            Receive(v12.f_0());
            Receive(v12.f_2());
            Receive(v12.f_1());
          }
          Receive(v11.f_2());
          for (int i = 0; i < v9.f_2_size(); ++i) {
            Receive(v9.f_2(i));
          }
          Receive(v9.f_4());
          Receive(v9.f_1());
          Receive(v9.f_3());
          Receive(v9.f_0());
          Receive(v9.f_6());
          Receive(v9.f_5());
          Receive(v8.f_0());
          for (const auto& v13 : v7.f_3()) {
            Receive(v13.f_0());
          }
        }
      }
      Receive(v2.f_1());
      Receive(v2.f_3());
      for (int i = 0; i < v2.f_0_size(); ++i) {
        Receive(v2.f_0(i));
      }
      Receive(v2.f_2());
      Receive(v2.f_4());
      for (const auto& v14 : v2.f_8()) {
        for (const auto& v15 : v14.f_2()) {
          Receive(v15.f_0());
          Receive(v15.f_1());
        }
        Receive(v14.f_0());
      }
    }
    Receive(v0.f_2());
    for (int i = 0; i < v0.f_3_size(); ++i) {
      Receive(v0.f_3(i));
    }
    for (const auto& v16 : v0.f_7()) {
      Receive(v16.f_0());
    }
    Receive(v0.f_0());
  }
}
void Message2_Get_3(Message2* message) {
  for (const auto& v0 : (*message).f_3()) {
    for (int i = 0; i < v0.f_3_size(); ++i) {
      Receive(v0.f_3(i));
    }
    Receive(v0.f_0());
    for (const auto& v1 : v0.f_7()) {
      Receive(v1.f_0());
    }
    const Message2::M1::M3& v2 = v0.f_8();
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_4());
      for (const auto& v4 : v3.f_8()) {
        Receive(v4.f_0());
        for (const auto& v5 : v4.f_2()) {
          Receive(v5.f_1());
          Receive(v5.f_0());
        }
      }
      Receive(v3.f_2());
      for (int i = 0; i < v3.f_0_size(); ++i) {
        Receive(v3.f_0(i));
      }
      Receive(v3.f_3());
      for (const auto& v6 : v3.f_9()) {
        Receive(v6.f_0());
        for (const auto& v7 : v6.f_6()) {
          Receive(v7.f_0());
          const Message2::M1::M3::M4::M6::M9::M12& v8 = v7.f_3();
          Receive(v8.f_0());
        }
        for (const auto& v9 : v6.f_8()) {
          for (const auto& v10 : v9.f_3()) {
            Receive(v10.f_0());
          }
          const Message2::M1::M3::M4::M6::M10::M13& v11 = v9.f_5();
          Receive(v11.f_0());
          const Message2::M1::M3::M4::M6::M10::M13::M14& v12 = v11.f_6();
          for (int i = 0; i < v12.f_2_size(); ++i) {
            Receive(v12.f_2(i));
          }
          Receive(v12.f_3());
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15& v13 = v12.f_10();
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16& v14 =
              v13.f_5();
          Receive(v14.f_8());
          Receive(v14.f_2());
          for (const auto& v15 : v14.f_13()) {
            Receive(v15.f_0());
            Receive(v15.f_2());
            Receive(v15.f_1());
          }
          Receive(v14.f_0());
          Receive(v14.f_1());
          Receive(v14.f_3());
          Receive(v14.f_7());
          for (int i = 0; i < v14.f_5_size(); ++i) {
            Receive(v14.f_5(i));
          }
          Receive(v14.f_9());
          Receive(v14.f_6());
          Receive(v14.f_4());
          Receive(v13.f_2());
          Receive(v13.f_0());
          Receive(v13.f_1());
          Receive(v12.f_7());
          Receive(v12.f_6());
          Receive(v12.f_0());
          Receive(v12.f_4());
          Receive(v12.f_1());
          Receive(v12.f_5());
          Receive(v11.f_2());
          Receive(v11.f_1());
          Receive(v9.f_0());
        }
      }
      const Message2::M1::M3::M4::M7& v16 = v3.f_10();
      Receive(v16.f_0());
      Receive(v16.f_1());
      Receive(v16.f_2());
      Receive(v3.f_1());
    }
    Receive(v2.f_0());
    Receive(v0.f_1());
    Receive(v0.f_2());
  }
  Receive((*message).f_0());
}
void Message2_Get_4(Message2* message) {
  for (const auto& v0 : (*message).f_3()) {
    Receive(v0.f_2());
    for (int i = 0; i < v0.f_3_size(); ++i) {
      Receive(v0.f_3(i));
    }
    for (const auto& v1 : v0.f_7()) {
      Receive(v1.f_0());
    }
    Receive(v0.f_1());
    Receive(v0.f_0());
    const Message2::M1::M3& v2 = v0.f_8();
    for (const auto& v3 : v2.f_3()) {
      for (int i = 0; i < v3.f_0_size(); ++i) {
        Receive(v3.f_0(i));
      }
      for (const auto& v4 : v3.f_8()) {
        for (const auto& v5 : v4.f_2()) {
          Receive(v5.f_0());
          Receive(v5.f_1());
        }
        Receive(v4.f_0());
      }
      Receive(v3.f_4());
      Receive(v3.f_3());
      const Message2::M1::M3::M4::M7& v6 = v3.f_10();
      Receive(v6.f_1());
      Receive(v6.f_0());
      Receive(v6.f_2());
      for (const auto& v7 : v3.f_9()) {
        for (const auto& v8 : v7.f_6()) {
          Receive(v8.f_0());
          const Message2::M1::M3::M4::M6::M9::M12& v9 = v8.f_3();
          Receive(v9.f_0());
        }
        for (const auto& v10 : v7.f_8()) {
          const Message2::M1::M3::M4::M6::M10::M13& v11 = v10.f_5();
          Receive(v11.f_2());
          Receive(v11.f_0());
          Receive(v11.f_1());
          const Message2::M1::M3::M4::M6::M10::M13::M14& v12 = v11.f_6();
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15& v13 = v12.f_10();
          const Message2::M1::M3::M4::M6::M10::M13::M14::M15::M16& v14 =
              v13.f_5();
          Receive(v14.f_1());
          Receive(v14.f_7());
          Receive(v14.f_8());
          for (int i = 0; i < v14.f_5_size(); ++i) {
            Receive(v14.f_5(i));
          }
          Receive(v14.f_4());
          Receive(v14.f_6());
          for (const auto& v15 : v14.f_13()) {
            Receive(v15.f_0());
            Receive(v15.f_1());
            Receive(v15.f_2());
          }
          Receive(v14.f_2());
          Receive(v14.f_0());
          Receive(v14.f_3());
          Receive(v14.f_9());
          Receive(v13.f_1());
          Receive(v13.f_0());
          Receive(v13.f_2());
          Receive(v12.f_7());
          Receive(v12.f_6());
          Receive(v12.f_0());
          Receive(v12.f_5());
          for (int i = 0; i < v12.f_2_size(); ++i) {
            Receive(v12.f_2(i));
          }
          Receive(v12.f_3());
          Receive(v12.f_4());
          Receive(v12.f_1());
          Receive(v10.f_0());
          for (const auto& v16 : v10.f_3()) {
            Receive(v16.f_0());
          }
        }
        Receive(v7.f_0());
      }
      Receive(v3.f_2());
      Receive(v3.f_1());
    }
    Receive(v2.f_0());
  }
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
