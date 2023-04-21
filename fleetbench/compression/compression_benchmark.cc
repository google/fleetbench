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

#include <cstddef>
#include <filesystem>  // NOLINT
#include <fstream>
#include <ios>
#include <iterator>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "absl/log/check.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
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

// Reads all files under a given "file_path" directory and returns as a vector
std::vector<std::string> GetCorpora(const absl::string_view file_path) {
  const std::filesystem::path sandbox{file_path};
  std::vector<std::string> corpora;
  for (auto const& dir_entry : std::filesystem::directory_iterator{sandbox}) {
    std::string corpus;
    CHECK(GetContents(dir_entry.path(), &corpus));
    corpora.push_back(corpus);
  }
  return corpora;
}

}  // namespace

static constexpr absl::string_view kCorporaPath =
    "fleetbench/compression/corpora/";

template <class... Args>
static void BM_Compress_Snappy(benchmark::State& state, Args&&... args) {
  auto args_tuple = std::make_tuple(std::move(args)...);

  std::string binary_directory = std::get<0>(args_tuple);
  std::string file_path = absl::StrCat(kCorporaPath, binary_directory);

  // Read in benchmark corpus
  auto corpora = GetCorpora(file_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  auto snappy_compressor = std::make_unique<SnappyCompressor>();

  for (auto _ : state) {
    //  Compress file
    for (size_t i = 0; i < corpora.size(); i++) {
      benchmark::DoNotOptimize(
          snappy_compressor->Compress(corpora[i], &compressed[i]));
    }
  }
  // Decompress file and check corretness
  for (size_t i = 0; i < compressed.size(); i++) {
    snappy_compressor->Decompress(compressed[i], &decompressed[i]);
    CHECK_EQ(corpora[i], decompressed[i]);
  }
}

template <class... Args>
static void BM_Decompress_Snappy(benchmark::State& state, Args&&... args) {
  auto args_tuple = std::make_tuple(std::move(args)...);

  std::string binary_directory = std::get<0>(args_tuple);
  std::string file_path = absl::StrCat(kCorporaPath, binary_directory);

  // Read in benchmark corpus
  auto corpora = GetCorpora(file_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  auto snappy_compressor = std::make_unique<SnappyCompressor>();

  for (size_t i = 0; i < corpora.size(); i++) {
    snappy_compressor->Compress(corpora[i], &compressed[i]);
  }

  for (auto _ : state) {
    for (size_t i = 0; i < compressed.size(); i++) {
      benchmark::DoNotOptimize(
          snappy_compressor->Decompress(compressed[i], &decompressed[i]));
    }
  }
  for (size_t i = 0; i < decompressed.size(); i++) {
    CHECK_EQ(corpora[i], decompressed[i]);
  }
}

BENCHMARK_CAPTURE(BM_Compress_Snappy, A, "Snappy-COMPRESS-A");
BENCHMARK_CAPTURE(BM_Decompress_Snappy, A, "Snappy-DECOMPRESS-A");

}  // namespace compression
}  // namespace fleetbench
