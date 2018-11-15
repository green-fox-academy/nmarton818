#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial

int refactorio(int n){
    if(n > 0){
        return n*refactorio(n-1);
    }
    else
        return 1;
}


int main() {
    std::cout << refactorio(10) << std::endl;
    return 0;
}