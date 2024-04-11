#include<iostream>
using namespace std; 
#include <cctype>

/*

Develop a program that calculates and prints the factorial of a number using a while loop.

*/

int main(){

    int i=1;
    int num;
    int fac=1;
    cin >> num;
    while (i<num){
        fac*=i;
        i++;
    }
    cout << fac << endl;
}
