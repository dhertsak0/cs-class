#include<iostream>
using namespace std; 

/*
1. Prime Number Checker: 
Write a C++ program that takes a positive integer as input from the user and determines whether it's a prime number.
A prime number is a natural number greater than 1 that is only divisible by 1 and itself.
Print an appropriate message indicating whether the entered number is prime or not.
*/

int main(){
    int num;
    cin >> num;
    if (num>0 && num%1==0){
        cout << "entered number is prime" << endl;
    }else{
        cout << "entered number is not prime" << endl;
    }
}