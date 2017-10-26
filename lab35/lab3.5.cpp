/* Created by Alex Ortega on 10-25-17
In this program i am only creating a class that will convert temperatures Between Kelvin,Fahrenheit
and Celsius. The class will be run by a main provided.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

    class TemperatureConverter
    {
        private:
            double kelvin_;
            double celsius;
            double fahrenheit;
        public:
             TemperatureConverter(){
                kelvin_=0;
            }
             TemperatureConverter(double kelvin){
                kelvin=kelvin_;
            }
            void SetTempFromKelvin(double kelvinset){
                if (kelvinset >0){
                    kelvin_=kelvinset;
                }
                else
                    kelvin_=0;
            }
            double GetTempFromKelvin(){
                return kelvin_;
            }
            void Print(){
                cout<< kelvin_ << endl;
            }
            void SetTempFromCelsius(double celsius){
                celsius=0;
                if (celsius> -273.15)
                    kelvin_ = celsius + 273.15;
                else
                    kelvin_=0;
            }
            void SetTempFromFahrenheit(double fahrenheit){
                fahrenheit =0;
                if (fahrenheit> -273.15)
                    kelvin_= (5*(fahrenheit-32)/9);
                else
                    kelvin_=0;
            }
            double GetTempAsCelsius(){
                celsius=kelvin_-273.15;
                    return celsius;
            }
            double GetTempAsFahrenheit(){
                fahrenheit=((celsius*9)/5+32);
            }
            void PrintTemperatures(){
                cout <<celsius<< " "<<fahrenheit<<endl;
            }
};
            


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
            