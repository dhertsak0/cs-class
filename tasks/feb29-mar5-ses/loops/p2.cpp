#include<iostream>
using namespace std; 

/*
Create a program that asks the user for a number and uses a while loop to print the multiplication table for that number up to 10.
*/

int main(){
    int num;
    cout << "enter your number: "<< endl;
    cin >> num;
    for (int i = 1; i <=10; i++){
        cout << num*i << endl;
    }
}