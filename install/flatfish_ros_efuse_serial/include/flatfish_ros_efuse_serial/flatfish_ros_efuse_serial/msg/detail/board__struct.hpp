// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flatfish_ros_efuse_serial:msg/Board.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flatfish_ros_efuse_serial__msg__Board __attribute__((deprecated))
#else
# define DEPRECATED__flatfish_ros_efuse_serial__msg__Board __declspec(deprecated)
#endif

namespace flatfish_ros_efuse_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Board_
{
  using Type = Board_<ContainerAllocator>;

  explicit Board_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->channels.begin(), this->channels.end(), "");
    }
  }

  explicit Board_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    channels(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->channels.begin(), this->channels.end(), "");
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    uint8_t;
  _id_type id;
  using _channels_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__channels(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> *;
  using ConstRawPtr =
    const flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__Board
    std::shared_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flatfish_ros_efuse_serial__msg__Board
    std::shared_ptr<flatfish_ros_efuse_serial::msg::Board_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Board_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const Board_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Board_

// alias to use template instance with default allocator
using Board =
  flatfish_ros_efuse_serial::msg::Board_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_HPP_
