# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flatfish_ros_efuse_serial:srv/SetChannelsOn.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetChannelsOn_Request(type):
    """Metaclass of message 'SetChannelsOn_Request'."""

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
            module = import_type_support('flatfish_ros_efuse_serial')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flatfish_ros_efuse_serial.srv.SetChannelsOn_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_channels_on__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_channels_on__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_channels_on__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_channels_on__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_channels_on__request

            from flatfish_ros_efuse_serial.msg import CmdChannel
            if CmdChannel.__class__._TYPE_SUPPORT is None:
                CmdChannel.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetChannelsOn_Request(metaclass=Metaclass_SetChannelsOn_Request):
    """Message class 'SetChannelsOn_Request'."""

    __slots__ = [
        '_board',
        '_command',
    ]

    _fields_and_field_types = {
        'board': 'int8',
        'command': 'flatfish_ros_efuse_serial/CmdChannel',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['flatfish_ros_efuse_serial', 'msg'], 'CmdChannel'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.board = kwargs.get('board', int())
        from flatfish_ros_efuse_serial.msg import CmdChannel
        self.command = kwargs.get('command', CmdChannel())

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
        if self.board != other.board:
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def board(self):
        """Message field 'board'."""
        return self._board

    @board.setter
    def board(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'board' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'board' field must be an integer in [-128, 127]"
        self._board = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            from flatfish_ros_efuse_serial.msg import CmdChannel
            assert \
                isinstance(value, CmdChannel), \
                "The 'command' field must be a sub message of type 'CmdChannel'"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetChannelsOn_Response(type):
    """Metaclass of message 'SetChannelsOn_Response'."""

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
            module = import_type_support('flatfish_ros_efuse_serial')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flatfish_ros_efuse_serial.srv.SetChannelsOn_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_channels_on__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_channels_on__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_channels_on__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_channels_on__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_channels_on__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetChannelsOn_Response(metaclass=Metaclass_SetChannelsOn_Response):
    """Message class 'SetChannelsOn_Response'."""

    __slots__ = [
        '_error',
    ]

    _fields_and_field_types = {
        'error': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error = kwargs.get('error', int())

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
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'error' field must be an integer in [-128, 127]"
        self._error = value


class Metaclass_SetChannelsOn(type):
    """Metaclass of service 'SetChannelsOn'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('flatfish_ros_efuse_serial')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flatfish_ros_efuse_serial.srv.SetChannelsOn')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_channels_on

            from flatfish_ros_efuse_serial.srv import _set_channels_on
            if _set_channels_on.Metaclass_SetChannelsOn_Request._TYPE_SUPPORT is None:
                _set_channels_on.Metaclass_SetChannelsOn_Request.__import_type_support__()
            if _set_channels_on.Metaclass_SetChannelsOn_Response._TYPE_SUPPORT is None:
                _set_channels_on.Metaclass_SetChannelsOn_Response.__import_type_support__()


class SetChannelsOn(metaclass=Metaclass_SetChannelsOn):
    from flatfish_ros_efuse_serial.srv._set_channels_on import SetChannelsOn_Request as Request
    from flatfish_ros_efuse_serial.srv._set_channels_on import SetChannelsOn_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
