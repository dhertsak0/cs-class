#include<iostream>
using namespace std; 

/*
Write a program that receives a text input from the user and prints out the length (number of characters) of the provided text.
*/

int main(){
   string st1;
    cout << "Enter your string: ";
    cin >> st1;
    cout << st1.length() << endl;
}