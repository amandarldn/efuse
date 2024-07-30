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

#ifndef ROS_DRIVER_BASE__RUNTIME_EXCEPTIONS_HPP_
#define ROS_DRIVER_BASE__RUNTIME_EXCEPTIONS_HPP_

#include <exception>
#include <stdexcept>
#include <string>

namespace ros_driver_base
{

/**
 * Exception raised when a unix error occurred in readPacket or writePacket
 */
struct UnixError : std::runtime_error
{
  int const error;
  explicit UnixError(std::string const & desc);

  UnixError(std::string const & desc, int error_code);
};

/**
 * Exception raised when a timeout occurred in readPacket or writePacket
 */
struct TimeoutError : std::runtime_error
{
  enum TIMEOUT_TYPE
  { NONE, PACKET, FIRST_BYTE };

  TIMEOUT_TYPE type;

  explicit TimeoutError(TIMEOUT_TYPE type, std::string const & desc)
  : std::runtime_error(desc), type(type) {}
};
}  //  namespace ros_driver_base

#endif  //  ROS_DRIVER_BASE__RUNTIME_EXCEPTIONS_HPP_
