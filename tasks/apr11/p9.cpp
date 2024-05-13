#include<iostream>
using namespace std; 
#include <cctype>

/*

Write a C++ program that receives the number of students and, for each student, receives the number of courses and their respective grades (ranging from 0 to 20). The program should calculate and print the average grade for each student.


*/

int main(){
    string student,course,grade;
    cin >> student >> course >> grade;
    int k=0;
    int Gcounter = 0;
    int NewGrade=0;
    int Scount =0;
    int Ccount = 0;
    for (int i =0; i<student.length(); i++){
        Scount++;
        for (int j=0;j<course.length();j++){
            Ccount++;
            for (int k=0;j<grade.length();k++){
                NewGrade+=grade[k];
                Gcounter++;
            }
            NewGrade=NewGrade/Gcounter;
            cout << "student" << student[Scount] << "course"<< course[Ccount]<< "grade"<< NewGrade;
            NewGrade=0;
        }
        cout << endl;
    }
}
