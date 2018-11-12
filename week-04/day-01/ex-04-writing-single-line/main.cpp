#include <iostream>
#include <fstream>


int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::ofstream myFile;
    std::string itMe = "Nagy Marton";
    myFile.open("my-name.txt");
    try{
        if(myFile.is_open()){
            myFile << itMe;
            std::cout << "Successfully done!" << std::endl;
        }
        else
            throw -10;
    } catch (int e) {
        std::cerr << "Error opening file!" << std::endl;
    }

    return 0;
}