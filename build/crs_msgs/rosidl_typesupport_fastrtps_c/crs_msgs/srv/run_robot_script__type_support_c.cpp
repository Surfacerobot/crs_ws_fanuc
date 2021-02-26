// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_msgs:srv/RunRobotScript.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/run_robot_script__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/srv/run_robot_script__struct.h"
#include "crs_msgs/srv/run_robot_script__functions.h"
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

#include "rosidl_generator_c/string.h"  // filename
#include "rosidl_generator_c/string_functions.h"  // filename

// forward declare type support functions


using _RunRobotScript_Request__ros_msg_type = crs_msgs__srv__RunRobotScript_Request;

static bool _RunRobotScript_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RunRobotScript_Request__ros_msg_type * ros_message = static_cast<const _RunRobotScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    const rosidl_generator_c__String * str = &ros_message->filename;
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

static bool _RunRobotScript_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RunRobotScript_Request__ros_msg_type * ros_message = static_cast<_RunRobotScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_generator_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__RunRobotScript_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RunRobotScript_Request__ros_msg_type * ros_message = static_cast<const _RunRobotScript_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RunRobotScript_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__RunRobotScript_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__RunRobotScript_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filename
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

static size_t _RunRobotScript_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__RunRobotScript_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RunRobotScript_Request = {
  "crs_msgs::srv",
  "RunRobotScript_Request",
  _RunRobotScript_Request__cdr_serialize,
  _RunRobotScript_Request__cdr_deserialize,
  _RunRobotScript_Request__get_serialized_size,
  _RunRobotScript_Request__max_serialized_size
};

static rosidl_message_type_support_t _RunRobotScript_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RunRobotScript_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RunRobotScript_Request)() {
  return &_RunRobotScript_Request__type_support;
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
// #include "crs_msgs/srv/run_robot_script__struct.h"
// already included above
// #include "crs_msgs/srv/run_robot_script__functions.h"
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

// already included above
// #include "rosidl_generator_c/string.h"  // answer
// already included above
// #include "rosidl_generator_c/string_functions.h"  // answer

// forward declare type support functions


using _RunRobotScript_Response__ros_msg_type = crs_msgs__srv__RunRobotScript_Response;

static bool _RunRobotScript_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RunRobotScript_Response__ros_msg_type * ros_message = static_cast<const _RunRobotScript_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    const rosidl_generator_c__String * str = &ros_message->answer;
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

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _RunRobotScript_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RunRobotScript_Response__ros_msg_type * ros_message = static_cast<_RunRobotScript_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->answer.data) {
      rosidl_generator_c__String__init(&ros_message->answer);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->answer,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'answer'\n");
      return false;
    }
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__RunRobotScript_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RunRobotScript_Response__ros_msg_type * ros_message = static_cast<const _RunRobotScript_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->answer.size + 1);
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RunRobotScript_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__RunRobotScript_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__RunRobotScript_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RunRobotScript_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__RunRobotScript_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RunRobotScript_Response = {
  "crs_msgs::srv",
  "RunRobotScript_Response",
  _RunRobotScript_Response__cdr_serialize,
  _RunRobotScript_Response__cdr_deserialize,
  _RunRobotScript_Response__get_serialized_size,
  _RunRobotScript_Response__max_serialized_size
};

static rosidl_message_type_support_t _RunRobotScript_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RunRobotScript_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RunRobotScript_Response)() {
  return &_RunRobotScript_Response__type_support;
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
#include "crs_msgs/srv/run_robot_script.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RunRobotScript__callbacks = {
  "crs_msgs::srv",
  "RunRobotScript",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RunRobotScript_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RunRobotScript_Response)(),
};

static rosidl_service_type_support_t RunRobotScript__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RunRobotScript__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, RunRobotScript)() {
  return &RunRobotScript__handle;
}

#if defined(__cplusplus)
}
#endif
