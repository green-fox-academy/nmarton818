#include <iostream>
#include "device.h"
#include "networkdevice.h"
#include "usbdevice.h"
#include "networkadapter.h"

int main() {
    NetworkAdapter a(10, 111, 10);
    a.info();
    return 0;
}