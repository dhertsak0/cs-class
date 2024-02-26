#include<iostream>
using namespace std; 
    // TASK: Write a program that checks if a number is even or odd.
int main(){
    int number;
    cout << "Please enter your number:";
    cin >> number;
    if (number % 2 == 0){
        cout << " ypu number is even " << endl;
    }else{
        cout << " ypu number is odd " << endl;
    }

}