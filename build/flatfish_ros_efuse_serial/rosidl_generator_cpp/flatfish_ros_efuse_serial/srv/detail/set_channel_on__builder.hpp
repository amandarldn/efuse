// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/srv/detail/set_channel_on__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetChannelOn_Request_state
{
public:
  explicit Init_SetChannelOn_Request_state(::flatfish_ros_efuse_serial::srv::SetChannelOn_Request & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Request state(::flatfish_ros_efuse_serial::srv::SetChannelOn_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Request msg_;
};

class Init_SetChannelOn_Request_channel
{
public:
  explicit Init_SetChannelOn_Request_channel(::flatfish_ros_efuse_serial::srv::SetChannelOn_Request & msg)
  : msg_(msg)
  {}
  Init_SetChannelOn_Request_state channel(::flatfish_ros_efuse_serial::srv::SetChannelOn_Request::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_SetChannelOn_Request_state(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Request msg_;
};

class Init_SetChannelOn_Request_board
{
public:
  Init_SetChannelOn_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetChannelOn_Request_channel board(::flatfish_ros_efuse_serial::srv::SetChannelOn_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return Init_SetChannelOn_Request_channel(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetChannelOn_Request>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetChannelOn_Request_board();
}

}  // namespace flatfish_ros_efuse_serial


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetChannelOn_Response_error
{
public:
  Init_SetChannelOn_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Response error(::flatfish_ros_efuse_serial::srv::SetChannelOn_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetChannelOn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetChannelOn_Response>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetChannelOn_Response_error();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__BUILDER_HPP_
