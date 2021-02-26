// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:srv/GetAvailableActions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crs_msgs/srv/get_available_actions__struct.hpp"
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

void GetAvailableActions_Request_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::srv::GetAvailableActions_Request(_init);
}

void GetAvailableActions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::srv::GetAvailableActions_Request *>(message_memory);
  typed_message->~GetAvailableActions_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableActions_Request_message_member_array[1] = {
  {
    "search_pattern",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::GetAvailableActions_Request, search_pattern),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableActions_Request_message_members = {
  "crs_msgs::srv",  // message namespace
  "GetAvailableActions_Request",  // message name
  1,  // number of fields
  sizeof(crs_msgs::srv::GetAvailableActions_Request),
  GetAvailableActions_Request_message_member_array,  // message members
  GetAvailableActions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableActions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAvailableActions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableActions_Request_message_members,
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
get_message_type_support_handle<crs_msgs::srv::GetAvailableActions_Request>()
{
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableActions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, GetAvailableActions_Request)() {
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableActions_Request_message_type_support_handle;
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
// #include "crs_msgs/srv/get_available_actions__struct.hpp"
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

void GetAvailableActions_Response_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::srv::GetAvailableActions_Response(_init);
}

void GetAvailableActions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::srv::GetAvailableActions_Response *>(message_memory);
  typed_message->~GetAvailableActions_Response();
}

size_t size_function__GetAvailableActions_Response__action_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAvailableActions_Response__action_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAvailableActions_Response__action_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__GetAvailableActions_Response__action_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAvailableActions_Response_message_member_array[3] = {
  {
    "action_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::GetAvailableActions_Response, action_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAvailableActions_Response__action_ids,  // size() function pointer
    get_const_function__GetAvailableActions_Response__action_ids,  // get_const(index) function pointer
    get_function__GetAvailableActions_Response__action_ids,  // get(index) function pointer
    resize_function__GetAvailableActions_Response__action_ids  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::srv::GetAvailableActions_Response, succeeded),  // bytes offset in struct
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
    offsetof(crs_msgs::srv::GetAvailableActions_Response, err_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAvailableActions_Response_message_members = {
  "crs_msgs::srv",  // message namespace
  "GetAvailableActions_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs::srv::GetAvailableActions_Response),
  GetAvailableActions_Response_message_member_array,  // message members
  GetAvailableActions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAvailableActions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAvailableActions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableActions_Response_message_members,
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
get_message_type_support_handle<crs_msgs::srv::GetAvailableActions_Response>()
{
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableActions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, GetAvailableActions_Response)() {
  return &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableActions_Response_message_type_support_handle;
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
// #include "crs_msgs/srv/get_available_actions__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetAvailableActions_service_members = {
  "crs_msgs::srv",  // service namespace
  "GetAvailableActions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<crs_msgs::srv::GetAvailableActions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetAvailableActions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAvailableActions_service_members,
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
get_service_type_support_handle<crs_msgs::srv::GetAvailableActions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::crs_msgs::srv::rosidl_typesupport_introspection_cpp::GetAvailableActions_service_type_support_handle;
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
        ::crs_msgs::srv::GetAvailableActions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::crs_msgs::srv::GetAvailableActions_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, srv, GetAvailableActions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<crs_msgs::srv::GetAvailableActions>();
}

#ifdef __cplusplus
}
#endif
