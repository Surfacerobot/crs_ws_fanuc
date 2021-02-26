// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:srv/ModifyEnvironment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__TRAITS_HPP_
#define TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__TRAITS_HPP_

#include "tesseract_msgs/srv/modify_environment__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ModifyEnvironment_Request>()
{
  return "tesseract_msgs::srv::ModifyEnvironment_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ModifyEnvironment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ModifyEnvironment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::srv::ModifyEnvironment_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ModifyEnvironment_Response>()
{
  return "tesseract_msgs::srv::ModifyEnvironment_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ModifyEnvironment_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ModifyEnvironment_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::srv::ModifyEnvironment_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ModifyEnvironment>()
{
  return "tesseract_msgs::srv::ModifyEnvironment";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ModifyEnvironment>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::srv::ModifyEnvironment_Request>::value &&
    has_fixed_size<tesseract_msgs::srv::ModifyEnvironment_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::srv::ModifyEnvironment>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::srv::ModifyEnvironment_Request>::value &&
    has_bounded_size<tesseract_msgs::srv::ModifyEnvironment_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::srv::ModifyEnvironment>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::srv::ModifyEnvironment_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::srv::ModifyEnvironment_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__TRAITS_HPP_
