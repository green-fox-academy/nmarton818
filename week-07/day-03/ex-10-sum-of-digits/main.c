#include <stdio.h>

int sumOfDigits(int remaining, int sum){
    while (remaining > 0) {
        sum += remaining % 10;
        remaining /= 10;
        sumOfDigits(remaining, sum);
    }
    return sum;
}

int sumOfDigitsEqual(int first, int second){
    return (sumOfDigits(first, 0) == sumOfDigits(second, 0));
}

int main() {
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0
    printf("123 and 321: %d\n", sumOfDigitsEqual(123, 321));
    printf("723 and 114: %d\n", sumOfDigitsEqual(723, 114));


    return 0;
}