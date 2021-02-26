# generated from rosidl_generator_py/resource/_idl.py.em
# with input from region_detection_msgs:srv/CropData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CropData_Request(type):
    """Metaclass of message 'CropData_Request'."""

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
                'region_detection_msgs.srv.CropData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__crop_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__crop_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__crop_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__crop_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__crop_data__request

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


class CropData_Request(metaclass=Metaclass_CropData_Request):
    """Message class 'CropData_Request'."""

    __slots__ = [
        '_crop_regions',
        '_input_data',
    ]

    _fields_and_field_types = {
        'crop_regions': 'sequence<geometry_msgs/PoseArray>',
        'input_data': 'sequence<geometry_msgs/PoseArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.crop_regions = kwargs.get('crop_regions', [])
        self.input_data = kwargs.get('input_data', [])

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
        if self.crop_regions != other.crop_regions:
            return False
        if self.input_data != other.input_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def crop_regions(self):
        """Message field 'crop_regions'."""
        return self._crop_regions

    @crop_regions.setter
    def crop_regions(self, value):
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
                "The 'crop_regions' field must be a set or sequence and each value of type 'PoseArray'"
        self._crop_regions = value

    @property
    def input_data(self):
        """Message field 'input_data'."""
        return self._input_data

    @input_data.setter
    def input_data(self, value):
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
                "The 'input_data' field must be a set or sequence and each value of type 'PoseArray'"
        self._input_data = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CropData_Response(type):
    """Metaclass of message 'CropData_Response'."""

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
                'region_detection_msgs.srv.CropData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__crop_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__crop_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__crop_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__crop_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__crop_data__response

            from region_detection_msgs.msg import PoseSet
            if PoseSet.__class__._TYPE_SUPPORT is None:
                PoseSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CropData_Response(metaclass=Metaclass_CropData_Response):
    """Message class 'CropData_Response'."""

    __slots__ = [
        '_cropped_data',
        '_succeeded',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'cropped_data': 'sequence<region_detection_msgs/PoseSet>',
        'succeeded': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['region_detection_msgs', 'msg'], 'PoseSet')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cropped_data = kwargs.get('cropped_data', [])
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
        if self.cropped_data != other.cropped_data:
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
    def cropped_data(self):
        """Message field 'cropped_data'."""
        return self._cropped_data

    @cropped_data.setter
    def cropped_data(self, value):
        if __debug__:
            from region_detection_msgs.msg import PoseSet
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
                 all(isinstance(v, PoseSet) for v in value) and
                 True), \
                "The 'cropped_data' field must be a set or sequence and each value of type 'PoseSet'"
        self._cropped_data = value

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


class Metaclass_CropData(type):
    """Metaclass of service 'CropData'."""

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
                'region_detection_msgs.srv.CropData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__crop_data

            from region_detection_msgs.srv import _crop_data
            if _crop_data.Metaclass_CropData_Request._TYPE_SUPPORT is None:
                _crop_data.Metaclass_CropData_Request.__import_type_support__()
            if _crop_data.Metaclass_CropData_Response._TYPE_SUPPORT is None:
                _crop_data.Metaclass_CropData_Response.__import_type_support__()


class CropData(metaclass=Metaclass_CropData):
    from region_detection_msgs.srv._crop_data import CropData_Request as Request
    from region_detection_msgs.srv._crop_data import CropData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
