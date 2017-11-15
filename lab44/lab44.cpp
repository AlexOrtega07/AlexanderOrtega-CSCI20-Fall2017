/* This program was created on 11/13/17 by Alex Ortega.
This program takes a user inputed first and last name and will output a few suggestions 
for what usernames you could possibly choose from.
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
    if(strlen(user_First)>11){
        cout<< "Too long. Run agian."<< endl;
        return 0;
    }
    // This will accept the user's last name
    char user_Last[21];
        cout<< "Enter your last name."<< endl;
        cin >> user_Last;
        // determines if last name is too long
    if(strlen(user_Last)>21){
        cout<< "Last Name too long. Run again."<< endl;
        return 0;
    }
    cout<<"Here's what you entered:"<< endl;
    cout <<user_First << " "<< user_Last<< endl;
    // Determines if names are the same
    if ((strcmp(user_First,user_Last)==0)){
        cout<< "Names are the same. Run again."<< endl;
        return 0;
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

/*Enter your first name.
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
Too long. Run agian
*/
/*Enter your first name.
James
Enter your last name.
James
Here's what you entered:
James James
Names are the same. Run again.
*/