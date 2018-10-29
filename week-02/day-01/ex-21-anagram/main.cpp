#include <iostream>

bool isAnagram(std::string first, std::string second){
    bool isItAnagram = false;
    int firstLenght = first.length();
    int secondLenght = second.length();
    if(firstLenght != secondLenght)
        return isItAnagram;
    else{
        for(int i = 0; i < firstLenght; i++){
            if(first[i] != second[secondLenght - i -1])
                return isItAnagram;
        }
    }
    isItAnagram = true;
    return isItAnagram;
}

int main() {
    //Create a function named isAnagram following your current language's style guide.
    // It should take two strings and return a boolean value depending on whether its an anagram or not.
    isAnagram("cat", "tac");
    std::cout <<  std::boolalpha << isAnagram("cat", "tac") << std::endl;
    std::cout <<  std::boolalpha << isAnagram("dog", "god") << std::endl;
    std::cout <<  std::boolalpha << isAnagram("oooooooo", "uuuuuuuu") << std::endl;

    return 0;
}