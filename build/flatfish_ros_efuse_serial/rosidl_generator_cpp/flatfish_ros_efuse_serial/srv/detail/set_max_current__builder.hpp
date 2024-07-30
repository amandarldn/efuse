// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetMaxCurrent.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/srv/detail/set_max_current__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetMaxCurrent_Request_value
{
public:
  explicit Init_SetMaxCurrent_Request_value(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request value(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request msg_;
};

class Init_SetMaxCurrent_Request_channel
{
public:
  explicit Init_SetMaxCurrent_Request_channel(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxCurrent_Request_value channel(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_SetMaxCurrent_Request_value(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request msg_;
};

class Init_SetMaxCurrent_Request_board
{
public:
  Init_SetMaxCurrent_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxCurrent_Request_channel board(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return Init_SetMaxCurrent_Request_channel(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetMaxCurrent_Request_board();
}

}  // namespace flatfish_ros_efuse_serial


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_SetMaxCurrent_Response_error
{
public:
  Init_SetMaxCurrent_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response error(::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_SetMaxCurrent_Response_error();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__BUILDER_HPP_
