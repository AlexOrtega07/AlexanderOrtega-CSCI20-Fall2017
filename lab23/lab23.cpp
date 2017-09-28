/*This program was created on 9-27-17 by Alex Ortega
    This program will incorperate two major functions. It will incorporate 
    a random number generator that will generate a number between two values of the user's 
    choice. It will accept two values, swap them using the Swap function and it will output
    a random number between them.
    */
    
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    using namespace std;
    
    void RandomNumbers (int Num1, int Num2){//the name of our function is RandomNumbers, we will need to call it later
        srand(time(0));//we use ctime in order to get a different random number each time the funciton is run
        int Num3 = (rand()% (Num2-Num1)) + Num1;
        std::swap(Num1,Num2);//the swap function needs to be in the function declaration before the main.
        cout << "A random number between " << Num1 << " and " << Num2 << " is " << Num3 <<".";
    }
    int main(){
        int num1 = 0;//the variables need to have a value set to them.
        int num2 = 0;
        
        cout << "Select a number: ";// select a smaller number first(user input)
        cin >> num1;
        cout << "Select a larger number: ";//select a larger number(user input)
        cin >> num2;
        
        RandomNumbers(num1,num2);
        
        return 0;
    }
    
    
   /* Select a number: 1
Select a larger number: 10
A random number between 10 and 1 is 8.
*/