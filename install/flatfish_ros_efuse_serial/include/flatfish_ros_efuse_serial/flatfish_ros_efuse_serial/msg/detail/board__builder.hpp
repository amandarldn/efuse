// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:msg/Board.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/msg/detail/board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace builder
{

class Init_Board_channels
{
public:
  explicit Init_Board_channels(::flatfish_ros_efuse_serial::msg::Board & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::msg::Board channels(::flatfish_ros_efuse_serial::msg::Board::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::Board msg_;
};

class Init_Board_id
{
public:
  explicit Init_Board_id(::flatfish_ros_efuse_serial::msg::Board & msg)
  : msg_(msg)
  {}
  Init_Board_channels id(::flatfish_ros_efuse_serial::msg::Board::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Board_channels(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::Board msg_;
};

class Init_Board_name
{
public:
  Init_Board_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Board_id name(::flatfish_ros_efuse_serial::msg::Board::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Board_id(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::Board msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::msg::Board>()
{
  return flatfish_ros_efuse_serial::msg::builder::Init_Board_name();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__BUILDER_HPP_
