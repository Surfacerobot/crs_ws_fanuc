// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from region_detection_msgs:srv/CropData.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/srv/crop_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "region_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "region_detection_msgs/srv/crop_data__struct.h"
#include "region_detection_msgs/srv/crop_data__functions.h"
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

#include "geometry_msgs/msg/pose_array__functions.h"  // crop_regions, input_data

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


using _CropData_Request__ros_msg_type = region_detection_msgs__srv__CropData_Request;

static bool _CropData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CropData_Request__ros_msg_type * ros_message = static_cast<const _CropData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: crop_regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    size_t size = ros_message->crop_regions.size;
    auto array_ptr = ros_message->crop_regions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: input_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    size_t size = ros_message->input_data.size;
    auto array_ptr = ros_message->input_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _CropData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CropData_Request__ros_msg_type * ros_message = static_cast<_CropData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: crop_regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->crop_regions.data) {
      geometry_msgs__msg__PoseArray__Sequence__fini(&ros_message->crop_regions);
    }
    if (!geometry_msgs__msg__PoseArray__Sequence__init(&ros_message->crop_regions, size)) {
      return "failed to create array for field 'crop_regions'";
    }
    auto array_ptr = ros_message->crop_regions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: input_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_data.data) {
      geometry_msgs__msg__PoseArray__Sequence__fini(&ros_message->input_data);
    }
    if (!geometry_msgs__msg__PoseArray__Sequence__init(&ros_message->input_data, size)) {
      return "failed to create array for field 'input_data'";
    }
    auto array_ptr = ros_message->input_data.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t get_serialized_size_region_detection_msgs__srv__CropData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CropData_Request__ros_msg_type * ros_message = static_cast<const _CropData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name crop_regions
  {
    size_t array_size = ros_message->crop_regions.size;
    auto array_ptr = ros_message->crop_regions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PoseArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name input_data
  {
    size_t array_size = ros_message->input_data.size;
    auto array_ptr = ros_message->input_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__PoseArray(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CropData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_region_detection_msgs__srv__CropData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t max_serialized_size_region_detection_msgs__srv__CropData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: crop_regions
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
  // member: input_data
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

  return current_alignment - initial_alignment;
}

static size_t _CropData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_region_detection_msgs__srv__CropData_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CropData_Request = {
  "region_detection_msgs::srv",
  "CropData_Request",
  _CropData_Request__cdr_serialize,
  _CropData_Request__cdr_deserialize,
  _CropData_Request__get_serialized_size,
  _CropData_Request__max_serialized_size
};

static rosidl_message_type_support_t _CropData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CropData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, CropData_Request)() {
  return &_CropData_Request__type_support;
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
// #include "region_detection_msgs/srv/crop_data__struct.h"
// already included above
// #include "region_detection_msgs/srv/crop_data__functions.h"
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

#include "region_detection_msgs/msg/pose_set__functions.h"  // cropped_data
#include "rosidl_generator_c/string.h"  // err_msg
#include "rosidl_generator_c/string_functions.h"  // err_msg

// forward declare type support functions
size_t get_serialized_size_region_detection_msgs__msg__PoseSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_region_detection_msgs__msg__PoseSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, msg, PoseSet)();


using _CropData_Response__ros_msg_type = region_detection_msgs__srv__CropData_Response;

static bool _CropData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CropData_Response__ros_msg_type * ros_message = static_cast<const _CropData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cropped_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, msg, PoseSet
      )()->data);
    size_t size = ros_message->cropped_data.size;
    auto array_ptr = ros_message->cropped_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: succeeded
  {
    cdr << (ros_message->succeeded ? true : false);
  }

  // Field name: err_msg
  {
    const rosidl_generator_c__String * str = &ros_message->err_msg;
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

static bool _CropData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CropData_Response__ros_msg_type * ros_message = static_cast<_CropData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cropped_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, msg, PoseSet
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cropped_data.data) {
      region_detection_msgs__msg__PoseSet__Sequence__fini(&ros_message->cropped_data);
    }
    if (!region_detection_msgs__msg__PoseSet__Sequence__init(&ros_message->cropped_data, size)) {
      return "failed to create array for field 'cropped_data'";
    }
    auto array_ptr = ros_message->cropped_data.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: succeeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->succeeded = tmp ? true : false;
  }

  // Field name: err_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->err_msg.data) {
      rosidl_generator_c__String__init(&ros_message->err_msg);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->err_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'err_msg'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t get_serialized_size_region_detection_msgs__srv__CropData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CropData_Response__ros_msg_type * ros_message = static_cast<const _CropData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cropped_data
  {
    size_t array_size = ros_message->cropped_data.size;
    auto array_ptr = ros_message->cropped_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_region_detection_msgs__msg__PoseSet(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name succeeded
  {
    size_t item_size = sizeof(ros_message->succeeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->err_msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CropData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_region_detection_msgs__srv__CropData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_region_detection_msgs
size_t max_serialized_size_region_detection_msgs__srv__CropData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cropped_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_region_detection_msgs__msg__PoseSet(
        full_bounded, current_alignment);
    }
  }
  // member: succeeded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_msg
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

static size_t _CropData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_region_detection_msgs__srv__CropData_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CropData_Response = {
  "region_detection_msgs::srv",
  "CropData_Response",
  _CropData_Response__cdr_serialize,
  _CropData_Response__cdr_deserialize,
  _CropData_Response__get_serialized_size,
  _CropData_Response__max_serialized_size
};

static rosidl_message_type_support_t _CropData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CropData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, CropData_Response)() {
  return &_CropData_Response__type_support;
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
#include "region_detection_msgs/srv/crop_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CropData__callbacks = {
  "region_detection_msgs::srv",
  "CropData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, CropData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, CropData_Response)(),
};

static rosidl_service_type_support_t CropData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CropData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, region_detection_msgs, srv, CropData)() {
  return &CropData__handle;
}

#if defined(__cplusplus)
}
#endif
