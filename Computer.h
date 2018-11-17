#pragma once
#ifndef Computer_h
#define Computer_h

#include <stdio.h>
#include <iostream>
#include "Player.h"
#include "Guess.h"
using namespace std;
#endif /* Computer_h */

class Computer : public Player{
public:
    Computer();
    Guess getGuess() const;
    ~Computer();
};
