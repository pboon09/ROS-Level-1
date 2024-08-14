// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from my_robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/hardware_status__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "my_robot_interfaces/msg/detail/hardware_status__struct.h"
#include "my_robot_interfaces/msg/detail/hardware_status__functions.h"

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

#include "rosidl_runtime_c/string.h"  // debug_message
#include "rosidl_runtime_c/string_functions.h"  // debug_message

// forward declare type support functions


typedef my_robot_interfaces__msg__HardwareStatus _HardwareStatus__ros_msg_type;

static bool _HardwareStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _HardwareStatus__ros_msg_type * ros_message = (_HardwareStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: temperature
  rv = ucdr_serialize_int64_t(cdr, ros_message->temperature);
  // Member: are_motors_ready
  rv = ucdr_serialize_bool(cdr, (ros_message->are_motors_ready) ? 0x01 : 0x00);
  // Member: debug_message
 {
    uint32_t string_len = (ros_message->debug_message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->debug_message.data) + 1;
    ros_message->debug_message.size = (ros_message->debug_message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->debug_message.data, string_len);
  }

  return rv;
}

static bool _HardwareStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _HardwareStatus__ros_msg_type * ros_message = (_HardwareStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: temperature
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->temperature);
  // Field name: are_motors_ready
  rv = ucdr_deserialize_bool(cdr, &ros_message->are_motors_ready);
  // Field name: debug_message
  {
    size_t capacity = ros_message->debug_message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->debug_message.data, capacity, &string_size);
    if (rv) {
      ros_message->debug_message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->debug_message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__msg__HardwareStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _HardwareStatus__ros_msg_type * ros_message = (const _HardwareStatus__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: temperature
  {
    const size_t item_size = sizeof(ros_message->temperature);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: are_motors_ready
  {
    const size_t item_size = sizeof(ros_message->are_motors_ready);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: debug_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->debug_message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _HardwareStatus__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_my_robot_interfaces__msg__HardwareStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__msg__HardwareStatus(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: temperature
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: are_motors_ready
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: debug_message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _HardwareStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_my_robot_interfaces__msg__HardwareStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_HardwareStatus = {
  "my_robot_interfaces::msg",
  "HardwareStatus",
  _HardwareStatus__cdr_serialize,
  _HardwareStatus__cdr_deserialize,
  _HardwareStatus__get_serialized_size,
  get_serialized_size_my_robot_interfaces__msg__HardwareStatus,
  _HardwareStatus__max_serialized_size
};

static rosidl_message_type_support_t _HardwareStatus__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_HardwareStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, my_robot_interfaces, msg, HardwareStatus)() {
  return &_HardwareStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
