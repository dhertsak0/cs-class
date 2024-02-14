#include<iostream>
using namespace std; 
    /* 
    TASK: Write a program that takes a user's age as input and prints out whether they are a child (0-12), 
    a teenager (13-19), an adult (20-64), or a senior (65 and older).
    */
int main(){
    int age;
    cout << "Please enter your age:";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "You are a child." << endl;
        } else {
            if (age <= 19) {
                cout << "You are a teenager." << endl;
            } else {
                if (age <= 64) {
                    cout << "You are an adult." << endl;
                } else {
                    cout << "You are a senior." << endl;
                }
            }
        }    
    
}
