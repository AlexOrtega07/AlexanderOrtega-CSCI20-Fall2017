#include <iostream>//gives access to the c++ standard library
#include <iostream>//#Error: this bit is not needed
#include <cstring>// allows us to use strings in this scope
using namespace std;// allows the use of cout and cin without ::

int main() {// starting up our main function for the code
    int nameLength = 0;//declaring nameLength as an integer and assigning the value 0;
    char * name = new char[];//Error: new isnt a data type//decalres name as a pointer //doesnt assign a size to array

    cout << "Please enter a 10 letter word or less" << endl;//outputs to user asking for input
    cin >> name;// allows user to input a word

    char * head  = name;//declares head as a pointer
    char * tail = name;// declares tail as a pointer
    nameLength = strlen(*name);//compares nameLength with string length of pointer name

    cout << "Your word is " << firststr << endl;//outputs plain text as well. Error: firststr was never declared

    if (nameLength<10)// condition stating if namelength is les than 10
    {
         while (*head != '\0')// while pointer to head 
         {
                cout << *head;// out puts head pointer
                head++;// increases head by 1
         }
     }
     else// second half of condition, displays if "if statement" isnt true
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;// outputs a warning pertaining to max array size
     }

     cout << endl;// starts a new line

     tail = &name[strlen(name) - 1];// equates tail variable to the reference array(name) will have length of name -1

     if (nameLength < 10)//This if statement will run if namelength is less than 10
     {
          while (tail != name)//if tail doesnt equal name this will run
          {
                 cout << *tail;// pointer to tail wil be displayed
                 tail--;//subtracts tail by 1 until tail equals name
          }
     }
     cout << endl;// ends the line of code

     head = name;// assigns name value to head
     tail = &name[strlen(name) - 1];//sets tail to refer to name (length of name subtracted by 1)

     head++;//adds by one
     tail--;// subtracts by one

     if (*head == *tail)// if both pointers are equivilant in value
     {
         cout << "It is an palindrome!" << endl;// out put text
     }
     else// opposite condition so if both pointers are not equivilant in value
     {
         cout << "It is not an palindrome" << endl;//out puts text
     }

     return 0;// no return value 
}// closes main