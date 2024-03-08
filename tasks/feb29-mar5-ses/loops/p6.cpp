#include<iostream>
using namespace std; 

/*
Write a C++ program that uses a for loop to print all the multiples of 7 between 50 and 200.
*/

int main(){
    for (int i = 50; i<=200; i++){
        if (i%7 == 0){
        cout << i << endl;
        }
    }
}