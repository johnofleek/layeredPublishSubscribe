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
 *
 * Connect the current client thread to the service providing this API. Block until the service is
 * available.
 *
 * For each thread that wants to use this API, either ConnectService or TryConnectService must be
 * called before any other functions in this API.  Normally, ConnectService is automatically called
 * for the main thread, but not for any other thread. For details, see @ref apiFilesC_client.
 *
 * This function is created automatically.
 */
//--------------------------------------------------------------------------------------------------
void temperature_ConnectService
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 *
 * Try to connect the current client thread to the service providing this API. Return with an error
 * if the service is not available.
 *
 * For each thread that wants to use this API, either ConnectService or TryConnectService must be
 * called before any other functions in this API.  Normally, ConnectService is automatically called
 * for the main thread, but not for any other thread. For details, see @ref apiFilesC_client.
 *
 * This function is created automatically.
 *
 * @return
 *  - LE_OK if the client connected successfully to the service.
 *  - LE_UNAVAILABLE if the server is not currently offering the service to which the client is bound.
 *  - LE_NOT_PERMITTED if the client interface is not bound to any service (doesn't have a binding).
 *  - LE_COMM_ERROR if the Service Directory cannot be reached.
 */
//--------------------------------------------------------------------------------------------------
le_result_t temperature_TryConnectService
(
    void
);

//--------------------------------------------------------------------------------------------------
/**
 *
 * Disconnect the current client thread from the service providing this API.
 *
 * Normally, this function doesn't need to be called. After this function is called, there's no
 * longer a connection to the service, and the functions in this API can't be used. For details, see
 * @ref apiFilesC_client.
 *
 * This function is created automatically.
 */
//--------------------------------------------------------------------------------------------------
void temperature_DisconnectService
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

