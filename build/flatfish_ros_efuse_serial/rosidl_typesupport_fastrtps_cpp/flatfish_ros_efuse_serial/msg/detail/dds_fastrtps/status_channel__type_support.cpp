// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_serialize(
  const flatfish_ros_efuse_serial::msg::StatusChannel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: default_on
  cdr << (ros_message.default_on ? true : false);
  // Member: channel_on
  cdr << (ros_message.channel_on ? true : false);
  // Member: max_current
  cdr << ros_message.max_current;
  // Member: current
  cdr << ros_message.current;
  // Member: check_voltage
  cdr << (ros_message.check_voltage ? true : false);
  // Member: error_led
  cdr << (ros_message.error_led ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flatfish_ros_efuse_serial::msg::StatusChannel & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: default_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.default_on = tmp ? true : false;
  }

  // Member: channel_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.channel_on = tmp ? true : false;
  }

  // Member: max_current
  cdr >> ros_message.max_current;

  // Member: current
  cdr >> ros_message.current;

  // Member: check_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_voltage = tmp ? true : false;
  }

  // Member: error_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_led = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
get_serialized_size(
  const flatfish_ros_efuse_serial::msg::StatusChannel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: default_on
  {
    size_t item_size = sizeof(ros_message.default_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: channel_on
  {
    size_t item_size = sizeof(ros_message.channel_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_current
  {
    size_t item_size = sizeof(ros_message.max_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_voltage
  {
    size_t item_size = sizeof(ros_message.check_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_led
  {
    size_t item_size = sizeof(ros_message.error_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
max_serialized_size_StatusChannel(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: default_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: channel_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: check_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flatfish_ros_efuse_serial::msg::StatusChannel;
    is_plain =
      (
      offsetof(DataType, error_led) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StatusChannel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flatfish_ros_efuse_serial::msg::StatusChannel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StatusChannel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flatfish_ros_efuse_serial::msg::StatusChannel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StatusChannel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flatfish_ros_efuse_serial::msg::StatusChannel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StatusChannel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StatusChannel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StatusChannel__callbacks = {
  "flatfish_ros_efuse_serial::msg",
  "StatusChannel",
  _StatusChannel__cdr_serialize,
  _StatusChannel__cdr_deserialize,
  _StatusChannel__get_serialized_size,
  _StatusChannel__max_serialized_size
};

static rosidl_message_type_support_t _StatusChannel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StatusChannel__callbacks,
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
get_message_type_support_handle<flatfish_ros_efuse_serial::msg::StatusChannel>()
{
  return &flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::_StatusChannel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flatfish_ros_efuse_serial, msg, StatusChannel)() {
  return &flatfish_ros_efuse_serial::msg::typesupport_fastrtps_cpp::_StatusChannel__handle;
}

#ifdef __cplusplus
}
#endif
