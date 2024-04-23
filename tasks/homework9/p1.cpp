#include <iostream>
using namespace std;

/*

Floyd's Triangle: Develop a program to generate and print Floyd's Triangle for 'n' rows. Floyd's Triangle is a right-angled triangular array of natural numbers. For 'n = 4', the pattern looks like this:
1
2 3
4 5 6
7 8 9 10

*/

void floyds_triangle(int n) {
    int num = 1;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            arr[i][j] = num;
            num++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    floyds_triangle(n);
}
