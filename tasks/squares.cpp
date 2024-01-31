#include<iostream>
using namespace std; 
    // TASK: Write a program that reads a double and prints its square.
int main(){
    double value, square;
    cout << "please enter your value:";
    cin >> value;
    square = value*2;
    cout << "According to my calculations,"<< value << " will be "<< square << " square";
}