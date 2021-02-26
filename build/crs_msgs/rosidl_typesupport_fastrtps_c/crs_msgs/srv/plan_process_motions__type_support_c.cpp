// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/plan_process_motions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/srv/plan_process_motions__struct.h"
#include "crs_msgs/srv/plan_process_motions__functions.h"
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

#include "crs_msgs/msg/tool_process_path__functions.h"  // process_paths
#include "geometry_msgs/msg/pose__functions.h"  // tool_offset
#include "rosidl_generator_c/string.h"  // tool_link
#include "rosidl_generator_c/string_functions.h"  // tool_link
#include "sensor_msgs/msg/joint_state__functions.h"  // end_position, start_position

// forward declare type support functions
size_t get_serialized_size_crs_msgs__msg__ToolProcessPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_crs_msgs__msg__ToolProcessPath(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ToolProcessPath)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();


using _PlanProcessMotions_Request__ros_msg_type = crs_msgs__srv__PlanProcessMotions_Request;

static bool _PlanProcessMotions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanProcessMotions_Request__ros_msg_type * ros_message = static_cast<const _PlanProcessMotions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_link
  {
    const rosidl_generator_c__String * str = &ros_message->tool_link;
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

  // Field name: start_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_position, cdr))
    {
      return false;
    }
  }

  // Field name: end_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_position, cdr))
    {
      return false;
    }
  }

  // Field name: tool_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tool_offset, cdr))
    {
      return false;
    }
  }

  // Field name: approach_dist
  {
    cdr << ros_message->approach_dist;
  }

  // Field name: retreat_dist
  {
    cdr << ros_message->retreat_dist;
  }

  // Field name: tool_speed
  {
    cdr << ros_message->tool_speed;
  }

  // Field name: target_force
  {
    cdr << ros_message->target_force;
  }

  // Field name: process_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ToolProcessPath
      )()->data);
    size_t size = ros_message->process_paths.size;
    auto array_ptr = ros_message->process_paths.data;
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

static bool _PlanProcessMotions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanProcessMotions_Request__ros_msg_type * ros_message = static_cast<_PlanProcessMotions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_link
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tool_link.data) {
      rosidl_generator_c__String__init(&ros_message->tool_link);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->tool_link,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tool_link'\n");
      return false;
    }
  }

  // Field name: start_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_position))
    {
      return false;
    }
  }

  // Field name: end_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_position))
    {
      return false;
    }
  }

  // Field name: tool_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tool_offset))
    {
      return false;
    }
  }

  // Field name: approach_dist
  {
    cdr >> ros_message->approach_dist;
  }

  // Field name: retreat_dist
  {
    cdr >> ros_message->retreat_dist;
  }

  // Field name: tool_speed
  {
    cdr >> ros_message->tool_speed;
  }

  // Field name: target_force
  {
    cdr >> ros_message->target_force;
  }

  // Field name: process_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ToolProcessPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->process_paths.data) {
      crs_msgs__msg__ToolProcessPath__Sequence__fini(&ros_message->process_paths);
    }
    if (!crs_msgs__msg__ToolProcessPath__Sequence__init(&ros_message->process_paths, size)) {
      return "failed to create array for field 'process_paths'";
    }
    auto array_ptr = ros_message->process_paths.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__PlanProcessMotions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanProcessMotions_Request__ros_msg_type * ros_message = static_cast<const _PlanProcessMotions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tool_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tool_link.size + 1);
  // field.name start_position

  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->start_position), current_alignment);
  // field.name end_position

  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->end_position), current_alignment);
  // field.name tool_offset

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->tool_offset), current_alignment);
  // field.name approach_dist
  {
    size_t item_size = sizeof(ros_message->approach_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name retreat_dist
  {
    size_t item_size = sizeof(ros_message->retreat_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_speed
  {
    size_t item_size = sizeof(ros_message->tool_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_force
  {
    size_t item_size = sizeof(ros_message->target_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name process_paths
  {
    size_t array_size = ros_message->process_paths.size;
    auto array_ptr = ros_message->process_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_crs_msgs__msg__ToolProcessPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanProcessMotions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__PlanProcessMotions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__PlanProcessMotions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tool_link
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: start_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        full_bounded, current_alignment);
    }
  }
  // member: end_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        full_bounded, current_alignment);
    }
  }
  // member: tool_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: approach_dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: retreat_dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tool_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: process_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_crs_msgs__msg__ToolProcessPath(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanProcessMotions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__PlanProcessMotions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanProcessMotions_Request = {
  "crs_msgs::srv",
  "PlanProcessMotions_Request",
  _PlanProcessMotions_Request__cdr_serialize,
  _PlanProcessMotions_Request__cdr_deserialize,
  _PlanProcessMotions_Request__get_serialized_size,
  _PlanProcessMotions_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanProcessMotions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanProcessMotions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, PlanProcessMotions_Request)() {
  return &_PlanProcessMotions_Request__type_support;
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
// #include "crs_msgs/srv/plan_process_motions__struct.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__functions.h"
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

#include "crs_msgs/msg/process_motion_plan__functions.h"  // plans
// already included above
// #include "rosidl_generator_c/string.h"  // err_msg
// already included above
// #include "rosidl_generator_c/string_functions.h"  // err_msg

// forward declare type support functions
size_t get_serialized_size_crs_msgs__msg__ProcessMotionPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_crs_msgs__msg__ProcessMotionPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ProcessMotionPlan)();


using _PlanProcessMotions_Response__ros_msg_type = crs_msgs__srv__PlanProcessMotions_Response;

static bool _PlanProcessMotions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanProcessMotions_Response__ros_msg_type * ros_message = static_cast<const _PlanProcessMotions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ProcessMotionPlan
      )()->data);
    size_t size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
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

static bool _PlanProcessMotions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanProcessMotions_Response__ros_msg_type * ros_message = static_cast<_PlanProcessMotions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ProcessMotionPlan
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->plans.data) {
      crs_msgs__msg__ProcessMotionPlan__Sequence__fini(&ros_message->plans);
    }
    if (!crs_msgs__msg__ProcessMotionPlan__Sequence__init(&ros_message->plans, size)) {
      return "failed to create array for field 'plans'";
    }
    auto array_ptr = ros_message->plans.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__srv__PlanProcessMotions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanProcessMotions_Response__ros_msg_type * ros_message = static_cast<const _PlanProcessMotions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plans
  {
    size_t array_size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_crs_msgs__msg__ProcessMotionPlan(
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

static uint32_t _PlanProcessMotions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__srv__PlanProcessMotions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__srv__PlanProcessMotions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: plans
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_crs_msgs__msg__ProcessMotionPlan(
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

static size_t _PlanProcessMotions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__srv__PlanProcessMotions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanProcessMotions_Response = {
  "crs_msgs::srv",
  "PlanProcessMotions_Response",
  _PlanProcessMotions_Response__cdr_serialize,
  _PlanProcessMotions_Response__cdr_deserialize,
  _PlanProcessMotions_Response__get_serialized_size,
  _PlanProcessMotions_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanProcessMotions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanProcessMotions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, PlanProcessMotions_Response)() {
  return &_PlanProcessMotions_Response__type_support;
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
#include "crs_msgs/srv/plan_process_motions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlanProcessMotions__callbacks = {
  "crs_msgs::srv",
  "PlanProcessMotions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, PlanProcessMotions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, PlanProcessMotions_Response)(),
};

static rosidl_service_type_support_t PlanProcessMotions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlanProcessMotions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, srv, PlanProcessMotions)() {
  return &PlanProcessMotions__handle;
}

#if defined(__cplusplus)
}
#endif
