//
//  Player.cpp
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

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
