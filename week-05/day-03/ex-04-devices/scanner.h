#ifndef EX_04_DEVICES_SCANNER_H
#define EX_04_DEVICES_SCANNER_H


class Scanner {
protected:
    int _speed;
public:
    Scanner(int speed);
    virtual void scan() const;

};


#endif //EX_04_DEVICES_SCANNER_H
