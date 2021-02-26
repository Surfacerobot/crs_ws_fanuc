// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_H_
#define TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointDynamics in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointDynamics
{
  double damping;
  double friction;
  bool empty;
} tesseract_msgs__msg__JointDynamics;

// Struct for a sequence of tesseract_msgs__msg__JointDynamics.
typedef struct tesseract_msgs__msg__JointDynamics__Sequence
{
  tesseract_msgs__msg__JointDynamics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointDynamics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_H_
