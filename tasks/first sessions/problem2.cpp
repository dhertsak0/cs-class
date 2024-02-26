#include<iostream>
using namespace std; 
    // TASK: Create a C++ program that reads an integer from the user and prints whether it's even or odd. Utilize the remainder operator % to check divisibility by 2.
    int main(){
    int number;
    cout << "Please enter your integer number:";
    cin >> number;
    if (number % 2 == 0) {
        cout << "According to my calculations,the input number is Even"<< endl;
    } else {
        cout << "According to my calculations,the input number is Odd"<< endl;
    }
}