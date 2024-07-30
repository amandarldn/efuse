// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.hpp"
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

void StatusBoard_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flatfish_ros_efuse_serial::msg::StatusBoard(_init);
}

void StatusBoard_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flatfish_ros_efuse_serial::msg::StatusBoard *>(message_memory);
  typed_message->~StatusBoard();
}

size_t size_function__StatusBoard__status_channel(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__StatusBoard__status_channel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<flatfish_ros_efuse_serial::msg::StatusChannel, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__StatusBoard__status_channel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<flatfish_ros_efuse_serial::msg::StatusChannel, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__StatusBoard__status_channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flatfish_ros_efuse_serial::msg::StatusChannel *>(
    get_const_function__StatusBoard__status_channel(untyped_member, index));
  auto & value = *reinterpret_cast<flatfish_ros_efuse_serial::msg::StatusChannel *>(untyped_value);
  value = item;
}

void assign_function__StatusBoard__status_channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flatfish_ros_efuse_serial::msg::StatusChannel *>(
    get_function__StatusBoard__status_channel(untyped_member, index));
  const auto & value = *reinterpret_cast<const flatfish_ros_efuse_serial::msg::StatusChannel *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StatusBoard_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial::msg::StatusBoard, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial::msg::StatusBoard, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_channel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flatfish_ros_efuse_serial::msg::StatusChannel>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial::msg::StatusBoard, status_channel),  // bytes offset in struct
    nullptr,  // default value
    size_function__StatusBoard__status_channel,  // size() function pointer
    get_const_function__StatusBoard__status_channel,  // get_const(index) function pointer
    get_function__StatusBoard__status_channel,  // get(index) function pointer
    fetch_function__StatusBoard__status_channel,  // fetch(index, &value) function pointer
    assign_function__StatusBoard__status_channel,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StatusBoard_message_members = {
  "flatfish_ros_efuse_serial::msg",  // message namespace
  "StatusBoard",  // message name
  3,  // number of fields
  sizeof(flatfish_ros_efuse_serial::msg::StatusBoard),
  StatusBoard_message_member_array,  // message members
  StatusBoard_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusBoard_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StatusBoard_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StatusBoard_message_members,
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
get_message_type_support_handle<flatfish_ros_efuse_serial::msg::StatusBoard>()
{
  return &::flatfish_ros_efuse_serial::msg::rosidl_typesupport_introspection_cpp::StatusBoard_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flatfish_ros_efuse_serial, msg, StatusBoard)() {
  return &::flatfish_ros_efuse_serial::msg::rosidl_typesupport_introspection_cpp::StatusBoard_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
