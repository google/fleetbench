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

#include "fleetbench/dynamic_registrar.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace fleetbench {
namespace {

using ::testing::MockFunction;

TEST(DynamicRegistrar, CallbackRunsOnlyOnce) {
  MockFunction<void()> func;
  MockFunction<void()> func_2;
  DynamicRegistrar::Get()->AddCallback(func.AsStdFunction());
  DynamicRegistrar::Get()->AddCallback(func_2.AsStdFunction());
  EXPECT_CALL(func, Call()).Times(1);
  EXPECT_CALL(func_2, Call()).Times(1);
  DynamicRegistrar::Get()->Run();
  DynamicRegistrar::Get()->Run();
}

}  // namespace
}  // namespace fleetbench
