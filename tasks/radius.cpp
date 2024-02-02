#include<iostream>
#include<math.h>
using namespace std; 
    // TASK: Create a program that computes the volume of a sphere using its radius V = 4/3 π r³
    int main(){
    double radius;
    cout << "Please enter your radius:";
    cin >> radius;
    cout << "According to my calculations,the the volume of a sphere is "<< 4.0/3.0*M_PI*radius*radius*radius << endl;
    
}