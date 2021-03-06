#include <iostream>
#include <vector>
#include <algorithm>

bool isPalindrome(const std::string &isIt);
std::vector<std::string> palindromes(const std::string &searchThis);


int main() {
    std::string anna = "anna";
    std::string bela = "belddddddaleb";
    std::string temp;
    temp.assign(bela, 1, 4);
    //Create a function named search palindrome following your current language's style guide.
    // It should take a string, search for palindromes that at least 3 characters long and return a list with the found palindromes.

    std::vector<std::string> palis = palindromes("AaAaa CiCcicCiC aaAaA");
    //palis = palindromes(bela);
    //palis = palindromes(anna);

    for(unsigned i = 0; i < palis.size(); i++){
        std::cout << palis.at(i) << "| |";
    }


    return 0;
}

std::vector<std::string> palindromes(const std::string &searchThis){
    std::vector<std::string> theseArePalis;
    std::string temp;
    int size = searchThis.length();

    if(size >= 3) {
        for (unsigned currSize = 3; currSize <= size; currSize++){
            for(unsigned currPos = 0; currPos <= size - currSize; currPos++){
                temp.assign(searchThis, currPos, currSize);
                if(isPalindrome(temp) && std::find(theseArePalis.begin(), theseArePalis.end(), temp) == theseArePalis.end()){
                    theseArePalis.push_back(temp);
                }
            }
        }
    }
    else{
        std::cout << "Too short string, cannot do anything with it!" << std::endl;
    }
    return theseArePalis;
}

//Let's check if the string is a palindrom or not
bool isPalindrome(const std::string &isIt){
    bool palindrome = true;
    int size = isIt.length();
    for(int i = 0; i < size/2; i++){
        if(isIt[i] != isIt[size-i-1]){
            palindrome = false;
            break;
        }
    }
    return palindrome;
}