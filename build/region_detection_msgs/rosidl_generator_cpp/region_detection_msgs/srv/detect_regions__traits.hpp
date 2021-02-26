// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__TRAITS_HPP_
#define REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__TRAITS_HPP_

#include "region_detection_msgs/srv/detect_regions__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::DetectRegions_Request>()
{
  return "region_detection_msgs::srv::DetectRegions_Request";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::DetectRegions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<region_detection_msgs::srv::DetectRegions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<region_detection_msgs::srv::DetectRegions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::DetectRegions_Response>()
{
  return "region_detection_msgs::srv::DetectRegions_Response";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::DetectRegions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<region_detection_msgs::srv::DetectRegions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<region_detection_msgs::srv::DetectRegions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::srv::DetectRegions>()
{
  return "region_detection_msgs::srv::DetectRegions";
}

template<>
struct has_fixed_size<region_detection_msgs::srv::DetectRegions>
  : std::integral_constant<
    bool,
    has_fixed_size<region_detection_msgs::srv::DetectRegions_Request>::value &&
    has_fixed_size<region_detection_msgs::srv::DetectRegions_Response>::value
  >
{
};

template<>
struct has_bounded_size<region_detection_msgs::srv::DetectRegions>
  : std::integral_constant<
    bool,
    has_bounded_size<region_detection_msgs::srv::DetectRegions_Request>::value &&
    has_bounded_size<region_detection_msgs::srv::DetectRegions_Response>::value
  >
{
};

template<>
struct is_service<region_detection_msgs::srv::DetectRegions>
  : std::true_type
{
};

template<>
struct is_service_request<region_detection_msgs::srv::DetectRegions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<region_detection_msgs::srv::DetectRegions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__TRAITS_HPP_
