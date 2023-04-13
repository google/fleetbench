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

#include <fstream>
#include <ios>
#include <iterator>
#include <memory>
#include <string>
#include <utility>

#include "absl/log/check.h"
#include "benchmark/benchmark.h"
#include "fleetbench/compression/algorithms.h"

namespace fleetbench {
namespace compression {

namespace {
bool GetContents(const std::string& file_path, std::string* output) {
  std::ifstream file(file_path.c_str(), std::ios::binary);
  if (!file.good()) {
    return false;
  }
  std::string content((std::istreambuf_iterator<char>(file)),
                      std::istreambuf_iterator<char>());
  *output = std::move(content);
  return true;
}
}  // namespace

static void BM_Compress_Snappy(benchmark::State& state) {
  std::string file_name =
      "fleetbench/compression/corpora/alice29.txt";

  std::string data;
  CHECK(GetContents(file_name, &data));

  auto snappy_compressor = std::make_unique<SnappyCompressor>();

  // Reserve space to store string after compression and decompression.
  std::string compressed, decompressed;

  for (auto _ : state) {
    //  Compress file
    snappy_compressor->Compress(data, &compressed);
  }
  // Decompress file
  snappy_compressor->Decompress(compressed, &decompressed);
  CHECK_EQ(data, decompressed);
}

static void BM_Decompress_Snappy(benchmark::State& state) {
  std::string file_name =
      "fleetbench/compression/corpora/alice29.txt";

  std::string data;
  CHECK(GetContents(file_name, &data));

  auto snappy_compressor = std::make_unique<SnappyCompressor>();

  // Reserve space to store string after compression and decompression.
  std::string compressed, decompressed;

  snappy_compressor->Compress(data, &compressed);

  for (auto _ : state) {
    snappy_compressor->Decompress(compressed, &decompressed);
  }
  CHECK_EQ(data, decompressed);
}

BENCHMARK(BM_Compress_Snappy);
BENCHMARK(BM_Decompress_Snappy);

}  // namespace compression
}  // namespace fleetbench
