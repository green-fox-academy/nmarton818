#include "device.h"

Device::Device(int ID) : _ID(ID){};

int Device::getID() const {
    return _ID;
}
