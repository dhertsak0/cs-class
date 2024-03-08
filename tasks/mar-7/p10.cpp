#include<iostream>
using namespace std; 

/*
Write a C++ program that calculates the sum of all even numbers from 1 to 50 using a for loop.
*/

int main(){
    int f=0;
    for (int i = 1; i<=50; i++){
        if (i % 2 == 0){
            f+=i;
        }
    }
    cout << f << endl;      
}