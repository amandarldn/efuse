// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetMaxCurrent.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMaxCurrent_Request_
{
  using Type = SetMaxCurrent_Request_<ContainerAllocator>;

  explicit SetMaxCurrent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
      this->channel = 0;
      this->value = 0.0;
    }
  }

  explicit SetMaxCurrent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
      this->channel = 0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _board_type =
    int8_t;
  _board_type board;
  using _channel_type =
    int8_t;
  _channel_type channel;
  using _value_type =
    double;
  _value_type value;

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
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMaxCurrent_Request_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMaxCurrent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMaxCurrent_Request_

// alias to use template instance with default allocator
using SetMaxCurrent_Request =
  flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMaxCurrent_Response_
{
  using Type = SetMaxCurrent_Response_<ContainerAllocator>;

  explicit SetMaxCurrent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit SetMaxCurrent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMaxCurrent_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMaxCurrent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMaxCurrent_Response_

// alias to use template instance with default allocator
using SetMaxCurrent_Response =
  flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

namespace flatfish_ros_efuse_serial
{

namespace srv
{

struct SetMaxCurrent
{
  using Request = flatfish_ros_efuse_serial::srv::SetMaxCurrent_Request;
  using Response = flatfish_ros_efuse_serial::srv::SetMaxCurrent_Response;
};

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_MAX_CURRENT__STRUCT_HPP_
