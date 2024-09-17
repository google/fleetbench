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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message0.pb.h"

namespace fleetbench::rpc::P3::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_25(0x37c72f84);
  message->set_f_26(s->substr(0, 14));
  message->set_f_11(0x40);
  message->set_f_13(0x2d15e1455f9ddf73);
  message->set_f_8(true);
  message->set_f_24(0x1e);
  message->set_f_28(s->substr(0, 159));
  message->set_f_27(0x764432b);
  message->set_f_2(0x5d);
  Message0::M8* v0 = message->mutable_f_57();
  Message0::M8::M38* v1 = v0->mutable_f_6();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M8::M26* v2 = v0->mutable_f_2();
  v2->set_f_2(0x34d362860b420c74);
  Message0::M8::M45* v3 = v0->mutable_f_7();
  v3->set_f_2(0x7);
  v3->set_f_16(s->substr(0, 406));
  v3->set_f_20(s->substr(0, 3));
  v3->set_f_21(0x48);
  v3->set_f_19(0x53733a5ccaec6106);
  v3->set_f_27(0x3b);
  v3->set_f_22(0x4534843d64955d66);
  v3->set_f_3(0x41d991fca20115aa);
  v3->set_f_23(0x2f);
  v3->set_f_12(Message0::M8::M45::E14_CONST_4);
  v3->set_f_8(0x2c0b7b88e4d13ace);
  v3->set_f_26(0x5c);
  v3->set_f_18(s->substr(0, 18));
  Message0::M8::M45::E13 array_1[13] = {
      Message0::M8::M45::E13_CONST_2, Message0::M8::M45::E13_CONST_2,
      Message0::M8::M45::E13_CONST_1, Message0::M8::M45::E13_CONST_5,
      Message0::M8::M45::E13_CONST_3, Message0::M8::M45::E13_CONST_2,
      Message0::M8::M45::E13_CONST_2, Message0::M8::M45::E13_CONST_3,
      Message0::M8::M45::E13_CONST_1, Message0::M8::M45::E13_CONST_4,
      Message0::M8::M45::E13_CONST_4, Message0::M8::M45::E13_CONST_4,
      Message0::M8::M45::E13_CONST_5,
  };
  for (auto v : array_1) {
    v3->add_f_0(v);
  }
  v3->set_f_4(0x1aaf6522bdb25389);
  Message0::M8::M45::M66* v4 = v3->mutable_f_44();
  v4->set_f_1(0x77);
  v4->set_f_2(0x82e284cb2e213e);
  v4->set_f_3(s->substr(0, 31));
  v3->set_f_13(false);
  v0->set_f_0(0x636cb01a8639a8e6);
  Message0::M1* v5 = message->mutable_f_45();
  v5->set_f_0(0x33);
  Message0::M1::M24* v6_0 = v5->add_f_2();
  v6_0->set_f_0(0x1f);
  Message0::M3* v7_0 = message->add_f_47();
  Message0::M3::M14* v8 = v7_0->mutable_f_2();
  Message0::M3::M14::M57* v9 = v8->mutable_f_3();
  Message0::M3::M14::M57::M86* v10_0 = v9->add_f_3();
  v10_0->set_f_0(0x2948186ea95fbfcc);
  v9->set_f_0(0x28);
  message->set_f_22(0xaf5fcd00571611b);
  message->set_f_19(s->substr(0, 68));
  message->set_f_1(0x49d85f47);
  Message0::M11* v11 = message->mutable_f_62();
  (void)v11;  // Suppresses clang-tidy.
  message->set_f_3(0x615449fce8aea2a3);
  Message0::M2* v12_0 = message->add_f_46();
  v12_0->set_f_1(0x2f);
  v12_0->set_f_0(0x51);
  v12_0->set_f_4(0x46);
  v12_0->set_f_3(0x30);
  v12_0->set_f_2(0x72);
  v12_0->set_f_5(0x1f);
  Message0::M2::M32* v13 = v12_0->mutable_f_14();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M6* v14 = message->mutable_f_53();
  Message0::M6::M27* v15 = v14->mutable_f_6();
  (void)v15;  // Suppresses clang-tidy.
  Message0::M6::M29* v16_0 = v14->add_f_7();
  (void)v16_0;  // Suppresses clang-tidy.
  Message0::M6::M16* v17 = v14->mutable_f_3();
  v17->set_f_0(s->substr(0, 21));
  v14->set_f_0(s->substr(0, 34));
  Message0::M6::M41* v18 = v14->mutable_f_10();
  v18->set_f_0(0x17de948d);
  Message0::M6::M34* v19_0 = v14->add_f_8();
  v19_0->set_f_0(0x2e94dd1475761994);
  v19_0->set_f_2(0xa5aa615);
  message->set_f_6(0x1db8fc9d93cbc956);
  Message0::M4* v20 = message->mutable_f_48();
  v20->set_f_0(0x1aacfe);
  message->set_f_9(0x47cdbe271d81b907);
  message->set_f_15(0x35087b05e4741d00);
  message->set_f_16(false);
  message->set_f_12(0x11f7f8);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_6(0x5c5b8692257cb850);
  message->set_f_19(s->substr(0, 33));
  message->set_f_14(0x25db72e8a5b1f537);
  message->set_f_23(0x6d3ca1e);
  message->set_f_30(Message0::E2_CONST_2);
  Message0::M7* v0 = message->mutable_f_54();
  v0->set_f_12(false);
  Message0::M7::M47* v1 = v0->mutable_f_25();
  v1->set_f_1(0xfbd65cc);
  Message0::M7::M17* v2 = v0->mutable_f_19();
  v2->set_f_0(0x33ded7bfaff080f6);
  v2->set_f_1(0xa);
  v0->set_f_5(s->substr(0, 2));
  Message0::M7::M50* v3 = v0->mutable_f_26();
  v3->set_f_5(0x5ae3db4030c19f5f);
  v3->set_f_23(0x5144e6);
  v3->set_f_10(s->substr(0, 8));
  v3->add_f_4(Message0::M7::M50::E17_CONST_1);
  v3->set_f_11(s->substr(0, 30));
  v3->set_f_17(0x61);
  v3->set_f_13(0x25);
  v3->set_f_14(0x72eacd64);
  v3->set_f_3(s->substr(0, 1));
  v3->set_f_20(0x42);
  Message0::M7::M50::E16 array_0[22] = {
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_1,
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_2,
      Message0::M7::M50::E16_CONST_5, Message0::M7::M50::E16_CONST_3,
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_1,
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_3,
      Message0::M7::M50::E16_CONST_1, Message0::M7::M50::E16_CONST_3,
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_1,
      Message0::M7::M50::E16_CONST_4, Message0::M7::M50::E16_CONST_2,
      Message0::M7::M50::E16_CONST_3, Message0::M7::M50::E16_CONST_2,
      Message0::M7::M50::E16_CONST_5, Message0::M7::M50::E16_CONST_1,
      Message0::M7::M50::E16_CONST_5, Message0::M7::M50::E16_CONST_5,
  };
  for (auto v : array_0) {
    v3->add_f_0(v);
  }
  Message0::M7::M50::M62* v4 = v3->mutable_f_41();
  Message0::M7::M50::M62::M87* v5 = v4->mutable_f_28();
  Message0::M7::M50::M62::M87::M117* v6 = v5->mutable_f_2();
  v6->set_f_0(s->substr(0, 32));
  v4->set_f_8(0x2b);
  v4->set_f_17(0x11f47a6a);
  v4->set_f_7(s->substr(0, 3397));
  v4->set_f_5(0x14c6bb28cf0127a7);
  v4->set_f_10(s->substr(0, 27));
  v4->set_f_18(s->substr(0, 667));
  v4->set_f_2(0x4db1069);
  v4->add_f_13(Message0::M7::M50::M62::E24_CONST_5);
  v4->set_f_4(0x1c1a);
  Message0::M7::M50::M62::M91* v7 = v4->mutable_f_29();
  Message0::M7::M50::M62::M91::M112* v8_0 = v7->add_f_2();
  v8_0->set_f_0(true);
  v8_0->set_f_3(s->substr(0, 11));
  v8_0->set_f_2(0x56);
  v8_0->set_f_5(s->substr(0, 25));
  Message0::M7::M50::M62::M91::M120* v9_0 = v7->add_f_4();
  (void)v9_0;  // Suppresses clang-tidy.
  v3->set_f_12(Message0::M7::M50::E19_CONST_1);
  v3->set_f_25(0x75c9f02f4f5e2670);
  v3->set_f_1(s->substr(0, 20));
  v3->set_f_21(0x46);
  v3->set_f_15(0x39fa1da);
  v3->set_f_2(0x6c);
  v3->set_f_24(0x150b5f);
  v3->set_f_27(0x69);
  v3->set_f_28(s->substr(0, 96));
  v0->add_f_3(Message0::M7::E4_CONST_1);
  v0->set_f_13(0x9de0798);
  v0->set_f_7(0x9933bfb76b9da96);
  v0->set_f_9(0x3f125568b126e895);
  Message0::M7::M39* v10 = v0->mutable_f_24();
  v10->set_f_0(Message0::M7::M39::E10_CONST_1);
  v10->set_f_1(0x15b1cf);
  v0->set_f_6(0x4c2fe1e96f2176c0);
  v0->set_f_2(0xc);
  v0->set_f_0(s->substr(0, 5));
  message->set_f_12(0x38);
  message->set_f_25(0x7610b1aa);
  message->set_f_17(0x7);
  message->set_f_16(true);
  message->set_f_20(0x49);
  Message0::M1* v11 = message->mutable_f_45();
  v11->set_f_0(0x1549bf9);
  Message0::M6* v12 = message->mutable_f_53();
  Message0::M6::M29* v13_0 = v12->add_f_7();
  Message0::M6::M29::M68* v14 = v13_0->mutable_f_3();
  v14->set_f_25(false);
  v14->set_f_3(s->substr(0, 85));
  v14->set_f_9(0x2fc26cc);
  v14->add_f_27(Message0::M6::M29::M68::E29_CONST_3);
  v14->set_f_7(0x1188);
  v14->set_f_18(s->substr(0, 419));
  v14->set_f_17(0x579130387637a5aa);
  v14->set_f_22(s->substr(0, 2));
  v14->set_f_24(0x6c);
  v14->set_f_6(0x1ab8754cbf98e2f);
  v14->set_f_2(s->substr(0, 23));
  v14->set_f_11(0x37);
  v14->set_f_12(0xc81ea72);
  v14->set_f_10(0x706ab2a7);
  v14->set_f_4(true);
  v14->set_f_23(s->substr(0, 25));
  v14->set_f_13(Message0::M6::M29::M68::E28_CONST_2);
  v14->set_f_8(0x5c827d711b7d7725);
  v14->set_f_21(0xc04c7f);
  v13_0->set_f_0(0x31c36bf3b5dace07);
  Message0::M6::M16* v15 = v12->mutable_f_3();
  v15->set_f_0(s->substr(0, 271));
  Message0::M6::M40* v16_0 = v12->add_f_9();
  v16_0->set_f_2(0x69f4291);
  v16_0->set_f_0(0x203f);
  v16_0->set_f_3(0x3842bf34d1fa80ee);
  v16_0->set_f_1(0x3b50b8396203d4a1);
  Message0::M6::M20* v17 = v12->mutable_f_4();
  Message0::M6::M20::M77* v18 = v17->mutable_f_11();
  v18->set_f_3(0x7);
  v18->set_f_1(0x384cd9f9a4573406);
  Message0::M6::M20::M77::E30 array_1[18] = {
      Message0::M6::M20::M77::E30_CONST_1, Message0::M6::M20::M77::E30_CONST_2,
      Message0::M6::M20::M77::E30_CONST_2, Message0::M6::M20::M77::E30_CONST_3,
      Message0::M6::M20::M77::E30_CONST_3, Message0::M6::M20::M77::E30_CONST_4,
      Message0::M6::M20::M77::E30_CONST_3, Message0::M6::M20::M77::E30_CONST_1,
      Message0::M6::M20::M77::E30_CONST_3, Message0::M6::M20::M77::E30_CONST_4,
      Message0::M6::M20::M77::E30_CONST_2, Message0::M6::M20::M77::E30_CONST_3,
      Message0::M6::M20::M77::E30_CONST_2, Message0::M6::M20::M77::E30_CONST_3,
      Message0::M6::M20::M77::E30_CONST_1, Message0::M6::M20::M77::E30_CONST_4,
      Message0::M6::M20::M77::E30_CONST_4, Message0::M6::M20::M77::E30_CONST_5,
  };
  for (auto v : array_1) {
    v18->add_f_0(v);
  }
  v18->set_f_2(true);
  Message0::M6::M20::M77::M96* v19 = v18->mutable_f_7();
  v19->set_f_0(s->substr(0, 39));
  v17->set_f_4(0x21fdb75ea3b);
  v17->set_f_2(0x72f5a7e92ba4b032);
  Message0::M6::M27* v20 = v12->mutable_f_6();
  v20->set_f_0(0x7542195da9d5058b);
  Message0::M6::M44* v21 = v12->mutable_f_11();
  v21->set_f_2(0x3e7c7e311a291c0f);
  v21->set_f_3(Message0::M6::M44::E12_CONST_4);
  v12->set_f_0(s->substr(0, 477));
  Message0::M6::M21* v22 = v12->mutable_f_5();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_22(0x42d0b0e0be1056ef);
  Message0::M10* v23 = message->mutable_f_59();
  v23->set_f_0(s->substr(0, 29));
  message->set_f_24(0x14);
  Message0::M5* v24_0 = message->add_f_50();
  Message0::M5::M46* v25 = v24_0->mutable_f_3();
  Message0::M5::M46::M73* v26 = v25->mutable_f_3();
  Message0::M5::M46::M73::M89* v27 = v26->mutable_f_2();
  Message0::M5::M46::M73::M89::E35 array_2[22] = {
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_2,
      Message0::M5::M46::M73::M89::E35_CONST_4,
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_4,
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_4,
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_3,
      Message0::M5::M46::M73::M89::E35_CONST_1,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_2,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_1,
      Message0::M5::M46::M73::M89::E35_CONST_1,
      Message0::M5::M46::M73::M89::E35_CONST_5,
      Message0::M5::M46::M73::M89::E35_CONST_5,
  };
  for (auto v : array_2) {
    v27->add_f_0(v);
  }
  Message0::M5::M46::M73::M89::M113* v28 = v27->mutable_f_17();
  v28->set_f_3(0x147);
  v28->set_f_1(0x1747f1b);
  v28->set_f_2(s->substr(0, 32));
  Message0::M5::M46::M73::M89::M115* v29_0 = v27->add_f_18();
  v29_0->set_f_0(s->substr(0, 424));
  v27->set_f_5(0x156ffb);
  v27->set_f_1(0x2097f4df1ed52db);
  Message0::M5::M46::M73::M89::M102* v30 = v27->mutable_f_15();
  v30->set_f_0(false);
  v27->set_f_3(0x2);
  v26->set_f_0(s->substr(0, 2));
  message->set_f_2(0x10);
  message->set_f_18(0x56);
  message->set_f_9(0x1969d0ca1d28a5b2);
  Message0::M4* v31 = message->mutable_f_48();
  Message0::M4::M22* v32 = v31->mutable_f_4();
  v32->set_f_0(0x17);
  Message0::M4::M22::M72* v33_0 = v32->add_f_3();
  v33_0->set_f_0(0xefe62d2);
  Message0::M4::M22::M53* v34 = v32->mutable_f_2();
  v34->set_f_1(0x1e);
  Message0::M4::M22::M53::M83* v35_0 = v34->add_f_4();
  v35_0->set_f_0(true);
  v34->set_f_0(true);
  Message0::M4::M42* v36 = v31->mutable_f_6();
  v36->set_f_0(s->substr(0, 18));
  Message0::M4::M42::M78* v37_0 = v36->add_f_3();
  v37_0->set_f_30(0x56);
  v37_0->set_f_6(0xeb2a32a);
  v37_0->set_f_0(0x4c6adbfc409a5e5a);
  v37_0->set_f_22(0x2e7ca68a178331c2);
  v37_0->set_f_27(0x66dee0b87a584fb);
  v37_0->set_f_2(0x5f4d44407aa802ce);
  v37_0->set_f_9(true);
  v37_0->set_f_28(0x39ab126);
  v37_0->set_f_23(0x628ba74);
  v37_0->set_f_18(0x56aae129afde348c);
  v37_0->set_f_3(0x3056f0ad5e2b68dc);
  v37_0->add_f_16(Message0::M4::M42::M78::E31_CONST_4);
  v37_0->set_f_5(0x9382217);
  v37_0->add_f_19(s->substr(0, 3));
  v37_0->set_f_10(0x21308827);
  v37_0->set_f_11(0x299f);
  v37_0->set_f_8(0x13831e765a436241);
  v37_0->set_f_25(s->substr(0, 1));
  v37_0->set_f_13(s->substr(0, 4));
  v37_0->set_f_29(0xa6d);
  v37_0->set_f_1(s->substr(0, 7));
  v37_0->set_f_15(0x5c4b5ab7dff6d09b);
  message->set_f_28(s->substr(0, 262));
  message->set_f_3(0x4a03485d768482cb);
  Message0::M8* v38 = message->mutable_f_57();
  Message0::M8::M45* v39 = v38->mutable_f_7();
  v39->set_f_6(s->substr(0, 3403));
  v39->set_f_13(false);
  v39->set_f_26(0x6549013);
  v39->set_f_12(Message0::M8::M45::E14_CONST_1);
  v39->set_f_3(0x3bc171e90bc0582a);
  v39->set_f_18(s->substr(0, 23));
  v39->set_f_23(0x22);
  v39->set_f_17(0xf8427a);
  v39->set_f_22(0x3ebafce6ae6cb062);
  v39->add_f_24(Message0::M8::M45::E15_CONST_3);
  Message0::M8::M33* v40 = v38->mutable_f_3();
  v40->set_f_0(0x5e);
  v38->set_f_0(0xf69d1ae2de1eaa6);
  Message0::M8::M37* v41_0 = v38->add_f_4();
  (void)v41_0;  // Suppresses clang-tidy.
  Message0::M8::M38* v42 = v38->mutable_f_6();
  (void)v42;  // Suppresses clang-tidy.
  message->set_f_0(0x62);
  message->add_f_7(s->substr(0, 4));
  message->set_f_21(0x590fd073e51f06e1);
  message->set_f_11(0x6e);
  Message0::M3* v43_0 = message->add_f_47();
  Message0::M3::M14* v44 = v43_0->mutable_f_2();
  Message0::M3::M14::M56* v45 = v44->mutable_f_2();
  v45->set_f_0(0x546c48723151e109);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->add_f_7(s->substr(0, 7));
  message->set_f_2(0x2c);
  Message0::E1 array_0[10] = {
      Message0::E1_CONST_1, Message0::E1_CONST_3, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_5, Message0::E1_CONST_4,
      Message0::E1_CONST_5, Message0::E1_CONST_3, Message0::E1_CONST_2,
      Message0::E1_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_5(v);
  }
  message->set_f_3(0x487fbc90cbbdadcc);
  Message0::M7* v0 = message->mutable_f_54();
  v0->set_f_4(0x6a31cc3cedb21839);
  Message0::M7::M25* v1 = v0->mutable_f_20();
  v1->set_f_6(0x9fc3c55);
  v1->set_f_1(s->substr(0, 9));
  v1->set_f_0(s->substr(0, 4));
  v1->set_f_3(s->substr(0, 74));
  v0->set_f_12(false);
  Message0::M7::M17* v2 = v0->mutable_f_19();
  v2->set_f_0(0x5b66251c9980a455);
  v0->set_f_11(0x5703aa290d369fdc);
  v0->set_f_2(0x3148a07);
  Message0::M7::M47* v3 = v0->mutable_f_25();
  v3->set_f_0(0x66bfa77f91f2dc9a);
  v3->set_f_1(0x87380);
  v0->add_f_3(Message0::M7::E4_CONST_2);
  v0->set_f_9(0x3963b699ffb6820);
  v0->set_f_6(0x7f88e47476f58ee5);
  v0->set_f_0(s->substr(0, 20));
  v0->add_f_10(Message0::M7::E5_CONST_4);
  message->set_f_14(0x3fcdbdf76836c0b6);
  message->set_f_27(0x19);
  message->set_f_22(0x1ea28fad35ae2183);
  Message0::M1* v4 = message->mutable_f_45();
  v4->set_f_0(0x38);
  Message0::M1::M24* v5_0 = v4->add_f_2();
  v5_0->set_f_0(0xb881d75);
  Message0::M11* v6 = message->mutable_f_62();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_10(s->substr(0, 167));
  Message0::M6* v7 = message->mutable_f_53();
  Message0::M6::M29* v8_0 = v7->add_f_7();
  v8_0->set_f_0(0x17044288553a427e);
  Message0::M6::M29::M68* v9 = v8_0->mutable_f_3();
  v9->set_f_16(0x13aac7e3fea1fa2);
  v9->set_f_24(0x58);
  v9->set_f_18(s->substr(0, 11));
  v9->set_f_25(true);
  v9->set_f_5(0x42);
  v9->set_f_23(s->substr(0, 23));
  v9->set_f_19(s->substr(0, 13));
  v9->set_f_15(0x1360);
  v9->set_f_26(s->substr(0, 8));
  v9->set_f_2(s->substr(0, 21));
  v9->set_f_3(s->substr(0, 6));
  v9->set_f_0(0x2a5c7665fb4c2c71);
  v9->set_f_8(0x20f4113f30674a9f);
  v9->set_f_20(0x24ae1550e6e1231f);
  v9->set_f_14(false);
  Message0::M6::M34* v10_0 = v7->add_f_8();
  v10_0->set_f_2(0x50);
  Message0::M6::M34::M76* v11 = v10_0->mutable_f_7();
  Message0::M6::M34::M76::M79* v12 = v11->mutable_f_3();
  v12->set_f_0(s->substr(0, 6));
  v11->set_f_1(0x5727fc86cfc14e79);
  v10_0->set_f_0(0x2a4027539d9281a9);
  Message0::M6::M41* v13 = v7->mutable_f_10();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M6::M21* v14 = v7->mutable_f_5();
  (void)v14;  // Suppresses clang-tidy.
  v7->set_f_1(0x4460e34d197a9de8);
  Message0::M6::M40* v15_0 = v7->add_f_9();
  v15_0->set_f_3(0x22464ba388cecc8e);
  v15_0->set_f_0(0x3512);
  v15_0->set_f_1(0x697153121683c34);
  Message0::M6::M16* v16 = v7->mutable_f_3();
  v16->set_f_0(s->substr(0, 22));
  message->set_f_21(0x7c9657f2ed7588bf);
  message->set_f_1(0x17ceecc1);
  Message0::M8* v17 = message->mutable_f_57();
  Message0::M8::M45* v18 = v17->mutable_f_7();
  v18->set_f_5(0xa0c079e);
  v18->set_f_19(0x201425becd3d7db2);
  v18->add_f_24(Message0::M8::M45::E15_CONST_1);
  v18->set_f_1(0x29affa53);
  v18->set_f_8(0x43b36d3cf2fc7d68);
  v18->set_f_21(0x3522);
  v18->set_f_4(0x5e7c6e622ad6a6dc);
  v18->set_f_16(s->substr(0, 3402));
  v18->set_f_26(0x924e1);
  v18->set_f_23(0x1d8c);
  v18->set_f_27(0x3e);
  v18->set_f_20(s->substr(0, 12));
  v18->set_f_22(0x60bfdc2c4b7850bd);
  v18->set_f_14(s->substr(0, 1));
  v18->set_f_25(s->substr(0, 286));
  v18->add_f_0(Message0::M8::M45::E13_CONST_2);
  v18->set_f_7(0x340bde1210144c2d);
  Message0::M4* v19 = message->mutable_f_48();
  v19->set_f_0(0xe397a54);
  Message0::M4::M22* v20 = v19->mutable_f_4();
  Message0::M4::M22::M72* v21_0 = v20->add_f_3();
  (void)v21_0;  // Suppresses clang-tidy.
  Message0::M10* v22 = message->mutable_f_59();
  Message0::M10::M31* v23 = v22->mutable_f_6();
  v23->add_f_0(Message0::M10::M31::E7_CONST_4);
  Message0::M3* v24_0 = message->add_f_47();
  v24_0->set_f_0(0x146a500ceaec2e0);
  message->set_f_28(s->substr(0, 21));
  message->set_f_6(0x7fa3b532b0c5895a);
  Message0::M9* v25 = message->mutable_f_58();
  v25->set_f_0(s->substr(0, 4));
  v25->set_f_1(s->substr(0, 24));
  message->set_f_23(0x3d85395);
  message->set_f_19(s->substr(0, 2));
  message->set_f_18(0x1a);
  message->set_f_11(0x31);
  message->set_f_20(0x31);
  message->set_f_17(0x61c049c);
  message->set_f_30(Message0::E2_CONST_2);
  message->set_f_9(0x501efec19c27e220);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_46();
  v0_0->set_f_0(0x21cdea0);
  v0_0->set_f_2(0x61);
  Message0::M2::E3 array_0[22] = {
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_2,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_1,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_5,
      Message0::M2::E3_CONST_1, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_5,
      Message0::M2::E3_CONST_3, Message0::M2::E3_CONST_1,
      Message0::M2::E3_CONST_3, Message0::M2::E3_CONST_4,
      Message0::M2::E3_CONST_5, Message0::M2::E3_CONST_4,
  };
  for (auto v : array_0) {
    v0_0->add_f_6(v);
  }
  v0_0->set_f_5(0x4f);
  message->set_f_25(0x508d6c51);
  message->set_f_6(0x9476fe013b183c9);
  Message0::M12* v1 = message->mutable_f_63();
  Message0::M12::M49* v2_0 = v1->add_f_12();
  Message0::M12::M49::M64* v3 = v2_0->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  v2_0->set_f_1(false);
  v1->set_f_0(0x30);
  v1->set_f_2(0x27);
  Message0::M12::M18* v4 = v1->mutable_f_11();
  v4->add_f_0(s->substr(0, 1));
  message->set_f_10(s->substr(0, 338));
  Message0::M4* v5 = message->mutable_f_48();
  v5->set_f_0(0x97389f0);
  message->set_f_29(0x6d3bcfae);
  message->set_f_3(0x55973fdc7ba8a7a7);
  message->set_f_1(0x6d14624a);
  message->set_f_2(0x553b7);
  Message0::M8* v6 = message->mutable_f_57();
  Message0::M8::M26* v7 = v6->mutable_f_2();
  v7->set_f_3(s->substr(0, 4));
  Message0::M8::M45* v8 = v6->mutable_f_7();
  v8->set_f_12(Message0::M8::M45::E14_CONST_3);
  v8->set_f_11(s->substr(0, 19));
  v8->set_f_15(true);
  v8->set_f_20(s->substr(0, 22));
  v8->set_f_19(0x5ae61bc19d6a6e59);
  v8->set_f_23(0x18c5f5);
  v8->set_f_2(0x59);
  v8->set_f_14(s->substr(0, 21));
  v8->set_f_25(s->substr(0, 4));
  v8->set_f_4(0x54b9ae4013af3c2e);
  v8->set_f_6(s->substr(0, 30));
  Message0::M8::M33* v9 = v6->mutable_f_3();
  v9->set_f_0(0x2f);
  Message0::M8::M38* v10 = v6->mutable_f_6();
  v10->set_f_0(0xbd0dd49);
  message->set_f_21(0x5252d5c1b3e03f15);
  message->set_f_13(0x3928945e39013b50);
  message->set_f_4(0x403909ee4a428da);
  message->set_f_11(0x4dba1eb);
  Message0::M9* v11 = message->mutable_f_58();
  Message0::M9::M35* v12 = v11->mutable_f_3();
  v12->set_f_0(0x31bd9e746528bac0);
  Message0::M9::M35::M70* v13_0 = v12->add_f_3();
  (void)v13_0;  // Suppresses clang-tidy.
  v11->set_f_0(s->substr(0, 2195));
  v11->set_f_1(s->substr(0, 17));
  Message0::M9::M43* v14_0 = v11->add_f_8();
  v14_0->set_f_0(0x4b93032bef02087c);
  Message0::M9::M36* v15 = v11->mutable_f_6();
  v15->set_f_24(0x22);
  v15->set_f_0(0x15fea5e70f458505);
  v15->set_f_15(s->substr(0, 124));
  v15->set_f_21(Message0::M9::M36::E9_CONST_3);
  v15->set_f_23(0x57b7633a1a8a622c);
  v15->set_f_12(0x615703e);
  v15->set_f_3(0x1282f5);
  v15->set_f_10(0x68b847347b54ff93);
  v15->set_f_28(0x26);
  v15->set_f_18(0x7ecd72a7);
  v15->set_f_13(0x4af5a);
  v15->set_f_6(s->substr(0, 18));
  v15->set_f_8(s->substr(0, 3));
  Message0::M9::M36::E8 array_1[21] = {
      Message0::M9::M36::E8_CONST_2, Message0::M9::M36::E8_CONST_2,
      Message0::M9::M36::E8_CONST_2, Message0::M9::M36::E8_CONST_5,
      Message0::M9::M36::E8_CONST_4, Message0::M9::M36::E8_CONST_4,
      Message0::M9::M36::E8_CONST_5, Message0::M9::M36::E8_CONST_3,
      Message0::M9::M36::E8_CONST_5, Message0::M9::M36::E8_CONST_3,
      Message0::M9::M36::E8_CONST_3, Message0::M9::M36::E8_CONST_4,
      Message0::M9::M36::E8_CONST_1, Message0::M9::M36::E8_CONST_2,
      Message0::M9::M36::E8_CONST_3, Message0::M9::M36::E8_CONST_4,
      Message0::M9::M36::E8_CONST_4, Message0::M9::M36::E8_CONST_2,
      Message0::M9::M36::E8_CONST_3, Message0::M9::M36::E8_CONST_3,
      Message0::M9::M36::E8_CONST_5,
  };
  for (auto v : array_1) {
    v15->add_f_5(v);
  }
  v15->set_f_7(0x76a97abb067aa119);
  v15->set_f_1(s->substr(0, 211));
  v15->set_f_9(0xa3e1961);
  v15->set_f_26(s->substr(0, 362));
  message->set_f_23(0xd916467);
  Message0::M11* v16 = message->mutable_f_62();
  Message0::M11::M19* v17 = v16->mutable_f_2();
  v17->set_f_0(0x172af58f5b3f882);
  message->set_f_16(false);
  message->add_f_7(s->substr(0, 7));
  Message0::M7* v18 = message->mutable_f_54();
  Message0::M7::M39* v19 = v18->mutable_f_24();
  v19->set_f_1(0x6);
  v19->set_f_2(0x65a8b433db598b3b);
  v19->set_f_0(Message0::M7::M39::E10_CONST_3);
  v18->set_f_0(s->substr(0, 4));
  v18->set_f_13(0x109ec69);
  v18->set_f_1(0x1e);
  v18->set_f_8(s->substr(0, 2));
  v18->set_f_11(0x803f954f7702ed3);
  v18->set_f_5(s->substr(0, 17));
  v18->add_f_10(Message0::M7::E5_CONST_5);
  Message0::M7::M17* v20 = v18->mutable_f_19();
  v20->set_f_0(0x74815d4dbac95dc2);
  v18->set_f_12(false);
  v18->set_f_6(0x13611114faa83b83);
  v18->set_f_4(0x6f3196771eb58e76);
  message->set_f_26(s->substr(0, 26));
  Message0::E1 array_2[21] = {
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_4, Message0::E1_CONST_1, Message0::E1_CONST_1,
      Message0::E1_CONST_4, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_3, Message0::E1_CONST_5,
      Message0::E1_CONST_1, Message0::E1_CONST_5, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_1, Message0::E1_CONST_1,
      Message0::E1_CONST_4, Message0::E1_CONST_5, Message0::E1_CONST_3,
  };
  for (auto v : array_2) {
    message->add_f_5(v);
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
}  // namespace fleetbench::rpc::P3::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
