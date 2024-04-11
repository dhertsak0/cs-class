#include<iostream>
using namespace std; 
#include <cctype>

/*

Create a C++ program that asks the user for an integer and then uses a while loop to print the Fibonacci sequence up to the entered number. 
The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.


*/

int main(){

    int num;
    int i=0;
    cin >> num;
    cout << 0 << 1;
    int j=1;
    while (i<num){
        j=i+1;
        cout << j;
        i++;
    }
}
