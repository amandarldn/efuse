// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelsOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/srv/detail/set_channels_on__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetChannelsOn_Request_command
{
public:
  explicit Init_SetChannelsOn_Request_command(::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request command(::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request msg_;
};

class Init_SetChannelsOn_Request_board
{
public:
  Init_SetChannelsOn_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetChannelsOn_Request_command board(::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return Init_SetChannelsOn_Request_command(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetChannelsOn_Request>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetChannelsOn_Request_board();
}

}  // namespace flatfish_ros_efuse_serial


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetChannelsOn_Response_error
{
public:
  Init_SetChannelsOn_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::srv::SetChannelsOn_Response error(::flatfish_ros_efuse_serial::srv::SetChannelsOn_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelsOn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetChannelsOn_Response>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetChannelsOn_Response_error();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__BUILDER_HPP_
