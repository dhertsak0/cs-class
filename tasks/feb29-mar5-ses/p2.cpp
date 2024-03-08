#include<iostream>
using namespace std; 

/*
Develop a program that takes two strings as input from the user, concatenates them, and displays the resulting concatenated string.
*/

int main(){
   string st1,st2;
    cout << "Enter your first string: ";
    cin >> st1;
    cout << "Enter your second string: ";
    cin >> st2;
    cout << st1 + st2 << endl;
}