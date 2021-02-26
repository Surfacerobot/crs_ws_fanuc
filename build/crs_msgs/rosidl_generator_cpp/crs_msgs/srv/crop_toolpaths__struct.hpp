// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/CropToolpaths.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_HPP_
#define CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'images'
#include "sensor_msgs/msg/image__struct.hpp"
// Member 'clouds'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"
// Member 'transforms'
#include "geometry_msgs/msg/transform_stamped__struct.hpp"
// Member 'toolpaths'
#include "crs_msgs/msg/tool_process_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__CropToolpaths_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__CropToolpaths_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CropToolpaths_Request_
{
  using Type = CropToolpaths_Request_<ContainerAllocator>;

  explicit CropToolpaths_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CropToolpaths_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _images_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::Image_<ContainerAllocator>>::other>;
  _images_type images;
  using _clouds_type =
    std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other>;
  _clouds_type clouds;
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;
  using _toolpaths_type =
    std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other>;
  _toolpaths_type toolpaths;

  // setters for named parameter idiom
  Type & set__images(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::Image_<ContainerAllocator>>::other> & _arg)
  {
    this->images = _arg;
    return *this;
  }
  Type & set__clouds(
    const std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other> & _arg)
  {
    this->clouds = _arg;
    return *this;
  }
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }
  Type & set__toolpaths(
    const std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other> & _arg)
  {
    this->toolpaths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__CropToolpaths_Request
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__CropToolpaths_Request
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CropToolpaths_Request_ & other) const
  {
    if (this->images != other.images) {
      return false;
    }
    if (this->clouds != other.clouds) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    if (this->toolpaths != other.toolpaths) {
      return false;
    }
    return true;
  }
  bool operator!=(const CropToolpaths_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CropToolpaths_Request_

// alias to use template instance with default allocator
using CropToolpaths_Request =
  crs_msgs::srv::CropToolpaths_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


// Include directives for member types
// Member 'cropped_toolpaths'
// already included above
// #include "crs_msgs/msg/tool_process_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__CropToolpaths_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__CropToolpaths_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CropToolpaths_Response_
{
  using Type = CropToolpaths_Response_<ContainerAllocator>;

  explicit CropToolpaths_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  explicit CropToolpaths_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
  using _cropped_toolpaths_type =
    std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other>;
  _cropped_toolpaths_type cropped_toolpaths;
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__cropped_toolpaths(
    const std::vector<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>::other> & _arg)
  {
    this->cropped_toolpaths = _arg;
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
    crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__CropToolpaths_Response
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__CropToolpaths_Response
    std::shared_ptr<crs_msgs::srv::CropToolpaths_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CropToolpaths_Response_ & other) const
  {
    if (this->cropped_toolpaths != other.cropped_toolpaths) {
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
  bool operator!=(const CropToolpaths_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CropToolpaths_Response_

// alias to use template instance with default allocator
using CropToolpaths_Response =
  crs_msgs::srv::CropToolpaths_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct CropToolpaths
{
  using Request = crs_msgs::srv::CropToolpaths_Request;
  using Response = crs_msgs::srv::CropToolpaths_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_HPP_
