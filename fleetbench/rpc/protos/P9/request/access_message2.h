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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message2.pb.h"

namespace fleetbench::rpc::P9::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_14(0x17);
  message->set_f_15(0.404794);
  Message2::M14* v0 = message->mutable_f_76();
  Message2::M14::M59* v1 = v0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M14::M26* v2 = v0->mutable_f_3();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_6(0x28);
  Message2::M4* v3_0 = message->add_f_60();
  Message2::M4::M39* v4 = v3_0->mutable_f_6();
  v4->set_f_0(0xb621d60);
  v4->set_f_2(s->substr(0, 18));
  v4->set_f_1(0xdf1838744662615b);
  Message2::M4::M79* v5_0 = v3_0->add_f_9();
  v5_0->set_f_3(0x25);
  Message2::M4::M79::M81* v6 = v5_0->mutable_f_6();
  v6->set_f_0(0xb);
  Message2::M4::M65* v7 = v3_0->mutable_f_7();
  v7->set_f_0(0xbf1db73e8ecadfbc);
  Message2::M11* v8 = message->mutable_f_71();
  v8->set_f_0(0xbbc60baae7f64cae);
  Message2::M11::M44* v9_0 = v8->add_f_3();
  (void)v9_0;  // Suppresses clang-tidy.
  message->set_f_30(0x26);
  message->set_f_19(s->substr(0, 8));
  message->set_f_21(0x46);
  message->set_f_12(0xb6cf97c1af6f265);
  Message2::M9* v10 = message->mutable_f_68();
  v10->set_f_0(s->substr(0, 2));
  Message2::M9::M22* v11 = v10->mutable_f_2();
  v11->set_f_3(Message2::M9::M22::E4_CONST_1);
  v11->set_f_2(false);
  v11->set_f_0(0.334277);
  Message2::M9::M40* v12 = v10->mutable_f_7();
  v12->set_f_0(0x66);
  Message2::M9::M40::M107* v13 = v12->mutable_f_3();
  v13->set_f_2(false);
  v13->set_f_1(0x14ceb2);
  Message2::M9::M30* v14 = v10->mutable_f_3();
  v14->set_f_0(s->substr(0, 93));
  Message2::M8* v15 = message->mutable_f_66();
  v15->set_f_1(0xc6509436fef5316);
  Message2::M8::M50* v16 = v15->mutable_f_9();
  Message2::M8::M50::M109* v17_0 = v16->add_f_3();
  v17_0->set_f_0(0xc59e85f5f2128b0b);
  v16->set_f_0(0x662e5b92a5f2766);
  message->set_f_2(0x33);
  message->set_f_4(0x18);
  message->set_f_3(0xd39310e00f178269);
  message->set_f_10(0x8136a78cab55c513);
  message->set_f_5(0x9301edd);
  message->add_f_28(s->substr(0, 5));
  message->add_f_28(s->substr(0, 5));
  message->set_f_11(s->substr(0, 2247));
  message->set_f_20(0x8fca06535c86ed75);
  Message2::M2* v18 = message->mutable_f_56();
  Message2::M2::M21* v19_0 = v18->add_f_2();
  Message2::M2::M21::M111* v20 = v19_0->mutable_f_2();
  (void)v20;  // Suppresses clang-tidy.
  v19_0->set_f_0(0x1c);
  Message2::M2::M37* v21 = v18->mutable_f_3();
  v21->set_f_1(false);
  Message2::M15* v22 = message->mutable_f_78();
  Message2::M15::M62* v23 = v22->mutable_f_15();
  v23->set_f_12(0x31f1fb99a0e0c1b0);
  v23->set_f_10(0.779008);
  v23->set_f_27(0x575c21e9);
  v23->set_f_15(s->substr(0, 1));
  v23->set_f_7(0x6656);
  v23->set_f_6(0x3);
  v23->set_f_30(0xd63906d6514a9195);
  v23->set_f_11(true);
  v23->set_f_3(s->substr(0, 23));
  v23->set_f_20(s->substr(0, 10));
  v23->set_f_26(0x373b8cf1209edb5c);
  Message2::M15::M62::M95* v24_0 = v23->add_f_49();
  (void)v24_0;  // Suppresses clang-tidy.
  v23->set_f_16(0x9e4ae35);
  v23->set_f_28(Message2::M15::M62::E9_CONST_3);
  v23->set_f_1(0x67cb666baa4a3144);
  v23->set_f_2(0x50);
  v23->set_f_13(0x2d6e);
  v23->set_f_18(0xc37);
  v23->set_f_8(0x38);
  Message2::M15::M23* v25 = v22->mutable_f_7();
  Message2::M15::M23::M113* v26 = v25->mutable_f_2();
  Message2::M15::M23::M113::M119* v27_0 = v26->add_f_3();
  v27_0->set_f_0(s->substr(0, 1));
  Message2::M15::M23::M113::M125* v28_0 = v26->add_f_4();
  v28_0->set_f_1(s->substr(0, 23));
  v28_0->set_f_0(0x34);
  Message2::M15::M23::M113::M125::M146* v29 = v28_0->mutable_f_6();
  v29->set_f_26(s->substr(0, 19));
  v29->set_f_9(0x41f928736247413f);
  v29->set_f_17(0x35e5ffe3);
  v29->set_f_15(0x78);
  v29->set_f_21(0x2e);
  v29->set_f_14(0x61);
  v29->set_f_10(0xb5a49edb0debfd5e);
  v29->set_f_20(s->substr(0, 4));
  v29->set_f_19(false);
  v29->set_f_6(true);
  v29->set_f_12(s->substr(0, 21));
  v29->set_f_1(0x5c3d6ed4987db1fd);
  v29->set_f_13(Message2::M15::M23::M113::M125::M146::E17_CONST_2);
  v29->set_f_27(Message2::M15::M23::M113::M125::M146::E18_CONST_2);
  v29->set_f_11(s->substr(0, 2));
  v29->set_f_2(0x65d5f20c496fe915);
  v29->set_f_4(s->substr(0, 7));
  v29->set_f_7(0x577aa50);
  v29->set_f_22(0x192a4f48);
  v29->set_f_25(0x3f);
  v25->set_f_0(0x24);
  Message2::M15::M48* v30 = v22->mutable_f_12();
  v30->set_f_0(0x6a);
  Message2::M15::M34* v31 = v22->mutable_f_8();
  v31->set_f_0(0xd0ea805);
  Message2::M15::M76* v32 = v22->mutable_f_16();
  v32->set_f_0(s->substr(0, 116));
  v22->set_f_1(0x51ad2bea45dd60b8);
  message->set_f_13(0xeadcd4384f183523);
  message->set_f_25(0x1a12);
  Message2::M13* v33 = message->mutable_f_73();
  v33->set_f_2(s->substr(0, 11));
  Message2::M13::M20* v34 = v33->mutable_f_8();
  v34->set_f_0(Message2::M13::M20::E3_CONST_5);
  v33->set_f_0(0xea3381cdccb5c0f1);
  message->set_f_22(0x97cb35bb0295c10c);
  Message2::M7* v35_0 = message->add_f_64();
  v35_0->set_f_0(0x925172f69827c570);
  Message2::M7::M42* v36 = v35_0->mutable_f_4();
  v36->set_f_0(0xb50c2f4391a0c6);
  message->set_f_24(0x2e);
  message->set_f_16(s->substr(0, 2));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_9(0x40229f3e);
  message->add_f_17(s->substr(0, 5));
  message->set_f_8(0x2d8);
  Message2::M9* v0 = message->mutable_f_68();
  Message2::M9::M53* v1 = v0->mutable_f_8();
  v1->set_f_0(0x2);
  Message2::M9::M36* v2_0 = v0->add_f_5();
  (void)v2_0;  // Suppresses clang-tidy.
  v0->set_f_0(s->substr(0, 18));
  Message2::M9::M30* v3 = v0->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  Message2::M9::M40* v4 = v0->mutable_f_7();
  Message2::M9::M40::M107* v5 = v4->mutable_f_3();
  v5->set_f_1(0x1c9047b);
  message->set_f_26(0x3ff5e4d84048bd25);
  Message2::M14* v6 = message->mutable_f_76();
  Message2::M14::M26* v7 = v6->mutable_f_3();
  v7->set_f_0(0x6d2f441d3b0071b);
  Message2::M14::M59* v8 = v6->mutable_f_4();
  v8->set_f_0(0x536);
  Message2::M8* v9 = message->mutable_f_66();
  v9->set_f_1(0xeb668cef85519476);
  message->set_f_18(0x9a4f4bd7124b29be);
  message->set_f_16(s->substr(0, 7));
  Message2::M3* v10 = message->mutable_f_59();
  v10->set_f_0(s->substr(0, 21));
  v10->set_f_3(0x3);
  Message2::M3::M27* v11 = v10->mutable_f_8();
  v11->set_f_0(0x17);
  Message2::M3::M27::M91* v12_0 = v11->add_f_3();
  (void)v12_0;  // Suppresses clang-tidy.
  v10->set_f_1(0x5eadf95f3e1c770b);
  Message2::M3::M68* v13_0 = v10->add_f_17();
  v13_0->set_f_0(s->substr(0, 25));
  Message2::M3::M25* v14_0 = v10->add_f_7();
  v14_0->set_f_0(0x90663f08afde74e);
  message->set_f_4(0x42);
  message->set_f_14(0xce4e095);
  message->set_f_31(s->substr(0, 5));
  message->set_f_21(0x2be8);
  Message2::M12* v15 = message->mutable_f_72();
  Message2::M12::M56* v16 = v15->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_0(0x96f3a10);
  Message2::M12::M51* v17 = v15->mutable_f_3();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_13(0x337848246cf4bcbf);
  Message2::M5* v18 = message->mutable_f_61();
  v18->set_f_0(Message2::M5::E1_CONST_1);
  message->set_f_0(0xa);
  message->set_f_25(0x4d);
  Message2::M10* v19 = message->mutable_f_70();
  Message2::M10::M63* v20_0 = v19->add_f_2();
  (void)v20_0;  // Suppresses clang-tidy.
  v19->set_f_0(0x403f2c8);
  Message2::M10::M66* v21 = v19->mutable_f_3();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_11(s->substr(0, 2890));
  message->set_f_32(0xbf1f166);
  message->set_f_27(s->substr(0, 6));
  message->set_f_23(0x4f);
  message->set_f_2(0x12);
  Message2::M6* v22 = message->mutable_f_62();
  v22->set_f_2(0x2a68365);
  v22->set_f_5(s->substr(0, 1));
  message->set_f_20(0x315251b2f4b99e2f);
  message->add_f_28(s->substr(0, 3));
  Message2::M17* v23_0 = message->add_f_80();
  (void)v23_0;  // Suppresses clang-tidy.
  message->set_f_12(0x363a28a319464cfe);
  Message2::M2* v24 = message->mutable_f_56();
  Message2::M2::M70* v25 = v24->mutable_f_5();
  Message2::M2::M70::M89* v26_0 = v25->add_f_2();
  v26_0->set_f_0(0x11cf70);
  v25->set_f_0(0x3f);
  Message2::M2::M21* v27_0 = v24->add_f_2();
  Message2::M2::M21::M111* v28 = v27_0->mutable_f_2();
  v28->set_f_0(0x3ba28c7b);
  v27_0->set_f_0(0x34);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_8(0x17);
  message->set_f_10(0x7bf7b28d5751c935);
  Message2::M13* v0 = message->mutable_f_73();
  v0->set_f_2(s->substr(0, 8));
  v0->set_f_0(0xaa19f7d052c62502);
  Message2::M13::M78* v1_0 = v0->add_f_11();
  v1_0->set_f_2(s->substr(0, 1));
  v1_0->set_f_0(0x8db6eae8b291bc82);
  v1_0->set_f_1(0x93bce7a13125262f);
  v1_0->set_f_3(s->substr(0, 128));
  Message2::M13::M20* v2 = v0->mutable_f_8();
  v2->set_f_0(Message2::M13::M20::E3_CONST_3);
  v0->set_f_1(s->substr(0, 77));
  message->set_f_25(0x16);
  message->set_f_30(0x2047);
  message->set_f_14(0x44214b1);
  Message2::M5* v3 = message->mutable_f_61();
  Message2::M5::M54* v4_0 = v3->add_f_6();
  v4_0->set_f_0(0x5e);
  Message2::M17* v5_0 = message->add_f_80();
  v5_0->set_f_0(0xf7ebfc1);
  Message2::M15* v6 = message->mutable_f_78();
  v6->set_f_1(0x1f0a23d795525344);
  Message2::M15::M23* v7 = v6->mutable_f_7();
  v7->set_f_0(0x50);
  Message2::M15::M23::M113* v8 = v7->mutable_f_2();
  Message2::M15::M23::M113::M119* v9_0 = v8->add_f_3();
  v9_0->set_f_0(s->substr(0, 29));
  v8->set_f_0(0x3c);
  Message2::M15::M43* v10 = v6->mutable_f_11();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_22(0xbb7cd1cf9e92c02b);
  message->set_f_27(s->substr(0, 57));
  message->set_f_21(0x2d29ed3);
  Message2::M1* v11 = message->mutable_f_55();
  Message2::M1::M19* v12 = v11->mutable_f_3();
  Message2::M1::M19::M105* v13_0 = v12->add_f_4();
  (void)v13_0;  // Suppresses clang-tidy.
  v12->set_f_0(0x8188bb9260debff7);
  v11->set_f_0(0xf373e34);
  Message2::M1::M28* v14 = v11->mutable_f_4();
  v14->set_f_0(0x31);
  v14->set_f_1(0x7071e3ca04aa827b);
  v14->set_f_2(s->substr(0, 8));
  Message2::M14* v15 = message->mutable_f_76();
  Message2::M14::M26* v16 = v15->mutable_f_3();
  (void)v16;  // Suppresses clang-tidy.
  message->set_f_31(s->substr(0, 3));
  message->set_f_23(0x5c);
  message->set_f_15(0.037899);
  message->set_f_12(0x6d2d93a6b9a011);
  Message2::M4* v17_0 = message->add_f_60();
  Message2::M4::M65* v18 = v17_0->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M4::M39* v19 = v17_0->mutable_f_6();
  v19->set_f_2(s->substr(0, 2));
  Message2::M4::M38* v20 = v17_0->mutable_f_4();
  Message2::M4::M38::M118* v21 = v20->mutable_f_7();
  v21->set_f_1(0x30);
  v21->set_f_16(s->substr(0, 3));
  v21->set_f_2(0xc496936a78f2ff22);
  v21->set_f_5(0x32a29f4);
  v21->set_f_3(0x602d3);
  v21->set_f_7(0x5940f35d);
  v21->set_f_6(s->substr(0, 2));
  Message2::M4::M38::M82* v22 = v20->mutable_f_6();
  v22->set_f_0(Message2::M4::M38::M82::E11_CONST_3);
  v20->set_f_0(s->substr(0, 3));
  v17_0->set_f_0(s->substr(0, 8));
  Message2::M4::M79* v23_0 = v17_0->add_f_9();
  Message2::M4::M79::M81* v24 = v23_0->mutable_f_6();
  v24->set_f_0(0x57);
  v23_0->set_f_0(0x72);
  v23_0->set_f_3(0x50);
  v23_0->set_f_2(0.693802);
  v23_0->set_f_1(false);
  message->set_f_26(0x4a4956ce1387bb8d);
  message->set_f_5(0x5f44f);
  Message2::M16* v25 = message->mutable_f_79();
  Message2::M16::M57* v26_0 = v25->add_f_6();
  Message2::M16::M57::E7 array_0[20] = {
      Message2::M16::M57::E7_CONST_5, Message2::M16::M57::E7_CONST_5,
      Message2::M16::M57::E7_CONST_2, Message2::M16::M57::E7_CONST_2,
      Message2::M16::M57::E7_CONST_1, Message2::M16::M57::E7_CONST_3,
      Message2::M16::M57::E7_CONST_4, Message2::M16::M57::E7_CONST_4,
      Message2::M16::M57::E7_CONST_2, Message2::M16::M57::E7_CONST_3,
      Message2::M16::M57::E7_CONST_2, Message2::M16::M57::E7_CONST_5,
      Message2::M16::M57::E7_CONST_1, Message2::M16::M57::E7_CONST_5,
      Message2::M16::M57::E7_CONST_3, Message2::M16::M57::E7_CONST_1,
      Message2::M16::M57::E7_CONST_2, Message2::M16::M57::E7_CONST_4,
      Message2::M16::M57::E7_CONST_4, Message2::M16::M57::E7_CONST_5,
  };
  for (auto v : array_0) {
    v26_0->add_f_0(v);
  }
  Message2::M16::M31* v27 = v25->mutable_f_5();
  v27->set_f_0(0xe19c9db838866ae5);
  Message2::M16::M31::M115* v28 = v27->mutable_f_3();
  v28->set_f_0(0x485fda1ca35215c9);
  v28->set_f_3(true);
  v28->set_f_2(0x659ab7a);
  Message2::M16::M61* v29_0 = v25->add_f_7();
  v29_0->set_f_0(0x74d09935bc56ee);
  Message2::M16::M61::M106* v30 = v29_0->mutable_f_4();
  v30->set_f_0(0x86458204dcd8a1b7);
  v30->set_f_5(0xf7bee03c7fac107a);
  v30->set_f_3(0xe0e647e6b62c8d1e);
  v30->set_f_2(0.918016);
  message->set_f_6(0x7e);
  message->set_f_1(0x59);
  Message2::M7* v31_0 = message->add_f_64();
  (void)v31_0;  // Suppresses clang-tidy.
  Message2::M10* v32 = message->mutable_f_70();
  v32->set_f_0(0x15);
  Message2::M10::M66* v33 = v32->mutable_f_3();
  v33->set_f_0(s->substr(0, 3));
  Message2::M10::M63* v34_0 = v32->add_f_2();
  (void)v34_0;  // Suppresses clang-tidy.
  message->set_f_32(0x77);
  Message2::M9* v35 = message->mutable_f_68();
  Message2::M9::M30* v36 = v35->mutable_f_3();
  (void)v36;  // Suppresses clang-tidy.
  Message2::M9::M36* v37_0 = v35->add_f_5();
  (void)v37_0;  // Suppresses clang-tidy.
  Message2::M9::M53* v38 = v35->mutable_f_8();
  v38->set_f_0(0xe06349);
  message->set_f_3(0x21e35ecdd25336ab);
  Message2::M12* v39 = message->mutable_f_72();
  Message2::M12::M51* v40 = v39->mutable_f_3();
  (void)v40;  // Suppresses clang-tidy.
  Message2::M12::M56* v41 = v39->mutable_f_5();
  (void)v41;  // Suppresses clang-tidy.
  v39->set_f_0(0xb490ee4);
  Message2::M12::M60* v42_0 = v39->add_f_6();
  v42_0->set_f_0(true);
  Message2::M12::M60::M101* v43_0 = v42_0->add_f_2();
  v43_0->set_f_0(s->substr(0, 1));
  message->set_f_2(0xf881d18);
  message->set_f_9(0x7953dabc);
  message->set_f_11(s->substr(0, 26));
  Message2::M6* v44 = message->mutable_f_62();
  v44->set_f_1(0x2d);
  v44->set_f_2(0x6b);
  v44->set_f_5(s->substr(0, 1));
  v44->set_f_3(0x235cb20cbf3043fe);
  v44->set_f_6(0x76);
  v44->set_f_4(s->substr(0, 329));
  v44->set_f_0(0xd92a9da2070f826e);
  message->set_f_24(0x10a2);
  Message2::M3* v45 = message->mutable_f_59();
  v45->set_f_2(0x8170357);
  v45->set_f_3(0xe1abcc5);
  Message2::M3::M27* v46 = v45->mutable_f_8();
  Message2::M3::M27::M91* v47_0 = v46->add_f_3();
  v47_0->set_f_0(0x7c8ac81bb935c5b9);
  Message2::M3::M68* v48_0 = v45->add_f_17();
  v48_0->set_f_0(s->substr(0, 6));
  v45->set_f_1(0xc12316e5a18ba84d);
  Message2::M3::M52* v49 = v45->mutable_f_16();
  v49->set_f_0(0.979022);
  v49->set_f_1(s->substr(0, 5));
  v49->add_f_2(s->substr(0, 2));
  Message2::M3::M52::M108* v50 = v49->mutable_f_8();
  v50->set_f_0(0x1b);
  Message2::M3::M35* v51_0 = v45->add_f_10();
  Message2::M3::M35::E5 array_1[5] = {
      Message2::M3::M35::E5_CONST_4, Message2::M3::M35::E5_CONST_1,
      Message2::M3::M35::E5_CONST_1, Message2::M3::M35::E5_CONST_1,
      Message2::M3::M35::E5_CONST_3,
  };
  for (auto v : array_1) {
    v51_0->add_f_0(v);
  }
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M15* v0 = message->mutable_f_78();
  Message2::M15::M48* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M15::M34* v2 = v0->mutable_f_8();
  v2->set_f_0(0x61);
  v0->set_f_0(0xf944738c6d2e892);
  Message2::M15::M62* v3 = v0->mutable_f_15();
  v3->set_f_2(0x2c);
  v3->set_f_10(0.863667);
  v3->set_f_25(0x16);
  v3->set_f_16(0x40afb);
  v3->set_f_11(true);
  v3->set_f_29(0x69b4349124c0011d);
  v3->set_f_3(s->substr(0, 1));
  v3->set_f_14(0xfe68b1d608f87400);
  v3->set_f_19(0x8ed09023425615c5);
  v3->set_f_0(0x5274e8eae25d1);
  v3->set_f_8(0x5e);
  Message2::M15::M62::M95* v4_0 = v3->add_f_49();
  (void)v4_0;  // Suppresses clang-tidy.
  v3->set_f_9(0x8284e1a0048e9c2f);
  v3->set_f_18(0x9e1c85e);
  v3->set_f_20(s->substr(0, 57));
  v3->set_f_12(0x659c7ef99974f9a5);
  v3->set_f_23(s->substr(0, 44));
  v3->set_f_30(0xa157297186aad6e6);
  v3->set_f_27(0x43b0f271);
  v3->set_f_17(0x156e64);
  Message2::M15::M43* v5 = v0->mutable_f_11();
  v5->set_f_0(0x75d7a75);
  Message2::M15::M23* v6 = v0->mutable_f_7();
  Message2::M15::M23::M113* v7 = v6->mutable_f_2();
  v7->set_f_0(0x29bb);
  Message2::M15::M23::M113::M119* v8_0 = v7->add_f_3();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M15::M23::M113::M125* v9_0 = v7->add_f_4();
  v9_0->set_f_1(s->substr(0, 60));
  v9_0->set_f_0(0x9);
  v9_0->add_f_2(s->substr(0, 3));
  Message2::M15::M23::M113::M125::M146* v10 = v9_0->mutable_f_6();
  v10->set_f_4(s->substr(0, 52));
  v10->set_f_21(0x15);
  v10->set_f_8(0x276e589d76ec12b3);
  v10->set_f_19(false);
  v10->set_f_27(Message2::M15::M23::M113::M125::M146::E18_CONST_2);
  v10->set_f_5(true);
  v10->set_f_12(s->substr(0, 1198));
  v10->set_f_24(0xc87d8c3);
  v10->set_f_0(0x9961ca1);
  v10->set_f_25(0x27);
  v10->set_f_7(0x488f7d1);
  v10->set_f_14(0x4d);
  v10->set_f_3(s->substr(0, 9));
  v10->set_f_15(0x1b);
  v10->set_f_1(0xa661671dd85db846);
  v10->set_f_26(s->substr(0, 10));
  v10->set_f_20(s->substr(0, 7));
  Message2::M9* v11 = message->mutable_f_68();
  v11->set_f_0(s->substr(0, 6));
  Message2::M9::M22* v12 = v11->mutable_f_2();
  v12->set_f_2(false);
  v12->set_f_3(Message2::M9::M22::E4_CONST_3);
  v12->set_f_1(false);
  Message2::M9::M53* v13 = v11->mutable_f_8();
  (void)v13;  // Suppresses clang-tidy.
  Message2::M9::M30* v14 = v11->mutable_f_3();
  (void)v14;  // Suppresses clang-tidy.
  Message2::M9::M36* v15_0 = v11->add_f_5();
  v15_0->set_f_0(0.053024);
  Message2::M9::M36::M116* v16 = v15_0->mutable_f_3();
  (void)v16;  // Suppresses clang-tidy.
  Message2::M9::M40* v17 = v11->mutable_f_7();
  Message2::M9::M40::M107* v18 = v17->mutable_f_3();
  v18->set_f_1(0x65);
  v18->set_f_0(s->substr(0, 27));
  v18->set_f_2(false);
  Message2::M9::M40::M97* v19_0 = v17->add_f_2();
  Message2::M9::M40::M97::M131* v20 = v19_0->mutable_f_12();
  (void)v20;  // Suppresses clang-tidy.
  v19_0->set_f_3(s->substr(0, 7));
  v19_0->set_f_2(0x7c17bdb29ec2a3fa);
  v17->set_f_0(0x59);
  message->set_f_18(0x75417681ee4096e0);
  message->set_f_15(0.390125);
  Message2::M7* v21_0 = message->add_f_64();
  (void)v21_0;  // Suppresses clang-tidy.
  Message2::M1* v22 = message->mutable_f_55();
  Message2::M1::M28* v23 = v22->mutable_f_4();
  v23->set_f_1(0x117270e2e5988fd5);
  v23->set_f_0(0x2e);
  v23->set_f_2(s->substr(0, 24));
  Message2::M1::M69* v24_0 = v22->add_f_7();
  v24_0->set_f_0(s->substr(0, 6));
  Message2::M1::M67* v25 = v22->mutable_f_5();
  (void)v25;  // Suppresses clang-tidy.
  v22->set_f_0(0x19);
  Message2::M1::M73* v26_0 = v22->add_f_8();
  v26_0->set_f_0(true);
  Message2::M1::M73::M104* v27 = v26_0->mutable_f_3();
  v27->set_f_0(s->substr(0, 3));
  Message2::M1::M19* v28 = v22->mutable_f_3();
  Message2::M1::M19::M105* v29_0 = v28->add_f_4();
  v29_0->set_f_1(0x46);
  v28->set_f_0(0xe175e4c5eda85e6d);
  message->set_f_21(0x7a);
  Message2::M5* v30 = message->mutable_f_61();
  Message2::M5::M54* v31_0 = v30->add_f_6();
  Message2::M5::M54::M99* v32_0 = v31_0->add_f_4();
  v32_0->set_f_2(0x8ca42);
  Message2::M5::M54::M99::M132* v33 = v32_0->mutable_f_10();
  (void)v33;  // Suppresses clang-tidy.
  v31_0->set_f_0(0x1bff56);
  v30->set_f_1(0x5d);
  v30->set_f_0(Message2::M5::E1_CONST_5);
  message->set_f_16(s->substr(0, 225));
  Message2::M16* v34 = message->mutable_f_79();
  v34->set_f_0(s->substr(0, 4));
  Message2::M16::M77* v35 = v34->mutable_f_11();
  v35->set_f_0(0x4fa51c4c30b0a53d);
  Message2::M16::M77::M88* v36 = v35->mutable_f_2();
  (void)v36;  // Suppresses clang-tidy.
  Message2::M16::M24* v37 = v34->mutable_f_3();
  v37->set_f_0(0x1);
  Message2::M16::M31* v38 = v34->mutable_f_5();
  v38->set_f_0(0x74994ae31bd6dd29);
  Message2::M16::M71* v39_0 = v34->add_f_10();
  v39_0->set_f_3(0xca800b1a812e91da);
  Message2::M16::M71::M103* v40 = v39_0->mutable_f_8();
  (void)v40;  // Suppresses clang-tidy.
  Message2::M16::M71::M114* v41 = v39_0->mutable_f_10();
  v41->set_f_2(s->substr(0, 13));
  v41->set_f_3(0xcfff730e84e29334);
  v39_0->set_f_2(0xd1cdb76);
  Message2::M16::M57* v42_0 = v34->add_f_6();
  (void)v42_0;  // Suppresses clang-tidy.
  message->set_f_19(s->substr(0, 25));
  message->set_f_20(0x89a91ff7ce457fd4);
  Message2::M11* v43 = message->mutable_f_71();
  v43->set_f_0(0x93c9f54b9edf4887);
  v43->set_f_1(0x36378eb393a15a8);
  Message2::M11::M44* v44_0 = v43->add_f_3();
  v44_0->set_f_0(s->substr(0, 2));
  message->set_f_11(s->substr(0, 148));
  message->set_f_0(0x2741);
  message->set_f_24(0xc);
  message->set_f_29(0x67215009);
  message->set_f_12(0x7269451e4ae95d7c);
  message->set_f_27(s->substr(0, 3652));
  message->set_f_13(0x223c09ce1826f7de);
  Message2::M13* v45 = message->mutable_f_73();
  Message2::M13::M20* v46 = v45->mutable_f_8();
  (void)v46;  // Suppresses clang-tidy.
  v45->set_f_3(0x387f7db316e31b08);
  Message2::M13::M46* v47 = v45->mutable_f_9();
  Message2::M13::M46::M102* v48_0 = v47->add_f_3();
  v48_0->set_f_0(0x434cc9d);
  v45->set_f_2(s->substr(0, 24));
  Message2::M13::M78* v49_0 = v45->add_f_11();
  v49_0->set_f_2(s->substr(0, 406));
  v49_0->set_f_1(0xbd167a6193d6e89a);
  v49_0->set_f_0(0xf56dbbe356f3c1c);
  v45->set_f_0(0xdb3e32bbf91d74a1);
  message->set_f_25(0xa);
  message->set_f_14(0x2f);
  Message2::M10* v50 = message->mutable_f_70();
  Message2::M10::M63* v51_0 = v50->add_f_2();
  (void)v51_0;  // Suppresses clang-tidy.
  v50->set_f_0(0x4c);
  message->add_f_28(s->substr(0, 2));
  message->add_f_28(s->substr(0, 5));
  message->add_f_28(s->substr(0, 5));
  Message2::M6* v52 = message->mutable_f_62();
  v52->set_f_0(0xd096b4909c7031a3);
  v52->set_f_5(s->substr(0, 6));
  v52->set_f_2(0xc2a546a);
  v52->set_f_4(s->substr(0, 20));
  message->set_f_10(0x7c3763e84624fb7e);
  message->set_f_22(0x79f164a79d8f29cb);
  Message2::M2* v53 = message->mutable_f_56();
  Message2::M2::M70* v54 = v53->mutable_f_5();
  v54->set_f_0(0x64);
  message->set_f_5(0x52);
  Message2::M14* v55 = message->mutable_f_76();
  v55->set_f_0(false);
  Message2::M14::M18* v56_0 = v55->add_f_2();
  v56_0->set_f_2(0x708932d103e2b3fa);
  Message2::M14::M18::M110* v57 = v56_0->mutable_f_10();
  (void)v57;  // Suppresses clang-tidy.
  Message2::M14::M59* v58 = v55->mutable_f_4();
  v58->set_f_0(0x11d1);
  Message2::M14::M26* v59 = v55->mutable_f_3();
  (void)v59;  // Suppresses clang-tidy.
  Message2::M12* v60 = message->mutable_f_72();
  Message2::M12::M56* v61 = v60->mutable_f_5();
  v61->set_f_0(0x6d);
  Message2::M12::M60* v62_0 = v60->add_f_6();
  Message2::M12::M60::M101* v63_0 = v62_0->add_f_2();
  (void)v63_0;  // Suppresses clang-tidy.
  Message2::M12::M51* v64 = v60->mutable_f_3();
  v64->set_f_0(0x99e64748931abc5d);
  message->set_f_3(0x9bee821fd1489785);
  message->set_f_6(0x45);
  message->set_f_23(0x37);
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
