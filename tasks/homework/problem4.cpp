#include<iostream>
using namespace std; 

/*
Write a program that simulates a menu-driven calculator.
1- Display menu options:
Option 1: "Addition"
Option 2: "Subtraction"
Option 3: "Multiplication"
Option 4: "Division"
2- Retrieve user choice: Prompt the user to enter their choice (number 1, 2, 3, or 4).
3- Handle invalid input: If the user enters an invalid choice, print an error message and exit. 
4- Get numbers and perform calculation: For valid choices (1-4), ask the user to enter two numbers. 
Use a switch statement based on the chosen option (1-4) to perform the corresponding calculation of addition, subtraction, multiplication, or division (handle division by zero error).
5- Display result: Print the final result of the calculation or an error message if division by zero occurs.
*/

int main(){
   int ch, num1, num2;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your choice, where: " << endl << "1: Addition" << endl << "2: Subtraction" << endl << "3: Multiplication" << endl << "4: Division" ~<< endl;
    cin >> ch;
    cout << "Enter your second number: ";
    cin >> num2;
        switch(ch) {
        case 1:
            cout << num1+num2 << endl;
            break;
        case 2:
            cout << num1-num2 << endl;
            break;
        case 3:
            cout << num1*num2 << endl;
            break;
        case 4:
            cout << num1/num2 << endl;
            break;
        }
}