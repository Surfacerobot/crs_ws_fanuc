// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/TesseractState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_H_
#define TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_generator_c/string.h"
// Member 'commands'
#include "tesseract_msgs/msg/environment_command__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__struct.h"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/multi_dof_joint_state__struct.h"
// Member 'initial_state'
#include "tesseract_msgs/msg/tesseract_init_info__struct.h"

// Struct defined in msg/TesseractState in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__TesseractState
{
  rosidl_generator_c__String id;
  uint64_t revision;
  tesseract_msgs__msg__EnvironmentCommand__Sequence commands;
  sensor_msgs__msg__JointState joint_state;
  sensor_msgs__msg__MultiDOFJointState multi_dof_joint_state;
  tesseract_msgs__msg__TesseractInitInfo initial_state;
} tesseract_msgs__msg__TesseractState;

// Struct for a sequence of tesseract_msgs__msg__TesseractState.
typedef struct tesseract_msgs__msg__TesseractState__Sequence
{
  tesseract_msgs__msg__TesseractState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__TesseractState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_H_
