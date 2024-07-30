// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flatfish_ros_efuse_serial:msg/BoardArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flatfish_ros_efuse_serial/msg/detail/board_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoardArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flatfish_ros_efuse_serial::msg::BoardArray(_init);
}

void BoardArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flatfish_ros_efuse_serial::msg::BoardArray *>(message_memory);
  typed_message->~BoardArray();
}

size_t size_function__BoardArray__board(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flatfish_ros_efuse_serial::msg::Board> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoardArray__board(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flatfish_ros_efuse_serial::msg::Board> *>(untyped_member);
  return &member[index];
}

void * get_function__BoardArray__board(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flatfish_ros_efuse_serial::msg::Board> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoardArray__board(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flatfish_ros_efuse_serial::msg::Board *>(
    get_const_function__BoardArray__board(untyped_member, index));
  auto & value = *reinterpret_cast<flatfish_ros_efuse_serial::msg::Board *>(untyped_value);
  value = item;
}

void assign_function__BoardArray__board(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flatfish_ros_efuse_serial::msg::Board *>(
    get_function__BoardArray__board(untyped_member, index));
  const auto & value = *reinterpret_cast<const flatfish_ros_efuse_serial::msg::Board *>(untyped_value);
  item = value;
}

void resize_function__BoardArray__board(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flatfish_ros_efuse_serial::msg::Board> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoardArray_message_member_array[1] = {
  {
    "board",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flatfish_ros_efuse_serial::msg::Board>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial::msg::BoardArray, board),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoardArray__board,  // size() function pointer
    get_const_function__BoardArray__board,  // get_const(index) function pointer
    get_function__BoardArray__board,  // get(index) function pointer
    fetch_function__BoardArray__board,  // fetch(index, &value) function pointer
    assign_function__BoardArray__board,  // assign(index, value) function pointer
    resize_function__BoardArray__board  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoardArray_message_members = {
  "flatfish_ros_efuse_serial::msg",  // message namespace
  "BoardArray",  // message name
  1,  // number of fields
  sizeof(flatfish_ros_efuse_serial::msg::BoardArray),
  BoardArray_message_member_array,  // message members
  BoardArray_init_function,  // function to initialize message memory (memory has to be allocated)
  BoardArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoardArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoardArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flatfish_ros_efuse_serial::msg::BoardArray>()
{
  return &::flatfish_ros_efuse_serial::msg::rosidl_typesupport_introspection_cpp::BoardArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flatfish_ros_efuse_serial, msg, BoardArray)() {
  return &::flatfish_ros_efuse_serial::msg::rosidl_typesupport_introspection_cpp::BoardArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
