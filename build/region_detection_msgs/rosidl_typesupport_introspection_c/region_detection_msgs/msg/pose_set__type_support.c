// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "region_detection_msgs/msg/pose_set__rosidl_typesupport_introspection_c.h"
#include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "region_detection_msgs/msg/pose_set__functions.h"
#include "region_detection_msgs/msg/pose_set__struct.h"


// Include directives for member types
// Member `pose_arrays`
#include "geometry_msgs/msg/pose_array.h"
// Member `pose_arrays`
#include "geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PoseSet__rosidl_typesupport_introspection_c__PoseSet_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__msg__PoseSet__init(message_memory);
}

void PoseSet__rosidl_typesupport_introspection_c__PoseSet_fini_function(void * message_memory)
{
  region_detection_msgs__msg__PoseSet__fini(message_memory);
}

size_t PoseSet__rosidl_typesupport_introspection_c__size_function__PoseArray__pose_arrays(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * PoseSet__rosidl_typesupport_introspection_c__get_const_function__PoseArray__pose_arrays(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PoseSet__rosidl_typesupport_introspection_c__get_function__PoseArray__pose_arrays(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PoseSet__rosidl_typesupport_introspection_c__resize_function__PoseArray__pose_arrays(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_member_array[1] = {
  {
    "pose_arrays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__msg__PoseSet, pose_arrays),  // bytes offset in struct
    NULL,  // default value
    PoseSet__rosidl_typesupport_introspection_c__size_function__PoseArray__pose_arrays,  // size() function pointer
    PoseSet__rosidl_typesupport_introspection_c__get_const_function__PoseArray__pose_arrays,  // get_const(index) function pointer
    PoseSet__rosidl_typesupport_introspection_c__get_function__PoseArray__pose_arrays,  // get(index) function pointer
    PoseSet__rosidl_typesupport_introspection_c__resize_function__PoseArray__pose_arrays  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_members = {
  "region_detection_msgs__msg",  // message namespace
  "PoseSet",  // message name
  1,  // number of fields
  sizeof(region_detection_msgs__msg__PoseSet),
  PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_member_array,  // message members
  PoseSet__rosidl_typesupport_introspection_c__PoseSet_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseSet__rosidl_typesupport_introspection_c__PoseSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_type_support_handle = {
  0,
  &PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, msg, PoseSet)() {
  PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_type_support_handle.typesupport_identifier) {
    PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PoseSet__rosidl_typesupport_introspection_c__PoseSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
