#include <iostream>

void greet(std::string al){
    std::cout << "Greetings dear, " << al << "! " << std::endl;
}

int main() {
    std::string al = "GreenFox";
    greet(al);
    return 0;
}