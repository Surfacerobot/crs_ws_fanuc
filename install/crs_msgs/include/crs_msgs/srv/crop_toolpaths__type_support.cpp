// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:srv/CropToolpaths.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crs_msgs/srv/crop_toolpaths__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CropToolpaths_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::srv::CropToolpaths_Request(_init);
}

void CropToolpaths_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::srv::CropToolpaths_Request *>(message_memory);
  typed_message->~CropToolpaths_Request();
}

size_t size_function__CropToolpaths_Request__images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropToolpaths_Request__images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__CropToolpaths_Request__images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void resize_function__CropToolpaths_Request__images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CropToolpaths_Request__clouds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropToolpaths_Request__clouds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void * get_function__CropToolpaths_Request__clouds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void resize_function__CropToolpaths_Request__clouds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CropToolpaths_Request__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropToolpaths_Request__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__CropToolpaths_Request__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__CropToolpaths_Request__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CropToolpaths_Request__toolpaths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropToolpaths_Request__toolpaths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return &member[index];
}

void * get_function__CropToolpaths_Request__toolpaths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return &member[index];
}

void resize_function__CropToolpaths_Request__toolpaths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CropToolpaths_Request_message_member_array[4] = {
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Request, images),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropToolpaths_Request__images,  // size() function pointer
    get_const_function__CropToolpaths_Request__images,  // get_const(index) function pointer
    get_function__CropToolpaths_Request__images,  // get(index) function pointer
    resize_function__CropToolpaths_Request__images  // resize(index) function pointer
  },
  {
    "clouds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Request, clouds),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropToolpaths_Request__clouds,  // size() function pointer
    get_const_function__CropToolpaths_Request__clouds,  // get_const(index) function pointer
    get_function__CropToolpaths_Request__clouds,  // get(index) function pointer
    resize_function__CropToolpaths_Request__clouds  // resize(index) function pointer
  },
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Request, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropToolpaths_Request__transforms,  // size() function pointer
    get_const_function__CropToolpaths_Request__transforms,  // get_const(index) function pointer
    get_function__CropToolpaths_Request__transforms,  // get(index) function pointer
    resize_function__CropToolpaths_Request__transforms  // resize(index) function pointer
  },
  {
    "toolpaths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crs_msgs::msg::ToolProcessPath>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Request, toolpaths),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropToolpaths_Request__toolpaths,  // size() function pointer
    get_const_function__CropToolpaths_Request__toolpaths,  // get_const(index) function pointer
    get_function__CropToolpaths_Request__toolpaths,  // get(index) function pointer
    resize_function__CropToolpaths_Request__toolpaths  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CropToolpaths_Request_message_members = {
  "crs_msgs::srv",  // message namespace
  "CropToolpaths_Request",  // message name
  4,  // number of fields
  sizeof(crs_msgs::srv::CropToolpaths_Request),
  CropToolpaths_Request_message_member_array,  // message members
  CropToolpaths_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CropToolpaths_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CropToolpaths_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropToolpaths_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_msgs::srv::CropToolpaths_Request>()
{
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::CropToolpaths_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, CropToolpaths_Request)() {
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::CropToolpaths_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "crs_msgs/srv/crop_toolpaths__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CropToolpaths_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::srv::CropToolpaths_Response(_init);
}

void CropToolpaths_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::srv::CropToolpaths_Response *>(message_memory);
  typed_message->~CropToolpaths_Response();
}

size_t size_function__CropToolpaths_Response__cropped_toolpaths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropToolpaths_Response__cropped_toolpaths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return &member[index];
}

void * get_function__CropToolpaths_Response__cropped_toolpaths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  return &member[index];
}

void resize_function__CropToolpaths_Response__cropped_toolpaths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crs_msgs::msg::ToolProcessPath> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CropToolpaths_Response_message_member_array[3] = {
  {
    "cropped_toolpaths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crs_msgs::msg::ToolProcessPath>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Response, cropped_toolpaths),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropToolpaths_Response__cropped_toolpaths,  // size() function pointer
    get_const_function__CropToolpaths_Response__cropped_toolpaths,  // get_const(index) function pointer
    get_function__CropToolpaths_Response__cropped_toolpaths,  // get(index) function pointer
    resize_function__CropToolpaths_Response__cropped_toolpaths  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Response, succeeded),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "err_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::CropToolpaths_Response, err_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CropToolpaths_Response_message_members = {
  "crs_msgs::srv",  // message namespace
  "CropToolpaths_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs::srv::CropToolpaths_Response),
  CropToolpaths_Response_message_member_array,  // message members
  CropToolpaths_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CropToolpaths_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CropToolpaths_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropToolpaths_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_msgs::srv::CropToolpaths_Response>()
{
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::CropToolpaths_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, CropToolpaths_Response)() {
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::CropToolpaths_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "crs_msgs/srv/crop_toolpaths__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace crs_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CropToolpaths_service_members = {
  "crs_msgs::srv",  // service namespace
  "CropToolpaths",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<crs_msgs::srv::CropToolpaths>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CropToolpaths_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropToolpaths_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<crs_msgs::srv::CropToolpaths>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::CropToolpaths_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::crs_msgs::srv::CropToolpaths_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::crs_msgs::srv::CropToolpaths_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, CropToolpaths)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<crs_msgs::srv::CropToolpaths>();
}

#ifdef __cplusplus
}
#endif
