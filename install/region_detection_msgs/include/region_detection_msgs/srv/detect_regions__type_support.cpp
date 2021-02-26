// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "region_detection_msgs/srv/detect_regions__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace region_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectRegions_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::DetectRegions_Request(_init);
}

void DetectRegions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::DetectRegions_Request *>(message_memory);
  typed_message->~DetectRegions_Request();
}

size_t size_function__DetectRegions_Request__images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectRegions_Request__images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectRegions_Request__images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectRegions_Request__images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectRegions_Request__clouds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectRegions_Request__clouds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectRegions_Request__clouds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectRegions_Request__clouds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::PointCloud2> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectRegions_Request__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectRegions_Request__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectRegions_Request__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectRegions_Request__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectRegions_Request_message_member_array[3] = {
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::DetectRegions_Request, images),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectRegions_Request__images,  // size() function pointer
    get_const_function__DetectRegions_Request__images,  // get_const(index) function pointer
    get_function__DetectRegions_Request__images,  // get(index) function pointer
    resize_function__DetectRegions_Request__images  // resize(index) function pointer
  },
  {
    "clouds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::DetectRegions_Request, clouds),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectRegions_Request__clouds,  // size() function pointer
    get_const_function__DetectRegions_Request__clouds,  // get_const(index) function pointer
    get_function__DetectRegions_Request__clouds,  // get(index) function pointer
    resize_function__DetectRegions_Request__clouds  // resize(index) function pointer
  },
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::DetectRegions_Request, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectRegions_Request__transforms,  // size() function pointer
    get_const_function__DetectRegions_Request__transforms,  // get_const(index) function pointer
    get_function__DetectRegions_Request__transforms,  // get(index) function pointer
    resize_function__DetectRegions_Request__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectRegions_Request_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "DetectRegions_Request",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs::srv::DetectRegions_Request),
  DetectRegions_Request_message_member_array,  // message members
  DetectRegions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectRegions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectRegions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectRegions_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace region_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<region_detection_msgs::srv::DetectRegions_Request>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::DetectRegions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, DetectRegions_Request)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::DetectRegions_Request_message_type_support_handle;
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
// #include "region_detection_msgs/srv/detect_regions__struct.hpp"
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

namespace region_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectRegions_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::DetectRegions_Response(_init);
}

void DetectRegions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::DetectRegions_Response *>(message_memory);
  typed_message->~DetectRegions_Response();
}

size_t size_function__DetectRegions_Response__detected_regions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectRegions_Response__detected_regions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectRegions_Response__detected_regions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectRegions_Response__detected_regions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectRegions_Response_message_member_array[3] = {
  {
    "detected_regions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::DetectRegions_Response, detected_regions),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectRegions_Response__detected_regions,  // size() function pointer
    get_const_function__DetectRegions_Response__detected_regions,  // get_const(index) function pointer
    get_function__DetectRegions_Response__detected_regions,  // get(index) function pointer
    resize_function__DetectRegions_Response__detected_regions  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::DetectRegions_Response, succeeded),  // bytes offset in struct
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
    offsetof(region_detection_msgs::srv::DetectRegions_Response, err_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectRegions_Response_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "DetectRegions_Response",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs::srv::DetectRegions_Response),
  DetectRegions_Response_message_member_array,  // message members
  DetectRegions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectRegions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectRegions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectRegions_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace region_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<region_detection_msgs::srv::DetectRegions_Response>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::DetectRegions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, DetectRegions_Response)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::DetectRegions_Response_message_type_support_handle;
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
// #include "region_detection_msgs/srv/detect_regions__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace region_detection_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DetectRegions_service_members = {
  "region_detection_msgs::srv",  // service namespace
  "DetectRegions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<region_detection_msgs::srv::DetectRegions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DetectRegions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectRegions_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace region_detection_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<region_detection_msgs::srv::DetectRegions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::DetectRegions_service_type_support_handle;
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
        ::region_detection_msgs::srv::DetectRegions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::region_detection_msgs::srv::DetectRegions_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, DetectRegions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<region_detection_msgs::srv::DetectRegions>();
}

#ifdef __cplusplus
}
#endif
