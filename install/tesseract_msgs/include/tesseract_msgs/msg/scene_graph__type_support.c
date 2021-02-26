// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/scene_graph__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/scene_graph__functions.h"
#include "tesseract_msgs/msg/scene_graph__struct.h"


// Include directives for member types
// Member `graph_name`
// Member `graph_root`
#include "rosidl_generator_c/string_functions.h"
// Member `link_list`
#include "tesseract_msgs/msg/link.h"
// Member `link_list`
#include "tesseract_msgs/msg/link__rosidl_typesupport_introspection_c.h"
// Member `joint_list`
#include "tesseract_msgs/msg/joint.h"
// Member `joint_list`
#include "tesseract_msgs/msg/joint__rosidl_typesupport_introspection_c.h"
// Member `acm`
#include "tesseract_msgs/msg/allowed_collision_entry.h"
// Member `acm`
#include "tesseract_msgs/msg/allowed_collision_entry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__SceneGraph__init(message_memory);
}

void SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_fini_function(void * message_memory)
{
  tesseract_msgs__msg__SceneGraph__fini(message_memory);
}

size_t SceneGraph__rosidl_typesupport_introspection_c__size_function__Link__link_list(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * SceneGraph__rosidl_typesupport_introspection_c__get_const_function__Link__link_list(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SceneGraph__rosidl_typesupport_introspection_c__get_function__Link__link_list(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SceneGraph__rosidl_typesupport_introspection_c__resize_function__Link__link_list(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  tesseract_msgs__msg__Link__Sequence__fini(member);
  return tesseract_msgs__msg__Link__Sequence__init(member, size);
}

size_t SceneGraph__rosidl_typesupport_introspection_c__size_function__Joint__joint_list(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return member->size;
}

const void * SceneGraph__rosidl_typesupport_introspection_c__get_const_function__Joint__joint_list(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SceneGraph__rosidl_typesupport_introspection_c__get_function__Joint__joint_list(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SceneGraph__rosidl_typesupport_introspection_c__resize_function__Joint__joint_list(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  tesseract_msgs__msg__Joint__Sequence__fini(member);
  return tesseract_msgs__msg__Joint__Sequence__init(member, size);
}

size_t SceneGraph__rosidl_typesupport_introspection_c__size_function__AllowedCollisionEntry__acm(
  const void * untyped_member)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * SceneGraph__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionEntry__acm(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SceneGraph__rosidl_typesupport_introspection_c__get_function__AllowedCollisionEntry__acm(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SceneGraph__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionEntry__acm(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[5] = {
  {
    "graph_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, graph_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "graph_root",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, graph_root),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, link_list),  // bytes offset in struct
    NULL,  // default value
    SceneGraph__rosidl_typesupport_introspection_c__size_function__Link__link_list,  // size() function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_const_function__Link__link_list,  // get_const(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_function__Link__link_list,  // get(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__resize_function__Link__link_list  // resize(index) function pointer
  },
  {
    "joint_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, joint_list),  // bytes offset in struct
    NULL,  // default value
    SceneGraph__rosidl_typesupport_introspection_c__size_function__Joint__joint_list,  // size() function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_const_function__Joint__joint_list,  // get_const(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_function__Joint__joint_list,  // get(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__resize_function__Joint__joint_list  // resize(index) function pointer
  },
  {
    "acm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__SceneGraph, acm),  // bytes offset in struct
    NULL,  // default value
    SceneGraph__rosidl_typesupport_introspection_c__size_function__AllowedCollisionEntry__acm,  // size() function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionEntry__acm,  // get_const(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__get_function__AllowedCollisionEntry__acm,  // get(index) function pointer
    SceneGraph__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionEntry__acm  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "SceneGraph",  // message name
  5,  // number of fields
  sizeof(tesseract_msgs__msg__SceneGraph),
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array,  // message members
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle = {
  0,
  &SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, SceneGraph)() {
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)();
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, AllowedCollisionEntry)();
  if (!SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle.typesupport_identifier) {
    SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SceneGraph__rosidl_typesupport_introspection_c__SceneGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
