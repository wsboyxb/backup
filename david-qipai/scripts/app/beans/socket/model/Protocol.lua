local Protocol = {}
Protocol.TEST_NOT_HEAD_BEGIN = 256
Protocol.TEST_HALF_HEAD = 257
Protocol.TEST_ONLY_HEAD = 258
Protocol.TEST_HALF_PACKET = 259
Protocol.TEST_MULTI_PACKETS = 260
Protocol.TEST_ILLEGAL_PACKET = 261
Protocol.CLI_REQUEST_LOGIN = 4097
Protocol.CLI_REQUEST_LOGOUT = 4113
Protocol.CLI_REQUEST_SIT = 4129
Protocol.CLI_REQUEST_BET = 4177
Protocol.CLI_REQUEST_SPEAK = 4241
Protocol.CLI_REQUEST_STAND = 4273
Protocol.CLI_REQUEST_AUTO_BUYIN = 4289
Protocol.CLI_REQUEST_CANCEL_AUTO_BUYIN = 4305
Protocol.CLI_REQUEST_SEND_EMOJI = 4337
Protocol.CLI_REQUEST_SEND_CHAT = 4321
Protocol.CLI_REQUEST_SEND_CHIP = 4385
Protocol.SVR_LOGIN_SUCCESS = 8193
Protocol.SVR_LOGIN_FAIL = 8194
Protocol.SVR_LOGOUT_SUCCESS = 8209
Protocol.BROADCAST_SIT = 8225
Protocol.SVR_SIT_FAIL = 8226
Protocol.BROADCAST_GAME_START = 8241
Protocol.BROADCAST_BET_TURN = 8257
Protocol.BROADCAST_BET = 8273
Protocol.SVR_BET_FAIL = 8274
Protocol.BROADCAST_DEAL = 8289
Protocol.BROADCAST_POK = 8305
Protocol.BROADCAST_SPEAK_TURN = 8321
Protocol.BROADCAST_SPEAK = 8337
Protocol.SVR_SPEAK_FAIL = 8338
Protocol.BROADCAST_GAME_OVER = 8353
Protocol.BROADCAST_STAND = 8369
Protocol.SVR_STAND_FAIL = 8370
Protocol.SVR_AUTO_BUYIN_SUCCESS = 8385
Protocol.SVR_AUTO_BUYIN_FAIL = 8386
Protocol.SVR_CANCEL_AUTO_BUYIN_SUCCESS = 8401
Protocol.SVR_CANCEL_AUTO_BUYIN_FAIL = 8402
Protocol.BROADCAST_BANKER_ESCAPE = 8354
Protocol.BROADCAST_EMOJI = 8433
Protocol.BROADCAST_CHAT = 8417
Protocol.BROADCAST_INTERACTION_EQUIP = 8449
Protocol.BROADCAST_ADD_FRIEND = 8465
Protocol.BROADCAST_SENDCHIP_SUCCESS = 8481
Protocol.SVR_SENDCHIP_FAIL = 8482
Protocol.BROADCAST_SEND_GIFT = 8497
Protocol.BROADCAST_APPLY_GIFT = 8513
Protocol.SVR_USER_BANKRUPT = 8529
Protocol.BROADCAST_SERVER_UPDATE = 8545
Protocol.CLI_CONNECT_BACKEND = 12289
Protocol.CLI_HEART_BEAT = 12305
Protocol.CLI_CLOSE_BACKEND = 12321
Protocol.SVR_CONNECT_BACKEND_SUCCESS = 16385
Protocol.SVR_CONNECT_BACKEND_FAIL = 16386
Protocol.SVR_HEART_BEAT = 16401
Protocol.SVR_CLOSE_BACKEND_SUCCESS = 16417
Protocol.SVR_CLOSE_BACKEND_FAIL = 16418
Protocol.CLI_LOGIN_BROADCAST = 20481
Protocol.CLI_TRANSMIT_MULTICAST = 20497
Protocol.CLI_TRANSMIT_BROADCAST = 20513
Protocol.CLI_LOGOUT_BROADCAST = 20561
Protocol.SVR_LOGIN_BROADCAST_SUCCESS = 24577
Protocol.SVR_LOGIN_BROADCAST_FAIL = 24578
Protocol.SVR_TRANSMIT_MULTICAST = 24593
Protocol.SVR_TRANSMIT_BROADCAST = 24609
Protocol.SVR_SYSTEM_MULTICAST = 24625
Protocol.SVR_SYSTEM_BROADCAST = 24641
Protocol.SVR_LOGOUT_BROADCAST_SUCCESS = 24657
return Protocol
