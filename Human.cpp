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
