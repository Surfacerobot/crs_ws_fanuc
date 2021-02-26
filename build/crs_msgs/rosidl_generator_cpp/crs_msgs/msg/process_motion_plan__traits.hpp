// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__PROCESS_MOTION_PLAN__TRAITS_HPP_
#define CRS_MSGS__MSG__PROCESS_MOTION_PLAN__TRAITS_HPP_

#include "crs_msgs/msg/process_motion_plan__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start'
// Member 'end'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::msg::ProcessMotionPlan>()
{
  return "crs_msgs::msg::ProcessMotionPlan";
}

template<>
struct has_fixed_size<crs_msgs::msg::ProcessMotionPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::msg::ProcessMotionPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::msg::ProcessMotionPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__MSG__PROCESS_MOTION_PLAN__TRAITS_HPP_
