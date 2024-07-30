// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/CmdChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__CmdChannel __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__CmdChannel __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdChannel_
{
  using Type = CmdChannel_<ContainerAllocator>;

  explicit CmdChannel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->channel.begin(), this->channel.end(), false);
    }
  }

  explicit CmdChannel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : channel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->channel.begin(), this->channel.end(), false);
    }
  }

  // field types and members
  using _channel_type =
    std::array<bool, 8>;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__channel(
    const std::array<bool, 8> & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__CmdChannel
    std::shared_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__CmdChannel
    std::shared_ptr<flatfish_ros_efuse_serial::msg::CmdChannel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdChannel_ & other) const
  {
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdChannel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdChannel_

// alias to use template instance with default allocator
using CmdChannel =
  flatfish_ros_efuse_serial::msg::CmdChannel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_HPP_
