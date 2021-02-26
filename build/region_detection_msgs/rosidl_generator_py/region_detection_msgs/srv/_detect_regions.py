# generated from rosidl_generator_py/resource/_idl.py.em
# with input from region_detection_msgs:srv/DetectRegions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectRegions_Request(type):
    """Metaclass of message 'DetectRegions_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('region_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'region_detection_msgs.srv.DetectRegions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_regions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_regions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_regions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_regions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_regions__request

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectRegions_Request(metaclass=Metaclass_DetectRegions_Request):
    """Message class 'DetectRegions_Request'."""

    __slots__ = [
        '_images',
        '_clouds',
        '_transforms',
    ]

    _fields_and_field_types = {
        'images': 'sequence<sensor_msgs/Image>',
        'clouds': 'sequence<sensor_msgs/PointCloud2>',
        'transforms': 'sequence<geometry_msgs/TransformStamped>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.images = kwargs.get('images', [])
        self.clouds = kwargs.get('clouds', [])
        self.transforms = kwargs.get('transforms', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.images != other.images:
            return False
        if self.clouds != other.clouds:
            return False
        if self.transforms != other.transforms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def images(self):
        """Message field 'images'."""
        return self._images

    @images.setter
    def images(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Image) for v in value) and
                 True), \
                "The 'images' field must be a set or sequence and each value of type 'Image'"
        self._images = value

    @property
    def clouds(self):
        """Message field 'clouds'."""
        return self._clouds

    @clouds.setter
    def clouds(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointCloud2) for v in value) and
                 True), \
                "The 'clouds' field must be a set or sequence and each value of type 'PointCloud2'"
        self._clouds = value

    @property
    def transforms(self):
        """Message field 'transforms'."""
        return self._transforms

    @transforms.setter
    def transforms(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TransformStamped) for v in value) and
                 True), \
                "The 'transforms' field must be a set or sequence and each value of type 'TransformStamped'"
        self._transforms = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectRegions_Response(type):
    """Metaclass of message 'DetectRegions_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('region_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'region_detection_msgs.srv.DetectRegions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_regions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_regions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_regions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_regions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_regions__response

            from geometry_msgs.msg import PoseArray
            if PoseArray.__class__._TYPE_SUPPORT is None:
                PoseArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectRegions_Response(metaclass=Metaclass_DetectRegions_Response):
    """Message class 'DetectRegions_Response'."""

    __slots__ = [
        '_detected_regions',
        '_succeeded',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'detected_regions': 'sequence<geometry_msgs/PoseArray>',
        'succeeded': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected_regions = kwargs.get('detected_regions', [])
        self.succeeded = kwargs.get('succeeded', bool())
        self.err_msg = kwargs.get('err_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detected_regions != other.detected_regions:
            return False
        if self.succeeded != other.succeeded:
            return False
        if self.err_msg != other.err_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def detected_regions(self):
        """Message field 'detected_regions'."""
        return self._detected_regions

    @detected_regions.setter
    def detected_regions(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseArray
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PoseArray) for v in value) and
                 True), \
                "The 'detected_regions' field must be a set or sequence and each value of type 'PoseArray'"
        self._detected_regions = value

    @property
    def succeeded(self):
        """Message field 'succeeded'."""
        return self._succeeded

    @succeeded.setter
    def succeeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'succeeded' field must be of type 'bool'"
        self._succeeded = value

    @property
    def err_msg(self):
        """Message field 'err_msg'."""
        return self._err_msg

    @err_msg.setter
    def err_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'err_msg' field must be of type 'str'"
        self._err_msg = value


class Metaclass_DetectRegions(type):
    """Metaclass of service 'DetectRegions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('region_detection_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'region_detection_msgs.srv.DetectRegions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_regions

            from region_detection_msgs.srv import _detect_regions
            if _detect_regions.Metaclass_DetectRegions_Request._TYPE_SUPPORT is None:
                _detect_regions.Metaclass_DetectRegions_Request.__import_type_support__()
            if _detect_regions.Metaclass_DetectRegions_Response._TYPE_SUPPORT is None:
                _detect_regions.Metaclass_DetectRegions_Response.__import_type_support__()


class DetectRegions(metaclass=Metaclass_DetectRegions):
    from region_detection_msgs.srv._detect_regions import DetectRegions_Request as Request
    from region_detection_msgs.srv._detect_regions import DetectRegions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
