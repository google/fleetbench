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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message2.pb.h"

namespace fleetbench::rpc::P5::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M7* v0 = message->mutable_f_54();
  Message2::M7::M21* v1_0 = v0->add_f_3();
  v1_0->set_f_2(0x3d);
  v1_0->set_f_0(false);
  v1_0->set_f_3(0x10);
  v0->set_f_0(s->substr(0, 20));
  message->set_f_3(true);
  message->set_f_2(0.349032);
  message->set_f_9(0x43fd3560db28d944);
  message->set_f_4(0x6a);
  message->set_f_20(true);
  message->set_f_6(0xa0982d8743088f0f);
  message->set_f_23(0x816e0b0);
  Message2::M12* v2_0 = message->add_f_60();
  Message2::M12::M35* v3_0 = v2_0->add_f_8();
  Message2::M12::M35::E3 array_1[21] = {
      Message2::M12::M35::E3_CONST_4, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_4, Message2::M12::M35::E3_CONST_4,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_1,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_3,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_3,
      Message2::M12::M35::E3_CONST_4, Message2::M12::M35::E3_CONST_3,
      Message2::M12::M35::E3_CONST_1, Message2::M12::M35::E3_CONST_4,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_1,
      Message2::M12::M35::E3_CONST_1, Message2::M12::M35::E3_CONST_1,
      Message2::M12::M35::E3_CONST_5, Message2::M12::M35::E3_CONST_1,
      Message2::M12::M35::E3_CONST_1,
  };
  for (auto v : array_1) {
    v3_0->add_f_0(v);
  }
  v2_0->set_f_2(0x1);
  v2_0->set_f_0(true);
  message->add_f_19(Message2::E1_CONST_4);
  message->set_f_26(false);
  message->set_f_28(0x60debac4);
  message->set_f_12(0x46adbc1512e41075);
  Message2::M15* v4 = message->mutable_f_63();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_7(0.534816);
  message->set_f_5(true);
  Message2::M11* v5_0 = message->add_f_59();
  Message2::M11::M49* v6 = v5_0->mutable_f_5();
  v6->set_f_0(0x8b8c351974a525e1);
  Message2::M11::M32* v7 = v5_0->mutable_f_4();
  v7->set_f_0(0x1d);
  Message2::M4* v8 = message->mutable_f_50();
  Message2::M4::M39* v9 = v8->mutable_f_7();
  v9->set_f_0(0x205c);
  v9->add_f_3(Message2::M4::M39::E4_CONST_2);
  v8->set_f_0(0x924b3bc619d251d8);
  Message2::M4::M25* v10 = v8->mutable_f_5();
  v10->set_f_1(0x63206e0e993a9491);
  v10->set_f_0(s->substr(0, 16));
  v10->set_f_2(0xfae1e101649bed20);
  v8->set_f_3(0x61);
  message->set_f_21(0x37);
  message->set_f_17(0x3015744e1c9cfc1e);
  Message2::M1* v11 = message->mutable_f_46();
  Message2::M1::M30* v12 = v11->mutable_f_6();
  Message2::M1::M30::M73* v13_0 = v12->add_f_6();
  v13_0->set_f_5(0xadc6fa796eae21b7);
  v13_0->set_f_3(0xe9b5ac6f6aaa93e3);
  v13_0->set_f_4(s->substr(0, 26));
  v13_0->set_f_0(s->substr(0, 113));
  v13_0->set_f_2(0x10);
  v12->set_f_0(Message2::M1::M30::E2_CONST_2);
  v11->set_f_2(s->substr(0, 20));
  Message2::M1::M52* v14_0 = v11->add_f_9();
  (void)v14_0;  // Suppresses clang-tidy.
  Message2::M1::M45* v15 = v11->mutable_f_7();
  v15->set_f_0(0x675b9f6ef8b5fdd2);
  v11->set_f_0(s->substr(0, 7));
  Message2::M1::M26* v16_0 = v11->add_f_5();
  v16_0->set_f_2(0x2d);
  v16_0->set_f_0(s->substr(0, 14));
  v16_0->set_f_1(s->substr(0, 12));
  v16_0->set_f_4(true);
  message->set_f_15(s->substr(0, 31));
  Message2::M9* v17 = message->mutable_f_56();
  Message2::M9::M51* v18 = v17->mutable_f_3();
  Message2::M9::M51::M63* v19_0 = v18->add_f_3();
  v19_0->set_f_1(0x5f);
  Message2::M9::M51::M63::M81* v20 = v19_0->mutable_f_6();
  v20->set_f_0(false);
  v19_0->add_f_2(Message2::M9::M51::M63::E8_CONST_1);
  v18->set_f_1(s->substr(0, 18));
  v17->set_f_0(0x4d1d6a9998a0d067);
  v17->set_f_1(s->substr(0, 32));
  Message2::M16* v21 = message->mutable_f_64();
  v21->set_f_0(0.663860);
  Message2::M16::M40* v22 = v21->mutable_f_9();
  Message2::M16::M40::M78* v23 = v22->mutable_f_30();
  v23->set_f_2(0.545986);
  v23->set_f_1(0x3c);
  v23->set_f_3(0x8cc2b82dbc78bc7d);
  v23->set_f_0(0xaef54c7edb51f622);
  v23->set_f_4(0x32bca26b);
  v22->set_f_7(0xb4af580fcf6a2a5c);
  v22->set_f_4(0x1ab7898ba9dfb508);
  v22->set_f_1(s->substr(0, 20));
  Message2::M16::M40::M59* v24 = v22->mutable_f_28();
  v24->set_f_2(0x74);
  v24->set_f_0(0x8959e54);
  v24->set_f_3(0xcb4a65d);
  v22->set_f_15(false);
  v22->set_f_11(0x99742087180a5d7c);
  v22->set_f_14(s->substr(0, 25));
  v22->set_f_5(0x303cde56);
  v22->set_f_9(0x12ef8eb3398bd506);
  v22->set_f_12(false);
  v22->set_f_3(0x7c);
  v22->set_f_2(true);
  Message2::M16::M34* v25 = v21->mutable_f_8();
  v25->set_f_1(0x9378e6cbc7755a77);
  v25->set_f_2(0.036369);
  v25->set_f_0(0xd227590);
  Message2::M16::M50* v26 = v21->mutable_f_12();
  v26->set_f_1(0xd65b72aca68f0892);
  v26->set_f_2(0.547615);
  v26->set_f_0(0.006515);
  Message2::M3* v27_0 = message->add_f_49();
  Message2::M3::M43* v28 = v27_0->mutable_f_5();
  v28->set_f_0(0.582020);
  message->set_f_11(0.336563);
  message->set_f_14(0xc2460f0106df3357);
  message->set_f_29(0x4b9d7f017ad6de10);
  message->set_f_27(0.819051);
  message->set_f_16(0xdbc5db2a3a100dea);
  message->set_f_10(0xb8b2138e1a1f1c);
  Message2::M8* v29_0 = message->add_f_55();
  Message2::M8::M47* v30 = v29_0->mutable_f_7();
  (void)v30;  // Suppresses clang-tidy.
  Message2::M8::M48* v31 = v29_0->mutable_f_11();
  v31->set_f_15(0x36f0cc439bdffb55);
  v31->set_f_16(0x26bf56baea054c57);
  v31->add_f_5(Message2::M8::M48::E6_CONST_1);
  v31->set_f_4(s->substr(0, 1));
  v31->set_f_14(0x33);
  Message2::M8::M48::E7 array_2[6] = {
      Message2::M8::M48::E7_CONST_5, Message2::M8::M48::E7_CONST_3,
      Message2::M8::M48::E7_CONST_3, Message2::M8::M48::E7_CONST_2,
      Message2::M8::M48::E7_CONST_3, Message2::M8::M48::E7_CONST_5,
  };
  for (auto v : array_2) {
    v31->add_f_12(v);
  }
  v31->set_f_6(0x468377c);
  v31->set_f_0(s->substr(0, 74));
  v31->set_f_8(s->substr(0, 20));
  Message2::M8::M48::M65* v32_0 = v31->add_f_33();
  v32_0->set_f_2(true);
  v32_0->add_f_0(Message2::M8::M48::M65::E10_CONST_3);
  v31->set_f_3(Message2::M8::M48::E5_CONST_4);
  v31->set_f_9(0x1e1724);
  v31->set_f_10(0x17c50923);
  v31->set_f_1(0x43);
  Message2::M8::M24* v33 = v29_0->mutable_f_6();
  Message2::M8::M24::M70* v34 = v33->mutable_f_5();
  (void)v34;  // Suppresses clang-tidy.
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_13(s->substr(0, 419));
  Message2::M7* v0 = message->mutable_f_54();
  Message2::M7::M21* v1_0 = v0->add_f_3();
  v1_0->set_f_0(false);
  v1_0->set_f_3(0x17da6a7);
  v1_0->set_f_2(0x9e9);
  v1_0->set_f_1(0x1b);
  message->set_f_23(0xae8b242);
  message->set_f_17(0xb41a6e67afc729a2);
  message->set_f_0(0xecdf4ce67c55122e);
  message->set_f_10(0x83fb96cd9b5770ea);
  Message2::M13* v2 = message->mutable_f_61();
  v2->set_f_0(0x62a1c1a51e298b36);
  message->set_f_3(false);
  message->add_f_19(Message2::E1_CONST_3);
  Message2::M11* v3_0 = message->add_f_59();
  Message2::M11::M49* v4 = v3_0->mutable_f_5();
  v4->set_f_0(0xe2cea0225e02a300);
  v3_0->set_f_0(0xa533969a0ad43eba);
  Message2::M11::M32* v5 = v3_0->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M5* v6 = message->mutable_f_51();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_18(0x41);
  message->set_f_4(0x5a519b0);
  Message2::M3* v7_0 = message->add_f_49();
  v7_0->set_f_0(0xe692658);
  Message2::M3::M43* v8 = v7_0->mutable_f_5();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_26(false);
  message->set_f_27(0.539733);
  message->set_f_7(0.041575);
  Message2::M4* v9 = message->mutable_f_50();
  v9->set_f_1(0xe309ef1495f356af);
  Message2::M4::M39* v10 = v9->mutable_f_7();
  v10->set_f_2(0x74);
  v10->set_f_1(0xc90a812);
  v10->set_f_0(0x7e6c96d);
  v10->add_f_3(Message2::M4::M39::E4_CONST_1);
  v9->set_f_0(0x6472da352b647be4);
  v9->set_f_2(s->substr(0, 25));
  v9->set_f_3(0x28);
  Message2::M8* v11_0 = message->add_f_55();
  Message2::M8::M47* v12 = v11_0->mutable_f_7();
  v12->set_f_0(0xc6426e1b6dd9c731);
  v11_0->set_f_0(0xd5be4445731d78bb);
  Message2::M8::M24* v13 = v11_0->mutable_f_6();
  v13->set_f_0(s->substr(0, 4));
  v13->set_f_2(0x68);
  Message2::M8::M48* v14 = v11_0->mutable_f_11();
  v14->set_f_6(0x43cafec);
  v14->set_f_1(0xeec);
  Message2::M8::M48::M65* v15_0 = v14->add_f_33();
  v15_0->set_f_2(true);
  v15_0->add_f_0(Message2::M8::M48::M65::E10_CONST_2);
  v15_0->set_f_1(s->substr(0, 96));
  v14->add_f_5(Message2::M8::M48::E6_CONST_2);
  v14->set_f_4(s->substr(0, 588));
  v14->set_f_15(0xa56980ef81975721);
  v14->set_f_2(0x546b973cfeb15147);
  v14->set_f_8(s->substr(0, 94));
  v14->set_f_10(0x3cdc465c);
  v14->set_f_3(Message2::M8::M48::E5_CONST_1);
  v14->set_f_16(0x4f4015266f328f04);
  v14->add_f_12(Message2::M8::M48::E7_CONST_3);
  v11_0->set_f_1(s->substr(0, 1));
  message->set_f_6(0x9046a4772f8da848);
  message->set_f_11(0.142244);
  message->set_f_9(0xf56094bc4ab0dcb1);
  message->set_f_5(false);
  message->set_f_14(0xf084738827a1b41);
  message->set_f_15(s->substr(0, 30));
  message->set_f_2(0.803182);
  message->set_f_22(s->substr(0, 21));
  Message2::M2* v16 = message->mutable_f_47();
  Message2::M2::M42* v17 = v16->mutable_f_11();
  Message2::M2::M42::M60* v18 = v17->mutable_f_5();
  v18->set_f_1(0x98e42bf40fb2f4c6);
  v16->set_f_1(0x67ca39b2027ac8e1);
  v16->set_f_2(0.207153);
  v16->set_f_0(0x3f);
  Message2::M2::M20* v19 = v16->mutable_f_7();
  v19->set_f_0(true);
  message->set_f_21(0x81e96fb);
  message->set_f_12(0x8d31c5a1f10b2b18);
  Message2::M1* v20 = message->mutable_f_46();
  Message2::M1::M52* v21_0 = v20->add_f_9();
  v21_0->set_f_2(0.856466);
  v21_0->set_f_1(0xb43b37a);
  v20->set_f_2(s->substr(0, 16));
  Message2::M1::M26* v22_0 = v20->add_f_5();
  v22_0->set_f_2(0x1c7faf);
  v22_0->set_f_0(s->substr(0, 9));
  v20->set_f_0(s->substr(0, 18));
  v20->set_f_1(0.336263);
  Message2::M1::M30* v23 = v20->mutable_f_6();
  v23->set_f_1(0x5f09467298b41628);
  Message2::M1::M30::M73* v24_0 = v23->add_f_6();
  v24_0->set_f_0(s->substr(0, 6));
  v24_0->set_f_5(0x7c57907cd2cc3dd4);
  v24_0->set_f_1(0xfcf5ef23f3c57658);
  v24_0->set_f_4(s->substr(0, 58));
  v24_0->set_f_2(0x7a);
  message->set_f_28(0x429f0ae);
  message->set_f_1(0x2d);
  Message2::M12* v25_0 = message->add_f_60();
  Message2::M12::M33* v26_0 = v25_0->add_f_7();
  v26_0->set_f_0(s->substr(0, 8));
  v26_0->set_f_2(0x7aca1d519ea8d78a);
  Message2::M12::M33::M62* v27 = v26_0->mutable_f_18();
  v27->set_f_1(0.060531);
  Message2::M12::M33::M62::M82* v28 = v27->mutable_f_3();
  Message2::M12::M33::M62::M82::M90* v29 = v28->mutable_f_10();
  Message2::M12::M33::M62::M82::M90::M97* v30 = v29->mutable_f_4();
  v30->set_f_2(true);
  v30->set_f_6(0x3f);
  v30->set_f_1(0.260946);
  v30->set_f_0(true);
  v30->set_f_3(0x7d38ff4);
  v30->set_f_8(0xcc97a62550cebcac);
  v30->set_f_5(0x1b07a6685596f6de);
  v30->set_f_12(0xa2e3c10719befb3c);
  v30->set_f_4(0xcc7fa4fa3a2b24d6);
  v30->set_f_13(s->substr(0, 74));
  v30->set_f_11(s->substr(0, 17));
  v30->set_f_9(0xe19c65f65c55261a);
  v30->set_f_14(0x7c);
  v29->set_f_0(0xebf36200c6d6a5da);
  Message2::M12::M33::M62::M82::M88* v31_0 = v28->add_f_9();
  (void)v31_0;  // Suppresses clang-tidy.
  Message2::M12::M33::M62::M82::M92* v32 = v28->mutable_f_11();
  v32->set_f_0(0x1ce9f6);
  v28->set_f_2(s->substr(0, 9));
  v28->set_f_0(s->substr(0, 18));
  v26_0->set_f_3(0x37c24b7916e70661);
  Message2::M12::M33::M56* v33_0 = v26_0->add_f_13();
  v33_0->set_f_0(0.654272);
  v33_0->set_f_2(0xee67aeabf69d6ae);
  v33_0->set_f_3(false);
  Message2::M12::M33::M56::M83* v34_0 = v33_0->add_f_7();
  v34_0->set_f_2(s->substr(0, 1));
  Message2::M12::M33::M56::M83::M94* v35 = v34_0->mutable_f_6();
  (void)v35;  // Suppresses clang-tidy.
  Message2::M12::M33::M56::M83::M89* v36 = v34_0->mutable_f_5();
  v36->set_f_0(false);
  v34_0->set_f_1(s->substr(0, 244));
  Message2::M12::M33::M53* v37 = v26_0->mutable_f_11();
  v37->set_f_0(0x5b7b837);
  v25_0->set_f_1(false);
  v25_0->set_f_2(0xf6b29d6);
  v25_0->set_f_0(true);
  Message2::M12::M35* v38_0 = v25_0->add_f_8();
  v38_0->add_f_0(Message2::M12::M35::E3_CONST_1);
  Message2::M15* v39 = message->mutable_f_63();
  v39->set_f_0(0x1d3e38d8);
  Message2::M6* v40_0 = message->add_f_53();
  Message2::M6::M38* v41 = v40_0->mutable_f_6();
  v41->set_f_0(0x9be1f10);
  v41->set_f_2(true);
  v41->set_f_1(0.512338);
  v40_0->set_f_0(0x3a);
  message->set_f_8(0xa);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->add_f_19(Message2::E1_CONST_4);
  message->set_f_23(0x1546);
  Message2::M12* v0_0 = message->add_f_60();
  Message2::M12::M33* v1_0 = v0_0->add_f_7();
  Message2::M12::M33::M56* v2_0 = v1_0->add_f_13();
  Message2::M12::M33::M56::M83* v3_0 = v2_0->add_f_7();
  Message2::M12::M33::M56::M83::M94* v4 = v3_0->mutable_f_6();
  v4->set_f_2(s->substr(0, 32));
  v4->set_f_1(0xe40b7e1);
  v3_0->set_f_2(s->substr(0, 27));
  v3_0->set_f_1(s->substr(0, 30));
  v2_0->set_f_0(0.663549);
  v2_0->set_f_1(0x2a);
  Message2::M12::M33::M62* v5 = v1_0->mutable_f_18();
  v5->set_f_0(s->substr(0, 202));
  v5->set_f_1(0.531142);
  Message2::M12::M33::M62::M82* v6 = v5->mutable_f_3();
  v6->set_f_1(0x22256d74d);
  Message2::M12::M33::M62::M82::M90* v7 = v6->mutable_f_10();
  v7->set_f_0(0x31cf8918d7814b56);
  v6->set_f_2(s->substr(0, 27));
  v1_0->set_f_1(0x9c44c4d295df3663);
  Message2::M12::M33::M53* v8 = v1_0->mutable_f_11();
  Message2::M12::M33::M53::M80* v9 = v8->mutable_f_3();
  Message2::M12::M33::M53::M80::M95* v10 = v9->mutable_f_7();
  v10->set_f_0(0x9051d725c1553c38);
  v10->set_f_3(0x59b56c28);
  v9->set_f_2(0x9314e64758b60d04);
  Message2::M12::M33::M53::M80::M93* v11 = v9->mutable_f_6();
  (void)v11;  // Suppresses clang-tidy.
  v9->set_f_1(0.647085);
  v9->set_f_0(0x6d);
  v8->set_f_0(0x20ceadc2);
  v1_0->set_f_0(s->substr(0, 13));
  v0_0->set_f_1(false);
  v0_0->set_f_0(true);
  Message2::M2* v12 = message->mutable_f_47();
  v12->set_f_2(0.377345);
  Message2::M2::M20* v13 = v12->mutable_f_7();
  Message2::M2::M20::M58* v14 = v13->mutable_f_2();
  v14->set_f_2(s->substr(0, 28));
  v14->set_f_1(0x9796ff5);
  v14->set_f_0(0xf1f23e679d386795);
  v13->set_f_0(true);
  v12->set_f_0(0x28);
  v12->set_f_1(0xf14fde877fc4601d);
  message->set_f_17(0xb0fd1910a6268402);
  message->set_f_3(true);
  Message2::M10* v15 = message->mutable_f_58();
  Message2::M10::M37* v16 = v15->mutable_f_6();
  v16->set_f_1(0x38);
  v16->set_f_2(s->substr(0, 57));
  Message2::M10::M37::M77* v17 = v16->mutable_f_8();
  v17->set_f_0(s->substr(0, 114));
  Message2::M10::M37::M76* v18 = v16->mutable_f_6();
  v18->set_f_0(0x147d495e8a1);
  v16->set_f_0(true);
  Message2::M10::M46* v19 = v15->mutable_f_8();
  Message2::M10::M46::M55* v20 = v19->mutable_f_2();
  v20->set_f_3(s->substr(0, 21));
  Message2::M10::M27* v21 = v15->mutable_f_3();
  (void)v21;  // Suppresses clang-tidy.
  v15->set_f_0(false);
  Message2::M5* v22 = message->mutable_f_51();
  v22->set_f_0(0xebde5bdf4535a035);
  message->set_f_28(0x11dfbf46);
  Message2::M16* v23 = message->mutable_f_64();
  Message2::M16::M41* v24 = v23->mutable_f_11();
  Message2::M16::M41::M72* v25 = v24->mutable_f_3();
  v25->set_f_0(0x28);
  v25->set_f_2(s->substr(0, 9));
  v25->set_f_4(true);
  v25->set_f_3(s->substr(0, 17));
  v24->set_f_0(false);
  Message2::M16::M34* v26 = v23->mutable_f_8();
  v26->set_f_0(0x93cf0c6);
  v26->set_f_2(0.907199);
  Message2::M16::M40* v27 = v23->mutable_f_9();
  v27->set_f_5(0x6f84f312);
  v27->set_f_10(false);
  v27->set_f_13(0xeac27a6);
  v27->set_f_9(0x8d0515da9afeb057);
  v27->set_f_2(false);
  v27->set_f_14(s->substr(0, 113));
  v27->set_f_12(true);
  v27->set_f_0(0xdbe4983b8f3eda3f);
  v27->set_f_8(0xea335065879dadd9);
  v27->set_f_6(0xe914d765b2a6b124);
  v27->set_f_1(s->substr(0, 4));
  v27->set_f_15(true);
  Message2::M16::M19* v28 = v23->mutable_f_4();
  v28->set_f_1(0x606b556971e693c5);
  Message2::M16::M19::M66* v29 = v28->mutable_f_5();
  v29->set_f_3(0x1b41c4e0);
  v29->set_f_2(0.492317);
  v23->set_f_0(0.441235);
  Message2::M4* v30 = message->mutable_f_50();
  Message2::M4::M25* v31 = v30->mutable_f_5();
  v31->set_f_0(s->substr(0, 22));
  Message2::M4::M39* v32 = v30->mutable_f_7();
  v32->set_f_1(0xd453bb3);
  v32->set_f_2(0x1e);
  v32->set_f_0(0x9cb782d);
  v30->set_f_2(s->substr(0, 28));
  v30->set_f_3(0x2f);
  Message2::M4::M36* v33 = v30->mutable_f_6();
  Message2::M4::M36::M74* v34 = v33->mutable_f_6();
  (void)v34;  // Suppresses clang-tidy.
  Message2::M4::M36::M61* v35_0 = v33->add_f_3();
  v35_0->set_f_1(0x56);
  v35_0->set_f_2(0x51b7827893425a3a);
  v33->set_f_0(0x4dfef422515097a1);
  message->set_f_27(0.571782);
  message->set_f_15(s->substr(0, 18));
  Message2::M13* v36 = message->mutable_f_61();
  v36->set_f_0(0x42243146868bf8f1);
  message->set_f_26(false);
  message->set_f_18(0x6b);
  message->set_f_7(0.036564);
  Message2::M11* v37_0 = message->add_f_59();
  v37_0->set_f_0(0xe9703ce887c3b14d);
  message->set_f_21(0x190f);
  message->set_f_25(0xa1bc79703a0110a8);
  Message2::M7* v38 = message->mutable_f_54();
  Message2::M7::M21* v39_0 = v38->add_f_3();
  v39_0->set_f_1(0x7);
  v39_0->set_f_2(0x3a);
  message->set_f_16(0x7b1f78e010902fd5);
  message->set_f_29(0xb53f9f193bd89f31);
  Message2::M8* v40_0 = message->add_f_55();
  v40_0->set_f_1(s->substr(0, 6));
  Message2::M8::M48* v41 = v40_0->mutable_f_11();
  v41->set_f_1(0x1);
  v41->set_f_15(0x4ea9cdbba530f007);
  v41->set_f_14(0x67);
  v41->set_f_4(s->substr(0, 1));
  v41->set_f_2(0xc6466c9836558cea);
  v41->add_f_5(Message2::M8::M48::E6_CONST_4);
  v41->set_f_10(0x7a9864ab);
  Message2::M8::M48::E7 array_0[6] = {
      Message2::M8::M48::E7_CONST_3, Message2::M8::M48::E7_CONST_3,
      Message2::M8::M48::E7_CONST_2, Message2::M8::M48::E7_CONST_2,
      Message2::M8::M48::E7_CONST_2, Message2::M8::M48::E7_CONST_1,
  };
  for (auto v : array_0) {
    v41->add_f_12(v);
  }
  v41->set_f_11(0x12e14326f5e575fe);
  v41->set_f_0(s->substr(0, 26));
  Message2::M8::M48::M65* v42_0 = v41->add_f_33();
  v42_0->set_f_1(s->substr(0, 17));
  v41->set_f_9(0xe4c);
  v41->set_f_16(0xaa1f9ac56630593f);
  Message2::M8::M47* v43 = v40_0->mutable_f_7();
  (void)v43;  // Suppresses clang-tidy.
  Message2::M9* v44 = message->mutable_f_56();
  Message2::M9::M51* v45 = v44->mutable_f_3();
  v45->set_f_1(s->substr(0, 28));
  Message2::M9::M51::M63* v46_0 = v45->add_f_3();
  Message2::M9::M51::M63::E8 array_1[12] = {
      Message2::M9::M51::M63::E8_CONST_5, Message2::M9::M51::M63::E8_CONST_4,
      Message2::M9::M51::M63::E8_CONST_4, Message2::M9::M51::M63::E8_CONST_1,
      Message2::M9::M51::M63::E8_CONST_1, Message2::M9::M51::M63::E8_CONST_5,
      Message2::M9::M51::M63::E8_CONST_4, Message2::M9::M51::M63::E8_CONST_1,
      Message2::M9::M51::M63::E8_CONST_3, Message2::M9::M51::M63::E8_CONST_3,
      Message2::M9::M51::M63::E8_CONST_2, Message2::M9::M51::M63::E8_CONST_4,
  };
  for (auto v : array_1) {
    v46_0->add_f_2(v);
  }
  Message2::M9::M51::M63::M81* v47 = v46_0->mutable_f_6();
  (void)v47;  // Suppresses clang-tidy.
  v46_0->set_f_0(0xa792a);
  v46_0->set_f_1(0xadd96cc);
  v45->set_f_0(0x25dd5e647d313afa);
  Message2::M9::M51::M69* v48 = v45->mutable_f_4();
  v48->set_f_0(0xd2593a00f34fc22b);
  message->set_f_2(0.318296);
  message->set_f_24(0xfa44651d70ed4a30);
  message->set_f_8(0x72);
  Message2::M6* v49_0 = message->add_f_53();
  v49_0->set_f_0(0x4f);
  Message2::M6::M23* v50 = v49_0->mutable_f_4();
  v50->set_f_0(0x70885a0d524ccdd3);
  message->set_f_5(false);
  message->set_f_9(0xac703ecd171bd553);
  message->set_f_10(0x98ae1e86e46cd6e3);
  message->set_f_1(0x6b);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_12(0xeab676708eeb5178);
  message->set_f_9(0x6d1feb468d788e00);
  Message2::M2* v0 = message->mutable_f_47();
  v0->set_f_0(0x56);
  v0->set_f_2(0.861789);
  Message2::M2::M42* v1 = v0->mutable_f_11();
  v1->set_f_0(s->substr(0, 25));
  Message2::M2::M42::M60* v2 = v1->mutable_f_5();
  v2->set_f_0(s->substr(0, 22));
  v2->set_f_1(0xafb19649afb79cbd);
  v0->set_f_1(0x3c9918597874e48c);
  message->set_f_18(0x2bbe541);
  Message2::M6* v3_0 = message->add_f_53();
  Message2::M6::M23* v4 = v3_0->mutable_f_4();
  v4->set_f_0(0x3bbae56f0d7032be);
  Message2::M6::M38* v5 = v3_0->mutable_f_6();
  v5->set_f_2(true);
  v5->set_f_3(0x674ce687c0a024ea);
  v5->set_f_0(0x2f54c3fb);
  v5->set_f_1(0.581743);
  v3_0->set_f_0(0x78);
  Message2::M6::M22* v6 = v3_0->mutable_f_3();
  v6->set_f_0(0x47);
  v6->set_f_1(true);
  Message2::M16* v7 = message->mutable_f_64();
  Message2::M16::M19* v8 = v7->mutable_f_4();
  v8->set_f_1(0x8bf778bc12059b02);
  v8->set_f_0(true);
  Message2::M16::M41* v9 = v7->mutable_f_11();
  Message2::M16::M41::M72* v10 = v9->mutable_f_3();
  v10->set_f_3(s->substr(0, 6));
  v10->set_f_4(false);
  Message2::M16::M41::M75* v11 = v9->mutable_f_4();
  (void)v11;  // Suppresses clang-tidy.
  Message2::M16::M29* v12 = v7->mutable_f_5();
  v12->set_f_0(0.982535);
  Message2::M16::M34* v13 = v7->mutable_f_8();
  v13->set_f_0(0xa);
  v13->set_f_1(0xe74c29d823cdea36);
  v7->set_f_0(0.549716);
  Message2::M16::M50* v14 = v7->mutable_f_12();
  v14->set_f_0(0.475813);
  v14->set_f_1(0xe73569b05ebfe550);
  message->set_f_2(0.415963);
  message->set_f_8(0x5f);
  message->set_f_11(0.972897);
  Message2::M15* v15 = message->mutable_f_63();
  v15->set_f_0(0x42e478a3);
  Message2::M3* v16_0 = message->add_f_49();
  Message2::M3::M43* v17 = v16_0->mutable_f_5();
  v17->set_f_0(0.352695);
  v16_0->set_f_0(0x3f);
  message->add_f_19(Message2::E1_CONST_5);
  Message2::M7* v18 = message->mutable_f_54();
  Message2::M7::M21* v19_0 = v18->add_f_3();
  v19_0->set_f_0(true);
  v18->set_f_0(s->substr(0, 2));
  Message2::M7::M28* v20_0 = v18->add_f_4();
  v20_0->set_f_0(s->substr(0, 6));
  Message2::M7::M28::M57* v21 = v20_0->mutable_f_3();
  v21->set_f_3(s->substr(0, 26));
  Message2::M12* v22_0 = message->add_f_60();
  v22_0->set_f_2(0x6);
  Message2::M12::M35* v23_0 = v22_0->add_f_8();
  Message2::M12::M35::E3 array_0[22] = {
      Message2::M12::M35::E3_CONST_2, Message2::M12::M35::E3_CONST_5,
      Message2::M12::M35::E3_CONST_4, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_2, Message2::M12::M35::E3_CONST_5,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_3,
      Message2::M12::M35::E3_CONST_2, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_1, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_2, Message2::M12::M35::E3_CONST_3,
      Message2::M12::M35::E3_CONST_2, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_3, Message2::M12::M35::E3_CONST_2,
      Message2::M12::M35::E3_CONST_1, Message2::M12::M35::E3_CONST_3,
  };
  for (auto v : array_0) {
    v23_0->add_f_0(v);
  }
  Message2::M12::M33* v24_0 = v22_0->add_f_7();
  Message2::M12::M33::M56* v25_0 = v24_0->add_f_13();
  v25_0->set_f_1(0x77);
  v25_0->set_f_3(false);
  v25_0->set_f_2(0x1a503725716ccc26);
  v25_0->set_f_0(0.689259);
  Message2::M12::M33::M56::M83* v26_0 = v25_0->add_f_7();
  Message2::M12::M33::M56::M83::M94* v27 = v26_0->mutable_f_6();
  v27->set_f_2(s->substr(0, 3));
  v27->set_f_0(0x2782);
  v27->set_f_1(0x62);
  v26_0->set_f_0(0xe02729c38edab048);
  Message2::M12::M33::M56::M83::M89* v28 = v26_0->mutable_f_5();
  v28->set_f_0(false);
  v26_0->set_f_1(s->substr(0, 7));
  Message2::M12::M33::M53* v29 = v24_0->mutable_f_11();
  v29->set_f_1(false);
  Message2::M12::M33::M53::M80* v30 = v29->mutable_f_3();
  v30->set_f_0(0x3a);
  Message2::M12::M33::M53::M80::M95* v31 = v30->mutable_f_7();
  v31->set_f_0(0x6435174436beafe8);
  v31->set_f_1(0x38);
  Message2::M12::M33::M53::M80::M93* v32 = v30->mutable_f_6();
  v32->set_f_0(s->substr(0, 27));
  v29->set_f_0(0x792a6ca0);
  v24_0->set_f_3(0xa035fcf1426e5dac);
  v24_0->set_f_1(0x6398540879593b83);
  v24_0->set_f_2(0x61354c6a01ce71cc);
  v24_0->set_f_0(s->substr(0, 2));
  v22_0->set_f_1(false);
  message->set_f_1(0x66);
  Message2::M9* v33 = message->mutable_f_56();
  Message2::M9::M51* v34 = v33->mutable_f_3();
  v34->set_f_0(0x175666fa74021c63);
  v34->set_f_1(s->substr(0, 6));
  Message2::M9::M51::M63* v35_0 = v34->add_f_3();
  v35_0->set_f_0(0x4e5ea7f);
  v35_0->add_f_2(Message2::M9::M51::M63::E8_CONST_3);
  v35_0->set_f_1(0x95fe2b6);
  Message2::M11* v36_0 = message->add_f_59();
  Message2::M11::M32* v37 = v36_0->mutable_f_4();
  v37->set_f_0(0xdc55cf0);
  Message2::M11::M49* v38 = v36_0->mutable_f_5();
  v38->set_f_0(0xa0d504e9e47223ec);
  v36_0->set_f_0(0xf7973a9712234dbc);
  message->set_f_21(0x5d);
  message->set_f_29(0xd63d307958e1178f);
  Message2::M5* v39 = message->mutable_f_51();
  v39->set_f_0(0x58ce2ff39d4d9f1a);
  v39->set_f_1(0x374371243cad6263);
  message->set_f_5(false);
  Message2::M1* v40 = message->mutable_f_46();
  Message2::M1::M26* v41_0 = v40->add_f_5();
  v41_0->set_f_1(s->substr(0, 2));
  v41_0->set_f_0(s->substr(0, 21));
  v40->set_f_0(s->substr(0, 32));
  Message2::M1::M30* v42 = v40->mutable_f_6();
  v42->set_f_2(0x1ed6df650c74da26);
  v42->set_f_1(0xacdae81c63d71a4e);
  v42->set_f_0(Message2::M1::M30::E2_CONST_3);
  v40->set_f_2(s->substr(0, 20));
  Message2::M1::M45* v43 = v40->mutable_f_7();
  v43->set_f_0(0xbc24c5b4c1b022f3);
  message->set_f_23(0x15f4);
  message->set_f_25(0xca12179c2485d8ca);
  message->set_f_7(0.970794);
  Message2::M4* v44 = message->mutable_f_50();
  Message2::M4::M36* v45 = v44->mutable_f_6();
  Message2::M4::M36::M61* v46_0 = v45->add_f_3();
  v46_0->set_f_2(0x3d9a711398c64b5e);
  v46_0->set_f_1(0x1321);
  v46_0->set_f_0(0x123f6534b0a93555);
  Message2::M4::M36::M74* v47 = v45->mutable_f_6();
  v47->set_f_0(0.411508);
  v45->set_f_0(0xd2a9e30f872defd9);
  v44->set_f_0(0x82131dadc3bb63f9);
  v44->set_f_1(0xc0a0e26535aeb5bb);
  Message2::M4::M25* v48 = v44->mutable_f_5();
  v48->set_f_1(0xff97a984a5187517);
  v48->set_f_2(0x2a1bfb17e69ef245);
  v44->set_f_2(s->substr(0, 18));
  v44->set_f_3(0x13fe26);
  message->set_f_13(s->substr(0, 4));
  message->set_f_6(0xb666eaaec2c6e65a);
  message->set_f_27(0.599094);
  message->set_f_3(false);
  message->set_f_24(0xd9b2ff63ac802670);
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
}  // namespace fleetbench::rpc::P5::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
