#include <iostream>

void printParams(std::string a){
    std::cout << a << std::endl;
}

void printParams(std::string a, std::string b){
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

void printParams(std::string a, std::string b, std::string c) {
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}

int main() {
    printParams("Kutya");
    printParams("Cica", "Kacsa");
    printParams("Malac", "Kecske", "Ló");
    return 0;
}