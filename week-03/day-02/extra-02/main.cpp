#include <iostream>
#include <string>


int main() {
    std::string s = "0123456789";
    std::string* sPtr = &s;
    std::cout << sPtr << ' ' << *sPtr  << std::endl;
    std::cout << &s << ' ' << s << std::endl;
    //std::cout <<  << ' ' << s << std::endl;

    for(unsigned i = 0; i < 10; i++){
        std::cout << s[i] << ' ';
        std::cout <<  (void*) &s[i] << std::endl;
        sPtr = (std::string*) (void*) &s[i];
        std::cout << "sptr: " << sPtr << std::endl;
    }

    for(int i = 0; i < 10; i++) {
        std::cout << &(s[i]) << ' ' << s[i] << ' ';
        std::cout << sPtr << std::endl;

        //}
    }
    return 0;
}