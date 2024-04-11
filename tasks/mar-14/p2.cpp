#include<iostream>
using namespace std; 

/*
Replace Character: 
Create a program that receives a text string from the user and replaces all occurrences of 
a specified character with another character of the user's choice. Print the modified string.
*/

int main(){
    string str;
    char ch,ch2;
    int f=0;
    cin >> str; cin >> ch; cin >> ch2;
    for (int i = 0;i<str.length();i++){
        if (ch == str[i]){
            str[i] = ch2;
        }
    }
    cout << str << endl;
}