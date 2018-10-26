#include <iostream>

int main() {
    int dailyCoding = 6;
    int weeks = 17;
    int workdays = 5;

    std::cout << "A Green Fox attendee codes " << dailyCoding * weeks * workdays << " hours per semester." << std::endl;
    float percentage = 52 / float(dailyCoding) * workdays;
    std::cout << "We code for " << dailyCoding * workdays << " hours weekly. It's " << percentage << "% of the avarage working hours weekly." << std::endl;

    return 0;
}