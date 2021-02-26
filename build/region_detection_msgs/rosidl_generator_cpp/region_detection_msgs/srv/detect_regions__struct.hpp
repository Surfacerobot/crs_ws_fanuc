// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_HPP_
#define REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__DetectRegions_Request __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__DetectRegions_Request __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectRegions_Request_
{
  using Type = DetectRegions_Request_<ContainerAllocator>;

  explicit DetectRegions_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectRegions_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__DetectRegions_Request
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__DetectRegions_Request
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectRegions_Request_ & other) const
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
    return true;
  }
  bool operator!=(const DetectRegions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectRegions_Request_

// alias to use template instance with default allocator
using DetectRegions_Request =
  region_detection_msgs::srv::DetectRegions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs


// Include directives for member types
// Member 'detected_regions'
#include "geometry_msgs/msg/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__DetectRegions_Response __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__DetectRegions_Response __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectRegions_Response_
{
  using Type = DetectRegions_Response_<ContainerAllocator>;

  explicit DetectRegions_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  explicit DetectRegions_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
  using _detected_regions_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _detected_regions_type detected_regions;
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__detected_regions(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->detected_regions = _arg;
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
    region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__DetectRegions_Response
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__DetectRegions_Response
    std::shared_ptr<region_detection_msgs::srv::DetectRegions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectRegions_Response_ & other) const
  {
    if (this->detected_regions != other.detected_regions) {
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
  bool operator!=(const DetectRegions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectRegions_Response_

// alias to use template instance with default allocator
using DetectRegions_Response =
  region_detection_msgs::srv::DetectRegions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs

namespace region_detection_msgs
{

namespace srv
{

struct DetectRegions
{
  using Request = region_detection_msgs::srv::DetectRegions_Request;
  using Response = region_detection_msgs::srv::DetectRegions_Response;
};

}  // namespace srv

}  // namespace region_detection_msgs

#endif  // REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_HPP_
