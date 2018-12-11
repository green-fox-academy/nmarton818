#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H

#include <utility>

enum class Value{
    INVALID = 0;
    Two = 2,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Jack = 10,
    Queen = 11,
    King = 12,
    Ace = 13
};

enum class Suite{
    INVALID = 0;
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

typedef std::pair<Suite, Value> Card;

class Player {
private:
    Card _cards[5];
public:
    Player(const Value values[5]);
    Player(const Card cards[5]);
    Player();
    Value getHighestCard();
};


#endif //POKER_PLAYER_H
