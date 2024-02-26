#include<iostream>
using namespace std; 

/*
Write a program that reads number of sides of a shape from the input (3 or 4) 
and based on the value assigns string value of "Triangle" or "Quadrilateral" to a string variable 
and then prints out the string variable. Use short hand ifto assign the value to the string variable; 
*/

int main(){
   int num_sides;
    cout << "Enter the number of sides (3 or 4): ";
    cin >> num_sides;
    string shape = (num_sides == 3) ? "Triangle" : "Quadrilateral";
    cout << shape << endl;
}