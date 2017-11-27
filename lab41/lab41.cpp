/*The class part of this program was created by Alex Ortega
This class stores functions for each of the bits of information requested*/

#include <iostream>
#include <string>
using namespace std;

    class ArrayTools{//class declaration
        private:
            int _size;
            int my_Array[];
        public:
            ArrayTools(int myArray[],int size);
            void Print() const;
            int Find_min(int my_Array[],int _size) const;
            int Find_max(int my_Array[], int _size) const;
            int Find_sum();
            int Nums_even_and_odd();
            int Search (int find);
    };
        ArrayTools::ArrayTools(int myArray[], int size){
            for (int i=0; i<size; i++){
                my_Array[i]=myArray[i];
            }
            _size = size;
            return;
        }
        
        int ArrayTools::Search(int find){//search function
            bool flag = false;
                for(int i=0;i< _size; ++i){
                    flag=true;
                    return i;
                }
                return -1;
        }
        
        int ArrayTools::Find_sum(){//sum of inputed 
            int sum=0;
                for(int i=0; i< _size; i++){
                    sum = sum+ my_Array[i];
                }
            return sum;
        }
        /*int ArrayTools::Find_max(int myArray[], int size) const{//find max function
            int max= my_Array[0];
                for(int i=0;i<_size;i++){
                    if(max< my_Array[i]){
                        max= my_Array[i];
                    }
                }
                return max;
        }*/
        int ArrayTools::Find_min(int myArray[],int size)const{//find min function
            int min = my_Array[0];
            for(int i=0; i< _size; i++){
                if(min> my_Array[i]){
                    min= my_Array[i];
                }
            }
            return min;
        }
        int ArrayTools::Nums_even_and_odd(){//outputs all even numbers
            cout<<"All the even numbers: ";
            for(int i=0; i< _size; i++){
                if(my_Array[i]%2==0){
                    cout<<" "<< my_Array[i];
                }
            }
            cout<< endl;
            cout<< "All the odd numbers: ";//outputs all the odd numbers
            for (int i=0; i< _size; i++){
                if (my_Array[i]% 2 !=0){
                    cout<<" "<< my_Array[i];
                }
            }
        }
        void ArrayTools::Print()const{//print function for entered numbers
            cout<< endl << "The numbers you entered: "<< endl;
                for(int i=0;i< _size; ++i){
                    cout<< my_Array[i]<< endl;
                }
                return;
        }
int main () {
const int size = 10;
int myArray[size];

//user input for the arrays
cout<< "Please enter 10 digits total."<< endl;
for (int i = 0; i<size; i++) {
cin >> myArray[i];
}

ArrayTools a(myArray, size);

a.Print();
cout << "Min: " << a.Find_min(0, 4) << endl;
cout << "Sum = " << a.Find_sum() << endl; 
cout<<"Search 10"<<a.Search(10)<<endl;

//cout << "Max: " << a.Find_max(5, 10) << endl;
//cout<<"Sorted? "<<a.Is_sorted()<<endl; 
a.Nums_even_and_odd();
return 0;
}
