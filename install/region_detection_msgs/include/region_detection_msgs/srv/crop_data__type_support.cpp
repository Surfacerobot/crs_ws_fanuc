// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from region_detection_msgs:srv/CropData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "region_detection_msgs/srv/crop_data__struct.hpp"
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

void CropData_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::CropData_Request(_init);
}

void CropData_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::CropData_Request *>(message_memory);
  typed_message->~CropData_Request();
}

size_t size_function__CropData_Request__crop_regions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropData_Request__crop_regions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void * get_function__CropData_Request__crop_regions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void resize_function__CropData_Request__crop_regions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CropData_Request__input_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropData_Request__input_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void * get_function__CropData_Request__input_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void resize_function__CropData_Request__input_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CropData_Request_message_member_array[2] = {
  {
    "crop_regions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::CropData_Request, crop_regions),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropData_Request__crop_regions,  // size() function pointer
    get_const_function__CropData_Request__crop_regions,  // get_const(index) function pointer
    get_function__CropData_Request__crop_regions,  // get(index) function pointer
    resize_function__CropData_Request__crop_regions  // resize(index) function pointer
  },
  {
    "input_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::CropData_Request, input_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropData_Request__input_data,  // size() function pointer
    get_const_function__CropData_Request__input_data,  // get_const(index) function pointer
    get_function__CropData_Request__input_data,  // get(index) function pointer
    resize_function__CropData_Request__input_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CropData_Request_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "CropData_Request",  // message name
  2,  // number of fields
  sizeof(region_detection_msgs::srv::CropData_Request),
  CropData_Request_message_member_array,  // message members
  CropData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CropData_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CropData_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropData_Request_message_members,
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
get_message_type_support_handle<region_detection_msgs::srv::CropData_Request>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::CropData_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, CropData_Request)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::CropData_Request_message_type_support_handle;
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
// #include "region_detection_msgs/srv/crop_data__struct.hpp"
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

void CropData_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::CropData_Response(_init);
}

void CropData_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::CropData_Response *>(message_memory);
  typed_message->~CropData_Response();
}

size_t size_function__CropData_Response__cropped_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<region_detection_msgs::msg::PoseSet> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CropData_Response__cropped_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<region_detection_msgs::msg::PoseSet> *>(untyped_member);
  return &member[index];
}

void * get_function__CropData_Response__cropped_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<region_detection_msgs::msg::PoseSet> *>(untyped_member);
  return &member[index];
}

void resize_function__CropData_Response__cropped_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<region_detection_msgs::msg::PoseSet> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CropData_Response_message_member_array[3] = {
  {
    "cropped_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<region_detection_msgs::msg::PoseSet>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::CropData_Response, cropped_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CropData_Response__cropped_data,  // size() function pointer
    get_const_function__CropData_Response__cropped_data,  // get_const(index) function pointer
    get_function__CropData_Response__cropped_data,  // get(index) function pointer
    resize_function__CropData_Response__cropped_data  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::CropData_Response, succeeded),  // bytes offset in struct
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
    offsetof(region_detection_msgs::srv::CropData_Response, err_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CropData_Response_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "CropData_Response",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs::srv::CropData_Response),
  CropData_Response_message_member_array,  // message members
  CropData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CropData_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CropData_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropData_Response_message_members,
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
get_message_type_support_handle<region_detection_msgs::srv::CropData_Response>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::CropData_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, CropData_Response)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::CropData_Response_message_type_support_handle;
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
// #include "region_detection_msgs/srv/crop_data__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CropData_service_members = {
  "region_detection_msgs::srv",  // service namespace
  "CropData",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<region_detection_msgs::srv::CropData>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CropData_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CropData_service_members,
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
get_service_type_support_handle<region_detection_msgs::srv::CropData>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::CropData_service_type_support_handle;
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
        ::region_detection_msgs::srv::CropData_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::region_detection_msgs::srv::CropData_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, CropData)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<region_detection_msgs::srv::CropData>();
}

#ifdef __cplusplus
}
#endif
