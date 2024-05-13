#include <iostream>
using namespace std;

/*

Create a C++ program that defines a function called swapValues which swaps the values of two integer variables using reference parameters.
In the main() function, ask the user for two integers, swap their values using the swapValues function, and display the swapped values.

*/

void swapValues(int n, int p) {
    int j=n;
    int k=p;
    n=k;
    p=j;
    cout << n << endl<< p<< endl;
}

int main() {
    int n,p;
    cin >> n;
    cin >> p;
    swapValues(n,p);
}
