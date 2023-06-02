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

#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <filesystem>  // NOLINT
#include <fstream>
#include <ios>
#include <iterator>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "tools/cpp/runfiles/runfiles.h"
#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/compression/algorithms.h"
#include "fleetbench/dynamic_registrar.h"

using bazel::tools::cpp::runfiles::Runfiles;

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
std::vector<std::string> GetCorpora(std::filesystem::path dir_path) {
  const std::filesystem::path sandbox{dir_path};
  std::vector<std::string> corpora;
  for (auto const& dir_entry : std::filesystem::directory_iterator{sandbox}) {
    std::string corpus;
    CHECK(GetContents(dir_entry.path(), &corpus));
    corpora.push_back(corpus);
  }
  return corpora;
}

// Returns a sorted list of the files in directory 'dir' whose filenames start
// with 'prefix'.
static std::vector<std::filesystem::path> GetMatchingDirectories(
    absl::string_view dir, absl::string_view prefix) {
  std::vector<std::filesystem::path> directories;
  for (const auto& entry : std::filesystem::directory_iterator(dir)) {
    if (std::filesystem::is_directory(entry.path())) {
      if (absl::StartsWith(entry.path().filename().string(), prefix)) {
        directories.push_back(entry.path());
      }
    }
  }
  std::sort(directories.begin(), directories.end());
  return directories;
}

namespace CompressorFactory {

std::unique_ptr<Compressor> CreateCompressor(
    const absl::string_view compressor_type) {
  if (compressor_type == "Snappy") {
    return std::make_unique<SnappyCompressor>();
  } else if (compressor_type == "ZSTD") {
    return std::make_unique<ZstdCompressor>();
  } else {
    LOG(FATAL) << "Unknown compressor type: " << compressor_type;
    return nullptr;
  }
}
}  // namespace CompressorFactory

}  // namespace

static constexpr absl::string_view kCorporaPath =
    "com_google_fleetbench/fleetbench/compression/corpora/";

static void BM_Compress(benchmark::State& state,
                        absl::string_view compressor_type,
                        std::filesystem::path dir_path) {
  auto compressor = CompressorFactory::CreateCompressor(compressor_type);

  // Read in benchmark corpus
  const auto& corpora = GetCorpora(dir_path);

  int compression_level = 0;
  if (compressor_type == "ZSTD") {
    compression_level = state.range(0);
  }

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (auto _ : state) {
    //  Compress file
    for (size_t i = 0; i < corpora.size(); i++) {
      auto res =
          compressor->Compress(corpora[i], &compressed[i], compression_level);
      benchmark::DoNotOptimize(res);
    }
  }
  // Decompress file and check correctness
  for (size_t i = 0; i < compressed.size(); i++) {
    compressor->Decompress(compressed[i], &decompressed[i]);
    CHECK_EQ(corpora[i], decompressed[i]);
  }
}

static void BM_Decompress(benchmark::State& state,
                          absl::string_view compressor_type,
                          std::filesystem::path dir_path) {
  auto compressor = CompressorFactory::CreateCompressor(compressor_type);

  // Read in benchmark corpus
  const auto& corpora = GetCorpora(dir_path);

  int compression_level = 0;
  if (compressor_type == "ZSTD") {
    compression_level = state.range(0);
  }

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (size_t i = 0; i < corpora.size(); i++) {
    compressor->Compress(corpora[i], &compressed[i], compression_level);
  }

  for (auto _ : state) {
    for (size_t i = 0; i < compressed.size(); i++) {
      auto res = compressor->Decompress(compressed[i], &decompressed[i]);
      benchmark::DoNotOptimize(res);
    }
  }

  // Check correctness
  for (size_t i = 0; i < decompressed.size(); i++) {
    CHECK_EQ(corpora[i], decompressed[i]);
  }
}

namespace {
void RegisterBenchmarks() {
  //github.com/bazelbuild/bazel/blob/master/tools/cpp/runfiles/runfiles_src.h
  std::string error;
  const char* program_path = std::getenv("FLEETBENCH_PROGRAM_PATH");
  std::unique_ptr<Runfiles> runfiles(Runfiles::Create(program_path, &error));
  if (runfiles == nullptr)
    LOG(FATAL) << "Can't find runfile directory: " << error;
  std::string path =
  runfiles->Rlocation(std::string(fleetbench::compression::kCorporaPath));
  std::vector<absl::string_view> algorithms = {"Snappy", "ZSTD"};
  std::vector<absl::string_view> operations = {"COMPRESS", "DECOMPRESS"};

  for (const auto& algorithm : algorithms) {
    for (const auto& operation : operations) {
      auto benchmark_fn = fleetbench::compression::BM_Compress;
      if (algorithm == "DECOMPRESS")
        benchmark_fn = fleetbench::compression::BM_Decompress;

      // Gets the a list of directory paths that stores compression corpus
      std::string directory_prefix = absl::StrCat(algorithm, "-", operation);
      const auto& directories = fleetbench::compression::GetMatchingDirectories(
          path, directory_prefix);

      for (const auto& directory : directories) {
        // Binary names, i.e, A, B,..
        std::string binary = directory.filename().string();
        std::string benchmark_name = absl::StrCat("BM_", binary);

        if (algorithm == "Snappy") {
          benchmark::RegisterBenchmark(benchmark_name.c_str(), benchmark_fn,
                                       "Snappy", directory);
        } else {
          auto* benchmark = benchmark::RegisterBenchmark(
              benchmark_name.c_str(), benchmark_fn, "ZSTD", directory);

          if (operation == "COMPRESS")
            benchmark->DenseRange(-1, 11, 1)->ArgName("compression_level");
          else
            benchmark->Arg(-1)->Arg(1)->ArgName("compression_level");
        }
      }
    }
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
  }
};

BenchmarkRegisterer br;

}  // namespace
}  // namespace compression
}  // namespace fleetbench
