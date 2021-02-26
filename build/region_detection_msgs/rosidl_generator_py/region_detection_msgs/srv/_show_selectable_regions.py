# generated from rosidl_generator_py/resource/_idl.py.em
# with input from region_detection_msgs:srv/ShowSelectableRegions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ShowSelectableRegions_Request(type):
    """Metaclass of message 'ShowSelectableRegions_Request'."""

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
                'region_detection_msgs.srv.ShowSelectableRegions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__show_selectable_regions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__show_selectable_regions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__show_selectable_regions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__show_selectable_regions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__show_selectable_regions__request

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


class ShowSelectableRegions_Request(metaclass=Metaclass_ShowSelectableRegions_Request):
    """Message class 'ShowSelectableRegions_Request'."""

    __slots__ = [
        '_selectable_regions',
        '_start_selected',
    ]

    _fields_and_field_types = {
        'selectable_regions': 'sequence<geometry_msgs/PoseArray>',
        'start_selected': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.selectable_regions = kwargs.get('selectable_regions', [])
        self.start_selected = kwargs.get('start_selected', bool())

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
        if self.selectable_regions != other.selectable_regions:
            return False
        if self.start_selected != other.start_selected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def selectable_regions(self):
        """Message field 'selectable_regions'."""
        return self._selectable_regions

    @selectable_regions.setter
    def selectable_regions(self, value):
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
                "The 'selectable_regions' field must be a set or sequence and each value of type 'PoseArray'"
        self._selectable_regions = value

    @property
    def start_selected(self):
        """Message field 'start_selected'."""
        return self._start_selected

    @start_selected.setter
    def start_selected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_selected' field must be of type 'bool'"
        self._start_selected = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ShowSelectableRegions_Response(type):
    """Metaclass of message 'ShowSelectableRegions_Response'."""

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
                'region_detection_msgs.srv.ShowSelectableRegions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__show_selectable_regions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__show_selectable_regions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__show_selectable_regions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__show_selectable_regions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__show_selectable_regions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ShowSelectableRegions_Response(metaclass=Metaclass_ShowSelectableRegions_Response):
    """Message class 'ShowSelectableRegions_Response'."""

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


class Metaclass_ShowSelectableRegions(type):
    """Metaclass of service 'ShowSelectableRegions'."""

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
                'region_detection_msgs.srv.ShowSelectableRegions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__show_selectable_regions

            from region_detection_msgs.srv import _show_selectable_regions
            if _show_selectable_regions.Metaclass_ShowSelectableRegions_Request._TYPE_SUPPORT is None:
                _show_selectable_regions.Metaclass_ShowSelectableRegions_Request.__import_type_support__()
            if _show_selectable_regions.Metaclass_ShowSelectableRegions_Response._TYPE_SUPPORT is None:
                _show_selectable_regions.Metaclass_ShowSelectableRegions_Response.__import_type_support__()


class ShowSelectableRegions(metaclass=Metaclass_ShowSelectableRegions):
    from region_detection_msgs.srv._show_selectable_regions import ShowSelectableRegions_Request as Request
    from region_detection_msgs.srv._show_selectable_regions import ShowSelectableRegions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
