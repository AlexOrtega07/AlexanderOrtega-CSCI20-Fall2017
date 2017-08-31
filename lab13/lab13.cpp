// Created by Alex Ortega
// 8-30-17 Population

#include <iostream>
using namespace std;

int main() {

/* We start out with 1 birth every 8 seconds. 
 We equate this to 7.5 births a minute.
 Below we will use an equation transfer births a minute to births in a year.
 */
    int birthMin = 7.5;
 
    int birthHour = birthMin * 60;
 
    int birthDay = birthHour * 24;
    
    int birthYear = birthDay * 365;
    
/* For the deaths a year equation, we start out knowing there is a death
 every 12 seconds. We convert that to 5 deaths a minute.
 Below we will convert deaths a minute to deaths a year.
 */
 
    int deathsMin = 5;
    
    int deathsHour = deathsMin * 60;
    
    int deathsDay = deathsHour * 24;
    
    int deathsYear = deathsDay * 365;
    
/* Next up we're working on transfering 1 immigrant gained every 33
 seconds to years. We start by transfering seconds to minutes.
 I figured there to be approcimately 1.1 immigrants gained a minute.
 */

    int immigrantsMin = 1.1;
    
    int immigrantsHour = immigrantsMin * 60;
    
    int immigrantsDay = immigrantsHour * 24;
    
    int immigrantsYear = immigrantsDay * 365;
    
// Next up we calculate our new net gain a year

    int increasePop = birthYear + immigrantsDay;
    
    int netGain = increasePop - deathsYear;
    
    int netGainYear = netGain * 10; //years for equation go here
    
// The population of the US is given to us at approtimately 325772440

// We then create a varriable for the US population 

    int popUs = 325772440;
    
/* To get our new US population, we add our net gain per year to 
  our population of the US
*/

    int popNew = popUs + netGainYear;
    
// time to display our info and see if it works!

    cout << "The amount of births a year is " << birthYear << ".";
    cout << endl;
    
    cout << "The amount of deaths a year is " << deathsYear << ".";
    cout << endl;
    
    cout << "The amount of immigrants gained in the US a year is " << immigrantsYear << ".";
    cout << endl;
    
    cout << "The net gained population in the US a year is " << netGainYear << ".";
    cout << endl;
    
// Our statement is as follows

    cout << "In the year 2027, the population will be " << popNew << " in the United States";
    cout << endl;
    
    
    
    

      
}