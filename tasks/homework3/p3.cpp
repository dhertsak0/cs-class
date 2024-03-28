#include<iostream>
using namespace std; 

/*
3. Fibonacci Sequence Generator: 
Write a C++ program that generates the Fibonacci sequence up to a user-defined number of terms. 
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding numbers, starting from 0 and 1. 
Print the generated Fibonacci sequence terms separated by spaces. 
Hint: here are the first 7 numbers in the sequence: 0, 1, 1, 2, 3, 5, 8
*/

int main(){
    int num;
    int f=0;
    cin >> num;
    if (num<=1){
        cout << num;
    }else{
    int a=0,b=1;
    cout << a << " " << b << " ";
    for (int i = 2;i <= num;i++){
        int x=b;
        b = a + b;
        a = x;
        cout << b << " ";
        }
    }
}