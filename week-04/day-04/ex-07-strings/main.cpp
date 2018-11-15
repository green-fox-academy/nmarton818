#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
std::string xToY(std::string& thisString, int pos){
    if(pos < thisString.size()) {
        if (thisString[pos] == 'x')
            thisString[pos] = 'y';
        return xToY(thisString, pos+1);
    }
    else
        return thisString;
}


int main() {
    std::string s = "xxx000xxx";
    std::cout << xToY(s, 0) << std::endl;
    return 0;
}