// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/contact_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ContactResult_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::ContactResult(_init);
}

void ContactResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::ContactResult *>(message_memory);
  typed_message->~ContactResult();
}

size_t size_function__ContactResult__type_id(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__type_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__type_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__link_names(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__link_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__link_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__shape_id(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__shape_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__shape_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__subshape_id(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__subshape_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__subshape_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__nearest_points(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__nearest_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Vector3, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__nearest_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Vector3, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__nearest_points_local(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__nearest_points_local(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Vector3, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__nearest_points_local(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Vector3, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__transform(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Pose, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Pose, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__cc_time(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__cc_time(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__cc_time(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__cc_type(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__cc_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__cc_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__ContactResult__cc_transform(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ContactResult__cc_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Pose, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ContactResult__cc_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Pose, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ContactResult_message_member_array[12] = {
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, type_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__type_id,  // size() function pointer
    get_const_function__ContactResult__type_id,  // get_const(index) function pointer
    get_function__ContactResult__type_id,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, link_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__link_names,  // size() function pointer
    get_const_function__ContactResult__link_names,  // get_const(index) function pointer
    get_function__ContactResult__link_names,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "shape_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, shape_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__shape_id,  // size() function pointer
    get_const_function__ContactResult__shape_id,  // get_const(index) function pointer
    get_function__ContactResult__shape_id,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subshape_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, subshape_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__subshape_id,  // size() function pointer
    get_const_function__ContactResult__subshape_id,  // get_const(index) function pointer
    get_function__ContactResult__subshape_id,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nearest_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, nearest_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__nearest_points,  // size() function pointer
    get_const_function__ContactResult__nearest_points,  // get_const(index) function pointer
    get_function__ContactResult__nearest_points,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nearest_points_local",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, nearest_points_local),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__nearest_points_local,  // size() function pointer
    get_const_function__ContactResult__nearest_points_local,  // get_const(index) function pointer
    get_function__ContactResult__nearest_points_local,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__transform,  // size() function pointer
    get_const_function__ContactResult__transform,  // get_const(index) function pointer
    get_function__ContactResult__transform,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, normal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cc_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, cc_time),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__cc_time,  // size() function pointer
    get_const_function__ContactResult__cc_time,  // get_const(index) function pointer
    get_function__ContactResult__cc_time,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cc_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, cc_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__cc_type,  // size() function pointer
    get_const_function__ContactResult__cc_type,  // get_const(index) function pointer
    get_function__ContactResult__cc_type,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cc_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::ContactResult, cc_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__ContactResult__cc_transform,  // size() function pointer
    get_const_function__ContactResult__cc_transform,  // get_const(index) function pointer
    get_function__ContactResult__cc_transform,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ContactResult_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "ContactResult",  // message name
  12,  // number of fields
  sizeof(tesseract_msgs::msg::ContactResult),
  ContactResult_message_member_array,  // message members
  ContactResult_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ContactResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ContactResult_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::ContactResult>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::ContactResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, ContactResult)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::ContactResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
