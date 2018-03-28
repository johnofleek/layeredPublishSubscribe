# Layered Publish-Subscribe Handlers

Demostrates an event being generated in one component and triggered in another component

## Event generator (IPC server)
./temperatureComponent/temperatureMain.c


## Event triggered in (IPC client) 
There are two apps that want to receive the temperature event. They both register for the event and both receive events from the temperatureComponent

./appComponent/main.cpp

./appComponent2/main.cpp

## Component to component interface
The file <temperature.api> contains the description of the api. This used by the legato build system to automatically create the client and server interface code files


# To build the app

make wp85


