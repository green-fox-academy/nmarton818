#include <iostream>
#include <fstream>

void writeIntoFile(std::string path, std::string word, int number){
    std::ofstream FILE;
    FILE.open(path);
    try{
        if(FILE.is_open()){
            for(int i = 0; i < number; i++){
                FILE << word << std::endl;
            }
            FILE.close();
        }
        else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening file!" << std::endl;
    }
}

int main() {
    // Create a function that takes 3 parameters: a path, a word and a number,
    // than it should write to a file.
    // The path parameter should describes the location of the file.
    // The word parameter should be a string, that will be written to the file as lines
    // The number paramter should describe how many lines the file should have.
    // So if the word is "apple" and the number is 5, than it should write 5 lines
    // to the file and each line should be "apple"
    writeIntoFile("dogs.txt", "corgi", 100);

    return 0;
}