// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice
#include "crs_msgs/msg/process_motion_plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crs_msgs/msg/process_motion_plan__struct.h"
#include "crs_msgs/msg/process_motion_plan__functions.h"
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

#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"  // force_controlled_process_motions
#include "trajectory_msgs/msg/joint_trajectory__functions.h"  // end, free_motions, process_motions, start

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();


using _ProcessMotionPlan__ros_msg_type = crs_msgs__msg__ProcessMotionPlan;

static bool _ProcessMotionPlan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProcessMotionPlan__ros_msg_type * ros_message = static_cast<const _ProcessMotionPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start, cdr))
    {
      return false;
    }
  }

  // Field name: process_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    size_t size = ros_message->process_motions.size;
    auto array_ptr = ros_message->process_motions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: force_controlled_process_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory
      )()->data);
    size_t size = ros_message->force_controlled_process_motions.size;
    auto array_ptr = ros_message->force_controlled_process_motions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: free_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    size_t size = ros_message->free_motions.size;
    auto array_ptr = ros_message->free_motions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: end
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ProcessMotionPlan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProcessMotionPlan__ros_msg_type * ros_message = static_cast<_ProcessMotionPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start))
    {
      return false;
    }
  }

  // Field name: process_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->process_motions.data) {
      trajectory_msgs__msg__JointTrajectory__Sequence__fini(&ros_message->process_motions);
    }
    if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&ros_message->process_motions, size)) {
      return "failed to create array for field 'process_motions'";
    }
    auto array_ptr = ros_message->process_motions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: force_controlled_process_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->force_controlled_process_motions.data) {
      cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(&ros_message->force_controlled_process_motions);
    }
    if (!cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(&ros_message->force_controlled_process_motions, size)) {
      return "failed to create array for field 'force_controlled_process_motions'";
    }
    auto array_ptr = ros_message->force_controlled_process_motions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: free_motions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->free_motions.data) {
      trajectory_msgs__msg__JointTrajectory__Sequence__fini(&ros_message->free_motions);
    }
    if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&ros_message->free_motions, size)) {
      return "failed to create array for field 'free_motions'";
    }
    auto array_ptr = ros_message->free_motions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: end
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t get_serialized_size_crs_msgs__msg__ProcessMotionPlan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProcessMotionPlan__ros_msg_type * ros_message = static_cast<const _ProcessMotionPlan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->start), current_alignment);
  // field.name process_motions
  {
    size_t array_size = ros_message->process_motions.size;
    auto array_ptr = ros_message->process_motions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name force_controlled_process_motions
  {
    size_t array_size = ros_message->force_controlled_process_motions.size;
    auto array_ptr = ros_message->force_controlled_process_motions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name free_motions
  {
    size_t array_size = ros_message->free_motions.size;
    auto array_ptr = ros_message->free_motions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name end

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->end), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ProcessMotionPlan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crs_msgs__msg__ProcessMotionPlan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crs_msgs
size_t max_serialized_size_crs_msgs__msg__ProcessMotionPlan(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: process_motions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: force_controlled_process_motions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: free_motions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: end
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ProcessMotionPlan__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_crs_msgs__msg__ProcessMotionPlan(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProcessMotionPlan = {
  "crs_msgs::msg",
  "ProcessMotionPlan",
  _ProcessMotionPlan__cdr_serialize,
  _ProcessMotionPlan__cdr_deserialize,
  _ProcessMotionPlan__get_serialized_size,
  _ProcessMotionPlan__max_serialized_size
};

static rosidl_message_type_support_t _ProcessMotionPlan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProcessMotionPlan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crs_msgs, msg, ProcessMotionPlan)() {
  return &_ProcessMotionPlan__type_support;
}

#if defined(__cplusplus)
}
#endif
