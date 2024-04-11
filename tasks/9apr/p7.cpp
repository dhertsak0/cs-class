#include<iostream>
using namespace std; 
#include <cctype>

/*

Half Pyramid of Numbers: Write a C++ program that prints a half pyramid pattern using numbers as shown below for a number received from the user:
1
12
123
1234
12345

*/

int main(){
    int n;
    cin >> n;
    for (int i =1; i< n+1; i++){
        for (int j=1;j<i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}
