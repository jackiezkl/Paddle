/* Copyright (c) 2016 PaddlePaddle Authors. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include "paddle/framework/tensor.h"
#include "paddle/platform/device_context.h"

namespace paddle {
namespace operators {
namespace functor {

template <typename Place, typename T>
struct Set {
  void operator()(const T alpha, paddle::framework::Tensor* Y,
                  paddle::platform::DeviceContext* context);
};

}  // namespace functor
}  // namespace operators
}  // namespace paddle
