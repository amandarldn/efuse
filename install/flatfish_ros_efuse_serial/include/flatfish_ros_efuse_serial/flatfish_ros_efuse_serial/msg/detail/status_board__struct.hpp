// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'status_channel'
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoard __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoard __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusBoard_
{
  using Type = StatusBoard_<ContainerAllocator>;

  explicit StatusBoard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status_channel.fill(flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>{_init});
    }
  }

  explicit StatusBoard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    time(_alloc, _init),
    status_channel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status_channel.fill(flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _status_channel_type =
    std::array<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>, 8>;
  _status_channel_type status_channel;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__status_channel(
    const std::array<flatfish_ros_efuse_serial::msg::StatusChannel_<ContainerAllocator>, 8> & _arg)
  {
    this->status_channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoard
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoard
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusBoard_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->status_channel != other.status_channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusBoard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusBoard_

// alias to use template instance with default allocator
using StatusBoard =
  flatfish_ros_efuse_serial::msg::StatusBoard_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_HPP_
