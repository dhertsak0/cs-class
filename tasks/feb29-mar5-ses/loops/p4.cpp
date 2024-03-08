#include<iostream>
using namespace std; 

/*
Write a program that asks the user for a number and uses the for loop to print all the even numbers between 1 and that number. 
*/

int main(){
    int num;
    cout << "enter your number: "<< endl;
    cin >> num;
    for (int i = 1; i<=num; i++){
        if (i % 2 == 0){
        cout << i << endl;
        }
    }
}