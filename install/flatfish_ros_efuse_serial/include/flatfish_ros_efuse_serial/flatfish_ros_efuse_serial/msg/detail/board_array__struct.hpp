// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/BoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'board'
#include "flatfish_ros_efuse_serial/msg/detail/board__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__BoardArray __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__BoardArray __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoardArray_
{
  using Type = BoardArray_<ContainerAllocator>;

  explicit BoardArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BoardArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _board_type =
    std::vector<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>>;
  _board_type board;

  // setters for named parameter idiom
  Type & set__board(
    const std::vector<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>> & _arg)
  {
    this->board = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__BoardArray
    std::shared_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__BoardArray
    std::shared_ptr<flatfish_ros_efuse_serial::msg::BoardArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoardArray_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoardArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoardArray_

// alias to use template instance with default allocator
using BoardArray =
  flatfish_ros_efuse_serial::msg::BoardArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_HPP_
