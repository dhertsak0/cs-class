#include<iostream>
using namespace std; 
#include <cctype>

/*

Chessboard Pattern: Create a program to print a chessboard pattern of 'n' rows and 'm' columns, with alternating 'X' and 'O' characters. The user inputs 'n' and 'm'. Example for n = 4 and m = 4: 
XOXO
OXOX
XOXO
OXOX

*/

int main(){
    int n,m;
    char ch = 'X';
    cin >> n >> m;
    for (int i =0; i< n; i++){
        ch = (i%2==0) ? 'X':'O';
        for (int j=1;j<m;j++){
            cout << ch;
            ch = (ch == 'X')?'O':'X';
        }
        cout << endl;
    }
}
