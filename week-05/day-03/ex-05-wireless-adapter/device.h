#ifndef EX_05_WIRELESS_ADAPTER_DEVICE_H
#define EX_05_WIRELESS_ADAPTER_DEVICE_H


class Device {
protected:
    int _ID;
public:
    explicit Device(int ID);
    virtual int getID() const;
};


#endif //EX_05_WIRELESS_ADAPTER_DEVICE_H
