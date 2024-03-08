#include<iostream>
using namespace std; 

/*
Full Name Input: 
Design a program to read both the first and last names of a person into a single string variable. 
Print out the full name on the screen. 
Implement the program using both cin and getline for input to understand the differences in handling spaces and multiple words.
*/

int main(){
    string st1,st2;
    cout << "Enter your firstname: ";
    getline (cin, st1);
    cout << "Enter your lastname: ";
    getline (cin, st2);
    cout << st1 + " " + st2 << endl;
}