# generated from rosidl_generator_py/resource/_idl.py.em
# with input from region_detection_msgs:srv/GetSelectedRegions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetSelectedRegions_Request(type):
    """Metaclass of message 'GetSelectedRegions_Request'."""

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
                'region_detection_msgs.srv.GetSelectedRegions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_selected_regions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_selected_regions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_selected_regions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_selected_regions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_selected_regions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSelectedRegions_Request(metaclass=Metaclass_GetSelectedRegions_Request):
    """Message class 'GetSelectedRegions_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'selected_regions_indices'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSelectedRegions_Response(type):
    """Metaclass of message 'GetSelectedRegions_Response'."""

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
                'region_detection_msgs.srv.GetSelectedRegions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_selected_regions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_selected_regions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_selected_regions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_selected_regions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_selected_regions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSelectedRegions_Response(metaclass=Metaclass_GetSelectedRegions_Response):
    """Message class 'GetSelectedRegions_Response'."""

    __slots__ = [
        '_selected_regions_indices',
    ]

    _fields_and_field_types = {
        'selected_regions_indices': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.selected_regions_indices = array.array('i', kwargs.get('selected_regions_indices', []))

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
        if self.selected_regions_indices != other.selected_regions_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def selected_regions_indices(self):
        """Message field 'selected_regions_indices'."""
        return self._selected_regions_indices

    @selected_regions_indices.setter
    def selected_regions_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'selected_regions_indices' array.array() must have the type code of 'i'"
            self._selected_regions_indices = value
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
                "The 'selected_regions_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._selected_regions_indices = array.array('i', value)


class Metaclass_GetSelectedRegions(type):
    """Metaclass of service 'GetSelectedRegions'."""

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
                'region_detection_msgs.srv.GetSelectedRegions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_selected_regions

            from region_detection_msgs.srv import _get_selected_regions
            if _get_selected_regions.Metaclass_GetSelectedRegions_Request._TYPE_SUPPORT is None:
                _get_selected_regions.Metaclass_GetSelectedRegions_Request.__import_type_support__()
            if _get_selected_regions.Metaclass_GetSelectedRegions_Response._TYPE_SUPPORT is None:
                _get_selected_regions.Metaclass_GetSelectedRegions_Response.__import_type_support__()


class GetSelectedRegions(metaclass=Metaclass_GetSelectedRegions):
    from region_detection_msgs.srv._get_selected_regions import GetSelectedRegions_Request as Request
    from region_detection_msgs.srv._get_selected_regions import GetSelectedRegions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
