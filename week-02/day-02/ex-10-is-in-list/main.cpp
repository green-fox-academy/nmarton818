#include <iostream>
#include <vector>
#include <algorithm>

bool checkNums(std::vector<int> nums, std::vector<int> check){
    bool isInList = true;
    for(int i = 0; i < check.size(); i++){
        isInList = (std::find(nums.begin(), nums.end(), check[i]) != nums.end());
        if(!isInList)
            return isInList;
    }
    return isInList;
}

int main() {
    const std::vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    const std::vector<int> checker = {4, 8, 12, 16};

    // Check if vector contains all of the following elements: 4,8,12,16
    // Create a method that accepts vector as an input
    // it should return "true" if it contains all, otherwise "false"


    // Expected output: "Noooooo"
    if(checkNums(numbers, checker)){
        std::cout << "Good :)" << std::endl;
    }
    else{
        std::cout << "Not Good :(" << std::endl;
    }


    return 0;
}