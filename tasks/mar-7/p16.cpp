#include<iostream>
using namespace std; 

/*
Create a C++ program that uses a for loop to repeatedly ask the user for a positive integer until they enter a negative number.
Keep track of how many positive integers were entered and display that count at the end.
*/

int main(){
    int val;
    int f = 1;
    for (;;){
        cin >> val;
        if (val >0){
            f++;
        }else{
            cout << f-1 << endl;
            break;
        }
    }
}