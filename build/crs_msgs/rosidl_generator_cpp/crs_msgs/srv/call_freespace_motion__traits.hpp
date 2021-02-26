// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:srv/CallFreespaceMotion.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__CALL_FREESPACE_MOTION__TRAITS_HPP_
#define CRS_MSGS__SRV__CALL_FREESPACE_MOTION__TRAITS_HPP_

#include "crs_msgs/srv/call_freespace_motion__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_position'
// Member 'goal_position'
#include "sensor_msgs/msg/joint_state__traits.hpp"
// Member 'goal_pose'
#include "geometry_msgs/msg/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::CallFreespaceMotion_Request>()
{
  return "crs_msgs::srv::CallFreespaceMotion_Request";
}

template<>
struct has_fixed_size<crs_msgs::srv::CallFreespaceMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::CallFreespaceMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::CallFreespaceMotion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'output_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::CallFreespaceMotion_Response>()
{
  return "crs_msgs::srv::CallFreespaceMotion_Response";
}

template<>
struct has_fixed_size<crs_msgs::srv::CallFreespaceMotion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::CallFreespaceMotion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::CallFreespaceMotion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::CallFreespaceMotion>()
{
  return "crs_msgs::srv::CallFreespaceMotion";
}

template<>
struct has_fixed_size<crs_msgs::srv::CallFreespaceMotion>
  : std::integral_constant<
    bool,
    has_fixed_size<crs_msgs::srv::CallFreespaceMotion_Request>::value &&
    has_fixed_size<crs_msgs::srv::CallFreespaceMotion_Response>::value
  >
{
};

template<>
struct has_bounded_size<crs_msgs::srv::CallFreespaceMotion>
  : std::integral_constant<
    bool,
    has_bounded_size<crs_msgs::srv::CallFreespaceMotion_Request>::value &&
    has_bounded_size<crs_msgs::srv::CallFreespaceMotion_Response>::value
  >
{
};

template<>
struct is_service<crs_msgs::srv::CallFreespaceMotion>
  : std::true_type
{
};

template<>
struct is_service_request<crs_msgs::srv::CallFreespaceMotion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crs_msgs::srv::CallFreespaceMotion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__SRV__CALL_FREESPACE_MOTION__TRAITS_HPP_
