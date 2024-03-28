#include<iostream>
using namespace std; 

/*
2. Text Analyzer: 
Write a C++ program that takes a string as input from the user, analyzes it and prints the calculated counts for each of the following values:

The number of uppercase letters.
The number of lowercase letters.
The number of digits (0-9).
The number of white-spaces (spaces).
*/

int main(){

    string str;
    int c = 0;
    int m = 0;
    int n = 0;
    int p = 0;
    getline(cin, str);

    for (int i = 0;i < str.length();i++){
        if (str[i]<='Z' && str[i]>= 'A'){
            c++;
        }else if(str[i]<='z' && str[i]>= 'a'){
            m++;
        }else if(str[i] >= '0' && str[i] <= '9'){
            n++;
        }else if(str[i] == ' '){
            p++;
        }
    }

    cout << "The number of uppercase letters:" << c << endl;
    cout << "The number of lowercase letters:" << m << endl;
    cout << "The number of digits (0-9):" << n << endl;
    cout << "The number of white-spaces (spaces):" << p << endl;
}