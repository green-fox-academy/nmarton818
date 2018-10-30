#include <iostream>

int main() {
     std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function
    std::string adding = "It always takes longer than you";


    quote.replace(18, 6, adding);
    std::cout << quote << std::endl;

    return 0;
}