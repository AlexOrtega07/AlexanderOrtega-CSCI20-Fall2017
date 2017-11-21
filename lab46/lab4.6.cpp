/*This program was created on 11-20-17 by Alex Ortega
This program will read a student's grades and output an html page.
A students transcript including GPAs from their semester and overall will be outputted as 
well. */

 #include <iostream> 
 #include <fstream> 
 #include <cstdlib> 
 #include <iomanip>
 #include <ios>
 #include <string>
 using namespace std;
 
 int main() {
    string fname;
    string lname;
    int numcourses = 0;
    string buffer = "";
    int hours[10]={0};
    char grade[10];
    double points[10]={0.0};
   
    
    
    ifstream fin; 
    ofstream fout; 
    fin.open("input.txt"); 
    fout.open("output.txt"); 
         while(!fin.eof()) {
            fin >> fname;
            fin >> lname;
            fin >> numcourses;
            int i=0;
                for(i = 0; i < numcourses; i++){
                fin >> hours[i];
                fin >> grade[i];
        }
        
        for(i = 0; i < numcourses; i++){
            if(grade[i] == 'A'){
                points[i] = 4.0;
            }
            else if (grade[i] == 'B'){
                points[i] = 3.0;
            }
            else if (grade[i] == 'C'){
                points[i] = 2.0;
            }
            else if(grade[i] == 'D'){
                points[i] = 1.0;
            }
            else {
                points[i] = 0.0;
            }
        }
    int sumhours = 0;
    double sumpoints = 0.0;
    double gpa = 0.0;
    
        for(i = 0; i < numcourses; i++){
            sumhours=sumhours+hours[i];
            sumpoints=sumpoints+(hours[i]*points[i]);
        }
        gpa = sumpoints/sumhours;
    
        fout << "Name: " << fname << " " << lname << endl;
        fout << "Number of Courses: " << numcourses << endl;
        fout << "Hours  Grade" << endl;
        
        for (i = 0; i < numcourses; i++) {
            fout << setw(5) << hours[i] << "  " << setw(5) << grade[i] << endl;
        }
        
        fout << "GPA: " << fixed << setprecision(2) << gpa << endl << endl;
        
        sumhours = 0;
        sumpoints = 0.0;
    }
    fin.close(); 
    fout.close(); 

    return 0;
} 