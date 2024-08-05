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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/response/Message2.pb.h"

namespace fleetbench::rpc::P8::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M7* v0_0 = message->add_f_35();
  v0_0->set_f_4(s->substr(0, 116));
  Message2::M7::M10* v1 = v0_0->mutable_f_10();
  v1->set_f_0(s->substr(0, 27));
  v0_0->set_f_5(s->substr(0, 17));
  v0_0->set_f_6(0x3fbc13e9885a7519);
  Message2::M7::M9* v2_0 = v0_0->add_f_9();
  v2_0->set_f_0(0x73d4ca6f82e32066);
  v0_0->set_f_2(0x406f45e5ee577cad);
  Message2::M6* v3_0 = message->add_f_34();
  v3_0->set_f_0(0x64);
  Message2::M6::M19* v4 = v3_0->mutable_f_3();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_23(0xa349928529f1b28);
  message->set_f_7(0x18858973f1dfa5ab);
  message->set_f_9(0.807338);
  message->set_f_15(0.530098);
  message->set_f_17(0x3e);
  message->set_f_5(0x78);
  Message2::M5* v5 = message->mutable_f_33();
  (void)v5;  // Suppresses clang-tidy.
  message->set_f_18(0x3b);
  message->set_f_14(true);
  message->set_f_12(Message2::E3_CONST_3);
  message->set_f_22(0.262934);
  message->set_f_10(0.867042);
  message->set_f_1(Message2::E1_CONST_2);
  message->set_f_0(0x3fa30d3b946bce31);
  message->set_f_19(0x47f5b88739c6444d);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_30();
  Message2::M2::M17* v1 = v0->mutable_f_2();
  v1->set_f_1(0.422112);
  v1->set_f_3(0x1e);
  v0->set_f_0(0x3c3e575a06fce87c);
  Message2::M8* v2_0 = message->add_f_36();
  v2_0->set_f_1(Message2::M8::E5_CONST_5);
  Message2::M8::M14* v3 = v2_0->mutable_f_8();
  v3->set_f_6(0.222593);
  v3->set_f_0(s->substr(0, 494));
  v3->set_f_2(0.747626);
  v3->set_f_8(0x3a846784a27ec5f0);
  v3->set_f_7(0.769022);
  v3->set_f_4(0x160076d70efaa2bb);
  v2_0->set_f_0(0x9);
  Message2::M7* v4_0 = message->add_f_35();
  Message2::M7::M9* v5_0 = v4_0->add_f_9();
  (void)v5_0;  // Suppresses clang-tidy.
  v4_0->set_f_4(s->substr(0, 108));
  v4_0->set_f_1(0.899428);
  v4_0->set_f_6(0x2a616caa46bb1aba);
  v4_0->set_f_0(0.871167);
  Message2::M7::M12* v6 = v4_0->mutable_f_11();
  v6->set_f_6(0xb202c98);
  v6->set_f_2(0x36);
  Message2::M7::M12::M23* v7_0 = v6->add_f_10();
  v7_0->set_f_2(0x487f323030fbad22);
  v7_0->set_f_5(0x3b);
  v7_0->set_f_4(0xf3e57d364d2f);
  v6->set_f_0(0x3c);
  v6->set_f_3(s->substr(0, 103));
  v6->set_f_7(true);
  v6->set_f_8(0xc7bd51a0645024d);
  v6->set_f_5(0x24aebee7691b6346);
  v6->set_f_1(0x613233cae271c10c);
  v6->set_f_4(0.446174);
  message->set_f_19(0xf09698a24927bac);
  message->set_f_14(true);
  message->set_f_7(0x3e2f859f3d7817bc);
  Message2::M3* v8 = message->mutable_f_31();
  v8->set_f_4(0x850a96efb965e56);
  v8->set_f_1(s->substr(0, 494));
  v8->set_f_3(0.652279);
  v8->set_f_2(0x14af6092bdb11b6a);
  v8->set_f_0(0xf);
  Message2::M3::M20* v9 = v8->mutable_f_10();
  Message2::M3::M20::M25* v10_0 = v9->add_f_3();
  Message2::M3::M20::M25::M27* v11 = v10_0->mutable_f_7();
  v11->set_f_0(s->substr(0, 126));
  v10_0->set_f_2(0.120052);
  v10_0->set_f_1(true);
  v10_0->set_f_3(s->substr(0, 34));
  v10_0->set_f_0(0.101171);
  v9->set_f_0(0x4d41be4a4e03);
  message->set_f_3(0x66a5cae728ff166e);
  message->set_f_6(s->substr(0, 103));
  message->set_f_16(0xe06);
  message->set_f_8(0.643963);
  message->set_f_11(0x6cd2173d80a0cf9b);
  message->set_f_10(0.043981);
  message->set_f_12(Message2::E3_CONST_1);
  message->set_f_17(0xc4464);
  message->set_f_23(0x679f0a5a3076f15c);
  Message2::M6* v12_0 = message->add_f_34();
  v12_0->set_f_0(0x61);
  Message2::M6::M19* v13 = v12_0->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  message->set_f_2(Message2::E2_CONST_2);
  message->set_f_18(0x12);
  message->set_f_22(0.251633);
  message->set_f_13(0.359067);
  message->set_f_20(0x9);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M4* v0 = message->mutable_f_32();
  Message2::M4::M15* v1 = v0->mutable_f_8();
  v1->set_f_5(s->substr(0, 20));
  Message2::M4::M15::M21* v2_0 = v1->add_f_9();
  v2_0->set_f_0(s->substr(0, 18));
  v2_0->set_f_3(0x254d);
  v1->set_f_6(0.957066);
  v1->set_f_3(s->substr(0, 16));
  v1->set_f_2(0x4387c1db80845aa8);
  v1->set_f_4(0xcdcc401bf5c3fb9);
  v0->set_f_4(0x41adfcd32116a675);
  v0->set_f_2(0.001784);
  v0->set_f_0(false);
  message->set_f_16(0x67);
  message->set_f_2(Message2::E2_CONST_4);
  message->set_f_14(true);
  Message2::M1* v3 = message->mutable_f_29();
  v3->set_f_0(0x1c1dda1cca0114f2);
  message->set_f_5(0x41);
  message->set_f_0(0x52fc45f89b749196);
  message->set_f_22(0.328892);
  message->set_f_4(0x7e053c5e250b307c);
  message->set_f_1(Message2::E1_CONST_3);
  Message2::M2* v4 = message->mutable_f_30();
  v4->set_f_0(0x4a1d0d7be9fae36f);
  Message2::M2::M17* v5 = v4->mutable_f_2();
  v5->set_f_1(0.476126);
  v5->set_f_0(0x35e8);
  v5->set_f_2(0.108004);
  v5->set_f_3(0xe0d);
  message->set_f_7(0x7213d6c8a15d674d);
  Message2::M6* v6_0 = message->add_f_34();
  v6_0->set_f_0(0x2cd3);
  Message2::M3* v7 = message->mutable_f_31();
  v7->set_f_2(0x7ab41b479eebc879);
  v7->set_f_0(0x49);
  message->set_f_8(0.577208);
  message->set_f_21(s->substr(0, 14));
  message->set_f_11(0xa8ee3556c96a6c1);
  message->set_f_6(s->substr(0, 17));
  message->set_f_18(0x70);
  message->set_f_19(0x1d8d199058ead26d);
  Message2::M5* v8 = message->mutable_f_33();
  Message2::M5::M16* v9_0 = v8->add_f_2();
  v9_0->set_f_0(0.512757);
  Message2::M5::M16::M24* v10 = v9_0->mutable_f_2();
  v10->set_f_0(0x3a949e4b2932ae05);
  v10->set_f_3(0x25d1);
  v10->set_f_4(0xc);
  v10->set_f_2(0.669083);
  v10->set_f_1(0xb1f36793466b);
  v8->set_f_0(0x1f);
  Message2::M7* v11_0 = message->add_f_35();
  v11_0->set_f_6(0x1574e05256d64af8);
  v11_0->set_f_3(true);
  v11_0->set_f_2(0x63e77270a8ad2b7b);
  Message2::M7::M9* v12_0 = v11_0->add_f_9();
  v12_0->set_f_0(0x2548206a19d02fb9);
  v11_0->set_f_0(0.263013);
  Message2::M7::M10* v13 = v11_0->mutable_f_10();
  v13->set_f_0(s->substr(0, 10));
  v11_0->set_f_4(s->substr(0, 55));
  v11_0->set_f_1(0.502091);
  v11_0->set_f_5(s->substr(0, 93));
  message->set_f_17(0x1a);
  message->set_f_10(0.961751);
  message->set_f_3(0x3e311cec85dadea1);
  message->set_f_13(0.301809);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_12(Message2::E3_CONST_5);
  message->set_f_5(0x99959);
  message->set_f_11(0x2925a5ad17992d1a);
  message->set_f_16(0x8);
  Message2::M2* v0 = message->mutable_f_30();
  Message2::M2::M17* v1 = v0->mutable_f_2();
  v1->set_f_0(0x5e);
  v1->set_f_1(0.579038);
  v0->set_f_0(0x4e531d07c9d70d2c);
  message->set_f_8(0.673919);
  Message2::M7* v2_0 = message->add_f_35();
  Message2::M7::M10* v3 = v2_0->mutable_f_10();
  v3->set_f_0(s->substr(0, 78));
  v2_0->set_f_0(0.905029);
  v2_0->set_f_3(false);
  v2_0->set_f_6(0x4c21363a4bcccdb3);
  v2_0->set_f_2(0x684b50f95385ff2f);
  message->set_f_3(0x2b8f8c00dde96245);
  Message2::M8* v4_0 = message->add_f_36();
  v4_0->set_f_0(0x6c);
  v4_0->set_f_2(0x1c27c656311beaf0);
  v4_0->set_f_3(s->substr(0, 118));
  v4_0->set_f_1(Message2::M8::E5_CONST_2);
  Message2::M8::M11* v5 = v4_0->mutable_f_7();
  v5->set_f_3(0x3adb177d9afa4426);
  v5->set_f_2(0x7b);
  v5->set_f_1(0.681661);
  v5->set_f_0(0x477dc6bb518541f9);
  message->set_f_7(0x5c2743fbdd0a9c77);
  message->set_f_20(0x1f);
  message->set_f_19(0x6d65ffb3f0235e74);
  message->set_f_4(0x4ee4067085944511);
  message->set_f_17(0x15);
  Message2::M6* v6_0 = message->add_f_34();
  Message2::M6::M13* v7 = v6_0->mutable_f_2();
  v7->set_f_0(0x28);
  v7->set_f_4(0x75);
  v7->set_f_1(0.444522);
  v7->set_f_3(0.674990);
  Message2::M6::M19* v8 = v6_0->mutable_f_3();
  v8->set_f_0(0x71071cd07bed6294);
  message->set_f_23(0x3d67a694adc076);
  message->set_f_6(s->substr(0, 165));
  message->set_f_1(Message2::E1_CONST_3);
  Message2::M1* v9 = message->mutable_f_29();
  (void)v9;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P8::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_RESPONSE_ACCESS_MESSAGE2_H_
