#include "networkadapter.h"
#include "networkdevice.h"
#include "usbdevice.h"
#include <iostream>

NetworkAdapter::NetworkAdapter(int ID, int bandWidth, int usbType) : NetworkDevice(ID, bandWidth), USBDevice(ID, usbType), Device(ID){}

void NetworkAdapter::info() const {
    std::cout << _ID << ' ' << _bandWidth << ' ' << _usbType << std::endl;
}
