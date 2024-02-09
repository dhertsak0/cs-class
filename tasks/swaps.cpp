#include<iostream>
using namespace std; 
    // TASK: Create a program that takes two numbers and swaps their values. Can you do it without using a temporary variable?
int main(){
    double val1, val2, val3;
    cout << "Please enter your first value:";
    cin >> val1;
    cout << "Please enter your second value:";
    cin >> val2;
    val3 = val1;
    val1 = val2;
    cout << "According to my calculations," << val1 << " must be as a first value, and "<< val3 << " must be as a second value" << endl;
}