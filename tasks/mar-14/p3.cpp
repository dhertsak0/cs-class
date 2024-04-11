#include<iostream>
using namespace std; 

/*
Reverse String: Write a program that reverses a given text string. For example, 
if the input is "hello," the program should output "olleh."
*/

int main(){
    string str,str2;
    cin >> str;
    for (int i = str.length();i>=0-i;i--){
        str2+= str[i];
    }
    cout << str2 << endl;
}