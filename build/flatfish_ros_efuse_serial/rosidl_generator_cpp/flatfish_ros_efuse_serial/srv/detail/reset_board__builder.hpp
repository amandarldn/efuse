// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:srv/ResetBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/srv/detail/reset_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_ResetBoard_Request_board
{
public:
  Init_ResetBoard_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::srv::ResetBoard_Request board(::flatfish_ros_efuse_serial::srv::ResetBoard_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::ResetBoard_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::ResetBoard_Request>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_ResetBoard_Request_board();
}

}  // namespace flatfish_ros_efuse_serial


namespace flatfish_ros_efuse_serial
{

namespace srv
{

namespace builder
{

class Init_ResetBoard_Response_error
{
public:
  Init_ResetBoard_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flatfish_ros_efuse_serial::srv::ResetBoard_Response error(::flatfish_ros_efuse_serial::srv::ResetBoard_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::srv::ResetBoard_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::srv::ResetBoard_Response>()
{
  return flatfish_ros_efuse_serial::srv::builder::Init_ResetBoard_Response_error();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__BUILDER_HPP_
