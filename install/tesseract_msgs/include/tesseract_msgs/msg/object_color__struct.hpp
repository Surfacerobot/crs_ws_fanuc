// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__OBJECT_COLOR__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__OBJECT_COLOR__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'visual'
// Member 'collision'
#include "std_msgs/msg/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__ObjectColor __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__ObjectColor __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectColor_
{
  using Type = ObjectColor_<ContainerAllocator>;

  explicit ObjectColor_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ObjectColor_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _visual_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other>;
  _visual_type visual;
  using _collision_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other>;
  _collision_type collision;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__visual(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other> & _arg)
  {
    this->visual = _arg;
    return *this;
  }
  Type & set__collision(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::ColorRGBA_<ContainerAllocator>>::other> & _arg)
  {
    this->collision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::ObjectColor_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::ObjectColor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ObjectColor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ObjectColor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__ObjectColor
    std::shared_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__ObjectColor
    std::shared_ptr<tesseract_msgs::msg::ObjectColor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectColor_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->visual != other.visual) {
      return false;
    }
    if (this->collision != other.collision) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectColor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectColor_

// alias to use template instance with default allocator
using ObjectColor =
  tesseract_msgs::msg::ObjectColor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__OBJECT_COLOR__STRUCT_HPP_
