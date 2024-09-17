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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message2.pb.h"

namespace fleetbench::rpc::P9::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M17* v0 = message->mutable_f_66();
  v0->set_f_3(0x35737aa7b1cdd185);
  v0->set_f_5(0x57c66265c39784);
  Message2::M17::M19* v1 = v0->mutable_f_9();
  v1->set_f_0(0x3c572a3a93952ec0);
  v1->set_f_1(s->substr(0, 24));
  v1->set_f_2(0x1e569b);
  v1->set_f_3(s->substr(0, 13));
  v1->set_f_5(0x25ec);
  v0->set_f_1(0x3442f1561ba596e1);
  Message2::M9* v2 = message->mutable_f_56();
  Message2::M9::M23* v3 = v2->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  v2->set_f_0(s->substr(0, 7));
  Message2::M9::M48* v4_0 = v2->add_f_6();
  (void)v4_0;  // Suppresses clang-tidy.
  message->set_f_1(s->substr(0, 15));
  message->set_f_20(false);
  message->set_f_6(0x1f7a);
  Message2::M12* v5_0 = message->add_f_59();
  v5_0->set_f_1(0.387907);
  Message2::M12::M69* v6_0 = v5_0->add_f_10();
  v6_0->set_f_0(0x9fac12c);
  Message2::M12::M69::M80* v7 = v6_0->mutable_f_3();
  v7->set_f_10(0x2119f80a3005da49);
  v7->set_f_9(0x7533aea6);
  v7->set_f_8(0.522368);
  v7->set_f_5(0xaa3);
  v7->set_f_3(0x79);
  v7->set_f_14(s->substr(0, 103));
  v7->set_f_2(s->substr(0, 32));
  int32_t array_1[5] = {
      0x2e, 0x3a, 0x3b, 0x96dcb01, 0x72,
  };
  for (auto v : array_1) {
    v7->add_f_13(v);
  }
  Message2::M12::M46* v8 = v5_0->mutable_f_8();
  v8->set_f_0(s->substr(0, 19));
  Message2::M12::M46::M93* v9 = v8->mutable_f_5();
  Message2::M12::M46::M93::M102* v10 = v9->mutable_f_7();
  v10->set_f_0(0x62a120cb7afa47);
  int32_t array_2[15] = {
      0x64, 0x2c, 0x7a, 0xfda3bec, 0x43, 0x5e,      0x40,      0x71,
      0x77, 0x6a, 0x25, 0x3d,      0x71, 0x320b86e, 0x5cc2564,
  };
  for (auto v : array_2) {
    v9->add_f_0(v);
  }
  v9->set_f_2(0x16);
  Message2::M12::M49* v11_0 = v5_0->add_f_9();
  Message2::M12::M49::M88* v12 = v11_0->mutable_f_13();
  v12->set_f_0(0x1d9c);
  Message2::M12::M49::M88::M109* v13 = v12->mutable_f_3();
  v13->set_f_0(0x5ef18aa1910143);
  Message2::M12::M49::M88::M109::M118* v14 = v13->mutable_f_2();
  v14->set_f_0(0x58);
  v11_0->set_f_2(true);
  v11_0->set_f_3(0x44e0b0180ba4f880);
  v11_0->set_f_0(0x544f5e8bf2adf09d);
  v11_0->set_f_5(false);
  v11_0->set_f_1(0x1c9676);
  v11_0->set_f_4(0x1fc836ccc8904cf5);
  message->add_f_23(s->substr(0, 7));
  message->add_f_23(s->substr(0, 8));
  message->add_f_23(s->substr(0, 3));
  Message2::M13* v15 = message->mutable_f_60();
  v15->set_f_0(0x34be686b2fe73f0d);
  Message2::M14* v16_0 = message->add_f_61();
  v16_0->set_f_0(0x109a);
  Message2::M14::M38* v17 = v16_0->mutable_f_5();
  v17->set_f_0(s->substr(0, 79));
  Message2::M14::M39* v18 = v16_0->mutable_f_6();
  v18->set_f_1(s->substr(0, 10));
  v18->set_f_0(false);
  Message2::M14::M42* v19 = v16_0->mutable_f_7();
  (void)v19;  // Suppresses clang-tidy.
  message->set_f_2(0x599bba00008de5e3);
  Message2::M3* v20 = message->mutable_f_45();
  Message2::M3::M65* v21 = v20->mutable_f_10();
  v21->set_f_0(0x5a3dfe258fbdf818);
  Message2::M3::M65::M78* v22_0 = v21->add_f_4();
  Message2::M3::M65::M78::M116* v23 = v22_0->mutable_f_4();
  v23->set_f_0(s->substr(0, 5));
  Message2::M3::M65::M78::M114* v24 = v22_0->mutable_f_3();
  (void)v24;  // Suppresses clang-tidy.
  Message2::M3::M65::M92* v25_0 = v21->add_f_5();
  (void)v25_0;  // Suppresses clang-tidy.
  Message2::M3::M35* v26 = v20->mutable_f_7();
  v26->set_f_1(s->substr(0, 31));
  Message2::M3::M51* v27 = v20->mutable_f_9();
  (void)v27;  // Suppresses clang-tidy.
  Message2::M3::M47* v28 = v20->mutable_f_8();
  (void)v28;  // Suppresses clang-tidy.
  Message2::M3::M22* v29 = v20->mutable_f_3();
  Message2::M3::M22::M83* v30 = v29->mutable_f_2();
  v30->set_f_0(0x27ed);
  Message2::M3::M74* v31 = v20->mutable_f_11();
  v31->set_f_2(false);
  v31->set_f_5(true);
  v31->set_f_3(Message2::M3::M74::E7_CONST_3);
  Message2::M3::M74::M95* v32 = v31->mutable_f_9();
  (void)v32;  // Suppresses clang-tidy.
  Message2::M3::M74::M89* v33_0 = v31->add_f_7();
  (void)v33_0;  // Suppresses clang-tidy.
  message->set_f_4(false);
  message->set_f_21(0x460f3e6);
  message->set_f_27(0x78);
  message->set_f_14(0x7);
  Message2::M2* v34 = message->mutable_f_43();
  Message2::M2::M75* v35_0 = v34->add_f_4();
  v35_0->set_f_22(0xd2000a220212920);
  v35_0->set_f_20(s->substr(0, 289));
  v35_0->set_f_5(s->substr(0, 30));
  v35_0->set_f_23(0x6abfa6022c3cb467);
  v35_0->set_f_1(0x128c77708b916478);
  v35_0->set_f_15(false);
  v35_0->set_f_8(0x5086ba5a05dc5dc5);
  v35_0->set_f_6(0x41);
  v35_0->set_f_9(Message2::M2::M75::E8_CONST_4);
  v35_0->set_f_11(0xbe2e9dd777708ba);
  v35_0->set_f_7(s->substr(0, 201));
  v35_0->set_f_14(true);
  v35_0->set_f_25(0x7be249b824566ef);
  v35_0->set_f_18(0x283588cb51bb4bdf);
  v35_0->set_f_16(0x57e75063703daafb);
  v35_0->set_f_13(0x1d72ca97d576237e);
  v34->set_f_0(s->substr(0, 8));
  Message2::M2::M62* v36 = v34->mutable_f_3();
  v36->set_f_0(0x1de4);
  message->set_f_25(0x35);
  Message2::M10* v37 = message->mutable_f_57();
  Message2::M10::M43* v38_0 = v37->add_f_10();
  v38_0->set_f_1(0x49);
  Message2::M10::M57* v39 = v37->mutable_f_13();
  (void)v39;  // Suppresses clang-tidy.
  v37->set_f_1(0x62);
  v37->set_f_2(0x15);
  Message2::M10::M33* v40 = v37->mutable_f_8();
  (void)v40;  // Suppresses clang-tidy.
  Message2::M10::M67* v41_0 = v37->add_f_16();
  v41_0->set_f_0(0x27a1ee6c284e274e);
  v37->set_f_0(0xf);
  message->set_f_28(Message2::E2_CONST_1);
  message->set_f_3(0x50d4ff4e);
  message->set_f_9(0x32);
  Message2::M8* v42_0 = message->add_f_55();
  Message2::M8::M56* v43 = v42_0->mutable_f_14();
  v43->set_f_1(0x1a);
  Message2::M8::M61* v44_0 = v42_0->add_f_16();
  (void)v44_0;  // Suppresses clang-tidy.
  v42_0->set_f_0(0x76d12e40fda827fb);
  Message2::M8::M68* v45 = v42_0->mutable_f_18();
  v45->set_f_0(0x77a8bc3a7ae58a31);
  v42_0->set_f_3(0xc);
  v42_0->add_f_4(0x4);
  v42_0->set_f_2(0x55b94746695b2afe);
  Message2::M7* v46 = message->mutable_f_53();
  v46->set_f_0(true);
  Message2::M7::M32* v47 = v46->mutable_f_3();
  v47->set_f_0(0x4d);
  Message2::M7::M32::M86* v48 = v47->mutable_f_2();
  (void)v48;  // Suppresses clang-tidy.
  message->set_f_31(s->substr(0, 8));
  message->set_f_13(s->substr(0, 4));
  message->set_f_29(0x1649367aa7f08a8c);
  Message2::M4* v49 = message->mutable_f_46();
  v49->set_f_0(s->substr(0, 24));
  Message2::M4::M55* v50 = v49->mutable_f_4();
  v50->set_f_0(true);
  message->set_f_26(0x1e21);
  message->set_f_7(0x7c6f1);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M14* v0_0 = message->add_f_61();
  v0_0->set_f_0(0x1f);
  Message2::M14::M21* v1 = v0_0->mutable_f_3();
  Message2::M14::M21::M90* v2 = v1->mutable_f_3();
  v2->set_f_0(false);
  v1->set_f_0(0x1374);
  Message2::M14::M39* v3 = v0_0->mutable_f_6();
  v3->set_f_0(true);
  Message2::M14::M38* v4 = v0_0->mutable_f_5();
  Message2::M14::M38::M84* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  message->set_f_1(s->substr(0, 6));
  Message2::M6* v6_0 = message->add_f_52();
  v6_0->set_f_0(0x56690404c649344e);
  Message2::M11* v7_0 = message->add_f_58();
  v7_0->set_f_0(s->substr(0, 447));
  Message2::M11::M60* v8 = v7_0->mutable_f_2();
  v8->set_f_0(0x7da15a5b32312edb);
  v8->set_f_2(0xb);
  message->set_f_27(0x6);
  Message2::M15* v9_0 = message->add_f_63();
  Message2::M15::M20* v10 = v9_0->mutable_f_3();
  v10->set_f_0(0x60f7);
  v10->set_f_2(0x6a219538d60bb28b);
  v10->set_f_1(true);
  v10->set_f_3(0x3c);
  v10->set_f_5(true);
  Message2::M15::M27* v11_0 = v9_0->add_f_4();
  (void)v11_0;  // Suppresses clang-tidy.
  v9_0->set_f_0(0x581bbf0200058c7b);
  message->set_f_4(false);
  Message2::M1* v12 = message->mutable_f_42();
  Message2::M1::M71* v13 = v12->mutable_f_3();
  v13->set_f_0(false);
  v12->set_f_0(0x2c22b8a80d786fa1);
  message->set_f_9(0x5b295);
  message->set_f_29(0x312c5a3cec286303);
  message->set_f_2(0x2f9fce90588b797f);
  message->set_f_13(s->substr(0, 17));
  Message2::M16* v14_0 = message->add_f_65();
  v14_0->set_f_1(true);
  Message2::M16::M36* v15_0 = v14_0->add_f_8();
  Message2::M16::M36::M81* v16 = v15_0->mutable_f_3();
  v16->set_f_3(s->substr(0, 7));
  Message2::M16::M36::M81::M115* v17_0 = v16->add_f_10();
  v17_0->set_f_0(true);
  Message2::M16::M36::M81::M111* v18 = v16->mutable_f_9();
  v18->set_f_0(0x3add6708fd0e93e6);
  Message2::M16::M36::M79* v19_0 = v15_0->add_f_2();
  v19_0->set_f_5(0x39);
  v19_0->set_f_6(0x3d89);
  v19_0->set_f_1(0x191028dba322d300);
  Message2::M16::M29* v20 = v14_0->mutable_f_6();
  v20->set_f_0(s->substr(0, 22));
  v14_0->add_f_0(s->substr(0, 6));
  Message2::M16::M59* v21 = v14_0->mutable_f_10();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_30(0.452822);
  message->set_f_0(0x45);
  message->set_f_16(0x53e43e793ecf0e66);
  Message2::M18* v22 = message->mutable_f_67();
  Message2::M18::M72* v23 = v22->mutable_f_5();
  v23->set_f_0(0x54a71a0026fdb0f);
  Message2::M18::M73* v24_0 = v22->add_f_7();
  (void)v24_0;  // Suppresses clang-tidy.
  message->set_f_5(0x79);
  message->set_f_10(0x29565bbb05972dbf);
  Message2::M2* v25 = message->mutable_f_43();
  Message2::M2::M62* v26 = v25->mutable_f_3();
  v26->set_f_0(0x16);
  Message2::M2::M41* v27 = v25->mutable_f_2();
  (void)v27;  // Suppresses clang-tidy.
  message->set_f_6(0x7b);
  message->set_f_15(0x7288f75);
  message->set_f_7(0x241b);
  message->set_f_25(0x113c03);
  message->set_f_11(0x1c);
  message->set_f_26(0x2eec7e6);
  message->set_f_31(s->substr(0, 94));
  message->set_f_3(0x4585d796);
  Message2::M9* v28 = message->mutable_f_56();
  Message2::M9::M28* v29 = v28->mutable_f_4();
  v29->set_f_3(0.868442);
  v29->set_f_0(false);
  Message2::M9::M28::M87* v30 = v29->mutable_f_8();
  (void)v30;  // Suppresses clang-tidy.
  v28->set_f_0(s->substr(0, 499));
  Message2::M9::M48* v31_0 = v28->add_f_6();
  v31_0->set_f_0(0x1d);
  message->set_f_12(0x10);
  Message2::M17* v32 = message->mutable_f_66();
  v32->set_f_5(0x6ea0829a103edd12);
  v32->set_f_1(0x17a51a45201b97b3);
  Message2::M17::M19* v33 = v32->mutable_f_9();
  v33->set_f_3(s->substr(0, 261));
  v33->set_f_0(0x52a04c2fd79b243a);
  v33->set_f_5(0x52);
  v33->set_f_2(0x26);
  v32->set_f_4(s->substr(0, 382));
  v32->set_f_0(0x47);
  Message2::M10* v34 = message->mutable_f_57();
  Message2::M10::M67* v35_0 = v34->add_f_16();
  v35_0->set_f_0(0x128b9d9fd68b8546);
  Message2::M10::M33* v36 = v34->mutable_f_8();
  Message2::M10::M33::M97* v37 = v36->mutable_f_5();
  Message2::M10::M33::M97::M113* v38 = v37->mutable_f_4();
  Message2::M10::M33::M97::M113::M124* v39 = v38->mutable_f_4();
  (void)v39;  // Suppresses clang-tidy.
  v38->set_f_0(0.879529);
  Message2::M10::M45* v40_0 = v34->add_f_12();
  (void)v40_0;  // Suppresses clang-tidy.
  v34->set_f_0(0x17dc);
  Message2::M10::M57* v41 = v34->mutable_f_13();
  v41->set_f_0(0x21051ea);
  Message2::M10::M40* v42 = v34->mutable_f_9();
  v42->set_f_0(0x6f5d4f2e7dd435a);
  v34->set_f_2(0x3c);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_17(Message2::E1_CONST_4);
  Message2::M3* v0 = message->mutable_f_45();
  Message2::M3::M47* v1 = v0->mutable_f_8();
  v1->set_f_0(0x6);
  Message2::M3::M74* v2 = v0->mutable_f_11();
  v2->set_f_5(true);
  Message2::M3::M74::M89* v3_0 = v2->add_f_7();
  v3_0->set_f_0(false);
  v2->set_f_0(0x18d6);
  v2->set_f_3(Message2::M3::M74::E7_CONST_2);
  Message2::M3::M34* v4 = v0->mutable_f_6();
  v4->set_f_1(0x3ebb355671c9d3cf);
  v4->set_f_4(false);
  v4->set_f_0(0x59);
  v4->set_f_2(0x21);
  Message2::M3::M22* v5 = v0->mutable_f_3();
  Message2::M3::M22::M83* v6 = v5->mutable_f_2();
  v6->set_f_0(0x23);
  v5->set_f_0(0x1f);
  Message2::M3::M51* v7 = v0->mutable_f_9();
  Message2::M3::M51::E3 array_0[11] = {
      Message2::M3::M51::E3_CONST_4, Message2::M3::M51::E3_CONST_5,
      Message2::M3::M51::E3_CONST_2, Message2::M3::M51::E3_CONST_1,
      Message2::M3::M51::E3_CONST_2, Message2::M3::M51::E3_CONST_5,
      Message2::M3::M51::E3_CONST_3, Message2::M3::M51::E3_CONST_5,
      Message2::M3::M51::E3_CONST_3, Message2::M3::M51::E3_CONST_1,
      Message2::M3::M51::E3_CONST_5,
  };
  for (auto v : array_0) {
    v7->add_f_0(v);
  }
  v0->set_f_0(s->substr(0, 338));
  Message2::M13* v8 = message->mutable_f_60();
  v8->set_f_0(0x4a6d05b3591c1618);
  Message2::M13::M58* v9 = v8->mutable_f_3();
  v9->set_f_0(s->substr(0, 43));
  Message2::M13::M63* v10 = v8->mutable_f_4();
  Message2::M13::M63::M82* v11 = v10->mutable_f_9();
  v11->set_f_0(false);
  v10->set_f_0(true);
  v10->set_f_4(s->substr(0, 11));
  v10->set_f_1(s->substr(0, 322));
  message->set_f_6(0x22);
  Message2::M11* v12_0 = message->add_f_58();
  Message2::M11::M60* v13 = v12_0->mutable_f_2();
  v13->set_f_2(0x30);
  v13->set_f_0(0x4a643f1e586a1128);
  v13->set_f_3(s->substr(0, 32));
  message->set_f_14(0x174692);
  message->set_f_3(0x7539c997);
  Message2::M2* v14 = message->mutable_f_43();
  Message2::M2::M62* v15 = v14->mutable_f_3();
  v15->set_f_0(0x1f);
  Message2::M2::M75* v16_0 = v14->add_f_4();
  v16_0->set_f_27(s->substr(0, 21));
  v16_0->set_f_10(s->substr(0, 3));
  v16_0->set_f_16(0x4138d2957d87d76d);
  v16_0->set_f_19(0x3b);
  v16_0->set_f_18(0x5f0de64392bfa0cf);
  v16_0->set_f_14(false);
  v16_0->set_f_24(0x12ce52163b53eca2);
  v16_0->set_f_17(0x4d);
  v16_0->set_f_25(0x1d1f46dc7e6d36be);
  v16_0->set_f_26(0x18);
  v16_0->set_f_3(0x6f9b392857b1563b);
  v16_0->set_f_15(false);
  v16_0->set_f_12(0xbf2ed2154ee158a);
  v16_0->set_f_9(Message2::M2::M75::E8_CONST_1);
  v14->set_f_0(s->substr(0, 5));
  message->set_f_28(Message2::E2_CONST_1);
  message->set_f_5(0xb);
  message->set_f_2(0x44d2bfc40c40edd2);
  message->set_f_7(0x34);
  Message2::M7* v17 = message->mutable_f_53();
  Message2::M7::M32* v18 = v17->mutable_f_3();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_0(true);
  Message2::M7::M30* v19 = v17->mutable_f_2();
  v19->set_f_2(false);
  v19->set_f_0(s->substr(0, 7));
  v19->set_f_3(s->substr(0, 122));
  message->set_f_4(false);
  message->set_f_27(0x17a0e0);
  message->set_f_31(s->substr(0, 21));
  Message2::M14* v20_0 = message->add_f_61();
  Message2::M14::M38* v21 = v20_0->mutable_f_5();
  v21->set_f_0(s->substr(0, 1));
  Message2::M14::M38::M84* v22 = v21->mutable_f_4();
  v22->set_f_0(0xa6b50);
  Message2::M14::M21* v23 = v20_0->mutable_f_3();
  v23->set_f_0(0x34);
  message->set_f_22(0x26);
  message->set_f_16(0x2332cf63f9ec83b9);
  Message2::M5* v24 = message->mutable_f_50();
  Message2::M5::M25* v25 = v24->mutable_f_10();
  v25->set_f_0(0x26);
  Message2::M5::M24* v26 = v24->mutable_f_9();
  v26->set_f_20(0x34b7aff086682192);
  v26->set_f_10(0.829850);
  v26->set_f_8(0x5f87a09bcbfdf6ec);
  v26->set_f_16(0.371853);
  v26->set_f_2(0x60789852a90c42ed);
  v26->set_f_3(s->substr(0, 3));
  v26->set_f_11(0xae4f233);
  v26->set_f_27(true);
  v26->set_f_23(0xbbf3367c6da3546);
  int32_t array_1[18] = {
      0x18,      0x7b, 0xc672204, 0x5d, 0x60,      0x70,   0x4b, 0x3b, 0x67,
      0xc78b146, 0x69, 0x67,      0x64, 0xeb0c969, 0x1190, 0x24, 0x6,  0x56,
  };
  for (auto v : array_1) {
    v26->add_f_26(v);
  }
  v26->set_f_6(0x3);
  v26->set_f_22(0x2d6fe18b000f37a8);
  v26->set_f_9(0x1ad10737a4b0f5c5);
  v26->set_f_25(0xd89c9a416697a9b);
  Message2::M5::M53* v27 = v24->mutable_f_11();
  v27->set_f_0(0x1378858ace6b2a89);
  v24->set_f_1(0x57);
  v24->set_f_0(0x6b1feae575f1cee1);
  Message2::M8* v28_0 = message->add_f_55();
  Message2::M8::M68* v29 = v28_0->mutable_f_18();
  v29->set_f_0(0x77d2b8e86421f19f);
  int32_t array_2[8] = {
      0x4c, 0xf03ab60, 0x4b, 0x2c, 0x56, 0x76, 0x70, 0x36,
  };
  for (auto v : array_2) {
    v28_0->add_f_4(v);
  }
  Message2::M8::M54* v30 = v28_0->mutable_f_13();
  v30->set_f_5(s->substr(0, 20));
  v30->set_f_3(0x612cf162f5ea983c);
  v30->set_f_2(0x1545d5);
  v30->set_f_0(0x172844df);
  v28_0->set_f_3(0x64);
  Message2::M8::M61* v31_0 = v28_0->add_f_16();
  (void)v31_0;  // Suppresses clang-tidy.
  v28_0->set_f_0(0x493a007d9c85d01);
  v28_0->set_f_2(0x56b79248074b69d0);
  v28_0->set_f_1(s->substr(0, 15));
  message->set_f_15(0x22f2);
  message->set_f_24(0xe8518bd);
  message->set_f_19(false);
  message->set_f_12(0x13c411);
  Message2::M6* v32_0 = message->add_f_52();
  v32_0->set_f_0(0x2d342c52cbb80914);
  Message2::M6::M50* v33 = v32_0->mutable_f_4();
  (void)v33;  // Suppresses clang-tidy.
  Message2::M15* v34_0 = message->add_f_63();
  (void)v34_0;  // Suppresses clang-tidy.
  message->set_f_1(s->substr(0, 18));
  message->set_f_9(0x7c);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M5* v0 = message->mutable_f_50();
  Message2::M5::M25* v1 = v0->mutable_f_10();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M5::M24* v2 = v0->mutable_f_9();
  v2->set_f_10(0.485844);
  v2->set_f_16(0.557778);
  v2->set_f_7(0x516470ec);
  v2->set_f_17(0x1f43a8);
  v2->set_f_1(s->substr(0, 23));
  v2->set_f_14(0x390c1fa);
  v2->set_f_23(0x2f254027de7fee3b);
  v2->set_f_13(0x4f);
  v2->set_f_11(0xd3b4f97);
  v2->set_f_5(0x35);
  v2->set_f_20(0x16e4fc597bfaac6e);
  v2->set_f_8(0x6cb04ee25c60c233);
  v2->set_f_19(0x90293);
  v2->set_f_12(0x73);
  v2->set_f_21(0x2fc7c023a8ef3a24);
  v2->set_f_18(false);
  v2->set_f_25(0x6cf39309856601e8);
  v2->set_f_3(s->substr(0, 8));
  v2->set_f_9(0x20c448dede34751f);
  Message2::M5::M53* v3 = v0->mutable_f_11();
  v3->set_f_0(0x71b3890dc02c01b5);
  v0->set_f_2(s->substr(0, 12));
  message->set_f_27(0x894d36a);
  message->set_f_3(0x14cfa64a);
  Message2::M10* v4 = message->mutable_f_57();
  Message2::M10::M45* v5_0 = v4->add_f_12();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M10::M40* v6 = v4->mutable_f_9();
  (void)v6;  // Suppresses clang-tidy.
  Message2::M10::M57* v7 = v4->mutable_f_13();
  v7->set_f_0(0x949fa61);
  Message2::M10::M43* v8_0 = v4->add_f_10();
  v8_0->set_f_0(0x1a);
  v8_0->set_f_1(0x62);
  v4->set_f_0(0x3471);
  v4->set_f_2(0x5c);
  message->set_f_16(0x36cdbe20dca362f5);
  message->set_f_6(0xcd9732f);
  message->set_f_9(0x33b7);
  Message2::M6* v9_0 = message->add_f_52();
  Message2::M6::M50* v10 = v9_0->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_24(0x4b);
  message->set_f_25(0x72);
  Message2::M1* v11 = message->mutable_f_42();
  (void)v11;  // Suppresses clang-tidy.
  Message2::M16* v12_0 = message->add_f_65();
  Message2::M16::M37* v13 = v12_0->mutable_f_9();
  v13->set_f_0(0x11a5e01da5e1d6c9);
  v13->set_f_3(0x6a);
  Message2::M16::M29* v14 = v12_0->mutable_f_6();
  v14->set_f_0(s->substr(0, 6));
  Message2::M12* v15_0 = message->add_f_59();
  v15_0->set_f_0(0.288693);
  Message2::M12::M69* v16_0 = v15_0->add_f_10();
  (void)v16_0;  // Suppresses clang-tidy.
  Message2::M12::M46* v17 = v15_0->mutable_f_8();
  Message2::M12::M46::M93* v18 = v17->mutable_f_5();
  v18->set_f_1(0x35);
  Message2::M12::M46::M93::M102* v19 = v18->mutable_f_7();
  (void)v19;  // Suppresses clang-tidy.
  int32_t array_0[11] = {
      0x8, 0x5c, 0x48, 0x3b, 0x1ceace, 0x76, 0x55, 0x3b, 0x28, 0x70, 0xd6636e7,
  };
  for (auto v : array_0) {
    v18->add_f_0(v);
  }
  v17->set_f_0(s->substr(0, 3));
  Message2::M12::M49* v20_0 = v15_0->add_f_9();
  v20_0->set_f_4(0x1275c9e15c4e5730);
  v20_0->set_f_3(0x17ad6f60db0bcd22);
  v20_0->set_f_1(0x4);
  Message2::M12::M49::M88* v21 = v20_0->mutable_f_13();
  v21->set_f_0(0x6c);
  v20_0->set_f_5(true);
  message->add_f_23(s->substr(0, 7));
  message->set_f_4(false);
  Message2::M4* v22 = message->mutable_f_46();
  v22->set_f_0(s->substr(0, 122));
  message->set_f_28(Message2::E2_CONST_1);
  message->set_f_5(0x2a);
  Message2::M11* v23_0 = message->add_f_58();
  Message2::M11::M60* v24 = v23_0->mutable_f_2();
  v24->set_f_3(s->substr(0, 18));
  v24->add_f_1(Message2::M11::M60::E5_CONST_5);
  v24->set_f_2(0x2e);
  v23_0->set_f_0(s->substr(0, 11));
  Message2::M17* v25 = message->mutable_f_66();
  v25->set_f_0(0x87b39dc);
  v25->set_f_1(0x56db4f491aba5446);
  v25->set_f_3(0x4034c44488a311d1);
  v25->set_f_5(0x4687a3ad153ba3e4);
  v25->set_f_2(0x4dc9273d3d466083);
  Message2::M17::M19* v26 = v25->mutable_f_9();
  v26->set_f_0(0x38fc5bf4e78429b1);
  v26->set_f_2(0x4f);
  message->set_f_11(0x44);
  message->set_f_14(0x75);
  Message2::M8* v27_0 = message->add_f_55();
  Message2::M8::M31* v28 = v27_0->mutable_f_12();
  v28->set_f_0(s->substr(0, 18));
  Message2::M8::M68* v29 = v27_0->mutable_f_18();
  v29->set_f_0(0x77baeec04ad132c9);
  Message2::M8::M68::M91* v30 = v29->mutable_f_3();
  v30->set_f_0(0xc487d18);
  Message2::M8::M68::M91::M104* v31 = v30->mutable_f_2();
  v31->add_f_0(s->substr(0, 8));
  v31->set_f_2(0x5d);
  Message2::M8::M66* v32 = v27_0->mutable_f_17();
  v32->set_f_1(0x2c91dbda);
  Message2::M8::M61* v33_0 = v27_0->add_f_16();
  v33_0->set_f_0(0x470fddc84b0ee189);
  Message2::M8::M54* v34 = v27_0->mutable_f_13();
  v34->set_f_0(0x49b4f6c9);
  v34->set_f_3(0x27cb2938f78390e3);
  v34->set_f_4(0x97775c173d75a53);
  Message2::M8::M54::M98* v35 = v34->mutable_f_13();
  v35->set_f_0(s->substr(0, 15));
  Message2::M8::M54::M98::M106* v36 = v35->mutable_f_3();
  (void)v36;  // Suppresses clang-tidy.
  v27_0->set_f_1(s->substr(0, 111));
  Message2::M2* v37 = message->mutable_f_43();
  Message2::M2::M62* v38 = v37->mutable_f_3();
  v38->set_f_0(0xca4b0);
  Message2::M2::M75* v39_0 = v37->add_f_4();
  v39_0->set_f_5(s->substr(0, 21));
  v39_0->set_f_27(s->substr(0, 404));
  v39_0->set_f_6(0x5d);
  v39_0->set_f_12(0x75cc813a81600fa3);
  v39_0->set_f_15(true);
  v39_0->set_f_26(0x28);
  v39_0->set_f_11(0x31d5d4b8d6305370);
  v39_0->set_f_9(Message2::M2::M75::E8_CONST_5);
  v39_0->set_f_2(0x3130);
  v39_0->set_f_17(0x70);
  v39_0->set_f_10(s->substr(0, 1));
  v39_0->set_f_18(0x3d0ba898d16a8156);
  v39_0->set_f_1(0x1d21f061afb9a3ce);
  v39_0->set_f_4(0xaad);
  v39_0->set_f_14(true);
  v39_0->set_f_21(0x29);
  Message2::M2::M41* v40 = v37->mutable_f_2();
  v40->set_f_0(0x49);
  message->set_f_12(0x1);
  Message2::M18* v41 = message->mutable_f_67();
  (void)v41;  // Suppresses clang-tidy.
  message->set_f_20(false);
  message->set_f_29(0x78ae420a608d9b9f);
  message->set_f_15(0x1a2e);
  message->set_f_17(Message2::E1_CONST_5);
  Message2::M14* v42_0 = message->add_f_61();
  Message2::M14::M38* v43 = v42_0->mutable_f_5();
  Message2::M14::M38::M84* v44 = v43->mutable_f_4();
  v44->set_f_0(0x5d);
  Message2::M14::M39* v45 = v42_0->mutable_f_6();
  v45->set_f_1(s->substr(0, 360));
  Message2::M14::M42* v46 = v42_0->mutable_f_7();
  v46->set_f_0(s->substr(0, 45));
  message->set_f_19(true);
  Message2::M7* v47 = message->mutable_f_53();
  Message2::M7::M32* v48 = v47->mutable_f_3();
  v48->set_f_0(0x9);
  Message2::M9* v49 = message->mutable_f_56();
  v49->set_f_0(s->substr(0, 49));
  Message2::M9::M23* v50 = v49->mutable_f_3();
  (void)v50;  // Suppresses clang-tidy.
  Message2::M9::M28* v51 = v49->mutable_f_4();
  Message2::M9::M28::M87* v52 = v51->mutable_f_8();
  v52->set_f_0(Message2::M9::M28::M87::E10_CONST_2);
  v51->set_f_2(0x2f);
  v51->set_f_0(false);
  message->set_f_13(s->substr(0, 162));
  message->set_f_10(0x6f91373215b094cf);
  message->set_f_30(0.863088);
  message->set_f_8(s->substr(0, 154));
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
}  // namespace fleetbench::rpc::P9::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
