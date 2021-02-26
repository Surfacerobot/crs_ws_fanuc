// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/collision_geometry__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/collision_geometry__functions.h"
#include "tesseract_msgs/msg/collision_geometry__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/pose.h"
// Member `origin`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `geometry`
#include "tesseract_msgs/msg/geometry.h"
// Member `geometry`
#include "tesseract_msgs/msg/geometry__rosidl_typesupport_introspection_c.h"
// Member `material`
#include "tesseract_msgs/msg/material.h"
// Member `material`
#include "tesseract_msgs/msg/material__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__CollisionGeometry__init(message_memory);
}

void CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_fini_function(void * message_memory)
{
  tesseract_msgs__msg__CollisionGeometry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__CollisionGeometry, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__CollisionGeometry, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__CollisionGeometry, geometry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "material",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__CollisionGeometry, material),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "CollisionGeometry",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__msg__CollisionGeometry),
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_member_array,  // message members
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_type_support_handle = {
  0,
  &CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, CollisionGeometry)() {
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Geometry)();
  CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Material)();
  if (!CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_type_support_handle.typesupport_identifier) {
    CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CollisionGeometry__rosidl_typesupport_introspection_c__CollisionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
