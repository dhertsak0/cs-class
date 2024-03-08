#include<iostream>
using namespace std; 

/*
Write a program that calculates the factorial of a number using a for loop.
*/

int main(){
    int num;
    cout << "enter your number: "<< endl;
    cin >> num;
    int f=1;
    for (int i = 1; i<=num; i++){
        f*=i;
    }
    cout << f << endl;
}