#include<iostream> 
using namespace std; 

/*
Swap Words: 
Write a program that reverses the order of the two words in given text string that has two words separated by a space character. 
For example, if the input is "hello world" the program should output "world hello".
*/

int main() { 
    string s; 
    getline(cin , s); 
    string nextWord = "";
    string rev = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') {
            rev = nextWord + ' ' + rev;
            nextWord = "";
        } else { 
            nextWord += s[i];
        }
    }
    rev = nextWord + ' ' + rev; 
    cout << rev << endl;
}