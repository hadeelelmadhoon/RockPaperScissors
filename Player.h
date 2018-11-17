//
//  Player.hpp
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

#pragma once
#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <iostream>
using namespace std;

#endif /* Player_h */

class Player{
private:
    int score;
public:
    Player(int initialScore);
    const int getScore(){
        return score;
    }
    Player& operator--();
    
    
    ~Player();
    
};
