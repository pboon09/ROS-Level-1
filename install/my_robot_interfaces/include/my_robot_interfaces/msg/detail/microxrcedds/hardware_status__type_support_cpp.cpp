// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/hardware_status__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "my_robot_interfaces/msg/detail/hardware_status__struct.hpp"

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
  const my_robot_interfaces::msg::HardwareStatus & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: temperature
  rv = ucdr_serialize_int64_t(cdr, ros_message.temperature);
  // Member: are_motors_ready
  rv = ucdr_serialize_bool(cdr, ros_message.are_motors_ready);
  // Member: debug_message
  rv = ucdr_serialize_string(cdr, ros_message.debug_message.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  my_robot_interfaces::msg::HardwareStatus & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: temperature
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.temperature);
  // Member: are_motors_ready
  rv = ucdr_deserialize_bool(cdr, &ros_message.are_motors_ready);
  // Member: debug_message
  ros_message.debug_message.resize(ros_message.debug_message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.debug_message[0], ros_message.debug_message.capacity());
  if (rv) {
    ros_message.debug_message.resize(std::strlen(&ros_message.debug_message[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
get_serialized_size(
  const my_robot_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: temperature
  {
    const size_t item_size = sizeof(ros_message.temperature);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: are_motors_ready
  {
    const size_t item_size = sizeof(ros_message.are_motors_ready);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: debug_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.debug_message.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_robot_interfaces
max_serialized_size_HardwareStatus(
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

static bool _HardwareStatus__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HardwareStatus__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HardwareStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HardwareStatus__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _HardwareStatus__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_HardwareStatus(&full_bounded, 0);
}

static message_type_support_callbacks_t _HardwareStatus__callbacks = {
  "my_robot_interfaces::msg",
  "HardwareStatus",
  _HardwareStatus__cdr_serialize,
  _HardwareStatus__cdr_deserialize,
  _HardwareStatus__get_serialized_size,
  _HardwareStatus__get_serialized_size_with_initial_alignment,
  _HardwareStatus__max_serialized_size
};

static rosidl_message_type_support_t _HardwareStatus__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_HardwareStatus__callbacks,
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
get_message_type_support_handle<my_robot_interfaces::msg::HardwareStatus>()
{
  return &my_robot_interfaces::msg::typesupport_microxrcedds_cpp::_HardwareStatus__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, my_robot_interfaces, msg, HardwareStatus)() {
  return &my_robot_interfaces::msg::typesupport_microxrcedds_cpp::_HardwareStatus__handle;
}

#ifdef __cplusplus
}
#endif
