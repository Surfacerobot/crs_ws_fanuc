// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__COLLISION_GEOMETRY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__COLLISION_GEOMETRY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'geometry'
#include "tesseract_msgs/msg/geometry__struct.hpp"
// Member 'material'
#include "tesseract_msgs/msg/material__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__CollisionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__CollisionGeometry __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionGeometry_
{
  using Type = CollisionGeometry_<ContainerAllocator>;

  explicit CollisionGeometry_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : origin(_init),
    geometry(_init),
    material(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit CollisionGeometry_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc),
    origin(_alloc, _init),
    geometry(_alloc, _init),
    material(_alloc, _init)
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
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;
  using _geometry_type =
    tesseract_msgs::msg::Geometry_<ContainerAllocator>;
  _geometry_type geometry;
  using _material_type =
    tesseract_msgs::msg::Material_<ContainerAllocator>;
  _material_type material;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__geometry(
    const tesseract_msgs::msg::Geometry_<ContainerAllocator> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }
  Type & set__material(
    const tesseract_msgs::msg::Material_<ContainerAllocator> & _arg)
  {
    this->material = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__CollisionGeometry
    std::shared_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__CollisionGeometry
    std::shared_ptr<tesseract_msgs::msg::CollisionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionGeometry_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->geometry != other.geometry) {
      return false;
    }
    if (this->material != other.material) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionGeometry_

// alias to use template instance with default allocator
using CollisionGeometry =
  tesseract_msgs::msg::CollisionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__COLLISION_GEOMETRY__STRUCT_HPP_
