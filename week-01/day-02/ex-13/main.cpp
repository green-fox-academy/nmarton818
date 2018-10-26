#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int secondsDaily = (24 * 60 * 60);
    int current = (currentHours * 60 * 60) + (currentMinutes * 60) + currentSeconds;

    std::cout << "There are " << secondsDaily - current << " left today!" << std::endl;

    return 0;
}