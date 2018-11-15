#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
int addsUptoN(int n){
    if(n > 0){
        return n + addsUptoN(n-1);
    }
    else
        return 0;
}


int main() {
    std::cout  << addsUptoN(15) << std::endl;
    return 0;
}