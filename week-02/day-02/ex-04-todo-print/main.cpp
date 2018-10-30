#include <iostream>

int main() {
     std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo
    todoText += " - Download games\n    - Diablo\n";
    std::cout << todoText;


    return 0;
}