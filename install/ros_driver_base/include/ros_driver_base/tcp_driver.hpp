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

#ifndef ROS_DRIVER_BASE__TCP_DRIVER_HPP_
#define ROS_DRIVER_BASE__TCP_DRIVER_HPP_

#include <netinet/in.h>

#include <ros_driver_base/driver.hpp>

namespace ros_driver_base
{
/**
 * @brief This class implements a TCP Server for single Client
 * If more than one client tries to connect, the old one is disconnected
 * see checkClientConnection for more details or if you want to implement support
 * for more than one client
 */
class TCPDriver : public ros_driver_base::Driver
{
public:
  /**
   * Class constructor.
   */
  explicit TCPDriver(int max_packet_size, bool extract_last = false);

  /**
   * Destructor of the class CameraParameterServer.
   */
  virtual ~TCPDriver();

  /**
   * Initializes an new socket so that a TCP client can connect to the given port,
   * connection is not established by this mehtod, you need to call read or write packed
   * only one time to get the first connection.
   */
  void tcp_server_init(int port);

  /**
   * Overloaded method from ros_driver_base::Driver, additionally calls checkClientConntion();
   */
  virtual int readPacket(uint8_t * buffer, int bufsize);
  virtual int readPacket(
    uint8_t * buffer, int bufsize,
    std::chrono::duration<double> const & packet_timeout,
    std::chrono::duration<double> const & first_byte_timeout);

  /**
   * Overloaded method from ros_driver_base::Driver, additionally calls checkClientConntion();
   */
  virtual bool writePacket(
    uint8_t const * buffer, int bufsize,
    std::chrono::duration<double> const & timeout);

  bool hasOpenSocked() const
  {
    return socked_fd;
  }

protected:
  /**
   * @brief This method checks for a new waiting client that tries to connect to the current port.
   * If a new client is discoverd, the old one will be disconnected and a connection
   * to the new one is established. The new file descriptor is passed to the IODriver to
   * now handle the connection to the new one the old one is closed so that the old
   * client will be disconnected
   */
  virtual void checkClientConnection();

  /**
   * Corresponding file descriptor to the socked
   */
  int socked_fd;

  /*
   * This member could be also handled by the Driver class itself, but not sure what the Driver do internally,
   * so keep this member for know inside of this class
   */
  int client_fd;

  /**
   * Internal members to handle the connection
   */
  struct sockaddr_in cli_addr;

  /**
   * Internal members to handle the connection
   */
  socklen_t clilen;
};
}  // namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__TCP_DRIVER_HPP_
