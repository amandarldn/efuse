// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__BUILDER_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace builder
{

class Init_StatusChannel_error_led
{
public:
  explicit Init_StatusChannel_error_led(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  ::flatfish_ros_efuse_serial::msg::StatusChannel error_led(::flatfish_ros_efuse_serial::msg::StatusChannel::_error_led_type arg)
  {
    msg_.error_led = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_check_voltage
{
public:
  explicit Init_StatusChannel_check_voltage(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  Init_StatusChannel_error_led check_voltage(::flatfish_ros_efuse_serial::msg::StatusChannel::_check_voltage_type arg)
  {
    msg_.check_voltage = std::move(arg);
    return Init_StatusChannel_error_led(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_current
{
public:
  explicit Init_StatusChannel_current(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  Init_StatusChannel_check_voltage current(::flatfish_ros_efuse_serial::msg::StatusChannel::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_StatusChannel_check_voltage(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_max_current
{
public:
  explicit Init_StatusChannel_max_current(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  Init_StatusChannel_current max_current(::flatfish_ros_efuse_serial::msg::StatusChannel::_max_current_type arg)
  {
    msg_.max_current = std::move(arg);
    return Init_StatusChannel_current(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_channel_on
{
public:
  explicit Init_StatusChannel_channel_on(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  Init_StatusChannel_max_current channel_on(::flatfish_ros_efuse_serial::msg::StatusChannel::_channel_on_type arg)
  {
    msg_.channel_on = std::move(arg);
    return Init_StatusChannel_max_current(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_default_on
{
public:
  explicit Init_StatusChannel_default_on(::flatfish_ros_efuse_serial::msg::StatusChannel & msg)
  : msg_(msg)
  {}
  Init_StatusChannel_channel_on default_on(::flatfish_ros_efuse_serial::msg::StatusChannel::_default_on_type arg)
  {
    msg_.default_on = std::move(arg);
    return Init_StatusChannel_channel_on(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

class Init_StatusChannel_name
{
public:
  Init_StatusChannel_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusChannel_default_on name(::flatfish_ros_efuse_serial::msg::StatusChannel::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_StatusChannel_default_on(msg_);
  }

private:
  ::flatfish_ros_efuse_serial::msg::StatusChannel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flatfish_ros_efuse_serial::msg::StatusChannel>()
{
  return flatfish_ros_efuse_serial::msg::builder::Init_StatusChannel_name();
}

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__BUILDER_HPP_
