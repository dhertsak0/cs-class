#include<iostream>
using namespace std; 
    // TASK: Write a C++ program that takes the base and height of a triangle as input and calculates its area using the formula: Area = (base * height) / 2.
    int main(){
    double height, base;
    cout << "Please enter your base:";
    cin >> base;
    cout << "Please enter your height:";
    cin >> height;
    cout << "According to my calculations,the Area of a sphtriangleere is "<< (base * height) / 2.0 << endl;
    
}