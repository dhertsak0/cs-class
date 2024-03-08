#include<iostream>
using namespace std; 

/*
Write a C++ program that uses a for loop to find the sum of all numbers from 1 to 100 that are divisible by both 3 and 5.
*/

int main(){
    int f=0;
    for (int i = 1; i<=100; i++){
        if (i % 3 == 0 && i % 5 == 0){
            f+=i;
        }
    }
    cout << f << endl;      
}