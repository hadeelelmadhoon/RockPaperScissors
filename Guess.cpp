#include "Guess.h"
#include <iostream>
using namespace std;

// Generates random input for computer
Guess::Guess(){
    srand(time(NULL));
    int randomGuess = (rand()%3);
    Guess gus(randomGuess);
    guess=gus.getGuess();
}

Guess::Guess(char guessValue){
    if(guessValue=='r' || guessValue=='R'){
        guess='R';
    }
    else if(guessValue=='p' || guessValue=='P'){
        guess='P';
    }
    else{
        guess='S';
    }
}

// converts randomly generated inputs for computer to R,P,S
Guess::Guess(int guessValue){
    if(guessValue==0){
        guess='R';
    }
    else if(guessValue==1){
        guess='P';
    }
    else{
        guess='S';
    }
}

// Comares human vs computer input to see who wins round 
int Guess:: compare(const Guess &other) const{
    if(guess == other.guess){
        return 0;
    }
    if((guess=='P')&&(other.guess=='R')){
        return -1;
    }
    else if((guess=='R')&&(other.guess=='S')){
        return -1;
    }
    else if((guess=='S')&&(other.guess=='P')){
        return -1;
    }
    else{
        return +1;
    }
}
Guess::~Guess(){}

