// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from my_robot_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/compute_rectangle_area__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/srv/detail/compute_rectangle_area__struct.h"
#include "my_robot_interfaces/srv/detail/compute_rectangle_area__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef my_robot_interfaces__srv__ComputeRectangleArea_Request _ComputeRectangleArea_Request__ros_msg_type;

static bool _ComputeRectangleArea_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ComputeRectangleArea_Request__ros_msg_type * ros_message = (_ComputeRectangleArea_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: length
  rv = ucdr_serialize_double(cdr, ros_message->length);
  // Member: width
  rv = ucdr_serialize_double(cdr, ros_message->width);

  return rv;
}

static bool _ComputeRectangleArea_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ComputeRectangleArea_Request__ros_msg_type * ros_message = (_ComputeRectangleArea_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: length
  rv = ucdr_deserialize_double(cdr, &ros_message->length);
  // Field name: width
  rv = ucdr_deserialize_double(cdr, &ros_message->width);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ComputeRectangleArea_Request__ros_msg_type * ros_message = (const _ComputeRectangleArea_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: length
  {
    const size_t item_size = sizeof(ros_message->length);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: width
  {
    const size_t item_size = sizeof(ros_message->width);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputeRectangleArea_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: length
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: width
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _ComputeRectangleArea_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ComputeRectangleArea_Request = {
  "my_robot_interfaces::srv",
  "ComputeRectangleArea_Request",
  _ComputeRectangleArea_Request__cdr_serialize,
  _ComputeRectangleArea_Request__cdr_deserialize,
  _ComputeRectangleArea_Request__get_serialized_size,
  get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Request,
  _ComputeRectangleArea_Request__max_serialized_size
};

static rosidl_message_type_support_t _ComputeRectangleArea_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ComputeRectangleArea_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, ComputeRectangleArea_Request)() {
  return &_ComputeRectangleArea_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/compute_rectangle_area__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/compute_rectangle_area__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef my_robot_interfaces__srv__ComputeRectangleArea_Response _ComputeRectangleArea_Response__ros_msg_type;

static bool _ComputeRectangleArea_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ComputeRectangleArea_Response__ros_msg_type * ros_message = (_ComputeRectangleArea_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: area
  rv = ucdr_serialize_double(cdr, ros_message->area);

  return rv;
}

static bool _ComputeRectangleArea_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ComputeRectangleArea_Response__ros_msg_type * ros_message = (_ComputeRectangleArea_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: area
  rv = ucdr_deserialize_double(cdr, &ros_message->area);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ComputeRectangleArea_Response__ros_msg_type * ros_message = (const _ComputeRectangleArea_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: area
  {
    const size_t item_size = sizeof(ros_message->area);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputeRectangleArea_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: area
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _ComputeRectangleArea_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ComputeRectangleArea_Response = {
  "my_robot_interfaces::srv",
  "ComputeRectangleArea_Response",
  _ComputeRectangleArea_Response__cdr_serialize,
  _ComputeRectangleArea_Response__cdr_deserialize,
  _ComputeRectangleArea_Response__get_serialized_size,
  get_serialized_size_my_robot_interfaces__srv__ComputeRectangleArea_Response,
  _ComputeRectangleArea_Response__max_serialized_size
};

static rosidl_message_type_support_t _ComputeRectangleArea_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ComputeRectangleArea_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, ComputeRectangleArea_Response)() {
  return &_ComputeRectangleArea_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/srv/compute_rectangle_area.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ComputeRectangleArea__callbacks = {
  "my_robot_interfaces::srv",
  "ComputeRectangleArea",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, ComputeRectangleArea_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, ComputeRectangleArea_Response),
};

static rosidl_service_type_support_t ComputeRectangleArea__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &ComputeRectangleArea__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, ComputeRectangleArea)() {
  return &ComputeRectangleArea__handle;
}

#if defined(__cplusplus)
}
#endif
