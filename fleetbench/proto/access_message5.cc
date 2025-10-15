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

#include "fleetbench/proto/access_message5.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message5.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message5_Set_1(Message5* message, std::string* s) {
  Message5::M1* v0_0 = message->add_f_2();
  Message5::M1::M3* v1 = v0_0->mutable_f_4();
  v1->set_f_2(false);
  v1->set_f_0(0x16ddef);
  Message5::M1::M3::M5* v2 = v1->mutable_f_8();
  v2->set_f_9(0x67);
  Message5::M1::M3::M5::M8* v3_0 = v2->add_f_25();
  v3_0->set_f_2(0x510b718a);
  v3_0->set_f_3(Message5::M1::M3::M5::M8::E7_CONST_5);
  v3_0->set_f_5(0.021211);
  Message5::M1::M3::M5::M8* v3_1 = v2->add_f_25();
  v3_1->set_f_3(Message5::M1::M3::M5::M8::E7_CONST_1);
  v3_1->set_f_7(true);
  v3_1->set_f_0(0.046910);
  v3_1->set_f_1(Message5::M1::M3::M5::M8::E6_CONST_1);
  v2->set_f_12(Message5::M1::M3::M5::E3_CONST_4);
  v2->set_f_5(0.923372);
  v2->set_f_1(Message5::M1::M3::M5::E2_CONST_3);
  v2->set_f_11(false);
  v2->set_f_6(0x60);
  v2->set_f_4(0.276698);
  v0_0->set_f_0(Message5::M1::E1_CONST_4);
  Message5::M1::M2* v4 = v0_0->mutable_f_3();
  Message5::M1::M2::M4* v5 = v4->mutable_f_4();
  Message5::M1::M2::M4::M6* v6_0 = v5->add_f_2();
  Message5::M1::M2::M4::M6::M9* v7 = v6_0->mutable_f_2();
  Message5::M1::M2::M4::M6::M9::M13* v8 = v7->mutable_f_3();
  (void)v8;  // Suppresses clang-tidy.
  v5->add_f_0(0x2083);
  Message5::M1::M2::M4::M7* v9_0 = v5->add_f_4();
  Message5::M1::M2::M4::M7::M10* v10_0 = v9_0->add_f_3();
  Message5::M1::M2::M4::M7::M10::M12* v11_0 = v10_0->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v12 = v11_0->mutable_f_2();
  v12->set_f_14(0x24);
  v12->set_f_11(0x822532871fa294);
  v12->set_f_10(0.542466);
  v12->set_f_7(0x28);
  v12->set_f_12(0x5a849c2);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v13_0 = v12->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v14 = v13_0->mutable_f_2();
  v14->set_f_2(true);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17* v15 =
      v14->mutable_f_5();
  v15->set_f_0(0x7);
  v13_0->set_f_0(0.444066);
  float array_1[9] = {
      0.043715, 0.888937, 0.422038, 0.224787, 0.430016,
      0.343131, 0.435794, 0.979921, 0.369572,
  };
  for (auto v : array_1) {
    v12->add_f_13(v);
  }
  v12->set_f_5(0x8146a);
  v11_0->set_f_0(true);
  v10_0->set_f_13(0x17f4333849c8e);
  v10_0->set_f_1(0x5567a1297);
  v10_0->set_f_0(s->substr(0, 38));
  v10_0->add_f_8(0.729773);
  v10_0->set_f_11(0x46d0b);
  Message5::M1::M2::M4::M7::M10* v10_1 = v9_0->add_f_3();
  v10_1->set_f_0(s->substr(0, 25));
  v10_1->set_f_2(0x2a);
  v10_1->set_f_17(0.365676);
  v10_1->set_f_4(0xcc06486);
  Message5::M1::M2::M4::M7::M10::M12* v16_0 = v10_1->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v17 = v16_0->mutable_f_2();
  v17->set_f_10(0.229492);
  v17->set_f_5(0x53);
  v17->set_f_4(s->substr(0, 17));
  v17->add_f_0(0.469989);
  v17->add_f_0(0.695924);
  v17->add_f_13(0.273358);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v18_0 = v17->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v19 = v18_0->mutable_f_2();
  (void)v19;  // Suppresses clang-tidy.
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v18_1 = v17->add_f_20();
  (void)v18_1;  // Suppresses clang-tidy.
  v17->set_f_6(0x35);
  v17->set_f_9(0x15);
  v10_1->set_f_10(s->substr(0, 3));
  float array_2[64] = {
      0.323755, 0.225314, 0.338550, 0.131973, 0.543662, 0.574227, 0.949496,
      0.603029, 0.726052, 0.922580, 0.181232, 0.218079, 0.130686, 0.556886,
      0.909228, 0.469822, 0.192328, 0.901083, 0.360572, 0.725618, 0.989160,
      0.263260, 0.967430, 0.941216, 0.046831, 0.853995, 0.404575, 0.235316,
      0.499576, 0.254370, 0.390985, 0.663317, 0.970156, 0.959339, 0.742987,
      0.357050, 0.383033, 0.655701, 0.659665, 0.232255, 0.075056, 0.476764,
      0.803120, 0.336638, 0.295632, 0.316626, 0.162716, 0.531521, 0.746521,
      0.172451, 0.627103, 0.613935, 0.371548, 0.584494, 0.827445, 0.920533,
      0.337910, 0.383045, 0.377822, 0.292452, 0.673972, 0.035354, 0.447918,
      0.713517,
  };
  for (auto v : array_2) {
    v10_1->add_f_8(v);
  }
  v10_1->set_f_16(0xfc);
  v10_1->set_f_13(0x267e2);
  v10_1->set_f_5(0x46f1a9d2b);
  v10_1->set_f_3(s->substr(0, 21));
  v10_1->set_f_14(0x6b);
  Message5::M1::M2::M4::M7::M10::M11* v20_0 = v10_1->add_f_29();
  (void)v20_0;  // Suppresses clang-tidy.
  v4->set_f_0(0xfbd80a3cabacc4);
}
void Message5_Set_2(Message5* message, std::string* s) {
  Message5::M1* v0_0 = message->add_f_2();
  Message5::M1::M3* v1 = v0_0->mutable_f_4();
  v1->set_f_3(s->substr(0, 6));
  v1->set_f_2(false);
  Message5::M1::M3::M5* v2 = v1->mutable_f_8();
  v2->set_f_6(0x4db2f1f96ae089);
  Message5::M1::M3::M5::M8* v3_0 = v2->add_f_25();
  v3_0->set_f_5(0.545365);
  v2->set_f_9(0x61);
  int32_t array_0[12] = {
      0xcc039,   0x59,      0x5346dbc, 0xd2dbe04, 0x5ab0, 0x55dc1de,
      0x80494f6, 0x8293a3b, 0x9894a66, 0xc11f3ad, 0x3d,   0xeed4845,
  };
  for (auto v : array_0) {
    v2->add_f_14(v);
  }
  v2->set_f_7(0x253633c);
  v2->set_f_11(true);
  v2->set_f_8(true);
  v2->set_f_1(Message5::M1::M3::M5::E2_CONST_4);
  v2->set_f_3(0x88124beac2a7b);
  v2->set_f_5(0.319839);
  v2->set_f_17(0x2ba);
  v1->set_f_1(0x4144bda);
  Message5::M1::M2* v4 = v0_0->mutable_f_3();
  Message5::M1::M2::M4* v5 = v4->mutable_f_4();
  Message5::M1::M2::M4::M7* v6_0 = v5->add_f_4();
  Message5::M1::M2::M4::M7::M10* v7_0 = v6_0->add_f_3();
  v7_0->set_f_18(0x4f);
  v7_0->set_f_5(0x4a64ded74);
  Message5::M1::M2::M4::M7::M10::M11* v8_0 = v7_0->add_f_29();
  v8_0->set_f_0(Message5::M1::M2::M4::M7::M10::M11::E10_CONST_2);
  Message5::M1::M2::M4::M7::M10::M12* v9_0 = v7_0->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v10 = v9_0->mutable_f_2();
  v10->set_f_8(0.322328);
  v10->set_f_2(0x90bf842);
  v10->set_f_6(0x57);
  v10->set_f_5(0x78);
  float array_1[67] = {
      0.747767, 0.201569, 0.913825, 0.159202, 0.224362, 0.052135, 0.591191,
      0.145535, 0.936641, 0.908870, 0.099545, 0.259257, 0.174640, 0.967890,
      0.264320, 0.213271, 0.101126, 0.179213, 0.586665, 0.862243, 0.971096,
      0.957765, 0.870312, 0.814220, 0.949065, 0.367047, 0.587399, 0.068687,
      0.236710, 0.349796, 0.741609, 0.830696, 0.377840, 0.549988, 0.190134,
      0.594831, 0.237379, 0.287849, 0.384227, 0.954008, 0.325853, 0.806580,
      0.890739, 0.990533, 0.522597, 0.930910, 0.948683, 0.405968, 0.411913,
      0.460482, 0.533054, 0.082887, 0.955783, 0.638811, 0.380384, 0.225093,
      0.423654, 0.219474, 0.928844, 0.271484, 0.843930, 0.083552, 0.739191,
      0.326140, 0.010899, 0.567925, 0.458113,
  };
  for (auto v : array_1) {
    v10->add_f_0(v);
  }
  v10->add_f_13(0.212651);
  v10->set_f_10(0.494648);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v11_0 = v10->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v12 = v11_0->mutable_f_2();
  v12->set_f_1(0x4);
  v12->set_f_0(s->substr(0, 365));
  v7_0->set_f_2(0x79);
  v7_0->set_f_16(0xe35cf7b);
  Message5::M1::M2::M4::M6* v13_0 = v5->add_f_2();
  v13_0->set_f_0(0x4f6);
  v5->add_f_0(0x14);
}
void Message5_Set_3(Message5* message, std::string* s) {
  Message5::M1* v0_0 = message->add_f_2();
  Message5::M1::M3* v1 = v0_0->mutable_f_4();
  Message5::M1::M3::M5* v2 = v1->mutable_f_8();
  v2->set_f_4(0.027242);
  v2->set_f_17(0x1323541);
  v2->set_f_11(false);
  v2->add_f_14(0x79795dc);
  v2->add_f_14(0x7a1ed6f);
  v2->add_f_14(0x1cd4d3);
  v2->add_f_14(0x313585);
  v2->add_f_16(Message5::M1::M3::M5::E4_CONST_4);
  v2->set_f_12(Message5::M1::M3::M5::E3_CONST_4);
  v2->set_f_13(0x7b81643c446ff92d);
  v2->set_f_9(0x5b);
  Message5::M1::M3::M5::M8* v3_0 = v2->add_f_25();
  v3_0->set_f_3(Message5::M1::M3::M5::M8::E7_CONST_1);
  v3_0->set_f_6(0x4d);
  v3_0->set_f_4(0x1c934ea94a3bb);
  v3_0->set_f_7(false);
  v1->set_f_0(0x18);
  Message5::M1::M2* v4 = v0_0->mutable_f_3();
  Message5::M1::M2::M4* v5 = v4->mutable_f_4();
  v5->add_f_0(0xa06c735);
  Message5::M1::M2::M4::M6* v6_0 = v5->add_f_2();
  Message5::M1::M2::M4::M6::M9* v7 = v6_0->mutable_f_2();
  Message5::M1::M2::M4::M6::M9::M13* v8 = v7->mutable_f_3();
  v8->set_f_0(s->substr(0, 7));
  v6_0->set_f_0(0x2d002a60c9e2ec);
  Message5::M1::M2::M4::M7* v9_0 = v5->add_f_4();
  Message5::M1::M2::M4::M7::M10* v10_0 = v9_0->add_f_3();
  v10_0->set_f_7(s->substr(0, 6));
  v10_0->set_f_11(0x6998523);
  v10_0->set_f_0(s->substr(0, 18));
  v10_0->set_f_18(0x12446a01ed473);
  v10_0->set_f_5(0x2d);
  Message5::M1::M2::M4::M7::M10::M12* v11_0 = v10_0->add_f_30();
  v11_0->set_f_0(true);
  Message5::M1::M2::M4::M7::M10::M12::M14* v12 = v11_0->mutable_f_2();
  v12->set_f_6(0xeb68671);
  v12->set_f_9(0x27);
  v12->set_f_14(0xc468e);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v13_0 = v12->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v14 = v13_0->mutable_f_2();
  v14->set_f_0(s->substr(0, 19));
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v13_1 = v12->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v15 = v13_1->mutable_f_2();
  v15->set_f_1(0x640922f);
  v15->set_f_0(s->substr(0, 29));
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17* v16 =
      v15->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  v13_1->set_f_0(0.992631);
  float array_0[14] = {
      0.304227, 0.826753, 0.820905, 0.464621, 0.665326, 0.582722, 0.952331,
      0.047785, 0.706567, 0.592855, 0.402425, 0.079427, 0.644780, 0.939896,
  };
  for (auto v : array_0) {
    v12->add_f_0(v);
  }
  v12->set_f_10(0.451667);
  Message5::M1::M2::M4::M7::M10* v10_1 = v9_0->add_f_3();
  v10_1->set_f_6(0x273f70abcfd089);
  v10_1->set_f_2(0x1f);
  v10_1->set_f_12(Message5::M1::M2::M4::M7::M10::E8_CONST_4);
  v10_1->set_f_17(0.722609);
  v10_1->set_f_3(s->substr(0, 3));
  v10_1->set_f_7(s->substr(0, 1));
  Message5::M1::M2::M4::M7::M10::M12* v17_0 = v10_1->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v18 = v17_0->mutable_f_2();
  v18->add_f_13(0.042456);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v19_0 = v18->add_f_20();
  v19_0->set_f_0(0.952416);
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v20 = v19_0->mutable_f_2();
  (void)v20;  // Suppresses clang-tidy.
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v19_1 = v18->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v21 = v19_1->mutable_f_2();
  v21->set_f_2(false);
  v21->set_f_1(0x76);
  v18->add_f_0(0.999749);
  v18->add_f_0(0.297596);
  v18->set_f_9(0x78cd93d8f47f98);
  v18->set_f_8(0.868299);
  v17_0->set_f_0(false);
  Message5::M1::M2::M4::M7::M10::M12* v17_1 = v10_1->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v22 = v17_1->mutable_f_2();
  float array_1[31] = {
      0.900025, 0.526823, 0.991570, 0.672452, 0.529689, 0.620729, 0.996244,
      0.738207, 0.027264, 0.230699, 0.696994, 0.793978, 0.757433, 0.781102,
      0.591446, 0.384363, 0.865378, 0.285136, 0.193939, 0.821356, 0.915065,
      0.384981, 0.726963, 0.639983, 0.664788, 0.081967, 0.862575, 0.204704,
      0.846269, 0.889601, 0.359511,
  };
  for (auto v : array_1) {
    v22->add_f_13(v);
  }
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v23_0 = v22->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v24 = v23_0->mutable_f_2();
  v24->set_f_2(false);
  v22->set_f_3(0x8);
  v22->set_f_7(0xa4132e8df21f7f);
  v22->set_f_10(0.102941);
  v22->set_f_12(0xf3143ed2ff6f);
  v10_1->set_f_9(0.468112);
  v10_1->set_f_0(s->substr(0, 8));
  v10_1->set_f_5(0x19);
  v10_1->set_f_18(0x2068);
  v10_1->set_f_13(0xad0be06b9a8b);
  v10_1->set_f_11(0x209584871f9);
}
void Message5_Set_4(Message5* message, std::string* s) {
  Message5::M1* v0_0 = message->add_f_2();
  Message5::M1::M2* v1 = v0_0->mutable_f_3();
  Message5::M1::M2::M4* v2 = v1->mutable_f_4();
  Message5::M1::M2::M4::M7* v3_0 = v2->add_f_4();
  Message5::M1::M2::M4::M7::M10* v4_0 = v3_0->add_f_3();
  v4_0->set_f_4(0x71);
  v4_0->set_f_17(0.282070);
  v4_0->set_f_6(0x2f0d);
  v4_0->set_f_5(0x1b);
  v4_0->set_f_11(0x5c0e1351bb41);
  Message5::M1::M2::M4::M7::M10::M12* v5_0 = v4_0->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v6 = v5_0->mutable_f_2();
  v6->set_f_7(0x1d0395);
  float array_0[13] = {
      0.487664, 0.008997, 0.837980, 0.688191, 0.043468, 0.824960, 0.012592,
      0.734428, 0.302240, 0.665645, 0.471454, 0.728494, 0.958184,
  };
  for (auto v : array_0) {
    v6->add_f_13(v);
  }
  v6->set_f_14(0x257b5564798);
  v6->set_f_2(0x5e);
  v6->set_f_4(s->substr(0, 9));
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v7_0 = v6->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v8 = v7_0->mutable_f_2();
  v8->set_f_0(s->substr(0, 9));
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17* v9 =
      v8->mutable_f_5();
  (void)v9;  // Suppresses clang-tidy.
  v6->set_f_1(s->substr(0, 2));
  v6->set_f_10(0.961965);
  v4_0->set_f_14(0x1b700e0dea2b0);
  float array_1[5] = {
      0.321860, 0.342811, 0.451081, 0.406870, 0.684955,
  };
  for (auto v : array_1) {
    v4_0->add_f_8(v);
  }
  Message5::M1::M2::M4::M7::M10* v4_1 = v3_0->add_f_3();
  float array_2[299] = {
      0.864453, 0.890169, 0.605444, 0.065779, 0.770885, 0.423462, 0.619788,
      0.550530, 0.642827, 0.260497, 0.047443, 0.632547, 0.125777, 0.021520,
      0.910811, 0.475574, 0.837894, 0.322617, 0.133479, 0.084748, 0.276245,
      0.002987, 0.605042, 0.766648, 0.201454, 0.762228, 0.360815, 0.222406,
      0.587936, 0.074442, 0.571096, 0.861338, 0.495617, 0.411611, 0.788335,
      0.434188, 0.024555, 0.065629, 0.128672, 0.349339, 0.015426, 0.587274,
      0.360066, 0.679601, 0.106550, 0.629545, 0.432751, 0.390845, 0.193006,
      0.741342, 0.488234, 0.591886, 0.466591, 0.160622, 0.264613, 0.875188,
      0.613853, 0.372209, 0.053917, 0.982091, 0.071312, 0.832121, 0.828801,
      0.998956, 0.107200, 0.212224, 0.021457, 0.079336, 0.183203, 0.721623,
      0.353716, 0.075174, 0.778921, 0.926901, 0.808916, 0.735406, 0.767943,
      0.756635, 0.475156, 0.339972, 0.676771, 0.181827, 0.894644, 0.150049,
      0.017823, 0.975844, 0.187356, 0.527478, 0.121335, 0.300567, 0.863876,
      0.666895, 0.459087, 0.465489, 0.874852, 0.900522, 0.573353, 0.073645,
      0.418204, 0.179723, 0.640290, 0.782388, 0.919424, 0.938529, 0.183875,
      0.841082, 0.878592, 0.679662, 0.708906, 0.252345, 0.045906, 0.888708,
      0.257341, 0.137799, 0.739113, 0.439196, 0.078142, 0.137170, 0.962991,
      0.428269, 0.246432, 0.413910, 0.295709, 0.861151, 0.969047, 0.303148,
      0.576846, 0.778251, 0.432795, 0.800802, 0.539667, 0.558384, 0.981498,
      0.609782, 0.363172, 0.511583, 0.986351, 0.652507, 0.018059, 0.015219,
      0.024678, 0.523357, 0.578173, 0.864976, 0.748927, 0.280625, 0.331318,
      0.712436, 0.263109, 0.987250, 0.518736, 0.626040, 0.730967, 0.746099,
      0.155795, 0.254246, 0.645497, 0.897239, 0.041974, 0.789764, 0.667084,
      0.759879, 0.852109, 0.236955, 0.091271, 0.721803, 0.785294, 0.371248,
      0.027052, 0.496778, 0.748632, 0.098779, 0.365719, 0.491499, 0.840984,
      0.610893, 0.565973, 0.776220, 0.030992, 0.889998, 0.759881, 0.344429,
      0.673774, 0.130753, 0.655750, 0.391485, 0.504564, 0.147041, 0.246855,
      0.993196, 0.908425, 0.306435, 0.569141, 0.719827, 0.482206, 0.127165,
      0.304077, 0.646467, 0.056253, 0.259592, 0.549448, 0.196131, 0.697826,
      0.804255, 0.805058, 0.054880, 0.415212, 0.404470, 0.206506, 0.447838,
      0.633312, 0.792609, 0.998211, 0.366062, 0.848184, 0.342966, 0.280825,
      0.808097, 0.804205, 0.028206, 0.313808, 0.613343, 0.317655, 0.763340,
      0.483201, 0.402001, 0.498656, 0.439374, 0.213712, 0.575528, 0.203147,
      0.258449, 0.012159, 0.203738, 0.824475, 0.174565, 0.351200, 0.914086,
      0.903154, 0.701868, 0.265645, 0.321479, 0.988467, 0.613785, 0.454834,
      0.735261, 0.979006, 0.142983, 0.771503, 0.897513, 0.098102, 0.081885,
      0.877505, 0.867370, 0.270427, 0.395117, 0.188831, 0.620403, 0.490570,
      0.549111, 0.404510, 0.910221, 0.251782, 0.727829, 0.924172, 0.770957,
      0.623421, 0.692002, 0.292159, 0.600252, 0.963592, 0.708992, 0.078175,
      0.598589, 0.837241, 0.401683, 0.329588, 0.310084, 0.295269, 0.655332,
      0.860861, 0.560991, 0.083409, 0.673260, 0.692912, 0.681226, 0.076538,
      0.527751, 0.193111, 0.585879, 0.265077, 0.529598, 0.972942, 0.480868,
      0.079675, 0.137240, 0.064741, 0.814561, 0.292492,
  };
  for (auto v : array_2) {
    v4_1->add_f_8(v);
  }
  Message5::M1::M2::M4::M7::M10::M12* v10_0 = v4_1->add_f_30();
  Message5::M1::M2::M4::M7::M10::M12::M14* v11 = v10_0->mutable_f_2();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15* v12_0 = v11->add_f_20();
  Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16* v13 = v12_0->mutable_f_2();
  v13->set_f_0(s->substr(0, 32));
  v11->set_f_10(0.234845);
  v11->set_f_3(0x5c9fdd8c);
  v11->set_f_14(0xd57605936f23d0);
  v4_1->set_f_7(s->substr(0, 5));
  v4_1->set_f_2(0x20);
  v4_1->set_f_1(0x4);
  Message5::M1::M2::M4::M7::M10::M11* v14_0 = v4_1->add_f_29();
  (void)v14_0;  // Suppresses clang-tidy.
  v4_1->set_f_0(s->substr(0, 2));
  v4_1->set_f_12(Message5::M1::M2::M4::M7::M10::E8_CONST_4);
  v4_1->set_f_16(0x498eb25);
  v4_1->set_f_10(s->substr(0, 29));
  v4_1->set_f_6(0x6edcdd591cd);
  Message5::M1::M3* v15 = v0_0->mutable_f_4();
  v15->set_f_0(0x36);
  v15->set_f_3(s->substr(0, 6));
  Message5::M1::M3::M5* v16 = v15->mutable_f_8();
  v16->set_f_12(Message5::M1::M3::M5::E3_CONST_4);
  v16->add_f_14(0x335f310);
  v16->add_f_14(0x817fea0);
  v16->set_f_8(false);
  v16->set_f_9(0x888e7);
  v16->set_f_5(0.595192);
  v16->set_f_3(0xc3c89bef0f515f);
  Message5::M1::M3::M5::M8* v17_0 = v16->add_f_25();
  v17_0->set_f_0(0.226644);
  v17_0->set_f_7(false);
  v17_0->set_f_5(0.217942);
  v17_0->set_f_3(Message5::M1::M3::M5::M8::E7_CONST_2);
  v16->set_f_6(0x703ad9cd003149);
  v16->set_f_7(0x199bd);
  v0_0->set_f_0(Message5::M1::E1_CONST_3);
}
void Message5_Get_1(Message5* message) {
  for (const auto& v0 : (*message).f_2()) {
    const Message5::M1::M2& v1 = v0.f_3();
    const Message5::M1::M2::M4& v2 = v1.f_4();
    for (const auto& v3 : v2.f_2()) {
      Receive(v3.f_0());
      const Message5::M1::M2::M4::M6::M9& v4 = v3.f_2();
      const Message5::M1::M2::M4::M6::M9::M13& v5 = v4.f_3();
      Receive(v5.f_0());
      Receive(v4.f_0());
    }
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    for (const auto& v6 : v2.f_4()) {
      Receive(v6.f_0());
      for (const auto& v7 : v6.f_3()) {
        Receive(v7.f_15());
        Receive(v7.f_11());
        Receive(v7.f_13());
        Receive(v7.f_6());
        Receive(v7.f_0());
        Receive(v7.f_9());
        for (const auto& v8 : v7.f_29()) {
          Receive(v8.f_0());
        }
        Receive(v7.f_1());
        Receive(v7.f_12());
        Receive(v7.f_16());
        Receive(v7.f_7());
        Receive(v7.f_10());
        Receive(v7.f_17());
        Receive(v7.f_3());
        Receive(v7.f_5());
        for (int i = 0; i < v7.f_8_size(); ++i) {
          Receive(v7.f_8(i));
        }
        for (const auto& v9 : v7.f_30()) {
          Receive(v9.f_0());
          const Message5::M1::M2::M4::M7::M10::M12::M14& v10 = v9.f_2();
          for (int i = 0; i < v10.f_13_size(); ++i) {
            Receive(v10.f_13(i));
          }
          Receive(v10.f_1());
          Receive(v10.f_5());
          Receive(v10.f_4());
          Receive(v10.f_12());
          Receive(v10.f_10());
          Receive(v10.f_8());
          Receive(v10.f_3());
          Receive(v10.f_7());
          Receive(v10.f_6());
          Receive(v10.f_2());
          Receive(v10.f_14());
          for (const auto& v11 : v10.f_20()) {
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16& v12 =
                v11.f_2();
            Receive(v12.f_1());
            Receive(v12.f_2());
            Receive(v12.f_0());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17& v13 =
                v12.f_5();
            Receive(v13.f_0());
            Receive(v11.f_0());
          }
          Receive(v10.f_9());
          for (int i = 0; i < v10.f_0_size(); ++i) {
            Receive(v10.f_0(i));
          }
          Receive(v10.f_11());
        }
        Receive(v7.f_4());
        Receive(v7.f_14());
        Receive(v7.f_2());
        Receive(v7.f_18());
      }
    }
    Receive(v1.f_0());
    const Message5::M1::M3& v14 = v0.f_4();
    Receive(v14.f_0());
    const Message5::M1::M3::M5& v15 = v14.f_8();
    Receive(v15.f_7());
    for (int i = 0; i < v15.f_14_size(); ++i) {
      Receive(v15.f_14(i));
    }
    for (const auto& v16 : v15.f_25()) {
      Receive(v16.f_4());
      Receive(v16.f_1());
      Receive(v16.f_6());
      Receive(v16.f_5());
      Receive(v16.f_2());
      Receive(v16.f_7());
      Receive(v16.f_3());
      Receive(v16.f_0());
    }
    Receive(v15.f_6());
    Receive(v15.f_11());
    Receive(v15.f_0());
    Receive(v15.f_9());
    Receive(v15.f_17());
    Receive(v15.f_2());
    Receive(v15.f_1());
    Receive(v15.f_13());
    Receive(v15.f_4());
    Receive(v15.f_5());
    Receive(v15.f_12());
    Receive(v15.f_15());
    Receive(v15.f_8());
    for (int i = 0; i < v15.f_16_size(); ++i) {
      Receive(v15.f_16(i));
    }
    Receive(v15.f_3());
    Receive(v15.f_10());
    Receive(v14.f_1());
    Receive(v14.f_3());
    Receive(v14.f_2());
    Receive(v0.f_0());
  }
  Receive((*message).f_0());
}
void Message5_Get_2(Message5* message) {
  for (const auto& v0 : (*message).f_2()) {
    const Message5::M1::M2& v1 = v0.f_3();
    const Message5::M1::M2::M4& v2 = v1.f_4();
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    for (const auto& v3 : v2.f_4()) {
      for (const auto& v4 : v3.f_3()) {
        Receive(v4.f_10());
        for (const auto& v5 : v4.f_29()) {
          Receive(v5.f_0());
        }
        Receive(v4.f_9());
        Receive(v4.f_15());
        Receive(v4.f_2());
        Receive(v4.f_0());
        Receive(v4.f_6());
        Receive(v4.f_1());
        Receive(v4.f_14());
        Receive(v4.f_17());
        Receive(v4.f_18());
        for (int i = 0; i < v4.f_8_size(); ++i) {
          Receive(v4.f_8(i));
        }
        for (const auto& v6 : v4.f_30()) {
          const Message5::M1::M2::M4::M7::M10::M12::M14& v7 = v6.f_2();
          Receive(v7.f_10());
          Receive(v7.f_11());
          Receive(v7.f_7());
          Receive(v7.f_5());
          for (int i = 0; i < v7.f_0_size(); ++i) {
            Receive(v7.f_0(i));
          }
          for (int i = 0; i < v7.f_13_size(); ++i) {
            Receive(v7.f_13(i));
          }
          Receive(v7.f_3());
          Receive(v7.f_14());
          Receive(v7.f_9());
          Receive(v7.f_6());
          Receive(v7.f_8());
          Receive(v7.f_1());
          Receive(v7.f_12());
          Receive(v7.f_2());
          for (const auto& v8 : v7.f_20()) {
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16& v9 =
                v8.f_2();
            Receive(v9.f_2());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17& v10 =
                v9.f_5();
            Receive(v10.f_0());
            Receive(v9.f_0());
            Receive(v9.f_1());
            Receive(v8.f_0());
          }
          Receive(v7.f_4());
          Receive(v6.f_0());
        }
        Receive(v4.f_13());
        Receive(v4.f_7());
        Receive(v4.f_5());
        Receive(v4.f_4());
        Receive(v4.f_16());
        Receive(v4.f_3());
        Receive(v4.f_11());
        Receive(v4.f_12());
      }
      Receive(v3.f_0());
    }
    for (const auto& v11 : v2.f_2()) {
      const Message5::M1::M2::M4::M6::M9& v12 = v11.f_2();
      const Message5::M1::M2::M4::M6::M9::M13& v13 = v12.f_3();
      Receive(v13.f_0());
      Receive(v12.f_0());
      Receive(v11.f_0());
    }
    Receive(v1.f_0());
    const Message5::M1::M3& v14 = v0.f_4();
    Receive(v14.f_0());
    Receive(v14.f_1());
    const Message5::M1::M3::M5& v15 = v14.f_8();
    Receive(v15.f_17());
    Receive(v15.f_8());
    Receive(v15.f_12());
    Receive(v15.f_0());
    Receive(v15.f_13());
    Receive(v15.f_7());
    Receive(v15.f_9());
    Receive(v15.f_11());
    for (const auto& v16 : v15.f_25()) {
      Receive(v16.f_7());
      Receive(v16.f_3());
      Receive(v16.f_5());
      Receive(v16.f_2());
      Receive(v16.f_0());
      Receive(v16.f_6());
      Receive(v16.f_4());
      Receive(v16.f_1());
    }
    Receive(v15.f_6());
    Receive(v15.f_3());
    Receive(v15.f_5());
    Receive(v15.f_1());
    Receive(v15.f_15());
    Receive(v15.f_2());
    for (int i = 0; i < v15.f_14_size(); ++i) {
      Receive(v15.f_14(i));
    }
    for (int i = 0; i < v15.f_16_size(); ++i) {
      Receive(v15.f_16(i));
    }
    Receive(v15.f_4());
    Receive(v15.f_10());
    Receive(v14.f_3());
    Receive(v14.f_2());
    Receive(v0.f_0());
  }
  Receive((*message).f_0());
}
void Message5_Get_3(Message5* message) {
  for (const auto& v0 : (*message).f_2()) {
    const Message5::M1::M3& v1 = v0.f_4();
    Receive(v1.f_3());
    Receive(v1.f_0());
    Receive(v1.f_2());
    Receive(v1.f_1());
    const Message5::M1::M3::M5& v2 = v1.f_8();
    Receive(v2.f_6());
    for (int i = 0; i < v2.f_14_size(); ++i) {
      Receive(v2.f_14(i));
    }
    Receive(v2.f_15());
    Receive(v2.f_2());
    for (int i = 0; i < v2.f_16_size(); ++i) {
      Receive(v2.f_16(i));
    }
    Receive(v2.f_11());
    Receive(v2.f_7());
    Receive(v2.f_12());
    for (const auto& v3 : v2.f_25()) {
      Receive(v3.f_6());
      Receive(v3.f_2());
      Receive(v3.f_3());
      Receive(v3.f_5());
      Receive(v3.f_4());
      Receive(v3.f_0());
      Receive(v3.f_7());
      Receive(v3.f_1());
    }
    Receive(v2.f_0());
    Receive(v2.f_1());
    Receive(v2.f_3());
    Receive(v2.f_17());
    Receive(v2.f_9());
    Receive(v2.f_4());
    Receive(v2.f_8());
    Receive(v2.f_10());
    Receive(v2.f_13());
    Receive(v2.f_5());
    Receive(v0.f_0());
    const Message5::M1::M2& v4 = v0.f_3();
    Receive(v4.f_0());
    const Message5::M1::M2::M4& v5 = v4.f_4();
    for (const auto& v6 : v5.f_2()) {
      Receive(v6.f_0());
      const Message5::M1::M2::M4::M6::M9& v7 = v6.f_2();
      Receive(v7.f_0());
      const Message5::M1::M2::M4::M6::M9::M13& v8 = v7.f_3();
      Receive(v8.f_0());
    }
    for (const auto& v9 : v5.f_4()) {
      for (const auto& v10 : v9.f_3()) {
        Receive(v10.f_11());
        Receive(v10.f_9());
        for (const auto& v11 : v10.f_30()) {
          Receive(v11.f_0());
          const Message5::M1::M2::M4::M7::M10::M12::M14& v12 = v11.f_2();
          Receive(v12.f_8());
          Receive(v12.f_9());
          Receive(v12.f_6());
          Receive(v12.f_12());
          Receive(v12.f_5());
          for (const auto& v13 : v12.f_20()) {
            Receive(v13.f_0());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16& v14 =
                v13.f_2();
            Receive(v14.f_2());
            Receive(v14.f_1());
            Receive(v14.f_0());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17& v15 =
                v14.f_5();
            Receive(v15.f_0());
          }
          Receive(v12.f_2());
          Receive(v12.f_4());
          Receive(v12.f_10());
          Receive(v12.f_3());
          Receive(v12.f_14());
          Receive(v12.f_1());
          Receive(v12.f_7());
          for (int i = 0; i < v12.f_13_size(); ++i) {
            Receive(v12.f_13(i));
          }
          for (int i = 0; i < v12.f_0_size(); ++i) {
            Receive(v12.f_0(i));
          }
          Receive(v12.f_11());
        }
        Receive(v10.f_6());
        Receive(v10.f_4());
        Receive(v10.f_14());
        Receive(v10.f_2());
        Receive(v10.f_3());
        Receive(v10.f_12());
        Receive(v10.f_16());
        for (int i = 0; i < v10.f_8_size(); ++i) {
          Receive(v10.f_8(i));
        }
        Receive(v10.f_18());
        Receive(v10.f_0());
        Receive(v10.f_17());
        for (const auto& v16 : v10.f_29()) {
          Receive(v16.f_0());
        }
        Receive(v10.f_5());
        Receive(v10.f_10());
        Receive(v10.f_13());
        Receive(v10.f_7());
        Receive(v10.f_15());
        Receive(v10.f_1());
      }
      Receive(v9.f_0());
    }
    for (int i = 0; i < v5.f_0_size(); ++i) {
      Receive(v5.f_0(i));
    }
  }
  Receive((*message).f_0());
}
void Message5_Get_4(Message5* message) {
  for (const auto& v0 : (*message).f_2()) {
    Receive(v0.f_0());
    const Message5::M1::M3& v1 = v0.f_4();
    const Message5::M1::M3::M5& v2 = v1.f_8();
    Receive(v2.f_9());
    Receive(v2.f_7());
    Receive(v2.f_10());
    Receive(v2.f_15());
    Receive(v2.f_4());
    Receive(v2.f_13());
    Receive(v2.f_11());
    for (int i = 0; i < v2.f_16_size(); ++i) {
      Receive(v2.f_16(i));
    }
    Receive(v2.f_6());
    Receive(v2.f_3());
    Receive(v2.f_8());
    Receive(v2.f_2());
    for (int i = 0; i < v2.f_14_size(); ++i) {
      Receive(v2.f_14(i));
    }
    Receive(v2.f_12());
    Receive(v2.f_5());
    Receive(v2.f_0());
    for (const auto& v3 : v2.f_25()) {
      Receive(v3.f_0());
      Receive(v3.f_1());
      Receive(v3.f_7());
      Receive(v3.f_3());
      Receive(v3.f_5());
      Receive(v3.f_4());
      Receive(v3.f_6());
      Receive(v3.f_2());
    }
    Receive(v2.f_17());
    Receive(v2.f_1());
    Receive(v1.f_0());
    Receive(v1.f_1());
    Receive(v1.f_3());
    Receive(v1.f_2());
    const Message5::M1::M2& v4 = v0.f_3();
    Receive(v4.f_0());
    const Message5::M1::M2::M4& v5 = v4.f_4();
    for (int i = 0; i < v5.f_0_size(); ++i) {
      Receive(v5.f_0(i));
    }
    for (const auto& v6 : v5.f_4()) {
      Receive(v6.f_0());
      for (const auto& v7 : v6.f_3()) {
        Receive(v7.f_1());
        Receive(v7.f_15());
        Receive(v7.f_12());
        Receive(v7.f_9());
        Receive(v7.f_13());
        Receive(v7.f_2());
        Receive(v7.f_10());
        Receive(v7.f_18());
        Receive(v7.f_5());
        Receive(v7.f_14());
        for (const auto& v8 : v7.f_30()) {
          Receive(v8.f_0());
          const Message5::M1::M2::M4::M7::M10::M12::M14& v9 = v8.f_2();
          Receive(v9.f_12());
          Receive(v9.f_14());
          Receive(v9.f_10());
          Receive(v9.f_11());
          Receive(v9.f_2());
          Receive(v9.f_6());
          for (int i = 0; i < v9.f_0_size(); ++i) {
            Receive(v9.f_0(i));
          }
          for (const auto& v10 : v9.f_20()) {
            Receive(v10.f_0());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16& v11 =
                v10.f_2();
            Receive(v11.f_2());
            Receive(v11.f_0());
            const Message5::M1::M2::M4::M7::M10::M12::M14::M15::M16::M17& v12 =
                v11.f_5();
            Receive(v12.f_0());
            Receive(v11.f_1());
          }
          Receive(v9.f_8());
          for (int i = 0; i < v9.f_13_size(); ++i) {
            Receive(v9.f_13(i));
          }
          Receive(v9.f_7());
          Receive(v9.f_5());
          Receive(v9.f_1());
          Receive(v9.f_9());
          Receive(v9.f_3());
          Receive(v9.f_4());
        }
        Receive(v7.f_17());
        Receive(v7.f_3());
        Receive(v7.f_11());
        Receive(v7.f_16());
        Receive(v7.f_6());
        for (const auto& v13 : v7.f_29()) {
          Receive(v13.f_0());
        }
        Receive(v7.f_0());
        for (int i = 0; i < v7.f_8_size(); ++i) {
          Receive(v7.f_8(i));
        }
        Receive(v7.f_7());
        Receive(v7.f_4());
      }
    }
    for (const auto& v14 : v5.f_2()) {
      const Message5::M1::M2::M4::M6::M9& v15 = v14.f_2();
      const Message5::M1::M2::M4::M6::M9::M13& v16 = v15.f_3();
      Receive(v16.f_0());
      Receive(v15.f_0());
      Receive(v14.f_0());
    }
  }
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
