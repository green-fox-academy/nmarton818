#include <iostream>
#include <string>

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a '*'.
std::string separatedByStars(std::string& thisString, unsigned int pos){
    if(pos < thisString.size()-1){
        thisString.insert(pos+1, "*");
        return separatedByStars(thisString, pos+2);
    } else
        return thisString;
}


int main() {
    std::string a = "oooooOOOOOooooo";

    std::cout << separatedByStars(a, 0) << std::endl;
    return 0;
}