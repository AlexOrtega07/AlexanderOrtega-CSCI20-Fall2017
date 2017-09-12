/* Created by Alex Ortega
    09-11-17 Mad Libs
    This program will take user input and output
    a Mad Lib style story.
    */
    
    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
       
       string adj1 = "";
       string nat1 = "";
       string person1 = "";
       string noun1 = "";
       string adj2 = "";
       string noun2 = "";
       string adj3 = "";
       string adj4 = "";
       string pluralNoun1 = "";
       string noun3 = "";
       string number1 = "";
       string shapes1 = "";
       string food1 = "";
       string food2 = "";
       string number2 = "";
       
       cout << "pick an adjective"<< endl;
       cin >> adj1; 
       cout << " pick a nationality"<< endl;
       cin >> nat1; 
       cout << " pick a person name" << endl;
       cin >> person1 ;
       cout << " pick a new noun" << endl;
       cin >> noun1 ;
       cout << " pick a new adjective" << endl;
       cin >> adj2;
       cout << "pick a new noun" << endl;
       cin >> noun2;
       cout << "pick a new adjective" << endl;
       cin >> adj3;
       cout << "pick a new adjective" << endl;
       cin >> adj4;
       cout << "choose a plural noun" << endl;
       cin >> pluralNoun1;
       cout << "pick a new noun" << endl;
       cin >> noun3;
       cout << "pick a number" << endl;
       cin >> number1;
       cout << "pick a shape" << endl;
       cin >> shapes1;
       cout << "pick a food" << endl;
       cin >> food1;
       cout << "pick a new food" << endl;
       cin >> food2;
       cout << "pick a new number" << endl;
       cin >> number2;
       cout << "--------------------------------------" << endl;
       
       cout << " Pizza was invented by a " << adj1  << " " << nat1 << " chef named " << person1 << "." << endl;
       cout << " To make a pizza, you need to take a lump of " << noun1 << ", and make a thin, round " << adj2 << noun2 <<"."<< endl;
       cout << " Then you cover it with " << adj3 << " sauce, " << adj4 << " cheese, and fresh chopped " << pluralNoun1 << "."<< endl;
       cout << " Next you have to bake it in a very hot " << noun3 << "." << endl;
       cout << " When it is done, cut it into " << number1 << shapes1 << "." << endl;
       cout << " Some kids like " << food1 << " pizza the best, but my favorite is the " << food2 << " pizza." << endl;
       cout << " If I could, I would eat Pizza " << number2 << " times a day!" << endl;
       
       
        
        
        
    }
    