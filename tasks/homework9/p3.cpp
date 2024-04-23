#include <iostream>
using namespace std;

/*

Character Pattern: Write a program to print the following pattern using nested loops:
A
BB
CCC
DDDD
EEEEE

*/


int main() {
    char ch = 'A';
    int n = 5; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch; 
        }
        cout << endl; 
        ch++; 
    }
}
