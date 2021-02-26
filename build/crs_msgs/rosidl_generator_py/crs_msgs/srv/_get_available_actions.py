# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/GetAvailableActions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAvailableActions_Request(type):
    """Metaclass of message 'GetAvailableActions_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PATTERN_USER_ACTIONS': '^user*',
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
                'crs_msgs.srv.GetAvailableActions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_available_actions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_available_actions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_available_actions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_available_actions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_available_actions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PATTERN_USER_ACTIONS': cls.__constants['PATTERN_USER_ACTIONS'],
        }

    @property
    def PATTERN_USER_ACTIONS(self):
        """Message constant 'PATTERN_USER_ACTIONS'."""
        return Metaclass_GetAvailableActions_Request.__constants['PATTERN_USER_ACTIONS']


class GetAvailableActions_Request(metaclass=Metaclass_GetAvailableActions_Request):
    """
    Message class 'GetAvailableActions_Request'.

    Constants:
      PATTERN_USER_ACTIONS
    """

    __slots__ = [
        '_search_pattern',
    ]

    _fields_and_field_types = {
        'search_pattern': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.search_pattern = kwargs.get('search_pattern', str())

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
        if self.search_pattern != other.search_pattern:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def search_pattern(self):
        """Message field 'search_pattern'."""
        return self._search_pattern

    @search_pattern.setter
    def search_pattern(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'search_pattern' field must be of type 'str'"
        self._search_pattern = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAvailableActions_Response(type):
    """Metaclass of message 'GetAvailableActions_Response'."""

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
                'crs_msgs.srv.GetAvailableActions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_available_actions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_available_actions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_available_actions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_available_actions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_available_actions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAvailableActions_Response(metaclass=Metaclass_GetAvailableActions_Response):
    """Message class 'GetAvailableActions_Response'."""

    __slots__ = [
        '_action_ids',
        '_succeeded',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'action_ids': 'sequence<string>',
        'succeeded': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action_ids = kwargs.get('action_ids', [])
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
        if self.action_ids != other.action_ids:
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
    def action_ids(self):
        """Message field 'action_ids'."""
        return self._action_ids

    @action_ids.setter
    def action_ids(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'action_ids' field must be a set or sequence and each value of type 'str'"
        self._action_ids = value

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


class Metaclass_GetAvailableActions(type):
    """Metaclass of service 'GetAvailableActions'."""

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
                'crs_msgs.srv.GetAvailableActions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_available_actions

            from crs_msgs.srv import _get_available_actions
            if _get_available_actions.Metaclass_GetAvailableActions_Request._TYPE_SUPPORT is None:
                _get_available_actions.Metaclass_GetAvailableActions_Request.__import_type_support__()
            if _get_available_actions.Metaclass_GetAvailableActions_Response._TYPE_SUPPORT is None:
                _get_available_actions.Metaclass_GetAvailableActions_Response.__import_type_support__()


class GetAvailableActions(metaclass=Metaclass_GetAvailableActions):
    from crs_msgs.srv._get_available_actions import GetAvailableActions_Request as Request
    from crs_msgs.srv._get_available_actions import GetAvailableActions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
