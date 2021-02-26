# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:msg/ProcessMotionPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProcessMotionPlan(type):
    """Metaclass of message 'ProcessMotionPlan'."""

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
                'crs_msgs.msg.ProcessMotionPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__process_motion_plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__process_motion_plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__process_motion_plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__process_motion_plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__process_motion_plan

            from cartesian_trajectory_msgs.msg import CartesianTrajectory
            if CartesianTrajectory.__class__._TYPE_SUPPORT is None:
                CartesianTrajectory.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProcessMotionPlan(metaclass=Metaclass_ProcessMotionPlan):
    """Message class 'ProcessMotionPlan'."""

    __slots__ = [
        '_start',
        '_process_motions',
        '_force_controlled_process_motions',
        '_free_motions',
        '_end',
    ]

    _fields_and_field_types = {
        'start': 'trajectory_msgs/JointTrajectory',
        'process_motions': 'sequence<trajectory_msgs/JointTrajectory>',
        'force_controlled_process_motions': 'sequence<cartesian_trajectory_msgs/CartesianTrajectory>',
        'free_motions': 'sequence<trajectory_msgs/JointTrajectory>',
        'end': 'trajectory_msgs/JointTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cartesian_trajectory_msgs', 'msg'], 'CartesianTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.start = kwargs.get('start', JointTrajectory())
        self.process_motions = kwargs.get('process_motions', [])
        self.force_controlled_process_motions = kwargs.get('force_controlled_process_motions', [])
        self.free_motions = kwargs.get('free_motions', [])
        from trajectory_msgs.msg import JointTrajectory
        self.end = kwargs.get('end', JointTrajectory())

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
        if self.start != other.start:
            return False
        if self.process_motions != other.process_motions:
            return False
        if self.force_controlled_process_motions != other.force_controlled_process_motions:
            return False
        if self.free_motions != other.free_motions:
            return False
        if self.end != other.end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'start' field must be a sub message of type 'JointTrajectory'"
        self._start = value

    @property
    def process_motions(self):
        """Message field 'process_motions'."""
        return self._process_motions

    @process_motions.setter
    def process_motions(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
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
                 all(isinstance(v, JointTrajectory) for v in value) and
                 True), \
                "The 'process_motions' field must be a set or sequence and each value of type 'JointTrajectory'"
        self._process_motions = value

    @property
    def force_controlled_process_motions(self):
        """Message field 'force_controlled_process_motions'."""
        return self._force_controlled_process_motions

    @force_controlled_process_motions.setter
    def force_controlled_process_motions(self, value):
        if __debug__:
            from cartesian_trajectory_msgs.msg import CartesianTrajectory
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
                 all(isinstance(v, CartesianTrajectory) for v in value) and
                 True), \
                "The 'force_controlled_process_motions' field must be a set or sequence and each value of type 'CartesianTrajectory'"
        self._force_controlled_process_motions = value

    @property
    def free_motions(self):
        """Message field 'free_motions'."""
        return self._free_motions

    @free_motions.setter
    def free_motions(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
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
                 all(isinstance(v, JointTrajectory) for v in value) and
                 True), \
                "The 'free_motions' field must be a set or sequence and each value of type 'JointTrajectory'"
        self._free_motions = value

    @property
    def end(self):
        """Message field 'end'."""
        return self._end

    @end.setter
    def end(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'end' field must be a sub message of type 'JointTrajectory'"
        self._end = value
