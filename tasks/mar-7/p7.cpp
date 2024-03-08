#include<iostream>
using namespace std; 

/*
Write a C++ program that uses a for loop to print even numbers from 2 to 20 (inclusive).
*/

int main(){
    for (int i = 2; i <=20; i++){
        if (i % 2 == 0){
        cout << i << endl;
        }
    }
}