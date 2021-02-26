// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_HPP_
#define CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_position'
// Member 'end_position'
#include "sensor_msgs/msg/joint_state__struct.hpp"
// Member 'tool_offset'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'process_paths'
#include "crs_msgs/msg/tool_process_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__PlanProcessMotions_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__PlanProcessMotions_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanProcessMotions_Request_
{
  using Type = PlanProcessMotions_Request_<ContainerAllocator>;

  explicit PlanProcessMotions_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : start_position(_init),
    end_position(_init),
    tool_offset(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_link = "";
      this->approach_dist = 0.0;
      this->retreat_dist = 0.0;
      this->tool_speed = 0.0;
      this->target_force = 0.0;
    }
  }

  explicit PlanProcessMotions_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : tool_link(_alloc),
    start_position(_alloc, _init),
    end_position(_alloc, _init),
    tool_offset(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_link = "";
      this->approach_dist = 0.0;
      this->retreat_dist = 0.0;
      this->tool_speed = 0.0;
      this->target_force = 0.0;
    }
  }

  // field types and members
  using _tool_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tool_link_type tool_link;
  using _start_position_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _start_position_type start_position;
  using _end_position_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _end_position_type end_position;
  using _tool_offset_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _tool_offset_type tool_offset;
  using _approach_dist_type =
    double;
  _approach_dist_type approach_dist;
  using _retreat_dist_type =
    double;
  _retreat_dist_type retreat_dist;
  using _tool_speed_type =
    double;
  _tool_speed_type tool_speed;
  using _target_force_type =
    double;
  _target_force_type target_force;
  using _process_paths_type =
    std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other>;
  _process_paths_type process_paths;

  // setters for named parameter idiom
  Type & set__tool_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tool_link = _arg;
    return *this;
  }
  Type & set__start_position(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->start_position = _arg;
    return *this;
  }
  Type & set__end_position(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->end_position = _arg;
    return *this;
  }
  Type & set__tool_offset(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->tool_offset = _arg;
    return *this;
  }
  Type & set__approach_dist(
    const double & _arg)
  {
    this->approach_dist = _arg;
    return *this;
  }
  Type & set__retreat_dist(
    const double & _arg)
  {
    this->retreat_dist = _arg;
    return *this;
  }
  Type & set__tool_speed(
    const double & _arg)
  {
    this->tool_speed = _arg;
    return *this;
  }
  Type & set__target_force(
    const double & _arg)
  {
    this->target_force = _arg;
    return *this;
  }
  Type & set__process_paths(
    const std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other> & _arg)
  {
    this->process_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__PlanProcessMotions_Request
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__PlanProcessMotions_Request
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanProcessMotions_Request_ & other) const
  {
    if (this->tool_link != other.tool_link) {
      return false;
    }
    if (this->start_position != other.start_position) {
      return false;
    }
    if (this->end_position != other.end_position) {
      return false;
    }
    if (this->tool_offset != other.tool_offset) {
      return false;
    }
    if (this->approach_dist != other.approach_dist) {
      return false;
    }
    if (this->retreat_dist != other.retreat_dist) {
      return false;
    }
    if (this->tool_speed != other.tool_speed) {
      return false;
    }
    if (this->target_force != other.target_force) {
      return false;
    }
    if (this->process_paths != other.process_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanProcessMotions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanProcessMotions_Request_

// alias to use template instance with default allocator
using PlanProcessMotions_Request =
  crs_msgs::srv::PlanProcessMotions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


// Include directives for member types
// Member 'plans'
#include "crs_msgs/msg/process_motion_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__PlanProcessMotions_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__PlanProcessMotions_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanProcessMotions_Response_
{
  using Type = PlanProcessMotions_Response_<ContainerAllocator>;

  explicit PlanProcessMotions_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  explicit PlanProcessMotions_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : err_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  // field types and members
  using _plans_type =
    std::vector<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>::other>;
  _plans_type plans;
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__plans(
    const std::vector<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>::other> & _arg)
  {
    this->plans = _arg;
    return *this;
  }
  Type & set__succeeded(
    const bool & _arg)
  {
    this->succeeded = _arg;
    return *this;
  }
  Type & set__err_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->err_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__PlanProcessMotions_Response
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__PlanProcessMotions_Response
    std::shared_ptr<crs_msgs::srv::PlanProcessMotions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanProcessMotions_Response_ & other) const
  {
    if (this->plans != other.plans) {
      return false;
    }
    if (this->succeeded != other.succeeded) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanProcessMotions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanProcessMotions_Response_

// alias to use template instance with default allocator
using PlanProcessMotions_Response =
  crs_msgs::srv::PlanProcessMotions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct PlanProcessMotions
{
  using Request = crs_msgs::srv::PlanProcessMotions_Request;
  using Response = crs_msgs::srv::PlanProcessMotions_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_HPP_
