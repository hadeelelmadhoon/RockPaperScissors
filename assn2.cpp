#include <iostream>
#include "Guess.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"

int main() {
    string playerName;
    // ask user for their name
    cout<<"Player name: ";
    cin>>playerName;
    Human human = Human(playerName);
    Computer computer = Computer();
    
    // User input loops until human or computer score is equal to zero
    while(bool game=true){
        Guess hm(human.getGuess());
        Guess cmp(computer.getGuess());
        cout<<"Human: "<<hm.getGuess()<<" Computer: "<<cmp.getGuess()<<endl;
        if(hm.compare(cmp)==-1){
            --human;
        }
        else if(hm.compare(cmp)==+1){
            --computer;
        }
        else if(hm.compare(cmp)==0){}
        cout<<"Human: "<<human.getScore()<<" Computer: "<<computer.getScore()<<endl;
        
        if((human.getScore()==0)||(computer.getScore()==0)){
            break;
        }
    }
    
    // Winner output
    if(human.getScore()==0){
        cout<<human.getName()<<" WON!!!"<<endl;
    }
    else if(computer.getScore()==0){
        cout<<"The computer WON!!!"<<endl;
    }
    
    char c;
    cin>>c;
}


