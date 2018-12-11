#include "poker.h"

int compareHighestCards(Player first, Player second){
    if(first.getHighestCard() > second.getHighestCard())
        return 1;
    else if(first.getHighestCard() < second.getHighestCard())
        return 2;
    else
        return 3;
}

int getWinner(Player first, Player second){
    return compareHighestCards(first, second);
}