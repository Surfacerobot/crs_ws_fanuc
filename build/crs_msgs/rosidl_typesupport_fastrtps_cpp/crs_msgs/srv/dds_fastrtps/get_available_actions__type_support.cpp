// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:srv/GetAvailableActions.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/get_available_actions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "crs_msgs/srv/get_available_actions__struct.hpp"

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
  const crs_msgs::srv::GetAvailableActions_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: search_pattern
  cdr << ros_message.search_pattern;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crs_msgs::srv::GetAvailableActions_Request & ros_message)
{
  // Member: search_pattern
  cdr >> ros_message.search_pattern;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
get_serialized_size(
  const crs_msgs::srv::GetAvailableActions_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: search_pattern
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.search_pattern.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
max_serialized_size_GetAvailableActions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: search_pattern
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

static bool _GetAvailableActions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::GetAvailableActions_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAvailableActions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crs_msgs::srv::GetAvailableActions_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAvailableActions_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::GetAvailableActions_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAvailableActions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAvailableActions_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAvailableActions_Request__callbacks = {
  "crs_msgs::srv",
  "GetAvailableActions_Request",
  _GetAvailableActions_Request__cdr_serialize,
  _GetAvailableActions_Request__cdr_deserialize,
  _GetAvailableActions_Request__get_serialized_size,
  _GetAvailableActions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableActions_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableActions_Request__callbacks,
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
get_message_type_support_handle<crs_msgs::srv::GetAvailableActions_Request>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, GetAvailableActions_Request)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions_Request__handle;
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
  const crs_msgs::srv::GetAvailableActions_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action_ids
  {
    cdr << ros_message.action_ids;
  }
  // Member: succeeded
  cdr << (ros_message.succeeded ? true : false);
  // Member: err_msg
  cdr << ros_message.err_msg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  crs_msgs::srv::GetAvailableActions_Response & ros_message)
{
  // Member: action_ids
  {
    cdr >> ros_message.action_ids;
  }

  // Member: succeeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.succeeded = tmp ? true : false;
  }

  // Member: err_msg
  cdr >> ros_message.err_msg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
get_serialized_size(
  const crs_msgs::srv::GetAvailableActions_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action_ids
  {
    size_t array_size = ros_message.action_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.action_ids[index].size() + 1);
    }
  }
  // Member: succeeded
  {
    size_t item_size = sizeof(ros_message.succeeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.err_msg.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_crs_msgs
max_serialized_size_GetAvailableActions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: action_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: succeeded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_msg
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

static bool _GetAvailableActions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::GetAvailableActions_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAvailableActions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<crs_msgs::srv::GetAvailableActions_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAvailableActions_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const crs_msgs::srv::GetAvailableActions_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAvailableActions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAvailableActions_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAvailableActions_Response__callbacks = {
  "crs_msgs::srv",
  "GetAvailableActions_Response",
  _GetAvailableActions_Response__cdr_serialize,
  _GetAvailableActions_Response__cdr_deserialize,
  _GetAvailableActions_Response__get_serialized_size,
  _GetAvailableActions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableActions_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableActions_Response__callbacks,
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
get_message_type_support_handle<crs_msgs::srv::GetAvailableActions_Response>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, GetAvailableActions_Response)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions_Response__handle;
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

static service_type_support_callbacks_t _GetAvailableActions__callbacks = {
  "crs_msgs::srv",
  "GetAvailableActions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, GetAvailableActions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, GetAvailableActions_Response)(),
};

static rosidl_service_type_support_t _GetAvailableActions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableActions__callbacks,
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
get_service_type_support_handle<crs_msgs::srv::GetAvailableActions>()
{
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crs_msgs, srv, GetAvailableActions)() {
  return &crs_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableActions__handle;
}

#ifdef __cplusplus
}
#endif
