/*This program was created my me(Alex Ortega) on 09-25-17
    This program will work as a random rumber generator.
    When this function is called, it will create and output a random number
    between 1 and 100.
    */
    
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    using namespace std;
    
    int superrandomnumber(){
        srand(time(0));//we use srand to give us a different number each time
        cout<< "Your random number is: "<< (rand()%100)+1;//we add one here to keep the parameters between 1 and 100
        cout << endl;
    }
    int main(){
        superrandomnumber();//This is where we call the function we declared earlier
        //it will now produce a random number (ta-da!)
    }
    