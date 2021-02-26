// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/msg/process_configuration__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/msg/process_configuration__functions.h"
#include "crs_msgs/msg/process_configuration__struct.h"


// Include directives for member types
// Member `yaml_config`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__msg__ProcessConfiguration__init(message_memory);
}

void ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_fini_function(void * message_memory)
{
  crs_msgs__msg__ProcessConfiguration__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_member_array[1] = {
  {
    "yaml_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ProcessConfiguration, yaml_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_members = {
  "crs_msgs__msg",  // message namespace
  "ProcessConfiguration",  // message name
  1,  // number of fields
  sizeof(crs_msgs__msg__ProcessConfiguration),
  ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_member_array,  // message members
  ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_type_support_handle = {
  0,
  &ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ProcessConfiguration)() {
  if (!ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_type_support_handle.typesupport_identifier) {
    ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProcessConfiguration__rosidl_typesupport_introspection_c__ProcessConfiguration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
