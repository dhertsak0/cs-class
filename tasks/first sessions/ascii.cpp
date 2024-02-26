#include<iostream>
using namespace std; 
    // TASK: Develop a program that takes a character as input and prints its ASCII value.
int main(){
    char val;
    cout << "Please enter your value:";
    cin >> val;
    int num = val;
    cout << val << " is " << num << " in ASCII coding" << endl;
}