// Copyright 2024 The Fleetbench Authors
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

#include "fleetbench/libc/utils.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "absl/types/span.h"

namespace fleetbench {
namespace libc {
namespace {

using ::testing::ElementsAre;

TEST(MarkTest, ModifiesBytes) {
  auto buffer_size = 8;
  MemoryBuffers buffers(buffer_size);
  char *src = buffers.src();
  char *dst = buffers.dst();
  MemoryBuffers::mark(src, 1, 2);
  MemoryBuffers::mark(dst, 3, 4);

  EXPECT_THAT(absl::MakeConstSpan(src, buffer_size),
              ElementsAre(0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
  EXPECT_THAT(absl::MakeConstSpan(dst, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF));
}

TEST(MarkTest, LeavesBytesUnmodified) {
  auto buffer_size = 4;
  MemoryBuffers buffers(buffer_size);
  char *src = buffers.src();
  char *dst = buffers.dst();
  MemoryBuffers::mark(src, 1, 0);
  MemoryBuffers::mark(dst, 3, 0);

  EXPECT_THAT(absl::MakeConstSpan(src, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0xFF));
  EXPECT_THAT(absl::MakeConstSpan(dst, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0xFF));
}

TEST(ResetTest, ResetsToOriginalState) {
  auto buffer_size = 8;
  MemoryBuffers buffers(buffer_size);
  char *src = buffers.src();
  char *dst = buffers.dst();
  MemoryBuffers::mark(src, 1, 2);
  MemoryBuffers::reset(src, 1, 2);
  MemoryBuffers::mark(dst, 3, 3);
  MemoryBuffers::mark(dst, 3, 4);
  MemoryBuffers::reset(dst, 3, 4);

  EXPECT_THAT(absl::MakeConstSpan(src, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
  EXPECT_THAT(absl::MakeConstSpan(dst, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF));
}

TEST(ResetTest, LeavesBytesModified) {
  auto buffer_size = 4;
  MemoryBuffers buffers(buffer_size);
  char *src = buffers.src();
  char *dst = buffers.dst();
  MemoryBuffers::mark(src, 1, 1);
  MemoryBuffers::reset(src, 1, 0);
  MemoryBuffers::mark(dst, 3, 1);
  MemoryBuffers::reset(dst, 3, 0);

  EXPECT_THAT(absl::MakeConstSpan(src, buffer_size),
              ElementsAre(0xFF, 0x00, 0xFF, 0xFF));
  EXPECT_THAT(absl::MakeConstSpan(dst, buffer_size),
              ElementsAre(0xFF, 0xFF, 0xFF, 0x00));
}

}  // namespace
}  // namespace libc
}  // namespace fleetbench
