// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_H_
#define CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'process_motions'
// Member 'free_motions'
// Member 'end'
#include "trajectory_msgs/msg/joint_trajectory__struct.h"
// Member 'force_controlled_process_motions'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.h"

// Struct defined in msg/ProcessMotionPlan in the package crs_msgs.
typedef struct crs_msgs__msg__ProcessMotionPlan
{
  trajectory_msgs__msg__JointTrajectory start;
  trajectory_msgs__msg__JointTrajectory__Sequence process_motions;
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence force_controlled_process_motions;
  trajectory_msgs__msg__JointTrajectory__Sequence free_motions;
  trajectory_msgs__msg__JointTrajectory end;
} crs_msgs__msg__ProcessMotionPlan;

// Struct for a sequence of crs_msgs__msg__ProcessMotionPlan.
typedef struct crs_msgs__msg__ProcessMotionPlan__Sequence
{
  crs_msgs__msg__ProcessMotionPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__msg__ProcessMotionPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_H_
