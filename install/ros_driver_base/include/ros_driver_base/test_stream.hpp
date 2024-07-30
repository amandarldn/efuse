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

#ifndef ROS_DRIVER_BASE__TEST_STREAM_HPP_
#define ROS_DRIVER_BASE__TEST_STREAM_HPP_

#include <list>
#include <vector>

#include <ros_driver_base/io_stream.hpp>

namespace ros_driver_base
{
/**
 * A IOStream meant to be used to test ros_driver_base functionality
 * from outside
 *
 * It maintains two vectors, one the "to device" buffer and one the "from
 * buffer" device. All communications are synchronous, that is waitRead will
 * throw right away if no data is available.
 * waitWrite never fails.
 */

class TestStream : public IOStream
{
  std::vector<uint8_t> to_driver;
  std::vector<uint8_t> from_driver;
  std::list<std::vector<uint8_t>> expectations;
  std::list<std::vector<uint8_t>> replies;
  bool mock_mode;

public:
  TestStream()
  : mock_mode(false)
  {}

  /**
   * Push data to the driver "as-if" it was coming from the device
   */
  void pushDataToDriver(std::vector<uint8_t> const & data);

  /**
   * @brief Read data that the driver sent to the device
   *
   * This contains only data sent since the last call to
   * readDataFromDriver
   */
  std::vector<uint8_t> readDataFromDriver();

  /**
   * Set a expectation and reply pair and also puts the driver in
   * mock mode. Should be used after setting up DRIVER_BASE_MOCK().
   * @param expectation is the message that is expected to be sent by the driver
   * @param reply reply message to be received by the driver
   */
  void EXPECT_REPLY(std::vector<uint8_t> const & expectation, std::vector<uint8_t> const & reply);
  void waitRead(std::chrono::duration<double> const & timeout);
  void waitWrite(std::chrono::duration<double> const & timeout);
  size_t read(uint8_t * buffer, size_t buffer_size);
  size_t write(uint8_t const * buffer, size_t buffer_size);
  void clear();
  bool expectationsAreEmpty();
  void setMockMode(bool mode);
  void clearExpectations();
};
}  // namespace ros_driver_base

#endif  //  ROS_DRIVER_BASE__TEST_STREAM_HPP_
