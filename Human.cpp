//
//  Human.cpp
//  assn2
//
//  Created by Hadeel Elmadhoon on 2018-10-24.
//  Copyright © 2018 Hadeel Elmadhoon. All rights reserved.
//

#include "Human.h"

// initializes human inputed name and sets human initial score to 3
Human::Human(string nm):Player(3),name(nm){}

// asks for human input and returns their input
Guess Human::getGuess() const{
    char guess;
    cout<<"Enter (R,P,S): ";
    cin>>guess;
    Guess human(guess);
    return human.getGuess();
    
}

Human::~Human(){}
