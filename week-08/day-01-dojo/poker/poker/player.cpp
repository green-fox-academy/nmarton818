#include "player.h"

Player::Player() {
    for(int i = 0; i < 5; i++){
        _cards[i].first = Suite::INVALID;
        _cards[i].second = Value::INVALID;
    }
}

Player::Player(const Card cards[5]) {
    for(int i = 0; i < 5; i++) {
        _cards[i].first = cards[i].first;
        _cards[i].second = cards[i].second;
    }
}

Player::Player(const Value values[5]) {
    for(int i = 0; i < 5; i++){
        _cards[i].first = Suite::INVALID;
        _cards[i].second = values[i];
    }
}

Value Player::getHighestCard() {
    Value highestValue = _cards[0].second;
    for(int i = 1; i < 5; i++){
        if(_cards[i].second > highestValue)
            highestValue = _cards[i].second;
    }
    return highestValue;
}
