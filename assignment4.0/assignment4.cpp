/* This program was put together by Alex Ortega on 11/30/17
This program will read text files to compare a set of students answers to an answer key in a separate text file.
*/
#include<iostream>// proper includes to allow manipulators
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class AnswerInfo {// declaring class
    
    public:

    void setStudentInfo(int, string);                           
    void setAnswerKey(string);
    void setStudentScore(int);
    string getStudentName(int);
    string getAnswerKey();
    double getStudentScore(int);
    string getWrongAnswers(int);
    
    private:
    string studentName[6];// sets array sizes of 6
    string studentAnswer[6];
    string answerKey;
    double studentScore[6];
    string wrongAnswers[6];
};


void AnswerInfo::setStudentInfo(int index, string line) { // This will separate the student names from their answers
   
   int space;
   
   space = line.find(" ");
   studentName[index] = line.substr(0, space + 1);// Will grab the students first name
   line.erase(0, space + 1);// removes a space
   space = line.find(" ");
   studentName[index].append(line.substr(0, space + 1));// will send student last name to array
   line.erase(0, space + 1);
   studentAnswer[index] = line;
   
}
void AnswerInfo::setAnswerKey(string answers) {// setting up the key
    answerKey = answers;
}
void AnswerInfo::setStudentScore(int index) {// sets up the student answers
    
    int studentSpace1;
    int studentSpace2;
    int answerKeySpace1;
    int answerKeySpace2;
    string tempKey;
    string tempStudAnswers;
    studentScore[index] = 0.0;
    wrongAnswers[index] = "";
    
    studentSpace1 = studentAnswer[index].find(" ");
    tempStudAnswers = studentAnswer[index].substr(0, studentSpace1);
    answerKeySpace1 = answerKey.find(" ");
    tempKey = answerKey.substr(0, answerKeySpace1);

    if (tempStudAnswers == tempKey) {
        
        studentScore[index] = studentScore[index] + 1;
    }
    
    else if (tempStudAnswers == "?") {
        
        wrongAnswers[index].append("? ");
        
    }
    
    else {
        
        wrongAnswers[index].append(tempStudAnswers);
        wrongAnswers[index].append(" ");
        studentScore[index] = studentScore[index] - 0.25;
    }
    
    for (int i = 0; i < 20; ++i) {
    
    studentSpace2 = studentAnswer[index].find(" ", studentSpace1 + 1);
    tempStudAnswers = studentAnswer[index].substr(studentSpace1 + 1, studentSpace2 - (studentSpace1 + 1));
    answerKeySpace2 = answerKey.find(" ", answerKeySpace1 + 1);
    tempKey = answerKey.substr(answerKeySpace1 + 1, answerKeySpace2 - (answerKeySpace1 + 1));
    
    if (tempStudAnswers == tempKey) {
        
        studentScore[index] = studentScore[index] + 1;
    }
    
    else if (tempStudAnswers == "?") {
        
        wrongAnswers[index].append("? ");
    }
    
    else {
        
        wrongAnswers[index].append(tempStudAnswers);
        wrongAnswers[index].append(" ");
        studentScore[index] = studentScore[index] - 0.25;
    }
    
    studentSpace1 = studentSpace2;
    answerKeySpace1 = answerKeySpace2;
    
    }
}
string AnswerInfo::getStudentName(int index) {// names of students will be returned by this
    return studentName[index];
}

string AnswerInfo::getAnswerKey() {// this will return the answer key
    return answerKey;
}
double AnswerInfo::getStudentScore(int index) {// this will return the students score
    return studentScore[index];
}
string AnswerInfo::getWrongAnswers(int index) {// this will display and return the incorect answers from the students
    return wrongAnswers[index];
}

int main() {
    string fileName      = " ";
    string line          = " ";
    string tempKey = " ";
    string finalGrades   = " ";
    double avgScore      = 0.0;
    ifstream inFS; // necessary for file input
    ifstream answerFS;              
    ofstream outFS;
    
    AnswerInfo student1;
    cout << "Enter the name of the student file:";
    cin >> fileName;
    inFS.open(fileName);
    
    if (!inFS.is_open()) {
        cout << "Could not reach " << fileName << "." << endl;
        
        return 0;
    }                         
    while (!inFS.eof()) {
        for (int i = 0; i < 6; ++i) {
            getline(inFS, line);
            student1.setStudentInfo(i, line);
            
        }
    }
    inFS.close();
    answerFS.open("answerkey.txt");
    
    if (!answerFS.is_open()) {
        cout << "Couldn't reach answerkey.txt." << endl;
        return 0;
    }
    
    getline(answerFS, tempKey);
    student1.setAnswerKey(tempKey);
    
    answerFS.close();
    outFS.open("finalstudentscores.txt");
    
    if (!outFS.is_open()) {
        cout << "Could not open finalscores.txt." << endl;
        
        return 0;
    }
    for (int i = 0; i < 6; ++i) {// this will output the sudents final scores
        
        student1.setStudentScore(i);
        avgScore = avgScore + student1.getStudentScore(i);
        finalGrades = student1.getStudentName(i).append(student1.getWrongAnswers(i));
        cout << finalGrades << " FINAL SCORE: " << student1.getStudentScore(i) << endl;
        outFS << finalGrades << " FINAL SCORE: " << student1.getStudentScore(i) << endl;
    }
    avgScore = avgScore / 6.0;
    cout << "Class Average: " << avgScore << endl;
    outFS << "Class Average: " << avgScore << endl;
    outFS.close();
}