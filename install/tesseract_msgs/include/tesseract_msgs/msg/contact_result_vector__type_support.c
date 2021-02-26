// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/contact_result_vector__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/contact_result_vector__functions.h"
#include "tesseract_msgs/msg/contact_result_vector__struct.h"


// Include directives for member types
// Member `contacts`
#include "tesseract_msgs/msg/contact_result.h"
// Member `contacts`
#include "tesseract_msgs/msg/contact_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__ContactResultVector__init(message_memory);
}

void ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_fini_function(void * message_memory)
{
  tesseract_msgs__msg__ContactResultVector__fini(message_memory);
}

size_t ContactResultVector__rosidl_typesupport_introspection_c__size_function__ContactResult__contacts(
  const void * untyped_member)
{
  const tesseract_msgs__msg__ContactResult__Sequence * member =
    (const tesseract_msgs__msg__ContactResult__Sequence *)(untyped_member);
  return member->size;
}

const void * ContactResultVector__rosidl_typesupport_introspection_c__get_const_function__ContactResult__contacts(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__ContactResult__Sequence * member =
    (const tesseract_msgs__msg__ContactResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ContactResultVector__rosidl_typesupport_introspection_c__get_function__ContactResult__contacts(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__ContactResult__Sequence * member =
    (tesseract_msgs__msg__ContactResult__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ContactResultVector__rosidl_typesupport_introspection_c__resize_function__ContactResult__contacts(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__ContactResult__Sequence * member =
    (tesseract_msgs__msg__ContactResult__Sequence *)(untyped_member);
  tesseract_msgs__msg__ContactResult__Sequence__fini(member);
  return tesseract_msgs__msg__ContactResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_member_array[1] = {
  {
    "contacts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResultVector, contacts),  // bytes offset in struct
    NULL,  // default value
    ContactResultVector__rosidl_typesupport_introspection_c__size_function__ContactResult__contacts,  // size() function pointer
    ContactResultVector__rosidl_typesupport_introspection_c__get_const_function__ContactResult__contacts,  // get_const(index) function pointer
    ContactResultVector__rosidl_typesupport_introspection_c__get_function__ContactResult__contacts,  // get(index) function pointer
    ContactResultVector__rosidl_typesupport_introspection_c__resize_function__ContactResult__contacts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "ContactResultVector",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs__msg__ContactResultVector),
  ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_member_array,  // message members
  ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_type_support_handle = {
  0,
  &ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactResultVector)() {
  ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactResult)();
  if (!ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_type_support_handle.typesupport_identifier) {
    ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ContactResultVector__rosidl_typesupport_introspection_c__ContactResultVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
