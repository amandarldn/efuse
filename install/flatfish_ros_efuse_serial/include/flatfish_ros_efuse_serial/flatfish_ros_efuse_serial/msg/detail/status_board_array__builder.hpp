// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace builder
{

class Init_StatusBoardArray_status_board
{
public:
  Init_StatusBoardArray_status_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::msg::StatusBoardArray status_board(::flatfish_ros_efuse_serial::msg::StatusBoardArray::_status_board_type arg)
  {
    msg_.status_board = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusBoardArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::msg::StatusBoardArray>()
{
  return flatfish_ros_efuse_serial::msg::builder::Init_StatusBoardArray_status_board();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__BUILDER_HPP_
