/* This program will be responsible for creating user names. It will accept a first name of up to 10
characters and a last name of up to 20 characters. It will tell the user if the name is larger
than the max size. It should also determine if the names are the same and output a warning.
After checking, it will output 3 different user names.
*/

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main(){
    // This will accept the user's first name
    char user_First[11];
        cout<< "Enter your first name."<< endl;
        cin >> user_First;
        // determines if first name is too long
    while(strlen(user_First)>11){
        cout<< "Too long. Re-Enter First name."<< endl;
        cin>> user_First;
    }
    // This will accept the user's last name
    char user_Last[21];
        cout<< "Enter your last name."<< endl;
        cin >> user_Last;
        // determines if last name is too long
    while(strlen(user_Last)>21){
        cout<< "Last Name too long. Re-enter last name."<< endl;
        cin>> user_Last;
    }
    cout<<"Here's what you entered:"<< endl;
    cout <<user_First << " "<< user_Last<< endl;
    // Determines if names are the same
    while ((strcmp(user_First,user_Last)==0)){
        cout<< "Names are the same. Re-enter Last."<< endl;
        cin >> user_Last;
        cout << user_First<< " "<<user_Last<< endl;
    }
    //this will create the user names
    cout<< "Here are a few usernames to choose from:"<< endl;
    cout<< user_First[0]<<user_First[1]<<user_Last <<endl;
    cout<< user_First[0]<<user_Last[0]<<user_First << endl;
    cout<< user_Last<<user_First;
    
}
/*Enter your first name.
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