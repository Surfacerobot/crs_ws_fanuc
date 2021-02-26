# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/GetROISelection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetROISelection_Request(type):
    """Metaclass of message 'GetROISelection_Request'."""

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
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetROISelection_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_roi_selection__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_roi_selection__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_roi_selection__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_roi_selection__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_roi_selection__request

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


class GetROISelection_Request(metaclass=Metaclass_GetROISelection_Request):
    """Message class 'GetROISelection_Request'."""

    __slots__ = [
        '_input_cloud',
    ]

    _fields_and_field_types = {
        'input_cloud': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.input_cloud = kwargs.get('input_cloud', PointCloud2())

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
        if self.input_cloud != other.input_cloud:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def input_cloud(self):
        """Message field 'input_cloud'."""
        return self._input_cloud

    @input_cloud.setter
    def input_cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'input_cloud' field must be a sub message of type 'PointCloud2'"
        self._input_cloud = value


# Import statements for member types

# Member 'cloud_indices'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetROISelection_Response(type):
    """Metaclass of message 'GetROISelection_Response'."""

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
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetROISelection_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_roi_selection__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_roi_selection__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_roi_selection__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_roi_selection__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_roi_selection__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetROISelection_Response(metaclass=Metaclass_GetROISelection_Response):
    """Message class 'GetROISelection_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_cloud_indices',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'cloud_indices': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.cloud_indices = array.array('i', kwargs.get('cloud_indices', []))

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.cloud_indices != other.cloud_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def cloud_indices(self):
        """Message field 'cloud_indices'."""
        return self._cloud_indices

    @cloud_indices.setter
    def cloud_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'cloud_indices' array.array() must have the type code of 'i'"
            self._cloud_indices = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'cloud_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._cloud_indices = array.array('i', value)


class Metaclass_GetROISelection(type):
    """Metaclass of service 'GetROISelection'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetROISelection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_roi_selection

            from crs_msgs.srv import _get_roi_selection
            if _get_roi_selection.Metaclass_GetROISelection_Request._TYPE_SUPPORT is None:
                _get_roi_selection.Metaclass_GetROISelection_Request.__import_type_support__()
            if _get_roi_selection.Metaclass_GetROISelection_Response._TYPE_SUPPORT is None:
                _get_roi_selection.Metaclass_GetROISelection_Response.__import_type_support__()


class GetROISelection(metaclass=Metaclass_GetROISelection):
    from crs_msgs.srv._get_roi_selection import GetROISelection_Request as Request
    from crs_msgs.srv._get_roi_selection import GetROISelection_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
