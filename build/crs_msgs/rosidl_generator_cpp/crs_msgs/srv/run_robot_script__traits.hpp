// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:srv/RunRobotScript.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__TRAITS_HPP_
#define CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__TRAITS_HPP_

#include "crs_msgs/srv/run_robot_script__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::RunRobotScript_Request>()
{
  return "crs_msgs::srv::RunRobotScript_Request";
}

template<>
struct has_fixed_size<crs_msgs::srv::RunRobotScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::RunRobotScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::RunRobotScript_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::RunRobotScript_Response>()
{
  return "crs_msgs::srv::RunRobotScript_Response";
}

template<>
struct has_fixed_size<crs_msgs::srv::RunRobotScript_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::srv::RunRobotScript_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::srv::RunRobotScript_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::srv::RunRobotScript>()
{
  return "crs_msgs::srv::RunRobotScript";
}

template<>
struct has_fixed_size<crs_msgs::srv::RunRobotScript>
  : std::integral_constant<
    bool,
    has_fixed_size<crs_msgs::srv::RunRobotScript_Request>::value &&
    has_fixed_size<crs_msgs::srv::RunRobotScript_Response>::value
  >
{
};

template<>
struct has_bounded_size<crs_msgs::srv::RunRobotScript>
  : std::integral_constant<
    bool,
    has_bounded_size<crs_msgs::srv::RunRobotScript_Request>::value &&
    has_bounded_size<crs_msgs::srv::RunRobotScript_Response>::value
  >
{
};

template<>
struct is_service<crs_msgs::srv::RunRobotScript>
  : std::true_type
{
};

template<>
struct is_service_request<crs_msgs::srv::RunRobotScript_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crs_msgs::srv::RunRobotScript_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__TRAITS_HPP_
