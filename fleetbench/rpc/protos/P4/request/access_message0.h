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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message0.pb.h"

namespace fleetbench::rpc::P4::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_11(0xc3128);
  message->set_f_25(0x5d);
  Message0::M14* v0 = message->mutable_f_71();
  v0->set_f_2(0x5b);
  v0->set_f_1(0x23007ff);
  Message0::M7* v1 = message->mutable_f_58();
  Message0::M7::M37* v2_0 = v1->add_f_6();
  v2_0->set_f_0(0x71ccb728);
  Message0::M7::M37::M63* v3 = v2_0->mutable_f_7();
  Message0::M7::M37::M63::M94* v4 = v3->mutable_f_3();
  v4->set_f_2(false);
  v4->set_f_0(s->substr(0, 491));
  v4->set_f_3(false);
  v4->set_f_1(0xc7d7dcf93f8faf1);
  v3->set_f_0(0x68f980f8633a5119);
  v1->set_f_1(0x3fb4190f);
  v1->set_f_0(0x46a1ea5acfb9a9ef);
  Message0::M7::M34* v5_0 = v1->add_f_4();
  v5_0->add_f_0(Message0::M7::M34::E12_CONST_2);
  Message0::M7::M36* v6 = v1->mutable_f_5();
  Message0::M7::M36::M40* v7_0 = v6->add_f_5();
  v7_0->set_f_0(0x2);
  v6->set_f_0(0x2a);
  v6->set_f_1(0x6a77ca687a140746);
  Message0::M7::M36::M82* v8 = v6->mutable_f_6();
  v8->set_f_0(0x357e31d9a88977f4);
  Message0::M15* v9_0 = message->add_f_73();
  v9_0->set_f_1(0x2a801d2646a24403);
  Message0::M15::M35* v10 = v9_0->mutable_f_3();
  Message0::M15::M35::M76* v11 = v10->mutable_f_9();
  v11->set_f_0(0x4cb7700e2c4ea241);
  Message0::M15::M35::M50* v12 = v10->mutable_f_7();
  Message0::M15::M35::M50::M88* v13 = v12->mutable_f_4();
  v13->set_f_2(0x431a9665c8505047);
  v13->set_f_3(false);
  v13->set_f_0(0x2e);
  v13->set_f_1(0x6eada090876990);
  v12->set_f_0(0x2dc31e2);
  message->set_f_23(0x49);
  message->set_f_4(0x43);
  message->set_f_14(0x1d80a49);
  message->set_f_31(0x3b);
  Message0::M9* v14 = message->mutable_f_62();
  Message0::M9::M22* v15 = v14->mutable_f_2();
  v15->set_f_0(s->substr(0, 36));
  v15->set_f_1(true);
  Message0::M9::M22::M61* v16_0 = v15->add_f_4();
  v16_0->set_f_0(0x1b);
  v14->set_f_0(0x3e71);
  Message0::M16* v17_0 = message->add_f_74();
  v17_0->set_f_0(0x5d3efe91fcf3aaea);
  Message0::M16::M19* v18_0 = v17_0->add_f_2();
  v18_0->set_f_0(0x4d);
  message->set_f_22(Message0::E3_CONST_5);
  message->set_f_28(0x9a2cc3510e);
  message->set_f_10(0x1879);
  message->set_f_13(s->substr(0, 4052));
  message->set_f_30(0x64b9fbd532c00e87);
  message->set_f_24(0x56ed2867c9dd15aa);
  Message0::M5* v19 = message->mutable_f_56();
  v19->set_f_0(0x55);
  v19->set_f_1(s->substr(0, 13));
  Message0::M6* v20 = message->mutable_f_57();
  v20->set_f_2(Message0::M6::E4_CONST_1);
  v20->set_f_0(false);
  message->set_f_8(s->substr(0, 6));
  message->set_f_9(0xb041470);
  message->set_f_2(0xdb5403515170c91);
  message->add_f_17(Message0::E2_CONST_3);
  Message0::M1* v21 = message->mutable_f_50();
  Message0::M1::M28* v22 = v21->mutable_f_2();
  v22->set_f_0(s->substr(0, 2));
  v21->set_f_0(false);
  Message0::M13* v23 = message->mutable_f_70();
  v23->set_f_0(true);
  Message0::M13::M31* v24 = v23->mutable_f_12();
  v24->set_f_0(0x94cf51b);
  Message0::M13::M31::M77* v25 = v24->mutable_f_3();
  (void)v25;  // Suppresses clang-tidy.
  Message0::M13::M31::M43* v26_0 = v24->add_f_2();
  (void)v26_0;  // Suppresses clang-tidy.
  v23->set_f_2(false);
  message->set_f_5(s->substr(0, 20));
  message->set_f_26(s->substr(0, 199));
  message->set_f_16(s->substr(0, 23034));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M14* v0 = message->mutable_f_71();
  v0->set_f_0(0x352b0628d50b82a5);
  v0->set_f_1(0xaec0559);
  v0->set_f_2(0x37);
  Message0::M4* v1 = message->mutable_f_55();
  v1->set_f_0(s->substr(0, 54));
  Message0::M4::M20* v2 = v1->mutable_f_2();
  v2->set_f_0(0xc86a6de);
  message->set_f_16(s->substr(0, 3741));
  message->set_f_4(0xf3f7fc7);
  message->set_f_26(s->substr(0, 171));
  Message0::M11* v3 = message->mutable_f_67();
  v3->set_f_0(0.967070);
  Message0::M11::M21* v4 = v3->mutable_f_2();
  v4->set_f_1(0x4b);
  v4->set_f_2(0x5a78a1ca11412775);
  message->set_f_28(0x2484aa10b66);
  Message0::M8* v5_0 = message->add_f_59();
  v5_0->set_f_0(0x5e689ce5);
  message->set_f_2(0x738cd41bf4b465a2);
  Message0::M2* v6_0 = message->add_f_52();
  (void)v6_0;  // Suppresses clang-tidy.
  message->set_f_12(0x85e688e);
  message->set_f_20(s->substr(0, 17));
  message->set_f_24(0x2cf10922a2d20ee2);
  message->set_f_15(0.554702);
  message->set_f_1(0x32);
  Message0::M13* v7 = message->mutable_f_70();
  Message0::M13::M29* v8_0 = v7->add_f_10();
  v8_0->set_f_0(0xc203b151fe55dfc);
  Message0::M13::M18* v9 = v7->mutable_f_7();
  Message0::M13::M18::M59* v10 = v9->mutable_f_2();
  Message0::M13::M18::M59::M89* v11 = v10->mutable_f_2();
  v11->set_f_0(0x4977d531);
  v10->set_f_0(0x46f1ec5b30f80309);
  Message0::M13::M23* v12 = v7->mutable_f_9();
  Message0::M13::M23::M73* v13_0 = v12->add_f_5();
  v13_0->set_f_1(0x73);
  v13_0->set_f_6(0x6d654fcb8187b5b7);
  v13_0->set_f_0(0xad25e);
  v13_0->set_f_4(0x26);
  v13_0->set_f_5(0x5a);
  v13_0->set_f_2(0xd8a);
  Message0::M13::M23::M72* v14 = v12->mutable_f_3();
  v14->set_f_1(0.245220);
  Message0::M13::M23::M72::M106* v15 = v14->mutable_f_3();
  v15->set_f_0(0.823192);
  v14->set_f_0(0x952908b);
  v7->set_f_1(s->substr(0, 22));
  v7->set_f_0(false);
  Message0::M13::M31* v16 = v7->mutable_f_12();
  Message0::M13::M31::M43* v17_0 = v16->add_f_2();
  v17_0->set_f_0(0x72a280bba1ffe6ef);
  v16->set_f_0(0x6d);
  Message0::M13::M31::M77* v18 = v16->mutable_f_3();
  v18->set_f_0(0x3a);
  Message0::M13::M31::M77::M87* v19 = v18->mutable_f_2();
  v19->set_f_0(s->substr(0, 2));
  v7->set_f_2(true);
  message->set_f_30(0x539fbc118104db5a);
  Message0::M7* v20 = message->mutable_f_58();
  Message0::M7::M34* v21_0 = v20->add_f_4();
  Message0::M7::M34::E12 array_0[22] = {
      Message0::M7::M34::E12_CONST_3, Message0::M7::M34::E12_CONST_1,
      Message0::M7::M34::E12_CONST_2, Message0::M7::M34::E12_CONST_2,
      Message0::M7::M34::E12_CONST_2, Message0::M7::M34::E12_CONST_5,
      Message0::M7::M34::E12_CONST_3, Message0::M7::M34::E12_CONST_3,
      Message0::M7::M34::E12_CONST_5, Message0::M7::M34::E12_CONST_2,
      Message0::M7::M34::E12_CONST_1, Message0::M7::M34::E12_CONST_4,
      Message0::M7::M34::E12_CONST_4, Message0::M7::M34::E12_CONST_5,
      Message0::M7::M34::E12_CONST_5, Message0::M7::M34::E12_CONST_4,
      Message0::M7::M34::E12_CONST_3, Message0::M7::M34::E12_CONST_5,
      Message0::M7::M34::E12_CONST_4, Message0::M7::M34::E12_CONST_5,
      Message0::M7::M34::E12_CONST_2, Message0::M7::M34::E12_CONST_1,
  };
  for (auto v : array_0) {
    v21_0->add_f_0(v);
  }
  v20->set_f_0(0x361a89d8c623d4b0);
  v20->set_f_1(0x71503a65);
  message->set_f_32(0x5d);
  message->set_f_25(0x59);
  message->set_f_6(0xb0b1fb8);
  message->set_f_13(s->substr(0, 14075));
  Message0::M9* v22 = message->mutable_f_62();
  Message0::M9::M22* v23 = v22->mutable_f_2();
  v23->set_f_0(s->substr(0, 24));
  v23->set_f_1(false);
  Message0::M5* v24 = message->mutable_f_56();
  v24->set_f_2(0xfda770f50069);
  v24->set_f_0(0x58);
  message->add_f_3(Message0::E1_CONST_5);
  message->set_f_31(0xc696f72);
  Message0::M10* v25_0 = message->add_f_63();
  Message0::M10::M26* v26_0 = v25_0->add_f_5();
  Message0::M10::M26::M74* v27 = v26_0->mutable_f_8();
  v27->set_f_0(s->substr(0, 15));
  Message0::M10::M26::M81* v28 = v26_0->mutable_f_11();
  Message0::M10::M26::M81::M102* v29 = v28->mutable_f_4();
  v29->set_f_0(0x3eefe3041d27897b);
  v28->set_f_0(s->substr(0, 6));
  v26_0->set_f_1(0x2d);
  Message0::M10::M26::M80* v30 = v26_0->mutable_f_10();
  v30->set_f_1(s->substr(0, 20));
  v30->set_f_0(0x4a);
  v26_0->set_f_0(0x6df1ae1ab1c32ca6);
  v25_0->set_f_3(0x5af464c574381fe0);
  Message0::M10::M30* v31 = v25_0->mutable_f_6();
  Message0::M10::M30::M42* v32 = v31->mutable_f_3();
  v32->set_f_0(s->substr(0, 7));
  Message0::M10::M30::M71* v33 = v31->mutable_f_8();
  v33->set_f_0(s->substr(0, 32));
  Message0::M10::M30::M71::M83* v34 = v33->mutable_f_3();
  v34->set_f_2(0x3066378e898);
  v34->set_f_0(false);
  v34->set_f_1(0x67b30de55fea86);
  v34->set_f_3(0x215d04a271280be3);
  Message0::M10::M30::M57* v35 = v31->mutable_f_5();
  v35->set_f_0(0x6962ed3da50fac56);
  Message0::M10::M30::M65* v36 = v31->mutable_f_6();
  v36->set_f_0(s->substr(0, 17));
  v31->set_f_0(0x578f1dcbda65957a);
  Message0::M3* v37 = message->mutable_f_53();
  v37->set_f_0(0x476ce4667);
  Message0::M3::M38* v38 = v37->mutable_f_4();
  Message0::M3::M38::M51* v39 = v38->mutable_f_4();
  v39->set_f_3(0x376149b2b39a001e);
  v39->set_f_4(false);
  v39->set_f_1(0x59ef6b90);
  v39->set_f_2(s->substr(0, 29));
  Message0::M3::M38::M47* v40_0 = v38->add_f_2();
  v40_0->set_f_0(0x5fd4140);
  Message0::M3::M38::M70* v41 = v38->mutable_f_5();
  Message0::M3::M38::M70::M96* v42_0 = v41->add_f_5();
  Message0::M3::M38::M70::M96::M115* v43 = v42_0->mutable_f_3();
  v43->set_f_0(0x3ad5c93845b74e79);
  v42_0->set_f_0(true);
  v41->set_f_0(false);
  message->add_f_17(Message0::E2_CONST_2);
  message->set_f_11(0x13);
  message->set_f_14(0xd);
  message->set_f_10(0x43e2e9d);
  message->set_f_21(0xe);
  Message0::M12* v44 = message->mutable_f_69();
  v44->set_f_1(0x14c5);
  v44->set_f_0(0x26fa2a5);
  v44->set_f_3(Message0::M12::E6_CONST_1);
  Message0::M12::M17* v45 = v44->mutable_f_9();
  v45->set_f_0(0x6255e5bf6c860ae7);
  Message0::M12::M17::M52* v46 = v45->mutable_f_2();
  Message0::M12::M17::M52::M104* v47 = v46->mutable_f_4();
  Message0::M12::M17::M52::M104::M112* v48 = v47->mutable_f_3();
  v48->set_f_7(Message0::M12::M17::M52::M104::M112::E28_CONST_4);
  v48->set_f_6(true);
  Message0::M12::M17::M52::M104::M112::E29 array_1[16] = {
      Message0::M12::M17::M52::M104::M112::E29_CONST_3,
      Message0::M12::M17::M52::M104::M112::E29_CONST_3,
      Message0::M12::M17::M52::M104::M112::E29_CONST_1,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
      Message0::M12::M17::M52::M104::M112::E29_CONST_3,
      Message0::M12::M17::M52::M104::M112::E29_CONST_5,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_3,
      Message0::M12::M17::M52::M104::M112::E29_CONST_1,
      Message0::M12::M17::M52::M104::M112::E29_CONST_5,
      Message0::M12::M17::M52::M104::M112::E29_CONST_1,
  };
  for (auto v : array_1) {
    v48->add_f_11(v);
  }
  v48->set_f_3(0x14);
  v48->set_f_12(0x27a2cda9c1bfd43e);
  v48->set_f_8(s->substr(0, 14));
  v48->set_f_5(s->substr(0, 20));
  v48->set_f_10(0x10878d9320704d);
  v48->set_f_2(0x20152ecd42cb4667);
  v48->set_f_13(0x6b);
  v47->set_f_1(0xc);
  v46->set_f_0(0x32889bed7e03b489);
  Message0::M12::M17::M52::M95* v49 = v46->mutable_f_2();
  (void)v49;  // Suppresses clang-tidy.
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_20(s->substr(0, 8));
  message->set_f_25(0x1f49);
  message->set_f_30(0x6658deb920d919b6);
  message->set_f_22(Message0::E3_CONST_5);
  message->set_f_12(0x384e914);
  Message0::M15* v0_0 = message->add_f_73();
  v0_0->set_f_0(0x17);
  message->set_f_31(0x6a);
  message->set_f_6(0x18);
  Message0::M3* v1 = message->mutable_f_53();
  Message0::M3::M38* v2 = v1->mutable_f_4();
  Message0::M3::M38::M79* v3_0 = v2->add_f_6();
  Message0::M3::M38::M79::M98* v4 = v3_0->mutable_f_7();
  Message0::M3::M38::M79::M98::M114* v5 = v4->mutable_f_2();
  v5->set_f_0(0xa7e21a2);
  v4->set_f_0(0x1d0c2c6965605d70);
  v3_0->set_f_0(0x7);
  v3_0->set_f_1(0x285a4ebceb9e5c69);
  v3_0->set_f_2(0x2892e63503cc215f);
  v2->set_f_0(s->substr(0, 22956));
  Message0::M3::M38::M51* v6 = v2->mutable_f_4();
  v6->set_f_1(0x7b558be1);
  v6->set_f_4(false);
  Message0::M3::M38::M70* v7 = v2->mutable_f_5();
  Message0::M3::M38::M70::M96* v8_0 = v7->add_f_5();
  (void)v8_0;  // Suppresses clang-tidy.
  v7->set_f_0(false);
  v7->set_f_1(true);
  Message0::M3::M27* v9 = v1->mutable_f_2();
  v9->set_f_3(0xc);
  v9->set_f_1(true);
  v9->set_f_12(0x78f);
  v9->set_f_26(0xe);
  Message0::M3::M27::M45* v10_0 = v9->add_f_45();
  v10_0->set_f_2(true);
  v10_0->set_f_7(0x7142826bd67ae268);
  v10_0->set_f_1(0.023189);
  v10_0->set_f_3(0x3bdb09841);
  v10_0->set_f_10(s->substr(0, 8));
  Message0::M3::M27::M45::M84* v11_0 = v10_0->add_f_16();
  Message0::M3::M27::M45::M84::M107* v12_0 = v11_0->add_f_2();
  v12_0->set_f_0(s->substr(0, 2));
  v10_0->add_f_8(Message0::M3::M27::M45::E18_CONST_1);
  v10_0->set_f_9(0x2d);
  v9->set_f_21(0x22429d4023e34642);
  v9->set_f_17(s->substr(0, 31));
  v9->set_f_29(false);
  v9->set_f_8(0xd9d2af0eeaa2957);
  v9->set_f_7(0x7c);
  v9->set_f_23(true);
  v9->set_f_4(0xf5061ec);
  v9->set_f_18(true);
  v9->set_f_20(0x7a05095c1aaeafb1);
  v9->set_f_14(0xcfea13);
  v9->set_f_0(Message0::M3::M27::E8_CONST_4);
  v9->set_f_6(0x7407c79ded8d50c1);
  v9->set_f_16(0x25d74868);
  v9->set_f_19(0x67efab1aa2293c14);
  v9->set_f_28(0x526afd26509d0e98);
  v9->set_f_13(s->substr(0, 29));
  v1->set_f_0(0x19adc9a62dc1d);
  message->add_f_3(Message0::E1_CONST_4);
  Message0::M11* v13 = message->mutable_f_67();
  v13->set_f_0(0.021543);
  Message0::M11::M21* v14 = v13->mutable_f_2();
  v14->set_f_3(s->substr(0, 16));
  v14->set_f_1(0x93b22);
  message->set_f_19(0x57);
  message->set_f_21(0xf0276b8);
  message->set_f_9(0x15);
  message->set_f_18(s->substr(0, 22));
  Message0::E2 array_0[22] = {
      Message0::E2_CONST_1, Message0::E2_CONST_1, Message0::E2_CONST_5,
      Message0::E2_CONST_1, Message0::E2_CONST_4, Message0::E2_CONST_4,
      Message0::E2_CONST_1, Message0::E2_CONST_1, Message0::E2_CONST_1,
      Message0::E2_CONST_4, Message0::E2_CONST_5, Message0::E2_CONST_2,
      Message0::E2_CONST_3, Message0::E2_CONST_3, Message0::E2_CONST_4,
      Message0::E2_CONST_4, Message0::E2_CONST_4, Message0::E2_CONST_3,
      Message0::E2_CONST_3, Message0::E2_CONST_2, Message0::E2_CONST_5,
      Message0::E2_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_17(v);
  }
  message->set_f_16(s->substr(0, 24873));
  message->set_f_32(0x1b);
  Message0::M12* v15 = message->mutable_f_69();
  v15->set_f_3(Message0::M12::E6_CONST_4);
  Message0::M12::M17* v16 = v15->mutable_f_9();
  v16->set_f_0(0x4c38f5f9195c028c);
  Message0::M12::M17::M52* v17 = v16->mutable_f_2();
  v17->set_f_0(0x63064a75e9bf6bd4);
  Message0::M12::M17::M52::M95* v18 = v17->mutable_f_2();
  v18->set_f_0(true);
  Message0::M12::M17::M52::M104* v19 = v17->mutable_f_4();
  Message0::M12::M17::M52::M104::M112* v20 = v19->mutable_f_3();
  Message0::M12::M17::M52::M104::M112::E29 array_1[12] = {
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_1,
      Message0::M12::M17::M52::M104::M112::E29_CONST_3,
      Message0::M12::M17::M52::M104::M112::E29_CONST_2,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
      Message0::M12::M17::M52::M104::M112::E29_CONST_5,
      Message0::M12::M17::M52::M104::M112::E29_CONST_1,
      Message0::M12::M17::M52::M104::M112::E29_CONST_4,
  };
  for (auto v : array_1) {
    v20->add_f_11(v);
  }
  v20->set_f_4(s->substr(0, 343));
  v20->set_f_2(0xa3b62f87560ee68);
  v20->set_f_8(s->substr(0, 58));
  v20->set_f_7(Message0::M12::M17::M52::M104::M112::E28_CONST_5);
  v20->set_f_3(0x34ee);
  v20->set_f_6(false);
  v19->set_f_0(0x54da37c);
  v19->set_f_1(0x28);
  v15->set_f_0(0xcddd406);
  message->set_f_5(s->substr(0, 6));
  Message0::M13* v21 = message->mutable_f_70();
  Message0::M13::M23* v22 = v21->mutable_f_9();
  v22->set_f_0(0x4336c0772753af68);
  Message0::M13::M31* v23 = v21->mutable_f_12();
  Message0::M13::M31::M43* v24_0 = v23->add_f_2();
  v24_0->set_f_0(0x65af61443900f0ab);
  v23->set_f_0(0x1d);
  v21->set_f_0(true);
  v21->set_f_1(s->substr(0, 3));
  message->set_f_11(0xb);
  message->set_f_8(s->substr(0, 58));
  message->set_f_15(0.592898);
  message->set_f_0(true);
  Message0::M8* v25_0 = message->add_f_59();
  v25_0->set_f_0(0x660164d2);
  message->set_f_13(s->substr(0, 2289));
  Message0::M2* v26_0 = message->add_f_52();
  (void)v26_0;  // Suppresses clang-tidy.
  Message0::M16* v27_0 = message->add_f_74();
  Message0::M16::M19* v28_0 = v27_0->add_f_2();
  v28_0->set_f_0(0x6319b16);
  v27_0->set_f_0(0x128f853f177cade4);
  message->set_f_28(0xe6f437dac36800);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(true);
  message->set_f_21(0x89d5337);
  message->set_f_30(0x108fed14d9971708);
  message->set_f_25(0x54fb813);
  Message0::M6* v0 = message->mutable_f_57();
  v0->set_f_1(0x996f9746811989a);
  v0->set_f_0(true);
  message->set_f_10(0x45468c1);
  Message0::E1 array_0[7] = {
      Message0::E1_CONST_5, Message0::E1_CONST_1, Message0::E1_CONST_3,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_4,
      Message0::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_3(v);
  }
  Message0::M9* v1 = message->mutable_f_62();
  v1->set_f_0(0x71);
  message->set_f_14(0xe7289b7);
  message->set_f_8(s->substr(0, 29));
  Message0::M14* v2 = message->mutable_f_71();
  v2->set_f_2(0xad2aa);
  v2->set_f_1(0x33);
  message->set_f_1(0x19);
  Message0::M10* v3_0 = message->add_f_63();
  v3_0->set_f_0(Message0::M10::E5_CONST_5);
  Message0::M10::M30* v4 = v3_0->mutable_f_6();
  v4->set_f_0(0x59112c164b975429);
  Message0::M10::M30::M65* v5 = v4->mutable_f_6();
  v5->set_f_0(s->substr(0, 2));
  Message0::M10::M30::M71* v6 = v4->mutable_f_8();
  Message0::M10::M30::M71::M83* v7 = v6->mutable_f_3();
  v7->set_f_2(0x5af15fba9081b);
  v7->set_f_0(true);
  Message0::M10::M30::M42* v8 = v4->mutable_f_3();
  v8->set_f_0(s->substr(0, 12));
  v8->set_f_1(s->substr(0, 63));
  Message0::M10::M26* v9_0 = v3_0->add_f_5();
  v9_0->set_f_1(0x51);
  v9_0->set_f_2(0.363042);
  Message0::M10::M26::M81* v10 = v9_0->mutable_f_11();
  Message0::M10::M26::M81::M91* v11 = v10->mutable_f_3();
  v11->set_f_13(0x6734b127);
  Message0::M10::M26::M81::M91::M116* v12 = v11->mutable_f_19();
  v12->set_f_1(Message0::M10::M26::M81::M91::M116::E30_CONST_5);
  Message0::M10::M26::M81::M91::M116::M120* v13 = v12->mutable_f_4();
  v13->set_f_4(0x1e726f30);
  v13->set_f_0(0x6c);
  v11->set_f_9(0x621093e59ae98b42);
  v11->set_f_2(true);
  v11->set_f_4(Message0::M10::M26::M81::M91::E23_CONST_3);
  v11->set_f_6(0x454a12d00eca7fb7);
  v11->set_f_10(0x4e8f371e);
  v11->set_f_1(s->substr(0, 126));
  v10->set_f_0(s->substr(0, 53));
  Message0::M10::M26::M81::M102* v14 = v10->mutable_f_4();
  (void)v14;  // Suppresses clang-tidy.
  Message0::M10::M26::M80* v15 = v9_0->mutable_f_10();
  v15->set_f_2(0x387e822b44cbb8ae);
  v9_0->set_f_0(0x59ca37e33534e03a);
  Message0::M5* v16 = message->mutable_f_56();
  v16->set_f_0(0x76);
  v16->set_f_3(0x35);
  v16->set_f_2(0x179ac05f3);
  Message0::M1* v17 = message->mutable_f_50();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_15(0.884757);
  message->set_f_31(0x7b);
  Message0::E2 array_1[21] = {
      Message0::E2_CONST_3, Message0::E2_CONST_5, Message0::E2_CONST_1,
      Message0::E2_CONST_3, Message0::E2_CONST_3, Message0::E2_CONST_5,
      Message0::E2_CONST_1, Message0::E2_CONST_3, Message0::E2_CONST_2,
      Message0::E2_CONST_4, Message0::E2_CONST_4, Message0::E2_CONST_1,
      Message0::E2_CONST_5, Message0::E2_CONST_5, Message0::E2_CONST_4,
      Message0::E2_CONST_1, Message0::E2_CONST_2, Message0::E2_CONST_3,
      Message0::E2_CONST_5, Message0::E2_CONST_4, Message0::E2_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_17(v);
  }
  message->set_f_19(0xdb33830);
  Message0::M3* v18 = message->mutable_f_53();
  Message0::M3::M27* v19 = v18->mutable_f_2();
  v19->set_f_22(s->substr(0, 7));
  v19->set_f_27(true);
  v19->set_f_26(0x31);
  v19->set_f_12(0x4);
  v19->set_f_11(s->substr(0, 3758));
  v19->set_f_1(true);
  v19->set_f_24(true);
  v19->set_f_23(true);
  v19->set_f_21(0x32884def39d8e9ec);
  v19->set_f_29(false);
  v19->set_f_30(0x3df8463b781e16a9);
  v19->set_f_9(s->substr(0, 484));
  v19->set_f_15(false);
  v19->set_f_10(s->substr(0, 1));
  v19->set_f_17(s->substr(0, 3303));
  Message0::M3::M38* v20 = v18->mutable_f_4();
  Message0::M3::M38::M47* v21_0 = v20->add_f_2();
  v21_0->set_f_0(0x137d71);
  v20->set_f_0(s->substr(0, 452));
  Message0::M3::M38::M70* v22 = v20->mutable_f_5();
  Message0::M3::M38::M70::M96* v23_0 = v22->add_f_5();
  v23_0->set_f_0(false);
  message->set_f_23(0xc8906a5);
  message->set_f_32(0x3c);
  message->set_f_24(0x42e424322fdc38aa);
  Message0::M15* v24_0 = message->add_f_73();
  (void)v24_0;  // Suppresses clang-tidy.
  message->set_f_28(0x1a98ad8fc);
  message->set_f_2(0x67209eaecbcf3e66);
  message->set_f_5(s->substr(0, 37));
  Message0::M2* v25_0 = message->add_f_52();
  (void)v25_0;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P4::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
