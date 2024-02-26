#include<iostream>
using namespace std; 
/*
Create a program that converts a numeric grade to a letter grade (A, B, C, D, or F). Letter grade can be based on the ranges we use in this class.
*/
int main(){
    int var;
    cout << "please, enter you numeric grade: ";
    cin >> var;
    switch(var) {
        case 90 ... 100:
            cout << "Your grade is A" << endl;
            break;
        case 80 ... 89:
            cout << "Your grade is B" << endl;
            break;
        case 70 ... 79:
            cout << "Your grade is C" << endl;
            break;
        case 60 ... 69:
            cout << "Your grade is D" << endl;
            break;
        case 0 ... 59:
            cout << "Your grade is F" << endl;
            break;
        default:
            cout << "Invalid grade entered" << endl;
            break;
    }
}