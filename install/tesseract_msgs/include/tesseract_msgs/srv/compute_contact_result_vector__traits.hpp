// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_
#define TESSERACT_MSGS__SRV__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_

#include "tesseract_msgs/srv/compute_contact_result_vector__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector_Request>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'collision_result'
#include "tesseract_msgs/msg/contact_result_vector__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector_Response>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::ContactResultVector>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::ContactResultVector>::value> {};

template<>
struct is_message<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Request>::value &&
    has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Request>::value &&
    has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::srv::ComputeContactResultVector>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__SRV__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_
