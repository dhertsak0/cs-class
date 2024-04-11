#include<iostream>
using namespace std; 

/*
Count Occurrences: Write a program that takes a text string and a character as input and counts the number of occurrences of that character within the string.
*/

int main(){
    string str;
    char ch;
    int f=0;
    cin >> str;cin >> ch;
    for (int i = 0;i<str.length();i++){
        if (ch == str[i]){
            f+=1;
        }
    }
    cout << f << endl;
}