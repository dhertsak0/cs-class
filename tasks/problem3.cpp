#include<iostream>
using namespace std; 
    // TASK: Write a C++ program that takes three floating-point numbers as input and calculates their average. Print the result.
    int main(){
    double number1, number2, number3;
    cout << "Please enter your first number:";
    cin >> number1;
    cout << "Please enter your second number:";
    cin >> number2;
    cout << "Please enter your thrith number:";
    cin >> number3;
    cout << "According to my calculations,the Average of Three Numbers is: " << (number1 + number2 + number3) / 3 << endl;

}