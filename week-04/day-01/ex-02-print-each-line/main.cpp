#include <iostream>
#include <fstream>


int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory
    std::ifstream myFile;
    try {
        myFile.open("my-file.txt");
        if (!myFile.good())
            throw -10;
        std::string text;
        while (getline(myFile, text)) {
            std::cout << text << std::endl;
        }
    } catch (int e) {
        std::cerr << "No file found!" << std::endl;
    }
    return 0;
}