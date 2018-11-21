#include "scanner.h"
#include <iostream>

Scanner::Scanner(int speed) : _speed(speed){}

void Scanner::scan() const {
    std::cout << "I'm scanning a document " << _speed << " ppm." << std::endl;
}
