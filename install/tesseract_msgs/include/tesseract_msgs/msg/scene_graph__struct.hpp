// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'link_list'
#include "tesseract_msgs/msg/link__struct.hpp"
// Member 'joint_list'
#include "tesseract_msgs/msg/joint__struct.hpp"
// Member 'acm'
#include "tesseract_msgs/msg/allowed_collision_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__SceneGraph __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__SceneGraph __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SceneGraph_
{
  using Type = SceneGraph_<ContainerAllocator>;

  explicit SceneGraph_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_name = "";
      this->graph_root = "";
    }
  }

  explicit SceneGraph_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : graph_name(_alloc),
    graph_root(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_name = "";
      this->graph_root = "";
    }
  }

  // field types and members
  using _graph_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _graph_name_type graph_name;
  using _graph_root_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _graph_root_type graph_root;
  using _link_list_type =
    std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Link_<ContainerAllocator>>::other>;
  _link_list_type link_list;
  using _joint_list_type =
    std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Joint_<ContainerAllocator>>::other>;
  _joint_list_type joint_list;
  using _acm_type =
    std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>::other>;
  _acm_type acm;

  // setters for named parameter idiom
  Type & set__graph_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->graph_name = _arg;
    return *this;
  }
  Type & set__graph_root(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->graph_root = _arg;
    return *this;
  }
  Type & set__link_list(
    const std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Link_<ContainerAllocator>>::other> & _arg)
  {
    this->link_list = _arg;
    return *this;
  }
  Type & set__joint_list(
    const std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Joint_<ContainerAllocator>>::other> & _arg)
  {
    this->joint_list = _arg;
    return *this;
  }
  Type & set__acm(
    const std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>::other> & _arg)
  {
    this->acm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::SceneGraph_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::SceneGraph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__SceneGraph
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__SceneGraph
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneGraph_ & other) const
  {
    if (this->graph_name != other.graph_name) {
      return false;
    }
    if (this->graph_root != other.graph_root) {
      return false;
    }
    if (this->link_list != other.link_list) {
      return false;
    }
    if (this->joint_list != other.joint_list) {
      return false;
    }
    if (this->acm != other.acm) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneGraph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneGraph_

// alias to use template instance with default allocator
using SceneGraph =
  tesseract_msgs::msg::SceneGraph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_HPP_
