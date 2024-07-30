// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__FUNCTIONS_H_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_generator_c__visibility_control.h"

#include "flatfish_ros_efuse_serial/srv/detail/set_channel_on__struct.h"

/// Initialize srv/SetChannelOn message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request
 * )) before or use
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__init(flatfish_ros_efuse_serial__srv__SetChannelOn_Request * msg);

/// Finalize srv/SetChannelOn message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__fini(flatfish_ros_efuse_serial__srv__SetChannelOn_Request * msg);

/// Create srv/SetChannelOn message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
flatfish_ros_efuse_serial__srv__SetChannelOn_Request *
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__create();

/// Destroy srv/SetChannelOn message.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__destroy(flatfish_ros_efuse_serial__srv__SetChannelOn_Request * msg);

/// Check for srv/SetChannelOn message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__are_equal(const flatfish_ros_efuse_serial__srv__SetChannelOn_Request * lhs, const flatfish_ros_efuse_serial__srv__SetChannelOn_Request * rhs);

/// Copy a srv/SetChannelOn message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__copy(
  const flatfish_ros_efuse_serial__srv__SetChannelOn_Request * input,
  flatfish_ros_efuse_serial__srv__SetChannelOn_Request * output);

/// Initialize array of srv/SetChannelOn messages.
/**
 * It allocates the memory for the number of elements and calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__init(flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetChannelOn messages.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__fini(flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * array);

/// Create array of srv/SetChannelOn messages.
/**
 * It allocates the memory for the array and calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence *
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetChannelOn messages.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__destroy(flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * array);

/// Check for srv/SetChannelOn message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__are_equal(const flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * lhs, const flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * rhs);

/// Copy an array of srv/SetChannelOn messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence__copy(
  const flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * input,
  flatfish_ros_efuse_serial__srv__SetChannelOn_Request__Sequence * output);

/// Initialize srv/SetChannelOn message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response
 * )) before or use
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__init(flatfish_ros_efuse_serial__srv__SetChannelOn_Response * msg);

/// Finalize srv/SetChannelOn message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__fini(flatfish_ros_efuse_serial__srv__SetChannelOn_Response * msg);

/// Create srv/SetChannelOn message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
flatfish_ros_efuse_serial__srv__SetChannelOn_Response *
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__create();

/// Destroy srv/SetChannelOn message.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__destroy(flatfish_ros_efuse_serial__srv__SetChannelOn_Response * msg);

/// Check for srv/SetChannelOn message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__are_equal(const flatfish_ros_efuse_serial__srv__SetChannelOn_Response * lhs, const flatfish_ros_efuse_serial__srv__SetChannelOn_Response * rhs);

/// Copy a srv/SetChannelOn message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__copy(
  const flatfish_ros_efuse_serial__srv__SetChannelOn_Response * input,
  flatfish_ros_efuse_serial__srv__SetChannelOn_Response * output);

/// Initialize array of srv/SetChannelOn messages.
/**
 * It allocates the memory for the number of elements and calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__init(flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetChannelOn messages.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__fini(flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * array);

/// Create array of srv/SetChannelOn messages.
/**
 * It allocates the memory for the array and calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence *
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetChannelOn messages.
/**
 * It calls
 * flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
void
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__destroy(flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * array);

/// Check for srv/SetChannelOn message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__are_equal(const flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * lhs, const flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * rhs);

/// Copy an array of srv/SetChannelOn messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flatfish_ros_efuse_serial
bool
flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence__copy(
  const flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * input,
  flatfish_ros_efuse_serial__srv__SetChannelOn_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__FUNCTIONS_H_
