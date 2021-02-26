// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_H_
#define TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tesseract_state'
#include "tesseract_msgs/msg/tesseract_state__struct.h"
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.h"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/multi_dof_joint_trajectory__struct.h"

// Struct defined in msg/Trajectory in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Trajectory
{
  tesseract_msgs__msg__TesseractState tesseract_state;
  trajectory_msgs__msg__JointTrajectory joint_trajectory;
  trajectory_msgs__msg__MultiDOFJointTrajectory multi_dof_joint_trajectory;
} tesseract_msgs__msg__Trajectory;

// Struct for a sequence of tesseract_msgs__msg__Trajectory.
typedef struct tesseract_msgs__msg__Trajectory__Sequence
{
  tesseract_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_H_
