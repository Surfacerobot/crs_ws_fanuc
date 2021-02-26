// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/link__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/link__functions.h"
#include "tesseract_msgs/msg/link__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `inertial`
#include "tesseract_msgs/msg/inertial.h"
// Member `inertial`
#include "tesseract_msgs/msg/inertial__rosidl_typesupport_introspection_c.h"
// Member `visual`
#include "tesseract_msgs/msg/visual_geometry.h"
// Member `visual`
#include "tesseract_msgs/msg/visual_geometry__rosidl_typesupport_introspection_c.h"
// Member `collision`
#include "tesseract_msgs/msg/collision_geometry.h"
// Member `collision`
#include "tesseract_msgs/msg/collision_geometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Link__init(message_memory);
}

void Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Link__fini(message_memory);
}

size_t Link__rosidl_typesupport_introspection_c__size_function__VisualGeometry__visual(
  const void * untyped_member)
{
  const tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (const tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * Link__rosidl_typesupport_introspection_c__get_const_function__VisualGeometry__visual(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (const tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Link__rosidl_typesupport_introspection_c__get_function__VisualGeometry__visual(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Link__rosidl_typesupport_introspection_c__resize_function__VisualGeometry__visual(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__VisualGeometry__Sequence * member =
    (tesseract_msgs__msg__VisualGeometry__Sequence *)(untyped_member);
  tesseract_msgs__msg__VisualGeometry__Sequence__fini(member);
  return tesseract_msgs__msg__VisualGeometry__Sequence__init(member, size);
}

size_t Link__rosidl_typesupport_introspection_c__size_function__CollisionGeometry__collision(
  const void * untyped_member)
{
  const tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (const tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * Link__rosidl_typesupport_introspection_c__get_const_function__CollisionGeometry__collision(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (const tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Link__rosidl_typesupport_introspection_c__get_function__CollisionGeometry__collision(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Link__rosidl_typesupport_introspection_c__resize_function__CollisionGeometry__collision(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__CollisionGeometry__Sequence * member =
    (tesseract_msgs__msg__CollisionGeometry__Sequence *)(untyped_member);
  tesseract_msgs__msg__CollisionGeometry__Sequence__fini(member);
  return tesseract_msgs__msg__CollisionGeometry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Link__rosidl_typesupport_introspection_c__Link_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, inertial),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, visual),  // bytes offset in struct
    NULL,  // default value
    Link__rosidl_typesupport_introspection_c__size_function__VisualGeometry__visual,  // size() function pointer
    Link__rosidl_typesupport_introspection_c__get_const_function__VisualGeometry__visual,  // get_const(index) function pointer
    Link__rosidl_typesupport_introspection_c__get_function__VisualGeometry__visual,  // get(index) function pointer
    Link__rosidl_typesupport_introspection_c__resize_function__VisualGeometry__visual  // resize(index) function pointer
  },
  {
    "collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Link, collision),  // bytes offset in struct
    NULL,  // default value
    Link__rosidl_typesupport_introspection_c__size_function__CollisionGeometry__collision,  // size() function pointer
    Link__rosidl_typesupport_introspection_c__get_const_function__CollisionGeometry__collision,  // get_const(index) function pointer
    Link__rosidl_typesupport_introspection_c__get_function__CollisionGeometry__collision,  // get(index) function pointer
    Link__rosidl_typesupport_introspection_c__resize_function__CollisionGeometry__collision  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Link",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__msg__Link),
  Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)() {
  Link__rosidl_typesupport_introspection_c__Link_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Inertial)();
  Link__rosidl_typesupport_introspection_c__Link_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, VisualGeometry)();
  Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, CollisionGeometry)();
  if (!Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
