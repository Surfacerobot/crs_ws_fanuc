// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/joint_dynamics__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/joint_dynamics__functions.h"
#include "tesseract_msgs/msg/joint_dynamics__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__JointDynamics__init(message_memory);
}

void JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_fini_function(void * message_memory)
{
  tesseract_msgs__msg__JointDynamics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_member_array[3] = {
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointDynamics, damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "friction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointDynamics, friction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "empty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointDynamics, empty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "JointDynamics",  // message name
  3,  // number of fields
  sizeof(tesseract_msgs__msg__JointDynamics),
  JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_member_array,  // message members
  JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_init_function,  // function to initialize message memory (memory has to be allocated)
  JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_type_support_handle = {
  0,
  &JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointDynamics)() {
  if (!JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_type_support_handle.typesupport_identifier) {
    JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointDynamics__rosidl_typesupport_introspection_c__JointDynamics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
