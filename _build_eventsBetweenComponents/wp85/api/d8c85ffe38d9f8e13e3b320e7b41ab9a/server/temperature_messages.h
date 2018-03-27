/*
 * ====================== WARNING ======================
 *
 * THE CONTENTS OF THIS FILE HAVE BEEN AUTO-GENERATED.
 * DO NOT MODIFY IN ANY WAY.
 *
 * ====================== WARNING ======================
 */


#ifndef TEMPERATURE_MESSAGES_H_INCLUDE_GUARD
#define TEMPERATURE_MESSAGES_H_INCLUDE_GUARD


#include "legato.h"

#define PROTOCOL_ID_STR "f347097bf8a2ca027f2277a8866e58b3"

#ifdef MK_TOOLS_BUILD
    extern const char** temperature_ServiceInstanceNamePtr;
    #define SERVICE_INSTANCE_NAME (*temperature_ServiceInstanceNamePtr)
#else
    #define SERVICE_INSTANCE_NAME "temperature"
#endif


// todo: This will need to depend on the particular protocol, but the exact size is not easy to
//       calculate right now, so in the meantime, pick a reasonably large size.  Once interface
//       type support has been added, this will be replaced by a more appropriate size.
#define _MAX_MSG_SIZE 1100

// Define the message type for communicating between client and server
typedef struct
{
    uint32_t id;
    uint8_t buffer[_MAX_MSG_SIZE];
}
_Message_t;

#define _MSGID_temperature_AddIncomingMessageHandler 0
#define _MSGID_temperature_RemoveIncomingMessageHandler 1


#endif // TEMPERATURE_MESSAGES_H_INCLUDE_GUARD

