#include<iostream>
using namespace std; 
    /*
    TASK: Create a program that prints out the electricity charge for a household based on the number of units consumed (units are received from the input).
    The rate is $0.12 per unit for the first 100 units and $0.15 per unit for additional units
    .*/ 
int main(){
    double units;
    cout << "Please enter your units:";
    cin >> units;
    if (units <= 100){
        cout << "electricity charge for a household is a " << units * 0.12 <<" $" << endl;
    }else{
        cout << "electricity charge for a household is a " << units * 0.15 <<" $" << endl;
    }
}