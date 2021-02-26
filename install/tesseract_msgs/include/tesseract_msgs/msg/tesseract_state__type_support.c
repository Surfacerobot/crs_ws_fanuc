// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/TesseractState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/tesseract_state__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/tesseract_state__functions.h"
#include "tesseract_msgs/msg/tesseract_state__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_generator_c/string_functions.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command__rosidl_typesupport_introspection_c.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/multi_dof_joint_state.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/multi_dof_joint_state__rosidl_typesupport_introspection_c.h"
// Member `initial_state`
#include "tesseract_msgs/msg/tesseract_init_info.h"
// Member `initial_state`
#include "tesseract_msgs/msg/tesseract_init_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TesseractState__rosidl_typesupport_introspection_c__TesseractState_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__TesseractState__init(message_memory);
}

void TesseractState__rosidl_typesupport_introspection_c__TesseractState_fini_function(void * message_memory)
{
  tesseract_msgs__msg__TesseractState__fini(message_memory);
}

size_t TesseractState__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__commands(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * TesseractState__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__commands(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TesseractState__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__commands(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TesseractState__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__commands(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, commands),  // bytes offset in struct
    NULL,  // default value
    TesseractState__rosidl_typesupport_introspection_c__size_function__EnvironmentCommand__commands,  // size() function pointer
    TesseractState__rosidl_typesupport_introspection_c__get_const_function__EnvironmentCommand__commands,  // get_const(index) function pointer
    TesseractState__rosidl_typesupport_introspection_c__get_function__EnvironmentCommand__commands,  // get(index) function pointer
    TesseractState__rosidl_typesupport_introspection_c__resize_function__EnvironmentCommand__commands  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, multi_dof_joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__TesseractState, initial_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "TesseractState",  // message name
  6,  // number of fields
  sizeof(tesseract_msgs__msg__TesseractState),
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array,  // message members
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_init_function,  // function to initialize message memory (memory has to be allocated)
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_type_support_handle = {
  0,
  &TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, TesseractState)() {
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, MultiDOFJointState)();
  TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, TesseractInitInfo)();
  if (!TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_type_support_handle.typesupport_identifier) {
    TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TesseractState__rosidl_typesupport_introspection_c__TesseractState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
