#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
int sumOfDigits(int n){
    if(n > 0){
        return (n % 10) + sumOfDigits(n/10);
    } else
        return 0;
}


int main() {
    std::cout << sumOfDigits(20100) << std::endl;
    return 0;
}