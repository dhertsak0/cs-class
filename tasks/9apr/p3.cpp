#include<iostream>
using namespace std; 
#include <cctype>

/*

Stars Square: 
Create a program that asks the user for a positive integer 'n' and then uses nested `for` loops to print an 'n' by 'n' square pattern of asterisks.



*/

int main(){
    int n;
    cin >> n;
    for (int line =0; line< n; line++){
        for (int pos=0;pos<n;pos++){
            cout << "* ";
        }
        cout << endl;
    }
}
