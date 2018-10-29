#include <iostream>

std::string appendA(std::string x){
    return x + 'a';
}

int main() {
    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end
    std::string animals[] = {"koal", "pand", "zebr"};

    for(int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++){
        animals[i] = appendA(animals[i]);
        std::cout << animals[i] << ' ';
    }


    return 0;
}