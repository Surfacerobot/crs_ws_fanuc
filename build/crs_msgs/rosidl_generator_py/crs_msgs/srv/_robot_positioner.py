# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/RobotPositioner.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotPositioner_Request(type):
    """Metaclass of message 'RobotPositioner_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION1': 0,
        'POSITION2': 1,
        'POSITION3': 2,
        'RAIL1': 0,
        'RAIL2': 1,
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
                'crs_msgs.srv.RobotPositioner_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_positioner__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_positioner__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_positioner__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_positioner__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_positioner__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION1': cls.__constants['POSITION1'],
            'POSITION2': cls.__constants['POSITION2'],
            'POSITION3': cls.__constants['POSITION3'],
            'RAIL1': cls.__constants['RAIL1'],
            'RAIL2': cls.__constants['RAIL2'],
        }

    @property
    def POSITION1(self):
        """Message constant 'POSITION1'."""
        return Metaclass_RobotPositioner_Request.__constants['POSITION1']

    @property
    def POSITION2(self):
        """Message constant 'POSITION2'."""
        return Metaclass_RobotPositioner_Request.__constants['POSITION2']

    @property
    def POSITION3(self):
        """Message constant 'POSITION3'."""
        return Metaclass_RobotPositioner_Request.__constants['POSITION3']

    @property
    def RAIL1(self):
        """Message constant 'RAIL1'."""
        return Metaclass_RobotPositioner_Request.__constants['RAIL1']

    @property
    def RAIL2(self):
        """Message constant 'RAIL2'."""
        return Metaclass_RobotPositioner_Request.__constants['RAIL2']


class RobotPositioner_Request(metaclass=Metaclass_RobotPositioner_Request):
    """
    Message class 'RobotPositioner_Request'.

    Constants:
      POSITION1
      POSITION2
      POSITION3
      RAIL1
      RAIL2
    """

    __slots__ = [
        '_robot_position',
        '_robot_rail',
    ]

    _fields_and_field_types = {
        'robot_position': 'uint8',
        'robot_rail': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_position = kwargs.get('robot_position', int())
        self.robot_rail = kwargs.get('robot_rail', int())

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
        if self.robot_position != other.robot_position:
            return False
        if self.robot_rail != other.robot_rail:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_position(self):
        """Message field 'robot_position'."""
        return self._robot_position

    @robot_position.setter
    def robot_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_position' field must be an unsigned integer in [0, 255]"
        self._robot_position = value

    @property
    def robot_rail(self):
        """Message field 'robot_rail'."""
        return self._robot_rail

    @robot_rail.setter
    def robot_rail(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_rail' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_rail' field must be an unsigned integer in [0, 255]"
        self._robot_rail = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotPositioner_Response(type):
    """Metaclass of message 'RobotPositioner_Response'."""

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
                'crs_msgs.srv.RobotPositioner_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_positioner__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_positioner__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_positioner__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_positioner__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_positioner__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotPositioner_Response(metaclass=Metaclass_RobotPositioner_Response):
    """Message class 'RobotPositioner_Response'."""

    __slots__ = [
        '_success',
        '_error',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error = kwargs.get('error', str())

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
        if self.error != other.error:
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
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_RobotPositioner(type):
    """Metaclass of service 'RobotPositioner'."""

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
                'crs_msgs.srv.RobotPositioner')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_positioner

            from crs_msgs.srv import _robot_positioner
            if _robot_positioner.Metaclass_RobotPositioner_Request._TYPE_SUPPORT is None:
                _robot_positioner.Metaclass_RobotPositioner_Request.__import_type_support__()
            if _robot_positioner.Metaclass_RobotPositioner_Response._TYPE_SUPPORT is None:
                _robot_positioner.Metaclass_RobotPositioner_Response.__import_type_support__()


class RobotPositioner(metaclass=Metaclass_RobotPositioner):
    from crs_msgs.srv._robot_positioner import RobotPositioner_Request as Request
    from crs_msgs.srv._robot_positioner import RobotPositioner_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
