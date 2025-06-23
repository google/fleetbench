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

#include "fleetbench/proto/access_message3.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message3.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message3_Set_1(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_10();
  Message3::M1::M2* v1 = v0->mutable_f_4();
  Message3::M1::M2::M5* v2_0 = v1->add_f_5();
  Message3::M1::M2::M5::M7* v3_0 = v2_0->add_f_4();
  Message3::M1::M2::M5::M7::M10* v4_0 = v3_0->add_f_2();
  Message3::M1::M2::M5::M7::M10::M14* v5 = v4_0->mutable_f_2();
  Message3::M1::M2::M5::M7::M10::M14::M15* v6 = v5->mutable_f_5();
  v6->set_f_4(0x1f);
  Message3::M1::M2::M5::M7::M10::M14::M15::M16* v7 = v6->mutable_f_14();
  v7->set_f_0(Message3::M1::M2::M5::M7::M10::M14::M15::M16::E4_CONST_2);
  v6->set_f_2(0.779404);
  Message3::M1::M2::M5::M6* v8 = v2_0->mutable_f_2();
  (void)v8;  // Suppresses clang-tidy.
  Message3::M1::M2::M5::M8* v9 = v2_0->mutable_f_6();
  v9->set_f_1(s->substr(0, 247));
  Message3::M1::M2::M5::M8::M11* v10_0 = v9->add_f_6();
  v10_0->set_f_4(0x9);
  Message3::M1::M2::M5::M8::M11::M12* v11_0 = v10_0->add_f_7();
  (void)v11_0;  // Suppresses clang-tidy.
  Message3::M1::M2::M5::M8::M11* v10_1 = v9->add_f_6();
  v10_1->set_f_4(0x6608401);
  v10_1->set_f_3(0xafead3ce74f638);
  Message3::M1::M2::M5::M8::M9* v12 = v9->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  Message3::M1::M2::M3* v13 = v1->mutable_f_3();
  v13->set_f_0(0x84337af);
  message->set_f_2(0x5b4d9);
}
void Message3_Set_2(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_10();
  v0->set_f_0(s->substr(0, 5));
  Message3::M1::M2* v1 = v0->mutable_f_4();
  Message3::M1::M2::M4* v2_0 = v1->add_f_4();
  (void)v2_0;  // Suppresses clang-tidy.
  v1->set_f_0(0xdd46b68);
  v1->set_f_1(Message3::M1::M2::E2_CONST_2);
  Message3::M1::M2::M5* v3_0 = v1->add_f_5();
  v3_0->set_f_0(Message3::M1::M2::M5::E3_CONST_5);
  Message3::M1::M2::M5::M8* v4 = v3_0->mutable_f_6();
  Message3::M1::M2::M5::M8::M11* v5_0 = v4->add_f_6();
  v5_0->set_f_2(0x24e0);
  v5_0->set_f_0(0.490948);
  Message3::M1::M2::M5::M8::M11* v5_1 = v4->add_f_6();
  v5_1->set_f_2(0x30);
  v5_1->set_f_0(0.203951);
  v5_1->set_f_3(0x2413c05);
  Message3::M1::M2::M5::M8::M11::M12* v6_0 = v5_1->add_f_7();
  (void)v6_0;  // Suppresses clang-tidy.
  Message3::M1::M2::M5::M8::M11::M12* v6_1 = v5_1->add_f_7();
  (void)v6_1;  // Suppresses clang-tidy.
  Message3::M1::M2::M5::M6* v7 = v3_0->mutable_f_2();
  (void)v7;  // Suppresses clang-tidy.
  Message3::M1::M2::M5::M7* v8_0 = v3_0->add_f_4();
  Message3::M1::M2::M5::M7::M10* v9_0 = v8_0->add_f_2();
  v9_0->set_f_0(s->substr(0, 3));
  Message3::M1::M2::M5::M7::M10::M14* v10 = v9_0->mutable_f_2();
  Message3::M1::M2::M5::M7::M10::M14::M15* v11 = v10->mutable_f_5();
  v11->add_f_6(0xd3c51);
  v11->add_f_6(0x16de90);
  v11->add_f_6(0x7e7194b);
  v11->add_f_6(0x3d55558);
  v11->set_f_0(0x7a);
  v11->set_f_5(s->substr(0, 19));
  v10->set_f_0(0.066771);
  v10->set_f_1(s->substr(0, 14));
  message->set_f_3(Message3::E1_CONST_3);
}
void Message3_Set_3(Message3* message, std::string* s) {
  Message3::M1* v0 = message->mutable_f_10();
  v0->set_f_0(s->substr(0, 29));
  Message3::M1::M2* v1 = v0->mutable_f_4();
  Message3::M1::M2::M5* v2_0 = v1->add_f_5();
  Message3::M1::M2::M5::M8* v3 = v2_0->mutable_f_6();
  Message3::M1::M2::M5::M8::M9* v4 = v3->mutable_f_4();
  v4->set_f_0(0x40);
  Message3::M1::M2::M5::M8::M11* v5_0 = v3->add_f_6();
  v5_0->set_f_2(0xed0c5ec837a699);
  v5_0->set_f_0(0.302332);
  v5_0->set_f_3(0x51b7646f6c7976);
  Message3::M1::M2::M5::M7* v6_0 = v2_0->add_f_4();
  Message3::M1::M2::M5::M7::M10* v7_0 = v6_0->add_f_2();
  v7_0->set_f_0(s->substr(0, 11));
  Message3::M1::M2::M5::M7::M10::M14* v8 = v7_0->mutable_f_2();
  v8->set_f_1(s->substr(0, 6));
  v8->set_f_2(0.858080);
  Message3::M1::M2::M5::M7::M10::M14::M15* v9 = v8->mutable_f_5();
  v9->set_f_0(0x4b);
  v9->set_f_5(s->substr(0, 257));
  v9->set_f_1(0x54dff08);
  v9->set_f_4(0x42);
  v9->add_f_6(0xf41fc10);
  v9->add_f_6(0x48775a7);
  v9->add_f_6(0xa8a67);
  v9->add_f_6(0x13ec0b);
  v9->add_f_7(0.644563);
  Message3::M1::M2::M3* v10 = v1->mutable_f_3();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_0(0xc7fb8d1);
}
void Message3_Set_4(Message3* message, std::string* s) {
  message->set_f_3(Message3::E1_CONST_3);
  message->add_f_4(s->substr(0, 55));
  Message3::M1* v0 = message->mutable_f_10();
  Message3::M1::M2* v1 = v0->mutable_f_4();
  Message3::M1::M2::M5* v2_0 = v1->add_f_5();
  Message3::M1::M2::M5::M7* v3_0 = v2_0->add_f_4();
  v3_0->set_f_0(s->substr(0, 1));
  Message3::M1::M2::M5::M7::M10* v4_0 = v3_0->add_f_2();
  Message3::M1::M2::M5::M7::M10::M14* v5 = v4_0->mutable_f_2();
  v5->set_f_0(0.215423);
  Message3::M1::M2::M5::M7::M10::M14::M15* v6 = v5->mutable_f_5();
  v6->add_f_7(0.964635);
  v6->set_f_5(s->substr(0, 5));
  v6->set_f_2(0.543419);
  Message3::M1::M2::M5::M7::M10::M14::M15::M16* v7 = v6->mutable_f_14();
  Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17* v8 = v7->mutable_f_2();
  (void)v8;  // Suppresses clang-tidy.
  v7->set_f_0(Message3::M1::M2::M5::M7::M10::M14::M15::M16::E4_CONST_3);
  int32_t array_0[1141] = {
      0x8f38763, 0x1b4539,  0x4616b69, 0x1db7ed,  0x266a,    0xd11eb,
      0xec523c6, 0xd4cf,    0x2bca,    0x1b96cb,  0x1a9ea61, 0x64,
      0x271194d, 0xe91ab,   0x1c1ca0a, 0xd0e91ba, 0x41,      0x5fdfe7e,
      0x1c33,    0xa36cd9d, 0xe64,     0xbafa80b, 0xdc52069, 0x16d41b,
      0x87859a0, 0x4ef4d8b, 0x10d045a, 0x8c92ec2, 0x8a6e0,   0x657be,
      0x7dec00a, 0xc39fd40, 0x62,      0x12d782,  0x4b23,    0x26c8aec,
      0x8cd68,   0x9e9724,  0xa60a0b3, 0xabf280b, 0x61515,   0x83b6994,
      0x1d50,    0xb0faff9, 0x31485ec, 0x70,      0x1c1372,  0x15d6d4f,
      0xc482eee, 0x84c6d52, 0x1cca522, 0xf2c00d1, 0x1b5175,  0x255defd,
      0x4a,      0xb1bb217, 0x24e397d, 0xc1dc91a, 0x31114ec, 0x42b9e58,
      0x7c61954, 0xe6c849b, 0x3f88871, 0x53c1d60, 0x1ab032,  0x5e3bb,
      0x7eee972, 0xee7493a, 0x3278f1c, 0x4a3aedf, 0x3f440a5, 0x8ca06,
      0x27b12f1, 0x1e852b,  0x1c29ac,  0x1fa5b1,  0x70,      0xcbd8030,
      0xbf6c302, 0xfd61b28, 0x232c,    0x9b183b5, 0x143a9e,  0xe51f0d5,
      0x1b24a1,  0x3c836,   0xf412ad9, 0x5,       0x4901c99, 0x7955178,
      0x4e92c,   0xfaec1c9, 0xa4fcb27, 0x195f9d,  0x1f047c,  0x11f9,
      0x7098505, 0x9751520, 0x3d7e0d4, 0x4a75ac7, 0x5599a,   0x9bcb49c,
      0xa44cd08, 0x20,      0x2b,      0x7,       0x13e3d6,  0xa28e7,
      0x10,      0x5a69fb9, 0x11ffcc5, 0x65b00e1, 0x1e0287,  0x1a73d64,
      0x7dbb6a1, 0x1856ab1, 0xce38556, 0x1e925,   0x94de35f, 0x90c2e98,
      0xe8c6529, 0x78881,   0x6864211, 0x177fa78, 0x992f5d8, 0xb78dc15,
      0x776e0,   0x2f26713, 0xc0eb163, 0x29f7019, 0x1bf8fcd, 0xb,
      0xd3e9b,   0x1eb5d25, 0x7b4ad,   0x1d9277,  0xcfc61,   0xb89911e,
      0x6b,      0xcd83678, 0xfa5c485, 0xdaf4b45, 0xa23d6b7, 0xdcefc99,
      0x136809,  0x149d8fe, 0x65e70da, 0x8fd92ca, 0x48776,   0x8,
      0x3f8e,    0x90b195b, 0x2daa14f, 0x34,      0x6e08428, 0x10,
      0xb70ac,   0xe38c61a, 0x2a12be3, 0x46a25a7, 0x1575462, 0x7e136b5,
      0x51b1755, 0x2278628, 0x13f826e, 0x698043b, 0xd87e533, 0xdceecd9,
      0x5b70a21, 0x2aa35,   0xc786db1, 0xa762293, 0x1a53b01, 0xc74fd34,
      0xd24d9,   0x47aa2,   0x577,     0x49b0f8d, 0xa8de5cc, 0x189b4a,
      0xca594d,  0x9f7930f, 0x64f4149, 0x818ebc,  0x62aebbe, 0xf774,
      0xc1cb4df, 0x6a131bd, 0x6ad45a0, 0x19e638,  0x122ab1,  0x2b88,
      0x1a2c1cd, 0x97fa698, 0xf501d,   0x23,      0x5d7,     0x54d4c6,
      0x143dd5,  0x391e23c, 0x17b2,    0xd737072, 0x1639df,  0x52f81,
      0xc9408,   0x3381571, 0xa111cc0, 0x580fb8e, 0x27b4d53, 0x41,
      0x73cc699, 0xba632f1, 0x9a62fc8, 0x12,      0xe4979a2, 0x5a3a50a,
      0xa0317bf, 0x3f322,   0x360af,   0x2aa95d2, 0x8d553e7, 0x1c2d44,
      0x2c47f7b, 0x7ad9118, 0x45f4703, 0x2e,      0x6bb1e72, 0x966680d,
      0x6efa992, 0x16c4c25, 0x4743b,   0xc34244e, 0xf8caa09, 0xf342ce4,
      0xfe11d,   0x5b,      0x830ee72, 0x262fc71, 0x9399f5c, 0x20f7,
      0x1fce6e,  0x93f27,   0x63,      0x2686,    0x1425f4,  0xb26146,
      0x49,      0x140c56,  0xb10894d, 0x5b,      0xc6758ae, 0xc443453,
      0x359ee3a, 0x3df958e, 0xe5f3460, 0x30cb6cd, 0x54,      0x5cc80d6,
      0xe848de7, 0x109248,  0xb3899fc, 0x3464,    0x5d3feb8, 0x6bf93f1,
      0x7b7d1d1, 0x3f,      0x11bf904, 0x85c,     0xb38abc0, 0x9c8,
      0x42781,   0xe02ecdb, 0xb,       0xf5e0ba4, 0x1f4c8f,  0x11238d,
      0xa24d49d, 0x19f6dbd, 0x16c2e5,  0x5795d2a, 0x1ba9c5,  0x8a5f52,
      0x902273e, 0x301f1,   0x45,      0x355c4,   0x1b9388,  0x78b,
      0x54,      0x1ede53,  0x19ad,    0x902f4e7, 0xa135904, 0x585c760,
      0x57c13,   0x16876a,  0x4fb6887, 0x123514,  0x8c47e5a, 0x5658655,
      0xfb3fdd3, 0x655ae,   0xeb46924, 0xa89a293, 0x141698,  0xf26803b,
      0xd61cf46, 0x59,      0x78,      0x2a66f8d, 0x30,      0x23a7674,
      0x28,      0x97529,   0x56,      0x66,      0x1e29dd3, 0x1f1d53,
      0x1644ca,  0x7b,      0xc8b9d78, 0xb9b0db9, 0x51,      0x1690c2,
      0x2c64,    0x154a58,  0x4a5975e, 0x304cb38, 0x4eb7ca,  0x6973ab,
      0x2900,    0xf6f1069, 0xb5cc666, 0x63,      0xdee7798, 0xdc9c9b1,
      0x2a3c,    0x68649b0, 0x7b,      0x1686ea,  0xa11c863, 0x19ce,
      0xd2363e6, 0xf291765, 0x4ea348b, 0xfa5f133, 0x185f44,  0x1e,
      0x4c010b6, 0x115a532, 0x6700b6c, 0xc801b,   0x973d129, 0x2ea8,
      0x1ed816,  0x18d59e,  0x65a3ee5, 0x471adb2, 0x90314e4, 0x1130bb,
      0x52,      0xfcbaec1, 0x2372e95, 0x2272ed2, 0x7a1f180, 0x16487ac,
      0x77,      0x121b09,  0x43,      0xc7f6507, 0x33128c6, 0x8faf70d,
      0x5ebb3ba, 0x1cdc91a, 0x974f29a, 0x1e5ef57, 0x11,      0x8ec4c85,
      0x60253fd, 0x12,      0x3d16b,   0x16a88e,  0xfb4d399, 0xe74136,
      0x61653f4, 0xf2086cc, 0x17fb859, 0xfd56f86, 0x1a39ad,  0x11d3d2,
      0x37,      0x37b4173, 0xd316bf3, 0x4c36de9, 0x9713a85, 0x73,
      0x15b7d6,  0x187aa0,  0x5f,      0x188504,  0x9210761, 0x1d,
      0x75102ff, 0xd8a6a16, 0x129bd08, 0x9d3ad3c, 0x3c,      0xe40bcd8,
      0xa91d230, 0x24c59a3, 0x9905405, 0x191127,  0x47,      0xf44ee1d,
      0x12a72b,  0x4b97ceb, 0x86c63,   0x141e3d,  0xbcfd7d2, 0x1dce9b,
      0x1e9a6e,  0x2b,      0x992,     0x36,      0x31a1,    0x1f10,
      0x42,      0x13f349,  0xc040b9e, 0x3920bdf, 0xc3fe5ed, 0x988e8ea,
      0x5b8,     0x10773b,  0x1eb613,  0x33b3636, 0xc4a661d, 0x4d470,
      0x860dc7c, 0xefb04a5, 0xb1c8ef8, 0xa2fe37e, 0x37c37bb, 0x3ccb709,
      0xd42d339, 0xc581a61, 0x6d0497f, 0x251d6aa, 0xc5e6697, 0x3ba0e8,
      0xd2eb4ca, 0xd692c2a, 0x53a10da, 0x36c9,    0x1979b9,  0x3374f,
      0x2107fd5, 0xe1800,   0x1de8748, 0x2c,      0xfced3,   0x3,
      0x1937c1,  0xbb5e812, 0xed859a5, 0xcf6d92a, 0x1bc24f,  0x1c,
      0x17b8ea,  0x2c2,     0x1bdfd1,  0x40,      0x2c037b0, 0x4ce83e9,
      0x192c2b,  0x390f,    0x6264170, 0x3a5b0f3, 0x6a22066, 0x4950876,
      0x255a,    0xeb783d4, 0x15f2aa0, 0x55cba,   0x38,      0x970402c,
      0x1f,      0x16774a,  0x798e3f9, 0x1f54d0,  0x174d81,  0xa4116f8,
      0x16,      0x109229,  0x9edeba,  0x226284b, 0xe52bc75, 0xdb14175,
      0x30ff30,  0x1a6cdf,  0x1e1c40,  0x75,      0x3695bc0, 0x13877c,
      0x40,      0x2,       0x11da,    0x140b,    0xa97d548, 0x2f41,
      0x51615ae, 0xca54110, 0x58b3733, 0xec43297, 0x62ebec0, 0x5ae0,
      0x14de04e, 0xaae21c3, 0x168056,  0x34d6d,   0xc586a,   0xa806cf2,
      0x7ab3760, 0x91398,   0x3b13009, 0x44b4072, 0x182941,  0x1a8bb7,
      0xd0fd2a3, 0xe,       0x838c535, 0xad8c27d, 0x17d9ef,  0xcf9,
      0x84cb469, 0x90239,   0xf2f56,   0x26d1899, 0xce8ee8d, 0x378e32a,
      0x65,      0x92997fc, 0x3f9fba2, 0x1508d1,  0x1173c5,  0x22cec55,
      0x20a225a, 0x10970f,  0xa4651ff, 0x132cf2,  0x1a8bc5,  0x1e9574,
      0xaae4447, 0xc,       0xd20ed3d, 0x3,       0x24,      0xb0860,
      0x27ec7,   0xdb207,   0x16cc61,  0x61ee182, 0x1fb3e9,  0xdabe3,
      0xe38f6db, 0x57,      0xd4b7519, 0x3f26bf7, 0x87965,   0x73e1334,
      0xce4570b, 0x3b7dde,  0xc468f10, 0x4854cab, 0xf07bb87, 0x6454499,
      0xa519631, 0xe3129,   0xb12492b, 0x4c81d4b, 0x406ece5, 0xeb39567,
      0xeb7d89f, 0x12eafc,  0x3958685, 0x152dd5e, 0xb1cfd29, 0x1fcdf2,
      0xaa7b50b, 0x1701,    0xc90d05f, 0xda235ef, 0x8d59d05, 0x135aee4,
      0x8416817, 0x22920,   0x3ac9,    0x139386,  0x90bb2b3, 0x3e2e50a,
      0x3116dcd, 0x2,       0xc6280af, 0x1c13,    0x2fc7482, 0xbb55ffc,
      0x789d361, 0x195eeff, 0x5b09e71, 0x8e1590f, 0xa3534d9, 0xf380e,
      0x6b,      0x79,      0xd86af71, 0x2c7e7d8, 0x9b0a35,  0xf654d9e,
      0x15d2227, 0x18,      0x19ff1c,  0x62599de, 0x8562983, 0x61a31,
      0x1e4c8c,  0xa3b,     0xdfaba32, 0x1202f1,  0x54d2cd2, 0x682ac82,
      0xdc818,   0x1cdc6a,  0x876f09a, 0x7ed0814, 0x8de3ddd, 0x41dcc20,
      0xf5a29e9, 0xe185b8,  0x2525,    0xa005c8a, 0xd0d3d01, 0x1c8d87,
      0x28e6949, 0x92af6f,  0xc721b1,  0x29,      0x3f99ba7, 0xfacb0ab,
      0xbdd41,   0xf17657a, 0x656bc,   0x10b7a3,  0xf5608,   0x1792f9,
      0x252fb25, 0xe709f,   0x300f,    0x7daa05e, 0x65bd7,   0xd6d6846,
      0x766749f, 0x25,      0x61c074f, 0x17cd6e,  0x8432c85, 0xd0469e2,
      0x55,      0x69,      0xba27b5e, 0x774e4c2, 0x8afab27, 0xcc68286,
      0x7114776, 0x6d,      0x2c31,    0x2a,      0x8125c85, 0x78d3e4a,
      0xd9ea3ec, 0x108cfb,  0x65,      0x5a3a1,   0x57,      0xfb399c9,
      0x52a5213, 0x56ac2e2, 0xaf187,   0x7c0d4ad, 0xad6ba86, 0x31d8dde,
      0xbed8f69, 0x5d33e46, 0xf5da81c, 0xf29ed,   0x3a,      0xf006d5e,
      0x1,       0x159141,  0x75174bb, 0x9448,    0x542250b, 0x5927291,
      0xa2af934, 0xc2a7ef8, 0x108a9c,  0x1e,      0xb731e0b, 0xbda116e,
      0x408d76a, 0x2262339, 0x6f0f93b, 0x9207b3b, 0xaf96894, 0x2cd6c,
      0x1fc6b5,  0x22aa053, 0x43,      0x14d8b3,  0x2c7a34c, 0x7fd11fe,
      0x1f,      0x1c8972,  0x1d7c9d,  0x920f393, 0x21a4,    0x3be48ee,
      0x6f,      0x498765a, 0xa58d59e, 0x77c26bc, 0xacff1e8, 0x3305404,
      0x32345c9, 0x2a7a1bc, 0x26,      0x106782a, 0x4d5868,  0x3ae8,
      0x92c19,   0x2b,      0x4bc275f, 0x7376d,   0x231f8,   0x94c878a,
      0x1fc2,    0x151afe,  0x12fd57,  0xa747276, 0x1f5012,  0x169710,
      0x13e5d1,  0x30faa5f, 0x844120a, 0x7c28859, 0x687cb14, 0xc3efa,
      0x9879a5,  0x91d6bb9, 0x229ab95, 0xb62a7f8, 0x7c147f0, 0x37875,
      0x329cdec, 0x5d7fd64, 0x8f93c42, 0x30eabfa, 0xa9547c0, 0x161a,
      0x1de220,  0xf123f48, 0x192c000, 0x39e9eb4, 0xb3a13,   0xb6fe66c,
      0x50b3480, 0xb5e5585, 0x11e9f0,  0x7e3150b, 0x1e,      0x760ba,
      0x1da7245, 0x19b234,  0x2185,    0x4a,      0xdb8e56f, 0x5b2a25a,
      0xbbd5b4c, 0x3,       0xa4f1f,   0x1990f41, 0x177e21,  0x1608fd,
      0xa5c6d,   0x7390d7e, 0xfd26393, 0x3ed8,    0x20,      0xb8862fe,
      0xee59a,   0xa325082, 0x1e,      0x9a47703, 0xae2dc1d, 0x51d1e49,
      0xd2cceda, 0x55c9d62, 0x10a8ac,  0x1df45a,  0xf469391, 0x1c0b,
      0x12706e,  0x1c824d,  0x6afc4ea, 0x2c,      0x2810,    0x592508f,
      0x32,      0xb3b6f,   0x431ea0c, 0xe0b55d8, 0x964f8ef, 0xc40805,
      0x8f1fe59, 0xc14e5,   0x31d4c59, 0x1b019d,  0x74,      0x105ca3,
      0x194eb,   0xbfa76,   0x36,      0x466,     0x5,       0xf35a29b,
      0x55,      0x130669,  0x93c07d0, 0x1cfabe,  0x1a9bc6,  0xa34d3dd,
      0xe76086e, 0x4167ffe, 0x867e79e, 0x4031657, 0xb20395a, 0x4c5ae3f,
      0x1b4698f, 0x1ed5,    0x1abcda,  0x4bb47f6, 0xf8c,     0x1eff49,
      0x3f24,    0x1d36e9,  0x84a9107, 0xbe478,   0x2f32d19, 0x1842f3,
      0x5bca10c, 0x9b14ad8, 0x252004e, 0x3939aff, 0x8d0beeb, 0x7b237,
      0x2bc1,    0xd1ac515, 0x3c18fc8, 0x47f6fad, 0x190a9,   0x2,
      0x2f736f3, 0x7515ee6, 0x158980,  0xc78,     0x31ff7d4, 0x167b4d,
      0x151feb,  0x85ce5f0, 0x21eb,    0x1988ca,  0x10ac27,  0x3ade192,
      0x3a28d1d, 0x1095,    0x4c,      0x9d57740, 0x6,       0xc58ada3,
      0xecb7100, 0x27,      0xe503303, 0x47,      0x12f6436, 0xdd6d359,
      0x1a35f6,  0xbff0d,   0xa86372b, 0xa3cdc60, 0x9d0d81f, 0xcf387a3,
      0xd63b12a, 0x16ceb0,  0x11,      0x7b34579, 0x90e26,   0x86a635e,
      0xc08fe,   0x17,      0x29,      0x10c46d,  0xea384df, 0x926e5,
      0x19b740,  0xa9a1b30, 0xfdd04c6, 0x11,      0x529,     0x6f3d0e1,
      0x4e9b108, 0xa5bafcf, 0xfb7c629, 0x7646f,   0x37438dd, 0x882407c,
      0x22ca12f, 0xbd2e13e, 0x65022bc, 0x1e3ea1,  0xbac20,   0x986bbe0,
      0x53e0c78, 0x4a0a902, 0x13609f,  0x1030db,  0xbd8f924, 0x6e,
      0xeb221b5, 0x129b360, 0x59,      0x3bb934a, 0x1a52e1,  0x4fc877,
      0x71,      0x85495f,  0x151f1c3, 0xeda38fb, 0xd,       0xb5d17,
      0x4a68f2a, 0x1f3c5,   0x4e652d0, 0x22ecc,   0xa175cc5, 0xf2679a4,
      0xae144e0, 0x11f7ed,  0xe49d589, 0x11babb,  0xfc3fc,   0xc268e02,
      0x45,      0xa5d2711, 0x55,      0x9ae5332, 0x3f49,    0xe543d,
      0xaf78e4f, 0xbd64486, 0x64,      0x646b3ba, 0x1e375c,  0xdf,
      0x1d2c48,  0x22c9b9c, 0x1d74c9,  0xa3362b6, 0x73d2a22, 0x5,
      0x22a6,    0x21,      0x6ab8ee5, 0x251d,    0x95d0ad3, 0x17eaf9,
      0x573ba91, 0x62b56e2, 0x1e5c27,  0x33722b6, 0x159883,  0x12e219,
      0x1b8a3d,  0x20,      0x12ee,    0x67,      0x27c1e89, 0x84b72,
      0x6f0f5,   0x7848308, 0x9aba7b,  0x3f07,    0x2975,    0x335b61f,
      0x131826,  0x7a,      0x8f7c483, 0xe58c5a4, 0x777b4ca, 0x1b32af,
      0x13,      0x1a2547,  0x1d92,    0x30,      0x7921eeb, 0xda3f8d7,
      0x301a0cc, 0x1391b52, 0x5ddbefc, 0x1ebf0d,  0x8bb9c80, 0x63d24bd,
      0xba80004, 0x3d3e32c, 0x142c,    0x5f7f6,   0xd280f37, 0x65,
      0x54177e4, 0x7,       0x62a756f, 0x41b51ea, 0x41,      0x7c79c44,
      0x7cec762, 0x53,      0x824c7,   0x9ef5b54, 0x63a4f1d, 0x235d5cc,
      0x1e410a,  0xa252df9, 0x8ed27e0, 0x68,      0x125cde,  0xe3e46b1,
      0x12eadb,  0xa49b9db, 0xd03708e, 0xe0fd90c, 0x38d1afe, 0x87189eb,
      0x2206,    0x2fe7bfa, 0x8a62d,   0x27c68a9, 0x3875557, 0x68b1d,
      0x23,      0x2ad8,    0x6c,      0x1cb809,  0xfe4dc89, 0x12b7c63,
      0x6dc502a, 0x6855265, 0x1e7003,  0x1288ad7, 0xad24bc,  0x55bd8df,
      0x1e8d44,  0x1b89,    0xa491145, 0xa292d26, 0x2638,    0x15a0b1,
      0x923e92e, 0x1a80d7,  0x1fd,     0x277b,    0x1572,    0x39af4d2,
      0x7439c,   0x15c7a1,  0x96,      0x3fd40,   0x1f,      0xed3ec,
      0xca723f5, 0x4e2cf06, 0xe36c6c6, 0x2f1b,    0x17,      0xcf05dba,
      0x4913f8d, 0x904713b, 0x1af178,  0x65af42d, 0x47eea22, 0xb49b61c,
      0x7bc20,   0x131ef1,  0xf88d92,  0xd4fcf28, 0x47,      0x5313003,
      0x40ba2,   0x2bd3,    0x1f930c,  0xc0c908b, 0xbfd9649, 0x8cbc1,
      0x1ea627,  0x50,      0xad5b2fd, 0x1e8112,  0x27aba13, 0x2e,
      0xbf15b4c, 0x18fdec,  0x4f,      0x44e1,    0x11,      0xc26007,
      0x2e7a96e, 0xd66ec56, 0x7939b42, 0x4d5215d, 0xfff46aa, 0x4017a05,
      0x331e6ad, 0x17e222,  0xa55021d, 0x34a568d, 0xbe53217, 0x3a,
      0xa5beb6,  0x6289616, 0x154b,    0x9b192f3, 0x6ff0143, 0xc6e5516,
      0x568bb6c,
  };
  for (auto v : array_0) {
    v6->add_f_6(v);
  }
  Message3::M1::M2::M5::M8* v9 = v2_0->mutable_f_6();
  Message3::M1::M2::M5::M8::M11* v10_0 = v9->add_f_6();
  v10_0->set_f_0(0.389340);
  v10_0->set_f_3(0x814de5d);
  v10_0->set_f_1(true);
  v9->set_f_0(s->substr(0, 4));
  Message3::M1::M2::M5::M8::M9* v11 = v9->mutable_f_4();
  Message3::M1::M2::M5::M8::M9::M13* v12_0 = v11->add_f_2();
  (void)v12_0;  // Suppresses clang-tidy.
  Message3::M1::M2::M5* v2_1 = v1->add_f_5();
  v2_1->set_f_0(Message3::M1::M2::M5::E3_CONST_4);
  Message3::M1::M2::M5::M8* v13 = v2_1->mutable_f_6();
  Message3::M1::M2::M5::M8::M11* v14_0 = v13->add_f_6();
  v14_0->set_f_1(true);
  v14_0->set_f_3(0x5ffed148f95118);
  Message3::M1::M2::M5::M8::M11::M12* v15_0 = v14_0->add_f_7();
  v15_0->set_f_0(s->substr(0, 7));
  v14_0->set_f_2(0x5e);
  v13->set_f_1(s->substr(0, 17));
  Message3::M1::M2::M5::M8::M9* v16 = v13->mutable_f_4();
  v16->set_f_0(0x2bc6b4);
  Message3::M1::M2::M5::M8::M9::M13* v17_0 = v16->add_f_2();
  (void)v17_0;  // Suppresses clang-tidy.
  v13->set_f_2(0x15e4d7);
  Message3::M1::M2::M5::M7* v18_0 = v2_1->add_f_4();
  Message3::M1::M2::M5::M7::M10* v19_0 = v18_0->add_f_2();
  Message3::M1::M2::M5::M7::M10::M14* v20 = v19_0->mutable_f_2();
  v20->set_f_0(0.003199);
  Message3::M1::M2::M5::M7::M10::M14::M15* v21 = v20->mutable_f_5();
  Message3::M1::M2::M5::M7::M10::M14::M15::M16* v22 = v21->mutable_f_14();
  Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17* v23 = v22->mutable_f_2();
  v23->set_f_0(0x89c95cb);
  v21->set_f_2(0.464123);
  v21->set_f_5(s->substr(0, 32));
  v21->set_f_4(0xae7b31671540);
  v20->set_f_1(s->substr(0, 7));
  v18_0->set_f_0(s->substr(0, 1));
  Message3::M1::M2::M5::M6* v24 = v2_1->mutable_f_2();
  (void)v24;  // Suppresses clang-tidy.
  Message3::M1::M2::M4* v25_0 = v1->add_f_4();
  v25_0->set_f_0(s->substr(0, 32));
}
void Message3_Get_1(Message3* message) {
  Receive((*message).f_0());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  const Message3::M1& v0 = (*message).f_10();
  const Message3::M1::M2& v1 = v0.f_4();
  Receive(v1.f_1());
  for (const auto& v2 : v1.f_4()) {
    Receive(v2.f_0());
  }
  Receive(v1.f_0());
  const Message3::M1::M2::M3& v3 = v1.f_3();
  Receive(v3.f_0());
  for (const auto& v4 : v1.f_5()) {
    const Message3::M1::M2::M5::M6& v5 = v4.f_2();
    Receive(v5.f_0());
    const Message3::M1::M2::M5::M8& v6 = v4.f_6();
    Receive(v6.f_2());
    Receive(v6.f_0());
    Receive(v6.f_1());
    const Message3::M1::M2::M5::M8::M9& v7 = v6.f_4();
    Receive(v7.f_0());
    for (const auto& v8 : v7.f_2()) {
      Receive(v8.f_0());
    }
    for (const auto& v9 : v6.f_6()) {
      for (const auto& v10 : v9.f_7()) {
        Receive(v10.f_0());
      }
      Receive(v9.f_4());
      Receive(v9.f_3());
      Receive(v9.f_2());
      Receive(v9.f_1());
      Receive(v9.f_0());
    }
    Receive(v4.f_0());
    for (const auto& v11 : v4.f_4()) {
      for (const auto& v12 : v11.f_2()) {
        const Message3::M1::M2::M5::M7::M10::M14& v13 = v12.f_2();
        Receive(v13.f_1());
        const Message3::M1::M2::M5::M7::M10::M14::M15& v14 = v13.f_5();
        Receive(v14.f_0());
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16& v15 = v14.f_14();
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17& v16 =
            v15.f_2();
        Receive(v16.f_0());
        Receive(v15.f_0());
        Receive(v14.f_5());
        for (int i = 0; i < v14.f_7_size(); ++i) {
          Receive(v14.f_7(i));
        }
        Receive(v14.f_4());
        Receive(v14.f_1());
        Receive(v14.f_2());
        for (int i = 0; i < v14.f_6_size(); ++i) {
          Receive(v14.f_6(i));
        }
        Receive(v14.f_3());
        Receive(v13.f_2());
        Receive(v13.f_0());
        Receive(v12.f_0());
      }
      Receive(v11.f_0());
    }
  }
  Receive(v0.f_0());
  Receive((*message).f_1());
  Receive((*message).f_5());
  Receive((*message).f_3());
  Receive((*message).f_2());
}
void Message3_Get_2(Message3* message) {
  const Message3::M1& v0 = (*message).f_10();
  const Message3::M1::M2& v1 = v0.f_4();
  Receive(v1.f_1());
  for (const auto& v2 : v1.f_4()) {
    Receive(v2.f_0());
  }
  Receive(v1.f_0());
  const Message3::M1::M2::M3& v3 = v1.f_3();
  Receive(v3.f_0());
  for (const auto& v4 : v1.f_5()) {
    const Message3::M1::M2::M5::M8& v5 = v4.f_6();
    Receive(v5.f_0());
    const Message3::M1::M2::M5::M8::M9& v6 = v5.f_4();
    for (const auto& v7 : v6.f_2()) {
      Receive(v7.f_0());
    }
    Receive(v6.f_0());
    Receive(v5.f_2());
    for (const auto& v8 : v5.f_6()) {
      Receive(v8.f_3());
      Receive(v8.f_1());
      Receive(v8.f_4());
      Receive(v8.f_0());
      for (const auto& v9 : v8.f_7()) {
        Receive(v9.f_0());
      }
      Receive(v8.f_2());
    }
    Receive(v5.f_1());
    for (const auto& v10 : v4.f_4()) {
      Receive(v10.f_0());
      for (const auto& v11 : v10.f_2()) {
        const Message3::M1::M2::M5::M7::M10::M14& v12 = v11.f_2();
        const Message3::M1::M2::M5::M7::M10::M14::M15& v13 = v12.f_5();
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16& v14 = v13.f_14();
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17& v15 =
            v14.f_2();
        Receive(v15.f_0());
        Receive(v14.f_0());
        Receive(v13.f_1());
        Receive(v13.f_5());
        Receive(v13.f_3());
        for (int i = 0; i < v13.f_6_size(); ++i) {
          Receive(v13.f_6(i));
        }
        for (int i = 0; i < v13.f_7_size(); ++i) {
          Receive(v13.f_7(i));
        }
        Receive(v13.f_2());
        Receive(v13.f_4());
        Receive(v13.f_0());
        Receive(v12.f_0());
        Receive(v12.f_1());
        Receive(v12.f_2());
        Receive(v11.f_0());
      }
    }
    const Message3::M1::M2::M5::M6& v16 = v4.f_2();
    Receive(v16.f_0());
    Receive(v4.f_0());
  }
  Receive(v0.f_0());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  Receive((*message).f_2());
  Receive((*message).f_0());
  Receive((*message).f_1());
  Receive((*message).f_3());
  Receive((*message).f_5());
}
void Message3_Get_3(Message3* message) {
  const Message3::M1& v0 = (*message).f_10();
  Receive(v0.f_0());
  const Message3::M1::M2& v1 = v0.f_4();
  Receive(v1.f_0());
  Receive(v1.f_1());
  const Message3::M1::M2::M3& v2 = v1.f_3();
  Receive(v2.f_0());
  for (const auto& v3 : v1.f_4()) {
    Receive(v3.f_0());
  }
  for (const auto& v4 : v1.f_5()) {
    const Message3::M1::M2::M5::M8& v5 = v4.f_6();
    const Message3::M1::M2::M5::M8::M9& v6 = v5.f_4();
    Receive(v6.f_0());
    for (const auto& v7 : v6.f_2()) {
      Receive(v7.f_0());
    }
    Receive(v5.f_2());
    Receive(v5.f_1());
    Receive(v5.f_0());
    for (const auto& v8 : v5.f_6()) {
      Receive(v8.f_2());
      for (const auto& v9 : v8.f_7()) {
        Receive(v9.f_0());
      }
      Receive(v8.f_4());
      Receive(v8.f_1());
      Receive(v8.f_3());
      Receive(v8.f_0());
    }
    const Message3::M1::M2::M5::M6& v10 = v4.f_2();
    Receive(v10.f_0());
    Receive(v4.f_0());
    for (const auto& v11 : v4.f_4()) {
      for (const auto& v12 : v11.f_2()) {
        const Message3::M1::M2::M5::M7::M10::M14& v13 = v12.f_2();
        Receive(v13.f_2());
        const Message3::M1::M2::M5::M7::M10::M14::M15& v14 = v13.f_5();
        Receive(v14.f_3());
        Receive(v14.f_2());
        Receive(v14.f_0());
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16& v15 = v14.f_14();
        Receive(v15.f_0());
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17& v16 =
            v15.f_2();
        Receive(v16.f_0());
        Receive(v14.f_4());
        Receive(v14.f_1());
        for (int i = 0; i < v14.f_6_size(); ++i) {
          Receive(v14.f_6(i));
        }
        Receive(v14.f_5());
        for (int i = 0; i < v14.f_7_size(); ++i) {
          Receive(v14.f_7(i));
        }
        Receive(v13.f_0());
        Receive(v13.f_1());
        Receive(v12.f_0());
      }
      Receive(v11.f_0());
    }
  }
  Receive((*message).f_3());
  Receive((*message).f_1());
  Receive((*message).f_5());
  Receive((*message).f_0());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  Receive((*message).f_2());
}
void Message3_Get_4(Message3* message) {
  const Message3::M1& v0 = (*message).f_10();
  Receive(v0.f_0());
  const Message3::M1::M2& v1 = v0.f_4();
  Receive(v1.f_1());
  const Message3::M1::M2::M3& v2 = v1.f_3();
  Receive(v2.f_0());
  for (const auto& v3 : v1.f_5()) {
    const Message3::M1::M2::M5::M8& v4 = v3.f_6();
    Receive(v4.f_2());
    Receive(v4.f_1());
    for (const auto& v5 : v4.f_6()) {
      Receive(v5.f_3());
      for (const auto& v6 : v5.f_7()) {
        Receive(v6.f_0());
      }
      Receive(v5.f_0());
      Receive(v5.f_1());
      Receive(v5.f_4());
      Receive(v5.f_2());
    }
    const Message3::M1::M2::M5::M8::M9& v7 = v4.f_4();
    for (const auto& v8 : v7.f_2()) {
      Receive(v8.f_0());
    }
    Receive(v7.f_0());
    Receive(v4.f_0());
    for (const auto& v9 : v3.f_4()) {
      Receive(v9.f_0());
      for (const auto& v10 : v9.f_2()) {
        const Message3::M1::M2::M5::M7::M10::M14& v11 = v10.f_2();
        Receive(v11.f_1());
        const Message3::M1::M2::M5::M7::M10::M14::M15& v12 = v11.f_5();
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16& v13 = v12.f_14();
        const Message3::M1::M2::M5::M7::M10::M14::M15::M16::M17& v14 =
            v13.f_2();
        Receive(v14.f_0());
        Receive(v13.f_0());
        Receive(v12.f_5());
        Receive(v12.f_1());
        for (int i = 0; i < v12.f_7_size(); ++i) {
          Receive(v12.f_7(i));
        }
        Receive(v12.f_4());
        for (int i = 0; i < v12.f_6_size(); ++i) {
          Receive(v12.f_6(i));
        }
        Receive(v12.f_0());
        Receive(v12.f_2());
        Receive(v12.f_3());
        Receive(v11.f_0());
        Receive(v11.f_2());
        Receive(v10.f_0());
      }
    }
    const Message3::M1::M2::M5::M6& v15 = v3.f_2();
    Receive(v15.f_0());
    Receive(v3.f_0());
  }
  Receive(v1.f_0());
  for (const auto& v16 : v1.f_4()) {
    Receive(v16.f_0());
  }
  Receive((*message).f_0());
  Receive((*message).f_5());
  Receive((*message).f_3());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  Receive((*message).f_2());
  Receive((*message).f_1());
}
}  // namespace fleetbench::proto
