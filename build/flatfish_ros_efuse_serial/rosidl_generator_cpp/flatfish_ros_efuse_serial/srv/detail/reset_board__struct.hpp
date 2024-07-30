// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:srv/ResetBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Request __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Request __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetBoard_Request_
{
  using Type = ResetBoard_Request_<ContainerAllocator>;

  explicit ResetBoard_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
    }
  }

  explicit ResetBoard_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board = 0;
    }
  }

  // field types and members
  using _board_type =
    int8_t;
  _board_type board;

  // setters for named parameter idiom
  Type & set__board(
    const int8_t & _arg)
  {
    this->board = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Request
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetBoard_Request_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetBoard_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetBoard_Request_

// alias to use template instance with default allocator
using ResetBoard_Request =
  flatfish_ros_efuse_serial::srv::ResetBoard_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Response __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Response __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetBoard_Response_
{
  using Type = ResetBoard_Response_<ContainerAllocator>;

  explicit ResetBoard_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit ResetBoard_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__srv__ResetBoard_Response
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetBoard_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetBoard_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetBoard_Response_

// alias to use template instance with default allocator
using ResetBoard_Response =
  flatfish_ros_efuse_serial::srv::ResetBoard_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

namespace flatfish_ros_efuse_serial
{

namespace srv
{

struct ResetBoard
{
  using Request = flatfish_ros_efuse_serial::srv::ResetBoard_Request;
  using Response = flatfish_ros_efuse_serial::srv::ResetBoard_Response;
};

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__STRUCT_HPP_
