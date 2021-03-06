-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
module('Chat_pb')


HPSENDCHAT = protobuf.Descriptor();
local HPSENDCHAT_CHATMSG_FIELD = protobuf.FieldDescriptor();
local HPSENDCHAT_CHATTYPE_FIELD = protobuf.FieldDescriptor();
HPCHATMSG = protobuf.Descriptor();
local HPCHATMSG_TYPE_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_PLAYERID_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_NAME_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_LEVEL_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_ROLEITEMID_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_CHATMSG_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_AREA_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_TITLEID_FIELD = protobuf.FieldDescriptor();
local HPCHATMSG_PLAYERTYPE_FIELD = protobuf.FieldDescriptor();
HPPUSHCHAT = protobuf.Descriptor();
local HPPUSHCHAT_CHATMSG_FIELD = protobuf.FieldDescriptor();
HPALLIANCESWITCH = protobuf.Descriptor();
local HPALLIANCESWITCH_TAG_FIELD = protobuf.FieldDescriptor();

HPSENDCHAT_CHATMSG_FIELD.name = "chatMsg"
HPSENDCHAT_CHATMSG_FIELD.full_name = ".HPSendChat.chatMsg"
HPSENDCHAT_CHATMSG_FIELD.number = 1
HPSENDCHAT_CHATMSG_FIELD.index = 0
HPSENDCHAT_CHATMSG_FIELD.label = 2
HPSENDCHAT_CHATMSG_FIELD.has_default_value = false
HPSENDCHAT_CHATMSG_FIELD.default_value = ""
HPSENDCHAT_CHATMSG_FIELD.type = 9
HPSENDCHAT_CHATMSG_FIELD.cpp_type = 9

HPSENDCHAT_CHATTYPE_FIELD.name = "chatType"
HPSENDCHAT_CHATTYPE_FIELD.full_name = ".HPSendChat.chatType"
HPSENDCHAT_CHATTYPE_FIELD.number = 2
HPSENDCHAT_CHATTYPE_FIELD.index = 1
HPSENDCHAT_CHATTYPE_FIELD.label = 2
HPSENDCHAT_CHATTYPE_FIELD.has_default_value = false
HPSENDCHAT_CHATTYPE_FIELD.default_value = 0
HPSENDCHAT_CHATTYPE_FIELD.type = 5
HPSENDCHAT_CHATTYPE_FIELD.cpp_type = 1

HPSENDCHAT.name = "HPSendChat"
HPSENDCHAT.full_name = ".HPSendChat"
HPSENDCHAT.nested_types = {}
HPSENDCHAT.enum_types = {}
HPSENDCHAT.fields = {HPSENDCHAT_CHATMSG_FIELD, HPSENDCHAT_CHATTYPE_FIELD}
HPSENDCHAT.is_extendable = false
HPSENDCHAT.extensions = {}
HPCHATMSG_TYPE_FIELD.name = "type"
HPCHATMSG_TYPE_FIELD.full_name = ".HPChatMsg.type"
HPCHATMSG_TYPE_FIELD.number = 1
HPCHATMSG_TYPE_FIELD.index = 0
HPCHATMSG_TYPE_FIELD.label = 2
HPCHATMSG_TYPE_FIELD.has_default_value = false
HPCHATMSG_TYPE_FIELD.default_value = 0
HPCHATMSG_TYPE_FIELD.type = 5
HPCHATMSG_TYPE_FIELD.cpp_type = 1

HPCHATMSG_PLAYERID_FIELD.name = "playerId"
HPCHATMSG_PLAYERID_FIELD.full_name = ".HPChatMsg.playerId"
HPCHATMSG_PLAYERID_FIELD.number = 2
HPCHATMSG_PLAYERID_FIELD.index = 1
HPCHATMSG_PLAYERID_FIELD.label = 2
HPCHATMSG_PLAYERID_FIELD.has_default_value = false
HPCHATMSG_PLAYERID_FIELD.default_value = 0
HPCHATMSG_PLAYERID_FIELD.type = 5
HPCHATMSG_PLAYERID_FIELD.cpp_type = 1

HPCHATMSG_NAME_FIELD.name = "name"
HPCHATMSG_NAME_FIELD.full_name = ".HPChatMsg.name"
HPCHATMSG_NAME_FIELD.number = 3
HPCHATMSG_NAME_FIELD.index = 2
HPCHATMSG_NAME_FIELD.label = 2
HPCHATMSG_NAME_FIELD.has_default_value = false
HPCHATMSG_NAME_FIELD.default_value = ""
HPCHATMSG_NAME_FIELD.type = 9
HPCHATMSG_NAME_FIELD.cpp_type = 9

HPCHATMSG_LEVEL_FIELD.name = "level"
HPCHATMSG_LEVEL_FIELD.full_name = ".HPChatMsg.level"
HPCHATMSG_LEVEL_FIELD.number = 4
HPCHATMSG_LEVEL_FIELD.index = 3
HPCHATMSG_LEVEL_FIELD.label = 2
HPCHATMSG_LEVEL_FIELD.has_default_value = false
HPCHATMSG_LEVEL_FIELD.default_value = 0
HPCHATMSG_LEVEL_FIELD.type = 5
HPCHATMSG_LEVEL_FIELD.cpp_type = 1

HPCHATMSG_ROLEITEMID_FIELD.name = "roleItemId"
HPCHATMSG_ROLEITEMID_FIELD.full_name = ".HPChatMsg.roleItemId"
HPCHATMSG_ROLEITEMID_FIELD.number = 5
HPCHATMSG_ROLEITEMID_FIELD.index = 4
HPCHATMSG_ROLEITEMID_FIELD.label = 2
HPCHATMSG_ROLEITEMID_FIELD.has_default_value = false
HPCHATMSG_ROLEITEMID_FIELD.default_value = 0
HPCHATMSG_ROLEITEMID_FIELD.type = 5
HPCHATMSG_ROLEITEMID_FIELD.cpp_type = 1

HPCHATMSG_CHATMSG_FIELD.name = "chatMsg"
HPCHATMSG_CHATMSG_FIELD.full_name = ".HPChatMsg.chatMsg"
HPCHATMSG_CHATMSG_FIELD.number = 6
HPCHATMSG_CHATMSG_FIELD.index = 5
HPCHATMSG_CHATMSG_FIELD.label = 2
HPCHATMSG_CHATMSG_FIELD.has_default_value = false
HPCHATMSG_CHATMSG_FIELD.default_value = ""
HPCHATMSG_CHATMSG_FIELD.type = 9
HPCHATMSG_CHATMSG_FIELD.cpp_type = 9

HPCHATMSG_AREA_FIELD.name = "area"
HPCHATMSG_AREA_FIELD.full_name = ".HPChatMsg.area"
HPCHATMSG_AREA_FIELD.number = 7
HPCHATMSG_AREA_FIELD.index = 6
HPCHATMSG_AREA_FIELD.label = 1
HPCHATMSG_AREA_FIELD.has_default_value = false
HPCHATMSG_AREA_FIELD.default_value = ""
HPCHATMSG_AREA_FIELD.type = 9
HPCHATMSG_AREA_FIELD.cpp_type = 9

HPCHATMSG_TITLEID_FIELD.name = "titleId"
HPCHATMSG_TITLEID_FIELD.full_name = ".HPChatMsg.titleId"
HPCHATMSG_TITLEID_FIELD.number = 8
HPCHATMSG_TITLEID_FIELD.index = 7
HPCHATMSG_TITLEID_FIELD.label = 1
HPCHATMSG_TITLEID_FIELD.has_default_value = false
HPCHATMSG_TITLEID_FIELD.default_value = 0
HPCHATMSG_TITLEID_FIELD.type = 5
HPCHATMSG_TITLEID_FIELD.cpp_type = 1

HPCHATMSG_PLAYERTYPE_FIELD.name = "playerType"
HPCHATMSG_PLAYERTYPE_FIELD.full_name = ".HPChatMsg.playerType"
HPCHATMSG_PLAYERTYPE_FIELD.number = 9
HPCHATMSG_PLAYERTYPE_FIELD.index = 8
HPCHATMSG_PLAYERTYPE_FIELD.label = 1
HPCHATMSG_PLAYERTYPE_FIELD.has_default_value = false
HPCHATMSG_PLAYERTYPE_FIELD.default_value = 0
HPCHATMSG_PLAYERTYPE_FIELD.type = 5
HPCHATMSG_PLAYERTYPE_FIELD.cpp_type = 1

HPCHATMSG.name = "HPChatMsg"
HPCHATMSG.full_name = ".HPChatMsg"
HPCHATMSG.nested_types = {}
HPCHATMSG.enum_types = {}
HPCHATMSG.fields = {HPCHATMSG_TYPE_FIELD, HPCHATMSG_PLAYERID_FIELD, HPCHATMSG_NAME_FIELD, HPCHATMSG_LEVEL_FIELD, HPCHATMSG_ROLEITEMID_FIELD, HPCHATMSG_CHATMSG_FIELD, HPCHATMSG_AREA_FIELD, HPCHATMSG_TITLEID_FIELD, HPCHATMSG_PLAYERTYPE_FIELD}
HPCHATMSG.is_extendable = false
HPCHATMSG.extensions = {}
HPPUSHCHAT_CHATMSG_FIELD.name = "chatMsg"
HPPUSHCHAT_CHATMSG_FIELD.full_name = ".HPPushChat.chatMsg"
HPPUSHCHAT_CHATMSG_FIELD.number = 1
HPPUSHCHAT_CHATMSG_FIELD.index = 0
HPPUSHCHAT_CHATMSG_FIELD.label = 3
HPPUSHCHAT_CHATMSG_FIELD.has_default_value = false
HPPUSHCHAT_CHATMSG_FIELD.default_value = {}
HPPUSHCHAT_CHATMSG_FIELD.message_type = HPCHATMSG
HPPUSHCHAT_CHATMSG_FIELD.type = 11
HPPUSHCHAT_CHATMSG_FIELD.cpp_type = 10

HPPUSHCHAT.name = "HPPushChat"
HPPUSHCHAT.full_name = ".HPPushChat"
HPPUSHCHAT.nested_types = {}
HPPUSHCHAT.enum_types = {}
HPPUSHCHAT.fields = {HPPUSHCHAT_CHATMSG_FIELD}
HPPUSHCHAT.is_extendable = false
HPPUSHCHAT.extensions = {}
HPALLIANCESWITCH_TAG_FIELD.name = "tag"
HPALLIANCESWITCH_TAG_FIELD.full_name = ".HPAllianceSwitch.tag"
HPALLIANCESWITCH_TAG_FIELD.number = 1
HPALLIANCESWITCH_TAG_FIELD.index = 0
HPALLIANCESWITCH_TAG_FIELD.label = 2
HPALLIANCESWITCH_TAG_FIELD.has_default_value = false
HPALLIANCESWITCH_TAG_FIELD.default_value = false
HPALLIANCESWITCH_TAG_FIELD.type = 8
HPALLIANCESWITCH_TAG_FIELD.cpp_type = 7

HPALLIANCESWITCH.name = "HPAllianceSwitch"
HPALLIANCESWITCH.full_name = ".HPAllianceSwitch"
HPALLIANCESWITCH.nested_types = {}
HPALLIANCESWITCH.enum_types = {}
HPALLIANCESWITCH.fields = {HPALLIANCESWITCH_TAG_FIELD}
HPALLIANCESWITCH.is_extendable = false
HPALLIANCESWITCH.extensions = {}

HPAllianceSwitch = protobuf.Message(HPALLIANCESWITCH)
HPChatMsg = protobuf.Message(HPCHATMSG)
HPPushChat = protobuf.Message(HPPUSHCHAT)
HPSendChat = protobuf.Message(HPSENDCHAT)

