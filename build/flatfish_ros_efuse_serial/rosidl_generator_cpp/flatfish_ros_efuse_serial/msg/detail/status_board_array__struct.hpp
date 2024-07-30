// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status_board'
#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoardArray __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoardArray __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusBoardArray_
{
  using Type = StatusBoardArray_<ContainerAllocator>;

  explicit StatusBoardArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StatusBoardArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _status_board_type =
    std::vector<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>>;
  _status_board_type status_board;

  // setters for named parameter idiom
  Type & set__status_board(
    const std::vector<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flatfish_ros_efuse_serial::msg::StatusBoard_<ContainerAllocator>>> & _arg)
  {
    this->status_board = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoardArray
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__StatusBoardArray
    std::shared_ptr<flatfish_ros_efuse_serial::msg::StatusBoardArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusBoardArray_ & other) const
  {
    if (this->status_board != other.status_board) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusBoardArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusBoardArray_

// alias to use template instance with default allocator
using StatusBoardArray =
  flatfish_ros_efuse_serial::msg::StatusBoardArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_HPP_
