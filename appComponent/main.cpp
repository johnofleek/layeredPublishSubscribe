/**
 ** i2c LCD test application
 **
 ** Author: Kaj-Michael Lang <milang@tal.org>
 ** Copyright 2014 - Under creative commons license 3.0 Attribution-ShareAlike CC BY-SA
 **/
#include "legato.h"
#include "interfaces.h"

/*
 * Called from Event loop in  temperature app
 */
void main_temperatureReading_cbh (const char* key, double value, void* contextPtr)
{
	LE_INFO("%s %f", key,value);
}



COMPONENT_INIT
{   
    LE_INFO("started");
    
    int stuff = 2;

    temperature_AddIncomingMessageHandler (main_temperatureReading_cbh, &stuff );

    LE_INFO("start done");
}
