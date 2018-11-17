//
//  Guess.h
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

#pragma once
#ifndef Guess_h
#define Guess_h

#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;
#endif /* Guess_h */

class Guess{
private:
    char guess;
public:
    char getGuess(){
        return guess;
    }
    Guess();
    Guess(char guessValue);
    Guess(int guessValue);
    int compare(const Guess &other) const;
    
    
    
    ~Guess();
};



