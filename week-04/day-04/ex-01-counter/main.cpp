#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int counter(int n){
    if(n > 0){
    std::cout << n << ' ';
    return counter(n-1);
    } else
        return -1;
}

int main() {
    counter(10);
    return 0;
}