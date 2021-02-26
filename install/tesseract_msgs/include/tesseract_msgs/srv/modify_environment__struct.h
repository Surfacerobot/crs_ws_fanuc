// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/ModifyEnvironment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__STRUCT_H_
#define TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__STRUCT_H_

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

// Struct defined in srv/ModifyEnvironment in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__ModifyEnvironment_Request
{
  rosidl_generator_c__String id;
  uint64_t revision;
  tesseract_msgs__msg__EnvironmentCommand__Sequence commands;
} tesseract_msgs__srv__ModifyEnvironment_Request;

// Struct for a sequence of tesseract_msgs__srv__ModifyEnvironment_Request.
typedef struct tesseract_msgs__srv__ModifyEnvironment_Request__Sequence
{
  tesseract_msgs__srv__ModifyEnvironment_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__ModifyEnvironment_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ModifyEnvironment in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__ModifyEnvironment_Response
{
  bool success;
  uint64_t revision;
} tesseract_msgs__srv__ModifyEnvironment_Response;

// Struct for a sequence of tesseract_msgs__srv__ModifyEnvironment_Response.
typedef struct tesseract_msgs__srv__ModifyEnvironment_Response__Sequence
{
  tesseract_msgs__srv__ModifyEnvironment_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__ModifyEnvironment_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__STRUCT_H_
