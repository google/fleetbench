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
#include <memory>
#include <string>

#include "absl/log/check.h"
#include "absl/strings/string_view.h"
#include "zstd.h"

namespace fleetbench {
namespace compression {

size_t ZDelete(ZSTD_CCtx* ptr);
size_t ZDelete(ZSTD_DCtx* ptr);

struct ZDeleter {
  template <class T>
  void operator()(T* ptr) const {
    size_t res = ZDelete(ptr);
    CHECK(!ZSTD_isError(res)) << ZSTD_getErrorName(res);
  }
};

class Compressor {
 public:
  virtual ~Compressor() = default;
  virtual size_t Compress(absl::string_view input, std::string* output) = 0;
  virtual bool Decompress(absl::string_view input, std::string* output) = 0;
};

class ZstdCompressor : public Compressor {
 public:
  ZstdCompressor(int compression_level, int window_log);
  size_t Compress(absl::string_view input, std::string* output) override;
  bool Decompress(absl::string_view input, std::string* output) override;

 private:
  size_t MaxCompressedSize(size_t input_size) const;
  std::unique_ptr<ZSTD_CCtx, ZDeleter> cctx_;
  std::unique_ptr<ZSTD_DCtx, ZDeleter> dctx_;
};

class SnappyCompressor : public Compressor {
 public:
  SnappyCompressor() = default;
  size_t Compress(absl::string_view input, std::string* output) override;
  bool Decompress(absl::string_view input, std::string* output) override;
};

class ZLibCompressor : public Compressor {
 public:
  ZLibCompressor(int compression_level, int window_log);
  size_t Compress(absl::string_view input, std::string* output) override;
  bool Decompress(absl::string_view input, std::string* output) override;

 private:
  const int compression_level_;
  const int window_log_;
};

class BrotliCompressor : public Compressor {
 public:
  BrotliCompressor(int compression_level, int window_log);
  size_t Compress(absl::string_view input, std::string* output) override;
  bool Decompress(absl::string_view input, std::string* output) override;

 private:
  int compression_level_;
  int window_log_;
};

}  // namespace compression
}  // namespace fleetbench

#endif
