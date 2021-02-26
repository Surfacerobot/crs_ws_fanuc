// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/msg/process_motion_plan__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/msg/process_motion_plan__functions.h"
#include "crs_msgs/msg/process_motion_plan__struct.h"


// Include directives for member types
// Member `start`
// Member `process_motions`
// Member `free_motions`
// Member `end`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `start`
// Member `process_motions`
// Member `free_motions`
// Member `end`
#include "trajectory_msgs/msg/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `force_controlled_process_motions`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory.h"
// Member `force_controlled_process_motions`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__msg__ProcessMotionPlan__init(message_memory);
}

void ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_fini_function(void * message_memory)
{
  crs_msgs__msg__ProcessMotionPlan__fini(message_memory);
}

size_t ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__JointTrajectory__process_motions(
  const void * untyped_member)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__process_motions(
  const void * untyped_member, size_t index)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__JointTrajectory__process_motions(
  void * untyped_member, size_t index)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__process_motions(
  void * untyped_member, size_t size)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(member);
  return trajectory_msgs__msg__JointTrajectory__Sequence__init(member, size);
}

size_t ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__force_controlled_process_motions(
  const void * untyped_member)
{
  const cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * member =
    (const cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__force_controlled_process_motions(
  const void * untyped_member, size_t index)
{
  const cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * member =
    (const cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__force_controlled_process_motions(
  void * untyped_member, size_t index)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * member =
    (cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__force_controlled_process_motions(
  void * untyped_member, size_t size)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * member =
    (cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(member);
  return cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(member, size);
}

size_t ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__JointTrajectory__free_motions(
  const void * untyped_member)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__free_motions(
  const void * untyped_member, size_t index)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__JointTrajectory__free_motions(
  void * untyped_member, size_t index)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__free_motions(
  void * untyped_member, size_t size)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(member);
  return trajectory_msgs__msg__JointTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[5] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessMotionPlan, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_motions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessMotionPlan, process_motions),  // bytes offset in struct
    NULL,  // default value
    ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__JointTrajectory__process_motions,  // size() function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__process_motions,  // get_const(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__JointTrajectory__process_motions,  // get(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__process_motions  // resize(index) function pointer
  },
  {
    "force_controlled_process_motions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessMotionPlan, force_controlled_process_motions),  // bytes offset in struct
    NULL,  // default value
    ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__force_controlled_process_motions,  // size() function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__force_controlled_process_motions,  // get_const(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__force_controlled_process_motions,  // get(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__force_controlled_process_motions  // resize(index) function pointer
  },
  {
    "free_motions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessMotionPlan, free_motions),  // bytes offset in struct
    NULL,  // default value
    ProcessMotionPlan__rosidl_typesupport_introspection_c__size_function__JointTrajectory__free_motions,  // size() function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__free_motions,  // get_const(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__get_function__JointTrajectory__free_motions,  // get(index) function pointer
    ProcessMotionPlan__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__free_motions  // resize(index) function pointer
  },
  {
    "end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessMotionPlan, end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_members = {
  "crs_msgs__msg",  // message namespace
  "ProcessMotionPlan",  // message name
  5,  // number of fields
  sizeof(crs_msgs__msg__ProcessMotionPlan),
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array,  // message members
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_type_support_handle = {
  0,
  &ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ProcessMotionPlan)() {
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectory)();
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_type_support_handle.typesupport_identifier) {
    ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProcessMotionPlan__rosidl_typesupport_introspection_c__ProcessMotionPlan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
