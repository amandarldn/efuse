// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Request __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Request __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetChannelOn_Request_
{
  using Type = SetChannelOn_Request_<ContainerAllocator>;

  explicit SetChannelOn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
      this->channel = 0;
      this->state = false;
    }
  }

  explicit SetChannelOn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
      this->channel = 0;
      this->state = false;
    }
  }

  // field types and members
  using _board_type =
    int8_t;
  _board_type board;
  using _channel_type =
    int8_t;
  _channel_type channel;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__board(
    const int8_t & _arg)
  {
    this->board = _arg;
    return *this;
  }
  Type & set__channel(
    const int8_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetChannelOn_Request_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetChannelOn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetChannelOn_Request_

// alias to use template instance with default allocator
using SetChannelOn_Request =
  flatfish_ros_efuse_serial::srv::SetChannelOn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Response __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Response __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetChannelOn_Response_
{
  using Type = SetChannelOn_Response_<ContainerAllocator>;

  explicit SetChannelOn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit SetChannelOn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  // field types and members
  using _error_type =
    int8_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__error(
    const int8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetChannelOn_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetChannelOn_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetChannelOn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetChannelOn_Response_

// alias to use template instance with default allocator
using SetChannelOn_Response =
  flatfish_ros_efuse_serial::srv::SetChannelOn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

namespace flatfish_ros_efuse_serial
{

namespace srv
{

struct SetChannelOn
{
  using Request = flatfish_ros_efuse_serial::srv::SetChannelOn_Request;
  using Response = flatfish_ros_efuse_serial::srv::SetChannelOn_Response;
};

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__STRUCT_HPP_
