// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusChannel __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusChannel __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusChannel_
{
  using Type = StatusChannel_<ContainerAllocator>;

  explicit StatusChannel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->default_on = false;
      this->channel_on = false;
      this->max_current = 0.0;
      this->current = 0.0;
      this->check_voltage = false;
      this->error_led = false;
    }
  }

  explicit StatusChannel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->default_on = false;
      this->channel_on = false;
      this->max_current = 0.0;
      this->current = 0.0;
      this->check_voltage = false;
      this->error_led = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _default_on_type =
    bool;
  _default_on_type default_on;
  using _channel_on_type =
    bool;
  _channel_on_type channel_on;
  using _max_current_type =
    double;
  _max_current_type max_current;
  using _current_type =
    double;
  _current_type current;
  using _check_voltage_type =
    bool;
  _check_voltage_type check_voltage;
  using _error_led_type =
    bool;
  _error_led_type error_led;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__default_on(
    const bool & _arg)
  {
    this->default_on = _arg;
    return *this;
  }
  Type & set__channel_on(
    const bool & _arg)
  {
    this->channel_on = _arg;
    return *this;
  }
  Type & set__max_current(
    const double & _arg)
  {
    this->max_current = _arg;
    return *this;
  }
  Type & set__current(
    const double & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__check_voltage(
    const bool & _arg)
  {
    this->check_voltage = _arg;
    return *this;
  }
  Type & set__error_led(
    const bool & _arg)
  {
    this->error_led = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusChannel
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusChannel
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusChannel_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->default_on != other.default_on) {
      return false;
    }
    if (this->channel_on != other.channel_on) {
      return false;
    }
    if (this->max_current != other.max_current) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->check_voltage != other.check_voltage) {
      return false;
    }
    if (this->error_led != other.error_led) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusChannel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusChannel_

// alias to use template instance with default allocator
using StatusChannel =
  flatfish_ros_efuse_serial::msg::StatusChannel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_HPP_
