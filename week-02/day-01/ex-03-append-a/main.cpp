#include <iostream>

std::string appendAFunc(std::string al){
    return al + 'a';
}

int main() {
    std::string typo = "Chincill";
    std::cout << appendAFunc(typo) << std::endl;
    return 0;
}