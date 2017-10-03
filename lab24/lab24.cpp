/*Created by ALex Ortega on 10/2/17
This program will incorperate a random number generator that will accept two numbers 
swap them, and return a number between the two values. The program will also accept the unit 
pounds then convert to kilograms and vise versa.
*/



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber (int Num1, int Num2){// the function name is going to be RandomNumbers
    srand(time(0));//guarantees different number each time
    int Num3 = (rand()% (Num2-Num1)) + Num1;
    std::swap(Num1,Num2);//swap function will swap the two user values
    cout << "random number between "<<Num1 <<" and " << Num2 << " is "<< Num3 << ".";
    cout<< endl;
    //Num3 is our base pounds to start with
    double Kg=.45;
    double Lbs_to_kg =0;//open value to store Kg
    double kg_to_Lbs =2.20;
    double Lbs_final =0;//open value to store Lbs check
    cout << "Base pounds: "<< Num3;// outputs the random number to act as base pounds
    cout << endl;
    Lbs_to_kg= Num3 * Kg;// converts random number to Kg
    cout << "Kilogram equivilant is: "<< Lbs_to_kg;
    cout << endl;
    Lbs_final = Lbs_to_kg * kg_to_Lbs;//reconverts kg to pounds to check
    cout << "Pounds check: "<< Lbs_final;
    cout << endl;
    
     
}
    
int main(){
    int user_Num1=0;
    int user_Num2=0;
    int random_Num=0;
    
    cout << "user number 1: ";//user input for number 1
    cin>> user_Num1;
    cout << "user number 2: ";//user input for number 2
    cin >> user_Num2;
    
    random_Num=RandomNumber(user_Num1,user_Num2);// calling function for random number
    return random_Num ;
   
}
/*user number 1: 3
user number 2: 60
random number between 60 and 3 is 24.
Base pounds: 24
Kilogram equivilant is: 10.8
Pounds check: 23.76
*/
