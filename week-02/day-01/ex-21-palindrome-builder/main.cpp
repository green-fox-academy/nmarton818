#include <iostream>

std::string palindromeBuilder(std::string pali){
    int size = pali.length();
    for(int i = 0; i < size; i++){
        pali += pali[size - i -1];
    }
    return pali;
}

int main() {
    std::cout << palindromeBuilder("Bela") << std::endl;
    std::cout << palindromeBuilder("Marci") << std::endl;
    std::cout << palindromeBuilder("A fedel") << std::endl;
    return 0;
}