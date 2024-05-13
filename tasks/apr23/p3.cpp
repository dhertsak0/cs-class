#include <iostream>
using namespace std;

/*

Create a C++ program that defines a function called sum which has 3 parameters. 
The function should change the value of the 3rd parameter to sum of the first two parameters. 
The function should return nothing (void) and the caller should print the value of 3rd argument as the result of the sum. 
void sum(int x, int y, int sum)

*/

void sum(double a, double b, double &suma) {
    suma = a+b;
}

int main() {
    double a,b,suma;
    cin >> a;
    cin >> b;
    sum(a,b,suma);
    cout << suma << endl;
}
