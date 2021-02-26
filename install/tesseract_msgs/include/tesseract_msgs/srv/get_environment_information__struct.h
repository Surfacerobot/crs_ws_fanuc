// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_H_
#define TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_HISTORY'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__COMMAND_HISTORY = 0
};

/// Constant 'LINK_LIST'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_LIST = 1
};

/// Constant 'JOINT_LIST'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_LIST = 2
};

/// Constant 'LINK_NAMES'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_NAMES = 4
};

/// Constant 'JOINT_NAMES'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_NAMES = 8
};

/// Constant 'ACTIVE_LINK_NAMES'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ACTIVE_LINK_NAMES = 16
};

/// Constant 'ACTIVE_JOINT_NAMES'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ACTIVE_JOINT_NAMES = 32
};

/// Constant 'LINK_TRANSFORMS'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_TRANSFORMS = 64
};

/// Constant 'JOINT_TRANSFORMS'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_TRANSFORMS = 128
};

/// Constant 'ALLOWED_COLLISION_MATRIX'.
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ALLOWED_COLLISION_MATRIX = 254
};

// Struct defined in srv/GetEnvironmentInformation in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Request
{
  uint8_t flags;
} tesseract_msgs__srv__GetEnvironmentInformation_Request;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentInformation_Request.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'link_names'
// Member 'joint_names'
// Member 'active_link_names'
// Member 'active_joint_names'
#include "rosidl_generator_c/string.h"
// Member 'command_history'
#include "tesseract_msgs/msg/environment_command__struct.h"
// Member 'links'
#include "tesseract_msgs/msg/link__struct.h"
// Member 'joints'
#include "tesseract_msgs/msg/joint__struct.h"
// Member 'link_transforms'
// Member 'joint_transforms'
#include "tesseract_msgs/msg/transform_map__struct.h"

// Struct defined in srv/GetEnvironmentInformation in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Response
{
  bool success;
  rosidl_generator_c__String id;
  uint64_t revision;
  tesseract_msgs__msg__EnvironmentCommand__Sequence command_history;
  tesseract_msgs__msg__Link__Sequence links;
  tesseract_msgs__msg__Joint__Sequence joints;
  rosidl_generator_c__String__Sequence link_names;
  rosidl_generator_c__String__Sequence joint_names;
  rosidl_generator_c__String__Sequence active_link_names;
  rosidl_generator_c__String__Sequence active_joint_names;
  tesseract_msgs__msg__TransformMap link_transforms;
  tesseract_msgs__msg__TransformMap joint_transforms;
} tesseract_msgs__srv__GetEnvironmentInformation_Response;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentInformation_Response.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence
{
  tesseract_msgs__srv__GetEnvironmentInformation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_H_
