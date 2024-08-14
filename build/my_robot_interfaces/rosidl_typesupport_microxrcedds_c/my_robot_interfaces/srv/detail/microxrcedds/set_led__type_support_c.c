// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from my_robot_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/set_led__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/srv/detail/set_led__struct.h"
#include "my_robot_interfaces/srv/detail/set_led__functions.h"

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


typedef my_robot_interfaces__srv__SetLed_Request _SetLed_Request__ros_msg_type;

static bool _SetLed_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetLed_Request__ros_msg_type * ros_message = (_SetLed_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: led_number
  rv = ucdr_serialize_int64_t(cdr, ros_message->led_number);
  // Member: state
  rv = ucdr_serialize_int64_t(cdr, ros_message->state);

  return rv;
}

static bool _SetLed_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetLed_Request__ros_msg_type * ros_message = (_SetLed_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: led_number
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->led_number);
  // Field name: state
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->state);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__SetLed_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetLed_Request__ros_msg_type * ros_message = (const _SetLed_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: led_number
  {
    const size_t item_size = sizeof(ros_message->led_number);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: state
  {
    const size_t item_size = sizeof(ros_message->state);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLed_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__srv__SetLed_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__SetLed_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: led_number
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: state
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _SetLed_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__srv__SetLed_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetLed_Request = {
  "my_robot_interfaces::srv",
  "SetLed_Request",
  _SetLed_Request__cdr_serialize,
  _SetLed_Request__cdr_deserialize,
  _SetLed_Request__get_serialized_size,
  get_serialized_size_my_robot_interfaces__srv__SetLed_Request,
  _SetLed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetLed_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, SetLed_Request)() {
  return &_SetLed_Request__type_support;
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
// #include "my_robot_interfaces/srv/detail/set_led__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led__functions.h"

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


typedef my_robot_interfaces__srv__SetLed_Response _SetLed_Response__ros_msg_type;

static bool _SetLed_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetLed_Response__ros_msg_type * ros_message = (_SetLed_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);

  return rv;
}

static bool _SetLed_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetLed_Response__ros_msg_type * ros_message = (_SetLed_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__SetLed_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetLed_Response__ros_msg_type * ros_message = (const _SetLed_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLed_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__srv__SetLed_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__SetLed_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _SetLed_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__srv__SetLed_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetLed_Response = {
  "my_robot_interfaces::srv",
  "SetLed_Response",
  _SetLed_Response__cdr_serialize,
  _SetLed_Response__cdr_deserialize,
  _SetLed_Response__get_serialized_size,
  get_serialized_size_my_robot_interfaces__srv__SetLed_Response,
  _SetLed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetLed_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, SetLed_Response)() {
  return &_SetLed_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/srv/set_led.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLed__callbacks = {
  "my_robot_interfaces::srv",
  "SetLed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, SetLed_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, SetLed_Response),
};

static rosidl_service_type_support_t SetLed__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetLed__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, srv, SetLed)() {
  return &SetLed__handle;
}

#if defined(__cplusplus)
}
#endif
