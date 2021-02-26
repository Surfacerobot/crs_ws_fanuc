// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_msgs:srv/RobotPositioner.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/robot_positioner__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/srv/robot_positioner__struct.h"
#include "crs_msgs/srv/robot_positioner__functions.h"
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


// forward declare type support functions


using _RobotPositioner_Request__ros_msg_type = crs_msgs__srv__RobotPositioner_Request;

static bool _RobotPositioner_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotPositioner_Request__ros_msg_type * ros_message = static_cast<const _RobotPositioner_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_position
  {
    cdr << ros_message->robot_position;
  }

  // Field name: robot_rail
  {
    cdr << ros_message->robot_rail;
  }

  return true;
}

static bool _RobotPositioner_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotPositioner_Request__ros_msg_type * ros_message = static_cast<_RobotPositioner_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_position
  {
    cdr >> ros_message->robot_position;
  }

  // Field name: robot_rail
  {
    cdr >> ros_message->robot_rail;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__RobotPositioner_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotPositioner_Request__ros_msg_type * ros_message = static_cast<const _RobotPositioner_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_position
  {
    size_t item_size = sizeof(ros_message->robot_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_rail
  {
    size_t item_size = sizeof(ros_message->robot_rail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotPositioner_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__RobotPositioner_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__RobotPositioner_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_rail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotPositioner_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__RobotPositioner_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotPositioner_Request = {
  "crs_msgs::srv",
  "RobotPositioner_Request",
  _RobotPositioner_Request__cdr_serialize,
  _RobotPositioner_Request__cdr_deserialize,
  _RobotPositioner_Request__get_serialized_size,
  _RobotPositioner_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotPositioner_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotPositioner_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RobotPositioner_Request)() {
  return &_RobotPositioner_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/robot_positioner__struct.h"
// already included above
// #include "crs_msgs/srv/robot_positioner__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_generator_c/string.h"  // error
#include "rosidl_generator_c/string_functions.h"  // error

// forward declare type support functions


using _RobotPositioner_Response__ros_msg_type = crs_msgs__srv__RobotPositioner_Response;

static bool _RobotPositioner_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotPositioner_Response__ros_msg_type * ros_message = static_cast<const _RobotPositioner_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error
  {
    const rosidl_generator_c__String * str = &ros_message->error;
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

static bool _RobotPositioner_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotPositioner_Response__ros_msg_type * ros_message = static_cast<_RobotPositioner_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error.data) {
      rosidl_generator_c__String__init(&ros_message->error);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__RobotPositioner_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotPositioner_Response__ros_msg_type * ros_message = static_cast<const _RobotPositioner_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotPositioner_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__RobotPositioner_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__RobotPositioner_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
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

static size_t _RobotPositioner_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__RobotPositioner_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotPositioner_Response = {
  "crs_msgs::srv",
  "RobotPositioner_Response",
  _RobotPositioner_Response__cdr_serialize,
  _RobotPositioner_Response__cdr_deserialize,
  _RobotPositioner_Response__get_serialized_size,
  _RobotPositioner_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotPositioner_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotPositioner_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RobotPositioner_Response)() {
  return &_RobotPositioner_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/srv/robot_positioner.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotPositioner__callbacks = {
  "crs_msgs::srv",
  "RobotPositioner",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RobotPositioner_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RobotPositioner_Response)(),
};

static rosidl_service_type_support_t RobotPositioner__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotPositioner__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RobotPositioner)() {
  return &RobotPositioner__handle;
}

#if defined(__cplusplus)
}
#endif
