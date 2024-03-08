#include<iostream>
using namespace std; 

/*
Develop a C++ program that uses a for loop to repeatedly ask the user for a number and adds it to a running total.
The loop should continue until the user enters 0.
After exiting the loop, display the total.
*/

int main(){
    int val;
    int f = 0;
    for (;;){
        cin >> val;
        if (val !=0){
            f+=val;
        }else{
            cout << f << endl;
            break;
        }
    }
}