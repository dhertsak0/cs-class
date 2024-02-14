#include<iostream>
using namespace std; 
    // TASK: Create a program that checks if a number is positive, negative, or zero.
int main(){
    int num;
    cout << "Please enter your number:";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}