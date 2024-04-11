#include<iostream>
using namespace std; 
#include <cctype>

/*

Develop a program that calculates and prints the factorial of a number using a while loop.

*/

int main(){

    int i=rand()% 100 + 1;
    int num;
    while (num!=i){
        cin >> num;
        if (num>i){
            cout << "less!" << endl;
        }else{
            cout << "more!" << endl;
        }
    }
    cout << "correct" << endl;
}
