// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from region_detection_msgs:srv/ShowSelectableRegions.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/srv/show_selectable_regions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "region_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "region_detection_msgs/srv/show_selectable_regions__struct.h"
#include "region_detection_msgs/srv/show_selectable_regions__functions.h"
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

#include "geometry_msgs/msg/pose_array__functions.h"  // selectable_regions

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_region_detection_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_region_detection_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseArray(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_region_detection_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray)();


using _ShowSelectableRegions_Request__ros_msg_type = region_detection_msgs__srv__ShowSelectableRegions_Request;

static bool _ShowSelectableRegions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShowSelectableRegions_Request__ros_msg_type * ros_message = static_cast<const _ShowSelectableRegions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selectable_regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    size_t size = ros_message->selectable_regions.size;
    auto array_ptr = ros_message->selectable_regions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: start_selected
  {
    cdr << (ros_message->start_selected ? true : false);
  }

  return true;
}

static bool _ShowSelectableRegions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShowSelectableRegions_Request__ros_msg_type * ros_message = static_cast<_ShowSelectableRegions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selectable_regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->selectable_regions.data) {
      geometry_msgs__msg__PoseArray__Sequence__fini(&ros_message->selectable_regions);
    }
    if (!geometry_msgs__msg__PoseArray__Sequence__init(&ros_message->selectable_regions, size)) {
      return "failed to create array for field 'selectable_regions'";
    }
    auto array_ptr = ros_message->selectable_regions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: start_selected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->start_selected = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t get_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShowSelectableRegions_Request__ros_msg_type * ros_message = static_cast<const _ShowSelectableRegions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name selectable_regions
  {
    size_t array_size = ros_message->selectable_regions.size;
    auto array_ptr = ros_message->selectable_regions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PoseArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name start_selected
  {
    size_t item_size = sizeof(ros_message->start_selected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ShowSelectableRegions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t max_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: selectable_regions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseArray(
        full_bounded, current_alignment);
    }
  }
  // member: start_selected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ShowSelectableRegions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ShowSelectableRegions_Request = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions_Request",
  _ShowSelectableRegions_Request__cdr_serialize,
  _ShowSelectableRegions_Request__cdr_deserialize,
  _ShowSelectableRegions_Request__get_serialized_size,
  _ShowSelectableRegions_Request__max_serialized_size
};

static rosidl_message_type_support_t _ShowSelectableRegions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShowSelectableRegions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, ShowSelectableRegions_Request)() {
  return &_ShowSelectableRegions_Request__type_support;
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
// #include "region_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__struct.h"
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__functions.h"
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


// forward declare type support functions


using _ShowSelectableRegions_Response__ros_msg_type = region_detection_msgs__srv__ShowSelectableRegions_Response;

static bool _ShowSelectableRegions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShowSelectableRegions_Response__ros_msg_type * ros_message = static_cast<const _ShowSelectableRegions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ShowSelectableRegions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShowSelectableRegions_Response__ros_msg_type * ros_message = static_cast<_ShowSelectableRegions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t get_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShowSelectableRegions_Response__ros_msg_type * ros_message = static_cast<const _ShowSelectableRegions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ShowSelectableRegions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t max_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ShowSelectableRegions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_region_detection_msgs__srv__ShowSelectableRegions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ShowSelectableRegions_Response = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions_Response",
  _ShowSelectableRegions_Response__cdr_serialize,
  _ShowSelectableRegions_Response__cdr_deserialize,
  _ShowSelectableRegions_Response__get_serialized_size,
  _ShowSelectableRegions_Response__max_serialized_size
};

static rosidl_message_type_support_t _ShowSelectableRegions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShowSelectableRegions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, ShowSelectableRegions_Response)() {
  return &_ShowSelectableRegions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "region_detection_msgs/srv/show_selectable_regions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ShowSelectableRegions__callbacks = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, ShowSelectableRegions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, ShowSelectableRegions_Response)(),
};

static rosidl_service_type_support_t ShowSelectableRegions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ShowSelectableRegions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, ShowSelectableRegions)() {
  return &ShowSelectableRegions__handle;
}

#if defined(__cplusplus)
}
#endif
