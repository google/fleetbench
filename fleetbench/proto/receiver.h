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

#include <cstdint>
#include <string>

#include "absl/strings/cord.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"

namespace fleetbench::proto {

template <typename T>
inline void Receive(const T& val) {
  T temp_val = val;
  benchmark::DoNotOptimize(temp_val);
}

inline void Receive(const absl::Cord& val) {
  absl::Cord temp_cord;
  temp_cord.Append(val);
  benchmark::DoNotOptimize(temp_cord);
}

inline void Receive(const std::string& val) {
  const std::string* temp_str = &val;
  benchmark::DoNotOptimize(temp_str);
}

inline void ReceiveCord(const absl::Cord& val) { Receive(val); }

inline void ReceiveString(absl::string_view val) { Receive(val); }

inline void ReceiveString(const std::string& val) { Receive(val); }

inline void ReceiveBool(const bool val) { Receive(val); }

inline void ReceiveDouble(const double val) { Receive(val); }

inline void ReceiveFloat(const float val) { Receive(val); }

inline void ReceiveInt32(const int32_t val) { Receive(val); }

inline void ReceiveInt64(const int64_t val) { Receive(val); }

inline void ReceiveUint32(const uint32_t val) { Receive(val); }

inline void ReceiveUint64(const uint64_t val) { Receive(val); }

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
void IsInitialized(M* message) {
  auto initialized = message->IsInitialized();
  benchmark::DoNotOptimize(initialized);
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
  auto default_inst = message->GetReflection()->IsDefaultInstance(*message);
  benchmark::DoNotOptimize(default_inst);
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
