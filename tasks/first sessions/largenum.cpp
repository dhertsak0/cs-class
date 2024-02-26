#include<iostream>
using namespace std; 
    // TASK: Write a program that receives 2 numbers from user and prints the larger number on the screen with a message. 
int main(){
    char val1, val2;
    cout << "Please enter your first value:";
    cin >> val1;
    cout << "Please enter your second value:";
    cin >> val2;
    if (val1>val2){
        cout << val1 << " is larger " << val2 << endl;
    }else{
        cout << val2 << " is larger " << val1 << endl;
    }
}