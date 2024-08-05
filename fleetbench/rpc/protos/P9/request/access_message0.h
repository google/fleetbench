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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message0.pb.h"

namespace fleetbench::rpc::P9::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M5* v0 = message->mutable_f_55();
  Message0::M5::M101* v1 = v0->mutable_f_9();
  Message0::M5::M101::M116* v2 = v1->mutable_f_2();
  Message0::M5::M101::M116::M147* v3 = v2->mutable_f_3();
  Message0::M5::M101::M116::M147::M166* v4_0 = v3->add_f_6();
  v4_0->set_f_0(0x1cf183);
  v3->set_f_0(0x6b);
  v2->set_f_0(0x9fb7244);
  v2->set_f_1(0x9);
  message->set_f_19(s->substr(0, 1));
  Message0::M4* v5 = message->mutable_f_54();
  Message0::M4::M50* v6 = v5->mutable_f_7();
  v6->set_f_0(s->substr(0, 19));
  Message0::M4::M72* v7_0 = v5->add_f_8();
  v7_0->set_f_1(0x554cf76faf0d04b9);
  v7_0->set_f_0(0x39);
  message->set_f_32(0x3c6df8228420bb);
  Message0::M6* v8 = message->mutable_f_58();
  Message0::M6::M100* v9 = v8->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  Message0::M6::M75* v10 = v8->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message0::M6::M33* v11 = v8->mutable_f_3();
  v11->set_f_0(0x79);
  v8->set_f_0(0x6c);
  Message0::M6::M89* v12 = v8->mutable_f_5();
  v12->set_f_0(0x50b3256b);
  v12->set_f_1(0x3df39003);
  v12->set_f_5(0x15);
  Message0::M6::M89::M112* v13 = v12->mutable_f_9();
  v13->set_f_0(0x5);
  v12->set_f_2(0xc4c89bd);
  Message0::M17* v14 = message->mutable_f_72();
  Message0::M17::M49* v15 = v14->mutable_f_4();
  v15->set_f_0(0x29);
  Message0::M17::M80* v16 = v14->mutable_f_7();
  v16->set_f_0(s->substr(0, 25));
  Message0::M17::M91* v17_0 = v14->add_f_8();
  (void)v17_0;  // Suppresses clang-tidy.
  Message0::M17::M34* v18 = v14->mutable_f_3();
  (void)v18;  // Suppresses clang-tidy.
  Message0::M17::M60* v19 = v14->mutable_f_6();
  Message0::M17::M60::M126* v20_0 = v19->add_f_3();
  v20_0->set_f_0(s->substr(0, 4));
  Message0::M17::M104* v21 = v14->mutable_f_9();
  v21->set_f_2(0x37ba874af1a2a592);
  v21->set_f_3(true);
  Message0::M7* v22_0 = message->add_f_59();
  Message0::M7::M27* v23 = v22_0->mutable_f_3();
  v23->set_f_0(0x55);
  Message0::M7::M59* v24_0 = v22_0->add_f_14();
  v24_0->set_f_0(s->substr(0, 327));
  Message0::M7::M56* v25 = v22_0->mutable_f_11();
  v25->add_f_0(0x5e);
  v25->add_f_0(0x56);
  v25->set_f_2(s->substr(0, 5));
  v25->set_f_1(s->substr(0, 22));
  Message0::M7::M56::M122* v26 = v25->mutable_f_5();
  v26->set_f_0(0x4a0fd36);
  Message0::M7::M61* v27 = v22_0->mutable_f_15();
  Message0::M7::M61::M114* v28 = v27->mutable_f_2();
  (void)v28;  // Suppresses clang-tidy.
  v22_0->set_f_0(Message0::M7::E2_CONST_4);
  message->set_f_5(0x7c);
  message->set_f_31(0x39);
  Message0::M11* v29_0 = message->add_f_63();
  v29_0->set_f_0(0x5c0562aacc372186);
  v29_0->set_f_1(s->substr(0, 2));
  Message0::M11::M106* v30 = v29_0->mutable_f_11();
  v30->set_f_0(0x6b);
  v30->set_f_3(0x6711406);
  Message0::M11::M58* v31_0 = v29_0->add_f_9();
  v31_0->set_f_1(0x13cb4b435aaae014);
  v31_0->set_f_0(0x742c99856f88d478);
  v29_0->set_f_3(0x5302e484ce23be7e);
  Message0::M14* v32 = message->mutable_f_69();
  Message0::M14::M79* v33 = v32->mutable_f_15();
  v33->set_f_0(s->substr(0, 28));
  v32->set_f_1(true);
  v32->set_f_6(false);
  v32->set_f_4(0xec065);
  v32->set_f_0(0x54);
  v32->set_f_3(0x38761e8a);
  v32->set_f_2(false);
  Message0::M14::M105* v34 = v32->mutable_f_17();
  (void)v34;  // Suppresses clang-tidy.
  Message0::M3* v35 = message->mutable_f_52();
  Message0::M3::M25* v36 = v35->mutable_f_3();
  (void)v36;  // Suppresses clang-tidy.
  Message0::M3::M103* v37 = v35->mutable_f_8();
  (void)v37;  // Suppresses clang-tidy.
  Message0::M3::M28* v38 = v35->mutable_f_4();
  v38->set_f_0(0x911184e);
  Message0::M3::M65* v39 = v35->mutable_f_7();
  v39->set_f_1(0x78979ce);
  v39->set_f_0(false);
  v39->set_f_2(0x16c6ca348da4e06d);
  Message0::M2* v40 = message->mutable_f_50();
  v40->set_f_3(false);
  Message0::M2::M38* v41 = v40->mutable_f_9();
  (void)v41;  // Suppresses clang-tidy.
  Message0::M2::M36* v42 = v40->mutable_f_7();
  v42->set_f_0(0x170f8dae70ef5660);
  v40->set_f_2(0x17);
  Message0::M2::M43* v43 = v40->mutable_f_11();
  v43->set_f_0(false);
  v40->add_f_1(0x485878b);
  message->set_f_1(0x40);
  Message0::M12* v44_0 = message->add_f_64();
  Message0::M12::M83* v45 = v44_0->mutable_f_7();
  v45->add_f_0(s->substr(0, 2));
  v45->add_f_0(s->substr(0, 3));
  v45->add_f_0(s->substr(0, 1));
  v45->set_f_2(s->substr(0, 106));
  message->set_f_21(true);
  message->set_f_22(0x7d);
  Message0::M13* v46 = message->mutable_f_68();
  Message0::M13::M22* v47 = v46->mutable_f_3();
  Message0::M13::M22::M117* v48_0 = v47->add_f_2();
  Message0::M13::M22::M117::M144* v49 = v48_0->mutable_f_2();
  v49->set_f_1(0x31a3);
  Message0::M13::M22::M117::M144::M165* v50 = v49->mutable_f_4();
  v50->set_f_0(false);
  v49->set_f_0(0x23fe);
  Message0::M13::M22::M117::M144::M162* v51_0 = v49->add_f_3();
  v51_0->set_f_1(0x22);
  v51_0->set_f_3(0x1307523220f5a6fa);
  Message0::M13::M22::M117::M144::M167* v52 = v49->mutable_f_5();
  v52->set_f_2(0x1c);
  v48_0->set_f_0(0x6baf875e3d449a30);
  Message0::M13::M42* v53_0 = v46->add_f_4();
  v53_0->set_f_0(s->substr(0, 19));
  Message0::M13::M99* v54_0 = v46->add_f_9();
  v54_0->set_f_0(0xa18b652);
  Message0::M13::M99::M128* v55 = v54_0->mutable_f_5();
  v55->set_f_3(s->substr(0, 3));
  v55->set_f_0(0xe52414ad38937cc);
  Message0::M13::M84* v56 = v46->mutable_f_7();
  v56->set_f_2(0x5a1c614f);
  Message0::M13::M71* v57_0 = v46->add_f_6();
  v57_0->set_f_0(0x4f7fc63f418bfb1e);
  v57_0->set_f_3(Message0::M13::M71::E6_CONST_2);
  v57_0->set_f_2(true);
  Message0::M13::M70* v58 = v46->mutable_f_5();
  (void)v58;  // Suppresses clang-tidy.
  message->set_f_25(s->substr(0, 14));
  message->set_f_8(false);
  Message0::M9* v59_0 = message->add_f_61();
  v59_0->set_f_0(s->substr(0, 88));
  message->set_f_9(0x176c8aeeeafd9427);
  message->set_f_2(s->substr(0, 24));
  message->set_f_17(0x383629c22121f90d);
  Message0::M8* v60 = message->mutable_f_60();
  Message0::M8::M88* v61_0 = v60->add_f_5();
  v61_0->set_f_3(0x2d);
  v61_0->set_f_0(true);
  v61_0->set_f_2(false);
  v60->set_f_0(0x20e1d757b514dd0d);
  Message0::M19* v62 = message->mutable_f_76();
  Message0::M19::M74* v63_0 = v62->add_f_7();
  v63_0->set_f_0(Message0::M19::M74::E7_CONST_5);
  v62->set_f_0(0x53bfcd95ab72da5d);
  Message0::M19::M102* v64 = v62->mutable_f_12();
  v64->set_f_0(0x14c0df);
  Message0::M19::M48* v65 = v62->mutable_f_6();
  (void)v65;  // Suppresses clang-tidy.
  Message0::M19::M77* v66_0 = v62->add_f_9();
  (void)v66_0;  // Suppresses clang-tidy.
  Message0::M19::M85* v67 = v62->mutable_f_10();
  v67->set_f_0(s->substr(0, 4));
  Message0::M19::M94* v68_0 = v62->add_f_11();
  Message0::M19::M94::M124* v69 = v68_0->mutable_f_3();
  v69->set_f_2(0x5cce9c69);
  v69->set_f_0(s->substr(0, 3));
  message->set_f_20(0x26);
  message->set_f_18(s->substr(0, 7));
  message->set_f_0(false);
  message->set_f_13(0x4f);
  message->set_f_4(0x5a2af97c26c1b0d5);
  Message0::M16* v70_0 = message->add_f_71();
  Message0::M16::M57* v71 = v70_0->mutable_f_5();
  v71->set_f_2(s->substr(0, 12));
  v71->set_f_0(0x31);
  v71->set_f_1(0x6f5d421f4806773f);
  Message0::M16::M93* v72 = v70_0->mutable_f_6();
  v72->set_f_0(false);
  Message0::M16::M93::M121* v73 = v72->mutable_f_2();
  v73->set_f_0(0x14);
  Message0::M16::M44* v74 = v70_0->mutable_f_2();
  v74->set_f_0(0xb575c53);
  message->set_f_28(0x51);
  Message0::M10* v75 = message->mutable_f_62();
  Message0::M10::M107* v76 = v75->mutable_f_11();
  v76->set_f_0(s->substr(0, 870));
  Message0::M10::M24* v77 = v75->mutable_f_5();
  (void)v77;  // Suppresses clang-tidy.
  Message0::M10::M86* v78 = v75->mutable_f_10();
  v78->set_f_3(s->substr(0, 4));
  v78->set_f_0(0x33ad32ba305fe57f);
  v78->set_f_2(true);
  message->set_f_26(0x8913c73);
  message->set_f_27(0x1de279b2f628ef66);
  Message0::M18* v79 = message->mutable_f_73();
  v79->set_f_1(0x1ed079);
  Message0::M18::M82* v80 = v79->mutable_f_10();
  Message0::M18::M82::M134* v81 = v80->mutable_f_2();
  v81->set_f_0(0x4dbfbc9152eaa4ae);
  v80->set_f_0(s->substr(0, 8));
  v79->set_f_0(0x1277d45e47646d8c);
  Message0::M18::M53* v82 = v79->mutable_f_6();
  v82->set_f_0(s->substr(0, 1999));
  Message0::M18::M95* v83_0 = v79->add_f_11();
  v83_0->set_f_2(0xf30);
  v83_0->set_f_0(0x6d);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_22(0x24);
  message->set_f_2(s->substr(0, 31));
  Message0::M8* v0 = message->mutable_f_60();
  Message0::M8::M97* v1 = v0->mutable_f_6();
  Message0::M8::M97::M123* v2 = v1->mutable_f_3();
  v2->set_f_0(s->substr(0, 22));
  Message0::M8::M97::M136* v3 = v1->mutable_f_5();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M8::M88* v4_0 = v0->add_f_5();
  v4_0->set_f_1(false);
  message->set_f_15(0x26a4e4cc25fbdef7);
  message->set_f_21(true);
  Message0::M9* v5_0 = message->add_f_61();
  Message0::M9::M40* v6 = v5_0->mutable_f_3();
  Message0::M9::M40::M110* v7 = v6->mutable_f_2();
  Message0::M9::M40::M110::M145* v8_0 = v7->add_f_3();
  v8_0->add_f_1(Message0::M9::M40::M110::M145::E11_CONST_1);
  v8_0->set_f_0(0x70ae8d17be808f78);
  Message0::M9::M54* v9 = v5_0->mutable_f_4();
  v9->set_f_5(0.187720);
  v9->set_f_4(0x2ee25511670c860e);
  Message0::M9::M78* v10 = v5_0->mutable_f_6();
  v10->set_f_4(0x161525);
  v10->set_f_2(false);
  v10->set_f_0(true);
  v5_0->set_f_0(s->substr(0, 86));
  Message0::M7* v11_0 = message->add_f_59();
  Message0::M7::M56* v12 = v11_0->mutable_f_11();
  v12->set_f_1(s->substr(0, 15));
  Message0::M7::M56::M122* v13 = v12->mutable_f_5();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_2(s->substr(0, 4));
  v12->add_f_0(0x388c6ff);
  Message0::M7::M61* v14 = v11_0->mutable_f_15();
  Message0::M7::M61::M114* v15 = v14->mutable_f_2();
  v15->set_f_0(false);
  v14->add_f_0(s->substr(0, 1));
  message->set_f_7(0x16);
  message->set_f_25(s->substr(0, 25));
  message->set_f_14(0x854);
  message->set_f_20(0x3dbd);
  message->set_f_16(0x4dc);
  message->set_f_10(0x4);
  Message0::M19* v16 = message->mutable_f_76();
  Message0::M19::M94* v17_0 = v16->add_f_11();
  (void)v17_0;  // Suppresses clang-tidy.
  Message0::M19::M39* v18 = v16->mutable_f_4();
  v18->set_f_2(0x30);
  v18->set_f_3(0xf5e);
  Message0::M19::M102* v19 = v16->mutable_f_12();
  (void)v19;  // Suppresses clang-tidy.
  Message0::M19::M74* v20_0 = v16->add_f_7();
  (void)v20_0;  // Suppresses clang-tidy.
  Message0::M19::M77* v21_0 = v16->add_f_9();
  (void)v21_0;  // Suppresses clang-tidy.
  Message0::M19::M85* v22 = v16->mutable_f_10();
  v22->set_f_0(s->substr(0, 6));
  Message0::M19::M48* v23 = v16->mutable_f_6();
  v23->set_f_0(false);
  message->set_f_3(s->substr(0, 6));
  Message0::M6* v24 = message->mutable_f_58();
  Message0::M6::M30* v25_0 = v24->add_f_2();
  v25_0->set_f_23(0x747abb72cee85f8f);
  v25_0->set_f_17(0.659678);
  v25_0->set_f_0(0x189);
  Message0::M6::M30::M140* v26_0 = v25_0->add_f_36();
  (void)v26_0;  // Suppresses clang-tidy.
  v25_0->set_f_19(0x192594bc0c0fe1a2);
  v25_0->set_f_4(true);
  v25_0->set_f_18(0x67fa158);
  v25_0->set_f_13(s->substr(0, 21));
  v25_0->set_f_5(true);
  v25_0->set_f_8(0x1aa0095da655cf24);
  v25_0->set_f_10(s->substr(0, 8));
  v25_0->set_f_11(true);
  v25_0->set_f_22(s->substr(0, 1));
  v25_0->set_f_12(0x780ad00f6abcbba0);
  v25_0->set_f_3(true);
  v25_0->set_f_9(s->substr(0, 8));
  v25_0->set_f_15(0x494);
  Message0::M6::M33* v27 = v24->mutable_f_3();
  v27->set_f_0(0x1bac53);
  Message0::M6::M100* v28 = v24->mutable_f_6();
  Message0::M6::M100::M135* v29 = v28->mutable_f_5();
  (void)v29;  // Suppresses clang-tidy.
  v24->set_f_0(0xd6d);
  message->set_f_6(0x29);
  message->set_f_27(0x487bc486bd81436b);
  Message0::M15* v30 = message->mutable_f_70();
  v30->set_f_0(0x2bdedc52);
  Message0::M15::M73* v31_0 = v30->add_f_4();
  (void)v31_0;  // Suppresses clang-tidy.
  Message0::M15::M62* v32 = v30->mutable_f_3();
  Message0::M15::M62::M119* v33_0 = v32->add_f_2();
  Message0::M15::M62::M119::M146* v34_0 = v33_0->add_f_2();
  v34_0->set_f_0(0x3f);
  Message0::M15::M62::M137* v35 = v32->mutable_f_3();
  v35->set_f_12(0x1d46);
  v35->set_f_9(false);
  v35->set_f_28(false);
  v35->set_f_16(0x62);
  v35->set_f_7(true);
  v35->set_f_3(0xabc);
  v35->set_f_0(0x398b7d2f4960267a);
  v35->set_f_18(s->substr(0, 12));
  v35->set_f_2(0xa);
  v35->set_f_21(0x1c);
  v35->set_f_24(0x49a4285d2c40308d);
  v35->set_f_14(0x3f);
  v35->set_f_4(s->substr(0, 126));
  v35->set_f_1(s->substr(0, 1));
  v35->set_f_23(0x4e);
  v35->set_f_11(s->substr(0, 112));
  message->set_f_17(0x78dd33d5ad9c878e);
  Message0::M10* v36 = message->mutable_f_62();
  Message0::M10::M86* v37 = v36->mutable_f_10();
  v37->set_f_0(0x72f7bf56370942fd);
  v37->set_f_2(false);
  v37->set_f_1(0x77a500f018610637);
  v37->set_f_3(s->substr(0, 3));
  Message0::M10::M24* v38 = v36->mutable_f_5();
  v38->set_f_0(0.528044);
  v36->set_f_0(0x20);
  Message0::M10::M107* v39 = v36->mutable_f_11();
  v39->set_f_0(s->substr(0, 14));
  Message0::M4* v40 = message->mutable_f_54();
  Message0::M4::M72* v41_0 = v40->add_f_8();
  v41_0->set_f_0(0xb0e9b33);
  v40->set_f_0(0xbc4);
  Message0::M4::M32* v42_0 = v40->add_f_2();
  v42_0->set_f_0(true);
  message->set_f_26(0xa);
  Message0::M3* v43 = message->mutable_f_52();
  Message0::M3::M103* v44 = v43->mutable_f_8();
  (void)v44;  // Suppresses clang-tidy.
  Message0::M3::M63* v45 = v43->mutable_f_5();
  v45->add_f_0(Message0::M3::M63::E4_CONST_3);
  v45->add_f_0(Message0::M3::M63::E4_CONST_5);
  v45->add_f_0(Message0::M3::M63::E4_CONST_5);
  v45->add_f_0(Message0::M3::M63::E4_CONST_1);
  Message0::M3::M25* v46 = v43->mutable_f_3();
  (void)v46;  // Suppresses clang-tidy.
  v43->set_f_0(0x667f5f61a6124611);
  Message0::M3::M65* v47 = v43->mutable_f_7();
  v47->set_f_0(false);
  v47->set_f_1(0x4623e79c);
  v47->set_f_3(s->substr(0, 475));
  Message0::M12* v48_0 = message->add_f_64();
  v48_0->set_f_0(0x26);
  Message0::M12::M83* v49 = v48_0->mutable_f_7();
  Message0::M12::M83::M127* v50 = v49->mutable_f_5();
  v50->set_f_3(0xa2c9b2b);
  v50->set_f_0(0x74);
  v50->set_f_4(0.732502);
  v50->set_f_1(0x1a74a6);
  Message0::M12::M83::M127::M152* v51_0 = v50->add_f_6();
  (void)v51_0;  // Suppresses clang-tidy.
  v49->add_f_0(s->substr(0, 5));
  v49->add_f_0(s->substr(0, 4));
  v49->set_f_1(true);
  Message0::M12::M52* v52 = v48_0->mutable_f_3();
  (void)v52;  // Suppresses clang-tidy.
  Message0::M12::M90* v53 = v48_0->mutable_f_9();
  (void)v53;  // Suppresses clang-tidy.
  Message0::M17* v54 = message->mutable_f_72();
  Message0::M17::M34* v55 = v54->mutable_f_3();
  v55->set_f_0(0.793619);
  Message0::M17::M80* v56 = v54->mutable_f_7();
  (void)v56;  // Suppresses clang-tidy.
  v54->set_f_0(s->substr(0, 6));
  Message0::M17::M104* v57 = v54->mutable_f_9();
  v57->set_f_1(0x48cbc7ce);
  v57->set_f_0(0x7626377c6e2e637);
  v57->set_f_2(0x2427739d3a2100da);
  Message0::M17::M60* v58 = v54->mutable_f_6();
  v58->set_f_0(true);
  message->set_f_0(false);
  message->set_f_31(0x13);
  message->set_f_18(s->substr(0, 2));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_49();
  v0->set_f_0(false);
  Message0::M1::M76* v1 = v0->mutable_f_7();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M1::M23* v2 = v0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M1::M92* v3 = v0->mutable_f_10();
  v3->set_f_1(0x2e1c69b2ca327c15);
  v3->set_f_0(s->substr(0, 119));
  Message0::M1::M29* v4 = v0->mutable_f_4();
  v4->set_f_0(s->substr(0, 11));
  Message0::M1::M66* v5_0 = v0->add_f_6();
  v5_0->set_f_0(0x3a1820bd77b88887);
  message->set_f_26(0x62);
  message->set_f_22(0x133f8);
  message->set_f_25(s->substr(0, 47));
  message->set_f_6(0x3a94);
  message->set_f_27(0x2cbc21eefb17fbc3);
  message->set_f_14(0xf62535d);
  message->set_f_19(s->substr(0, 4));
  message->set_f_29(0x7e);
  Message0::M5* v6 = message->mutable_f_55();
  Message0::M5::M51* v7_0 = v6->add_f_3();
  v7_0->set_f_0(0.406105);
  Message0::M5::M51::M130* v8_0 = v7_0->add_f_3();
  (void)v8_0;  // Suppresses clang-tidy.
  Message0::M5::M69* v9 = v6->mutable_f_8();
  v9->set_f_1(true);
  v9->set_f_2(0x27);
  v9->set_f_0(0x53bcec3fa9ce4bc5);
  Message0::M5::M64* v10 = v6->mutable_f_6();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_3(s->substr(0, 7));
  message->set_f_24(0x48120);
  Message0::M10* v11 = message->mutable_f_62();
  Message0::M10::M24* v12 = v11->mutable_f_5();
  v12->set_f_0(0.727051);
  Message0::M10::M81* v13_0 = v11->add_f_7();
  v13_0->set_f_1(false);
  v13_0->set_f_0(0x1c7495);
  v11->set_f_0(0x2d);
  Message0::M10::M107* v14 = v11->mutable_f_11();
  v14->set_f_0(s->substr(0, 77));
  Message0::M10::M86* v15 = v11->mutable_f_10();
  v15->set_f_0(0x7ab8d5fdcc3a0798);
  v15->set_f_1(0x636f63d1ce272ffa);
  v15->set_f_3(s->substr(0, 8));
  message->set_f_32(0x6735f44fb98654);
  Message0::M12* v16_0 = message->add_f_64();
  Message0::M12::M83* v17 = v16_0->mutable_f_7();
  v17->set_f_2(s->substr(0, 1));
  Message0::M12::M83::M127* v18 = v17->mutable_f_5();
  v18->set_f_2(0.957169);
  v16_0->set_f_0(0x5d);
  Message0::M12::M52* v19 = v16_0->mutable_f_3();
  v19->set_f_0(0x4d);
  message->set_f_8(true);
  message->set_f_31(0x3a);
  message->set_f_16(0x61);
  message->set_f_28(0x12cf80);
  message->set_f_4(0x105fe4379b9634e0);
  message->set_f_13(0x23);
  message->set_f_1(0x2d);
  message->set_f_11(0x42);
  Message0::M3* v20 = message->mutable_f_52();
  v20->set_f_0(0x79fdcabd5ccf0a83);
  Message0::M3::M25* v21 = v20->mutable_f_3();
  (void)v21;  // Suppresses clang-tidy.
  Message0::M3::M63* v22 = v20->mutable_f_5();
  (void)v22;  // Suppresses clang-tidy.
  Message0::M3::M28* v23 = v20->mutable_f_4();
  (void)v23;  // Suppresses clang-tidy.
  Message0::M3::M103* v24 = v20->mutable_f_8();
  v24->set_f_0(0x4314086437a65e37);
  Message0::M3::M21* v25 = v20->mutable_f_2();
  v25->set_f_0(0x1ca35f);
  Message0::M3::M21::M118* v26_0 = v25->add_f_6();
  v26_0->set_f_1(0x54);
  v25->set_f_1(0x30c0);
  message->set_f_15(0x4c4b2a2bf50a79e4);
  Message0::M17* v27 = message->mutable_f_72();
  Message0::M17::M80* v28 = v27->mutable_f_7();
  v28->set_f_0(s->substr(0, 69));
  v27->set_f_0(s->substr(0, 42));
  Message0::M17::M49* v29 = v27->mutable_f_4();
  (void)v29;  // Suppresses clang-tidy.
  Message0::M17::M34* v30 = v27->mutable_f_3();
  (void)v30;  // Suppresses clang-tidy.
  message->set_f_0(true);
  Message0::M13* v31 = message->mutable_f_68();
  Message0::M13::M71* v32_0 = v31->add_f_6();
  v32_0->set_f_0(0x2b66f3deea5aa061);
  v32_0->set_f_2(false);
  v32_0->set_f_3(Message0::M13::M71::E6_CONST_2);
  Message0::M13::M22* v33 = v31->mutable_f_3();
  v33->set_f_0(s->substr(0, 246));
  Message0::M13::M22::M117* v34_0 = v33->add_f_2();
  v34_0->set_f_0(0x3008f13b6094c0e7);
  Message0::M13::M22::M117::M144* v35 = v34_0->mutable_f_2();
  Message0::M13::M22::M117::M144::M165* v36 = v35->mutable_f_4();
  v36->set_f_0(false);
  v36->set_f_2(0x10fa52);
  v35->set_f_0(0x47);
  Message0::M13::M84* v37 = v31->mutable_f_7();
  v37->add_f_1(0x69);
  v37->set_f_2(0xff09171);
  Message0::M13::M42* v38_0 = v31->add_f_4();
  (void)v38_0;  // Suppresses clang-tidy.
  v31->set_f_0(0x14b9e4);
  Message0::M15* v39 = message->mutable_f_70();
  v39->set_f_0(0xfb79403);
  Message0::M15::M62* v40 = v39->mutable_f_3();
  Message0::M15::M62::M137* v41 = v40->mutable_f_3();
  v41->set_f_16(0x4b);
  v41->set_f_2(0x14ce59);
  v41->set_f_15(0x7468af6277ecf4d6);
  v41->set_f_14(0x56);
  v41->set_f_9(true);
  v41->set_f_18(s->substr(0, 302));
  v41->set_f_25(s->substr(0, 16));
  v41->set_f_27(0x3a);
  v41->set_f_22(false);
  v41->set_f_26(0x55a169f6);
  v41->set_f_28(false);
  v41->set_f_4(s->substr(0, 5));
  v41->set_f_1(s->substr(0, 117));
  v41->set_f_6(0xf0f7f8a7ed878ea);
  v41->set_f_24(0x705285749c8a63a9);
  v41->set_f_12(0x20fa);
  v41->set_f_7(true);
  v41->set_f_21(0x54);
  v40->set_f_0(0x58);
  Message0::M15::M62::M119* v42_0 = v40->add_f_2();
  Message0::M15::M62::M119::M146* v43_0 = v42_0->add_f_2();
  v43_0->set_f_0(0x76);
  Message0::M7* v44_0 = message->add_f_59();
  Message0::M7::M46* v45_0 = v44_0->add_f_7();
  (void)v45_0;  // Suppresses clang-tidy.
  Message0::M7::M56* v46 = v44_0->mutable_f_11();
  Message0::M7::M56::M122* v47 = v46->mutable_f_5();
  v47->set_f_0(0x10e4e13);
  Message0::M7::M47* v48 = v44_0->mutable_f_9();
  v48->set_f_0(0x248581b496b8681);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M10* v0 = message->mutable_f_62();
  Message0::M10::M86* v1 = v0->mutable_f_10();
  v1->set_f_1(0x688c39ca4a3ff7d6);
  v1->set_f_2(false);
  v1->set_f_3(s->substr(0, 34));
  Message0::M10::M24* v2 = v0->mutable_f_5();
  v2->set_f_0(0.317852);
  Message0::M10::M81* v3_0 = v0->add_f_7();
  v3_0->set_f_1(false);
  v3_0->set_f_2(s->substr(0, 29));
  v3_0->set_f_0(0x45);
  Message0::M8* v4 = message->mutable_f_60();
  Message0::M8::M88* v5_0 = v4->add_f_5();
  v5_0->set_f_2(true);
  v5_0->set_f_1(false);
  v5_0->set_f_3(0x6f);
  message->set_f_10(0x75);
  Message0::M15* v6 = message->mutable_f_70();
  Message0::M15::M98* v7 = v6->mutable_f_6();
  v7->set_f_1(0x18);
  v7->set_f_2(0x50a041cc);
  Message0::M15::M73* v8_0 = v6->add_f_4();
  v8_0->set_f_0(0x9);
  Message0::M11* v9_0 = message->add_f_63();
  v9_0->set_f_2(0x1c4b3fffa2451858);
  Message0::M11::M41* v10 = v9_0->mutable_f_7();
  v10->set_f_0(0x6c09f7375f932706);
  Message0::M11::M58* v11_0 = v9_0->add_f_9();
  v11_0->set_f_0(0x3c197e51df8738b4);
  v9_0->set_f_0(0x75f72b7eee4403c8);
  message->set_f_28(0xa284df8);
  message->set_f_17(0x237513634cb43a58);
  message->set_f_9(0x613b6294e8a66d84);
  message->set_f_20(0x6b);
  message->set_f_25(s->substr(0, 2));
  message->set_f_13(0xe380e);
  Message0::M12* v12_0 = message->add_f_64();
  Message0::M12::M83* v13 = v12_0->mutable_f_7();
  v13->add_f_0(s->substr(0, 6));
  v13->set_f_2(s->substr(0, 5));
  v13->set_f_1(false);
  Message0::M12::M90* v14 = v12_0->mutable_f_9();
  v14->set_f_0(s->substr(0, 3));
  message->set_f_15(0x7e2bd18c313fb836);
  Message0::M17* v15 = message->mutable_f_72();
  Message0::M17::M80* v16 = v15->mutable_f_7();
  v16->set_f_0(s->substr(0, 17));
  Message0::M17::M49* v17 = v15->mutable_f_4();
  (void)v17;  // Suppresses clang-tidy.
  Message0::M17::M91* v18_0 = v15->add_f_8();
  v18_0->set_f_0(0x35);
  v15->set_f_0(s->substr(0, 8));
  Message0::M17::M60* v19 = v15->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  Message0::M17::M104* v20 = v15->mutable_f_9();
  v20->set_f_2(0x230cc5fec486274f);
  v20->set_f_0(0x6344b3f6acb8b131);
  message->set_f_27(0x786170337c364ec1);
  message->set_f_18(s->substr(0, 22));
  message->set_f_5(0x62);
  message->set_f_30(0x6e);
  Message0::M9* v21_0 = message->add_f_61();
  v21_0->set_f_0(s->substr(0, 17));
  Message0::M9::M54* v22 = v21_0->mutable_f_4();
  v22->set_f_6(0x10);
  v22->set_f_1(0x556fbebceb8082a1);
  v22->set_f_0(s->substr(0, 42));
  v22->set_f_2(0x3b0750068c4770f2);
  Message0::M9::M78* v23 = v21_0->mutable_f_6();
  v23->set_f_1(s->substr(0, 31));
  v23->set_f_0(false);
  v23->set_f_4(0x27e7);
  message->set_f_24(0x73);
  message->set_f_7(0x65);
  Message0::M2* v24 = message->mutable_f_50();
  v24->set_f_2(0xb7208);
  v24->set_f_0(Message0::M2::E1_CONST_3);
  Message0::M2::M36* v25 = v24->mutable_f_7();
  v25->set_f_0(0x67570422df2cdf2c);
  Message0::M2::M43* v26 = v24->mutable_f_11();
  (void)v26;  // Suppresses clang-tidy.
  message->set_f_16(0x19);
  message->set_f_21(true);
  message->set_f_29(0x46);
  message->set_f_23(0x7d);
  Message0::M19* v27 = message->mutable_f_76();
  Message0::M19::M39* v28 = v27->mutable_f_4();
  v28->set_f_2(0x83e34);
  v28->set_f_0(s->substr(0, 396));
  v28->set_f_3(0x20);
  Message0::M19::M39::M131* v29 = v28->mutable_f_6();
  (void)v29;  // Suppresses clang-tidy.
  Message0::M19::M85* v30 = v27->mutable_f_10();
  v30->set_f_0(s->substr(0, 4));
  Message0::M19::M74* v31_0 = v27->add_f_7();
  v31_0->set_f_0(Message0::M19::M74::E7_CONST_4);
  Message0::M19::M94* v32_0 = v27->add_f_11();
  Message0::M19::M94::M124* v33 = v32_0->mutable_f_3();
  v33->set_f_1(0x2a);
  v33->set_f_2(0xc8d7184);
  v33->set_f_0(s->substr(0, 6));
  v32_0->set_f_0(true);
  Message0::M19::M26* v34 = v27->mutable_f_3();
  Message0::M19::M26::M108* v35 = v34->mutable_f_6();
  v35->set_f_0(0x93abd30);
  Message0::M19::M26::M141* v36 = v34->mutable_f_7();
  (void)v36;  // Suppresses clang-tidy.
  v34->set_f_2(true);
  Message0::M19::M77* v37_0 = v27->add_f_9();
  (void)v37_0;  // Suppresses clang-tidy.
  Message0::M19::M48* v38 = v27->mutable_f_6();
  v38->set_f_0(false);
  message->set_f_14(0x21);
  message->set_f_1(0x598c4ae);
  message->set_f_6(0x1a17);
  Message0::M6* v39 = message->mutable_f_58();
  Message0::M6::M33* v40 = v39->mutable_f_3();
  (void)v40;  // Suppresses clang-tidy.
  Message0::M6::M89* v41 = v39->mutable_f_5();
  v41->set_f_4(0x7d);
  v41->set_f_5(0x20);
  v41->set_f_2(0x28);
  v41->set_f_0(0x2052bd65);
  Message0::M6::M89::M112* v42 = v41->mutable_f_9();
  v42->set_f_0(0x21);
  Message0::M6::M30* v43_0 = v39->add_f_2();
  v43_0->set_f_14(0x1c1358f9057e9899);
  v43_0->set_f_22(s->substr(0, 25));
  v43_0->set_f_1(0xe);
  v43_0->set_f_17(0.570301);
  v43_0->set_f_0(0x737024835);
  v43_0->set_f_13(s->substr(0, 30));
  v43_0->set_f_19(0x37eda794abde01dd);
  v43_0->set_f_16(0x38);
  v43_0->set_f_7(0xba81481);
  v43_0->set_f_20(Message0::M6::M30::E3_CONST_2);
  v43_0->set_f_9(s->substr(0, 4));
  v43_0->set_f_2(false);
  v43_0->set_f_6(0x5c6eb37);
  v43_0->set_f_21(s->substr(0, 29));
  v43_0->set_f_15(0x18d3);
  Message0::M6::M30::M140* v44_0 = v43_0->add_f_36();
  v44_0->set_f_0(false);
  v43_0->set_f_5(false);
  v43_0->set_f_4(false);
  v43_0->set_f_10(s->substr(0, 1));
  Message0::M6::M100* v45 = v39->mutable_f_6();
  v45->set_f_1(0x49bd5070744c2ca4);
  v45->add_f_0(s->substr(0, 3));
  v45->add_f_0(s->substr(0, 2));
  Message0::M6::M75* v46 = v39->mutable_f_4();
  v46->set_f_0(0x30577c1e70844625);
  Message0::M4* v47 = message->mutable_f_54();
  v47->set_f_0(0x15ee79);
  Message0::M4::M32* v48_0 = v47->add_f_2();
  v48_0->set_f_0(false);
  message->set_f_11(0xdc9e785);
  Message0::M13* v49 = message->mutable_f_68();
  Message0::M13::M22* v50 = v49->mutable_f_3();
  v50->set_f_0(s->substr(0, 22));
  Message0::M13::M42* v51_0 = v49->add_f_4();
  (void)v51_0;  // Suppresses clang-tidy.
  Message0::M13::M84* v52 = v49->mutable_f_7();
  v52->set_f_2(0x47b3a41e);
  v52->set_f_0(Message0::M13::M84::E8_CONST_3);
  Message0::M13::M70* v53 = v49->mutable_f_5();
  v53->set_f_0(true);
  Message0::M13::M99* v54_0 = v49->add_f_9();
  Message0::M13::M99::M128* v55 = v54_0->mutable_f_5();
  v55->set_f_3(s->substr(0, 1927));
  v55->set_f_1(true);
  v55->set_f_2(0x61e2ffbcf93c17c6);
  message->set_f_19(s->substr(0, 1));
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
}  // namespace fleetbench::rpc::P9::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
