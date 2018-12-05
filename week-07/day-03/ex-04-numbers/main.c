#include <stdio.h>

int main() {
    // Create a program that prints a few operations on two numbers: 22 and 13
    // Print the result of 13 added to 22
    int n;
    n = 13 +22;
    printf("%d\n", n);
    // Print the result of 13 substracted from 22
    n = 22 -13;
    printf("%d\n", n);
    // Print the result of 22 multiplied by 13
    n = 22 * 13;
    printf("%d\n", n);
    // Print the result of 22 divided by 13 (as a decimal fraction)
    float f = (float) 22 / 13;
    printf("%f\n", f);
    // Print the reminder of 22 divided by 13
    n = 22 % 13;
    printf("%d\n", n);
    // Store the results in variables and use them when you display the result

    return 0;
}