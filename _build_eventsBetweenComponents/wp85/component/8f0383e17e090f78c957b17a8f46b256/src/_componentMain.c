/*
 * AUTO-GENERATED _componentMain.c for the temperatureComponent component.

 * Don't bother hand-editing this file.
 */

#include "legato.h"
#include "../src/eventLoop.h"
#include "../src/log.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const char* _temperatureComponent_le_cfg_ServiceInstanceName;
const char** le_cfg_ServiceInstanceNamePtr = &_temperatureComponent_le_cfg_ServiceInstanceName;
void le_cfg_ConnectService(void);
extern const char* _temperatureComponent_temperature_ServiceInstanceName;
const char** temperature_ServiceInstanceNamePtr = &_temperatureComponent_temperature_ServiceInstanceName;
void temperature_AdvertiseService(void);
// Component log session variables.
le_log_SessionRef_t temperatureComponent_LogSession;
le_log_Level_t* temperatureComponent_LogLevelFilterPtr;

// Component initialization function (COMPONENT_INIT).
void _temperatureComponent_COMPONENT_INIT(void);

// Library initialization function.
// Will be called by the dynamic linker loader when the library is loaded.
__attribute__((constructor)) void _temperatureComponent_Init(void)
{
    LE_DEBUG("Initializing temperatureComponent component library.");

    // Advertise server-side IPC interfaces.
    temperature_AdvertiseService();

    // Connect client-side IPC interfaces.
    le_cfg_ConnectService();

    // Register the component with the Log Daemon.
    temperatureComponent_LogSession = log_RegComponent("temperatureComponent", &temperatureComponent_LogLevelFilterPtr);

    //Queue the COMPONENT_INIT function to be called by the event loop
    event_QueueComponentInit(_temperatureComponent_COMPONENT_INIT);
}


#ifdef __cplusplus
}
#endif
