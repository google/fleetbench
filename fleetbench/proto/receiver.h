// Copyright 2023 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_FLEETBENCH_PROTO_RECEIVER_H_
#define THIRD_PARTY_FLEETBENCH_PROTO_RECEIVER_H_

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>

#include "benchmark/benchmark.h"

namespace fleetbench::proto {
// The Receiver struct is a set of circular buffers, one for each of the C++
// native proto2 types. A set of Receive<type>() functions add values to a
// global instance of these buffers.
const size_t kReceiverSize = 65536;

struct Receiver {
  std::array<const std::string*, kReceiverSize> string_r;
  size_t string_i;
  std::array<bool, kReceiverSize> bool_r;
  size_t bool_i;
  std::array<double, kReceiverSize> double_r;
  size_t double_i;
  std::array<float, kReceiverSize> float_r;
  size_t float_i;
  std::array<int32_t, kReceiverSize> int32_r;
  size_t int32_i;
  std::array<int64_t, kReceiverSize> int64_r;
  size_t int64_i;
  std::array<uint32_t, kReceiverSize> uint32_r;
  size_t uint32_i;
  std::array<uint64_t, kReceiverSize> uint64_r;
  size_t uint64_i;
};

struct Receiver receiver;

inline void ReceiveString(const std::string& val) {
  receiver.string_i = (receiver.string_i + 1) % kReceiverSize;
  benchmark::DoNotOptimize(receiver.string_r[receiver.string_i] = &val);
}

inline void ReceiveBool(const bool val) {
  receiver.bool_i = (receiver.bool_i + 1) % kReceiverSize;
  benchmark::DoNotOptimize(receiver.bool_r[receiver.bool_i] = val);
}

inline void ReceiveDouble(const double val) {
  receiver.double_i = (receiver.double_i + 1) % kReceiverSize;
  benchmark::DoNotOptimize(receiver.double_r[receiver.double_i] = val);
}

inline void ReceiveFloat(const float val) {
  receiver.float_i = (receiver.float_i + 1) % kReceiverSize;
  benchmark::DoNotOptimize(receiver.float_r[receiver.float_i] = val);
}

inline void ReceiveInt32(const int32_t val) {
  receiver.int32_i = (receiver.int32_i + 1) % kReceiverSize;
  benchmark::DoNotOptimize(receiver.int32_r[receiver.int32_i] = val);
}

inline void ReceiveInt64(const int64_t val) {
  receiver.int64_i = (receiver.int64_i + 1) % kReceiverSize;
  receiver.int64_r[receiver.int64_i] = val;
}

inline void ReceiveUint32(const uint32_t val) {
  receiver.uint32_i = (receiver.uint32_i + 1) % kReceiverSize;
  receiver.uint32_r[receiver.uint32_i] = val;
}

inline void ReceiveUint64(const uint64_t val) {
  receiver.uint64_i = (receiver.uint64_i + 1) % kReceiverSize;
  receiver.uint64_r[receiver.uint64_i] = val;
}

template <typename M>
void Copy(M* message, M* other_message) {
  message->CopyFrom(*other_message);
  benchmark::ClobberMemory();
}

template <typename M>
void Clear(M* message) {
  message->Clear();
  benchmark::ClobberMemory();
}

template <typename M>
void Create(M* message) {
  *message = M();
  benchmark::ClobberMemory();
}

template <typename M>
void Deserialize(M* message, std::string* serialized) {
  auto result = message->ParseFromString(*serialized);
  benchmark::DoNotOptimize(result);
}

template <typename M>
void Destroy(M* message) {
  if (message->GetArena() == nullptr) delete message;
  benchmark::ClobberMemory();
}

template <typename M>
void Descriptor(M* message) {
  auto field_count = message->GetDescriptor()->field_count();
  benchmark::DoNotOptimize(field_count);
}

template <typename M>
void EnumDescriptor(M* message) {
  auto type = message->GetDescriptor()->enum_type(0);
  benchmark::DoNotOptimize(type);
}

template <typename M>
void Merge(M* message, M* other_message) {
  message->MergeFrom(*other_message);
  benchmark::ClobberMemory();
}

template <typename M>
void Serialize(M* message, std::string* serialized) {
  message->SerializeToString(serialized);
  benchmark::ClobberMemory();
}

template <typename M>
void ByteSize(M* message) {
  auto byte_size = message->ByteSizeLong();
  benchmark::DoNotOptimize(byte_size);
}

template <typename M>
void Reflection(M* message) {
  benchmark::DoNotOptimize(
      message->GetReflection()->GetUnknownFields(*message));
}

template <typename M>
void SpaceUsed(M* message) {
  auto space_used = message->SpaceUsedLong();
  benchmark::DoNotOptimize(space_used);
}

template <typename M>
void Swap(M* message, M* other_message) {
  message->Swap(other_message);
  benchmark::ClobberMemory();
}
}  // namespace fleetbench::proto

#endif  // THIRD_PARTY_FLEETBENCH_PROTO_RECEIVER_H_
