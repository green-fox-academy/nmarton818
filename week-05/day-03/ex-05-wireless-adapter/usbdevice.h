#ifndef EX_05_WIRELESS_ADAPTER_USBDEVICE_H
#define EX_05_WIRELESS_ADAPTER_USBDEVICE_H

#include "device.h"

class USBDevice : virtual public Device{
protected:
    int _usbType;
public:
    USBDevice(int ID, int usbType);
};


#endif //EX_05_WIRELESS_ADAPTER_USBDEVICE_H
