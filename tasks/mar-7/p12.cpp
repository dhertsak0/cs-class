#include<iostream>
using namespace std; 

/*
Develop a program that uses a for loop to keep asking the user for a password until they enter the correct one.
*/

int main(){
    string pas = "123";
    string user_pas;
    for (;;){
        cout << "Please, enter your password: " << endl;
        cin >> user_pas;
        if (user_pas != pas){
            cout << "Wrong password! Try again" << endl;
        }else{
            cout << "Great!" << endl << "You're hacked pentagon 0_o" << endl << "Police coming!" << endl;
            break;
        }
    }
}