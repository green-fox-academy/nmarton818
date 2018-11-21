#include "usbdevice.h"
#include "device.h"

USBDevice::USBDevice(int ID, int usbType) : Device(ID), _usbType(usbType){}

