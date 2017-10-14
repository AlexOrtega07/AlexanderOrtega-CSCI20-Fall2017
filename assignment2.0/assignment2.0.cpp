/*This program was created on 10-12-17 by Alex Ortega
This program will accept a user inputed foot size in inches and output sized in 
centimeters, UK, Euro, and Us.*/

#include <iostream>
#include <string>
using namespace std;

class FootInfo{ 
    public:
        int cmSize = 0;
        int ukSize;
        int euSize;
        int usSize;
        int inches =25;
        void CalcCentimeters(int inches);
        int GetCm() const;
        void CalcUk(int inches);
        int GetUk() const;
        void calcEuro (int inches);
        int GetEuro() const;
        void calcUs (int inches);
        int GetUs() const;
        void Print(){
            cout << "Size Centimeters: " << GetCm() << endl;
            cout << "Size UK:" << GetUk() << endl;
            cout << "Size Euro:"<< GetEuro() << endl;
            cout << "Size US: " << GetUs() << endl;
        }
    private:
        
};

        void FootInfo::CalcCentimeters(int inches){
            cmSize = inches * 0.64;
            return;
        }
        int FootInfo::GetCm() const{
            return cmSize; 
        }
        
        void FootInfo::CalcUk(int inches){
            ukSize = inches * .59;
            return;
        }
        int FootInfo::GetUk() const{
            return ukSize;
        }
        
        
        int main(){
            int cmSize =0;
            FootInfo user1;
            
            cout << getline(int&cmSize);
        }