//Created by ALex Ortega 10-18-17
/*This program will simulate a guesing game, reading a value between 1 and 50.
The program will prompt the user to whether their guess is too low or too high and 
ask them to guess again. The user will keep playing until they are correct.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(){
  srand(time(0));
  int chosenNumber = rand()%50+1;
  int userChosen =0;
  cout<< "Please enter a number 1-50."<<endl;
  cin>> userChosen;
  while (userChosen> chosenNumber){
    cout<<"3"<<" 2 "<<"1.."<<endl;
    cout<<"choose again too big"<<endl;
    cin >> userChosen;
    
  }
    for (userChosen=0;userChosen<chosenNumber;++userChosen){
      cout<<"3"<<" 2 "<<"1.."<<endl;
      cout<<"choose again too small"<<endl;
      cin>> userChosen;
      
    }
  while (userChosen=chosenNumber){
    cout<<"3"<<" 2 "<<"1.."<<endl;
    cout<<"Just Right!"<<endl;
    return 0;
    }
  }
   
  
