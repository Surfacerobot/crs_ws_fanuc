// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:srv/GetROISelection.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_ROI_SELECTION__TRAITS_HPP_
#define CRS_MSGS__SRV__GET_ROI_SELECTION__TRAITS_HPP_

#include "crs_msgs/srv/get_roi_selection__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::GetROISelection_Request>()
{
  return "crs_msgs::srv::GetROISelection_Request";
}

template<>
struct has_fixed_size<crs_msgs::srv::GetROISelection_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<crs_msgs::srv::GetROISelection_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<crs_msgs::srv::GetROISelection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::GetROISelection_Response>()
{
  return "crs_msgs::srv::GetROISelection_Response";
}

template<>
struct has_fixed_size<crs_msgs::srv::GetROISelection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::GetROISelection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::GetROISelection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::GetROISelection>()
{
  return "crs_msgs::srv::GetROISelection";
}

template<>
struct has_fixed_size<crs_msgs::srv::GetROISelection>
  : std::integral_constant<
    bool,
    has_fixed_size<crs_msgs::srv::GetROISelection_Request>::value &&
    has_fixed_size<crs_msgs::srv::GetROISelection_Response>::value
  >
{
};

template<>
struct has_bounded_size<crs_msgs::srv::GetROISelection>
  : std::integral_constant<
    bool,
    has_bounded_size<crs_msgs::srv::GetROISelection_Request>::value &&
    has_bounded_size<crs_msgs::srv::GetROISelection_Response>::value
  >
{
};

template<>
struct is_service<crs_msgs::srv::GetROISelection>
  : std::true_type
{
};

template<>
struct is_service_request<crs_msgs::srv::GetROISelection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crs_msgs::srv::GetROISelection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__SRV__GET_ROI_SELECTION__TRAITS_HPP_
