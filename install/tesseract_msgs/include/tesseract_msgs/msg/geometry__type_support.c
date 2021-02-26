// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/geometry__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/geometry__functions.h"
#include "tesseract_msgs/msg/geometry__struct.h"


// Include directives for member types
// Member `mesh`
#include "tesseract_msgs/msg/mesh.h"
// Member `mesh`
#include "tesseract_msgs/msg/mesh__rosidl_typesupport_introspection_c.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Geometry__rosidl_typesupport_introspection_c__Geometry_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Geometry__init(message_memory);
}

void Geometry__rosidl_typesupport_introspection_c__Geometry_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Geometry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[8] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sphere_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, sphere_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cylinder_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, cylinder_dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cone_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, cone_dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, box_dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_coeff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, plane_coeff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mesh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, mesh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octomap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Geometry, octomap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Geometry__rosidl_typesupport_introspection_c__Geometry_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Geometry",  // message name
  8,  // number of fields
  sizeof(tesseract_msgs__msg__Geometry),
  Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array,  // message members
  Geometry__rosidl_typesupport_introspection_c__Geometry_init_function,  // function to initialize message memory (memory has to be allocated)
  Geometry__rosidl_typesupport_introspection_c__Geometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle = {
  0,
  &Geometry__rosidl_typesupport_introspection_c__Geometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Geometry)() {
  Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Mesh)();
  Geometry__rosidl_typesupport_introspection_c__Geometry_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_msgs, msg, Octomap)();
  if (!Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle.typesupport_identifier) {
    Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Geometry__rosidl_typesupport_introspection_c__Geometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
