// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace builder
{

class Init_StatusBoard_status_channel
{
public:
  explicit Init_StatusBoard_status_channel(::flatfish_ros_efuse_serial::msg::StatusBoard & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::msg::StatusBoard status_channel(::flatfish_ros_efuse_serial::msg::StatusBoard::_status_channel_type arg)
  {
    msg_.status_channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusBoard msg_;
};

class Init_StatusBoard_time
{
public:
  explicit Init_StatusBoard_time(::flatfish_ros_efuse_serial::msg::StatusBoard & msg)
  : msg_(msg)
  {}
  Init_StatusBoard_status_channel time(::flatfish_ros_efuse_serial::msg::StatusBoard::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_StatusBoard_status_channel(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusBoard msg_;
};

class Init_StatusBoard_name
{
public:
  Init_StatusBoard_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusBoard_time name(::flatfish_ros_efuse_serial::msg::StatusBoard::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_StatusBoard_time(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusBoard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::msg::StatusBoard>()
{
  return flatfish_ros_efuse_serial::msg::builder::Init_StatusBoard_name();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__BUILDER_HPP_
