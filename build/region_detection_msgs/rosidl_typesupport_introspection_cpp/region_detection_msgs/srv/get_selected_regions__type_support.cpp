// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from region_detection_msgs:srv/GetSelectedRegions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "region_detection_msgs/srv/get_selected_regions__struct.hpp"
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

void GetSelectedRegions_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::GetSelectedRegions_Request(_init);
}

void GetSelectedRegions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::GetSelectedRegions_Request *>(message_memory);
  typed_message->~GetSelectedRegions_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSelectedRegions_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::GetSelectedRegions_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSelectedRegions_Request_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "GetSelectedRegions_Request",  // message name
  1,  // number of fields
  sizeof(region_detection_msgs::srv::GetSelectedRegions_Request),
  GetSelectedRegions_Request_message_member_array,  // message members
  GetSelectedRegions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSelectedRegions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSelectedRegions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelectedRegions_Request_message_members,
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
get_message_type_support_handle<region_detection_msgs::srv::GetSelectedRegions_Request>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::GetSelectedRegions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, GetSelectedRegions_Request)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::GetSelectedRegions_Request_message_type_support_handle;
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
// #include "region_detection_msgs/srv/get_selected_regions__struct.hpp"
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

void GetSelectedRegions_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) region_detection_msgs::srv::GetSelectedRegions_Response(_init);
}

void GetSelectedRegions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<region_detection_msgs::srv::GetSelectedRegions_Response *>(message_memory);
  typed_message->~GetSelectedRegions_Response();
}

size_t size_function__GetSelectedRegions_Response__selected_regions_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSelectedRegions_Response__selected_regions_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSelectedRegions_Response__selected_regions_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__GetSelectedRegions_Response__selected_regions_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSelectedRegions_Response_message_member_array[1] = {
  {
    "selected_regions_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs::srv::GetSelectedRegions_Response, selected_regions_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSelectedRegions_Response__selected_regions_indices,  // size() function pointer
    get_const_function__GetSelectedRegions_Response__selected_regions_indices,  // get_const(index) function pointer
    get_function__GetSelectedRegions_Response__selected_regions_indices,  // get(index) function pointer
    resize_function__GetSelectedRegions_Response__selected_regions_indices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSelectedRegions_Response_message_members = {
  "region_detection_msgs::srv",  // message namespace
  "GetSelectedRegions_Response",  // message name
  1,  // number of fields
  sizeof(region_detection_msgs::srv::GetSelectedRegions_Response),
  GetSelectedRegions_Response_message_member_array,  // message members
  GetSelectedRegions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSelectedRegions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSelectedRegions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelectedRegions_Response_message_members,
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
get_message_type_support_handle<region_detection_msgs::srv::GetSelectedRegions_Response>()
{
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::GetSelectedRegions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, GetSelectedRegions_Response)() {
  return &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::GetSelectedRegions_Response_message_type_support_handle;
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
// #include "region_detection_msgs/srv/get_selected_regions__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetSelectedRegions_service_members = {
  "region_detection_msgs::srv",  // service namespace
  "GetSelectedRegions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<region_detection_msgs::srv::GetSelectedRegions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetSelectedRegions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelectedRegions_service_members,
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
get_service_type_support_handle<region_detection_msgs::srv::GetSelectedRegions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::region_detection_msgs::srv::rosidl_typesupport_introspection_cpp::GetSelectedRegions_service_type_support_handle;
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
        ::region_detection_msgs::srv::GetSelectedRegions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::region_detection_msgs::srv::GetSelectedRegions_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, region_detection_msgs, srv, GetSelectedRegions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<region_detection_msgs::srv::GetSelectedRegions>();
}

#ifdef __cplusplus
}
#endif
