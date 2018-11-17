//
//  Computer.hpp
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

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
