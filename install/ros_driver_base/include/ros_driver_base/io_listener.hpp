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

#ifndef ROS_DRIVER_BASE__IO_LISTENER_HPP_
#define ROS_DRIVER_BASE__IO_LISTENER_HPP_

#include <vector>

#include <boost/cstdint.hpp>

namespace ros_driver_base
{
/**
 * @brief Base class for objects that are 'plugged in' a Driver class and get
 * passed all the data that passes through
 */
class IOListener
{
public:
  /**
   * Class constructor.
   */
  virtual ~IOListener();

  /**
   * Used to pass data that has been written to the device to the
   * listener
   */
  virtual void writeData(boost::uint8_t const * data, size_t size) = 0;

  /**
   * Used to pass data that has been read from the device to the listener
   */
  virtual void readData(boost::uint8_t const * data, size_t size) = 0;
};

/**
 * @brief Implementation of an IOListener that stores the data in a buffer
 */
class BufferListener : public IOListener
{
  std::vector<boost::uint8_t> m_writeBuffer;
  std::vector<boost::uint8_t> m_readBuffer;

public:
  std::vector<boost::uint8_t> flushRead();
  std::vector<boost::uint8_t> flushWrite();

  /**
   * Used to pass data that has been written to the device to the
   * listener
   */
  virtual void writeData(boost::uint8_t const * data, size_t size);
  /**
   * Used to pass data that has been read from the device to the listener
   */
  virtual void readData(boost::uint8_t const * data, size_t size);
};
}  //  namespace ros_driver_base

#endif  //  ROS_DRIVER_BASE__IO_LISTENER_HPP_
