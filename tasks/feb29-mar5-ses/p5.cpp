#include<iostream>
using namespace std; 

/*
Character Exploration: Create a program that takes a text input from the user and prints out the first, second, and last characters of the input.
*/

int main(){
    string st1;
    cout << "Enter your string: ";
    cin >> st1;
    cout << st1[0] << st1[1] << st1[st1.length() - 1] << endl;
}