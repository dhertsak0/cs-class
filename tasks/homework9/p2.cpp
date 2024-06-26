#include <iostream>
using namespace std;

/*

Palindrome Pyramid: Implement a C++ program that prints a pattern of palindrome numbers. For 'n = 5', the pattern would look like this:
1
121
12321
1234321
123454321

*/

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);
}
