#include <iostream>
#include <fstream>

int linesInFile(std::string fileName){
    int lines = 0;
    std::ifstream myFile;
    try {
        myFile.open(fileName);
        if (!myFile.is_open())
            throw -1;
        std::string text;
        while (getline(myFile, text))
            lines++;

    } catch (int e) {
        std::cerr << "No file found!" << std::endl;
        return 0;
    }
    return lines;
}


int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::string file = "cats.txt";
   std::cout << "There are " << linesInFile(file) << " lines in the file!" << std::endl;


    return 0;
}