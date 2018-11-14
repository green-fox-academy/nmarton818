#include <iostream>

#include "diceset.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();
    int cnt = 0;
    int sum = 0;
    int sixCnt = 1;
    std::vector<int> temp = diceSet.getCurrent();
    bool allSix = false;

        while (!allSix) {
            if (temp[0] == 6 && temp[1] == 6 && temp[2] == 6 && temp[3] == 6 && temp[4] == 6 && temp[5] == 6)
                allSix = true;
            std::cout << cnt << ". roll: ";
            for (int i = 0; i < 6; i++) {
                std::cout << temp[i] << ' ';
            }
            diceSet.roll();
            temp = diceSet.getCurrent();
            cnt++;
            std::cout << std::endl;
        }

    std::cout << "It took: " << sum << " tries!" << std::endl;

    return 0;
}