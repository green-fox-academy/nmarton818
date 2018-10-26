#include <iostream>

int main() {
    for(int i = 0; i < 500; i++){
        if(i % 2 == 0)
            std::cout << i << std::endl;
    }
    return 0;
}