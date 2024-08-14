// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/led_state_array__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "my_robot_interfaces/msg/detail/led_state_array__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace my_robot_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
cdr_serialize(
  const my_robot_interfaces::msg::LedStateArray & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: led_states
  {
    size_t size = ros_message.led_states.size();
    rv = ucdr_serialize_sequence_int64_t(cdr, &ros_message.led_states[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  my_robot_interfaces::msg::LedStateArray & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: led_states
  {
    uint32_t size;
    const size_t capacity = ros_message.led_states.capacity();
    ros_message.led_states.resize(capacity);
    rv = ucdr_deserialize_sequence_int64_t(cdr, &ros_message.led_states[0], capacity, &size);
    if (rv) {
      ros_message.led_states.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
get_serialized_size(
  const my_robot_interfaces::msg::LedStateArray & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: led_states
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.led_states.size();
    size_t item_size = sizeof(ros_message.led_states[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
max_serialized_size_LedStateArray(
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

static bool _LedStateArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedStateArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_robot_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedStateArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedStateArray__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _LedStateArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_LedStateArray(&full_bounded, 0);
}

static message_type_support_callbacks_t _LedStateArray__callbacks = {
  "my_robot_interfaces::msg",
  "LedStateArray",
  _LedStateArray__cdr_serialize,
  _LedStateArray__cdr_deserialize,
  _LedStateArray__get_serialized_size,
  _LedStateArray__get_serialized_size_with_initial_alignment,
  _LedStateArray__max_serialized_size
};

static rosidl_message_type_support_t _LedStateArray__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LedStateArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::LedStateArray>()
{
  return &my_robot_interfaces::msg::typesupport_microxrcedds_cpp::_LedStateArray__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, my_robot_interfaces, msg, LedStateArray)() {
  return &my_robot_interfaces::msg::typesupport_microxrcedds_cpp::_LedStateArray__handle;
}

#ifdef __cplusplus
}
#endif
