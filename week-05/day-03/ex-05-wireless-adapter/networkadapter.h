#ifndef EX_05_WIRELESS_ADAPTER_NETWORKADAPTER_H
#define EX_05_WIRELESS_ADAPTER_NETWORKADAPTER_H

#include "networkdevice.h"
#include "usbdevice.h"

class NetworkAdapter : public USBDevice, public NetworkDevice {
public:
    NetworkAdapter(int ID, int bandWidth, int usbType);
    void info() const;
};


#endif //EX_05_WIRELESS_ADAPTER_NETWORKADAPTER_H
