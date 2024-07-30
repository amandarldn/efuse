// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:srv/ResetBoard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/srv/detail/reset_board__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/srv/detail/reset_board__functions.h"
#include "flatfish_ros_efuse_serial/srv/detail/reset_board__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__srv__ResetBoard_Request__init(message_memory);
}

void flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__srv__ResetBoard_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_member_array[1] = {
  {
    "board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__srv__ResetBoard_Request, board),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_members = {
  "flatfish_ros_efuse_serial__srv",  // message namespace
  "ResetBoard_Request",  // message name
  1,  // number of fields
  sizeof(flatfish_ros_efuse_serial__srv__ResetBoard_Request),
  flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_member_array,  // message members
  flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Request)() {
  if (!flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__srv__ResetBoard_Request__rosidl_typesupport_introspection_c__ResetBoard_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/reset_board__rosidl_typesupport_introspection_c.h"
// already included above
// #include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/reset_board__functions.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/reset_board__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__srv__ResetBoard_Response__init(message_memory);
}

void flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__srv__ResetBoard_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__srv__ResetBoard_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_members = {
  "flatfish_ros_efuse_serial__srv",  // message namespace
  "ResetBoard_Response",  // message name
  1,  // number of fields
  sizeof(flatfish_ros_efuse_serial__srv__ResetBoard_Response),
  flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_member_array,  // message members
  flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Response)() {
  if (!flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__srv__ResetBoard_Response__rosidl_typesupport_introspection_c__ResetBoard_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/reset_board__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_members = {
  "flatfish_ros_efuse_serial__srv",  // service namespace
  "ResetBoard",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_Request_message_type_support_handle,
  NULL  // response message
  // flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_Response_message_type_support_handle
};

static rosidl_service_type_support_t flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard)() {
  if (!flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, srv, ResetBoard_Response)()->data;
  }

  return &flatfish_ros_efuse_serial__srv__detail__reset_board__rosidl_typesupport_introspection_c__ResetBoard_service_type_support_handle;
}
