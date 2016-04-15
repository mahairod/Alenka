/*
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef SELECT_H_
#define SELECT_H_

#include <queue>
#include <string>
#include <vector>

#include "global.h"
#include "common.h"
#include "CudaSet.h"
#include "zone_map.h"
#include "util.cuh"
#include "select.cuh"

namespace alenka {

void select(queue<string> op_type, queue<string> op_value, queue<int_type> op_nums, queue<float_type> op_nums_f, queue<unsigned int> op_nums_precision, CudaSet* a,
            CudaSet* b, vector<thrust::device_vector<int_type> >& distinct_tmp, bool& one_liner);

} // namespace alenka

#endif /* SELECT_H_ */