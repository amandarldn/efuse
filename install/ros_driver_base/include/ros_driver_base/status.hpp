// Copyright (c) 2022-2023, SENAI Cimatec
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


#ifndef ROS_DRIVER_BASE__STATUS_HPP_
#define ROS_DRIVER_BASE__STATUS_HPP_

#include <chrono>

namespace ros_driver_base
{
/**
 * This structure holds IO statistics
 */
struct Status
{
  std::chrono::system_clock::time_point stamp;

  unsigned int tx;  //! count of bytes received
  unsigned int good_rx;  //! count of bytes received and accepted
  unsigned int bad_rx;  //! count of bytes received and rejected
  unsigned int queued_bytes;  //! count of bytes currently queued in the driver's internal buffer

  Status()
  : tx(0), good_rx(0), bad_rx(0), queued_bytes(0) {}
};
}  //  namespace ros_driver_base

#endif  //  ROS_DRIVER_BASE__STATUS_HPP_
