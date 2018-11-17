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
