// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/scene_graph__struct.hpp"
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

void SceneGraph_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::SceneGraph(_init);
}

void SceneGraph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::SceneGraph *>(message_memory);
  typed_message->~SceneGraph();
}

size_t size_function__SceneGraph__link_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneGraph__link_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneGraph__link_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void resize_function__SceneGraph__link_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::Link> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneGraph__joint_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneGraph__joint_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneGraph__joint_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  return &member[index];
}

void resize_function__SceneGraph__joint_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::Joint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SceneGraph__acm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SceneGraph__acm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__SceneGraph__acm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void resize_function__SceneGraph__acm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tesseract_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SceneGraph_message_member_array[5] = {
  {
    "graph_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::SceneGraph, graph_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "graph_root",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::SceneGraph, graph_root),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Link>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::SceneGraph, link_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneGraph__link_list,  // size() function pointer
    get_const_function__SceneGraph__link_list,  // get_const(index) function pointer
    get_function__SceneGraph__link_list,  // get(index) function pointer
    resize_function__SceneGraph__link_list  // resize(index) function pointer
  },
  {
    "joint_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Joint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::SceneGraph, joint_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneGraph__joint_list,  // size() function pointer
    get_const_function__SceneGraph__joint_list,  // get_const(index) function pointer
    get_function__SceneGraph__joint_list,  // get(index) function pointer
    resize_function__SceneGraph__joint_list  // resize(index) function pointer
  },
  {
    "acm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::AllowedCollisionEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::SceneGraph, acm),  // bytes offset in struct
    nullptr,  // default value
    size_function__SceneGraph__acm,  // size() function pointer
    get_const_function__SceneGraph__acm,  // get_const(index) function pointer
    get_function__SceneGraph__acm,  // get(index) function pointer
    resize_function__SceneGraph__acm  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SceneGraph_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "SceneGraph",  // message name
  5,  // number of fields
  sizeof(tesseract_msgs::msg::SceneGraph),
  SceneGraph_message_member_array,  // message members
  SceneGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  SceneGraph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SceneGraph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SceneGraph_message_members,
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
get_message_type_support_handle<tesseract_msgs::msg::SceneGraph>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::SceneGraph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, SceneGraph)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::SceneGraph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
