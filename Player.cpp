#include "Player.h"
#include <iostream>
using namespace std;

// sets player's initial score
Player::Player(int initialScore){
    score = initialScore;
}

// overrides prefix decrement operator to decrease the score by 1
Player& Player::operator--(){
    score-=1;
    return *this;
}
Player::~Player(){}
