#include<iostream>
using namespace std; 
    // TASK: Develop a program that checks if a user-entered character is the character a or not and print out a message.
int main(){
    char ch;
    cout << "Please enter your character:";
    cin >> ch;
    if (ch=='a'){
        cout << "entered character is a" << endl;
    }else{
        cout << "entered character isn`t a" << endl;
    }
}