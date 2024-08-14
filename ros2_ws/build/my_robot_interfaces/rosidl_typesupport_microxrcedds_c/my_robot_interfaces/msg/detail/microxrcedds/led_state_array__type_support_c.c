// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from my_robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/led_state_array__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/msg/detail/led_state_array__struct.h"
#include "my_robot_interfaces/msg/detail/led_state_array__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // led_states
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // led_states

// forward declare type support functions


typedef my_robot_interfaces__msg__LedStateArray _LedStateArray__ros_msg_type;

static bool _LedStateArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LedStateArray__ros_msg_type * ros_message = (_LedStateArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: led_states
  {
    const size_t size = ros_message->led_states.size;
    rv = ucdr_serialize_sequence_int64_t(cdr, ros_message->led_states.data, size);
  }

  return rv;
}

static bool _LedStateArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LedStateArray__ros_msg_type * ros_message = (_LedStateArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: led_states
  {
    uint32_t size;
    const size_t capacity = ros_message->led_states.capacity;
    rv = ucdr_deserialize_sequence_int64_t(cdr, ros_message->led_states.data, capacity, &size);
    if (rv) {
      ros_message->led_states.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->led_states.size = 0;
      ucdr_align_to(cdr, sizeof(int64_t));
      ucdr_advance_buffer(cdr, size * sizeof(int64_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__msg__LedStateArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LedStateArray__ros_msg_type * ros_message = (const _LedStateArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: led_states
  {
    size_t sequence_size = ros_message->led_states.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->led_states.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LedStateArray__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__msg__LedStateArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__msg__LedStateArray(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: led_states
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _LedStateArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__msg__LedStateArray(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LedStateArray = {
  "my_robot_interfaces::msg",
  "LedStateArray",
  _LedStateArray__cdr_serialize,
  _LedStateArray__cdr_deserialize,
  _LedStateArray__get_serialized_size,
  get_serialized_size_my_robot_interfaces__msg__LedStateArray,
  _LedStateArray__max_serialized_size
};

static rosidl_message_type_support_t _LedStateArray__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LedStateArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, msg, LedStateArray)() {
  return &_LedStateArray__type_support;
}

#if defined(__cplusplus)
}
#endif
