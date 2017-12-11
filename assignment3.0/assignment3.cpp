/*Created by Alex Ortega on 11-01-17
    This program will simulate a game of nihm against a computer player.
    */
#include <iostream>// Include proper #'s'
#include <ctime>
#include <cstdlib>

using namespace std;


class GameofNim{// declare class
    private:
        int pile1;// private variables to be used throughout the program
        int pile2 ;
        int num_Rocks1;
        int num_Rocks2;
    public:
        GameofNim(){// default contstructor 
        int pile1=8;
        int pile2=8;
        int num_Rocks_1=0;
        int num_Rocks_2=0;
            return;
        }
        void PlayGame(int userPile, int userRocks){// function to play game
            if(userPile==1){
                pile1= pile1 - userRocks;
            }
            else{
                pile2= pile2 - userRocks;
            }
            return;
        }
        int GetRocks1(){
            return pile1;
        }
        int GetRocks2(){
            return pile2;
        }
        
    };
int main(){// main function
    int user1_Pile;
    int user1_Rocks;
    int computer_Pile;
    int computer_Rocks;
    srand(time(0));// draws a unique, randomized number when called
    GameofNim Game;
    
    cout << "This is a game called Nihm."<< endl;
    cout << "In this game you will start out with two piles of rocks, in each pile are 8 rocks."<< endl;
    cout << "To play, you have the choice of removing between 1 and 3 rocks from either pile 1 or 2."<< endl;
    cout << "You will be playing alongside a computer who will be trying to beat you."<< endl;
    cout << "If you remove the last rock, you win. However, if the computer removes the last rock, you lose."<< endl;
    
    
    
        while(Game.GetRocks1() > 0 || Game.GetRocks2() > 0){// while both piles are greater than 0
            
            cout<< "Choose a pile: remove rocks from pile 1 or 2 " << endl;
            cin >> user1_Pile;
        
           
        
        cout<< "take out either 1, 2, or 3 Rocks: ";
        cin >> user1_Rocks;
        }
         while(user1_Pile <1 || user1_Pile > 2){// when user tries to pull from a non existant pile
                cout<< "Only choose pile 1 or 2 "<< endl;
                cin >> user1_Pile;
}
        while (user1_Rocks < 1 || user1_Rocks >3){// prompts user to remove rocks 
            cout <<"Choose a number only between 1 and 3" << endl;
            cin >> user1_Rocks;
        }
        if(user1_Pile==1 && Game.GetRocks1()==0){// will prompt user to remove from pile 2 if pile 3 is empty
            cout << "Pile one has no Rocks. Choose how many you want to remove from pile 2."<<endl;
            cin>> user1_Rocks;
            user1_Pile=2;
        }
        if(user1_Pile==2 && Game.GetRocks2()==0){// prompts user to pull from pile 1 if pile 2 is empty
            cout << "Pile two has no Rocks to choose from. Choose how many rocks to remove from pile 1."<< endl;
            cin >> user1_Rocks;
        }
        if(user1_Pile==1 && user1_Rocks > Game.GetRocks1()){// prompts user to take less rocks if they choose too large an amount from 1
            cout << "Please choose to take "<< Game.GetRocks1() << " rocks or less."<< endl;
            cin >> user1_Rocks;
        }
        if(user1_Pile==2 && user1_Rocks > Game.GetRocks2()){//prompts uer to take less rocks if they choose too large an amount from 2
            cout << "Please choose to take " << Game.GetRocks2() << " Rocks or less." << endl;
            cin >> user1_Rocks;
        }
        Game.PlayGame(user1_Pile, user1_Rocks);
        
        cout << "You took " << user1_Rocks << "rocks from pile " << user1_Pile << endl;
        
        computer_Pile = (rand() % 2 + 1);// computer player randomized choices for which pile they choose from
        computer_Rocks = (rand() % 3 + 1);// computer player randomized choices for how many rocks they take
        
        if(Game.GetRocks2()==0){
            computer_Rocks=1;
        }
        if(Game.GetRocks1() == 0){
            computer_Rocks=2;
        }
        if(computer_Pile==1 && Game.GetRocks1() <= 3){
          computer_Rocks = Game.GetRocks1();  
        }
        if(computer_Rocks==2 && Game.GetRocks2() <= 3){
            computer_Rocks = Game.GetRocks2();
        }
        
        if(Game.GetRocks1()== 0 && Game.GetRocks2()==0){
            cout<< "You won the Game of Nihm!"<< endl;
            exit(0);
        }
        Game.PlayGame(computer_Pile, computer_Rocks);
        cout << "THE COMPUTER removed " << computer_Rocks << " stone(s) from pile " << computer_Pile << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "THERE ARE " << Game.GetRocks1() << " STONE(S) IN PILE 1 AND " << Game.GetRocks2() << " STONE(S) IN PILE 2" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << " " << endl;
        
        
        cout << "The computer won! Try again!";
        
        return 0;
}
/*
This is a game called Nihm.
In this game you will start out with two piles of rocks, in each pile are 8 rocks.
To play, you have the choice of removing between 1 and 3 rocks from either pile 1 or 2.
You will be playing alongside a computer who will be trying to beat you.
If you remove the last rock, you win. However, if the computer removes the last rock, you lose.
Choose a pile: remove rocks from pile 1 or 2 
1
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 1
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
2
take out either 1, 2, or 3 Rocks: 3
Choose a pile: remove rocks from pile 1 or 2 
*/