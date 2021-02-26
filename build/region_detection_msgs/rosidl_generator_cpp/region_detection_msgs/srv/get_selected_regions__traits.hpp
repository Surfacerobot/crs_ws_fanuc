// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from region_detection_msgs:srv/GetSelectedRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__TRAITS_HPP_
#define REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__TRAITS_HPP_

#include "region_detection_msgs/srv/get_selected_regions__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::GetSelectedRegions_Request>()
{
  return "region_detection_msgs::srv::GetSelectedRegions_Request";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::GetSelectedRegions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<region_detection_msgs::srv::GetSelectedRegions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<region_detection_msgs::srv::GetSelectedRegions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::GetSelectedRegions_Response>()
{
  return "region_detection_msgs::srv::GetSelectedRegions_Response";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::GetSelectedRegions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<region_detection_msgs::srv::GetSelectedRegions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<region_detection_msgs::srv::GetSelectedRegions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::GetSelectedRegions>()
{
  return "region_detection_msgs::srv::GetSelectedRegions";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::GetSelectedRegions>
  : std::integral_constant<
    bool,
    has_fixed_size<region_detection_msgs::srv::GetSelectedRegions_Request>::value &&
    has_fixed_size<region_detection_msgs::srv::GetSelectedRegions_Response>::value
  >
{
};

template<>
struct has_bounded_size<region_detection_msgs::srv::GetSelectedRegions>
  : std::integral_constant<
    bool,
    has_bounded_size<region_detection_msgs::srv::GetSelectedRegions_Request>::value &&
    has_bounded_size<region_detection_msgs::srv::GetSelectedRegions_Response>::value
  >
{
};

template<>
struct is_service<region_detection_msgs::srv::GetSelectedRegions>
  : std::true_type
{
};

template<>
struct is_service_request<region_detection_msgs::srv::GetSelectedRegions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<region_detection_msgs::srv::GetSelectedRegions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__TRAITS_HPP_
