/* created by Alex Ortega
    09-06-17 
    This program will act as a Coinstar machine.
*/

#include <iostream>
using namespace std;

    int main()
{
    //start here with the original ammount
    int startingCents = 90; // User Input
    int change = 90%25; // User Input
    int ammountQuarters = startingCents/25;
    // turn left overs into dimes
    int ammountDimes = change/10;
    int change1 = change%10;
    // turn change 1 to nickles
    int ammountNickles = change1/5;
    int change2 = change1%5;
    // turn change 2 into pennies
    int ammountPennies = change2/1;
    int change3 = change2%1;
    
    // conjoin all together into dollars
    
    double returnMoney = (ammountQuarters * 0.25) + (ammountDimes * 0.10) + (ammountNickles * 0.05) + (ammountPennies * 0.01) - 0.109;
     
    
    cout << "Hello, today you inputed is: " << ammountQuarters << " Quarters, " << ammountDimes << " Dimes, " << ammountNickles << " Nickles, " << ammountPennies << " Pennies.";
    cout << endl;
    
    cout << "Your final earning after the processing fee is : " << returnMoney << ".";
    cout << endl;
    
    
    
    
}