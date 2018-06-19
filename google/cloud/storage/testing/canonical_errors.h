// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_TESTING_CANONICAL_ERRORS_H_
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_TESTING_CANONICAL_ERRORS_H_

#include "google/cloud/storage/status.h"
#include <gmock/gmock.h>

namespace storage {
namespace testing {
/// Some helper functions to generate canonical errors in the tests.
namespace canonical_errors {
inline Status TransientError() { return Status{503, std::string{"try-again"}}; }
inline Status PermanentError() { return Status{404, std::string{"not found"}}; }
}  // namespace canonical_errors
}  // namespace testing
}  // namespace storage

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_TESTING_CANONICAL_ERRORS_H_