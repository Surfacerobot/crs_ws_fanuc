// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__TRAITS_HPP_
#define CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__TRAITS_HPP_

#include "crs_msgs/srv/plan_process_motions__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_position'
// Member 'end_position'
#include "sensor_msgs/msg/joint_state__traits.hpp"
// Member 'tool_offset'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::PlanProcessMotions_Request>()
{
  return "crs_msgs::srv::PlanProcessMotions_Request";
}

template<>
struct has_fixed_size<crs_msgs::srv::PlanProcessMotions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::PlanProcessMotions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::PlanProcessMotions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::PlanProcessMotions_Response>()
{
  return "crs_msgs::srv::PlanProcessMotions_Response";
}

template<>
struct has_fixed_size<crs_msgs::srv::PlanProcessMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::PlanProcessMotions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::PlanProcessMotions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::PlanProcessMotions>()
{
  return "crs_msgs::srv::PlanProcessMotions";
}

template<>
struct has_fixed_size<crs_msgs::srv::PlanProcessMotions>
  : std::integral_constant<
    bool,
    has_fixed_size<crs_msgs::srv::PlanProcessMotions_Request>::value &&
    has_fixed_size<crs_msgs::srv::PlanProcessMotions_Response>::value
  >
{
};

template<>
struct has_bounded_size<crs_msgs::srv::PlanProcessMotions>
  : std::integral_constant<
    bool,
    has_bounded_size<crs_msgs::srv::PlanProcessMotions_Request>::value &&
    has_bounded_size<crs_msgs::srv::PlanProcessMotions_Response>::value
  >
{
};

template<>
struct is_service<crs_msgs::srv::PlanProcessMotions>
  : std::true_type
{
};

template<>
struct is_service_request<crs_msgs::srv::PlanProcessMotions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crs_msgs::srv::PlanProcessMotions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__TRAITS_HPP_
