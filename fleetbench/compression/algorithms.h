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

#ifndef THIRD_PARTY_FLEETBENCH_COMPRESSION_ALGORITHMS_H_
#define THIRD_PARTY_FLEETBENCH_COMPRESSION_ALGORITHMS_H_

#include <stddef.h>

#include <cstddef>
#include <string>

#include "absl/strings/string_view.h"

namespace fleetbench {
namespace compression {

class Compressor {
 public:
  virtual ~Compressor() = default;
  virtual size_t Compress(absl::string_view input, std::string* output,
                          int compression_level) = 0;
  virtual bool Decompress(absl::string_view input, std::string* output) = 0;
};

class ZstdCompressor : public Compressor {
 public:
  size_t Compress(absl::string_view input, std::string* output,
                  int compression_level) override;
  bool Decompress(absl::string_view input, std::string* output) override;

 private:
  size_t MaxCompressedSize(size_t input_size) const;
};

class SnappyCompressor : public Compressor {
 public:
  size_t Compress(absl::string_view input, std::string* output,
                  int compression_level) override;
  bool Decompress(absl::string_view input, std::string* output) override;
};

}  // namespace compression
}  // namespace fleetbench

#endif