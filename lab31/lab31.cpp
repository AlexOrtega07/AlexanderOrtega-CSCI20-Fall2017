/* This program was created on 10-11-17 by Alex Ortega
    This program will determine the best cell phone plan based on usage
    Using ATT Verizon and Sprint.

*/
#include <iostream>

using namespace std;

int main(){
    int smart_Phones = 0;//varriables for user input
    int dumb_Phones = 0;
    int tablets = 0;
    int gb_Data = 0;
    
    
    cout<< "Enter Number of Smart Phones ";//user input
    cin>> smart_Phones;
    cout<< "Enter Number of dumb Phones ";
    cin>> dumb_Phones;
    cout<< "Enter Number of Tablets ";
    cin>> tablets;
    cout<< "Enter GB data used ";
    cin>> gb_Data;
    
        
     if (gb_Data ==2||tablets<0){//starting off catagorizing by more than 2 GB or not and tablets
        cout << "Sprint 2GB Plan";
        }
        else if(tablets>=1||gb_Data>25){//separating by tablet usage
        cout << "Verizon Unlimited";
        }
        else if(tablets>=1||gb_Data<=25){
        cout<< "ATT Family Plan";
         }
        else if(smart_Phones + dumb_Phones > 10){
        cout << "Verizon Unlimited";
        }
        else if (tablets>=1||smart_Phones+dumb_Phones<=10){
        cout << "ATT Unlimited Choice Plan.";
        }
        
        else if(tablets==0||gb_Data>25){
        cout << "Sprint Unlimited.";
        }
        
    
        
    
}
/*Enter Number of Smart Phones 1
Enter Number of dumb Phones 0
Enter Number of Tablets 0
Enter GB data used 0
ATT Family Plan*/