// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TRAJECTORY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__TRAJECTORY__TRAITS_HPP_

#include "tesseract_msgs/msg/trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tesseract_state'
#include "tesseract_msgs/msg/tesseract_state__traits.hpp"
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/multi_dof_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::Trajectory>()
{
  return "tesseract_msgs::msg::Trajectory";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Trajectory>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::TesseractState>::value && has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value && has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Trajectory>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::TesseractState>::value && has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value && has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct is_message<tesseract_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__TRAJECTORY__TRAITS_HPP_
