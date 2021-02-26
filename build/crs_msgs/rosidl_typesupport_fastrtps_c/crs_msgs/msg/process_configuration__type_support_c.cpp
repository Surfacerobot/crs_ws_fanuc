// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice
#include "crs_msgs/msg/process_configuration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/msg/process_configuration__struct.h"
#include "crs_msgs/msg/process_configuration__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // yaml_config
#include "rosidl_generator_c/string_functions.h"  // yaml_config

// forward declare type support functions


using _ProcessConfiguration__ros_msg_type = crs_msgs__msg__ProcessConfiguration;

static bool _ProcessConfiguration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProcessConfiguration__ros_msg_type * ros_message = static_cast<const _ProcessConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: yaml_config
  {
    const rosidl_generator_c__String * str = &ros_message->yaml_config;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ProcessConfiguration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProcessConfiguration__ros_msg_type * ros_message = static_cast<_ProcessConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: yaml_config
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yaml_config.data) {
      rosidl_generator_c__String__init(&ros_message->yaml_config);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->yaml_config,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yaml_config'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__msg__ProcessConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProcessConfiguration__ros_msg_type * ros_message = static_cast<const _ProcessConfiguration__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name yaml_config
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yaml_config.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ProcessConfiguration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__msg__ProcessConfiguration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__msg__ProcessConfiguration(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: yaml_config
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ProcessConfiguration__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__msg__ProcessConfiguration(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProcessConfiguration = {
  "crs_msgs::msg",
  "ProcessConfiguration",
  _ProcessConfiguration__cdr_serialize,
  _ProcessConfiguration__cdr_deserialize,
  _ProcessConfiguration__get_serialized_size,
  _ProcessConfiguration__max_serialized_size
};

static rosidl_message_type_support_t _ProcessConfiguration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProcessConfiguration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ProcessConfiguration)() {
  return &_ProcessConfiguration__type_support;
}

#if defined(__cplusplus)
}
#endif
