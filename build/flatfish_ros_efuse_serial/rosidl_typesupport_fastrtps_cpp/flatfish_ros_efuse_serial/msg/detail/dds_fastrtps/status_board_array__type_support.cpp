// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace flatfish_ros_efuse_serial
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flatfish_ros_efuse_serial::msg::StatusBoard &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flatfish_ros_efuse_serial::msg::StatusBoard &);
size_t get_serialized_size(
  const flatfish_ros_efuse_serial::msg::StatusBoard &,
  size_t current_alignment);
size_t
max_serialized_size_StatusBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flatfish_ros_efuse_serial


namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_serialize(
  const flatfish_ros_efuse_serial::msg::StatusBoardArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status_board
  {
    size_t size = ros_message.status_board.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.status_board[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flatfish_ros_efuse_serial::msg::StatusBoardArray & ros_message)
{
  // Member: status_board
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.status_board.resize(size);
    for (size_t i = 0; i < size; i++) {
      flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.status_board[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
get_serialized_size(
  const flatfish_ros_efuse_serial::msg::StatusBoardArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status_board
  {
    size_t array_size = ros_message.status_board.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.status_board[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
max_serialized_size_StatusBoardArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: status_board
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::max_serialized_size_StatusBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flatfish_ros_efuse_serial::msg::StatusBoardArray;
    is_plain =
      (
      offsetof(DataType, status_board) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StatusBoardArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flatfish_ros_efuse_serial::msg::StatusBoardArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StatusBoardArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flatfish_ros_efuse_serial::msg::StatusBoardArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StatusBoardArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flatfish_ros_efuse_serial::msg::StatusBoardArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StatusBoardArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StatusBoardArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StatusBoardArray__callbacks = {
  "flatfish_ros_efuse_serial::msg",
  "StatusBoardArray",
  _StatusBoardArray__cdr_serialize,
  _StatusBoardArray__cdr_deserialize,
  _StatusBoardArray__get_serialized_size,
  _StatusBoardArray__max_serialized_size
};

static rosidl_message_type_support_t _StatusBoardArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StatusBoardArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
get_message_type_support_handle<flatfish_ros_efuse_serial::msg::StatusBoardArray>()
{
  return &flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::_StatusBoardArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flatfish_ros_efuse_serial, msg, StatusBoardArray)() {
  return &flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::_StatusBoardArray__handle;
}

#ifdef __cplusplus
}
#endif
