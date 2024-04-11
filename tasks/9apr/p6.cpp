#include<iostream>
using namespace std; 
#include <cctype>

/*

Pattern with Numbers: Write a C++ program that receives an integer 'n' from the user and prints a pattern as shown below for 'n = 5':
1
22
333
4444
55555

*/

int main(){
    int n;
    cin >> n;
    for (int i =0; i< n+1; i++){
        for (int j=0;j<i;j++){
            cout << i;
        }
        cout << endl;
    }
}
