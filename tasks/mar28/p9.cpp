#include<iostream> 
using namespace std; 

/*
Singular Reverse: 
Write a program that reverses each word in a given text string that has two words separated by a space character. 
For example, if the input is "hello world" the program should output "olleh dlrow".

*/

int main() { 
    string s; 
    getline(cin , s); 
    string word ="";
    string nextWord = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            word += nextWord + ' ' + word;
            nextWord = "";
        } else { 
            nextWord += s[i];
        }
    }
    word = nextWord + ' ' + word; 
    cout << word << endl;
}