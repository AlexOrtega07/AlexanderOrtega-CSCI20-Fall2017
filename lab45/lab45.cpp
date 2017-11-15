/* This program was created by Alex Ortega on 11-15-17
This program will use Strings to help a user come up with username suggestions for
a website
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    // This will accept the user's first name
    string user_First;
        cout<< "Enter your first name."<< endl;
        cin >> user_First;
        // determines if first name is too long
    if(user_First.length()>11){
        cout<< "First name too long"<< endl;
    }
    // This will accept the user's last name
    string user_Last;
        cout<< "Enter your last name."<< endl;
        cin >> user_Last;
        // determines if last name is too long
    if(user_Last.length()>21){
        cout<< "Last Name too long."<< endl;
    }
    cout<<"Here's what you entered:"<< endl;
    cout <<user_First << " "<< user_Last<< endl;
    // Will notify user if names are the same
    if (user_First.compare(user_Last)==0){
        cout<< "Warning! Names are the same!."<< endl;
        cout << user_First<< " "<<user_Last<< endl;
    }
    //this will create the user names
    cout<< "Here are a few usernames to choose from:"<< endl;
    cout<< user_First[0]<<user_First[1]<<user_Last <<endl;
    cout<< user_First[0]<<user_Last[0]<<user_First << endl;
    cout<< user_Last<<user_First;
}
/*
Enter your first name.
Alex 
Enter your last name.
Ortega
Here's what you entered:
Alex Ortega
Here are a few usernames to choose from:
AlOrtega
AOAlex
OrtegaAlex
*/
/*
Enter your first name.
April
Enter your last name.
Browne
Here's what you entered:
April Browne
Here are a few usernames to choose from:
ApBrowne
ABApril
BrowneApril
*/
/*Enter your first name.
AnaElizabeth
First name too long
Enter your last name.
Hazeltine-Smith
Here's what you entered:
AnaElizabeth Hazeltine-Smith
Here are a few usernames to choose from:
AnHazeltine-Smith
AHAnaElizabeth
Hazeltine-SmithAnaElizabeth
*/
/*
Enter your first name.
James
Enter your last name.
James
Here's what you entered:
James James
Warning! Names are the same!.
James James
Here are a few usernames to choose from:
JaJames
JJJames
JamesJames
*/