#include<iostream>
using namespace std; 

/*
Character Replacement: Write a program that receives a text input from the user, 
replaces its first and last character with "S", and then prints out the modified text.
*/

int main(){
    string st1,st2;
    cout << "Enter your string: ";
    cin >> st1;
    st1[0] = 's';
    st1[st1.length() - 1]  = 's';
    cout << st1 << endl;
}