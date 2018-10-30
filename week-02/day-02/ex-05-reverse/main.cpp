#include <iostream>

std::string reverse(const std::string& text) {
    std::string newOne = text;
    int size = text.length();
    for(int i = 0; i < size; i++){
        newOne[i] = text[size - i-1];
    }
    return newOne;

}


int main() {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.
    std::string inOrder = reverse(reversed);
    std::cout << inOrder << std::endl;
    return 0;
}