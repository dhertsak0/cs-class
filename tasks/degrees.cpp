#include<iostream>
using namespace std; 
    // TASK: Write a program that converts temperature from Fahrenheit to Celsius.
int main(){
    double F;
    cout << "Please enter degrees Fahrenheit to convert to Celsius degrees:";
    cin >> F;
    cout << "According to my calculations,"<< F << " Fahrenheit degrees will be "<< (F - 32) * 5.0 / 9.0 << " Celsius degrees" <<endl;
}