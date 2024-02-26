#include<iostream>
using namespace std; 

/*
Write a C++ program that prompts the user to enter an integer. Using if/else statements, 
classify and print the type of the number based on the following criteria: Positive, Negative, Zero, Even, Odd.
Example: for input 5 the output should be: The number is positive and odd.
*/

int main(){
   int num;
    cout << "Enter your number: ";
    cin >> num;
    if (num == 0){
        cout << "Zero" << endl;
    }
    else{
        string shape = (num < 0) ? "Negative" : "Positive";
        string shape2 = (num % 2 == 0) ? "even" : "odd";
        cout << shape << " and " << shape2 << endl;
    }
}