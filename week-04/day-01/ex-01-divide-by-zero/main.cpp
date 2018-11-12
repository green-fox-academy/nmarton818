#include <iostream>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    int parameter;
    try {
        std::cout << "Gimme a number!" << std::endl;
        std::cin >> parameter;
        if (parameter == 0) {
            throw -1;
        }
        std::cout << 10 / parameter << std::endl;
        } catch(int e){
            std::cout << "Fail!" << std::endl;
        }


    return 0;
}