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

#include "fleetbench/proto/access_message10.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message10.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message10_Set_1(Message10* message, std::string* s) {
  message->set_f_2(s->substr(0, 9));
  Message10::M1* v0_0 = message->add_f_4();
  Message10::M1::M4* v1 = v0_0->mutable_f_4();
  v1->set_f_0(s->substr(0, 110));
  Message10::M1::M2* v2 = v0_0->mutable_f_2();
  Message10::M1::M2::M6* v3 = v2->mutable_f_2();
  Message10::M1::M2::M6::M14* v4_0 = v3->add_f_7();
  v4_0->set_f_1(s->substr(0, 17));
  v4_0->set_f_0(0x7abc9);
  v4_0->set_f_3(0xd9c03a25586743);
  v4_0->set_f_24(0xf8b2aa9e1d6f07);
  v4_0->set_f_13(s->substr(0, 28));
  v4_0->set_f_15(0.618802);
  v4_0->set_f_29(0.724160);
  v4_0->set_f_14(Message10::M1::M2::M6::M14::E4_CONST_1);
  v4_0->set_f_33(s->substr(0, 52));
  v4_0->set_f_28(0x56);
  Message10::M1::M2::M6::M14* v4_1 = v3->add_f_7();
  v4_1->set_f_21(0x3f);
  v4_1->set_f_1(s->substr(0, 8));
  v4_1->set_f_2(s->substr(0, 1));
  v4_1->set_f_6(0x23);
  v4_1->set_f_31(s->substr(0, 8));
  v4_1->set_f_29(0.575097);
  v4_1->set_f_23(0.086306);
  v4_1->set_f_20(0x4ad7b9ef9fd9433c);
  v4_1->set_f_24(0xd11);
  v4_1->set_f_5(0x5362e1a85795dee4);
  v4_1->set_f_11(0.809623);
  v4_1->set_f_32(0x1a078493);
  v4_1->set_f_33(s->substr(0, 50));
  v4_1->set_f_25(true);
  v4_1->set_f_15(0.944498);
  v4_1->set_f_27(0x1b3e);
  v4_1->set_f_4(0x6);
  Message10::M1::M2::M6::M10* v5_0 = v3->add_f_5();
  Message10::M1::M2::M6::M10::M16* v6 = v5_0->mutable_f_3();
  Message10::M1::M2::M6::M10::M16::M19* v7 = v6->mutable_f_4();
  Message10::M1::M2::M6::M10::M16::M19::M24* v8 = v7->mutable_f_3();
  v8->set_f_0(s->substr(0, 9));
  v6->set_f_0(false);
  Message10::M1::M2::M6::M9* v9_0 = v3->add_f_4();
  Message10::M1::M2::M6::M9::M15* v10 = v9_0->mutable_f_2();
  v10->set_f_1(0x4c4c1c35);
  Message10::M1::M2::M6::M9::M15::M22* v11 = v10->mutable_f_8();
  Message10::M1::M2::M6::M9::M15::M22::M27* v12_0 = v11->add_f_5();
  v12_0->add_f_1(0xd9ae3);
  v12_0->set_f_0(0x3d);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v13_0 = v12_0->add_f_3();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v14 =
      v13_0->mutable_f_2();
  v14->set_f_6(Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::E7_CONST_2);
  v14->set_f_9(s->substr(0, 10));
  v14->set_f_3(s->substr(0, 6));
  v14->set_f_4(0x18b10f);
  v14->set_f_5(s->substr(0, 8));
  v14->set_f_7(s->substr(0, 5));
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v15_0 =
      v14->add_f_19();
  int32_t array_1[12] = {
      0x81943,   0x40bb320, 0x38025,  0x64,    0x22d31e8, 0xb221f4a,
      0x9d169da, 0x6d15599, 0x10233b, 0x5403a, 0xb007434, 0x17f76c,
  };
  for (auto v : array_1) {
    v15_0->add_f_0(v);
  }
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33* v16 =
      v15_0->mutable_f_2();
  v16->set_f_0(0x7c8af7c);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M36* v17 =
      v16->mutable_f_4();
  (void)v17;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M9* v9_1 = v3->add_f_4();
  Message10::M1::M2::M6::M9::M15* v18 = v9_1->mutable_f_2();
  v18->set_f_0(Message10::M1::M2::M6::M9::M15::E5_CONST_2);
  v18->set_f_1(0x7fa8eaeb);
  Message10::M1::M2::M6::M9::M15::M22* v19 = v18->mutable_f_8();
  v19->set_f_0(s->substr(0, 4));
  Message10::M1::M2::M6::M9::M15::M22::M26* v20_0 = v19->add_f_3();
  (void)v20_0;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M9::M15::M22::M27* v21_0 = v19->add_f_5();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v22_0 = v21_0->add_f_3();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v23 =
      v22_0->mutable_f_2();
  v23->set_f_9(s->substr(0, 13));
  int64_t array_2[1512] = {
      0x1b67,
      0x3d,
      0x1f5994,
      0x1aa602,
      0x3f,
      0xf792d,
      0x1e6d,
      0x74,
      0xf,
      0x36,
      0x1b,
      0x6e,
      0x36,
      0xe,
      0x53,
      0x1,
      0x27e0,
      0x6e,
      0x18,
      0x50,
      0x13755e,
      0x60,
      0x5d,
      0x51,
      0x49,
      0xc5805,
      0xbe30c,
      0x11,
      0x62,
      0x77,
      0x1f0b70,
      0xe,
      0x10,
      0x10dc,
      0x41,
      0xf211374,
      0x7450f,
      0x81cab,
      0x4a,
      0x78,
      0x3,
      0x897c1,
      0x51,
      0x5c,
      0x3,
      0xc,
      0x7b,
      0x1809a2,
      0x22,
      0x1d5,
      0x43,
      0x51,
      0x34f13,
      0x9ca981a,
      0x7a,
      0x2a,
      0x32,
      0x37,
      0x6f,
      0x9,
      0x68,
      0x30,
      0x18,
      0x2f,
      0x2,
      0x50225f7,
      0x51,
      0x23,
      0x44080,
      0x48,
      0x7b2,
      0x69,
      0x3efcd,
      0x1310,
      0x4e75bde,
      0x1e6118,
      0x2714,
      0x42,
      0x30b2,
      0x1f,
      0x23,
      0x128fb7,
      0xca7b4,
      0x1025,
      0x1f,
      0x4d,
      0x33d,
      0x26,
      0x2c,
      0x5b,
      0x114a,
      0x5dd5a70,
      0x6b,
      0x998fd,
      0x2f,
      0x4f245,
      0x31da741,
      0x51,
      0x78,
      0xc5b,
      0x140b,
      0x1c45fb,
      0x1325,
      0x4f,
      0x4c,
      0x70,
      0x32,
      0xb,
      0xe670303,
      0x54,
      0x51,
      0x5b,
      0x42,
      0x6c,
      0x38,
      0x768d3,
      0x68,
      0x38,
      0x45,
      0x1cd6,
      0x4f,
      0xa76,
      0x2535,
      0x5d,
      0x1a,
      0x5d40e79,
      0xa,
      0x1e,
      0x15,
      0x1b,
      0x43,
      0x7a,
      0x75,
      0x15,
      0x50,
      0x32,
      0x7a,
      0x3e,
      0x1b,
      0x50,
      0x3555,
      0x5c,
      0x17ea,
      0x52,
      0x5869895d04e61b,
      0x102d,
      0x44,
      0x39,
      0x13,
      0x3a91,
      0x5e,
      0x16a074,
      0xd,
      0x434f270,
      0x4,
      0x34,
      0x2d24,
      0x15,
      0x1e2e2287,
      0xb7c3dcff27c5,
      0x164028,
      0x69f,
      0x16f,
      0x58,
      0x51,
      0x1128,
      0xb68e4e899d36,
      0xdf399,
      0x4,
      0x29b7,
      0x6c,
      0x116f,
      0x10,
      0x2fcf,
      0x2,
      0x66,
      0x6a,
      0x299c,
      0x65,
      0x3c,
      0x17,
      0x51,
      0x24,
      0x33,
      0xb0c06,
      0x3d,
      0x3c,
      0x4e,
      0x56,
      0xe,
      0x358f,
      0x3d,
      0x36,
      0x54,
      0x5c,
      0x11115,
      0x9,
      0x1f2350,
      0x14,
      0x16a3,
      0x72,
      0x7b,
      0x2e,
      0x9db,
      0x19,
      0x11f4a3,
      0x240c,
      0x2fa4,
      0x44,
      0x2c,
      0x39,
      0x58,
      0x7fafb4b,
      0x68,
      0xf06cc,
      0x73,
      0x1f,
      0x4,
      0x33,
      0x5b,
      0x10,
      0x11b5,
      0x2e5c,
      0x7,
      0x12,
      0x27,
      0x10c2,
      0x6a,
      0x141b43,
      0x32,
      0x71,
      0x5,
      0x73,
      0x8b2,
      0x29,
      0x35,
      0x49,
      0x18df,
      0xdaf3c88,
      0x62,
      0x4e,
      0xac7561fb9315,
      0x20824,
      0x7,
      0x49,
      0xd8d1a,
      0x38,
      0x38,
      0x6d,
      0x303d36feb,
      0x7c,
      0x56,
      0x79e3e7f79,
      0xd,
      0x3cf5d6f,
      0xb,
      0x70,
      0x11b2,
      0xa17,
      0x2f8,
      0x37,
      0x17a31d,
      0x2342,
      0x3b49,
      0x25,
      0x2b6b,
      0x5c,
      0x1423be,
      0x112e,
      0x32,
      0x4e,
      0x3357,
      0x38,
      0x5,
      0x63,
      0x6b,
      0x37af,
      0x36,
      0x36,
      0x59,
      0x4f,
      0x7b,
      0x79,
      0x1fa238,
      0x74,
      0x25,
      0x8dac7,
      0x53,
      0x12f4ab7e8f75a,
      0x2e95ea371fcaff,
      0x47,
      0x16a6,
      0x1434a1baa0912,
      0x3d53,
      0x53,
      0x4,
      0x2a,
      0x1a61,
      0xfbb56,
      0x25,
      0x77,
      0xe01e44d,
      0x1464,
      0xa9b6f,
      0x3d,
      0x71,
      0xa,
      0xf,
      0x6c,
      0x37d2,
      0x40,
      0x6e,
      0x62,
      0x41,
      0x1d,
      0x1a12,
      0x101c6c08f2f78b,
      0x3,
      0x3a,
      0x121f,
      0x51,
      0x8,
      0x55bf,
      0x31,
      0x16f8,
      0x3be7,
      0x2cd4461,
      0x39b2,
      0x62,
      0x13,
      0x39,
      0x3a15,
      0x3c54,
      0x76,
      0x856,
      0x1a47,
      0x46,
      0x3798,
      0x22,
      0x2857,
      0x1dba80415e8492,
      0x16,
      0x6e,
      0x13,
      0xe1a54,
      0x11,
      0x47,
      0x12a0,
      0x4f,
      0x1f,
      0x1a,
      0x1c0f91,
      0x1d,
      0x35,
      0xf,
      0x32d5,
      0x332e,
      0x10,
      0x6,
      0x13,
      0x7cd,
      0x1a75b5,
      0xa7c,
      0x180c7b,
      0x48,
      0x199,
      0x4281d,
      0x32,
      0xcdc,
      0x5,
      0x3d6f,
      0x15,
      0x58,
      0x232c,
      0xfcaa1a4f04d7f2,
      0x33,
      0x5a,
      0xccdc687,
      0x113f00,
      0x1b4e,
      0x27,
      0x870ef,
      0x39,
      0xa30,
      0x5c,
      0x1e64,
      0x5b,
      0x9,
      0x1c9d92d37,
      0x8b3054c,
      0x69,
      0x14fa,
      0x46,
      0x3b52,
      0xc,
      0x66,
      0x4c,
      0x51,
      0xd40e3,
      0x3,
      0x2b,
      0x2e,
      0x62,
      0x4e,
      0x2c,
      0x14,
      0x2321,
      0x78,
      0x2056,
      0xc19,
      0x44,
      0x6727,
      0x3922,
      0x3c,
      0x68,
      0xa,
      0x4315daa97,
      0x62,
      0x20228a,
      0x5eaba,
      0x3d,
      0x1d,
      0x8fdf64e658080,
      0xe49,
      0x55,
      0x1d,
      0x4f,
      0x76,
      0x6c,
      0x252,
      0x5d,
      0x44,
      0x2728,
      0x66,
      0x130a,
      0x73,
      0x240c,
      0x11d5dd,
      0x61,
      0x36,
      0x5d,
      0x52,
      0x78,
      0x4f,
      0x7d,
      0x172b,
      0x28b5,
      0x177757,
      0x5d,
      0x7,
      0x67,
      0x137c,
      0x2e8ed696f,
      0x2fc,
      0x6c,
      0x1f0f,
      0x1f7,
      0x40c,
      0x3b,
      0x51,
      0x35,
      0xd,
      0x4c,
      0x1aa6,
      0x79,
      0x65,
      0x1b,
      0x16,
      0x88e,
      0x2f7f,
      0x41bf46abc,
      0xae184,
      0x20,
      0x1a,
      0x112b,
      0x22,
      0x76,
      0x2e,
      0x5e,
      0x5d,
      0x1,
      0xfffd868,
      0x3a,
      0x3c,
      0x2c55,
      0x52,
      0x41ada,
      0x5d,
      0x41,
      0x3f,
      0xaf4,
      0x74,
      0x1ff6e8,
      0x56,
      0x7d,
      0x13,
      0xe24,
      0x5a,
      0x8,
      0x4d,
      0xc39eb7a8f5e7e6,
      0x2c,
      0x4,
      0x315e,
      0x17ef7b,
      0x12,
      0x46,
      0x51,
      0x42,
      0x8,
      0x5d,
      0x35bd,
      0x34,
      0x1d6284,
      0xed2,
      0x2fed,
      0x7b,
      0x1cac7b,
      0x355f,
      0x1f1150,
      0x2a7e,
      0x2d,
      0x192152,
      0xe,
      0x41,
      0x28f6,
      0x72,
      0x2d,
      0xbf153,
      0x5,
      0x1830,
      0x42,
      0x1e47,
      0x25,
      0x1ddee3,
      0x43,
      0x29c7,
      0x46,
      0x2e,
      0x7b,
      0x7c,
      0x15e335,
      0x6c2,
      0x6f15f,
      0x47,
      0x52,
      0xdd6,
      0x16,
      0x14,
      0xfe7c1,
      0x72,
      0x6f,
      0xacc3130,
      0x62,
      0x1c,
      0x1c4c,
      0x60,
      0x5d,
      0x17,
      0x1618,
      0x37,
      0x32,
      0x19a9,
      0x3702,
      0x1b1d,
      0x2da5,
      0x3a6c,
      0x5c,
      0x5dd,
      0x63,
      0x17ba,
      0xf,
      0x3d,
      0x14f60d,
      0x41,
      0x9b3,
      0x3e,
      0x29ff,
      0x4f,
      0x6a,
      0x42,
      0x3fea,
      0x2c48,
      0x6af63,
      0x130966,
      0x3d,
      0x3d,
      0x6e,
      0x3c36,
      0x3691119,
      0x28,
      0x371d,
      0x1d,
      0x2b,
      0x3068,
      0x107e,
      0x4d,
      0x46,
      0xeefc27c1b31c79,
      0xd8715ed2fe,
      0x37bc,
      0x28977,
      0x6c,
      0x32,
      0xeeb286c,
      0x1a3e,
      0x37,
      0x3afb,
      0x1b,
      0xc,
      0x45,
      0x9abbf17,
      0x6a,
      0x2a,
      0x333e,
      0x1a4c39,
      0x1c7e,
      0x56204,
      0x2d,
      0xc,
      0x66,
      0x4e,
      0x343ce,
      0x47e7861,
      0x69,
      0x65,
      0x23c9,
      0x18,
      0x2f,
      0x3a977,
      0xf5f4b,
      0x225,
      0x1e,
      0x66,
      0x36,
      0x14,
      0x48,
      0xcd2eec2b7fb03c,
      0x2ca9,
      0x43,
      0x21,
      0x3501,
      0x52c,
      0x6e,
      0x77,
      0x72,
      0x4b,
      0x3ae2,
      0x3a,
      0x22,
      0x55,
      0x1,
      0xb,
      0x74,
      0x1a,
      0x2d31944,
      0x96dfde496b9c9,
      0x44,
      0x98bbd02,
      0x4a,
      0x4e,
      0x65,
      0x79,
      0x18,
      0x3843,
      0x2e,
      0x6d,
      0x25,
      0x495,
      0x41,
      0x3d65,
      0x30,
      0x70f6fbc,
      0x55,
      0x12,
      0x1be2a9,
      0x75d37de,
      0x150e,
      0x15,
      0x47e669e0b19c38,
      0x6d,
      0x17,
      0x5bc54,
      0x78,
      0x10,
      0x130a9a,
      0x28,
      0x60,
      0x30,
      0x32567,
      0x132080,
      0x5d,
      0x18de8e,
      0x1e8994,
      0x6f4c1,
      0x4,
      0x2005,
      0x55f3db0,
      0x6a,
      0x90d3ea9c93,
      0x1c,
      0x2e,
      0x3,
      0x370d,
      0x4d,
      0x108ad091a74b2,
      0x3,
      0x1269f4,
      0x65f5a6f,
      0x3857,
      0x1a515d,
      0x1a1a5a,
      0x7fd78,
      0xf66,
      0x2665,
      0x1e4ea8,
      0x832,
      0x1d,
      0x2c,
      0x28,
      0x11858a2bdaa82,
      0x45,
      0x383e,
      0x3b,
      0x4e,
      0x14,
      0x19d1d7,
      0x41,
      0x3438,
      0x79,
      0x49,
      0xc,
      0x4f,
      0x184,
      0x379e,
      0x3f03,
      0x1d,
      0x45,
      0x47,
      0x39b3,
      0x6c42a3466,
      0x78bc47e0b26b42,
      0x30f0,
      0x89795aa,
      0x74,
      0x75,
      0x2b,
      0x6e,
      0xc5402d5,
      0x3f34,
      0x3195,
      0x5e,
      0x3512,
      0x1c,
      0x79,
      0x61,
      0x75,
      0x3584,
      0x44,
      0x6a,
      0x68,
      0xd4dd050b98d6,
      0x63,
      0xbc770,
      0x2e,
      0x1d,
      0x65,
      0x62d846b,
      0x58,
      0x4c,
      0x28,
      0x4e,
      0x49,
      0x6b,
      0x71,
      0x65,
      0x37cd,
      0x1e,
      0x16,
      0x15b3c3,
      0x2e08,
      0x31,
      0x77,
      0xe1df7f3,
      0x6c,
      0x1173ab,
      0x53,
      0x4e,
      0x6f,
      0xab8,
      0x24,
      0x3b,
      0x64,
      0x6,
      0x3dd8,
      0x64,
      0x1d7ec3,
      0x42,
      0x2c,
      0x2f,
      0xf60,
      0xf1893,
      0x1b,
      0x39,
      0x2f,
      0x2c,
      0x31,
      0x295f,
      0x14046,
      0x5e427,
      0x3561,
      0x8227ac464b6af9,
      0x5f,
      0x7e,
      0x1949,
      0x24,
      0x1f,
      0x1ccafe,
      0x75f7425,
      0x72,
      0x77,
      0x3,
      0x60,
      0x64,
      0x49,
      0x5c1f36f,
      0x3,
      0x19,
      0x26ca,
      0x58,
      0x2b,
      0xb5,
      0x22cd,
      0x47,
      0x70,
      0x17,
      0x6f,
      0x1a,
      0x1b2c65,
      0x5621af057,
      0x180ce,
      0x631429d,
      0x1a,
      0x75,
      0x62,
      0x7e,
      0x50,
      0x1f,
      0x3,
      0x27c2,
      0x43,
      0x26,
      0x17,
      0x41,
      0x3c,
      0x38b1,
      0x52,
      0x45,
      0x1fb6,
      0xa83,
      0x96d67,
      0xd32fc98,
      0x33,
      0x1b,
      0x49,
      0x3e,
      0x4d,
      0x6c,
      0x28,
      0x42d0e,
      0x61,
      0x6e,
      0x2c62,
      0xc,
      0x53,
      0x17eae,
      0x2,
      0x1,
      0xc,
      0xe5cb492,
      0x57,
      0xaac38,
      0x17fdff,
      0x1e,
      0x2ab0,
      0x1d,
      0x102e02,
      0xb,
      0x1b64,
      0x55,
      0x10,
      0xc8a43,
      0x3752f9ee4d77,
      0x62,
      0xea3799f5cf,
      0xc,
      0x54,
      0x32,
      0x9,
      0x55,
      0x6af,
      0x3f3,
      0x40,
      0x39,
      0xa6c604b,
      0x2b80,
      0x20,
      0x96b47,
      0x78,
      0x10,
      0x60,
      0x6dee9e0140b763,
      0x77c2d,
      0x1c,
      0x1fed77,
      0x48,
      0x70,
      0x35,
      0x5b,
      0x163ea4,
      0x1eb1f7,
      0x43,
      0x17,
      0x160845,
      0x1cc0e5,
      0x64,
      0x68,
      0x1041,
      0x37,
      0x17fedc,
      0x30,
      0x3c,
      0x52,
      0x356,
      0x5,
      0x1033,
      0x17,
      0x19e04c,
      0x49,
      0xc,
      0x4b,
      0x231e,
      0x7c,
      0x7e,
      0x6,
      0x38,
      0x42,
      0x53,
      0x37,
      0x22,
      0x1e,
      0x71,
      0x24,
      0x3b,
      0x59,
      0x67,
      0x5,
      0x949,
      0x65,
      0x13d948,
      0x32,
      0x41,
      0xe,
      0x14,
      0x2c,
      0x9,
      0xd25,
      0x5e,
      0x3b,
      0x56,
      0x15,
      0x72,
      0xe,
      0x71,
      0x4c,
      0x34,
      0x5f,
      0x50,
      0x24de,
      0x4e,
      0x636,
      0x5c,
      0x69,
      0x167989,
      0x55,
      0x4d,
      0x5b14788aca1f6b,
      0x258a,
      0x36,
      0x2972,
      0x6b,
      0x48,
      0x1cf91c,
      0x3f83,
      0x1f,
      0x5c,
      0x1307,
      0xf,
      0x6,
      0x2a,
      0x100c91,
      0x3add,
      0xc,
      0xbbd,
      0x819ab,
      0x20,
      0x2e,
      0x166c68,
      0x3f,
      0x13c7df,
      0x256f,
      0x4b,
      0x3c,
      0x4,
      0x72,
      0x6e,
      0x2,
      0xb532f45,
      0x22,
      0xcdc,
      0x46,
      0x16,
      0x6a,
      0x12,
      0x52,
      0x12,
      0x4f,
      0x4a,
      0x41,
      0x3298,
      0x48,
      0x28,
      0xd,
      0x1682,
      0x3,
      0x1f,
      0xb,
      0x7b7ee4426,
      0x4b,
      0x1883,
      0x2c,
      0x2194,
      0x38d39f5,
      0x61,
      0x18eea3,
      0x43,
      0x5,
      0x6e,
      0x38,
      0x25bb,
      0x21,
      0x381d,
      0x318ad3e83,
      0x6baa61f27,
      0x70fa8,
      0x49,
      0x35,
      0xa5ac2,
      0x39c7,
      0x56,
      0x44,
      0x1f,
      0x6,
      0x85b4e,
      0x3a59,
      0x39,
      0xa,
      0x3b,
      0x153ae1,
      0xd83b5,
      0x59,
      0x60,
      0x2b,
      0x1a,
      0x77,
      0x71,
      0x58,
      0x72,
      0x7b7,
      0x67,
      0x17f5,
      0x5f,
      0x175a,
      0x1c575a,
      0xc563b,
      0x5d,
      0x2a,
      0x1741,
      0x14f682,
      0xaa2b8,
      0x18376f,
      0x16,
      0x1aee25,
      0x37,
      0x6,
      0x2a,
      0x13,
      0x3f,
      0x114bea,
      0x1dfc,
      0x1f,
      0x19bdfc,
      0x1b,
      0x77,
      0x52,
      0x14,
      0x15,
      0x1b,
      0x54,
      0x188262,
      0x71,
      0x146b7,
      0x399f5f13a8f,
      0x6,
      0x21a3,
      0x36,
      0x6a,
      0x479,
      0x63,
      0x47,
      0x39,
      0x334f,
      0x69,
      0x740f2,
      0x22,
      0x4d,
      0x2cb4,
      0x32,
      0x2f,
      0x76,
      0x35e5,
      0x5a,
      0x2fd7,
      0x181968,
      0x1975a8,
      0x7f8,
      0x23,
      0x3f,
      0x24c9,
      0x18d,
      0x13,
      0x917bb,
      0x99,
      0x42,
      0x44,
      0x2f9f,
      0x4c,
      0x3d98,
      0x39,
      0x3f9,
      0x1e,
      0x29ec,
      0x6,
      0x49,
      0x9327748,
      0x61,
      0x6b,
      0x3d18,
      0x60,
      0x43,
      0x3696,
      0x3d34,
      0x16c4,
      0x33a0,
      0xad84183,
      0x125d,
      0x6,
      0x9,
      0x7b,
      0x1c5d48,
      0x3a05,
      0x37,
      0x20,
      0x30d1,
      0x4e,
      0xe84a,
      0x2c51,
      0x7c,
      0x1d7da,
      0x32,
      0x81e9b,
      0x579,
      0x6cf2d22,
      0x32005,
      0x33efd,
      0x27,
      0x2bb8e698152a7d,
      0x201a,
      0x6b,
      0x7,
      0x28,
      0x6c,
      0x1,
      0x4f8dd0b,
      0x46,
      0x75,
      0x51,
      0x53,
      0x693db6b,
      0x9,
      0x8,
      0x7b,
      0x202d,
      0x4d,
      0x5c,
      0x2a5a8,
      0x28,
      0x7c,
      0x2697,
      0x1a,
      0x53,
      0x7e,
      0x1c,
      0x7,
      0x28,
      0x46ba383,
      0x25,
      0x42,
      0x318e,
      0x16b90e,
      0x5e,
      0x45,
      0xf,
      0x357f,
      0x75,
      0x13,
      0x1880,
      0x1a450d,
      0xa,
      0x306d,
      0x22f3,
      0x19d,
      0x62,
      0x1994,
      0x37,
      0xcda9,
      0x131d,
      0x1357b3,
      0x36ce08f,
      0x23,
      0x6f,
      0x7d,
      0x70,
      0xb0fa1,
      0x4a,
      0x77,
      0x64,
      0x4d,
      0x129b,
      0x65,
      0x1faf62,
      0x2915,
      0x37,
      0x61,
      0x3a,
      0x18eac9,
      0x31,
      0x1c,
      0x15c04e,
      0x38785,
      0x64,
      0x4c,
      0x9fd,
      0x4e,
      0x1477e8,
      0x74,
      0x3272,
      0x5042e75,
      0x203cd,
      0x1c,
      0x3e05,
      0x6d,
      0x38,
      0x3640ae5,
      0x7e166,
      0x57a31,
      0xa0f8b104f04a,
      0x7e,
      0x3558,
      0x3306,
      0x4d,
      0x6d,
      0x211a,
      0x1e1c0c,
      0xd,
      0x6e,
      0x48c38d7,
      0x1f6b,
      0xf7107,
      0x25,
      0x3f,
      0x2c,
      0x2a,
      0x6c,
      0x48,
      0x2,
      0x53,
      0x56,
      0x74,
      0x3,
      0x27,
      0x39,
      0x2896a,
      0x1f74,
      0x7a,
      0x1a,
      0x57,
      0x2352,
      0x5,
      0x2f46,
      0x81ec636,
      0x1eb4,
      0x2890,
      0xb,
      0x173c6d,
      0x6c,
      0x38fc,
      0x53,
      0x2c,
      0x41,
      0xa,
      0x4e,
      0x76,
      0x70,
      0x46,
      0x19,
      0x7e5ba,
      0xa,
      0x345d,
      0x10,
      0x59,
      0x3b,
      0x3d,
      0x3c,
      0x1f44,
      0x79,
      0x45,
      0x52,
      0x44782ca43,
      0x5c,
      0x9af31,
      0x16c024,
      0xa54,
      0x2,
      0x7b,
      0xea292237d314,
      0x78,
      0x77,
      0x1b3c,
      0x6d,
      0x68,
      0x39b6,
      0x50,
      0x6,
      0x6e,
      0x64,
      0x1fd0cf,
      0x5f08a,
      0x31,
      0x4f8d3,
      0x6a1,
      0x15e6e25a039a4,
      0x5c,
      0x75,
      0x22,
      0x8,
      0x29a7,
      0x67,
      0x43,
      0x62,
      0x6f,
      0x28ce,
      0x1d75e0,
      0x1c7941,
      0x3dab,
      0x1d76,
      0x7,
      0xf8762,
      0x1ff,
      0x39,
      0x59,
      0x36b0,
      0x27,
      0x23,
      0x203893c1b,
      0x4a,
      0xf,
      0x1174,
      0x19,
      0x5f,
      0x2b,
      0x62,
      0x2d40,
      0xd7a92ed,
      0x43,
      0x1e,
      0xa,
      0x8cd3f32,
      0x60,
      0x12b61d,
      0x7a,
      0x7d,
      0x2239,
      0x77,
      0x63,
      0x4e,
      0x44,
      0x2d395ab,
      0x179fa9,
      0x73,
      0x1acf433fd7841,
      0x34,
      0x34,
      0xc92713c38767,
      0x52,
      0x30,
      0x2b68,
      0x29a4,
      0x2a,
      0x4a,
      0x1d,
      0x6290d68,
      0x21fb,
      0x34,
      0x6306c,
      0x45,
      0x4a,
      0x25,
      0x30cb,
      0x212f,
      0x2195,
      0x5c,
      0x1c,
      0x2370,
      0x9a0ae,
      0x1f,
      0xa,
      0x28e2,
      0x79,
      0x73,
      0x17,
      0x6e,
      0x53fd3,
      0x4,
      0x52,
      0x66,
      0x3,
      0x29,
      0x21,
      0x2a,
      0x4d,
      0x7a,
      0x76,
      0x3eca,
      0x15,
      0x11,
      0x2355040,
      0x3143,
      0x16,
      0x8,
      0x6,
      0x12,
      0x2e9,
      0x2304,
      0x23d5,
      0x2b,
      0x44,
      0x2328,
      0x74,
      0x28,
      0x77,
      0x21d7,
      0x1d,
      0xb,
      0x79,
      0x245d,
      0x237a,
      0x1f,
      0x15b6818fbbdab,
      0xd10a8ea,
      0x54,
      0x151f95,
      0x5dbbd1b,
      0x33ab,
      0x56f,
      0x7a,
      0x94a,
      0x20,
      0x4,
      0x15c2b7,
      0x1d,
      0x67,
      0x23,
      0xdb5b368339fff4,
      0xc5b294fc00,
      0x1fb5b9,
      0x57993,
      0x1082,
      0x62,
      0x2c,
      0x3a,
      0x2094,
      0x30,
      0x16,
      0x36,
      0x1dc8a7,
      0x4f,
      0xfbf,
      0x577df51,
      0x29,
      0x18,
      0x385c,
  };
  for (auto v : array_2) {
    v23->add_f_2(v);
  }
  v23->set_f_0(Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::E6_CONST_1);
  v23->set_f_1(true);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v24_0 =
      v23->add_f_19();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33* v25 =
      v24_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M36* v26 =
      v25->mutable_f_4();
  (void)v26;  // Suppresses clang-tidy.
  v25->set_f_0(0xfaa43a8);
  v23->set_f_5(s->substr(0, 10));
  v23->set_f_10(0.301059);
  v23->set_f_6(Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::E7_CONST_2);
  v23->set_f_7(s->substr(0, 1));
  v23->set_f_3(s->substr(0, 2));
  int32_t array_3[9] = {
      0x131b67, 0x5351f74, 0x558d898, 0x6f83, 0x229ef,
      0x77,     0x14f49d7, 0x390e,    0x2ee3,
  };
  for (auto v : array_3) {
    v21_0->add_f_1(v);
  }
  v21_0->set_f_0(0x61);
  v18->set_f_4(0x4b);
  v18->set_f_2(s->substr(0, 27));
  v9_1->set_f_0(s->substr(0, 2));
  Message10::M1::M2::M6::M9::M18* v27 = v9_1->mutable_f_4();
  v27->set_f_0(false);
  Message10::M1::M2::M6::M9::M18::M21* v28_0 = v27->add_f_3();
  v28_0->set_f_0(s->substr(0, 28));
  Message10::M1::M2::M6::M9::M18::M21* v28_1 = v27->add_f_3();
  (void)v28_1;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M13* v29 = v3->mutable_f_6();
  Message10::M1::M2::M6::M13::M17* v30 = v29->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M23* v31 = v30->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M23::M25* v32_0 = v31->add_f_6();
  Message10::M1::M2::M6::M13::M17::M23::M25::M30* v33_0 = v32_0->add_f_3();
  (void)v33_0;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M13::M17::M23::M25::M28* v34_0 = v32_0->add_f_2();
  (void)v34_0;  // Suppresses clang-tidy.
  v31->set_f_1(s->substr(0, 5));
  v31->add_f_0(s->substr(0, 23));
  v31->add_f_0(s->substr(0, 31));
  Message10::M1::M2::M6::M13::M17::M20* v35_0 = v30->add_f_2();
  v35_0->set_f_0(0.588567);
  v29->set_f_0(0x54f);
  Message10::M1::M2::M7* v36_0 = v2->add_f_3();
  v36_0->set_f_0(0xeb962a1df703);
  Message10::M1::M2::M7::M12* v37 = v36_0->mutable_f_10();
  (void)v37;  // Suppresses clang-tidy.
  v36_0->set_f_2(0xde885c4dd82e92);
  v0_0->set_f_0(0x7eea9158);
}
void Message10_Set_2(Message10* message, std::string* s) {
  Message10::M1* v0_0 = message->add_f_4();
  Message10::M1::M2* v1 = v0_0->mutable_f_2();
  Message10::M1::M2::M7* v2_0 = v1->add_f_3();
  v2_0->set_f_0(0x1e550ec5fdc6b7);
  v2_0->set_f_5(0x2bce9999e32fb311);
  Message10::M1::M2::M6* v3 = v1->mutable_f_2();
  Message10::M1::M2::M6::M13* v4 = v3->mutable_f_6();
  v4->set_f_0(0x1c2956e0432);
  Message10::M1::M2::M6::M13::M17* v5 = v4->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M20* v6_0 = v5->add_f_2();
  v6_0->set_f_0(0.369198);
  Message10::M1::M2::M6::M13::M17::M20* v6_1 = v5->add_f_2();
  v6_1->set_f_0(0.827947);
  Message10::M1::M2::M6::M13::M17::M23* v7 = v5->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M23::M25* v8_0 = v7->add_f_6();
  Message10::M1::M2::M6::M13::M17::M23::M25::M30* v9_0 = v8_0->add_f_3();
  v9_0->set_f_0(0x58);
  v7->add_f_0(s->substr(0, 6));
  v7->set_f_1(s->substr(0, 11));
  Message10::M1::M2::M6::M9* v10_0 = v3->add_f_4();
  Message10::M1::M2::M6::M9::M18* v11 = v10_0->mutable_f_4();
  v11->set_f_0(false);
  Message10::M1::M2::M6::M9::M15* v12 = v10_0->mutable_f_2();
  v12->set_f_4(0x8237390);
  Message10::M1::M2::M6::M9::M15::M22* v13 = v12->mutable_f_8();
  v13->set_f_0(s->substr(0, 2147));
  v13->set_f_1(0x6c);
  Message10::M1::M2::M6::M9::M15::M22::M27* v14_0 = v13->add_f_5();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v15_0 = v14_0->add_f_3();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v16 =
      v15_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v17_0 =
      v16->add_f_19();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33* v18 =
      v17_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M36* v19 =
      v18->mutable_f_4();
  v19->set_f_0(0x4bb55a87eb9353);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M34* v20 =
      v18->mutable_f_2();
  v20->set_f_0(0xeea98bad058993);
  v17_0->add_f_0(0x5351be5);
  v16->set_f_9(s->substr(0, 7));
  v16->set_f_8(0x5c6e966aca2f7a);
  v16->set_f_3(s->substr(0, 3));
  v16->set_f_10(0.857480);
  v16->set_f_7(s->substr(0, 8));
  v16->set_f_5(s->substr(0, 6));
  v15_0->set_f_0(0x4f);
  int32_t array_0[5] = {
      0x3ab958f, 0xde60268, 0x2aea235, 0x1cd954, 0xb1e3e95,
  };
  for (auto v : array_0) {
    v14_0->add_f_1(v);
  }
  Message10::M1::M2::M6::M9::M15::M22::M26* v21_0 = v13->add_f_3();
  v21_0->set_f_0(0x2e);
  v12->set_f_1(0x4365bf0c);
  v12->set_f_0(Message10::M1::M2::M6::M9::M15::E5_CONST_1);
  Message10::M1::M2::M6::M9* v10_1 = v3->add_f_4();
  Message10::M1::M2::M6::M9::M15* v22 = v10_1->mutable_f_2();
  v22->set_f_4(0x47);
  v22->set_f_0(Message10::M1::M2::M6::M9::M15::E5_CONST_3);
  Message10::M1::M2::M6::M9::M15::M22* v23 = v22->mutable_f_8();
  v23->set_f_1(0x856d0);
  Message10::M1::M2::M6::M9::M15::M22::M27* v24_0 = v23->add_f_5();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v25_0 = v24_0->add_f_3();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v26 =
      v25_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v27_0 =
      v26->add_f_19();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33* v28 =
      v27_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M35* v29 =
      v28->mutable_f_3();
  v29->set_f_0(0x56);
  v26->set_f_6(Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::E7_CONST_5);
  v26->set_f_7(s->substr(0, 32));
  v26->set_f_3(s->substr(0, 2));
  v25_0->set_f_0(0x1e);
  v23->set_f_0(s->substr(0, 115));
  v22->set_f_3(0xd649e4e22e874c);
  v10_1->set_f_0(s->substr(0, 8));
  Message10::M1::M2::M6::M14* v30_0 = v3->add_f_7();
  v30_0->set_f_27(0x1a);
  v30_0->set_f_17(true);
  v30_0->set_f_7(0xe8a1d382d73855);
  v30_0->set_f_3(0x1c277b59a71b02);
  v30_0->set_f_16(s->substr(0, 2));
  v30_0->set_f_11(0.544642);
  v30_0->set_f_4(0x66);
  v30_0->set_f_10(0x4ced73100d5f06);
  v30_0->set_f_28(0x5c);
  Message10::M1::M2::M6::M10* v31_0 = v3->add_f_5();
  Message10::M1::M2::M6::M10::M16* v32 = v31_0->mutable_f_3();
  Message10::M1::M2::M6::M10::M16::M19* v33 = v32->mutable_f_4();
  v33->set_f_0(0x36);
  v32->set_f_0(true);
  message->set_f_0(s->substr(0, 14));
  message->set_f_2(s->substr(0, 3));
}
void Message10_Set_3(Message10* message, std::string* s) {
  message->set_f_0(s->substr(0, 94));
  Message10::M1* v0_0 = message->add_f_4();
  Message10::M1::M4* v1 = v0_0->mutable_f_4();
  v1->set_f_0(s->substr(0, 30));
  Message10::M1::M2* v2 = v0_0->mutable_f_2();
  Message10::M1::M2::M6* v3 = v2->mutable_f_2();
  Message10::M1::M2::M6::M10* v4_0 = v3->add_f_5();
  v4_0->set_f_0(Message10::M1::M2::M6::M10::E2_CONST_2);
  Message10::M1::M2::M6::M14* v5_0 = v3->add_f_7();
  v5_0->set_f_24(0xb921790adb7c68);
  v5_0->set_f_0(0x71);
  v5_0->set_f_16(s->substr(0, 2));
  v5_0->set_f_12(Message10::M1::M2::M6::M14::E3_CONST_5);
  v5_0->set_f_19(0x951146e6df4bf);
  v5_0->set_f_29(0.525564);
  v5_0->set_f_3(0x9dba0337);
  v5_0->set_f_18(false);
  v5_0->set_f_21(0x1a);
  int32_t array_0[14] = {
      0x19,      0xf5c8097, 0x1905cf,  0xf42efcb, 0xc1f85,
      0x38cd0db, 0x3ff9cb5, 0x85cc2e8, 0x21da5e9, 0x50bbd16,
      0x11da04,  0x7ca577b, 0x5f,      0x1f74,
  };
  for (auto v : array_0) {
    v5_0->add_f_22(v);
  }
  v5_0->set_f_5(0x38efd37a50c2f9f1);
  Message10::M1::M2::M6::M14* v5_1 = v3->add_f_7();
  v5_1->set_f_33(s->substr(0, 8));
  v5_1->set_f_19(0x7dc5baaf5f90aa);
  v5_1->set_f_30(s->substr(0, 13));
  v5_1->set_f_28(0x76);
  v5_1->set_f_2(s->substr(0, 2));
  v5_1->set_f_4(0x95272);
  v5_1->set_f_18(true);
  v5_1->set_f_5(0x5a7944e767d631b3);
  v5_1->set_f_21(0x277de8);
  v5_1->set_f_6(0xecddf07);
  v5_1->set_f_1(s->substr(0, 5));
  v5_1->set_f_16(s->substr(0, 5));
  v5_1->set_f_11(0.720114);
  v3->set_f_0(0x6d);
  Message10::M1::M2::M6::M13* v6 = v3->mutable_f_6();
  Message10::M1::M2::M6::M13::M17* v7 = v6->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M23* v8 = v7->mutable_f_3();
  v8->set_f_1(s->substr(0, 15));
  v8->add_f_0(s->substr(0, 23));
  Message10::M1::M2::M6::M13::M17::M23::M25* v9_0 = v8->add_f_6();
  (void)v9_0;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M13::M17::M20* v10_0 = v7->add_f_2();
  v10_0->set_f_0(0.981234);
  Message10::M1::M2::M6::M9* v11_0 = v3->add_f_4();
  Message10::M1::M2::M6::M9::M18* v12 = v11_0->mutable_f_4();
  v12->set_f_0(true);
  Message10::M1::M2::M6::M9::M18::M21* v13_0 = v12->add_f_3();
  (void)v13_0;  // Suppresses clang-tidy.
  v11_0->set_f_0(s->substr(0, 45));
  Message10::M1::M2::M6::M9::M15* v14 = v11_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22* v15 = v14->mutable_f_8();
  Message10::M1::M2::M6::M9::M15::M22::M27* v16_0 = v15->add_f_5();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v17_0 = v16_0->add_f_3();
  v17_0->set_f_0(0x16);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v18 =
      v17_0->mutable_f_2();
  v18->set_f_1(false);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v19_0 =
      v18->add_f_19();
  int32_t array_1[72] = {
      0x141e32,  0xb20b2,   0x71,      0x44,      0x6b683e2, 0x1827185,
      0x1,       0xe4fe653, 0x24bd61d, 0x6945c,   0x7fbb95,  0x425fab8,
      0x4,       0xc9ea192, 0x13881a,  0x1aa9,    0x5f8a9,   0x909b8,
      0x22d9af,  0xfbe0c45, 0x681d0a4, 0x715ca29, 0x5af5c,   0x5ade130,
      0x48,      0x494,     0x9,       0x40699a2, 0xa04e554, 0x3264fb9,
      0xbceaf,   0x2d,      0x1b,      0x3e228,   0x4714189, 0x17eccb,
      0x1c51a3,  0x5b30a6f, 0x921aef4, 0x10ce73,  0x2061f1d, 0xa2e8294,
      0x90fe8,   0x25ad,    0x7e751aa, 0x17096fa, 0x1181a8,  0xb99fb,
      0x34,      0x174729f, 0x3c,      0x49b3fca, 0x3d8b821, 0xf38ce0d,
      0xe4467bd, 0x279b,    0x2c,      0xf61e749, 0x9446b36, 0x11,
      0x1bd209,  0x8b87216, 0xa422e,   0x6ca4d02, 0x231d9ac, 0x5829965,
      0xa5d395b, 0x4c,      0xcb3de63, 0xf4f5366, 0x1a0e4c,  0x7311846,
  };
  for (auto v : array_1) {
    v19_0->add_f_0(v);
  }
  v18->set_f_6(Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::E7_CONST_1);
  v16_0->set_f_0(0x1bdcb34683ed8);
  v15->set_f_1(0xc4716a1);
  v15->set_f_0(s->substr(0, 21));
  v14->set_f_0(Message10::M1::M2::M6::M9::M15::E5_CONST_3);
  v14->set_f_4(0x36);
  Message10::M1::M2::M7* v20_0 = v2->add_f_3();
  int array_2[60] = {
      32, 31, 29, 32, 3,  8,  40, 28, 21, 1,  19, 26, 67, 26, 7,
      28, 12, 28, 6,  40, 6,  31, 8,  4,  1,  26, 27, 1,  5,  10,
      24, 13, 6,  1,  1,  56, 32, 5,  4,  26, 47, 2,  5,  41, 2,
      28, 12, 2,  4,  1,  26, 8,  20, 4,  45, 9,  7,  4,  7,  61,
  };
  for (size_t i = 0; i < 60; ++i) {
    v20_0->add_f_3(s->substr(0, array_2[i]));
  }
  Message10::M1::M2::M7::M12* v21 = v20_0->mutable_f_10();
  v21->set_f_0(0x2bf7e4f6d354a7a0);
  Message10::M1::M3* v22 = v0_0->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
}
void Message10_Set_4(Message10* message, std::string* s) {
  Message10::M1* v0_0 = message->add_f_4();
  Message10::M1::M5* v1_0 = v0_0->add_f_5();
  (void)v1_0;  // Suppresses clang-tidy.
  Message10::M1::M5* v1_1 = v0_0->add_f_5();
  (void)v1_1;  // Suppresses clang-tidy.
  Message10::M1::M4* v2 = v0_0->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  Message10::M1::M2* v3 = v0_0->mutable_f_2();
  Message10::M1::M2::M7* v4_0 = v3->add_f_3();
  Message10::M1::M2::M7::M12* v5 = v4_0->mutable_f_10();
  (void)v5;  // Suppresses clang-tidy.
  Message10::M1::M2::M6* v6 = v3->mutable_f_2();
  Message10::M1::M2::M6::M13* v7 = v6->mutable_f_6();
  Message10::M1::M2::M6::M13::M17* v8 = v7->mutable_f_3();
  Message10::M1::M2::M6::M13::M17::M23* v9 = v8->mutable_f_3();
  v9->add_f_0(s->substr(0, 31));
  v9->set_f_1(s->substr(0, 2));
  v9->set_f_2(0x3050c36);
  Message10::M1::M2::M6::M13::M17::M23::M25* v10_0 = v9->add_f_6();
  (void)v10_0;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M13::M17::M23::M25* v10_1 = v9->add_f_6();
  Message10::M1::M2::M6::M13::M17::M23::M25::M28* v11_0 = v10_1->add_f_2();
  (void)v11_0;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M10* v12_0 = v6->add_f_5();
  v12_0->set_f_0(Message10::M1::M2::M6::M10::E2_CONST_1);
  Message10::M1::M2::M6::M10::M16* v13 = v12_0->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M9* v14_0 = v6->add_f_4();
  v14_0->set_f_0(s->substr(0, 108));
  Message10::M1::M2::M6::M9::M18* v15 = v14_0->mutable_f_4();
  v15->set_f_0(true);
  Message10::M1::M2::M6::M9::M15* v16 = v14_0->mutable_f_2();
  v16->set_f_2(s->substr(0, 22));
  Message10::M1::M2::M6::M9::M15::M22* v17 = v16->mutable_f_8();
  Message10::M1::M2::M6::M9::M15::M22::M27* v18_0 = v17->add_f_5();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29* v19_0 = v18_0->add_f_3();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31* v20 =
      v19_0->mutable_f_2();
  int64_t array_0[131] = {
      0x16,        0x6a,     0x2539274, 0x51,
      0x32,        0x53,     0x38db,    0x51,
      0x30,        0x75,     0x77,      0x3a,
      0x1686,      0x1d83,   0x1d53,    0xe54dfda3245727,
      0x3ded,      0x372,    0x970e3,   0x1a,
      0x5d,        0xea8,    0x34,      0x2eac,
      0x52,        0x26,     0x3f,      0x48,
      0x45,        0x14caf7, 0x5b,      0x16b8,
      0x5d7d712f0, 0xd,      0x43,      0x7e,
      0x95283,     0x6f,     0xb7c7ac7, 0x17f88a,
      0x9864f38,   0x70,     0x55,      0x2,
      0x1f4f9,     0x21,     0xe32,     0x26,
      0x3a,        0xc,      0x3ddb,    0xc,
      0x11f1b,     0x21,     0x76,      0x64,
      0x13ee04,    0x6f,     0x74,      0x5,
      0x30,        0x5f,     0x2a,      0x32bb,
      0x41,        0x14,     0x1a8f88,  0x12dc71,
      0x6b,        0x6f,     0x2413,    0x36,
      0x38,        0x18f1,   0x14,      0x140c,
      0x1f91b2,    0x3d,     0x805,     0x3e64,
      0x46,        0x3cb3,   0x46,      0x34,
      0x2,         0xcc8,    0x47,      0x2,
      0x9,         0x1a72,   0x85290,   0x40,
      0x74,        0x1ff69,  0x1,       0x7,
      0x16,        0x6c,     0x5d,      0x2bf,
      0x1ef07d,    0x37,     0x65,      0x3289,
      0x6b,        0x28,     0xd43cd,   0x20d,
      0x1e,        0x54,     0x6d,      0xebe2144,
      0xce76814,   0x145ed9, 0x1521,    0x6e,
      0x11cdde,    0x1b,     0x3cfc,    0xfc3,
      0x3a,        0x32bc,   0xbc4e7,   0x28,
      0x3b,        0xcca,    0x20,      0x25,
      0x77,        0xb6227,  0x62,
  };
  for (auto v : array_0) {
    v20->add_f_2(v);
  }
  v20->set_f_9(s->substr(0, 1));
  v20->set_f_4(0x1820b7dc26b91);
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32* v21_0 =
      v20->add_f_19();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33* v22 =
      v21_0->mutable_f_2();
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M36* v23 =
      v22->mutable_f_4();
  (void)v23;  // Suppresses clang-tidy.
  Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::M34* v24 =
      v22->mutable_f_2();
  (void)v24;  // Suppresses clang-tidy.
  v22->set_f_0(0x7);
  v20->set_f_7(s->substr(0, 2));
  v18_0->add_f_1(0x2d2606e);
  v18_0->set_f_0(0x12c01e6e7737);
  v17->set_f_1(0x7758ddc);
  Message10::M1::M2::M6::M14* v25_0 = v6->add_f_7();
  v25_0->set_f_24(0x46);
  v25_0->set_f_9(false);
  v25_0->set_f_17(true);
  v25_0->set_f_26(0xdf46e80);
  v25_0->set_f_21(0x13);
  v25_0->add_f_22(0x7537c32);
  v25_0->set_f_10(0x74);
  v25_0->set_f_29(0.971868);
  v25_0->set_f_2(s->substr(0, 13));
  v25_0->set_f_33(s->substr(0, 2));
  v25_0->set_f_11(0.474945);
  v25_0->set_f_16(s->substr(0, 4));
  v3->set_f_0(0.082705);
  Message10::M1::M3* v26 = v0_0->mutable_f_3();
  (void)v26;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 13));
}
void Message10_Get_1(Message10* message) {
  Receive((*message).f_2());
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_4()) {
    const Message10::M1::M3& v1 = v0.f_3();
    Receive(v1.f_0());
    Receive(v0.f_0());
    const Message10::M1::M4& v2 = v0.f_4();
    Receive(v2.f_0());
    const Message10::M1::M2& v3 = v0.f_2();
    Receive(v3.f_0());
    for (const auto& v4 : v3.f_3()) {
      const Message10::M1::M2::M7::M11& v5 = v4.f_9();
      Receive(v5.f_0());
      Receive(v4.f_1());
      Receive(v4.f_4());
      Receive(v4.f_0());
      for (int i = 0; i < v4.f_3_size(); ++i) {
        Receive(v4.f_3(i));
      }
      Receive(v4.f_2());
      const Message10::M1::M2::M7::M12& v6 = v4.f_10();
      Receive(v6.f_0());
      Receive(v4.f_5());
    }
    const Message10::M1::M2::M6& v7 = v3.f_2();
    for (const auto& v8 : v7.f_4()) {
      const Message10::M1::M2::M6::M9::M18& v9 = v8.f_4();
      for (const auto& v10 : v9.f_3()) {
        Receive(v10.f_0());
      }
      Receive(v9.f_0());
      const Message10::M1::M2::M6::M9::M15& v11 = v8.f_2();
      Receive(v11.f_3());
      Receive(v11.f_1());
      Receive(v11.f_4());
      Receive(v11.f_0());
      const Message10::M1::M2::M6::M9::M15::M22& v12 = v11.f_8();
      Receive(v12.f_1());
      for (const auto& v13 : v12.f_5()) {
        Receive(v13.f_0());
        for (int i = 0; i < v13.f_1_size(); ++i) {
          Receive(v13.f_1(i));
        }
        for (const auto& v14 : v13.f_3()) {
          const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31& v15 =
              v14.f_2();
          Receive(v15.f_10());
          Receive(v15.f_6());
          Receive(v15.f_5());
          Receive(v15.f_4());
          Receive(v15.f_0());
          for (int i = 0; i < v15.f_2_size(); ++i) {
            Receive(v15.f_2(i));
          }
          Receive(v15.f_9());
          for (const auto& v16 : v15.f_19()) {
            for (int i = 0; i < v16.f_0_size(); ++i) {
              Receive(v16.f_0(i));
            }
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33&
                v17 = v16.f_2();
            Receive(v17.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M35& v18 = v17.f_3();
            Receive(v18.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M34& v19 = v17.f_2();
            Receive(v19.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M36& v20 = v17.f_4();
            Receive(v20.f_0());
          }
          Receive(v15.f_1());
          Receive(v15.f_8());
          Receive(v15.f_3());
          Receive(v15.f_7());
          Receive(v14.f_0());
        }
      }
      for (const auto& v21 : v12.f_3()) {
        Receive(v21.f_0());
      }
      Receive(v12.f_0());
      Receive(v11.f_2());
      Receive(v8.f_0());
    }
    const Message10::M1::M2::M6::M13& v22 = v7.f_6();
    Receive(v22.f_0());
    const Message10::M1::M2::M6::M13::M17& v23 = v22.f_3();
    for (const auto& v24 : v23.f_2()) {
      Receive(v24.f_0());
    }
    Receive(v23.f_0());
    const Message10::M1::M2::M6::M13::M17::M23& v25 = v23.f_3();
    Receive(v25.f_2());
    Receive(v25.f_1());
    for (int i = 0; i < v25.f_0_size(); ++i) {
      Receive(v25.f_0(i));
    }
    for (const auto& v26 : v25.f_6()) {
      for (const auto& v27 : v26.f_2()) {
        Receive(v27.f_0());
      }
      Receive(v26.f_0());
      for (const auto& v28 : v26.f_3()) {
        Receive(v28.f_0());
      }
    }
    Receive(v7.f_0());
    for (const auto& v29 : v7.f_7()) {
      Receive(v29.f_26());
      Receive(v29.f_28());
      Receive(v29.f_15());
      Receive(v29.f_8());
      Receive(v29.f_24());
      Receive(v29.f_0());
      Receive(v29.f_1());
      Receive(v29.f_3());
      Receive(v29.f_29());
      Receive(v29.f_9());
      Receive(v29.f_18());
      Receive(v29.f_10());
      Receive(v29.f_33());
      Receive(v29.f_5());
      Receive(v29.f_16());
      Receive(v29.f_11());
      Receive(v29.f_30());
      Receive(v29.f_19());
      for (int i = 0; i < v29.f_22_size(); ++i) {
        Receive(v29.f_22(i));
      }
      Receive(v29.f_2());
      Receive(v29.f_32());
      Receive(v29.f_6());
      Receive(v29.f_23());
      Receive(v29.f_7());
      Receive(v29.f_25());
      Receive(v29.f_17());
      Receive(v29.f_13());
      Receive(v29.f_21());
      Receive(v29.f_27());
      Receive(v29.f_31());
      Receive(v29.f_14());
      Receive(v29.f_12());
      Receive(v29.f_20());
      Receive(v29.f_4());
    }
    for (const auto& v30 : v7.f_3()) {
      Receive(v30.f_0());
    }
    for (const auto& v31 : v7.f_5()) {
      const Message10::M1::M2::M6::M10::M16& v32 = v31.f_3();
      const Message10::M1::M2::M6::M10::M16::M19& v33 = v32.f_4();
      const Message10::M1::M2::M6::M10::M16::M19::M24& v34 = v33.f_3();
      Receive(v34.f_0());
      Receive(v33.f_0());
      Receive(v32.f_0());
      Receive(v31.f_0());
    }
    for (const auto& v35 : v0.f_5()) {
      Receive(v35.f_0());
    }
  }
  Receive((*message).f_1());
}
void Message10_Get_2(Message10* message) {
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_4()) {
    for (const auto& v1 : v0.f_5()) {
      Receive(v1.f_0());
    }
    const Message10::M1::M2& v2 = v0.f_2();
    const Message10::M1::M2::M6& v3 = v2.f_2();
    Receive(v3.f_0());
    for (const auto& v4 : v3.f_3()) {
      Receive(v4.f_0());
    }
    for (const auto& v5 : v3.f_4()) {
      const Message10::M1::M2::M6::M9::M15& v6 = v5.f_2();
      Receive(v6.f_4());
      Receive(v6.f_1());
      Receive(v6.f_0());
      Receive(v6.f_2());
      const Message10::M1::M2::M6::M9::M15::M22& v7 = v6.f_8();
      for (const auto& v8 : v7.f_3()) {
        Receive(v8.f_0());
      }
      Receive(v7.f_1());
      Receive(v7.f_0());
      for (const auto& v9 : v7.f_5()) {
        Receive(v9.f_0());
        for (const auto& v10 : v9.f_3()) {
          Receive(v10.f_0());
          const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31& v11 =
              v10.f_2();
          Receive(v11.f_6());
          Receive(v11.f_5());
          for (int i = 0; i < v11.f_2_size(); ++i) {
            Receive(v11.f_2(i));
          }
          Receive(v11.f_4());
          Receive(v11.f_10());
          Receive(v11.f_1());
          Receive(v11.f_9());
          Receive(v11.f_0());
          Receive(v11.f_7());
          Receive(v11.f_3());
          for (const auto& v12 : v11.f_19()) {
            for (int i = 0; i < v12.f_0_size(); ++i) {
              Receive(v12.f_0(i));
            }
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33&
                v13 = v12.f_2();
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M34& v14 = v13.f_2();
            Receive(v14.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M36& v15 = v13.f_4();
            Receive(v15.f_0());
            Receive(v13.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M35& v16 = v13.f_3();
            Receive(v16.f_0());
          }
          Receive(v11.f_8());
        }
        for (int i = 0; i < v9.f_1_size(); ++i) {
          Receive(v9.f_1(i));
        }
      }
      Receive(v6.f_3());
      Receive(v5.f_0());
      const Message10::M1::M2::M6::M9::M18& v17 = v5.f_4();
      for (const auto& v18 : v17.f_3()) {
        Receive(v18.f_0());
      }
      Receive(v17.f_0());
    }
    for (const auto& v19 : v3.f_5()) {
      Receive(v19.f_0());
      const Message10::M1::M2::M6::M10::M16& v20 = v19.f_3();
      const Message10::M1::M2::M6::M10::M16::M19& v21 = v20.f_4();
      const Message10::M1::M2::M6::M10::M16::M19::M24& v22 = v21.f_3();
      Receive(v22.f_0());
      Receive(v21.f_0());
      Receive(v20.f_0());
    }
    const Message10::M1::M2::M6::M13& v23 = v3.f_6();
    Receive(v23.f_0());
    const Message10::M1::M2::M6::M13::M17& v24 = v23.f_3();
    for (const auto& v25 : v24.f_2()) {
      Receive(v25.f_0());
    }
    Receive(v24.f_0());
    const Message10::M1::M2::M6::M13::M17::M23& v26 = v24.f_3();
    Receive(v26.f_2());
    Receive(v26.f_1());
    for (int i = 0; i < v26.f_0_size(); ++i) {
      Receive(v26.f_0(i));
    }
    for (const auto& v27 : v26.f_6()) {
      for (const auto& v28 : v27.f_3()) {
        Receive(v28.f_0());
      }
      for (const auto& v29 : v27.f_2()) {
        Receive(v29.f_0());
      }
      Receive(v27.f_0());
    }
    for (const auto& v30 : v3.f_7()) {
      Receive(v30.f_30());
      Receive(v30.f_4());
      Receive(v30.f_17());
      Receive(v30.f_12());
      Receive(v30.f_1());
      Receive(v30.f_20());
      Receive(v30.f_11());
      Receive(v30.f_32());
      Receive(v30.f_3());
      Receive(v30.f_21());
      Receive(v30.f_7());
      Receive(v30.f_9());
      Receive(v30.f_15());
      Receive(v30.f_26());
      Receive(v30.f_29());
      Receive(v30.f_0());
      Receive(v30.f_33());
      Receive(v30.f_24());
      Receive(v30.f_8());
      Receive(v30.f_23());
      Receive(v30.f_16());
      Receive(v30.f_10());
      Receive(v30.f_2());
      for (int i = 0; i < v30.f_22_size(); ++i) {
        Receive(v30.f_22(i));
      }
      Receive(v30.f_5());
      Receive(v30.f_18());
      Receive(v30.f_6());
      Receive(v30.f_25());
      Receive(v30.f_14());
      Receive(v30.f_27());
      Receive(v30.f_13());
      Receive(v30.f_19());
      Receive(v30.f_28());
      Receive(v30.f_31());
    }
    for (const auto& v31 : v2.f_3()) {
      Receive(v31.f_5());
      Receive(v31.f_4());
      const Message10::M1::M2::M7::M11& v32 = v31.f_9();
      Receive(v32.f_0());
      Receive(v31.f_2());
      const Message10::M1::M2::M7::M12& v33 = v31.f_10();
      Receive(v33.f_0());
      Receive(v31.f_1());
      for (int i = 0; i < v31.f_3_size(); ++i) {
        Receive(v31.f_3(i));
      }
      Receive(v31.f_0());
    }
    Receive(v2.f_0());
    Receive(v0.f_0());
    const Message10::M1::M3& v34 = v0.f_3();
    Receive(v34.f_0());
    const Message10::M1::M4& v35 = v0.f_4();
    Receive(v35.f_0());
  }
  Receive((*message).f_2());
  Receive((*message).f_1());
}
void Message10_Get_3(Message10* message) {
  Receive((*message).f_2());
  Receive((*message).f_1());
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_4()) {
    const Message10::M1::M3& v1 = v0.f_3();
    Receive(v1.f_0());
    for (const auto& v2 : v0.f_5()) {
      Receive(v2.f_0());
    }
    const Message10::M1::M2& v3 = v0.f_2();
    for (const auto& v4 : v3.f_3()) {
      for (int i = 0; i < v4.f_3_size(); ++i) {
        Receive(v4.f_3(i));
      }
      const Message10::M1::M2::M7::M12& v5 = v4.f_10();
      Receive(v5.f_0());
      Receive(v4.f_2());
      Receive(v4.f_5());
      Receive(v4.f_1());
      const Message10::M1::M2::M7::M11& v6 = v4.f_9();
      Receive(v6.f_0());
      Receive(v4.f_4());
      Receive(v4.f_0());
    }
    const Message10::M1::M2::M6& v7 = v3.f_2();
    Receive(v7.f_0());
    for (const auto& v8 : v7.f_4()) {
      const Message10::M1::M2::M6::M9::M18& v9 = v8.f_4();
      Receive(v9.f_0());
      for (const auto& v10 : v9.f_3()) {
        Receive(v10.f_0());
      }
      Receive(v8.f_0());
      const Message10::M1::M2::M6::M9::M15& v11 = v8.f_2();
      const Message10::M1::M2::M6::M9::M15::M22& v12 = v11.f_8();
      Receive(v12.f_1());
      for (const auto& v13 : v12.f_5()) {
        for (const auto& v14 : v13.f_3()) {
          const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31& v15 =
              v14.f_2();
          Receive(v15.f_0());
          for (const auto& v16 : v15.f_19()) {
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33&
                v17 = v16.f_2();
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M34& v18 = v17.f_2();
            Receive(v18.f_0());
            Receive(v17.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M35& v19 = v17.f_3();
            Receive(v19.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M36& v20 = v17.f_4();
            Receive(v20.f_0());
            for (int i = 0; i < v16.f_0_size(); ++i) {
              Receive(v16.f_0(i));
            }
          }
          Receive(v15.f_4());
          Receive(v15.f_7());
          Receive(v15.f_8());
          Receive(v15.f_6());
          for (int i = 0; i < v15.f_2_size(); ++i) {
            Receive(v15.f_2(i));
          }
          Receive(v15.f_5());
          Receive(v15.f_1());
          Receive(v15.f_10());
          Receive(v15.f_3());
          Receive(v15.f_9());
          Receive(v14.f_0());
        }
        Receive(v13.f_0());
        for (int i = 0; i < v13.f_1_size(); ++i) {
          Receive(v13.f_1(i));
        }
      }
      Receive(v12.f_0());
      for (const auto& v21 : v12.f_3()) {
        Receive(v21.f_0());
      }
      Receive(v11.f_2());
      Receive(v11.f_3());
      Receive(v11.f_1());
      Receive(v11.f_0());
      Receive(v11.f_4());
    }
    const Message10::M1::M2::M6::M13& v22 = v7.f_6();
    Receive(v22.f_0());
    const Message10::M1::M2::M6::M13::M17& v23 = v22.f_3();
    const Message10::M1::M2::M6::M13::M17::M23& v24 = v23.f_3();
    Receive(v24.f_1());
    for (int i = 0; i < v24.f_0_size(); ++i) {
      Receive(v24.f_0(i));
    }
    for (const auto& v25 : v24.f_6()) {
      Receive(v25.f_0());
      for (const auto& v26 : v25.f_2()) {
        Receive(v26.f_0());
      }
      for (const auto& v27 : v25.f_3()) {
        Receive(v27.f_0());
      }
    }
    Receive(v24.f_2());
    Receive(v23.f_0());
    for (const auto& v28 : v23.f_2()) {
      Receive(v28.f_0());
    }
    for (const auto& v29 : v7.f_3()) {
      Receive(v29.f_0());
    }
    for (const auto& v30 : v7.f_5()) {
      Receive(v30.f_0());
      const Message10::M1::M2::M6::M10::M16& v31 = v30.f_3();
      const Message10::M1::M2::M6::M10::M16::M19& v32 = v31.f_4();
      const Message10::M1::M2::M6::M10::M16::M19::M24& v33 = v32.f_3();
      Receive(v33.f_0());
      Receive(v32.f_0());
      Receive(v31.f_0());
    }
    for (const auto& v34 : v7.f_7()) {
      Receive(v34.f_30());
      Receive(v34.f_11());
      Receive(v34.f_32());
      Receive(v34.f_10());
      Receive(v34.f_29());
      Receive(v34.f_2());
      Receive(v34.f_8());
      Receive(v34.f_6());
      Receive(v34.f_28());
      Receive(v34.f_21());
      Receive(v34.f_3());
      Receive(v34.f_12());
      Receive(v34.f_33());
      Receive(v34.f_9());
      Receive(v34.f_16());
      Receive(v34.f_4());
      Receive(v34.f_5());
      Receive(v34.f_0());
      Receive(v34.f_7());
      Receive(v34.f_15());
      for (int i = 0; i < v34.f_22_size(); ++i) {
        Receive(v34.f_22(i));
      }
      Receive(v34.f_13());
      Receive(v34.f_26());
      Receive(v34.f_27());
      Receive(v34.f_1());
      Receive(v34.f_20());
      Receive(v34.f_31());
      Receive(v34.f_23());
      Receive(v34.f_24());
      Receive(v34.f_14());
      Receive(v34.f_18());
      Receive(v34.f_19());
      Receive(v34.f_17());
      Receive(v34.f_25());
    }
    Receive(v3.f_0());
    const Message10::M1::M4& v35 = v0.f_4();
    Receive(v35.f_0());
    Receive(v0.f_0());
  }
}
void Message10_Get_4(Message10* message) {
  Receive((*message).f_2());
  for (const auto& v0 : (*message).f_4()) {
    Receive(v0.f_0());
    for (const auto& v1 : v0.f_5()) {
      Receive(v1.f_0());
    }
    const Message10::M1::M2& v2 = v0.f_2();
    const Message10::M1::M2::M6& v3 = v2.f_2();
    for (const auto& v4 : v3.f_4()) {
      Receive(v4.f_0());
      const Message10::M1::M2::M6::M9::M18& v5 = v4.f_4();
      for (const auto& v6 : v5.f_3()) {
        Receive(v6.f_0());
      }
      Receive(v5.f_0());
      const Message10::M1::M2::M6::M9::M15& v7 = v4.f_2();
      const Message10::M1::M2::M6::M9::M15::M22& v8 = v7.f_8();
      for (const auto& v9 : v8.f_5()) {
        Receive(v9.f_0());
        for (int i = 0; i < v9.f_1_size(); ++i) {
          Receive(v9.f_1(i));
        }
        for (const auto& v10 : v9.f_3()) {
          const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31& v11 =
              v10.f_2();
          Receive(v11.f_6());
          Receive(v11.f_7());
          Receive(v11.f_5());
          Receive(v11.f_8());
          Receive(v11.f_4());
          Receive(v11.f_1());
          for (const auto& v12 : v11.f_19()) {
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33&
                v13 = v12.f_2();
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M35& v14 = v13.f_3();
            Receive(v14.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M34& v15 = v13.f_2();
            Receive(v15.f_0());
            const Message10::M1::M2::M6::M9::M15::M22::M27::M29::M31::M32::M33::
                M36& v16 = v13.f_4();
            Receive(v16.f_0());
            Receive(v13.f_0());
            for (int i = 0; i < v12.f_0_size(); ++i) {
              Receive(v12.f_0(i));
            }
          }
          for (int i = 0; i < v11.f_2_size(); ++i) {
            Receive(v11.f_2(i));
          }
          Receive(v11.f_0());
          Receive(v11.f_3());
          Receive(v11.f_10());
          Receive(v11.f_9());
          Receive(v10.f_0());
        }
      }
      for (const auto& v17 : v8.f_3()) {
        Receive(v17.f_0());
      }
      Receive(v8.f_1());
      Receive(v8.f_0());
      Receive(v7.f_2());
      Receive(v7.f_3());
      Receive(v7.f_4());
      Receive(v7.f_0());
      Receive(v7.f_1());
    }
    for (const auto& v18 : v3.f_3()) {
      Receive(v18.f_0());
    }
    for (const auto& v19 : v3.f_7()) {
      for (int i = 0; i < v19.f_22_size(); ++i) {
        Receive(v19.f_22(i));
      }
      Receive(v19.f_18());
      Receive(v19.f_20());
      Receive(v19.f_31());
      Receive(v19.f_14());
      Receive(v19.f_0());
      Receive(v19.f_28());
      Receive(v19.f_19());
      Receive(v19.f_3());
      Receive(v19.f_30());
      Receive(v19.f_4());
      Receive(v19.f_24());
      Receive(v19.f_7());
      Receive(v19.f_27());
      Receive(v19.f_10());
      Receive(v19.f_1());
      Receive(v19.f_11());
      Receive(v19.f_17());
      Receive(v19.f_33());
      Receive(v19.f_6());
      Receive(v19.f_21());
      Receive(v19.f_32());
      Receive(v19.f_29());
      Receive(v19.f_23());
      Receive(v19.f_5());
      Receive(v19.f_15());
      Receive(v19.f_16());
      Receive(v19.f_13());
      Receive(v19.f_2());
      Receive(v19.f_12());
      Receive(v19.f_26());
      Receive(v19.f_9());
      Receive(v19.f_8());
      Receive(v19.f_25());
    }
    const Message10::M1::M2::M6::M13& v20 = v3.f_6();
    Receive(v20.f_0());
    const Message10::M1::M2::M6::M13::M17& v21 = v20.f_3();
    Receive(v21.f_0());
    const Message10::M1::M2::M6::M13::M17::M23& v22 = v21.f_3();
    Receive(v22.f_1());
    for (const auto& v23 : v22.f_6()) {
      for (const auto& v24 : v23.f_2()) {
        Receive(v24.f_0());
      }
      for (const auto& v25 : v23.f_3()) {
        Receive(v25.f_0());
      }
      Receive(v23.f_0());
    }
    Receive(v22.f_2());
    for (int i = 0; i < v22.f_0_size(); ++i) {
      Receive(v22.f_0(i));
    }
    for (const auto& v26 : v21.f_2()) {
      Receive(v26.f_0());
    }
    Receive(v3.f_0());
    for (const auto& v27 : v3.f_5()) {
      Receive(v27.f_0());
      const Message10::M1::M2::M6::M10::M16& v28 = v27.f_3();
      const Message10::M1::M2::M6::M10::M16::M19& v29 = v28.f_4();
      const Message10::M1::M2::M6::M10::M16::M19::M24& v30 = v29.f_3();
      Receive(v30.f_0());
      Receive(v29.f_0());
      Receive(v28.f_0());
    }
    for (const auto& v31 : v2.f_3()) {
      Receive(v31.f_0());
      Receive(v31.f_2());
      Receive(v31.f_4());
      Receive(v31.f_1());
      const Message10::M1::M2::M7::M12& v32 = v31.f_10();
      Receive(v32.f_0());
      const Message10::M1::M2::M7::M11& v33 = v31.f_9();
      Receive(v33.f_0());
      for (int i = 0; i < v31.f_3_size(); ++i) {
        Receive(v31.f_3(i));
      }
      Receive(v31.f_5());
    }
    Receive(v2.f_0());
    const Message10::M1::M3& v34 = v0.f_3();
    Receive(v34.f_0());
    const Message10::M1::M4& v35 = v0.f_4();
    Receive(v35.f_0());
  }
  Receive((*message).f_0());
  Receive((*message).f_1());
}
}  // namespace fleetbench::proto
