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

#ifndef ROS_DRIVER_BASE__TIMEOUT_HPP_
#define ROS_DRIVER_BASE__TIMEOUT_HPP_

#include <sys/time.h>

namespace ros_driver_base
{

/**
 * A timeout tracking class
 */
class Timeout
{
private:
  unsigned int timeout;
  timeval start_time;

public:
  /**
   * Initializes and starts a timeout
   * @param timeout  time in ms
   */
  explicit Timeout(unsigned int timeout = 0);

  /**
   * Restarts the timeout
   */
  void restart();

  /**
   * @brief Checks if the timeout is already elapsed.
   * This uses a syscall, so use sparingly and cache results
   * @returns  true if the timeout is elapsed
   */
  bool elapsed() const;

  /**
   * @brief Checks if the timeout is already elapsed.
   * This uses a syscall, so use sparingly and cache results
   * @param timeout  a custom timeout
   * @returns  true if the timeout is elapsed
   */
  bool elapsed(unsigned int timeout) const;

  /**
   * @brief Calculates the time left for this timeout
   * This uses a syscall, so use sparingly and cache results
   * @returns  number of milliseconds this timeout as left
   */
  unsigned int timeLeft() const;

  /**
   * @brief Calculates the time left for this timeout
   * This uses a syscall, so use sparingly and cache results
   * @param timeout  a custom timeout
   * @returns  number of milliseconds this timeout as left
   */
  unsigned int timeLeft(unsigned int timeout) const;
};
}  // namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__TIMEOUT_HPP_
