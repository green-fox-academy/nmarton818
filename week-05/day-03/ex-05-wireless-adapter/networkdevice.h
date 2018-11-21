#ifndef EX_05_WIRELESS_ADAPTER_NETWORKDEVICE_H
#define EX_05_WIRELESS_ADAPTER_NETWORKDEVICE_H

#include "device.h"

class NetworkDevice : virtual public Device {
protected:
    int _bandWidth;
public:
    NetworkDevice(int ID, int bandWidth);
};


#endif //EX_05_WIRELESS_ADAPTER_NETWORKDEVICE_H
