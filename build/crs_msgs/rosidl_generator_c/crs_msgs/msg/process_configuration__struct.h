// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_H_
#define CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'yaml_config'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/ProcessConfiguration in the package crs_msgs.
typedef struct crs_msgs__msg__ProcessConfiguration
{
  rosidl_generator_c__String yaml_config;
} crs_msgs__msg__ProcessConfiguration;

// Struct for a sequence of crs_msgs__msg__ProcessConfiguration.
typedef struct crs_msgs__msg__ProcessConfiguration__Sequence
{
  crs_msgs__msg__ProcessConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__msg__ProcessConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_H_
