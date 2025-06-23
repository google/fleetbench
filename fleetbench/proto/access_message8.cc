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

#include "fleetbench/proto/access_message8.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message8.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message8_Set_1(Message8* message, std::string* s) {
  message->set_f_0(s->substr(0, 56));
  Message8::M1* v0 = message->mutable_f_4();
  (void)v0;  // Suppresses clang-tidy.
  Message8::M3* v1_0 = message->add_f_6();
  Message8::M3::M9* v2 = v1_0->mutable_f_2();
  Message8::M3::M9::M13* v3 = v2->mutable_f_7();
  Message8::M3::M9::M13::M18* v4 = v3->mutable_f_5();
  Message8::M3::M9::M13::M18::M31* v5 = v4->mutable_f_2();
  Message8::M3::M9::M13::M18::M31::M35* v6 = v5->mutable_f_3();
  v6->set_f_5(0x6);
  v6->set_f_4(0.577595);
  v3->set_f_0(Message8::M3::M9::M13::E4_CONST_3);
  v3->set_f_3(s->substr(0, 2));
  v3->set_f_2(s->substr(0, 524));
  Message8::M3::M9::M15* v7 = v2->mutable_f_8();
  Message8::M3::M9::M15::M29* v8_0 = v7->add_f_5();
  v8_0->set_f_0(Message8::M3::M9::M15::M29::E10_CONST_1);
  Message8::M3::M9::M15::M29::M32* v9_0 = v8_0->add_f_2();
  v9_0->set_f_4(s->substr(0, 70));
  Message8::M3::M9::M15::M29::M32::M41* v10_0 = v9_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v11 = v10_0->mutable_f_2();
  v11->set_f_0(0x5bbbbcfe7);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v12 = v11->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v13 = v12->mutable_f_2();
  v13->set_f_0(0x53);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v14 =
      v13->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v15 =
      v14->mutable_f_2();
  v15->set_f_1(0x2906);
  v15->set_f_0(0x79);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v16 =
      v15->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_2(0x2c31bdd5);
  v15->add_f_4(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   E31_CONST_1);
  v14->set_f_0(s->substr(0, 17));
  Message8::M3::M9::M15::M29::M32::M41::M48* v17 = v10_0->mutable_f_3();
  v17->set_f_1(0.015988);
  v17->set_f_5(Message8::M3::M9::M15::M29::M32::M41::M48::E21_CONST_3);
  v17->set_f_2(0x36);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v18_0 = v17->add_f_8();
  v18_0->set_f_54(0x87);
  v18_0->add_f_2(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4);
  v18_0->set_f_12(0xad04be);
  v18_0->set_f_60(0x40);
  v18_0->set_f_9(0x6c);
  v18_0->set_f_47(0.076812);
  v18_0->set_f_38(0.453223);
  v18_0->add_f_56(0x21);
  v18_0->add_f_56(0xca89724);
  v18_0->set_f_44(s->substr(0, 17));
  v18_0->set_f_35(s->substr(0, 9));
  int64_t array_1[171] = {
      0xa,         0x4b,          0x1f,
      0x2d7df0043, 0x178a47,      0x67f1c86,
      0x7d,        0x6e,          0xb4e5e62,
      0xcc7,       0x46,          0x57c9347,
      0x187a45,    0x74,          0x34,
      0xb195a7,    0x4b,          0x3,
      0x74c69,     0x1ae05f,      0x50,
      0x12f2f4,    0x4,           0x2f,
      0x22,        0x1b,          0x36ec,
      0x4f82c,     0x11b289,      0x40d60,
      0x61,        0x47f649,      0x1b2a,
      0x4d,        0xc9eb2,       0x5c,
      0x817b0ed,   0x26,          0x13,
      0x51b0f,     0xf09923f,     0x2e4b,
      0x38,        0x520704c,     0x48eb8,
      0x51c34,     0x3ddd,        0x13ad48,
      0x140117,    0x3d,          0xf5fdb3f2c5c179,
      0x50,        0x1a632f,      0x1b4982,
      0x4ef9e47,   0x1d8a96,      0x55,
      0x74,        0x1919e90,     0x1e,
      0x12,        0x1f9c,        0x52,
      0x76511ad,   0x11d49b,      0xf653337ffc458a,
      0x44,        0x5f,          0x9b15ea3,
      0xfaa5d8c,   0x71,          0xe23a3,
      0x3f,        0x4e,          0x37,
      0xb9b4e,     0x44,          0xd193a08,
      0x1f,        0x3cde,        0x5bbdc0e0e,
      0x207c595,   0x20,          0x555713e,
      0x6,         0x677b67f,     0x79,
      0x290b,      0xc34b8,       0x8d9c4d3,
      0x2f,        0x11d635,      0x6f,
      0x55,        0x4b,          0xd95cb39,
      0x35ca974cb, 0x70,          0x72,
      0x1a310c,    0x19b2c09,     0x77,
      0x54,        0x6c,          0x637032d,
      0x43,        0x2725d42,     0x3a023,
      0x7e,        0x3d,          0x4e,
      0x37,        0x801a0e0,     0x7d23e,
      0x37ef,      0x7a,          0x29,
      0x8c7a14,    0x5c,          0x17edbe,
      0x15,        0x4b,          0x5c080c1,
      0x36,        0x1e,          0x3e,
      0x2cd5d43,   0x2f,          0x1f,
      0x1,         0xa,           0x6c,
      0x3e,        0xe,           0x250f125,
      0x473,       0x178700,      0x362d62916d51cb,
      0x132c48,    0x55,          0x79,
      0x73,        0xbfef3a0,     0x2ce2fe3ed1b,
      0x13,        0x46ba0,       0x17fa,
      0x16f1,      0x18,          0x76,
      0x141d60,    0xfd4fa,       0xeb028,
      0x5d66f4c,   0x4c5ce,       0x2c5e885,
      0x15de,      0x52cc8,       0x79,
      0x5a,        0x3e,          0x71,
      0x2a,        0x18dfedf38a6, 0x29,
      0x6e,        0x1e29,        0x2244,
      0x15,        0x62,          0xcff601b,
  };
  for (auto v : array_1) {
    v18_0->add_f_22(v);
  }
  v18_0->set_f_64(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E29_CONST_2);
  v18_0->set_f_55(0.301424);
  v18_0->set_f_13(0x6a);
  v18_0->set_f_34(0xb4b735b835);
  v18_0->set_f_32(s->substr(0, 20));
  v18_0->set_f_37(0x15ffe0);
  v18_0->set_f_42(0x15909b);
  v18_0->set_f_3(0xc14a747);
  v18_0->set_f_26(0.194821);
  v18_0->set_f_61(false);
  v18_0->set_f_23(0x3a);
  v18_0->set_f_43(false);
  v18_0->set_f_14(0x1eeee6);
  v18_0->set_f_33(true);
  v18_0->set_f_21(0x2a);
  v18_0->set_f_68(true);
  v18_0->set_f_28(s->substr(0, 5));
  v18_0->add_f_45(0xf87b71e);
  v18_0->set_f_11(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E27_CONST_2);
  v18_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_2);
  v18_0->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_2);
  v18_0->set_f_57(true);
  v17->set_f_3(Message8::M3::M9::M15::M29::M32::M41::M48::E20_CONST_1);
  v17->set_f_4(0x63e156fff);
  v9_0->set_f_2(s->substr(0, 7));
  v9_0->set_f_5(s->substr(0, 16));
  v9_0->set_f_0(Message8::M3::M9::M15::M29::M32::E11_CONST_3);
  v9_0->set_f_6(0x21d2c8c);
  v9_0->set_f_3(s->substr(0, 7));
  Message8::M3::M9::M15::M29* v8_1 = v7->add_f_5();
  Message8::M3::M9::M15::M29::M32* v19_0 = v8_1->add_f_2();
  v19_0->set_f_0(Message8::M3::M9::M15::M29::M32::E11_CONST_4);
  v19_0->set_f_5(s->substr(0, 270));
  Message8::M3::M9::M15::M29::M32::M41* v20_0 = v19_0->add_f_12();
  v20_0->set_f_0(0.169797);
  Message8::M3::M9::M15::M29::M32::M41::M48* v21 = v20_0->mutable_f_3();
  v21->set_f_0(0x9749dcf);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v22_0 = v21->add_f_8();
  v22_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_5);
  v22_0->set_f_42(0xe707a);
  v22_0->set_f_61(true);
  v22_0->set_f_8(s->substr(0, 2));
  v22_0->set_f_62(0xe8d049cfb8ae1f);
  v22_0->set_f_47(0.370757);
  v22_0->set_f_44(s->substr(0, 5));
  v22_0->set_f_39(0xa64be5c40f51c3d);
  v22_0->set_f_13(0x5f);
  int64_t array_2[200] = {
      0x112431,
      0x11d32b,
      0x1c31,
      0x1cef28,
      0x24,
      0x127b70,
      0x1a,
      0x43,
      0xdf3fa,
      0xe49f401,
      0x9e8733b,
      0x1d,
      0x5f,
      0x58c8553,
      0x141b06,
      0x170e83c,
      0x508260533cefff,
      0xbe1ea,
      0x3faa,
      0x3,
      0x38ae,
      0x3e160,
      0x1e,
      0x58,
      0x53,
      0x16d208,
      0x2bc4,
      0x11dc39,
      0x66c1562569457b,
      0x88ad6,
      0x68,
      0x3b,
      0x34,
      0xf943c,
      0xe07bb36,
      0xc4666,
      0x3a,
      0x45,
      0x75e488d,
      0x25,
      0x4,
      0x26,
      0x31,
      0x17,
      0xe12c3fd,
      0x143310953bfe3,
      0x20,
      0x1e70ae,
      0x46,
      0xbd2f2a,
      0x19f7dd,
      0x1d,
      0xc450378b0df0,
      0x36,
      0x24,
      0x18eaf4,
      0x24,
      0x60,
      0xa,
      0xe,
      0x47,
      0x73692,
      0x1a0264,
      0x32f,
      0x81c21db,
      0x73,
      0x1ce5e9,
      0x1b67e2,
      0x43,
      0x51,
      0x10af3a,
      0x3168,
      0x76,
      0x9e8ef,
      0x17,
      0x28,
      0x3b43258,
      0x1c,
      0x406e6,
      0x1b52c0a,
      0x162d5e,
      0x10,
      0x67,
      0x58,
      0x73,
      0x52,
      0x5b,
      0x36,
      0x43,
      0x2a3,
      0x6e,
      0x70,
      0xab77f7f,
      0x5f,
      0xddf02,
      0x2ae7,
      0x3a,
      0xc,
      0x4b,
      0x35ac27b,
      0x52,
      0x2f,
      0x14c930,
      0xf,
      0x14,
      0x4a,
      0x1576,
      0xbf655,
      0x45,
      0x7a,
      0x9a55260,
      0xb,
      0x33,
      0xb963c6,
      0x2d,
      0x6f,
      0xf5f82e5cd0ba41,
      0x3c5b,
      0x36,
      0x60,
      0x1a,
      0x4b7702522,
      0x3def,
      0x28,
      0x1f1cde8,
      0x3,
      0x67d62,
      0x39e25,
      0x34,
      0x7e052,
      0x7d,
      0xf21f771,
      0x3e,
      0x33c47,
      0x1d4c31,
      0x47,
      0x66,
      0x72030,
      0x53,
      0x670e2b6,
      0xdb0ac2c,
      0x38,
      0x129be0c,
      0x5d8bd9ac7,
      0x51,
      0x3ea2,
      0x35,
      0x1d01ad,
      0x3f7b,
      0x50,
      0xa,
      0x1f,
      0x65,
      0xa2400ddd52a3ec,
      0xd2f502b,
      0x39,
      0x10,
      0xffbcb03,
      0x65,
      0x3a,
      0x2d,
      0xa195,
      0x17,
      0x32dcb92,
      0xec61c97,
      0x44,
      0x1ed0f1,
      0x59,
      0x43,
      0x17,
      0x7,
      0x1dbba237,
      0x21d,
      0x23,
      0x19,
      0x8a177cbc,
      0x1a22cb,
      0xc,
      0x24,
      0x24,
      0x1cecb8,
      0x7290b,
      0x46,
      0x733c793a7,
      0x61,
      0x136cdc9,
      0x3e,
      0x129c35,
      0x14,
      0x31b3,
      0x104bb9,
      0x17,
      0x26,
      0x5077eb62a,
      0xe9c0f,
      0x635086a,
      0x2d,
      0x46,
      0x1450d0,
      0x1f,
  };
  for (auto v : array_2) {
    v22_0->add_f_22(v);
  }
  v22_0->set_f_57(true);
  v22_0->set_f_43(false);
  v22_0->set_f_3(0x2835353090b);
  v22_0->set_f_38(0.912287);
  v22_0->set_f_49(s->substr(0, 4));
  v22_0->set_f_18(s->substr(0, 1));
  v22_0->set_f_65(0.886464);
  v22_0->set_f_4(0.338530);
  v22_0->set_f_11(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E27_CONST_2);
  v22_0->set_f_55(0.703915);
  v22_0->add_f_50(s->substr(0, 10));
  v22_0->set_f_46(0.019707);
  v22_0->add_f_15(0xdca6b);
  v22_0->set_f_64(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E29_CONST_1);
  v22_0->set_f_10(0.956555);
  v22_0->set_f_12(0x1973);
  v22_0->set_f_19(0.763019);
  v22_0->set_f_33(true);
  v21->set_f_5(Message8::M3::M9::M15::M29::M32::M41::M48::E21_CONST_4);
  v21->set_f_4(0xf354221ca877f9);
  Message8::M3::M9::M15::M29::M32::M41::M46* v23 = v20_0->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v24 = v23->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v25 = v24->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v26 =
      v25->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v27 =
      v26->mutable_f_2();
  v27->set_f_0(0x8);
  v27->set_f_3(0x28a2db4d8);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v28 =
      v27->mutable_f_7();
  v28->set_f_0(0x1e79);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v29_0 = v28->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v30 = v29_0->mutable_f_5();
  v30->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   M60::M61::M62::E32_CONST_3);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v31 = v30->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63::M64* v32 = v31->mutable_f_3();
  v32->set_f_0(0x15eaf85c198ff);
  v29_0->set_f_0(s->substr(0, 44));
  v29_0->set_f_1(s->substr(0, 5));
  v24->set_f_0(0x2e3683d);
  Message8::M3::M9::M15::M29::M32::M41* v20_1 = v19_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v33 = v20_1->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v34 = v33->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v35 = v34->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v36 =
      v35->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v37 =
      v36->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v38 =
      v37->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v39_0 = v38->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v40 = v39_0->mutable_f_5();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v41 = v40->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63::M64* v42 = v41->mutable_f_3();
  v42->set_f_0(0x62);
  v37->set_f_1(0x1c);
  v33->set_f_0(0xee36013942ddf);
  v20_1->set_f_0(0.876080);
  Message8::M3::M9::M15::M29::M32::M41::M48* v43 = v20_1->mutable_f_3();
  v43->set_f_2(0x13);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v44_0 = v43->add_f_8();
  v44_0->set_f_57(false);
  v44_0->set_f_31(s->substr(0, 12));
  v44_0->set_f_28(s->substr(0, 6));
  v44_0->set_f_43(false);
  v44_0->set_f_66(0xcd40a18);
  v44_0->set_f_47(0.476811);
  v44_0->set_f_37(0x616afde);
  v44_0->set_f_30(0x2b94);
  v44_0->set_f_34(0xcf66256);
  v44_0->set_f_44(s->substr(0, 13));
  v44_0->set_f_32(s->substr(0, 34));
  v44_0->set_f_33(true);
  v44_0->add_f_50(s->substr(0, 2));
  Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25 array_3[9] = {
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
  };
  for (auto v : array_3) {
    v44_0->add_f_2(v);
  }
  v44_0->set_f_41(false);
  v44_0->set_f_16(0x2989fc72);
  v44_0->set_f_39(0x52a75cb94539b394);
  v44_0->set_f_27(0x2cea3c5076a335);
  v44_0->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_3);
  v44_0->set_f_26(0.177300);
  v44_0->add_f_22(0xa6972);
  v44_0->set_f_61(false);
  v44_0->set_f_59(0xa);
  v44_0->set_f_20(s->substr(0, 30));
  v44_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_2);
  v44_0->set_f_8(s->substr(0, 1));
  v44_0->set_f_62(0x40bc45dc6c0c);
  v44_0->set_f_12(0x14);
  v44_0->set_f_7(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E26_CONST_5);
  v44_0->set_f_46(0.771833);
  v43->set_f_3(Message8::M3::M9::M15::M29::M32::M41::M48::E20_CONST_4);
  v43->set_f_1(0.248301);
  Message8::M3::M9::M15::M29::M32::M38* v45_0 = v19_0->add_f_9();
  (void)v45_0;  // Suppresses clang-tidy.
  Message8::M3::M9::M15::M29::M32* v19_1 = v8_1->add_f_2();
  Message8::M3::M9::M15::M29::M32::M38* v46_0 = v19_1->add_f_9();
  (void)v46_0;  // Suppresses clang-tidy.
  v19_1->set_f_1(Message8::M3::M9::M15::M29::M32::E12_CONST_5);
  Message8::M3::M9::M15::M29::M32::M41* v47_0 = v19_1->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v48 = v47_0->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v49 = v48->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v50 = v49->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v51 =
      v50->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v52 =
      v51->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v53 =
      v52->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v54_0 = v53->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v55 = v54_0->mutable_f_5();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v56 = v55->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63::M64* v57 = v56->mutable_f_3();
  (void)v57;  // Suppresses clang-tidy.
  v54_0->set_f_0(s->substr(0, 5));
  v54_0->set_f_1(s->substr(0, 1));
  v52->set_f_1(0x77);
  v52->set_f_3(0xd34239cb6b867e);
  v52->set_f_0(0xd684215d3f76c0);
  v48->set_f_0(0x86e09);
  v47_0->set_f_0(0.798506);
  Message8::M3::M9::M15::M29::M32::M41::M48* v58 = v47_0->mutable_f_3();
  v58->set_f_1(0.152923);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v59_0 = v58->add_f_8();
  v59_0->set_f_43(true);
  int32_t array_4[241] = {
      0xb742104, 0x8fc819a, 0x1b8c4c,  0x33331c2, 0xf451229, 0xef2d7,
      0x346998,  0xf4739,   0x8faa13e, 0x960ec8b, 0x74b7b,   0x73c5252,
      0xada0d0c, 0x5f,      0x4f19a10, 0x6ad54d9, 0x415d67,  0x84bfa0c,
      0x65,      0x9362a4c, 0x38,      0xc06feb1, 0x476b28,  0xdc118,
      0x2ce9079, 0xab342e2, 0xcf7f503, 0x3558670, 0x91d8ab4, 0x529846d,
      0x1e7324a, 0x34,      0x1accbd,  0x905f9,   0x8396abe, 0xc650308,
      0x7c96b5d, 0x1fa79,   0x4583ce5, 0x1f8fa,   0x74ea9c7, 0x55,
      0xabf60ec, 0x4bf8186, 0xf0f6aab, 0x1ace41,  0x2d003ab, 0x34,
      0x80c99ee, 0x1df4f1,  0x4170406, 0x167b933, 0x5d08823, 0xd3b428c,
      0x2a44,    0x596a079, 0x798e684, 0x355d525, 0x1a35a8,  0x61cfd15,
      0x87f21be, 0x124b53,  0x553e52a, 0x265a,    0x3394824, 0x2ee3b34,
      0x91b,     0x4ac92c0, 0x2c30e54, 0x1770b4,  0xda3ac,   0x1598ac,
      0xd34e20a, 0x20,      0x51f567b, 0xa1e41d4, 0x4c6c483, 0x9b64e02,
      0xe116cbd, 0x14c412,  0xb1879f6, 0x64f0bf5, 0x676e1,   0x601d407,
      0x1fe3a4,  0xdbe9d,   0xf64f74b, 0x14169e,  0xd074188, 0x20,
      0xe5b299,  0x4ee6a90, 0x62d8a,   0x5215a,   0x148345,  0xb968b07,
      0xfbc0d6f, 0x699429,  0xbe6181f, 0x27b7369, 0x355405c, 0x294aad7,
      0x11620b,  0x35,      0x2294ea5, 0x74,      0xa7646,   0x20,
      0x79c967b, 0x3956,    0x5,       0x3a9f,    0x55f140a, 0xaa2d670,
      0x3ddb1a6, 0xbfdbc5e, 0x1b2895,  0x7e308da, 0x6ab4eea, 0xa9f9e50,
      0x97c4bef, 0x121e02,  0x126077,  0x245ca66, 0x1ea506,  0x3992,
      0x682a1,   0x5250ff0, 0x35eb3,   0x18dc883, 0xd8f,     0x57a65,
      0x77,      0xbbb8ec,  0x84760,   0x1f7e03,  0x3bb5efd, 0xd0dd34e,
      0xfe63,    0x66cbbee, 0xaca472d, 0x3810eb,  0x65,      0x5e6dc3c,
      0x1b851,   0xba293bd, 0x1d5be4,  0x97fa9a3, 0xa90d5d3, 0xe5a0f30,
      0x1568a6,  0xc1026,   0xbd87dbf, 0xf715b,   0x6a,      0x7c5bb65,
      0x362c2e0, 0xaef8,    0x11c2bb,  0x6565409, 0xb164ff7, 0x1068c4,
      0x8,       0x44991d9, 0x39,      0x8921189, 0x9b1c3b2, 0x4a,
      0x78,      0x78bce24, 0x61898dc, 0xf9e5558, 0x3e7abc8, 0x596c508,
      0x18303a,  0x409765c, 0x4bd5b,   0x51707e4, 0x48afa1,  0xc6086ed,
      0x536a878, 0xc94c050, 0x48643f7, 0x6024d64, 0x8e9f7d,  0x3f11229,
      0x9d95f,   0x4db5d53, 0xdc8efdc, 0x785c803, 0xb7e3ba7, 0x15a9526,
      0xdca91c2, 0x544245f, 0xf845eff, 0x38632,   0x46,      0xd801f31,
      0x16,      0xfd9f2bb, 0x4d77e5,  0x57,      0x99f1c02, 0x52,
      0x1e265c,  0x952a8,   0xdf9,     0xf265698, 0x1c817f,  0x91a8147,
      0x8b424b7, 0x79eb0ba, 0xb3d6ceb, 0xc26bc35, 0x56,      0xe246199,
      0xdcd87e3, 0x682562f, 0x1b4881,  0x111504,  0x387ccad, 0x154f84,
      0xab8db54, 0xf80d725, 0x33,      0x693e81d, 0xfae39b1, 0x1b46ea4,
      0x32,      0xbbe10a,  0x1e,      0x19e9,    0x3c136e8, 0x8022567,
      0xfad8672, 0x736cca7, 0xc64c618, 0xc5b517d, 0x6322a29, 0xca59761,
      0x2f7e8aa,
  };
  for (auto v : array_4) {
    v59_0->add_f_45(v);
  }
  v59_0->set_f_58(s->substr(0, 1));
  v59_0->set_f_11(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E27_CONST_2);
  v59_0->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_3);
  v59_0->set_f_5(0x635);
  v59_0->set_f_6(s->substr(0, 18));
  uint64_t array_5[9] = {
      0x1e6773214, 0x637e5aae0, 0x69,          0xec540302e78a, 0x7c675c289c01d4,
      0x7bc0e,     0x3bb35a02d, 0x14e1da3eaba, 0x32fe96563,
  };
  for (auto v : array_5) {
    v59_0->add_f_36(v);
  }
  v59_0->set_f_32(s->substr(0, 5));
  v59_0->set_f_12(0x3a);
  v59_0->set_f_8(s->substr(0, 6));
  v59_0->set_f_27(0x60);
  v59_0->set_f_25(0x27);
  v59_0->set_f_65(0.931467);
  v59_0->set_f_19(0.281230);
  v59_0->set_f_52(0x2b58446b);
  v59_0->add_f_56(0x20e8715);
  v59_0->add_f_56(0x4bbdb38);
  v59_0->set_f_49(s->substr(0, 3));
  v59_0->set_f_54(0x3b3fafe);
  v59_0->set_f_41(false);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25 array_6[16] = {
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
  };
  for (auto v : array_6) {
    v59_0->add_f_2(v);
  }
  v59_0->set_f_20(s->substr(0, 3));
  v59_0->set_f_23(0x3e929ca0393);
  v59_0->add_f_50(s->substr(0, 19));
  v59_0->add_f_50(s->substr(0, 33));
  v59_0->set_f_35(s->substr(0, 8));
  v59_0->add_f_15(0x83cdaba);
  v59_0->set_f_40(0x517a673e56ded6c6);
  v59_0->set_f_47(0.413450);
  v59_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_4);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v59_1 = v58->add_f_8();
  v59_1->set_f_68(true);
  v59_1->set_f_16(0x4a8ca374);
  v59_1->set_f_65(0.267306);
  v59_1->set_f_25(0x3a51);
  v59_1->set_f_14(0x845a536cf05f2b);
  v59_1->add_f_45(0x12948);
  v59_1->set_f_6(s->substr(0, 22));
  v59_1->set_f_4(0.409417);
  v59_1->set_f_46(0.791470);
  v59_1->set_f_13(0x23);
  v59_1->add_f_56(0x7d4f00d);
  v59_1->add_f_56(0xe231176);
  v59_1->set_f_54(0x4a);
  v59_1->set_f_27(0x5de927c71);
  v59_1->set_f_43(true);
  v59_1->set_f_29(0x19578c);
  v59_1->set_f_37(0x6c);
  v59_1->set_f_57(false);
  v59_1->set_f_28(s->substr(0, 20));
  v59_1->set_f_26(0.024418);
  v59_1->add_f_24(0x1bd9);
  v59_1->set_f_44(s->substr(0, 3));
  v59_1->set_f_19(0.265571);
  v59_1->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_4);
  v59_1->set_f_52(0x497e25ac);
  v59_1->set_f_48(false);
  v59_1->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E23_CONST_2);
  v59_1->set_f_7(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E26_CONST_3);
  v59_1->set_f_38(0.556549);
  v59_1->set_f_60(0x1ef447bb72239);
  v59_1->set_f_35(s->substr(0, 115));
  v59_1->set_f_63(0.298425);
  v59_1->set_f_40(0x3d836b0bd1c72ced);
  v58->set_f_5(Message8::M3::M9::M15::M29::M32::M41::M48::E21_CONST_4);
  Message8::M3::M9::M15::M29::M32::M41* v47_1 = v19_1->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v60 = v47_1->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v61 = v60->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v62 = v61->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v63 =
      v62->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v64 =
      v63->mutable_f_2();
  v64->set_f_2(0xf930572);
  v64->add_f_4(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   E31_CONST_2);
  v64->add_f_4(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   E31_CONST_5);
  v64->set_f_3(0x2e84);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v65 =
      v64->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v66_0 = v65->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v67 = v66_0->mutable_f_5();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v68 = v67->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63::M64* v69 = v68->mutable_f_3();
  (void)v69;  // Suppresses clang-tidy.
  v65->set_f_0(0x2f5b);
  v64->set_f_1(0x8);
  v63->set_f_0(s->substr(0, 33));
  v60->set_f_0(0x6ecaa220);
  Message8::M3::M9::M15::M29::M32::M41::M48* v70 = v47_1->mutable_f_3();
  v70->set_f_1(0.295206);
  v70->set_f_0(0x108b);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v71_0 = v70->add_f_8();
  v71_0->set_f_59(0x1ae6);
  v71_0->set_f_48(true);
  v71_0->set_f_21(0xf);
  int32_t array_7[14] = {
      0x2ff3d6c, 0x72,      0x5,     0x53c78, 0x1f95b9,  0x14, 0x6e,
      0xb,       0xd4f450b, 0x31adb, 0x4a,    0xceb81aa, 0x79, 0x4e5adc,
  };
  for (auto v : array_7) {
    v71_0->add_f_45(v);
  }
  v71_0->add_f_24(0x3920);
  v71_0->add_f_24(0xf71);
  v71_0->add_f_2(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5);
  v71_0->set_f_68(true);
  v71_0->set_f_23(0x5c823b7);
  v71_0->set_f_60(0xcf8414);
  v71_0->set_f_9(0x86ce532f03146f);
  v71_0->set_f_62(0x355e8768f3f);
  v71_0->set_f_14(0x30);
  v71_0->set_f_49(s->substr(0, 6));
  v71_0->set_f_61(true);
  v71_0->set_f_40(0x38914a77c77df056);
  v71_0->set_f_13(0x6b);
  v71_0->set_f_58(s->substr(0, 2));
  v71_0->set_f_20(s->substr(0, 9));
  v71_0->set_f_47(0.959038);
  v71_0->set_f_54(0x1bd532);
  v71_0->set_f_26(0.142409);
  v71_0->set_f_4(0.501236);
  v71_0->set_f_55(0.069831);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v71_1 = v70->add_f_8();
  v71_1->set_f_58(s->substr(0, 39));
  v71_1->set_f_42(0x1a90b5a1);
  v71_1->set_f_55(0.961198);
  v71_1->set_f_19(0.056443);
  v71_1->set_f_12(0x1d);
  v71_1->set_f_18(s->substr(0, 21));
  v71_1->set_f_9(0x46);
  v71_1->set_f_28(s->substr(0, 496));
  v71_1->set_f_38(0.318435);
  v71_1->set_f_5(0x5c);
  v71_1->set_f_53(s->substr(0, 7));
  v71_1->add_f_15(0x19ba);
  v71_1->set_f_68(true);
  v71_1->add_f_36(0x7b43fce6d9f743);
  v71_1->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E23_CONST_2);
  v71_1->set_f_64(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E29_CONST_3);
  v71_1->add_f_2(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4);
  v71_1->set_f_35(s->substr(0, 11));
  v71_1->add_f_22(0x56);
  v71_1->set_f_49(s->substr(0, 6));
  v70->set_f_4(0x37);
  Message8::M3::M9::M15::M29::M32::M40* v72 = v19_1->mutable_f_11();
  (void)v72;  // Suppresses clang-tidy.
  v19_1->set_f_6(0x31da);
  v19_1->set_f_2(s->substr(0, 20));
  v8_1->set_f_0(Message8::M3::M9::M15::M29::E10_CONST_1);
  Message8::M3::M9::M15::M26* v73 = v7->mutable_f_4();
  (void)v73;  // Suppresses clang-tidy.
  v2->add_f_1(0x714);
  Message8::M3::M10* v74 = v1_0->mutable_f_4();
  Message8::M3::M10::M11* v75 = v74->mutable_f_4();
  Message8::M3::M10::M11::M17* v76 = v75->mutable_f_2();
  Message8::M3::M10::M11::M17::E7 array_8[18] = {
      Message8::M3::M10::M11::M17::E7_CONST_5,
      Message8::M3::M10::M11::M17::E7_CONST_2,
      Message8::M3::M10::M11::M17::E7_CONST_3,
      Message8::M3::M10::M11::M17::E7_CONST_1,
      Message8::M3::M10::M11::M17::E7_CONST_1,
      Message8::M3::M10::M11::M17::E7_CONST_2,
      Message8::M3::M10::M11::M17::E7_CONST_1,
      Message8::M3::M10::M11::M17::E7_CONST_1,
      Message8::M3::M10::M11::M17::E7_CONST_2,
      Message8::M3::M10::M11::M17::E7_CONST_5,
      Message8::M3::M10::M11::M17::E7_CONST_4,
      Message8::M3::M10::M11::M17::E7_CONST_3,
      Message8::M3::M10::M11::M17::E7_CONST_5,
      Message8::M3::M10::M11::M17::E7_CONST_4,
      Message8::M3::M10::M11::M17::E7_CONST_3,
      Message8::M3::M10::M11::M17::E7_CONST_5,
      Message8::M3::M10::M11::M17::E7_CONST_1,
      Message8::M3::M10::M11::M17::E7_CONST_3,
  };
  for (auto v : array_8) {
    v76->add_f_2(v);
  }
  Message8::M3::M10::M11::M17::M33* v77 = v76->mutable_f_5();
  Message8::M3::M10::M11::M17::M33::M34* v78 = v77->mutable_f_25();
  Message8::M3::M10::M11::M17::M33::M34::M45* v79 = v78->mutable_f_4();
  Message8::M3::M10::M11::M17::M33::M34::M45::M52* v80 = v79->mutable_f_2();
  Message8::M3::M10::M11::M17::M33::M34::M45::M52::M56* v81_0 = v80->add_f_3();
  v81_0->set_f_1(0x3b7c6e2);
  Message8::M3::M10::M11::M17::M33::M34::M43* v82 = v78->mutable_f_3();
  Message8::M3::M10::M11::M17::M33::M34::M43::M50* v83_0 = v82->add_f_2();
  (void)v83_0;  // Suppresses clang-tidy.
  Message8::M3::M10::M11::M17::M33::M34::M43::M50* v83_1 = v82->add_f_2();
  v83_1->set_f_0(0x79);
  Message8::M3::M10::M11::M17::M33::M34::M42* v84 = v78->mutable_f_2();
  (void)v84;  // Suppresses clang-tidy.
  v77->set_f_14(Message8::M3::M10::M11::M17::M33::E16_CONST_2);
  v77->set_f_18(true);
  v77->set_f_6(0x7d64442d5371a6);
  v77->set_f_8(s->substr(0, 10));
  v77->set_f_3(0x10);
  Message8::M3::M10::M11::M17::M33::M39* v85 = v77->mutable_f_26();
  Message8::M3::M10::M11::M17::M33::M39::M47* v86_0 = v85->add_f_3();
  (void)v86_0;  // Suppresses clang-tidy.
  v77->add_f_11(s->substr(0, 25));
  v77->set_f_4(0x6c);
  Message8::M3::M10::M11::M17::M33::E13 array_9[12] = {
      Message8::M3::M10::M11::M17::M33::E13_CONST_1,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
      Message8::M3::M10::M11::M17::M33::E13_CONST_1,
      Message8::M3::M10::M11::M17::M33::E13_CONST_1,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
  };
  for (auto v : array_9) {
    v77->add_f_2(v);
  }
  v77->set_f_12(s->substr(0, 20));
  v75->set_f_0(0x1a);
  Message8::M2* v87 = message->mutable_f_5();
  v87->set_f_0(Message8::M2::E1_CONST_3);
  Message8::M2::M8* v88_0 = v87->add_f_2();
  v88_0->set_f_0(0x67);
  Message8::M2::M8::M12* v89_0 = v88_0->add_f_5();
  v89_0->set_f_0(0.782732);
  Message8::M2::M8::M12::M30* v90_0 = v89_0->add_f_3();
  v90_0->set_f_3(0x58);
  Message8::M2::M8::M12* v89_1 = v88_0->add_f_5();
  Message8::M2::M8::M12::M20* v91_0 = v89_1->add_f_2();
  v91_0->set_f_0(0x5c);
  Message8::M2::M8::M12::M20* v91_1 = v89_1->add_f_2();
  (void)v91_1;  // Suppresses clang-tidy.
  Message8::M2::M8::M12::M30* v92_0 = v89_1->add_f_3();
  v92_0->set_f_2(0.237732);
  v92_0->add_f_1(s->substr(0, 29));
  v92_0->set_f_4(0.625865);
  Message8::M2::M8::M12::M30* v92_1 = v89_1->add_f_3();
  v92_1->set_f_2(0.717529);
  v92_1->set_f_4(0.027445);
  int array_10[14] = {
      8, 6, 1, 8, 60, 28, 17, 14, 38, 22, 7, 47, 4, 46,
  };
  for (size_t i = 0; i < 14; ++i) {
    v92_1->add_f_1(s->substr(0, array_10[i]));
  }
  Message8::M2::M8* v88_1 = v87->add_f_2();
  v88_1->set_f_0(0xd57fbba);
  Message8::M2::M8::M12* v93_0 = v88_1->add_f_5();
  (void)v93_0;  // Suppresses clang-tidy.
  Message8::M4* v94 = message->mutable_f_7();
  Message8::M4::M5* v95 = v94->mutable_f_2();
  Message8::M4::M5::M14* v96 = v95->mutable_f_2();
  v96->set_f_2(0x593da1aba);
  Message8::M4::M5::M14::M25* v97 = v96->mutable_f_10();
  v97->set_f_0(0xc40b6a0bda0ea0);
  Message8::M4::M5::M14::M28* v98 = v96->mutable_f_11();
  (void)v98;  // Suppresses clang-tidy.
  Message8::M4::M5::M14::M19* v99_0 = v96->add_f_7();
  v99_0->set_f_0(Message8::M4::M5::M14::M19::E8_CONST_4);
  v95->set_f_0(0x69);
  Message8::M4::M5::M16* v100 = v95->mutable_f_3();
  v100->set_f_2(0x5bcfb293556c79a8);
  Message8::M4::M5::M16::M21* v101_0 = v100->add_f_10();
  v101_0->set_f_0(0x72);
  v94->set_f_0(0.559650);
}
void Message8_Set_2(Message8* message, std::string* s) {
  Message8::M2* v0 = message->mutable_f_5();
  Message8::M2::M8* v1_0 = v0->add_f_2();
  v1_0->set_f_0(0x66c01);
  Message8::M2::M8::M12* v2_0 = v1_0->add_f_5();
  Message8::M2::M8::M12::M30* v3_0 = v2_0->add_f_3();
  v3_0->set_f_3(0x31f42);
  Message8::M2::M8* v1_1 = v0->add_f_2();
  Message8::M2::M8::M12* v4_0 = v1_1->add_f_5();
  Message8::M2::M8::M12::M30* v5_0 = v4_0->add_f_3();
  v5_0->set_f_0(0x50);
  v4_0->set_f_0(0.363245);
  Message8::M4* v6 = message->mutable_f_7();
  Message8::M4::M5* v7 = v6->mutable_f_2();
  Message8::M4::M5::M16* v8 = v7->mutable_f_3();
  v8->set_f_5(0.702369);
  v8->set_f_4(0x404f326717f3a0);
  v8->set_f_2(0x8d8604cb68845a);
  v8->set_f_0(0xb9d497b);
  Message8::M4::M5::M14* v9 = v7->mutable_f_2();
  Message8::M4::M5::M14::M25* v10 = v9->mutable_f_10();
  (void)v10;  // Suppresses clang-tidy.
  Message8::M4::M5::M14::M28* v11 = v9->mutable_f_11();
  v11->add_f_0(Message8::M4::M5::M14::M28::E9_CONST_5);
  v11->add_f_0(Message8::M4::M5::M14::M28::E9_CONST_3);
  v11->add_f_0(Message8::M4::M5::M14::M28::E9_CONST_3);
  Message8::M3* v12_0 = message->add_f_6();
  Message8::M3::M9* v13 = v12_0->mutable_f_2();
  Message8::M3::M9::M15* v14 = v13->mutable_f_8();
  Message8::M3::M9::M15::M26* v15 = v14->mutable_f_4();
  (void)v15;  // Suppresses clang-tidy.
  Message8::M3::M9::M15::M29* v16_0 = v14->add_f_5();
  Message8::M3::M9::M15::M29::M32* v17_0 = v16_0->add_f_2();
  v17_0->set_f_2(s->substr(0, 11));
  Message8::M3::M9::M15::M29::M32::M41* v18_0 = v17_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v19 = v18_0->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v20 = v19->mutable_f_2();
  v20->set_f_0(0x53e0e7fdc007dd);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v21 = v20->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v22 =
      v21->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v23 =
      v22->mutable_f_2();
  v23->set_f_2(0x3590ca14);
  v23->set_f_3(0x8a2f65071c461c);
  v23->set_f_1(0x2a);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v24 =
      v23->mutable_f_7();
  v24->set_f_0(0x7cf);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v25_0 = v24->add_f_2();
  v25_0->set_f_0(s->substr(0, 12));
  v22->set_f_0(s->substr(0, 17));
  v19->set_f_0(0x3c6);
  v18_0->set_f_0(0.879063);
  Message8::M3::M9::M15::M29::M32::M41::M48* v26 = v18_0->mutable_f_3();
  v26->set_f_1(0.868791);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v27_0 = v26->add_f_8();
  v27_0->set_f_20(s->substr(0, 5));
  v27_0->set_f_60(0xcd33cf5b7dc2d9);
  v27_0->set_f_46(0.152780);
  v27_0->set_f_49(s->substr(0, 8));
  v27_0->set_f_6(s->substr(0, 16));
  v27_0->set_f_43(true);
  v27_0->set_f_10(0.870068);
  v27_0->set_f_13(0x93698fe);
  v27_0->set_f_34(0x73158c37bf0640);
  v27_0->set_f_48(false);
  v27_0->set_f_7(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E26_CONST_1);
  v27_0->set_f_55(0.479327);
  v27_0->set_f_52(0x2de1c37f);
  v27_0->set_f_65(0.549209);
  v27_0->set_f_40(0xa29b27207ee59c3);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25 array_0[15] = {
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_1,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_4,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_3,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
      Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_5,
  };
  for (auto v : array_0) {
    v27_0->add_f_2(v);
  }
  v27_0->set_f_21(0x505832b);
  v27_0->set_f_37(0x37);
  v27_0->set_f_18(s->substr(0, 8));
  v27_0->set_f_54(0xf962e60356b891);
  v27_0->set_f_67(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E30_CONST_3);
  v27_0->set_f_58(s->substr(0, 84));
  v27_0->set_f_39(0x6a20df686ccd3488);
  v27_0->add_f_50(s->substr(0, 24));
  v27_0->add_f_50(s->substr(0, 23));
  v27_0->set_f_23(0xf18529ec619131);
  v27_0->set_f_47(0.624784);
  v27_0->set_f_63(0.335579);
  v27_0->set_f_66(0x92e7cae09b9438);
  v27_0->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_3);
  v27_0->set_f_11(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E27_CONST_2);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v27_1 = v26->add_f_8();
  v27_1->set_f_54(0x15);
  v27_1->set_f_33(true);
  v27_1->set_f_59(0x66);
  v27_1->set_f_67(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E30_CONST_3);
  v27_1->set_f_32(s->substr(0, 6));
  v27_1->set_f_42(0x3703dc57247);
  v27_1->add_f_2(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2);
  v27_1->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_2);
  v27_1->set_f_35(s->substr(0, 18));
  v27_1->set_f_29(0x93529de);
  v27_1->add_f_50(s->substr(0, 17));
  v27_1->set_f_63(0.868890);
  v27_1->set_f_28(s->substr(0, 9));
  v27_1->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E23_CONST_3);
  v27_1->set_f_14(0x25);
  v27_1->set_f_39(0x2f6cfc52c8d75728);
  v27_1->set_f_37(0x3e6a);
  uint64_t array_1[8] = {
      0x1dbe04,      0x412d72971, 0x17,      0x11264d7fb53,
      0x19e098e61d1, 0x49f0045b6, 0x1db13be, 0x19a719,
  };
  for (auto v : array_1) {
    v27_1->add_f_36(v);
  }
  int32_t array_2[11] = {
      0x4c,      0xa0c127b, 0x7a0a462, 0x5cf8c46, 0x21b56,  0x1040a4,
      0x470d9f7, 0x3a6716,  0x67e4e61, 0x1edfe,   0x1448ef,
  };
  for (auto v : array_2) {
    v27_1->add_f_56(v);
  }
  v27_1->set_f_48(true);
  v27_1->set_f_68(true);
  v27_1->set_f_19(0.805328);
  v27_1->set_f_58(s->substr(0, 4));
  v27_1->set_f_52(0x2aa2d745);
  v27_1->set_f_40(0x7b07137339cf8d1d);
  v27_1->add_f_45(0x2ff4);
  v26->set_f_4(0xb257bfd);
  v26->set_f_0(0x11afd30db2ee9);
  Message8::M3::M9::M15::M24* v28 = v14->mutable_f_3();
  (void)v28;  // Suppresses clang-tidy.
  Message8::M3::M9::M13* v29 = v13->mutable_f_7();
  Message8::M3::M9::M13::M18* v30 = v29->mutable_f_5();
  Message8::M3::M9::M13::M18::M31* v31 = v30->mutable_f_2();
  Message8::M3::M9::M13::M18::M31::M35* v32 = v31->mutable_f_3();
  int array_3[15] = {
      7, 11, 11, 2, 8, 2, 2, 22, 29, 6, 22, 5, 12, 10, 16,
  };
  for (size_t i = 0; i < 15; ++i) {
    v32->add_f_2(s->substr(0, array_3[i]));
  }
  v32->set_f_1(0x3692f16197f);
  Message8::M3::M9::M13::M18::M31::M37* v33_0 = v31->add_f_5();
  Message8::M3::M9::M13::M18::M31::M37::M44* v34 = v33_0->mutable_f_2();
  (void)v34;  // Suppresses clang-tidy.
  v29->set_f_3(s->substr(0, 10));
  Message8::M3::M9::M13::M27* v35 = v29->mutable_f_8();
  (void)v35;  // Suppresses clang-tidy.
  v13->set_f_4(0x16846a);
  Message8::M3::M10* v36 = v12_0->mutable_f_4();
  Message8::M3::M10::M11* v37 = v36->mutable_f_4();
  Message8::M3::M10::M11::M17* v38 = v37->mutable_f_2();
  v38->set_f_0(s->substr(0, 32));
  v38->add_f_2(Message8::M3::M10::M11::M17::E7_CONST_3);
  Message8::M3::M10::M11::M17::M33* v39 = v38->mutable_f_5();
  v39->set_f_6(0xcdbce12313f911);
  v39->set_f_12(s->substr(0, 8));
  v39->set_f_10(s->substr(0, 25));
  v39->set_f_5(Message8::M3::M10::M11::M17::M33::E14_CONST_3);
  v39->set_f_18(false);
  v39->set_f_16(Message8::M3::M10::M11::M17::M33::E17_CONST_4);
  Message8::M3::M10::M11::M17::M33::M39* v40 = v39->mutable_f_26();
  double array_4[39] = {
      0.803237, 0.873461, 0.800173, 0.786246, 0.355924, 0.924842, 0.482593,
      0.426416, 0.413403, 0.790363, 0.706277, 0.677572, 0.049022, 0.586029,
      0.413219, 0.218783, 0.796328, 0.026382, 0.104119, 0.967250, 0.621002,
      0.185405, 0.110270, 0.606951, 0.916768, 0.375689, 0.934214, 0.840816,
      0.892262, 0.991117, 0.823812, 0.429239, 0.110100, 0.788813, 0.137387,
      0.356926, 0.724722, 0.923114, 0.179934,
  };
  for (auto v : array_4) {
    v40->add_f_0(v);
  }
  v39->set_f_9(0.057954);
  v39->set_f_7(Message8::M3::M10::M11::M17::M33::E15_CONST_2);
  Message8::M3::M10::M11::M17::M33::M34* v41 = v39->mutable_f_25();
  Message8::M3::M10::M11::M17::M33::M34::M42* v42 = v41->mutable_f_2();
  v42->set_f_0(0xd3d);
  Message8::M3::M10::M11::M17::M33::M34::M45* v43 = v41->mutable_f_4();
  Message8::M3::M10::M11::M17::M33::M34::M45::M52* v44 = v43->mutable_f_2();
  v44->set_f_0(0x4c94fdad5467a16e);
  Message8::M3::M10::M11::M17::M33::M34::M45::M52::M55* v45 =
      v44->mutable_f_2();
  v45->set_f_0(0x51);
  v38->set_f_1(s->substr(0, 2));
  v36->set_f_0(Message8::M3::M10::E3_CONST_5);
  Message8::M1* v46 = message->mutable_f_4();
  Message8::M1::M6* v47_0 = v46->add_f_2();
  v47_0->set_f_0(0.878209);
  v46->set_f_0(s->substr(0, 12));
  message->set_f_1(s->substr(0, 5));
}
void Message8_Set_3(Message8* message, std::string* s) {
  Message8::M1* v0 = message->mutable_f_4();
  Message8::M1::M6* v1_0 = v0->add_f_2();
  (void)v1_0;  // Suppresses clang-tidy.
  Message8::M1::M6* v1_1 = v0->add_f_2();
  (void)v1_1;  // Suppresses clang-tidy.
  Message8::M3* v2_0 = message->add_f_6();
  v2_0->set_f_0(0x1eabfe23a6969);
  Message8::M3::M10* v3 = v2_0->mutable_f_4();
  Message8::M3::M10::M11* v4 = v3->mutable_f_4();
  Message8::M3::M10::M11::M17* v5 = v4->mutable_f_2();
  v5->set_f_0(s->substr(0, 1));
  v5->add_f_2(Message8::M3::M10::M11::M17::E7_CONST_2);
  Message8::M3::M10::M11::M17::M33* v6 = v5->mutable_f_5();
  v6->set_f_4(0x2c);
  v6->set_f_1(s->substr(0, 3));
  v6->set_f_3(0xc2367a3f4e32cb);
  v6->set_f_6(0x7f84f4cc0f58);
  v6->set_f_7(Message8::M3::M10::M11::M17::M33::E15_CONST_4);
  v6->set_f_15(0x69);
  v6->set_f_5(Message8::M3::M10::M11::M17::M33::E14_CONST_1);
  v6->set_f_8(s->substr(0, 29));
  Message8::M3::M10::M11::M17::M33::M39* v7 = v6->mutable_f_26();
  double array_0[39] = {
      0.041032, 0.791234, 0.747018, 0.150980, 0.076516, 0.394155, 0.126666,
      0.800156, 0.314335, 0.304347, 0.311615, 0.345546, 0.788862, 0.651037,
      0.330752, 0.990226, 0.547021, 0.010878, 0.477877, 0.267741, 0.568574,
      0.955368, 0.408648, 0.072595, 0.012136, 0.094782, 0.588705, 0.815503,
      0.418036, 0.675466, 0.600849, 0.883730, 0.665256, 0.221852, 0.428689,
      0.487834, 0.959614, 0.475046, 0.345884,
  };
  for (auto v : array_0) {
    v7->add_f_0(v);
  }
  v6->set_f_17(0x11);
  v6->set_f_0(0.225529);
  v6->set_f_13(s->substr(0, 10));
  v6->add_f_2(Message8::M3::M10::M11::M17::M33::E13_CONST_3);
  Message8::M3::M10::M11::M17::M33::M34* v8 = v6->mutable_f_25();
  Message8::M3::M10::M11::M17::M33::M34::M45* v9 = v8->mutable_f_4();
  v9->set_f_0(true);
  Message8::M3::M10::M11::M17::M33::M34::M45::M52* v10 = v9->mutable_f_2();
  (void)v10;  // Suppresses clang-tidy.
  Message8::M3::M10::M11::M17::M33::M34::M43* v11 = v8->mutable_f_3();
  Message8::M3::M10::M11::M17::M33::M34::M43::M50* v12_0 = v11->add_f_2();
  (void)v12_0;  // Suppresses clang-tidy.
  v4->set_f_0(0xe9dfd291cb99);
  Message8::M3::M9* v13 = v2_0->mutable_f_2();
  v13->set_f_4(0x43);
  Message8::M3::M9::M15* v14 = v13->mutable_f_8();
  Message8::M3::M9::M15::M24* v15 = v14->mutable_f_3();
  v15->set_f_1(s->substr(0, 62));
  v15->set_f_0(0x751e82bc);
  Message8::M3::M9::M15::M29* v16_0 = v14->add_f_5();
  Message8::M3::M9::M15::M29::M32* v17_0 = v16_0->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41* v18_0 = v17_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M48* v19 = v18_0->mutable_f_3();
  v19->set_f_5(Message8::M3::M9::M15::M29::M32::M41::M48::E21_CONST_4);
  v19->set_f_3(Message8::M3::M9::M15::M29::M32::M41::M48::E20_CONST_3);
  v19->set_f_2(0x7d);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v20_0 = v19->add_f_8();
  uint32_t array_1[12] = {
      0x15e1, 0x379f, 0x13d1, 0x27,   0x3cadb, 0xfa5069a,
      0x41,   0xe307, 0x15,   0x1c7f, 0x37,    0x9e4,
  };
  for (auto v : array_1) {
    v20_0->add_f_24(v);
  }
  v20_0->set_f_68(true);
  v20_0->set_f_27(0x63048483e842d9);
  v20_0->set_f_4(0.419388);
  v20_0->set_f_38(0.512250);
  v20_0->add_f_2(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E25_CONST_2);
  v20_0->set_f_42(0x1240b886231d2);
  v20_0->set_f_63(0.839364);
  v20_0->set_f_61(false);
  v20_0->set_f_65(0.057329);
  v20_0->set_f_28(s->substr(0, 19));
  v20_0->set_f_29(0x37819173b);
  v20_0->add_f_22(0x8c8bb);
  v20_0->set_f_13(0x52);
  v20_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_5);
  v20_0->set_f_40(0x79dca4f471d0e5db);
  v20_0->add_f_36(0x3221cbf45ba0f5);
  v20_0->set_f_33(true);
  v20_0->set_f_8(s->substr(0, 7));
  v20_0->set_f_9(0xbb2d689);
  v20_0->set_f_19(0.855796);
  v20_0->set_f_43(true);
  v20_0->set_f_21(0xa);
  v20_0->set_f_12(0x2a);
  v20_0->set_f_35(s->substr(0, 59));
  v20_0->set_f_26(0.584320);
  v19->set_f_1(0.359453);
  Message8::M3::M9::M15::M29::M32::M41::M46* v21 = v18_0->mutable_f_2();
  v21->set_f_0(0x61);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v22 = v21->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v23 = v22->mutable_f_2();
  v23->set_f_0(0xc);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v24 =
      v23->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v25 =
      v24->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v26 =
      v25->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v27_0 = v26->add_f_2();
  v27_0->set_f_0(s->substr(0, 2));
  v27_0->set_f_1(s->substr(0, 6));
  v25->set_f_2(0x10df9513);
  Message8::M3::M9::M15::M29::M32::M41* v18_1 = v17_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M48* v28 = v18_1->mutable_f_3();
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v29_0 = v28->add_f_8();
  v29_0->set_f_11(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E27_CONST_4);
  v29_0->set_f_63(0.391256);
  v29_0->set_f_27(0x20a700c89ead1a);
  v29_0->set_f_21(0x75);
  v29_0->set_f_57(true);
  v29_0->set_f_1(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E24_CONST_4);
  v29_0->set_f_32(s->substr(0, 14));
  v29_0->set_f_41(false);
  v29_0->add_f_36(0x1c31b3752d8087);
  v29_0->add_f_36(0x28586548f78);
  v29_0->set_f_12(0x79);
  v29_0->set_f_52(0x161397a);
  v29_0->set_f_20(s->substr(0, 96));
  v29_0->set_f_35(s->substr(0, 3769));
  v29_0->add_f_51(0xf7e52c5);
  v29_0->add_f_51(0x1cd015);
  v29_0->add_f_51(0x9ecf3);
  v29_0->set_f_18(s->substr(0, 58));
  v29_0->set_f_26(0.910465);
  v29_0->add_f_15(0x1bf7f0);
  v29_0->add_f_15(0x1ea55c);
  v29_0->set_f_67(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E30_CONST_1);
  v29_0->add_f_56(0x1fd87eb);
  v28->set_f_1(0.372605);
  v28->set_f_3(Message8::M3::M9::M15::M29::M32::M41::M48::E20_CONST_5);
  Message8::M3::M9::M15::M29::M32::M41::M46* v30 = v18_1->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v31 = v30->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v32 = v31->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v33 =
      v32->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v34 =
      v33->mutable_f_2();
  v34->add_f_4(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   E31_CONST_1);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v35 =
      v34->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v36_0 = v35->add_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v37 = v36_0->mutable_f_5();
  v37->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   M60::M61::M62::E32_CONST_1);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v38 = v37->mutable_f_2();
  int32_t array_2[7] = {
      0xf58ba, 0x1ee71d, 0x1d5320, 0xd0e3f75, 0x782f4, 0x9d68a78, 0x181c2e,
  };
  for (auto v : array_2) {
    v38->add_f_0(v);
  }
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v36_1 = v35->add_f_2();
  v36_1->set_f_0(s->substr(0, 2));
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62*
      v39 = v36_1->mutable_f_5();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61::M62::
      M63* v40 = v39->mutable_f_2();
  (void)v40;  // Suppresses clang-tidy.
  v39->set_f_0(Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
                   M60::M61::M62::E32_CONST_5);
  v33->set_f_0(s->substr(0, 4));
  v32->set_f_0(0x79);
  Message8::M3::M9::M15::M29::M32::M38* v41_0 = v17_0->add_f_9();
  v41_0->set_f_0(0x75eb95);
  v17_0->set_f_2(s->substr(0, 6));
  v13->set_f_0(0x3e);
  Message8::M3::M9::M13* v42 = v13->mutable_f_7();
  Message8::M3::M9::M13::M27* v43 = v42->mutable_f_8();
  (void)v43;  // Suppresses clang-tidy.
  Message8::M3::M9::M13::M23* v44 = v42->mutable_f_6();
  (void)v44;  // Suppresses clang-tidy.
  v42->set_f_2(s->substr(0, 27));
  Message8::M3::M9::M13::M18* v45 = v42->mutable_f_5();
  Message8::M3::M9::M13::M18::M31* v46 = v45->mutable_f_2();
  Message8::M3::M9::M13::M18::M31::M36* v47 = v46->mutable_f_4();
  v47->set_f_0(s->substr(0, 7));
  Message8::M3::M9::M13::M18::M31::M35* v48 = v46->mutable_f_3();
  v48->set_f_0(0xfbd3477);
  v48->set_f_4(0.438880);
  v48->set_f_7(true);
  v48->add_f_2(s->substr(0, 20));
  Message8::M3::M9::M13::M18::M31::M37* v49_0 = v46->add_f_5();
  v49_0->set_f_0(s->substr(0, 2));
  Message8::M3::M9::M13::M18::M31::M37::M44* v50 = v49_0->mutable_f_2();
  v50->set_f_0(Message8::M3::M9::M13::M18::M31::M37::M44::E19_CONST_5);
  Message8::M3::M9::M13::M18::M31::M37* v49_1 = v46->add_f_5();
  v49_1->set_f_0(s->substr(0, 2));
  v42->set_f_3(s->substr(0, 7));
  Message8::M2* v51 = message->mutable_f_5();
  Message8::M2::M8* v52_0 = v51->add_f_2();
  v52_0->set_f_0(0x7a0fb3bd6);
  Message8::M2::M8::M12* v53_0 = v52_0->add_f_5();
  Message8::M2::M8::M12::M30* v54_0 = v53_0->add_f_3();
  v54_0->set_f_4(0.072845);
  v54_0->set_f_3(0x6867e425c);
  v54_0->add_f_1(s->substr(0, 10));
  v53_0->set_f_0(0.726395);
  Message8::M4* v55 = message->mutable_f_7();
  Message8::M4::M5* v56 = v55->mutable_f_2();
  Message8::M4::M5::M14* v57 = v56->mutable_f_2();
  v57->set_f_1(0x9);
  Message8::M4::M5::M14::M28* v58 = v57->mutable_f_11();
  v58->add_f_0(Message8::M4::M5::M14::M28::E9_CONST_4);
  v57->set_f_2(0x3907f4c97b269c);
  v56->set_f_0(0xb125144b006e);
  Message8::M4::M5::M16* v59 = v56->mutable_f_3();
  v59->set_f_2(0x6b280e46e1bda960);
  v59->set_f_5(0.836202);
  v59->set_f_4(0x7d372784f);
}
void Message8_Set_4(Message8* message, std::string* s) {
  Message8::M1* v0 = message->mutable_f_4();
  Message8::M1::M6* v1_0 = v0->add_f_2();
  v1_0->set_f_0(0.546840);
  Message8::M3* v2_0 = message->add_f_6();
  Message8::M3::M10* v3 = v2_0->mutable_f_4();
  Message8::M3::M10::M11* v4 = v3->mutable_f_4();
  Message8::M3::M10::M11::M17* v5 = v4->mutable_f_2();
  v5->set_f_0(s->substr(0, 1));
  Message8::M3::M10::M11::M17::M33* v6 = v5->mutable_f_5();
  Message8::M3::M10::M11::M17::M33::E13 array_0[22] = {
      Message8::M3::M10::M11::M17::M33::E13_CONST_1,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_3,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_4,
      Message8::M3::M10::M11::M17::M33::E13_CONST_3,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_1,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
      Message8::M3::M10::M11::M17::M33::E13_CONST_3,
      Message8::M3::M10::M11::M17::M33::E13_CONST_2,
      Message8::M3::M10::M11::M17::M33::E13_CONST_5,
  };
  for (auto v : array_0) {
    v6->add_f_2(v);
  }
  v6->set_f_12(s->substr(0, 6));
  v6->set_f_13(s->substr(0, 4));
  Message8::M3::M10::M11::M17::M33::M34* v7 = v6->mutable_f_25();
  Message8::M3::M10::M11::M17::M33::M34::M43* v8 = v7->mutable_f_3();
  (void)v8;  // Suppresses clang-tidy.
  v7->set_f_0(0x5c92cc4679090a);
  Message8::M3::M10::M11::M17::M33::M34::M45* v9 = v7->mutable_f_4();
  Message8::M3::M10::M11::M17::M33::M34::M45::M52* v10 = v9->mutable_f_2();
  Message8::M3::M10::M11::M17::M33::M34::M45::M52::M56* v11_0 = v10->add_f_3();
  v11_0->set_f_1(0x1);
  v9->set_f_0(false);
  Message8::M3::M10::M11::M17::M33::M34::M42* v12 = v7->mutable_f_2();
  (void)v12;  // Suppresses clang-tidy.
  v6->set_f_7(Message8::M3::M10::M11::M17::M33::E15_CONST_3);
  v6->set_f_6(0x1d44920bc27);
  v5->set_f_1(s->substr(0, 20));
  v3->set_f_0(Message8::M3::M10::E3_CONST_3);
  v3->set_f_1(s->substr(0, 20));
  Message8::M3::M9* v13 = v2_0->mutable_f_2();
  Message8::M3::M9::M15* v14 = v13->mutable_f_8();
  Message8::M3::M9::M15::M29* v15_0 = v14->add_f_5();
  Message8::M3::M9::M15::M29::M32* v16_0 = v15_0->add_f_2();
  v16_0->set_f_0(Message8::M3::M9::M15::M29::M32::E11_CONST_4);
  v16_0->set_f_5(s->substr(0, 160));
  Message8::M3::M9::M15::M29::M32::M40* v17 = v16_0->mutable_f_11();
  (void)v17;  // Suppresses clang-tidy.
  Message8::M3::M9::M15::M29::M32::M41* v18_0 = v16_0->add_f_12();
  Message8::M3::M9::M15::M29::M32::M41::M46* v19 = v18_0->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49* v20 = v19->mutable_f_2();
  v20->set_f_0(0x12d0e00c965aa);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54* v21 = v20->mutable_f_2();
  v21->set_f_0(0x10291df);
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58* v22 =
      v21->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59* v23 =
      v22->mutable_f_2();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60* v24 =
      v23->mutable_f_7();
  Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::M60::M61*
      v25_0 = v24->add_f_2();
  (void)v25_0;  // Suppresses clang-tidy.
  v24->set_f_0(0xb2919);
  v23->set_f_2(0x2ff82452);
  v23->set_f_1(0x18c1e7);
  v18_0->set_f_0(0.425492);
  Message8::M3::M9::M15::M29::M32::M41::M48* v26 = v18_0->mutable_f_3();
  v26->set_f_2(0x6c);
  Message8::M3::M9::M15::M29::M32::M41::M48::M53* v27_0 = v26->add_f_8();
  v27_0->set_f_42(0x46);
  v27_0->set_f_25(0x954a6e74b111a9);
  v27_0->set_f_59(0x10);
  v27_0->set_f_52(0x56476d49);
  v27_0->set_f_33(false);
  v27_0->set_f_39(0x402f697d5db79ae9);
  v27_0->set_f_37(0x1bd54b);
  v27_0->set_f_41(true);
  v27_0->set_f_53(s->substr(0, 12));
  v27_0->set_f_27(0x611e306);
  v27_0->set_f_17(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E28_CONST_3);
  v27_0->set_f_35(s->substr(0, 35));
  v27_0->set_f_62(0x146c8fccac87ee);
  v27_0->set_f_64(Message8::M3::M9::M15::M29::M32::M41::M48::M53::E29_CONST_1);
  v27_0->set_f_48(true);
  v27_0->set_f_65(0.882686);
  v27_0->set_f_63(0.536319);
  v27_0->set_f_30(0x6b);
  v27_0->set_f_18(s->substr(0, 2));
  v27_0->add_f_15(0x503c968);
  v27_0->set_f_9(0x3155e0232);
  v27_0->set_f_31(s->substr(0, 32));
  v27_0->set_f_10(0.785430);
  v27_0->set_f_47(0.236391);
  v27_0->set_f_57(true);
  v27_0->set_f_19(0.539423);
  v27_0->set_f_28(s->substr(0, 11));
  v26->set_f_1(0.634740);
  v15_0->set_f_0(Message8::M3::M9::M15::M29::E10_CONST_4);
  v13->add_f_1(0x4);
  Message8::M3::M9::M13* v28 = v13->mutable_f_7();
  Message8::M3::M9::M13::M18* v29 = v28->mutable_f_5();
  v29->set_f_0(0x9a8373b);
  Message8::M3::M9::M13::M18::M31* v30 = v29->mutable_f_2();
  Message8::M3::M9::M13::M18::M31::M35* v31 = v30->mutable_f_3();
  v31->set_f_6(0x229c);
  v31->set_f_5(0x7e);
  v31->set_f_7(false);
  v31->set_f_1(0x3086b374dee);
  v31->add_f_2(s->substr(0, 14));
  Message8::M3::M9::M13::M18::M31::M37* v32_0 = v30->add_f_5();
  (void)v32_0;  // Suppresses clang-tidy.
  v28->set_f_2(s->substr(0, 2));
  Message8::M3::M9::M13::M23* v33 = v28->mutable_f_6();
  (void)v33;  // Suppresses clang-tidy.
  v13->set_f_2(Message8::M3::M9::E2_CONST_5);
  Message8::M4* v34 = message->mutable_f_7();
  Message8::M4::M5* v35 = v34->mutable_f_2();
  v35->set_f_0(0x34b6d51);
  Message8::M4::M5::M14* v36 = v35->mutable_f_2();
  Message8::M4::M5::M14::M25* v37 = v36->mutable_f_10();
  (void)v37;  // Suppresses clang-tidy.
  Message8::M4::M5::M14::M19* v38_0 = v36->add_f_7();
  v38_0->set_f_0(Message8::M4::M5::M14::M19::E8_CONST_1);
  Message8::M4::M5::M14::M19* v38_1 = v36->add_f_7();
  (void)v38_1;  // Suppresses clang-tidy.
  Message8::M4::M5::M16* v39 = v35->mutable_f_3();
  v39->set_f_2(0x52dd4e8d7a4b9cd3);
  v39->set_f_3(0x14);
}
void Message8_Get_1(Message8* message) {
  Receive((*message).f_1());
  for (const auto& v0 : (*message).f_6()) {
    Receive(v0.f_0());
    const Message8::M3::M9& v1 = v0.f_2();
    const Message8::M3::M9::M13& v2 = v1.f_7();
    const Message8::M3::M9::M13::M23& v3 = v2.f_6();
    Receive(v3.f_0());
    const Message8::M3::M9::M13::M27& v4 = v2.f_8();
    Receive(v4.f_0());
    const Message8::M3::M9::M13::M18& v5 = v2.f_5();
    Receive(v5.f_0());
    const Message8::M3::M9::M13::M18::M31& v6 = v5.f_2();
    const Message8::M3::M9::M13::M18::M31::M35& v7 = v6.f_3();
    Receive(v7.f_7());
    Receive(v7.f_1());
    Receive(v7.f_0());
    Receive(v7.f_3());
    Receive(v7.f_6());
    for (int i = 0; i < v7.f_2_size(); ++i) {
      Receive(v7.f_2(i));
    }
    Receive(v7.f_4());
    Receive(v7.f_5());
    const Message8::M3::M9::M13::M18::M31::M36& v8 = v6.f_4();
    Receive(v8.f_0());
    for (const auto& v9 : v6.f_5()) {
      const Message8::M3::M9::M13::M18::M31::M37::M44& v10 = v9.f_2();
      Receive(v10.f_0());
      Receive(v9.f_0());
    }
    Receive(v6.f_0());
    Receive(v2.f_1());
    Receive(v2.f_0());
    Receive(v2.f_2());
    Receive(v2.f_3());
    const Message8::M3::M9::M15& v11 = v1.f_8();
    Receive(v11.f_0());
    Receive(v11.f_1());
    for (const auto& v12 : v11.f_5()) {
      Receive(v12.f_0());
      for (const auto& v13 : v12.f_2()) {
        Receive(v13.f_4());
        const Message8::M3::M9::M15::M29::M32::M40& v14 = v13.f_11();
        Receive(v14.f_0());
        Receive(v13.f_5());
        Receive(v13.f_6());
        Receive(v13.f_0());
        Receive(v13.f_2());
        for (const auto& v15 : v13.f_12()) {
          const Message8::M3::M9::M15::M29::M32::M41::M46& v16 = v15.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49& v17 = v16.f_2();
          Receive(v17.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54& v18 =
              v17.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58& v19 =
              v18.f_2();
          Receive(v19.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59&
              v20 = v19.f_2();
          Receive(v20.f_0());
          Receive(v20.f_3());
          for (int i = 0; i < v20.f_4_size(); ++i) {
            Receive(v20.f_4(i));
          }
          Receive(v20.f_1());
          Receive(v20.f_2());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
              M60& v21 = v20.f_7();
          Receive(v21.f_0());
          for (const auto& v22 : v21.f_2()) {
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62& v23 = v22.f_5();
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63& v24 = v23.f_2();
            for (int i = 0; i < v24.f_0_size(); ++i) {
              Receive(v24.f_0(i));
            }
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63::M64& v25 = v24.f_3();
            Receive(v25.f_1());
            Receive(v25.f_0());
            Receive(v23.f_0());
            Receive(v22.f_0());
            Receive(v22.f_1());
          }
          Receive(v18.f_0());
          Receive(v16.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M48& v26 = v15.f_3();
          Receive(v26.f_3());
          for (const auto& v27 : v26.f_8()) {
            Receive(v27.f_53());
            Receive(v27.f_11());
            Receive(v27.f_35());
            Receive(v27.f_38());
            Receive(v27.f_20());
            Receive(v27.f_12());
            Receive(v27.f_48());
            Receive(v27.f_42());
            Receive(v27.f_49());
            for (int i = 0; i < v27.f_2_size(); ++i) {
              Receive(v27.f_2(i));
            }
            Receive(v27.f_8());
            Receive(v27.f_9());
            Receive(v27.f_17());
            Receive(v27.f_55());
            Receive(v27.f_5());
            for (int i = 0; i < v27.f_56_size(); ++i) {
              Receive(v27.f_56(i));
            }
            Receive(v27.f_19());
            Receive(v27.f_66());
            Receive(v27.f_33());
            for (int i = 0; i < v27.f_50_size(); ++i) {
              Receive(v27.f_50(i));
            }
            Receive(v27.f_32());
            Receive(v27.f_58());
            for (int i = 0; i < v27.f_24_size(); ++i) {
              Receive(v27.f_24(i));
            }
            Receive(v27.f_43());
            Receive(v27.f_62());
            Receive(v27.f_54());
            for (int i = 0; i < v27.f_15_size(); ++i) {
              Receive(v27.f_15(i));
            }
            Receive(v27.f_0());
            Receive(v27.f_64());
            Receive(v27.f_14());
            Receive(v27.f_1());
            Receive(v27.f_27());
            Receive(v27.f_13());
            Receive(v27.f_26());
            Receive(v27.f_46());
            Receive(v27.f_67());
            Receive(v27.f_29());
            for (int i = 0; i < v27.f_45_size(); ++i) {
              Receive(v27.f_45(i));
            }
            Receive(v27.f_18());
            Receive(v27.f_28());
            Receive(v27.f_6());
            Receive(v27.f_34());
            Receive(v27.f_4());
            Receive(v27.f_30());
            for (int i = 0; i < v27.f_22_size(); ++i) {
              Receive(v27.f_22(i));
            }
            Receive(v27.f_52());
            Receive(v27.f_65());
            Receive(v27.f_59());
            Receive(v27.f_60());
            Receive(v27.f_57());
            Receive(v27.f_47());
            Receive(v27.f_21());
            Receive(v27.f_10());
            Receive(v27.f_25());
            Receive(v27.f_23());
            Receive(v27.f_68());
            Receive(v27.f_61());
            Receive(v27.f_39());
            Receive(v27.f_40());
            Receive(v27.f_7());
            Receive(v27.f_31());
            Receive(v27.f_16());
            Receive(v27.f_63());
            for (int i = 0; i < v27.f_51_size(); ++i) {
              Receive(v27.f_51(i));
            }
            Receive(v27.f_44());
            for (int i = 0; i < v27.f_36_size(); ++i) {
              Receive(v27.f_36(i));
            }
            Receive(v27.f_37());
            Receive(v27.f_3());
            Receive(v27.f_41());
          }
          Receive(v26.f_0());
          Receive(v26.f_4());
          Receive(v26.f_2());
          Receive(v26.f_5());
          Receive(v26.f_1());
          Receive(v15.f_0());
        }
        Receive(v13.f_1());
        for (const auto& v28 : v13.f_9()) {
          Receive(v28.f_0());
        }
        Receive(v13.f_3());
      }
    }
    const Message8::M3::M9::M15::M26& v29 = v11.f_4();
    Receive(v29.f_0());
    const Message8::M3::M9::M15::M24& v30 = v11.f_3();
    Receive(v30.f_1());
    Receive(v30.f_0());
    Receive(v1.f_0());
    for (int i = 0; i < v1.f_3_size(); ++i) {
      Receive(v1.f_3(i));
    }
    for (int i = 0; i < v1.f_1_size(); ++i) {
      Receive(v1.f_1(i));
    }
    Receive(v1.f_2());
    Receive(v1.f_4());
    const Message8::M3::M10& v31 = v0.f_4();
    Receive(v31.f_0());
    Receive(v31.f_1());
    const Message8::M3::M10::M11& v32 = v31.f_4();
    Receive(v32.f_0());
    const Message8::M3::M10::M11::M17& v33 = v32.f_2();
    Receive(v33.f_0());
    for (int i = 0; i < v33.f_2_size(); ++i) {
      Receive(v33.f_2(i));
    }
    const Message8::M3::M10::M11::M17::M33& v34 = v33.f_5();
    const Message8::M3::M10::M11::M17::M33::M34& v35 = v34.f_25();
    const Message8::M3::M10::M11::M17::M33::M34::M42& v36 = v35.f_2();
    Receive(v36.f_0());
    for (const auto& v37 : v36.f_4()) {
      for (int i = 0; i < v37.f_0_size(); ++i) {
        Receive(v37.f_0(i));
      }
    }
    const Message8::M3::M10::M11::M17::M33::M34::M43& v38 = v35.f_3();
    Receive(v38.f_0());
    for (const auto& v39 : v38.f_2()) {
      Receive(v39.f_0());
    }
    const Message8::M3::M10::M11::M17::M33::M34::M45& v40 = v35.f_4();
    Receive(v40.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52& v41 = v40.f_2();
    Receive(v41.f_0());
    for (const auto& v42 : v41.f_3()) {
      Receive(v42.f_1());
      Receive(v42.f_0());
      for (const auto& v43 : v42.f_3()) {
        Receive(v43.f_0());
      }
    }
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52::M55& v44 = v41.f_2();
    Receive(v44.f_0());
    Receive(v35.f_0());
    Receive(v34.f_13());
    Receive(v34.f_15());
    Receive(v34.f_1());
    Receive(v34.f_10());
    Receive(v34.f_12());
    Receive(v34.f_0());
    Receive(v34.f_8());
    Receive(v34.f_14());
    Receive(v34.f_7());
    for (int i = 0; i < v34.f_2_size(); ++i) {
      Receive(v34.f_2(i));
    }
    Receive(v34.f_4());
    const Message8::M3::M10::M11::M17::M33::M39& v45 = v34.f_26();
    for (int i = 0; i < v45.f_0_size(); ++i) {
      Receive(v45.f_0(i));
    }
    for (const auto& v46 : v45.f_3()) {
      Receive(v46.f_0());
    }
    Receive(v34.f_9());
    Receive(v34.f_5());
    Receive(v34.f_17());
    Receive(v34.f_16());
    Receive(v34.f_3());
    Receive(v34.f_6());
    for (int i = 0; i < v34.f_11_size(); ++i) {
      Receive(v34.f_11(i));
    }
    Receive(v34.f_18());
    Receive(v33.f_1());
  }
  const Message8::M4& v47 = (*message).f_7();
  const Message8::M4::M5& v48 = v47.f_2();
  const Message8::M4::M5::M16& v49 = v48.f_3();
  Receive(v49.f_3());
  Receive(v49.f_4());
  for (const auto& v50 : v49.f_10()) {
    Receive(v50.f_0());
  }
  Receive(v49.f_2());
  Receive(v49.f_0());
  Receive(v49.f_5());
  Receive(v49.f_1());
  Receive(v48.f_0());
  const Message8::M4::M5::M14& v51 = v48.f_2();
  Receive(v51.f_2());
  const Message8::M4::M5::M14::M25& v52 = v51.f_10();
  Receive(v52.f_0());
  Receive(v51.f_0());
  for (const auto& v53 : v51.f_7()) {
    Receive(v53.f_0());
  }
  const Message8::M4::M5::M14::M22& v54 = v51.f_9();
  Receive(v54.f_0());
  Receive(v51.f_1());
  const Message8::M4::M5::M14::M28& v55 = v51.f_11();
  for (int i = 0; i < v55.f_0_size(); ++i) {
    Receive(v55.f_0(i));
  }
  Receive(v47.f_0());
  const Message8::M1& v56 = (*message).f_4();
  for (const auto& v57 : v56.f_2()) {
    Receive(v57.f_0());
  }
  for (const auto& v58 : v56.f_4()) {
    Receive(v58.f_0());
  }
  Receive(v56.f_0());
  Receive((*message).f_0());
  const Message8::M2& v59 = (*message).f_5();
  for (const auto& v60 : v59.f_2()) {
    Receive(v60.f_0());
    for (const auto& v61 : v60.f_5()) {
      Receive(v61.f_0());
      for (const auto& v62 : v61.f_2()) {
        Receive(v62.f_0());
      }
      for (const auto& v63 : v61.f_3()) {
        Receive(v63.f_3());
        Receive(v63.f_0());
        for (int i = 0; i < v63.f_1_size(); ++i) {
          Receive(v63.f_1(i));
        }
        Receive(v63.f_2());
        Receive(v63.f_4());
      }
    }
  }
  Receive(v59.f_0());
}
void Message8_Get_2(Message8* message) {
  const Message8::M2& v0 = (*message).f_5();
  Receive(v0.f_0());
  for (const auto& v1 : v0.f_2()) {
    Receive(v1.f_0());
    for (const auto& v2 : v1.f_5()) {
      for (const auto& v3 : v2.f_3()) {
        Receive(v3.f_3());
        Receive(v3.f_4());
        Receive(v3.f_0());
        for (int i = 0; i < v3.f_1_size(); ++i) {
          Receive(v3.f_1(i));
        }
        Receive(v3.f_2());
      }
      Receive(v2.f_0());
      for (const auto& v4 : v2.f_2()) {
        Receive(v4.f_0());
      }
    }
  }
  const Message8::M1& v5 = (*message).f_4();
  for (const auto& v6 : v5.f_4()) {
    Receive(v6.f_0());
  }
  Receive(v5.f_0());
  for (const auto& v7 : v5.f_2()) {
    Receive(v7.f_0());
  }
  Receive((*message).f_1());
  Receive((*message).f_0());
  for (const auto& v8 : (*message).f_6()) {
    const Message8::M3::M9& v9 = v8.f_2();
    for (int i = 0; i < v9.f_3_size(); ++i) {
      Receive(v9.f_3(i));
    }
    Receive(v9.f_2());
    Receive(v9.f_4());
    Receive(v9.f_0());
    const Message8::M3::M9::M15& v10 = v9.f_8();
    Receive(v10.f_1());
    for (const auto& v11 : v10.f_5()) {
      for (const auto& v12 : v11.f_2()) {
        Receive(v12.f_6());
        Receive(v12.f_3());
        for (const auto& v13 : v12.f_12()) {
          const Message8::M3::M9::M15::M29::M32::M41::M48& v14 = v13.f_3();
          Receive(v14.f_1());
          for (const auto& v15 : v14.f_8()) {
            Receive(v15.f_43());
            Receive(v15.f_14());
            Receive(v15.f_20());
            Receive(v15.f_23());
            Receive(v15.f_46());
            for (int i = 0; i < v15.f_36_size(); ++i) {
              Receive(v15.f_36(i));
            }
            Receive(v15.f_54());
            Receive(v15.f_60());
            Receive(v15.f_52());
            Receive(v15.f_44());
            Receive(v15.f_8());
            Receive(v15.f_1());
            for (int i = 0; i < v15.f_22_size(); ++i) {
              Receive(v15.f_22(i));
            }
            Receive(v15.f_18());
            Receive(v15.f_31());
            Receive(v15.f_35());
            Receive(v15.f_12());
            Receive(v15.f_0());
            Receive(v15.f_30());
            Receive(v15.f_9());
            Receive(v15.f_27());
            Receive(v15.f_40());
            Receive(v15.f_19());
            Receive(v15.f_6());
            Receive(v15.f_47());
            Receive(v15.f_59());
            Receive(v15.f_13());
            Receive(v15.f_62());
            Receive(v15.f_26());
            Receive(v15.f_4());
            Receive(v15.f_17());
            for (int i = 0; i < v15.f_15_size(); ++i) {
              Receive(v15.f_15(i));
            }
            Receive(v15.f_3());
            Receive(v15.f_32());
            Receive(v15.f_11());
            Receive(v15.f_63());
            Receive(v15.f_61());
            Receive(v15.f_7());
            for (int i = 0; i < v15.f_50_size(); ++i) {
              Receive(v15.f_50(i));
            }
            for (int i = 0; i < v15.f_45_size(); ++i) {
              Receive(v15.f_45(i));
            }
            Receive(v15.f_64());
            Receive(v15.f_21());
            for (int i = 0; i < v15.f_2_size(); ++i) {
              Receive(v15.f_2(i));
            }
            Receive(v15.f_65());
            Receive(v15.f_67());
            Receive(v15.f_55());
            Receive(v15.f_34());
            Receive(v15.f_25());
            Receive(v15.f_16());
            Receive(v15.f_41());
            Receive(v15.f_53());
            for (int i = 0; i < v15.f_51_size(); ++i) {
              Receive(v15.f_51(i));
            }
            Receive(v15.f_33());
            Receive(v15.f_10());
            Receive(v15.f_58());
            Receive(v15.f_48());
            Receive(v15.f_38());
            Receive(v15.f_37());
            Receive(v15.f_29());
            for (int i = 0; i < v15.f_24_size(); ++i) {
              Receive(v15.f_24(i));
            }
            Receive(v15.f_42());
            for (int i = 0; i < v15.f_56_size(); ++i) {
              Receive(v15.f_56(i));
            }
            Receive(v15.f_66());
            Receive(v15.f_57());
            Receive(v15.f_5());
            Receive(v15.f_28());
            Receive(v15.f_68());
            Receive(v15.f_39());
            Receive(v15.f_49());
          }
          Receive(v14.f_2());
          Receive(v14.f_0());
          Receive(v14.f_3());
          Receive(v14.f_4());
          Receive(v14.f_5());
          const Message8::M3::M9::M15::M29::M32::M41::M46& v16 = v13.f_2();
          Receive(v16.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49& v17 = v16.f_2();
          Receive(v17.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54& v18 =
              v17.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58& v19 =
              v18.f_2();
          Receive(v19.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59&
              v20 = v19.f_2();
          for (int i = 0; i < v20.f_4_size(); ++i) {
            Receive(v20.f_4(i));
          }
          Receive(v20.f_1());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
              M60& v21 = v20.f_7();
          Receive(v21.f_0());
          for (const auto& v22 : v21.f_2()) {
            Receive(v22.f_1());
            Receive(v22.f_0());
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62& v23 = v22.f_5();
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63& v24 = v23.f_2();
            for (int i = 0; i < v24.f_0_size(); ++i) {
              Receive(v24.f_0(i));
            }
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63::M64& v25 = v24.f_3();
            Receive(v25.f_1());
            Receive(v25.f_0());
            Receive(v23.f_0());
          }
          Receive(v20.f_3());
          Receive(v20.f_0());
          Receive(v20.f_2());
          Receive(v18.f_0());
          Receive(v13.f_0());
        }
        Receive(v12.f_0());
        Receive(v12.f_2());
        for (const auto& v26 : v12.f_9()) {
          Receive(v26.f_0());
        }
        Receive(v12.f_5());
        Receive(v12.f_1());
        Receive(v12.f_4());
        const Message8::M3::M9::M15::M29::M32::M40& v27 = v12.f_11();
        Receive(v27.f_0());
      }
      Receive(v11.f_0());
    }
    Receive(v10.f_0());
    const Message8::M3::M9::M15::M24& v28 = v10.f_3();
    Receive(v28.f_1());
    Receive(v28.f_0());
    const Message8::M3::M9::M15::M26& v29 = v10.f_4();
    Receive(v29.f_0());
    for (int i = 0; i < v9.f_1_size(); ++i) {
      Receive(v9.f_1(i));
    }
    const Message8::M3::M9::M13& v30 = v9.f_7();
    Receive(v30.f_2());
    const Message8::M3::M9::M13::M18& v31 = v30.f_5();
    const Message8::M3::M9::M13::M18::M31& v32 = v31.f_2();
    for (const auto& v33 : v32.f_5()) {
      Receive(v33.f_0());
      const Message8::M3::M9::M13::M18::M31::M37::M44& v34 = v33.f_2();
      Receive(v34.f_0());
    }
    Receive(v32.f_0());
    const Message8::M3::M9::M13::M18::M31::M35& v35 = v32.f_3();
    Receive(v35.f_1());
    for (int i = 0; i < v35.f_2_size(); ++i) {
      Receive(v35.f_2(i));
    }
    Receive(v35.f_7());
    Receive(v35.f_3());
    Receive(v35.f_0());
    Receive(v35.f_4());
    Receive(v35.f_5());
    Receive(v35.f_6());
    const Message8::M3::M9::M13::M18::M31::M36& v36 = v32.f_4();
    Receive(v36.f_0());
    Receive(v31.f_0());
    const Message8::M3::M9::M13::M27& v37 = v30.f_8();
    Receive(v37.f_0());
    Receive(v30.f_3());
    Receive(v30.f_0());
    const Message8::M3::M9::M13::M23& v38 = v30.f_6();
    Receive(v38.f_0());
    Receive(v30.f_1());
    const Message8::M3::M10& v39 = v8.f_4();
    Receive(v39.f_0());
    Receive(v39.f_1());
    const Message8::M3::M10::M11& v40 = v39.f_4();
    const Message8::M3::M10::M11::M17& v41 = v40.f_2();
    const Message8::M3::M10::M11::M17::M33& v42 = v41.f_5();
    const Message8::M3::M10::M11::M17::M33::M39& v43 = v42.f_26();
    for (int i = 0; i < v43.f_0_size(); ++i) {
      Receive(v43.f_0(i));
    }
    for (const auto& v44 : v43.f_3()) {
      Receive(v44.f_0());
    }
    Receive(v42.f_12());
    Receive(v42.f_3());
    Receive(v42.f_18());
    Receive(v42.f_10());
    Receive(v42.f_5());
    Receive(v42.f_7());
    Receive(v42.f_16());
    Receive(v42.f_8());
    const Message8::M3::M10::M11::M17::M33::M34& v45 = v42.f_25();
    const Message8::M3::M10::M11::M17::M33::M34::M43& v46 = v45.f_3();
    Receive(v46.f_0());
    for (const auto& v47 : v46.f_2()) {
      Receive(v47.f_0());
    }
    const Message8::M3::M10::M11::M17::M33::M34::M45& v48 = v45.f_4();
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52& v49 = v48.f_2();
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52::M55& v50 = v49.f_2();
    Receive(v50.f_0());
    for (const auto& v51 : v49.f_3()) {
      for (const auto& v52 : v51.f_3()) {
        Receive(v52.f_0());
      }
      Receive(v51.f_1());
      Receive(v51.f_0());
    }
    Receive(v49.f_0());
    Receive(v48.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M42& v53 = v45.f_2();
    Receive(v53.f_0());
    for (const auto& v54 : v53.f_4()) {
      for (int i = 0; i < v54.f_0_size(); ++i) {
        Receive(v54.f_0(i));
      }
    }
    Receive(v45.f_0());
    Receive(v42.f_14());
    Receive(v42.f_15());
    Receive(v42.f_17());
    Receive(v42.f_13());
    Receive(v42.f_6());
    Receive(v42.f_4());
    Receive(v42.f_9());
    for (int i = 0; i < v42.f_11_size(); ++i) {
      Receive(v42.f_11(i));
    }
    Receive(v42.f_1());
    Receive(v42.f_0());
    for (int i = 0; i < v42.f_2_size(); ++i) {
      Receive(v42.f_2(i));
    }
    Receive(v41.f_1());
    for (int i = 0; i < v41.f_2_size(); ++i) {
      Receive(v41.f_2(i));
    }
    Receive(v41.f_0());
    Receive(v40.f_0());
    Receive(v8.f_0());
  }
  const Message8::M4& v55 = (*message).f_7();
  const Message8::M4::M5& v56 = v55.f_2();
  Receive(v56.f_0());
  const Message8::M4::M5::M16& v57 = v56.f_3();
  Receive(v57.f_5());
  Receive(v57.f_0());
  Receive(v57.f_1());
  for (const auto& v58 : v57.f_10()) {
    Receive(v58.f_0());
  }
  Receive(v57.f_4());
  Receive(v57.f_3());
  Receive(v57.f_2());
  const Message8::M4::M5::M14& v59 = v56.f_2();
  const Message8::M4::M5::M14::M28& v60 = v59.f_11();
  for (int i = 0; i < v60.f_0_size(); ++i) {
    Receive(v60.f_0(i));
  }
  for (const auto& v61 : v59.f_7()) {
    Receive(v61.f_0());
  }
  Receive(v59.f_0());
  const Message8::M4::M5::M14::M22& v62 = v59.f_9();
  Receive(v62.f_0());
  Receive(v59.f_1());
  const Message8::M4::M5::M14::M25& v63 = v59.f_10();
  Receive(v63.f_0());
  Receive(v59.f_2());
  Receive(v55.f_0());
}
void Message8_Get_3(Message8* message) {
  Receive((*message).f_0());
  const Message8::M1& v0 = (*message).f_4();
  Receive(v0.f_0());
  for (const auto& v1 : v0.f_2()) {
    Receive(v1.f_0());
  }
  for (const auto& v2 : v0.f_4()) {
    Receive(v2.f_0());
  }
  const Message8::M4& v3 = (*message).f_7();
  Receive(v3.f_0());
  const Message8::M4::M5& v4 = v3.f_2();
  const Message8::M4::M5::M16& v5 = v4.f_3();
  for (const auto& v6 : v5.f_10()) {
    Receive(v6.f_0());
  }
  Receive(v5.f_2());
  Receive(v5.f_0());
  Receive(v5.f_5());
  Receive(v5.f_3());
  Receive(v5.f_1());
  Receive(v5.f_4());
  const Message8::M4::M5::M14& v7 = v4.f_2();
  Receive(v7.f_2());
  for (const auto& v8 : v7.f_7()) {
    Receive(v8.f_0());
  }
  const Message8::M4::M5::M14::M22& v9 = v7.f_9();
  Receive(v9.f_0());
  const Message8::M4::M5::M14::M25& v10 = v7.f_10();
  Receive(v10.f_0());
  Receive(v7.f_0());
  Receive(v7.f_1());
  const Message8::M4::M5::M14::M28& v11 = v7.f_11();
  for (int i = 0; i < v11.f_0_size(); ++i) {
    Receive(v11.f_0(i));
  }
  Receive(v4.f_0());
  for (const auto& v12 : (*message).f_6()) {
    const Message8::M3::M9& v13 = v12.f_2();
    for (int i = 0; i < v13.f_1_size(); ++i) {
      Receive(v13.f_1(i));
    }
    Receive(v13.f_0());
    for (int i = 0; i < v13.f_3_size(); ++i) {
      Receive(v13.f_3(i));
    }
    Receive(v13.f_4());
    Receive(v13.f_2());
    const Message8::M3::M9::M15& v14 = v13.f_8();
    Receive(v14.f_1());
    const Message8::M3::M9::M15::M26& v15 = v14.f_4();
    Receive(v15.f_0());
    Receive(v14.f_0());
    const Message8::M3::M9::M15::M24& v16 = v14.f_3();
    Receive(v16.f_1());
    Receive(v16.f_0());
    for (const auto& v17 : v14.f_5()) {
      Receive(v17.f_0());
      for (const auto& v18 : v17.f_2()) {
        for (const auto& v19 : v18.f_9()) {
          Receive(v19.f_0());
        }
        Receive(v18.f_3());
        Receive(v18.f_1());
        Receive(v18.f_6());
        const Message8::M3::M9::M15::M29::M32::M40& v20 = v18.f_11();
        Receive(v20.f_0());
        Receive(v18.f_4());
        for (const auto& v21 : v18.f_12()) {
          const Message8::M3::M9::M15::M29::M32::M41::M46& v22 = v21.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49& v23 = v22.f_2();
          Receive(v23.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54& v24 =
              v23.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58& v25 =
              v24.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59&
              v26 = v25.f_2();
          Receive(v26.f_2());
          for (int i = 0; i < v26.f_4_size(); ++i) {
            Receive(v26.f_4(i));
          }
          Receive(v26.f_0());
          Receive(v26.f_3());
          Receive(v26.f_1());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
              M60& v27 = v26.f_7();
          Receive(v27.f_0());
          for (const auto& v28 : v27.f_2()) {
            Receive(v28.f_0());
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62& v29 = v28.f_5();
            Receive(v29.f_0());
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63& v30 = v29.f_2();
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63::M64& v31 = v30.f_3();
            Receive(v31.f_0());
            Receive(v31.f_1());
            for (int i = 0; i < v30.f_0_size(); ++i) {
              Receive(v30.f_0(i));
            }
            Receive(v28.f_1());
          }
          Receive(v25.f_0());
          Receive(v24.f_0());
          Receive(v22.f_0());
          Receive(v21.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M48& v32 = v21.f_3();
          Receive(v32.f_4());
          Receive(v32.f_2());
          for (const auto& v33 : v32.f_8()) {
            Receive(v33.f_53());
            Receive(v33.f_61());
            Receive(v33.f_7());
            Receive(v33.f_21());
            Receive(v33.f_42());
            Receive(v33.f_3());
            Receive(v33.f_14());
            Receive(v33.f_57());
            Receive(v33.f_9());
            Receive(v33.f_26());
            Receive(v33.f_68());
            Receive(v33.f_10());
            Receive(v33.f_60());
            Receive(v33.f_43());
            Receive(v33.f_64());
            Receive(v33.f_6());
            Receive(v33.f_0());
            Receive(v33.f_58());
            Receive(v33.f_37());
            for (int i = 0; i < v33.f_51_size(); ++i) {
              Receive(v33.f_51(i));
            }
            Receive(v33.f_39());
            Receive(v33.f_18());
            Receive(v33.f_17());
            Receive(v33.f_1());
            Receive(v33.f_12());
            Receive(v33.f_48());
            Receive(v33.f_41());
            Receive(v33.f_63());
            Receive(v33.f_13());
            for (int i = 0; i < v33.f_15_size(); ++i) {
              Receive(v33.f_15(i));
            }
            Receive(v33.f_29());
            for (int i = 0; i < v33.f_22_size(); ++i) {
              Receive(v33.f_22(i));
            }
            Receive(v33.f_20());
            Receive(v33.f_62());
            Receive(v33.f_34());
            Receive(v33.f_11());
            Receive(v33.f_35());
            Receive(v33.f_44());
            Receive(v33.f_4());
            for (int i = 0; i < v33.f_45_size(); ++i) {
              Receive(v33.f_45(i));
            }
            Receive(v33.f_66());
            Receive(v33.f_59());
            Receive(v33.f_28());
            Receive(v33.f_38());
            for (int i = 0; i < v33.f_56_size(); ++i) {
              Receive(v33.f_56(i));
            }
            Receive(v33.f_46());
            Receive(v33.f_32());
            Receive(v33.f_54());
            Receive(v33.f_27());
            Receive(v33.f_8());
            Receive(v33.f_55());
            for (int i = 0; i < v33.f_36_size(); ++i) {
              Receive(v33.f_36(i));
            }
            Receive(v33.f_16());
            Receive(v33.f_40());
            Receive(v33.f_67());
            Receive(v33.f_5());
            Receive(v33.f_23());
            Receive(v33.f_33());
            Receive(v33.f_49());
            Receive(v33.f_25());
            Receive(v33.f_31());
            for (int i = 0; i < v33.f_50_size(); ++i) {
              Receive(v33.f_50(i));
            }
            Receive(v33.f_65());
            Receive(v33.f_19());
            Receive(v33.f_30());
            for (int i = 0; i < v33.f_24_size(); ++i) {
              Receive(v33.f_24(i));
            }
            for (int i = 0; i < v33.f_2_size(); ++i) {
              Receive(v33.f_2(i));
            }
            Receive(v33.f_47());
            Receive(v33.f_52());
          }
          Receive(v32.f_1());
          Receive(v32.f_3());
          Receive(v32.f_0());
          Receive(v32.f_5());
        }
        Receive(v18.f_5());
        Receive(v18.f_0());
        Receive(v18.f_2());
      }
    }
    const Message8::M3::M9::M13& v34 = v13.f_7();
    const Message8::M3::M9::M13::M27& v35 = v34.f_8();
    Receive(v35.f_0());
    const Message8::M3::M9::M13::M23& v36 = v34.f_6();
    Receive(v36.f_0());
    Receive(v34.f_3());
    Receive(v34.f_2());
    Receive(v34.f_0());
    Receive(v34.f_1());
    const Message8::M3::M9::M13::M18& v37 = v34.f_5();
    Receive(v37.f_0());
    const Message8::M3::M9::M13::M18::M31& v38 = v37.f_2();
    const Message8::M3::M9::M13::M18::M31::M35& v39 = v38.f_3();
    Receive(v39.f_0());
    for (int i = 0; i < v39.f_2_size(); ++i) {
      Receive(v39.f_2(i));
    }
    Receive(v39.f_1());
    Receive(v39.f_7());
    Receive(v39.f_3());
    Receive(v39.f_6());
    Receive(v39.f_4());
    Receive(v39.f_5());
    for (const auto& v40 : v38.f_5()) {
      Receive(v40.f_0());
      const Message8::M3::M9::M13::M18::M31::M37::M44& v41 = v40.f_2();
      Receive(v41.f_0());
    }
    Receive(v38.f_0());
    const Message8::M3::M9::M13::M18::M31::M36& v42 = v38.f_4();
    Receive(v42.f_0());
    const Message8::M3::M10& v43 = v12.f_4();
    Receive(v43.f_1());
    const Message8::M3::M10::M11& v44 = v43.f_4();
    const Message8::M3::M10::M11::M17& v45 = v44.f_2();
    Receive(v45.f_1());
    for (int i = 0; i < v45.f_2_size(); ++i) {
      Receive(v45.f_2(i));
    }
    const Message8::M3::M10::M11::M17::M33& v46 = v45.f_5();
    Receive(v46.f_18());
    Receive(v46.f_9());
    Receive(v46.f_14());
    Receive(v46.f_1());
    Receive(v46.f_16());
    Receive(v46.f_13());
    Receive(v46.f_5());
    Receive(v46.f_4());
    const Message8::M3::M10::M11::M17::M33::M34& v47 = v46.f_25();
    const Message8::M3::M10::M11::M17::M33::M34::M42& v48 = v47.f_2();
    for (const auto& v49 : v48.f_4()) {
      for (int i = 0; i < v49.f_0_size(); ++i) {
        Receive(v49.f_0(i));
      }
    }
    Receive(v48.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M45& v50 = v47.f_4();
    Receive(v50.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52& v51 = v50.f_2();
    Receive(v51.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52::M55& v52 = v51.f_2();
    Receive(v52.f_0());
    for (const auto& v53 : v51.f_3()) {
      Receive(v53.f_0());
      for (const auto& v54 : v53.f_3()) {
        Receive(v54.f_0());
      }
      Receive(v53.f_1());
    }
    Receive(v47.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M43& v55 = v47.f_3();
    for (const auto& v56 : v55.f_2()) {
      Receive(v56.f_0());
    }
    Receive(v55.f_0());
    Receive(v46.f_3());
    Receive(v46.f_15());
    for (int i = 0; i < v46.f_11_size(); ++i) {
      Receive(v46.f_11(i));
    }
    Receive(v46.f_6());
    for (int i = 0; i < v46.f_2_size(); ++i) {
      Receive(v46.f_2(i));
    }
    const Message8::M3::M10::M11::M17::M33::M39& v57 = v46.f_26();
    for (int i = 0; i < v57.f_0_size(); ++i) {
      Receive(v57.f_0(i));
    }
    for (const auto& v58 : v57.f_3()) {
      Receive(v58.f_0());
    }
    Receive(v46.f_0());
    Receive(v46.f_10());
    Receive(v46.f_7());
    Receive(v46.f_17());
    Receive(v46.f_8());
    Receive(v46.f_12());
    Receive(v45.f_0());
    Receive(v44.f_0());
    Receive(v43.f_0());
    Receive(v12.f_0());
  }
  Receive((*message).f_1());
  const Message8::M2& v59 = (*message).f_5();
  for (const auto& v60 : v59.f_2()) {
    Receive(v60.f_0());
    for (const auto& v61 : v60.f_5()) {
      for (const auto& v62 : v61.f_2()) {
        Receive(v62.f_0());
      }
      Receive(v61.f_0());
      for (const auto& v63 : v61.f_3()) {
        Receive(v63.f_0());
        Receive(v63.f_3());
        for (int i = 0; i < v63.f_1_size(); ++i) {
          Receive(v63.f_1(i));
        }
        Receive(v63.f_2());
        Receive(v63.f_4());
      }
    }
  }
  Receive(v59.f_0());
}
void Message8_Get_4(Message8* message) {
  const Message8::M4& v0 = (*message).f_7();
  Receive(v0.f_0());
  const Message8::M4::M5& v1 = v0.f_2();
  const Message8::M4::M5::M14& v2 = v1.f_2();
  Receive(v2.f_1());
  const Message8::M4::M5::M14::M25& v3 = v2.f_10();
  Receive(v3.f_0());
  Receive(v2.f_0());
  Receive(v2.f_2());
  const Message8::M4::M5::M14::M28& v4 = v2.f_11();
  for (int i = 0; i < v4.f_0_size(); ++i) {
    Receive(v4.f_0(i));
  }
  for (const auto& v5 : v2.f_7()) {
    Receive(v5.f_0());
  }
  const Message8::M4::M5::M14::M22& v6 = v2.f_9();
  Receive(v6.f_0());
  const Message8::M4::M5::M16& v7 = v1.f_3();
  Receive(v7.f_3());
  Receive(v7.f_4());
  Receive(v7.f_2());
  Receive(v7.f_5());
  Receive(v7.f_1());
  Receive(v7.f_0());
  for (const auto& v8 : v7.f_10()) {
    Receive(v8.f_0());
  }
  Receive(v1.f_0());
  for (const auto& v9 : (*message).f_6()) {
    const Message8::M3::M10& v10 = v9.f_4();
    Receive(v10.f_0());
    Receive(v10.f_1());
    const Message8::M3::M10::M11& v11 = v10.f_4();
    const Message8::M3::M10::M11::M17& v12 = v11.f_2();
    Receive(v12.f_0());
    for (int i = 0; i < v12.f_2_size(); ++i) {
      Receive(v12.f_2(i));
    }
    const Message8::M3::M10::M11::M17::M33& v13 = v12.f_5();
    Receive(v13.f_13());
    Receive(v13.f_5());
    Receive(v13.f_9());
    Receive(v13.f_17());
    Receive(v13.f_14());
    Receive(v13.f_8());
    Receive(v13.f_15());
    Receive(v13.f_7());
    Receive(v13.f_4());
    for (int i = 0; i < v13.f_11_size(); ++i) {
      Receive(v13.f_11(i));
    }
    Receive(v13.f_12());
    const Message8::M3::M10::M11::M17::M33::M34& v14 = v13.f_25();
    const Message8::M3::M10::M11::M17::M33::M34::M43& v15 = v14.f_3();
    Receive(v15.f_0());
    for (const auto& v16 : v15.f_2()) {
      Receive(v16.f_0());
    }
    Receive(v14.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M42& v17 = v14.f_2();
    Receive(v17.f_0());
    for (const auto& v18 : v17.f_4()) {
      for (int i = 0; i < v18.f_0_size(); ++i) {
        Receive(v18.f_0(i));
      }
    }
    const Message8::M3::M10::M11::M17::M33::M34::M45& v19 = v14.f_4();
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52& v20 = v19.f_2();
    Receive(v20.f_0());
    const Message8::M3::M10::M11::M17::M33::M34::M45::M52::M55& v21 = v20.f_2();
    Receive(v21.f_0());
    for (const auto& v22 : v20.f_3()) {
      Receive(v22.f_0());
      for (const auto& v23 : v22.f_3()) {
        Receive(v23.f_0());
      }
      Receive(v22.f_1());
    }
    Receive(v19.f_0());
    Receive(v13.f_10());
    Receive(v13.f_18());
    Receive(v13.f_3());
    Receive(v13.f_1());
    for (int i = 0; i < v13.f_2_size(); ++i) {
      Receive(v13.f_2(i));
    }
    Receive(v13.f_0());
    Receive(v13.f_6());
    Receive(v13.f_16());
    const Message8::M3::M10::M11::M17::M33::M39& v24 = v13.f_26();
    for (const auto& v25 : v24.f_3()) {
      Receive(v25.f_0());
    }
    for (int i = 0; i < v24.f_0_size(); ++i) {
      Receive(v24.f_0(i));
    }
    Receive(v12.f_1());
    Receive(v11.f_0());
    const Message8::M3::M9& v26 = v9.f_2();
    const Message8::M3::M9::M13& v27 = v26.f_7();
    Receive(v27.f_1());
    Receive(v27.f_2());
    const Message8::M3::M9::M13::M27& v28 = v27.f_8();
    Receive(v28.f_0());
    const Message8::M3::M9::M13::M18& v29 = v27.f_5();
    Receive(v29.f_0());
    const Message8::M3::M9::M13::M18::M31& v30 = v29.f_2();
    Receive(v30.f_0());
    for (const auto& v31 : v30.f_5()) {
      const Message8::M3::M9::M13::M18::M31::M37::M44& v32 = v31.f_2();
      Receive(v32.f_0());
      Receive(v31.f_0());
    }
    const Message8::M3::M9::M13::M18::M31::M35& v33 = v30.f_3();
    for (int i = 0; i < v33.f_2_size(); ++i) {
      Receive(v33.f_2(i));
    }
    Receive(v33.f_6());
    Receive(v33.f_4());
    Receive(v33.f_7());
    Receive(v33.f_1());
    Receive(v33.f_3());
    Receive(v33.f_5());
    Receive(v33.f_0());
    const Message8::M3::M9::M13::M18::M31::M36& v34 = v30.f_4();
    Receive(v34.f_0());
    Receive(v27.f_0());
    const Message8::M3::M9::M13::M23& v35 = v27.f_6();
    Receive(v35.f_0());
    Receive(v27.f_3());
    for (int i = 0; i < v26.f_1_size(); ++i) {
      Receive(v26.f_1(i));
    }
    const Message8::M3::M9::M15& v36 = v26.f_8();
    Receive(v36.f_1());
    for (const auto& v37 : v36.f_5()) {
      for (const auto& v38 : v37.f_2()) {
        Receive(v38.f_2());
        Receive(v38.f_4());
        Receive(v38.f_1());
        Receive(v38.f_0());
        Receive(v38.f_6());
        for (const auto& v39 : v38.f_9()) {
          Receive(v39.f_0());
        }
        for (const auto& v40 : v38.f_12()) {
          const Message8::M3::M9::M15::M29::M32::M41::M46& v41 = v40.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49& v42 = v41.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54& v43 =
              v42.f_2();
          Receive(v43.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58& v44 =
              v43.f_2();
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59&
              v45 = v44.f_2();
          Receive(v45.f_3());
          Receive(v45.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::M59::
              M60& v46 = v45.f_7();
          Receive(v46.f_0());
          for (const auto& v47 : v46.f_2()) {
            Receive(v47.f_0());
            Receive(v47.f_1());
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62& v48 = v47.f_5();
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63& v49 = v48.f_2();
            for (int i = 0; i < v49.f_0_size(); ++i) {
              Receive(v49.f_0(i));
            }
            const Message8::M3::M9::M15::M29::M32::M41::M46::M49::M54::M58::
                M59::M60::M61::M62::M63::M64& v50 = v49.f_3();
            Receive(v50.f_1());
            Receive(v50.f_0());
            Receive(v48.f_0());
          }
          Receive(v45.f_1());
          Receive(v45.f_2());
          for (int i = 0; i < v45.f_4_size(); ++i) {
            Receive(v45.f_4(i));
          }
          Receive(v44.f_0());
          Receive(v42.f_0());
          Receive(v41.f_0());
          const Message8::M3::M9::M15::M29::M32::M41::M48& v51 = v40.f_3();
          for (const auto& v52 : v51.f_8()) {
            Receive(v52.f_35());
            Receive(v52.f_46());
            for (int i = 0; i < v52.f_24_size(); ++i) {
              Receive(v52.f_24(i));
            }
            for (int i = 0; i < v52.f_2_size(); ++i) {
              Receive(v52.f_2(i));
            }
            Receive(v52.f_13());
            Receive(v52.f_1());
            Receive(v52.f_38());
            Receive(v52.f_37());
            Receive(v52.f_5());
            Receive(v52.f_39());
            Receive(v52.f_65());
            Receive(v52.f_52());
            for (int i = 0; i < v52.f_15_size(); ++i) {
              Receive(v52.f_15(i));
            }
            Receive(v52.f_9());
            Receive(v52.f_0());
            Receive(v52.f_6());
            Receive(v52.f_44());
            Receive(v52.f_32());
            for (int i = 0; i < v52.f_50_size(); ++i) {
              Receive(v52.f_50(i));
            }
            Receive(v52.f_23());
            Receive(v52.f_54());
            for (int i = 0; i < v52.f_56_size(); ++i) {
              Receive(v52.f_56(i));
            }
            Receive(v52.f_42());
            Receive(v52.f_68());
            Receive(v52.f_43());
            Receive(v52.f_48());
            Receive(v52.f_29());
            Receive(v52.f_61());
            Receive(v52.f_62());
            Receive(v52.f_11());
            Receive(v52.f_14());
            Receive(v52.f_64());
            Receive(v52.f_25());
            Receive(v52.f_28());
            Receive(v52.f_17());
            Receive(v52.f_7());
            Receive(v52.f_12());
            for (int i = 0; i < v52.f_45_size(); ++i) {
              Receive(v52.f_45(i));
            }
            for (int i = 0; i < v52.f_51_size(); ++i) {
              Receive(v52.f_51(i));
            }
            Receive(v52.f_47());
            Receive(v52.f_66());
            for (int i = 0; i < v52.f_36_size(); ++i) {
              Receive(v52.f_36(i));
            }
            Receive(v52.f_3());
            Receive(v52.f_41());
            Receive(v52.f_67());
            Receive(v52.f_21());
            Receive(v52.f_27());
            Receive(v52.f_18());
            Receive(v52.f_59());
            Receive(v52.f_33());
            Receive(v52.f_63());
            Receive(v52.f_55());
            Receive(v52.f_30());
            Receive(v52.f_4());
            Receive(v52.f_20());
            Receive(v52.f_60());
            Receive(v52.f_19());
            Receive(v52.f_34());
            Receive(v52.f_40());
            Receive(v52.f_58());
            Receive(v52.f_49());
            Receive(v52.f_31());
            Receive(v52.f_57());
            Receive(v52.f_53());
            Receive(v52.f_8());
            Receive(v52.f_16());
            Receive(v52.f_26());
            Receive(v52.f_10());
            for (int i = 0; i < v52.f_22_size(); ++i) {
              Receive(v52.f_22(i));
            }
          }
          Receive(v51.f_5());
          Receive(v51.f_1());
          Receive(v51.f_0());
          Receive(v51.f_4());
          Receive(v51.f_2());
          Receive(v51.f_3());
          Receive(v40.f_0());
        }
        Receive(v38.f_3());
        Receive(v38.f_5());
        const Message8::M3::M9::M15::M29::M32::M40& v53 = v38.f_11();
        Receive(v53.f_0());
      }
      Receive(v37.f_0());
    }
    const Message8::M3::M9::M15::M24& v54 = v36.f_3();
    Receive(v54.f_1());
    Receive(v54.f_0());
    const Message8::M3::M9::M15::M26& v55 = v36.f_4();
    Receive(v55.f_0());
    Receive(v36.f_0());
    Receive(v26.f_0());
    Receive(v26.f_2());
    Receive(v26.f_4());
    for (int i = 0; i < v26.f_3_size(); ++i) {
      Receive(v26.f_3(i));
    }
    Receive(v9.f_0());
  }
  const Message8::M1& v56 = (*message).f_4();
  Receive(v56.f_0());
  for (const auto& v57 : v56.f_2()) {
    Receive(v57.f_0());
  }
  for (const auto& v58 : v56.f_4()) {
    Receive(v58.f_0());
  }
  Receive((*message).f_1());
  const Message8::M2& v59 = (*message).f_5();
  for (const auto& v60 : v59.f_2()) {
    for (const auto& v61 : v60.f_5()) {
      Receive(v61.f_0());
      for (const auto& v62 : v61.f_3()) {
        Receive(v62.f_3());
        Receive(v62.f_0());
        Receive(v62.f_4());
        for (int i = 0; i < v62.f_1_size(); ++i) {
          Receive(v62.f_1(i));
        }
        Receive(v62.f_2());
      }
      for (const auto& v63 : v61.f_2()) {
        Receive(v63.f_0());
      }
    }
    Receive(v60.f_0());
  }
  Receive(v59.f_0());
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
