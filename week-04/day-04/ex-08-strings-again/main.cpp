#include <iostream>

// Given a string, compute recursively a new string where all the 'x' chars have been removed.
std::string xRemoved(std::string& thisString, unsigned int pos){
    if(pos < thisString.size()){
        if(thisString[pos] == 'x'){
            thisString.erase(pos,1);
            return xRemoved(thisString, pos);
        } else
            return xRemoved(thisString, pos+1);
    }
    else
        return thisString;
}


int main() {
    std::string s = "x1x2x3x4x5x";
    std::cout << xRemoved(s, 0) << std::endl;
    return 0;
}