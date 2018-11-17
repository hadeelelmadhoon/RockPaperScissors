//
//  Human.hpp
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

#pragma once
#ifndef Human_h
#define Human_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "Player.h"
#include "Guess.h"
using namespace std;

#endif /* Human_h */

class Human : public Player{
private:
    string name;
public:
    Human(string nm);
    string getName()const{
        return name;
    }
    Guess getGuess() const;
    ~Human();
};
