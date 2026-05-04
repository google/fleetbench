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

#include "fleetbench/proto/access_message17.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message17.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message17_Set_1(Message17* message, std::string* s) {
  Message17::M1* v0_0 = message->add_f_2();
  Message17::M1::M10* v1 = v0_0->mutable_f_4();
  Message17::M1::M10::M14* v2_0 = v1->add_f_2();
  v2_0->add_f_0(Message17::M1::M10::M14::E4_CONST_4);
  Message17::M1::M10::M14::M26* v3 = v2_0->mutable_f_3();
  v3->set_f_0(Message17::M1::M10::M14::M26::E7_CONST_3);
  Message17::M1::M10::M14::M26::M40* v4 = v3->mutable_f_2();
  v4->set_f_8(s->substr(0, 4));
  v4->set_f_10(s->substr(0, 2));
  v4->set_f_1(s->substr(0, 18));
  Message17::M1::M10::M14::M26::M40::M44* v5_0 = v4->add_f_16();
  v5_0->set_f_0(0.997986);
  Message17::M1::M10::M14::M26::M40::M44::M51* v6 = v5_0->mutable_f_2();
  v6->set_f_0(s->substr(0, 14));
  v4->set_f_2(0x22);
  v4->set_f_5(s->substr(0, 4));
  v4->set_f_0(true);
  v4->set_f_7(s->substr(0, 111));
  v4->set_f_9(0x64c69a131c9e23);
  v4->set_f_3(0.113071);
  Message17::M3* v7 = message->mutable_f_4();
  Message17::M3::M7* v8 = v7->mutable_f_5();
  v8->set_f_0(Message17::M3::M7::E2_CONST_2);
  v7->set_f_1(0.740864);
  Message17::M3::M9* v9 = v7->mutable_f_6();
  Message17::M3::M9::M12* v10 = v9->mutable_f_2();
  Message17::M3::M9::M12::M20* v11 = v10->mutable_f_6();
  Message17::M3::M9::M12::M20::M35* v12_0 = v11->add_f_3();
  v12_0->set_f_0(0x1cd678f8a97dcf87);
  v11->set_f_0(s->substr(0, 54));
  Message17::M3::M9::M12::M20::M31* v13 = v11->mutable_f_2();
  v13->set_f_0(true);
  Message17::M3::M9::M12::M19* v14 = v10->mutable_f_4();
  v14->set_f_0(s->substr(0, 5));
  Message17::M3::M9::M12::M29* v15_0 = v10->add_f_7();
  Message17::M3::M9::M12::M29::M33* v16 = v15_0->mutable_f_4();
  Message17::M3::M9::M12::M29::M33::M48* v17_0 = v16->add_f_4();
  v17_0->set_f_0(Message17::M3::M9::M12::M29::M33::M48::E11_CONST_3);
  v17_0->set_f_1(s->substr(0, 68));
  v17_0->set_f_2(s->substr(0, 1));
  Message17::M3::M9::M12::M29::M37* v18_0 = v15_0->add_f_6();
  Message17::M3::M9::M12::M29::M37::M41* v19_0 = v18_0->add_f_4();
  v19_0->set_f_1(0x6a);
  v19_0->set_f_0(0x4569bf7db491);
  Message17::M3::M9::M12::M30* v20_0 = v10->add_f_8();
  Message17::M3::M9::M12::M30::M38* v21 = v20_0->mutable_f_2();
  v21->set_f_0(Message17::M3::M9::M12::M30::M38::E9_CONST_1);
  Message17::M3::M9::M12::M30::M38::M47* v22 = v21->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52* v23 = v22->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61* v24_0 = v23->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62* v25 =
      v24_0->mutable_f_6();
  (void)v25;  // Suppresses clang-tidy.
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63* v26 =
      v24_0->mutable_f_8();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66* v27 =
      v26->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67* v28 =
      v27->mutable_f_5();
  (void)v28;  // Suppresses clang-tidy.
  v22->set_f_0(0.805859);
  Message17::M3::M9::M12::M18* v29 = v10->mutable_f_3();
  v29->set_f_1(s->substr(0, 36));
  v9->set_f_0(0x91ae962874bcab);
  Message17::M3::M9::M15* v30 = v9->mutable_f_3();
  v30->set_f_5(0x2f);
  Message17::M3::M9::M15::M23* v31 = v30->mutable_f_15();
  Message17::M3::M9::M15::M23::M34* v32_0 = v31->add_f_6();
  Message17::M3::M9::M15::M23::M34::M46* v33 = v32_0->mutable_f_4();
  Message17::M3::M9::M15::M23::M34::M46::M53* v34_0 = v33->add_f_5();
  (void)v34_0;  // Suppresses clang-tidy.
  v31->set_f_0(0x48);
  Message17::M3::M9::M15::M23::M32* v35_0 = v31->add_f_3();
  (void)v35_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M17* v36_0 = v30->add_f_14();
  Message17::M3::M9::M15::M17::M36* v37 = v36_0->mutable_f_3();
  v37->set_f_1(0x53);
  Message17::M3::M9::M15::M17::M36::M43* v38 = v37->mutable_f_5();
  v38->set_f_0(0.297440);
  v38->set_f_1(0x1f19a1a3);
  v37->set_f_0(s->substr(0, 10));
  v36_0->set_f_0(0.610415);
  v30->set_f_6(Message17::M3::M9::M15::E5_CONST_5);
  v30->set_f_8(0x3a);
  v7->set_f_2(s->substr(0, 4));
  Message17::M2* v39_0 = message->add_f_3();
  int32_t array_1[7] = {
      0xedce67, 0xdea6f6, 0xed13c3a, 0xf75c4, 0x9f44310, 0xeb1a857, 0x26820,
  };
  for (auto v : array_1) {
    v39_0->add_f_0(v);
  }
  Message17::M2::M8* v40 = v39_0->mutable_f_3();
  v40->set_f_1(0x16ddc9fad0f1a);
  Message17::M2::M6* v41 = v39_0->mutable_f_2();
  Message17::M2::M6::M16* v42_0 = v41->add_f_3();
  (void)v42_0;  // Suppresses clang-tidy.
}
void Message17_Set_2(Message17* message, std::string* s) {
  Message17::M1* v0_0 = message->add_f_2();
  Message17::M1::M10* v1 = v0_0->mutable_f_4();
  Message17::M1::M10::M14* v2_0 = v1->add_f_2();
  Message17::M1::M10::M14::E4 array_0[5] = {
      Message17::M1::M10::M14::E4_CONST_2, Message17::M1::M10::M14::E4_CONST_5,
      Message17::M1::M10::M14::E4_CONST_2, Message17::M1::M10::M14::E4_CONST_5,
      Message17::M1::M10::M14::E4_CONST_1,
  };
  for (auto v : array_0) {
    v2_0->add_f_0(v);
  }
  Message17::M1::M10::M14::M26* v3 = v2_0->mutable_f_3();
  Message17::M1::M10::M14::M26::M40* v4 = v3->mutable_f_2();
  v4->set_f_7(s->substr(0, 2));
  v4->set_f_0(true);
  v4->set_f_9(0xf5e36d07562f11);
  v4->set_f_10(s->substr(0, 6));
  Message17::M1::M10::M14::M26::M40::M44* v5_0 = v4->add_f_16();
  Message17::M1::M10::M14::M26::M40::M44::M51* v6 = v5_0->mutable_f_2();
  (void)v6;  // Suppresses clang-tidy.
  Message17::M1::M10::M14::M26::M40::M44* v5_1 = v4->add_f_16();
  v5_1->set_f_0(0.369563);
  v4->set_f_1(s->substr(0, 5));
  Message17::M1::M10::M14* v2_1 = v1->add_f_2();
  Message17::M1::M10::M14::M26* v7 = v2_1->mutable_f_3();
  Message17::M1::M10::M14::M26::M40* v8 = v7->mutable_f_2();
  v8->set_f_2(0x69);
  Message17::M1::M10::M14::M26::M40::M44* v9_0 = v8->add_f_16();
  Message17::M1::M10::M14::M26::M40::M44::M51* v10 = v9_0->mutable_f_2();
  v10->set_f_2(0xb2fac76);
  Message17::M1::M10::M14::M26::M40::M44* v9_1 = v8->add_f_16();
  (void)v9_1;  // Suppresses clang-tidy.
  v8->set_f_9(0x1f47bb1a4030f);
  v8->set_f_4(0xc001206);
  v8->set_f_7(s->substr(0, 14));
  v8->set_f_6(0x2c);
  v8->set_f_0(true);
  v7->set_f_0(Message17::M1::M10::M14::M26::E7_CONST_5);
  Message17::M1::M10::M14::E4 array_1[10] = {
      Message17::M1::M10::M14::E4_CONST_2, Message17::M1::M10::M14::E4_CONST_3,
      Message17::M1::M10::M14::E4_CONST_4, Message17::M1::M10::M14::E4_CONST_5,
      Message17::M1::M10::M14::E4_CONST_2, Message17::M1::M10::M14::E4_CONST_4,
      Message17::M1::M10::M14::E4_CONST_2, Message17::M1::M10::M14::E4_CONST_3,
      Message17::M1::M10::M14::E4_CONST_3, Message17::M1::M10::M14::E4_CONST_4,
  };
  for (auto v : array_1) {
    v2_1->add_f_0(v);
  }
  Message17::M1::M5* v11 = v0_0->mutable_f_3();
  v11->set_f_0(0x26d63002e496436d);
  Message17::M3* v12 = message->mutable_f_4();
  v12->set_f_0(0x68);
  Message17::M3::M7* v13 = v12->mutable_f_5();
  (void)v13;  // Suppresses clang-tidy.
  Message17::M3::M9* v14 = v12->mutable_f_6();
  v14->set_f_0(0x5970);
  Message17::M3::M9::M12* v15 = v14->mutable_f_2();
  Message17::M3::M9::M12::M20* v16 = v15->mutable_f_6();
  Message17::M3::M9::M12::M20::M35* v17_0 = v16->add_f_3();
  Message17::M3::M9::M12::M20::M35::M42* v18 = v17_0->mutable_f_2();
  Message17::M3::M9::M12::M20::M35::M42::M55* v19 = v18->mutable_f_3();
  v19->set_f_0(0x4f);
  Message17::M3::M9::M12::M20::M35* v17_1 = v16->add_f_3();
  (void)v17_1;  // Suppresses clang-tidy.
  Message17::M3::M9::M12::M20::M31* v20 = v16->mutable_f_2();
  v20->set_f_0(true);
  Message17::M3::M9::M12::M29* v21_0 = v15->add_f_7();
  Message17::M3::M9::M12::M29::M37* v22_0 = v21_0->add_f_6();
  Message17::M3::M9::M12::M29::M37::M41* v23_0 = v22_0->add_f_4();
  v23_0->set_f_0(0x19a5ff);
  v22_0->set_f_0(0x47);
  Message17::M3::M9::M12::M29::M33* v24 = v21_0->mutable_f_4();
  Message17::M3::M9::M12::M29::M33::M48* v25_0 = v24->add_f_4();
  v25_0->set_f_1(s->substr(0, 32));
  v15->set_f_0(s->substr(0, 4));
  Message17::M3::M9::M12::M18* v26 = v15->mutable_f_3();
  v26->set_f_0(0.119860);
  v26->set_f_1(s->substr(0, 16));
  Message17::M3::M9::M12::M30* v27_0 = v15->add_f_8();
  Message17::M3::M9::M12::M30::M38* v28 = v27_0->mutable_f_2();
  v28->set_f_0(Message17::M3::M9::M12::M30::M38::E9_CONST_5);
  Message17::M3::M9::M12::M30::M38::M47* v29 = v28->mutable_f_3();
  v29->set_f_0(0.306033);
  Message17::M3::M9::M12::M30::M38::M47::M52* v30 = v29->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61* v31_0 = v30->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63* v32 =
      v31_0->mutable_f_8();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66* v33 =
      v32->mutable_f_3();
  v33->set_f_0(true);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67* v34 =
      v33->mutable_f_5();
  v34->set_f_0(Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
                   E16_CONST_5);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68* v35_0 =
      v34->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69*
      v36 = v35_0->mutable_f_2();
  v36->set_f_0(0x28);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69::M70*
      v37_0 = v36->add_f_3();
  v37_0->set_f_1(s->substr(0, 102));
  v35_0->set_f_0(0xd154b17);
  v32->set_f_0(s->substr(0, 4));
  v31_0->set_f_2(0xf5f0c94);
  v31_0->set_f_0(s->substr(0, 6));
  Message17::M3::M9::M15* v38 = v14->mutable_f_3();
  Message17::M3::M9::M15::M17* v39_0 = v38->add_f_14();
  Message17::M3::M9::M15::M17::M36* v40 = v39_0->mutable_f_3();
  v40->set_f_0(s->substr(0, 32));
  v39_0->set_f_0(0.169983);
  Message17::M3::M9::M15::M17* v39_1 = v38->add_f_14();
  Message17::M3::M9::M15::M17::M36* v41 = v39_1->mutable_f_3();
  Message17::M3::M9::M15::M17::M36::M45* v42 = v41->mutable_f_6();
  Message17::M3::M9::M15::M17::M36::M45::M49* v43_0 = v42->add_f_2();
  (void)v43_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M17::M36::M45::M49* v43_1 = v42->add_f_2();
  v43_1->set_f_0(0x666bc6e93db69dd4);
  Message17::M3::M9::M15::M17::M36::M45::M50* v44 = v42->mutable_f_4();
  Message17::M3::M9::M15::M17::M36::M45::M50::M57* v45_0 = v44->add_f_3();
  (void)v45_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M17::M36::M43* v46 = v41->mutable_f_5();
  (void)v46;  // Suppresses clang-tidy.
  v38->set_f_2(0x2a9);
  v38->set_f_4(0x77);
  v38->set_f_5(0xecff5b9);
  Message17::M3::M9::M15::M23* v47 = v38->mutable_f_15();
  Message17::M3::M9::M15::M23::M34* v48_0 = v47->add_f_6();
  v48_0->set_f_0(0x28);
  Message17::M3::M9::M15::M23::M32* v49_0 = v47->add_f_3();
  v49_0->set_f_1(0x34);
  v49_0->add_f_0(Message17::M3::M9::M15::M23::M32::E8_CONST_2);
  v49_0->add_f_0(Message17::M3::M9::M15::M23::M32::E8_CONST_3);
  v38->set_f_9(Message17::M3::M9::M15::E6_CONST_1);
  v38->set_f_3(0xcca778d);
  Message17::M2* v50_0 = message->add_f_3();
  Message17::M2::M6* v51 = v50_0->mutable_f_2();
  Message17::M2::M6::M13* v52 = v51->mutable_f_2();
  Message17::M2::M6::M13::M21* v53 = v52->mutable_f_3();
  v53->set_f_0(0x183018);
  Message17::M2::M6::M16* v54_0 = v51->add_f_3();
  Message17::M2::M6::M16::M27* v55 = v54_0->mutable_f_5();
  (void)v55;  // Suppresses clang-tidy.
  Message17::M2::M6::M16::M28* v56 = v54_0->mutable_f_6();
  (void)v56;  // Suppresses clang-tidy.
  Message17::M2::M6::M16::M25* v57_0 = v54_0->add_f_4();
  Message17::M2::M6::M16::M25::M39* v58 = v57_0->mutable_f_3();
  v58->set_f_0(0x1f);
  v57_0->set_f_1(s->substr(0, 24));
  Message17::M2::M6::M16::M24* v59_0 = v54_0->add_f_2();
  (void)v59_0;  // Suppresses clang-tidy.
  Message17::M2::M6::M16* v54_1 = v51->add_f_3();
  Message17::M2::M6::M16::M24* v60_0 = v54_1->add_f_2();
  (void)v60_0;  // Suppresses clang-tidy.
  Message17::M2::M6::M16::M27* v61 = v54_1->mutable_f_5();
  (void)v61;  // Suppresses clang-tidy.
  Message17::M2::M8* v62 = v50_0->mutable_f_3();
  v62->set_f_0(Message17::M2::M8::E3_CONST_3);
  v62->set_f_2(0x7fe273e);
  v62->set_f_1(0x2cfb);
  Message17::M2::M11* v63_0 = v50_0->add_f_4();
  (void)v63_0;  // Suppresses clang-tidy.
  v50_0->add_f_0(0x703b6bc);
}
void Message17_Set_3(Message17* message, std::string* s) {
  Message17::M1* v0_0 = message->add_f_2();
  v0_0->set_f_0(Message17::M1::E1_CONST_5);
  Message17::M1::M10* v1 = v0_0->mutable_f_4();
  Message17::M1::M10::M14* v2_0 = v1->add_f_2();
  Message17::M1::M10::M14::M26* v3 = v2_0->mutable_f_3();
  v3->set_f_0(Message17::M1::M10::M14::M26::E7_CONST_1);
  Message17::M1::M10::M14::M26::M40* v4 = v3->mutable_f_2();
  v4->set_f_2(0x1510);
  v4->set_f_9(0x48);
  v4->set_f_8(s->substr(0, 6));
  v4->set_f_7(s->substr(0, 5));
  v4->set_f_0(true);
  message->set_f_0(s->substr(0, 3));
  Message17::M3* v5 = message->mutable_f_4();
  v5->set_f_0(0x4b);
  v5->set_f_1(0.747451);
  Message17::M3::M7* v6 = v5->mutable_f_5();
  (void)v6;  // Suppresses clang-tidy.
  Message17::M3::M9* v7 = v5->mutable_f_6();
  Message17::M3::M9::M15* v8 = v7->mutable_f_3();
  Message17::M3::M9::M15::M17* v9_0 = v8->add_f_14();
  v9_0->set_f_0(0.981094);
  Message17::M3::M9::M15::M17::M36* v10 = v9_0->mutable_f_3();
  Message17::M3::M9::M15::M17::M36::M45* v11 = v10->mutable_f_6();
  v11->set_f_0(0x9141209);
  Message17::M3::M9::M15::M17::M36::M45::M50* v12 = v11->mutable_f_4();
  v12->set_f_0(Message17::M3::M9::M15::M17::M36::M45::M50::E12_CONST_2);
  Message17::M3::M9::M15::M17::M36::M45::M50::M58* v13_0 = v12->add_f_4();
  v13_0->set_f_0(Message17::M3::M9::M15::M17::M36::M45::M50::M58::E14_CONST_1);
  Message17::M3::M9::M15::M17::M36::M45::M50::M57* v14_0 = v12->add_f_3();
  (void)v14_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M17::M36::M45::M50::M59* v15_0 = v12->add_f_5();
  (void)v15_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M17::M36::M43* v16 = v10->mutable_f_5();
  v16->set_f_0(0.413918);
  v10->set_f_1(0x14);
  Message17::M3::M9::M15::M23* v17 = v8->mutable_f_15();
  Message17::M3::M9::M15::M23::M34* v18_0 = v17->add_f_6();
  (void)v18_0;  // Suppresses clang-tidy.
  Message17::M3::M9::M15::M23::M32* v19_0 = v17->add_f_3();
  v19_0->add_f_0(Message17::M3::M9::M15::M23::M32::E8_CONST_5);
  v19_0->set_f_2(0x6fce4fe1588b80);
  v8->set_f_8(0x341e5ef642e731);
  v8->set_f_1(0x24);
  v8->set_f_7(s->substr(0, 58));
  v8->set_f_3(0x78);
  Message17::M3::M9::M12* v20 = v7->mutable_f_2();
  Message17::M3::M9::M12::M30* v21_0 = v20->add_f_8();
  Message17::M3::M9::M12::M30::M38* v22 = v21_0->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47* v23 = v22->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52* v24 = v23->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61* v25_0 = v24->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62* v26 =
      v25_0->mutable_f_6();
  (void)v26;  // Suppresses clang-tidy.
  v25_0->set_f_2(0x4ee9a49);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63* v27 =
      v25_0->mutable_f_8();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66* v28 =
      v27->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67* v29 =
      v28->mutable_f_5();
  (void)v29;  // Suppresses clang-tidy.
  Message17::M3::M9::M12::M20* v30 = v20->mutable_f_6();
  Message17::M3::M9::M12::M20::M31* v31 = v30->mutable_f_2();
  v31->set_f_0(true);
  Message17::M3::M9::M12::M20::M35* v32_0 = v30->add_f_3();
  Message17::M3::M9::M12::M20::M35::M42* v33 = v32_0->mutable_f_2();
  Message17::M3::M9::M12::M20::M35::M42::M56* v34 = v33->mutable_f_4();
  v34->set_f_0(0x31);
  Message17::M3::M9::M12::M29* v35_0 = v20->add_f_7();
  Message17::M3::M9::M12::M29::M37* v36_0 = v35_0->add_f_6();
  Message17::M3::M9::M12::M29::M37::M41* v37_0 = v36_0->add_f_4();
  v37_0->add_f_2(s->substr(0, 4));
  Message17::M3::M9::M12::M29::M33* v38 = v35_0->mutable_f_4();
  v38->set_f_0(0xd);
  v35_0->set_f_0(s->substr(0, 3));
  v20->set_f_0(s->substr(0, 21));
  Message17::M3::M9::M12::M18* v39 = v20->mutable_f_3();
  v39->set_f_1(s->substr(0, 4));
  Message17::M2* v40_0 = message->add_f_3();
  Message17::M2::M8* v41 = v40_0->mutable_f_3();
  v41->set_f_0(Message17::M2::M8::E3_CONST_3);
  v40_0->add_f_0(0x1ea15d);
  Message17::M2::M6* v42 = v40_0->mutable_f_2();
  Message17::M2::M6::M13* v43 = v42->mutable_f_2();
  v43->set_f_0(0.140278);
  Message17::M2::M6::M16* v44_0 = v42->add_f_3();
  Message17::M2::M6::M16::M25* v45_0 = v44_0->add_f_4();
  v45_0->set_f_1(s->substr(0, 1));
  v45_0->set_f_0(0x6c);
  Message17::M2::M6::M16::M25::M39* v46 = v45_0->mutable_f_3();
  (void)v46;  // Suppresses clang-tidy.
  Message17::M2::M6::M16::M24* v47_0 = v44_0->add_f_2();
  v47_0->set_f_2(false);
  Message17::M2::M6::M16::M27* v48 = v44_0->mutable_f_5();
  v48->set_f_0(s->substr(0, 6));
  Message17::M2::M6::M16::M28* v49 = v44_0->mutable_f_6();
  (void)v49;  // Suppresses clang-tidy.
  Message17::M2::M6::M16* v44_1 = v42->add_f_3();
  Message17::M2::M6::M16::M25* v50_0 = v44_1->add_f_4();
  v50_0->set_f_0(0x1b95);
  Message17::M2::M6::M16::M24* v51_0 = v44_1->add_f_2();
  v51_0->set_f_0(0.524144);
  Message17::M2::M6::M16::M24* v51_1 = v44_1->add_f_2();
  v51_1->set_f_2(false);
  Message17::M2* v40_1 = message->add_f_3();
  Message17::M2::M8* v52 = v40_1->mutable_f_3();
  v52->set_f_1(0x14d846);
  Message17::M2::M6* v53 = v40_1->mutable_f_2();
  v53->add_f_0(0.788813);
  v53->add_f_0(0.666944);
  Message17::M2::M6::M13* v54 = v53->mutable_f_2();
  v54->set_f_0(0.708785);
  Message17::M2::M6::M16* v55_0 = v53->add_f_3();
  Message17::M2::M6::M16::M25* v56_0 = v55_0->add_f_4();
  v56_0->set_f_0(0x7b);
  Message17::M2::M6::M16::M24* v57_0 = v55_0->add_f_2();
  v57_0->set_f_2(false);
  v57_0->set_f_1(0xe3558aadc4422a);
}
void Message17_Set_4(Message17* message, std::string* s) {
  message->set_f_0(s->substr(0, 112));
  Message17::M3* v0 = message->mutable_f_4();
  Message17::M3::M9* v1 = v0->mutable_f_6();
  Message17::M3::M9::M12* v2 = v1->mutable_f_2();
  Message17::M3::M9::M12::M29* v3_0 = v2->add_f_7();
  Message17::M3::M9::M12::M29::M37* v4_0 = v3_0->add_f_6();
  v4_0->set_f_0(0x1faa);
  Message17::M3::M9::M12::M29::M37::M41* v5_0 = v4_0->add_f_4();
  v5_0->add_f_2(s->substr(0, 4));
  Message17::M3::M9::M12::M29::M33* v6 = v3_0->mutable_f_4();
  v6->set_f_0(0x19);
  v3_0->set_f_0(s->substr(0, 127));
  Message17::M3::M9::M12::M18* v7 = v2->mutable_f_3();
  (void)v7;  // Suppresses clang-tidy.
  Message17::M3::M9::M12::M20* v8 = v2->mutable_f_6();
  Message17::M3::M9::M12::M20::M35* v9_0 = v8->add_f_3();
  Message17::M3::M9::M12::M20::M35::M42* v10 = v9_0->mutable_f_2();
  Message17::M3::M9::M12::M20::M35::M42::M55* v11 = v10->mutable_f_3();
  (void)v11;  // Suppresses clang-tidy.
  v10->set_f_0(0x1d46);
  Message17::M3::M9::M12::M19* v12 = v2->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  Message17::M3::M9::M12::M30* v13_0 = v2->add_f_8();
  Message17::M3::M9::M12::M30::M38* v14 = v13_0->mutable_f_2();
  v14->set_f_0(Message17::M3::M9::M12::M30::M38::E9_CONST_4);
  Message17::M3::M9::M12::M30::M38::M47* v15 = v14->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52* v16 = v15->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61* v17_0 = v16->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63* v18 =
      v17_0->mutable_f_8();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66* v19 =
      v18->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67* v20 =
      v19->mutable_f_5();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68* v21_0 =
      v20->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69*
      v22 = v21_0->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69::M70*
      v23_0 = v22->add_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69::
      M70::M71* v24 = v23_0->mutable_f_4();
  v24->set_f_0(s->substr(0, 24));
  v23_0->set_f_1(s->substr(0, 20));
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68::M69::M70*
      v23_1 = v22->add_f_3();
  v23_1->set_f_1(s->substr(0, 5));
  v23_1->set_f_0(0x97bb92d);
  v22->set_f_0(0x19668dc63819bf);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::M68* v21_1 =
      v20->add_f_3();
  (void)v21_1;  // Suppresses clang-tidy.
  v20->set_f_0(Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
                   E16_CONST_3);
  v19->set_f_0(true);
  Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62* v25 =
      v17_0->mutable_f_6();
  v25->set_f_1(0.906363);
  v17_0->set_f_1(Message17::M3::M9::M12::M30::M38::M47::M52::M61::E15_CONST_4);
  v17_0->set_f_0(s->substr(0, 40));
  v15->set_f_0(0.599852);
  Message17::M3::M9::M12::M30* v13_1 = v2->add_f_8();
  Message17::M3::M9::M12::M30::M38* v26 = v13_1->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47* v27 = v26->mutable_f_3();
  Message17::M3::M9::M12::M30::M38::M47::M52* v28 = v27->mutable_f_2();
  Message17::M3::M9::M12::M30::M38::M47::M52::M61* v29_0 = v28->add_f_3();
  v29_0->set_f_0(s->substr(0, 23));
  v29_0->set_f_2(0xd);
  v28->add_f_0(0xe44bf15);
  v28->add_f_0(0x70a99);
  v28->add_f_0(0x302d);
  v27->set_f_0(0.813159);
  Message17::M3::M9::M15* v30 = v1->mutable_f_3();
  Message17::M3::M9::M15::M23* v31 = v30->mutable_f_15();
  v31->set_f_0(0x1028e3);
  Message17::M3::M9::M15::M23::M34* v32_0 = v31->add_f_6();
  Message17::M3::M9::M15::M23::M34::M46* v33 = v32_0->mutable_f_4();
  Message17::M3::M9::M15::M23::M34::M46::M53* v34_0 = v33->add_f_5();
  (void)v34_0;  // Suppresses clang-tidy.
  v33->set_f_0(s->substr(0, 118));
  v32_0->set_f_0(0x63d8e5a7330272);
  v30->set_f_0(true);
  Message17::M3::M9::M15::M17* v35_0 = v30->add_f_14();
  Message17::M3::M9::M15::M17::M36* v36 = v35_0->mutable_f_3();
  Message17::M3::M9::M15::M17::M36::M43* v37 = v36->mutable_f_5();
  v37->set_f_0(0.277101);
  v37->set_f_1(0x4fd6ae25);
  Message17::M3::M9::M15::M17::M36::M45* v38 = v36->mutable_f_6();
  (void)v38;  // Suppresses clang-tidy.
  v30->set_f_6(Message17::M3::M9::M15::E5_CONST_5);
  v0->set_f_1(0.634480);
  Message17::M3::M7* v39 = v0->mutable_f_5();
  (void)v39;  // Suppresses clang-tidy.
  Message17::M2* v40_0 = message->add_f_3();
  Message17::M2::M11* v41_0 = v40_0->add_f_4();
  (void)v41_0;  // Suppresses clang-tidy.
  Message17::M2::M11* v41_1 = v40_0->add_f_4();
  v41_1->set_f_0(0x68);
  Message17::M2::M8* v42 = v40_0->mutable_f_3();
  v42->set_f_0(Message17::M2::M8::E3_CONST_5);
  Message17::M2::M6* v43 = v40_0->mutable_f_2();
  Message17::M2::M6::M13* v44 = v43->mutable_f_2();
  Message17::M2::M6::M13::M22* v45 = v44->mutable_f_5();
  v45->set_f_0(s->substr(0, 29));
  Message17::M2::M6::M16* v46_0 = v43->add_f_3();
  v46_0->set_f_0(false);
  Message17::M2::M6::M16::M28* v47 = v46_0->mutable_f_6();
  (void)v47;  // Suppresses clang-tidy.
  Message17::M2::M6::M16::M25* v48_0 = v46_0->add_f_4();
  Message17::M2::M6::M16::M25::M39* v49 = v48_0->mutable_f_3();
  v49->set_f_0(0x74);
  Message17::M2::M6::M16::M24* v50_0 = v46_0->add_f_2();
  v50_0->set_f_1(0x79);
  Message17::M2::M6::M16::M24* v50_1 = v46_0->add_f_2();
  v50_1->set_f_0(0.776943);
  Message17::M1* v51_0 = message->add_f_2();
  Message17::M1::M10* v52 = v51_0->mutable_f_4();
  Message17::M1::M10::M14* v53_0 = v52->add_f_2();
  v53_0->add_f_0(Message17::M1::M10::M14::E4_CONST_3);
  Message17::M1::M10::M14::M26* v54 = v53_0->mutable_f_3();
  v54->set_f_0(Message17::M1::M10::M14::M26::E7_CONST_5);
  Message17::M1::M10::M14::M26::M40* v55 = v54->mutable_f_2();
  Message17::M1::M10::M14::M26::M40::M44* v56_0 = v55->add_f_16();
  Message17::M1::M10::M14::M26::M40::M44::M54* v57 = v56_0->mutable_f_4();
  (void)v57;  // Suppresses clang-tidy.
  Message17::M1::M10::M14::M26::M40::M44::M51* v58 = v56_0->mutable_f_2();
  (void)v58;  // Suppresses clang-tidy.
  v55->set_f_9(0x3f);
  v55->set_f_8(s->substr(0, 16));
  v55->set_f_4(0xe8be124);
  v55->set_f_10(s->substr(0, 8));
  v55->set_f_0(true);
  v55->set_f_1(s->substr(0, 28));
}
void Message17_Get_1(Message17* message) {
  Receive((*message).f_0());
  const Message17::M3& v0 = (*message).f_4();
  Receive(v0.f_2());
  Receive(v0.f_0());
  const Message17::M3::M7& v1 = v0.f_5();
  Receive(v1.f_0());
  const Message17::M3::M4& v2 = v0.f_4();
  Receive(v2.f_0());
  Receive(v0.f_1());
  const Message17::M3::M9& v3 = v0.f_6();
  Receive(v3.f_0());
  const Message17::M3::M9::M15& v4 = v3.f_3();
  Receive(v4.f_9());
  Receive(v4.f_3());
  for (const auto& v5 : v4.f_14()) {
    const Message17::M3::M9::M15::M17::M36& v6 = v5.f_3();
    const Message17::M3::M9::M15::M17::M36::M45& v7 = v6.f_6();
    Receive(v7.f_0());
    for (const auto& v8 : v7.f_2()) {
      Receive(v8.f_0());
    }
    const Message17::M3::M9::M15::M17::M36::M45::M50& v9 = v7.f_4();
    Receive(v9.f_0());
    for (const auto& v10 : v9.f_4()) {
      Receive(v10.f_0());
    }
    for (const auto& v11 : v9.f_5()) {
      Receive(v11.f_0());
    }
    for (const auto& v12 : v9.f_3()) {
      Receive(v12.f_0());
    }
    Receive(v6.f_1());
    Receive(v6.f_0());
    const Message17::M3::M9::M15::M17::M36::M43& v13 = v6.f_5();
    Receive(v13.f_1());
    Receive(v13.f_2());
    Receive(v13.f_0());
    Receive(v5.f_0());
  }
  Receive(v4.f_4());
  Receive(v4.f_7());
  Receive(v4.f_5());
  const Message17::M3::M9::M15::M23& v14 = v4.f_15();
  for (const auto& v15 : v14.f_6()) {
    const Message17::M3::M9::M15::M23::M34::M46& v16 = v15.f_4();
    for (const auto& v17 : v16.f_5()) {
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60& v18 = v17.f_3();
      Receive(v18.f_0());
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60::M64& v19 =
          v18.f_2();
      Receive(v19.f_0());
      Receive(v17.f_0());
    }
    Receive(v16.f_0());
    Receive(v15.f_0());
  }
  for (const auto& v20 : v14.f_3()) {
    Receive(v20.f_1());
    Receive(v20.f_2());
    for (int i = 0; i < v20.f_0_size(); ++i) {
      Receive(v20.f_0(i));
    }
  }
  Receive(v14.f_0());
  Receive(v4.f_2());
  Receive(v4.f_0());
  Receive(v4.f_8());
  Receive(v4.f_1());
  Receive(v4.f_6());
  const Message17::M3::M9::M12& v21 = v3.f_2();
  for (const auto& v22 : v21.f_8()) {
    const Message17::M3::M9::M12::M30::M38& v23 = v22.f_2();
    Receive(v23.f_0());
    const Message17::M3::M9::M12::M30::M38::M47& v24 = v23.f_3();
    Receive(v24.f_0());
    const Message17::M3::M9::M12::M30::M38::M47::M52& v25 = v24.f_2();
    for (const auto& v26 : v25.f_3()) {
      Receive(v26.f_2());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62& v27 =
          v26.f_6();
      Receive(v27.f_1());
      Receive(v27.f_0());
      Receive(v26.f_1());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63& v28 =
          v26.f_8();
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66& v29 =
          v28.f_3();
      Receive(v29.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67&
          v30 = v29.f_5();
      for (const auto& v31 : v30.f_3()) {
        const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
            M68::M69& v32 = v31.f_2();
        for (const auto& v33 : v32.f_3()) {
          Receive(v33.f_1());
          Receive(v33.f_0());
          const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
              M68::M69::M70::M71& v34 = v33.f_4();
          Receive(v34.f_0());
        }
        Receive(v32.f_0());
        Receive(v31.f_0());
      }
      Receive(v30.f_0());
      Receive(v28.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M65& v35 =
          v28.f_2();
      Receive(v35.f_0());
      Receive(v26.f_0());
    }
    for (int i = 0; i < v25.f_0_size(); ++i) {
      Receive(v25.f_0(i));
    }
    Receive(v22.f_0());
  }
  const Message17::M3::M9::M12::M19& v36 = v21.f_4();
  Receive(v36.f_0());
  Receive(v21.f_0());
  const Message17::M3::M9::M12::M18& v37 = v21.f_3();
  Receive(v37.f_0());
  Receive(v37.f_1());
  for (const auto& v38 : v21.f_7()) {
    const Message17::M3::M9::M12::M29::M33& v39 = v38.f_4();
    Receive(v39.f_0());
    for (const auto& v40 : v39.f_4()) {
      Receive(v40.f_1());
      Receive(v40.f_2());
      Receive(v40.f_0());
    }
    for (const auto& v41 : v38.f_6()) {
      for (const auto& v42 : v41.f_4()) {
        Receive(v42.f_1());
        Receive(v42.f_0());
        for (int i = 0; i < v42.f_2_size(); ++i) {
          Receive(v42.f_2(i));
        }
      }
      Receive(v41.f_0());
    }
    Receive(v38.f_0());
  }
  const Message17::M3::M9::M12::M20& v43 = v21.f_6();
  Receive(v43.f_0());
  const Message17::M3::M9::M12::M20::M31& v44 = v43.f_2();
  Receive(v44.f_0());
  for (const auto& v45 : v43.f_3()) {
    Receive(v45.f_0());
    const Message17::M3::M9::M12::M20::M35::M42& v46 = v45.f_2();
    const Message17::M3::M9::M12::M20::M35::M42::M56& v47 = v46.f_4();
    Receive(v47.f_0());
    Receive(v46.f_0());
    const Message17::M3::M9::M12::M20::M35::M42::M55& v48 = v46.f_3();
    Receive(v48.f_0());
  }
  for (const auto& v49 : (*message).f_2()) {
    const Message17::M1::M5& v50 = v49.f_3();
    Receive(v50.f_0());
    Receive(v49.f_0());
    const Message17::M1::M10& v51 = v49.f_4();
    Receive(v51.f_0());
    for (const auto& v52 : v51.f_2()) {
      const Message17::M1::M10::M14::M26& v53 = v52.f_3();
      const Message17::M1::M10::M14::M26::M40& v54 = v53.f_2();
      Receive(v54.f_10());
      Receive(v54.f_5());
      Receive(v54.f_4());
      Receive(v54.f_3());
      for (const auto& v55 : v54.f_16()) {
        const Message17::M1::M10::M14::M26::M40::M44::M51& v56 = v55.f_2();
        Receive(v56.f_1());
        Receive(v56.f_2());
        Receive(v56.f_0());
        const Message17::M1::M10::M14::M26::M40::M44::M54& v57 = v55.f_4();
        Receive(v57.f_0());
        Receive(v55.f_0());
      }
      Receive(v54.f_7());
      Receive(v54.f_2());
      Receive(v54.f_6());
      Receive(v54.f_8());
      Receive(v54.f_0());
      Receive(v54.f_1());
      Receive(v54.f_9());
      Receive(v53.f_0());
      for (int i = 0; i < v52.f_0_size(); ++i) {
        Receive(v52.f_0(i));
      }
    }
  }
  for (const auto& v58 : (*message).f_3()) {
    for (const auto& v59 : v58.f_4()) {
      Receive(v59.f_0());
    }
    const Message17::M2::M8& v60 = v58.f_3();
    Receive(v60.f_1());
    Receive(v60.f_2());
    Receive(v60.f_0());
    for (int i = 0; i < v58.f_0_size(); ++i) {
      Receive(v58.f_0(i));
    }
    const Message17::M2::M6& v61 = v58.f_2();
    const Message17::M2::M6::M13& v62 = v61.f_2();
    Receive(v62.f_0());
    const Message17::M2::M6::M13::M21& v63 = v62.f_3();
    Receive(v63.f_0());
    const Message17::M2::M6::M13::M22& v64 = v62.f_5();
    Receive(v64.f_0());
    for (int i = 0; i < v61.f_0_size(); ++i) {
      Receive(v61.f_0(i));
    }
    for (const auto& v65 : v61.f_3()) {
      for (const auto& v66 : v65.f_2()) {
        Receive(v66.f_1());
        Receive(v66.f_0());
        Receive(v66.f_2());
      }
      Receive(v65.f_0());
      const Message17::M2::M6::M16::M28& v67 = v65.f_6();
      Receive(v67.f_0());
      for (const auto& v68 : v65.f_4()) {
        Receive(v68.f_0());
        Receive(v68.f_1());
        const Message17::M2::M6::M16::M25::M39& v69 = v68.f_3();
        Receive(v69.f_0());
      }
      const Message17::M2::M6::M16::M27& v70 = v65.f_5();
      Receive(v70.f_0());
    }
  }
}
void Message17_Get_2(Message17* message) {
  const Message17::M3& v0 = (*message).f_4();
  Receive(v0.f_0());
  Receive(v0.f_2());
  const Message17::M3::M4& v1 = v0.f_4();
  Receive(v1.f_0());
  Receive(v0.f_1());
  const Message17::M3::M9& v2 = v0.f_6();
  const Message17::M3::M9::M15& v3 = v2.f_3();
  Receive(v3.f_9());
  Receive(v3.f_3());
  Receive(v3.f_7());
  Receive(v3.f_2());
  const Message17::M3::M9::M15::M23& v4 = v3.f_15();
  for (const auto& v5 : v4.f_3()) {
    Receive(v5.f_2());
    Receive(v5.f_1());
    for (int i = 0; i < v5.f_0_size(); ++i) {
      Receive(v5.f_0(i));
    }
  }
  for (const auto& v6 : v4.f_6()) {
    Receive(v6.f_0());
    const Message17::M3::M9::M15::M23::M34::M46& v7 = v6.f_4();
    for (const auto& v8 : v7.f_5()) {
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60& v9 = v8.f_3();
      Receive(v9.f_0());
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60::M64& v10 =
          v9.f_2();
      Receive(v10.f_0());
      Receive(v8.f_0());
    }
    Receive(v7.f_0());
  }
  Receive(v4.f_0());
  Receive(v3.f_6());
  for (const auto& v11 : v3.f_14()) {
    const Message17::M3::M9::M15::M17::M36& v12 = v11.f_3();
    const Message17::M3::M9::M15::M17::M36::M45& v13 = v12.f_6();
    const Message17::M3::M9::M15::M17::M36::M45::M50& v14 = v13.f_4();
    for (const auto& v15 : v14.f_3()) {
      Receive(v15.f_0());
    }
    for (const auto& v16 : v14.f_4()) {
      Receive(v16.f_0());
    }
    for (const auto& v17 : v14.f_5()) {
      Receive(v17.f_0());
    }
    Receive(v14.f_0());
    Receive(v13.f_0());
    for (const auto& v18 : v13.f_2()) {
      Receive(v18.f_0());
    }
    Receive(v12.f_1());
    const Message17::M3::M9::M15::M17::M36::M43& v19 = v12.f_5();
    Receive(v19.f_0());
    Receive(v19.f_2());
    Receive(v19.f_1());
    Receive(v12.f_0());
    Receive(v11.f_0());
  }
  Receive(v3.f_8());
  Receive(v3.f_5());
  Receive(v3.f_0());
  Receive(v3.f_1());
  Receive(v3.f_4());
  const Message17::M3::M9::M12& v20 = v2.f_2();
  for (const auto& v21 : v20.f_7()) {
    Receive(v21.f_0());
    for (const auto& v22 : v21.f_6()) {
      Receive(v22.f_0());
      for (const auto& v23 : v22.f_4()) {
        for (int i = 0; i < v23.f_2_size(); ++i) {
          Receive(v23.f_2(i));
        }
        Receive(v23.f_1());
        Receive(v23.f_0());
      }
    }
    const Message17::M3::M9::M12::M29::M33& v24 = v21.f_4();
    for (const auto& v25 : v24.f_4()) {
      Receive(v25.f_0());
      Receive(v25.f_1());
      Receive(v25.f_2());
    }
    Receive(v24.f_0());
  }
  const Message17::M3::M9::M12::M19& v26 = v20.f_4();
  Receive(v26.f_0());
  const Message17::M3::M9::M12::M20& v27 = v20.f_6();
  const Message17::M3::M9::M12::M20::M31& v28 = v27.f_2();
  Receive(v28.f_0());
  for (const auto& v29 : v27.f_3()) {
    const Message17::M3::M9::M12::M20::M35::M42& v30 = v29.f_2();
    const Message17::M3::M9::M12::M20::M35::M42::M55& v31 = v30.f_3();
    Receive(v31.f_0());
    Receive(v30.f_0());
    const Message17::M3::M9::M12::M20::M35::M42::M56& v32 = v30.f_4();
    Receive(v32.f_0());
    Receive(v29.f_0());
  }
  Receive(v27.f_0());
  Receive(v20.f_0());
  const Message17::M3::M9::M12::M18& v33 = v20.f_3();
  Receive(v33.f_1());
  Receive(v33.f_0());
  for (const auto& v34 : v20.f_8()) {
    const Message17::M3::M9::M12::M30::M38& v35 = v34.f_2();
    const Message17::M3::M9::M12::M30::M38::M47& v36 = v35.f_3();
    const Message17::M3::M9::M12::M30::M38::M47::M52& v37 = v36.f_2();
    for (int i = 0; i < v37.f_0_size(); ++i) {
      Receive(v37.f_0(i));
    }
    for (const auto& v38 : v37.f_3()) {
      Receive(v38.f_1());
      Receive(v38.f_2());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62& v39 =
          v38.f_6();
      Receive(v39.f_1());
      Receive(v39.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63& v40 =
          v38.f_8();
      Receive(v40.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M65& v41 =
          v40.f_2();
      Receive(v41.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66& v42 =
          v40.f_3();
      Receive(v42.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67&
          v43 = v42.f_5();
      for (const auto& v44 : v43.f_3()) {
        const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
            M68::M69& v45 = v44.f_2();
        for (const auto& v46 : v45.f_3()) {
          Receive(v46.f_0());
          Receive(v46.f_1());
          const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
              M68::M69::M70::M71& v47 = v46.f_4();
          Receive(v47.f_0());
        }
        Receive(v45.f_0());
        Receive(v44.f_0());
      }
      Receive(v43.f_0());
      Receive(v38.f_0());
    }
    Receive(v36.f_0());
    Receive(v35.f_0());
    Receive(v34.f_0());
  }
  Receive(v2.f_0());
  const Message17::M3::M7& v48 = v0.f_5();
  Receive(v48.f_0());
  for (const auto& v49 : (*message).f_2()) {
    const Message17::M1::M10& v50 = v49.f_4();
    for (const auto& v51 : v50.f_2()) {
      for (int i = 0; i < v51.f_0_size(); ++i) {
        Receive(v51.f_0(i));
      }
      const Message17::M1::M10::M14::M26& v52 = v51.f_3();
      const Message17::M1::M10::M14::M26::M40& v53 = v52.f_2();
      Receive(v53.f_4());
      Receive(v53.f_2());
      Receive(v53.f_3());
      Receive(v53.f_8());
      Receive(v53.f_5());
      Receive(v53.f_0());
      Receive(v53.f_9());
      Receive(v53.f_6());
      Receive(v53.f_1());
      Receive(v53.f_10());
      for (const auto& v54 : v53.f_16()) {
        const Message17::M1::M10::M14::M26::M40::M44::M51& v55 = v54.f_2();
        Receive(v55.f_0());
        Receive(v55.f_2());
        Receive(v55.f_1());
        const Message17::M1::M10::M14::M26::M40::M44::M54& v56 = v54.f_4();
        Receive(v56.f_0());
        Receive(v54.f_0());
      }
      Receive(v53.f_7());
      Receive(v52.f_0());
    }
    Receive(v50.f_0());
    const Message17::M1::M5& v57 = v49.f_3();
    Receive(v57.f_0());
    Receive(v49.f_0());
  }
  Receive((*message).f_0());
  for (const auto& v58 : (*message).f_3()) {
    for (const auto& v59 : v58.f_4()) {
      Receive(v59.f_0());
    }
    const Message17::M2::M8& v60 = v58.f_3();
    Receive(v60.f_2());
    Receive(v60.f_0());
    Receive(v60.f_1());
    for (int i = 0; i < v58.f_0_size(); ++i) {
      Receive(v58.f_0(i));
    }
    const Message17::M2::M6& v61 = v58.f_2();
    const Message17::M2::M6::M13& v62 = v61.f_2();
    Receive(v62.f_0());
    const Message17::M2::M6::M13::M21& v63 = v62.f_3();
    Receive(v63.f_0());
    const Message17::M2::M6::M13::M22& v64 = v62.f_5();
    Receive(v64.f_0());
    for (const auto& v65 : v61.f_3()) {
      const Message17::M2::M6::M16::M28& v66 = v65.f_6();
      Receive(v66.f_0());
      for (const auto& v67 : v65.f_4()) {
        const Message17::M2::M6::M16::M25::M39& v68 = v67.f_3();
        Receive(v68.f_0());
        Receive(v67.f_0());
        Receive(v67.f_1());
      }
      const Message17::M2::M6::M16::M27& v69 = v65.f_5();
      Receive(v69.f_0());
      for (const auto& v70 : v65.f_2()) {
        Receive(v70.f_0());
        Receive(v70.f_1());
        Receive(v70.f_2());
      }
      Receive(v65.f_0());
    }
    for (int i = 0; i < v61.f_0_size(); ++i) {
      Receive(v61.f_0(i));
    }
  }
}
void Message17_Get_3(Message17* message) {
  const Message17::M3& v0 = (*message).f_4();
  Receive(v0.f_1());
  const Message17::M3::M7& v1 = v0.f_5();
  Receive(v1.f_0());
  Receive(v0.f_2());
  Receive(v0.f_0());
  const Message17::M3::M4& v2 = v0.f_4();
  Receive(v2.f_0());
  const Message17::M3::M9& v3 = v0.f_6();
  const Message17::M3::M9::M15& v4 = v3.f_3();
  Receive(v4.f_0());
  const Message17::M3::M9::M15::M23& v5 = v4.f_15();
  for (const auto& v6 : v5.f_6()) {
    Receive(v6.f_0());
    const Message17::M3::M9::M15::M23::M34::M46& v7 = v6.f_4();
    Receive(v7.f_0());
    for (const auto& v8 : v7.f_5()) {
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60& v9 = v8.f_3();
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60::M64& v10 =
          v9.f_2();
      Receive(v10.f_0());
      Receive(v9.f_0());
      Receive(v8.f_0());
    }
  }
  Receive(v5.f_0());
  for (const auto& v11 : v5.f_3()) {
    for (int i = 0; i < v11.f_0_size(); ++i) {
      Receive(v11.f_0(i));
    }
    Receive(v11.f_1());
    Receive(v11.f_2());
  }
  Receive(v4.f_5());
  Receive(v4.f_4());
  Receive(v4.f_2());
  Receive(v4.f_8());
  Receive(v4.f_7());
  Receive(v4.f_9());
  Receive(v4.f_3());
  Receive(v4.f_6());
  Receive(v4.f_1());
  for (const auto& v12 : v4.f_14()) {
    Receive(v12.f_0());
    const Message17::M3::M9::M15::M17::M36& v13 = v12.f_3();
    Receive(v13.f_1());
    const Message17::M3::M9::M15::M17::M36::M43& v14 = v13.f_5();
    Receive(v14.f_2());
    Receive(v14.f_1());
    Receive(v14.f_0());
    Receive(v13.f_0());
    const Message17::M3::M9::M15::M17::M36::M45& v15 = v13.f_6();
    for (const auto& v16 : v15.f_2()) {
      Receive(v16.f_0());
    }
    const Message17::M3::M9::M15::M17::M36::M45::M50& v17 = v15.f_4();
    Receive(v17.f_0());
    for (const auto& v18 : v17.f_3()) {
      Receive(v18.f_0());
    }
    for (const auto& v19 : v17.f_5()) {
      Receive(v19.f_0());
    }
    for (const auto& v20 : v17.f_4()) {
      Receive(v20.f_0());
    }
    Receive(v15.f_0());
  }
  Receive(v3.f_0());
  const Message17::M3::M9::M12& v21 = v3.f_2();
  const Message17::M3::M9::M12::M19& v22 = v21.f_4();
  Receive(v22.f_0());
  const Message17::M3::M9::M12::M18& v23 = v21.f_3();
  Receive(v23.f_1());
  Receive(v23.f_0());
  const Message17::M3::M9::M12::M20& v24 = v21.f_6();
  const Message17::M3::M9::M12::M20::M31& v25 = v24.f_2();
  Receive(v25.f_0());
  Receive(v24.f_0());
  for (const auto& v26 : v24.f_3()) {
    const Message17::M3::M9::M12::M20::M35::M42& v27 = v26.f_2();
    const Message17::M3::M9::M12::M20::M35::M42::M55& v28 = v27.f_3();
    Receive(v28.f_0());
    const Message17::M3::M9::M12::M20::M35::M42::M56& v29 = v27.f_4();
    Receive(v29.f_0());
    Receive(v27.f_0());
    Receive(v26.f_0());
  }
  for (const auto& v30 : v21.f_8()) {
    Receive(v30.f_0());
    const Message17::M3::M9::M12::M30::M38& v31 = v30.f_2();
    Receive(v31.f_0());
    const Message17::M3::M9::M12::M30::M38::M47& v32 = v31.f_3();
    const Message17::M3::M9::M12::M30::M38::M47::M52& v33 = v32.f_2();
    for (int i = 0; i < v33.f_0_size(); ++i) {
      Receive(v33.f_0(i));
    }
    for (const auto& v34 : v33.f_3()) {
      Receive(v34.f_1());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62& v35 =
          v34.f_6();
      Receive(v35.f_1());
      Receive(v35.f_0());
      Receive(v34.f_0());
      Receive(v34.f_2());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63& v36 =
          v34.f_8();
      Receive(v36.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66& v37 =
          v36.f_3();
      Receive(v37.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67&
          v38 = v37.f_5();
      Receive(v38.f_0());
      for (const auto& v39 : v38.f_3()) {
        Receive(v39.f_0());
        const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
            M68::M69& v40 = v39.f_2();
        Receive(v40.f_0());
        for (const auto& v41 : v40.f_3()) {
          Receive(v41.f_0());
          Receive(v41.f_1());
          const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
              M68::M69::M70::M71& v42 = v41.f_4();
          Receive(v42.f_0());
        }
      }
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M65& v43 =
          v36.f_2();
      Receive(v43.f_0());
    }
    Receive(v32.f_0());
  }
  Receive(v21.f_0());
  for (const auto& v44 : v21.f_7()) {
    const Message17::M3::M9::M12::M29::M33& v45 = v44.f_4();
    for (const auto& v46 : v45.f_4()) {
      Receive(v46.f_0());
      Receive(v46.f_2());
      Receive(v46.f_1());
    }
    Receive(v45.f_0());
    for (const auto& v47 : v44.f_6()) {
      Receive(v47.f_0());
      for (const auto& v48 : v47.f_4()) {
        Receive(v48.f_1());
        for (int i = 0; i < v48.f_2_size(); ++i) {
          Receive(v48.f_2(i));
        }
        Receive(v48.f_0());
      }
    }
    Receive(v44.f_0());
  }
  for (const auto& v49 : (*message).f_3()) {
    const Message17::M2::M8& v50 = v49.f_3();
    Receive(v50.f_2());
    Receive(v50.f_1());
    Receive(v50.f_0());
    for (const auto& v51 : v49.f_4()) {
      Receive(v51.f_0());
    }
    const Message17::M2::M6& v52 = v49.f_2();
    for (int i = 0; i < v52.f_0_size(); ++i) {
      Receive(v52.f_0(i));
    }
    for (const auto& v53 : v52.f_3()) {
      Receive(v53.f_0());
      const Message17::M2::M6::M16::M28& v54 = v53.f_6();
      Receive(v54.f_0());
      for (const auto& v55 : v53.f_4()) {
        Receive(v55.f_0());
        const Message17::M2::M6::M16::M25::M39& v56 = v55.f_3();
        Receive(v56.f_0());
        Receive(v55.f_1());
      }
      const Message17::M2::M6::M16::M27& v57 = v53.f_5();
      Receive(v57.f_0());
      for (const auto& v58 : v53.f_2()) {
        Receive(v58.f_1());
        Receive(v58.f_0());
        Receive(v58.f_2());
      }
    }
    const Message17::M2::M6::M13& v59 = v52.f_2();
    Receive(v59.f_0());
    const Message17::M2::M6::M13::M22& v60 = v59.f_5();
    Receive(v60.f_0());
    const Message17::M2::M6::M13::M21& v61 = v59.f_3();
    Receive(v61.f_0());
    for (int i = 0; i < v49.f_0_size(); ++i) {
      Receive(v49.f_0(i));
    }
  }
  for (const auto& v62 : (*message).f_2()) {
    const Message17::M1::M5& v63 = v62.f_3();
    Receive(v63.f_0());
    Receive(v62.f_0());
    const Message17::M1::M10& v64 = v62.f_4();
    for (const auto& v65 : v64.f_2()) {
      const Message17::M1::M10::M14::M26& v66 = v65.f_3();
      Receive(v66.f_0());
      const Message17::M1::M10::M14::M26::M40& v67 = v66.f_2();
      Receive(v67.f_3());
      Receive(v67.f_9());
      for (const auto& v68 : v67.f_16()) {
        const Message17::M1::M10::M14::M26::M40::M44::M51& v69 = v68.f_2();
        Receive(v69.f_1());
        Receive(v69.f_2());
        Receive(v69.f_0());
        Receive(v68.f_0());
        const Message17::M1::M10::M14::M26::M40::M44::M54& v70 = v68.f_4();
        Receive(v70.f_0());
      }
      Receive(v67.f_0());
      Receive(v67.f_1());
      Receive(v67.f_8());
      Receive(v67.f_5());
      Receive(v67.f_4());
      Receive(v67.f_6());
      Receive(v67.f_10());
      Receive(v67.f_7());
      Receive(v67.f_2());
      for (int i = 0; i < v65.f_0_size(); ++i) {
        Receive(v65.f_0(i));
      }
    }
    Receive(v64.f_0());
  }
  Receive((*message).f_0());
}
void Message17_Get_4(Message17* message) {
  for (const auto& v0 : (*message).f_3()) {
    const Message17::M2::M6& v1 = v0.f_2();
    for (const auto& v2 : v1.f_3()) {
      Receive(v2.f_0());
      const Message17::M2::M6::M16::M28& v3 = v2.f_6();
      Receive(v3.f_0());
      for (const auto& v4 : v2.f_2()) {
        Receive(v4.f_2());
        Receive(v4.f_0());
        Receive(v4.f_1());
      }
      const Message17::M2::M6::M16::M27& v5 = v2.f_5();
      Receive(v5.f_0());
      for (const auto& v6 : v2.f_4()) {
        Receive(v6.f_0());
        const Message17::M2::M6::M16::M25::M39& v7 = v6.f_3();
        Receive(v7.f_0());
        Receive(v6.f_1());
      }
    }
    for (int i = 0; i < v1.f_0_size(); ++i) {
      Receive(v1.f_0(i));
    }
    const Message17::M2::M6::M13& v8 = v1.f_2();
    Receive(v8.f_0());
    const Message17::M2::M6::M13::M22& v9 = v8.f_5();
    Receive(v9.f_0());
    const Message17::M2::M6::M13::M21& v10 = v8.f_3();
    Receive(v10.f_0());
    for (int i = 0; i < v0.f_0_size(); ++i) {
      Receive(v0.f_0(i));
    }
    for (const auto& v11 : v0.f_4()) {
      Receive(v11.f_0());
    }
    const Message17::M2::M8& v12 = v0.f_3();
    Receive(v12.f_0());
    Receive(v12.f_1());
    Receive(v12.f_2());
  }
  const Message17::M3& v13 = (*message).f_4();
  Receive(v13.f_1());
  const Message17::M3::M9& v14 = v13.f_6();
  const Message17::M3::M9::M15& v15 = v14.f_3();
  Receive(v15.f_0());
  Receive(v15.f_5());
  for (const auto& v16 : v15.f_14()) {
    Receive(v16.f_0());
    const Message17::M3::M9::M15::M17::M36& v17 = v16.f_3();
    Receive(v17.f_1());
    const Message17::M3::M9::M15::M17::M36::M43& v18 = v17.f_5();
    Receive(v18.f_0());
    Receive(v18.f_2());
    Receive(v18.f_1());
    const Message17::M3::M9::M15::M17::M36::M45& v19 = v17.f_6();
    const Message17::M3::M9::M15::M17::M36::M45::M50& v20 = v19.f_4();
    for (const auto& v21 : v20.f_3()) {
      Receive(v21.f_0());
    }
    for (const auto& v22 : v20.f_5()) {
      Receive(v22.f_0());
    }
    Receive(v20.f_0());
    for (const auto& v23 : v20.f_4()) {
      Receive(v23.f_0());
    }
    Receive(v19.f_0());
    for (const auto& v24 : v19.f_2()) {
      Receive(v24.f_0());
    }
    Receive(v17.f_0());
  }
  Receive(v15.f_7());
  Receive(v15.f_3());
  Receive(v15.f_9());
  const Message17::M3::M9::M15::M23& v25 = v15.f_15();
  for (const auto& v26 : v25.f_6()) {
    Receive(v26.f_0());
    const Message17::M3::M9::M15::M23::M34::M46& v27 = v26.f_4();
    for (const auto& v28 : v27.f_5()) {
      Receive(v28.f_0());
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60& v29 = v28.f_3();
      const Message17::M3::M9::M15::M23::M34::M46::M53::M60::M64& v30 =
          v29.f_2();
      Receive(v30.f_0());
      Receive(v29.f_0());
    }
    Receive(v27.f_0());
  }
  Receive(v25.f_0());
  for (const auto& v31 : v25.f_3()) {
    Receive(v31.f_2());
    Receive(v31.f_1());
    for (int i = 0; i < v31.f_0_size(); ++i) {
      Receive(v31.f_0(i));
    }
  }
  Receive(v15.f_2());
  Receive(v15.f_6());
  Receive(v15.f_1());
  Receive(v15.f_4());
  Receive(v15.f_8());
  Receive(v14.f_0());
  const Message17::M3::M9::M12& v32 = v14.f_2();
  const Message17::M3::M9::M12::M20& v33 = v32.f_6();
  Receive(v33.f_0());
  for (const auto& v34 : v33.f_3()) {
    const Message17::M3::M9::M12::M20::M35::M42& v35 = v34.f_2();
    const Message17::M3::M9::M12::M20::M35::M42::M55& v36 = v35.f_3();
    Receive(v36.f_0());
    Receive(v35.f_0());
    const Message17::M3::M9::M12::M20::M35::M42::M56& v37 = v35.f_4();
    Receive(v37.f_0());
    Receive(v34.f_0());
  }
  const Message17::M3::M9::M12::M20::M31& v38 = v33.f_2();
  Receive(v38.f_0());
  const Message17::M3::M9::M12::M18& v39 = v32.f_3();
  Receive(v39.f_1());
  Receive(v39.f_0());
  for (const auto& v40 : v32.f_7()) {
    for (const auto& v41 : v40.f_6()) {
      Receive(v41.f_0());
      for (const auto& v42 : v41.f_4()) {
        Receive(v42.f_1());
        Receive(v42.f_0());
        for (int i = 0; i < v42.f_2_size(); ++i) {
          Receive(v42.f_2(i));
        }
      }
    }
    const Message17::M3::M9::M12::M29::M33& v43 = v40.f_4();
    Receive(v43.f_0());
    for (const auto& v44 : v43.f_4()) {
      Receive(v44.f_2());
      Receive(v44.f_1());
      Receive(v44.f_0());
    }
    Receive(v40.f_0());
  }
  for (const auto& v45 : v32.f_8()) {
    const Message17::M3::M9::M12::M30::M38& v46 = v45.f_2();
    const Message17::M3::M9::M12::M30::M38::M47& v47 = v46.f_3();
    const Message17::M3::M9::M12::M30::M38::M47::M52& v48 = v47.f_2();
    for (const auto& v49 : v48.f_3()) {
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63& v50 =
          v49.f_8();
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66& v51 =
          v50.f_3();
      Receive(v51.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67&
          v52 = v51.f_5();
      Receive(v52.f_0());
      for (const auto& v53 : v52.f_3()) {
        const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
            M68::M69& v54 = v53.f_2();
        for (const auto& v55 : v54.f_3()) {
          Receive(v55.f_1());
          Receive(v55.f_0());
          const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M66::M67::
              M68::M69::M70::M71& v56 = v55.f_4();
          Receive(v56.f_0());
        }
        Receive(v54.f_0());
        Receive(v53.f_0());
      }
      Receive(v50.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M63::M65& v57 =
          v50.f_2();
      Receive(v57.f_0());
      Receive(v49.f_1());
      Receive(v49.f_2());
      Receive(v49.f_0());
      const Message17::M3::M9::M12::M30::M38::M47::M52::M61::M62& v58 =
          v49.f_6();
      Receive(v58.f_1());
      Receive(v58.f_0());
    }
    for (int i = 0; i < v48.f_0_size(); ++i) {
      Receive(v48.f_0(i));
    }
    Receive(v47.f_0());
    Receive(v46.f_0());
    Receive(v45.f_0());
  }
  const Message17::M3::M9::M12::M19& v59 = v32.f_4();
  Receive(v59.f_0());
  Receive(v32.f_0());
  Receive(v13.f_0());
  Receive(v13.f_2());
  const Message17::M3::M4& v60 = v13.f_4();
  Receive(v60.f_0());
  const Message17::M3::M7& v61 = v13.f_5();
  Receive(v61.f_0());
  for (const auto& v62 : (*message).f_2()) {
    const Message17::M1::M10& v63 = v62.f_4();
    Receive(v63.f_0());
    for (const auto& v64 : v63.f_2()) {
      for (int i = 0; i < v64.f_0_size(); ++i) {
        Receive(v64.f_0(i));
      }
      const Message17::M1::M10::M14::M26& v65 = v64.f_3();
      const Message17::M1::M10::M14::M26::M40& v66 = v65.f_2();
      Receive(v66.f_4());
      for (const auto& v67 : v66.f_16()) {
        const Message17::M1::M10::M14::M26::M40::M44::M51& v68 = v67.f_2();
        Receive(v68.f_2());
        Receive(v68.f_1());
        Receive(v68.f_0());
        Receive(v67.f_0());
        const Message17::M1::M10::M14::M26::M40::M44::M54& v69 = v67.f_4();
        Receive(v69.f_0());
      }
      Receive(v66.f_3());
      Receive(v66.f_2());
      Receive(v66.f_6());
      Receive(v66.f_10());
      Receive(v66.f_7());
      Receive(v66.f_0());
      Receive(v66.f_8());
      Receive(v66.f_9());
      Receive(v66.f_5());
      Receive(v66.f_1());
      Receive(v65.f_0());
    }
    const Message17::M1::M5& v70 = v62.f_3();
    Receive(v70.f_0());
    Receive(v62.f_0());
  }
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
