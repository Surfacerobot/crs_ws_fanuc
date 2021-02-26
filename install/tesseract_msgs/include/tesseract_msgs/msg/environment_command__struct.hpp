// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/link__struct.hpp"
// Member 'add_joint'
// Member 'move_link_joint'
#include "tesseract_msgs/msg/joint__struct.hpp"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'add_allowed_collision'
// Member 'remove_allowed_collision'
#include "tesseract_msgs/msg/allowed_collision_entry__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__EnvironmentCommand __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__EnvironmentCommand __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvironmentCommand_
{
  using Type = EnvironmentCommand_<ContainerAllocator>;

  explicit EnvironmentCommand_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : add_link(_init),
    add_joint(_init),
    move_link_joint(_init),
    change_link_origin_pose(_init),
    change_joint_origin_pose(_init),
    add_allowed_collision(_init),
    remove_allowed_collision(_init),
    joint_state(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->move_joint_name = "";
      this->move_joint_parent_link = "";
      this->remove_link = "";
      this->remove_joint = "";
      this->change_link_origin_name = "";
      this->change_joint_origin_name = "";
      this->change_link_collision_enabled_name = "";
      this->change_link_collision_enabled_value = false;
      this->change_link_visibility_name = "";
      this->change_link_visibility_value = false;
      this->remove_allowed_collision_link = "";
    }
  }

  explicit EnvironmentCommand_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : add_link(_alloc, _init),
    add_joint(_alloc, _init),
    move_link_joint(_alloc, _init),
    move_joint_name(_alloc),
    move_joint_parent_link(_alloc),
    remove_link(_alloc),
    remove_joint(_alloc),
    change_link_origin_name(_alloc),
    change_link_origin_pose(_alloc, _init),
    change_joint_origin_name(_alloc),
    change_joint_origin_pose(_alloc, _init),
    change_link_collision_enabled_name(_alloc),
    change_link_visibility_name(_alloc),
    add_allowed_collision(_alloc, _init),
    remove_allowed_collision(_alloc, _init),
    remove_allowed_collision_link(_alloc),
    joint_state(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->move_joint_name = "";
      this->move_joint_parent_link = "";
      this->remove_link = "";
      this->remove_joint = "";
      this->change_link_origin_name = "";
      this->change_joint_origin_name = "";
      this->change_link_collision_enabled_name = "";
      this->change_link_collision_enabled_value = false;
      this->change_link_visibility_name = "";
      this->change_link_visibility_value = false;
      this->remove_allowed_collision_link = "";
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _add_link_type =
    tesseract_msgs::msg::Link_<ContainerAllocator>;
  _add_link_type add_link;
  using _add_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _add_joint_type add_joint;
  using _move_link_joint_type =
    tesseract_msgs::msg::Joint_<ContainerAllocator>;
  _move_link_joint_type move_link_joint;
  using _move_joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _move_joint_name_type move_joint_name;
  using _move_joint_parent_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _move_joint_parent_link_type move_joint_parent_link;
  using _remove_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _remove_link_type remove_link;
  using _remove_joint_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _remove_joint_type remove_joint;
  using _change_link_origin_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _change_link_origin_name_type change_link_origin_name;
  using _change_link_origin_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _change_link_origin_pose_type change_link_origin_pose;
  using _change_joint_origin_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _change_joint_origin_name_type change_joint_origin_name;
  using _change_joint_origin_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _change_joint_origin_pose_type change_joint_origin_pose;
  using _change_link_collision_enabled_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _change_link_collision_enabled_name_type change_link_collision_enabled_name;
  using _change_link_collision_enabled_value_type =
    bool;
  _change_link_collision_enabled_value_type change_link_collision_enabled_value;
  using _change_link_visibility_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _change_link_visibility_name_type change_link_visibility_name;
  using _change_link_visibility_value_type =
    bool;
  _change_link_visibility_value_type change_link_visibility_value;
  using _add_allowed_collision_type =
    tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>;
  _add_allowed_collision_type add_allowed_collision;
  using _remove_allowed_collision_type =
    tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>;
  _remove_allowed_collision_type remove_allowed_collision;
  using _remove_allowed_collision_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _remove_allowed_collision_link_type remove_allowed_collision_link;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__add_link(
    const tesseract_msgs::msg::Link_<ContainerAllocator> & _arg)
  {
    this->add_link = _arg;
    return *this;
  }
  Type & set__add_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->add_joint = _arg;
    return *this;
  }
  Type & set__move_link_joint(
    const tesseract_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->move_link_joint = _arg;
    return *this;
  }
  Type & set__move_joint_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->move_joint_name = _arg;
    return *this;
  }
  Type & set__move_joint_parent_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->move_joint_parent_link = _arg;
    return *this;
  }
  Type & set__remove_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->remove_link = _arg;
    return *this;
  }
  Type & set__remove_joint(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->remove_joint = _arg;
    return *this;
  }
  Type & set__change_link_origin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->change_link_origin_name = _arg;
    return *this;
  }
  Type & set__change_link_origin_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->change_link_origin_pose = _arg;
    return *this;
  }
  Type & set__change_joint_origin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->change_joint_origin_name = _arg;
    return *this;
  }
  Type & set__change_joint_origin_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->change_joint_origin_pose = _arg;
    return *this;
  }
  Type & set__change_link_collision_enabled_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->change_link_collision_enabled_name = _arg;
    return *this;
  }
  Type & set__change_link_collision_enabled_value(
    const bool & _arg)
  {
    this->change_link_collision_enabled_value = _arg;
    return *this;
  }
  Type & set__change_link_visibility_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->change_link_visibility_name = _arg;
    return *this;
  }
  Type & set__change_link_visibility_value(
    const bool & _arg)
  {
    this->change_link_visibility_value = _arg;
    return *this;
  }
  Type & set__add_allowed_collision(
    const tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> & _arg)
  {
    this->add_allowed_collision = _arg;
    return *this;
  }
  Type & set__remove_allowed_collision(
    const tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> & _arg)
  {
    this->remove_allowed_collision = _arg;
    return *this;
  }
  Type & set__remove_allowed_collision_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->remove_allowed_collision_link = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    0u;
  static constexpr uint8_t MOVE_LINK =
    1u;
  static constexpr uint8_t MOVE_JOINT =
    2u;
  static constexpr uint8_t REMOVE_LINK =
    3u;
  static constexpr uint8_t REMOVE_JOINT =
    4u;
  static constexpr uint8_t CHANGE_LINK_ORIGIN =
    5u;
  static constexpr uint8_t CHANGE_JOINT_ORIGIN =
    6u;
  static constexpr uint8_t CHANGE_LINK_COLLISION_ENABLED =
    7u;
  static constexpr uint8_t CHANGE_LINK_VISIBILITY =
    8u;
  static constexpr uint8_t ADD_ALLOWED_COLLISION =
    9u;
  static constexpr uint8_t REMOVE_ALLOWED_COLLISION =
    10u;
  static constexpr uint8_t REMOVE_ALLOWED_COLLISION_LINK =
    11u;
  static constexpr uint8_t UPDATE_JOINT_STATE =
    12u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__EnvironmentCommand
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__EnvironmentCommand
    std::shared_ptr<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvironmentCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->add_link != other.add_link) {
      return false;
    }
    if (this->add_joint != other.add_joint) {
      return false;
    }
    if (this->move_link_joint != other.move_link_joint) {
      return false;
    }
    if (this->move_joint_name != other.move_joint_name) {
      return false;
    }
    if (this->move_joint_parent_link != other.move_joint_parent_link) {
      return false;
    }
    if (this->remove_link != other.remove_link) {
      return false;
    }
    if (this->remove_joint != other.remove_joint) {
      return false;
    }
    if (this->change_link_origin_name != other.change_link_origin_name) {
      return false;
    }
    if (this->change_link_origin_pose != other.change_link_origin_pose) {
      return false;
    }
    if (this->change_joint_origin_name != other.change_joint_origin_name) {
      return false;
    }
    if (this->change_joint_origin_pose != other.change_joint_origin_pose) {
      return false;
    }
    if (this->change_link_collision_enabled_name != other.change_link_collision_enabled_name) {
      return false;
    }
    if (this->change_link_collision_enabled_value != other.change_link_collision_enabled_value) {
      return false;
    }
    if (this->change_link_visibility_name != other.change_link_visibility_name) {
      return false;
    }
    if (this->change_link_visibility_value != other.change_link_visibility_value) {
      return false;
    }
    if (this->add_allowed_collision != other.add_allowed_collision) {
      return false;
    }
    if (this->remove_allowed_collision != other.remove_allowed_collision) {
      return false;
    }
    if (this->remove_allowed_collision_link != other.remove_allowed_collision_link) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvironmentCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvironmentCommand_

// alias to use template instance with default allocator
using EnvironmentCommand =
  tesseract_msgs::msg::EnvironmentCommand_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::MOVE_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::MOVE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_ORIGIN;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_JOINT_ORIGIN;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_COLLISION_ENABLED;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::CHANGE_LINK_VISIBILITY;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::ADD_ALLOWED_COLLISION;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_ALLOWED_COLLISION;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::REMOVE_ALLOWED_COLLISION_LINK;
template<typename ContainerAllocator>
constexpr uint8_t EnvironmentCommand_<ContainerAllocator>::UPDATE_JOINT_STATE;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_HPP_
