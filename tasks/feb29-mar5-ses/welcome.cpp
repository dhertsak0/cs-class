#include<iostream>
using namespace std; 

/*
Create a C++ program that prompts the user for their name and displays a personalized welcome message.
*/

int main(){
   string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Welcome "<< name << endl;
}