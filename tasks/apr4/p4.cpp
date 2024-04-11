#include<iostream>
using namespace std; 
#include <cctype>

/*
Write a program that calculates and prints the sum of odd numbers from 1 to 1000 using a while loop.


*/

int main(){

    int i = 1;
    int sum = 0;
    while (i<=1000){
        sum +=i;
        i+=2;
    }cout << sum << endl;
    
}

