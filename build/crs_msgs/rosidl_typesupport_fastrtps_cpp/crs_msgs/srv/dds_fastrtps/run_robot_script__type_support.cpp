// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:srv/RunRobotScript.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/run_robot_script__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crs_msgs/srv/run_robot_script__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crs_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_serialize(
  const crs_msgs::srv::RunRobotScript_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filename
  cdr << ros_message.filename;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crs_msgs::srv::RunRobotScript_Request & ros_message)
{
  // Member: filename
  cdr >> ros_message.filename;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
get_serialized_size(
  const crs_msgs::srv::RunRobotScript_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
max_serialized_size_RunRobotScript_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: filename
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

static bool _RunRobotScript_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::RunRobotScript_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RunRobotScript_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crs_msgs::srv::RunRobotScript_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RunRobotScript_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::RunRobotScript_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RunRobotScript_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RunRobotScript_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RunRobotScript_Request__callbacks = {
  "crs_msgs::srv",
  "RunRobotScript_Request",
  _RunRobotScript_Request__cdr_serialize,
  _RunRobotScript_Request__cdr_deserialize,
  _RunRobotScript_Request__get_serialized_size,
  _RunRobotScript_Request__max_serialized_size
};

static rosidl_message_type_support_t _RunRobotScript_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRobotScript_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_msgs::srv::RunRobotScript_Request>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, RunRobotScript_Request)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace crs_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_serialize(
  const crs_msgs::srv::RunRobotScript_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: answer
  cdr << ros_message.answer;
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crs_msgs::srv::RunRobotScript_Response & ros_message)
{
  // Member: answer
  cdr >> ros_message.answer;

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
get_serialized_size(
  const crs_msgs::srv::RunRobotScript_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.answer.size() + 1);
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
max_serialized_size_RunRobotScript_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RunRobotScript_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::RunRobotScript_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RunRobotScript_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crs_msgs::srv::RunRobotScript_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RunRobotScript_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::RunRobotScript_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RunRobotScript_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RunRobotScript_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RunRobotScript_Response__callbacks = {
  "crs_msgs::srv",
  "RunRobotScript_Response",
  _RunRobotScript_Response__cdr_serialize,
  _RunRobotScript_Response__cdr_deserialize,
  _RunRobotScript_Response__get_serialized_size,
  _RunRobotScript_Response__max_serialized_size
};

static rosidl_message_type_support_t _RunRobotScript_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRobotScript_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_msgs::srv::RunRobotScript_Response>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, RunRobotScript_Response)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace crs_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RunRobotScript__callbacks = {
  "crs_msgs::srv",
  "RunRobotScript",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, RunRobotScript_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, RunRobotScript_Response)(),
};

static rosidl_service_type_support_t _RunRobotScript__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRobotScript__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace crs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_crs_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<crs_msgs::srv::RunRobotScript>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, RunRobotScript)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_RunRobotScript__handle;
}

#ifdef __cplusplus
}
#endif
