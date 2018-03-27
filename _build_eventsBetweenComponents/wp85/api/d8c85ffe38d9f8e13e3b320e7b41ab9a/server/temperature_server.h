/*
 * ====================== WARNING ======================
 *
 * THE CONTENTS OF THIS FILE HAVE BEEN AUTO-GENERATED.
 * DO NOT MODIFY IN ANY WAY.
 *
 * ====================== WARNING ======================
 */


#ifndef TEMPERATURE_INTERFACE_H_INCLUDE_GUARD
#define TEMPERATURE_INTERFACE_H_INCLUDE_GUARD


#include "legato.h"

//--------------------------------------------------------------------------------------------------
/**
 * Get the server service reference
 */
//--------------------------------------------------------------------------------------------------
le_msg_ServiceRef_t temperature_GetServiceRef
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * Get the client session reference for the current message
 */
//--------------------------------------------------------------------------------------------------
le_msg_SessionRef_t temperature_GetClientSessionRef
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 * Initialize the server and advertise the service.
 */
//--------------------------------------------------------------------------------------------------
void temperature_AdvertiseService
(
    void
);


//--------------------------------------------------------------------------------------------------
/**
 * This event generates the temperature data
 */
//--------------------------------------------------------------------------------------------------
#define TEMPERATURE_KEY_SIZE 16


//--------------------------------------------------------------------------------------------------
/**
 * Reference type used by Add/Remove functions for EVENT 'temperature_IncomingMessage'
 */
//--------------------------------------------------------------------------------------------------
typedef struct temperature_IncomingMessageHandler* temperature_IncomingMessageHandlerRef_t;


//--------------------------------------------------------------------------------------------------
/**
 * This handler ...
 *
 * @param key
 * @param value
 * @param contextPtr
 */
//--------------------------------------------------------------------------------------------------
typedef void (*temperature_temperatureCbhFunc_t)
(
    const char* key,
    double value,
    void* contextPtr
);

//--------------------------------------------------------------------------------------------------
/**
 * Add handler function for EVENT 'temperature_IncomingMessage'
 */
//--------------------------------------------------------------------------------------------------
temperature_IncomingMessageHandlerRef_t temperature_AddIncomingMessageHandler
(
    temperature_temperatureCbhFunc_t handlerPtr,
        ///< [IN]

    void* contextPtr
        ///< [IN]
);

//--------------------------------------------------------------------------------------------------
/**
 * Remove handler function for EVENT 'temperature_IncomingMessage'
 */
//--------------------------------------------------------------------------------------------------
void temperature_RemoveIncomingMessageHandler
(
    temperature_IncomingMessageHandlerRef_t addHandlerRef
        ///< [IN]
);


#endif // TEMPERATURE_INTERFACE_H_INCLUDE_GUARD

