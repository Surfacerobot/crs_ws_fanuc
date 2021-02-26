// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/TesseractInitInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'scene_graph'
#include "tesseract_msgs/msg/scene_graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__TesseractInitInfo __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__TesseractInitInfo __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TesseractInitInfo_
{
  using Type = TesseractInitInfo_<ContainerAllocator>;

  explicit TesseractInitInfo_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene_graph(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->urdf_string = "";
      this->srdf_string = "";
      this->urdf_path = "";
      this->srdf_path = "";
    }
  }

  explicit TesseractInitInfo_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene_graph(_alloc, _init),
    urdf_string(_alloc),
    srdf_string(_alloc),
    urdf_path(_alloc),
    srdf_path(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->urdf_string = "";
      this->srdf_string = "";
      this->urdf_path = "";
      this->srdf_path = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _scene_graph_type =
    tesseract_msgs::msg::SceneGraph_<ContainerAllocator>;
  _scene_graph_type scene_graph;
  using _urdf_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _urdf_string_type urdf_string;
  using _srdf_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _srdf_string_type srdf_string;
  using _urdf_path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _urdf_path_type urdf_path;
  using _srdf_path_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _srdf_path_type srdf_path;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__scene_graph(
    const tesseract_msgs::msg::SceneGraph_<ContainerAllocator> & _arg)
  {
    this->scene_graph = _arg;
    return *this;
  }
  Type & set__urdf_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->urdf_string = _arg;
    return *this;
  }
  Type & set__srdf_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->srdf_string = _arg;
    return *this;
  }
  Type & set__urdf_path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->urdf_path = _arg;
    return *this;
  }
  Type & set__srdf_path(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->srdf_path = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SCENE_GRAPH =
    0u;
  static constexpr uint8_t SCENE_GRAPH_SRDF_MODEL =
    1u;
  static constexpr uint8_t URDF_STRING =
    2u;
  static constexpr uint8_t URDF_STRING_SRDF_STRING =
    3u;
  static constexpr uint8_t URDF_PATH =
    4u;
  static constexpr uint8_t URDF_PATH_SRDF_PATH =
    5u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__TesseractInitInfo
    std::shared_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__TesseractInitInfo
    std::shared_ptr<tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TesseractInitInfo_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->scene_graph != other.scene_graph) {
      return false;
    }
    if (this->urdf_string != other.urdf_string) {
      return false;
    }
    if (this->srdf_string != other.srdf_string) {
      return false;
    }
    if (this->urdf_path != other.urdf_path) {
      return false;
    }
    if (this->srdf_path != other.srdf_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const TesseractInitInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TesseractInitInfo_

// alias to use template instance with default allocator
using TesseractInitInfo =
  tesseract_msgs::msg::TesseractInitInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::SCENE_GRAPH;
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::SCENE_GRAPH_SRDF_MODEL;
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::URDF_STRING;
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::URDF_STRING_SRDF_STRING;
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::URDF_PATH;
template<typename ContainerAllocator>
constexpr uint8_t TesseractInitInfo_<ContainerAllocator>::URDF_PATH_SRDF_PATH;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_HPP_
