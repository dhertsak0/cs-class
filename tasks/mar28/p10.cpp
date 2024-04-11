#include<iostream> 
using namespace std; 

/*
Longest Word: 
Write a program that receive a sentence and prints out length of the longest word in the string. 
The text has no punctuation and only words each separated by one space.

*/

int main() { 
    string s; 
    getline(cin , s); 
    string word ="";
    string nextWord = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') {
            if (nextWord.length()>word.length()){
                word = nextWord;
            }
            nextWord = "";
        } else { 
            nextWord += s[i];
        }
    }
    if (nextWord.length()>word.length()){
        word = nextWord;
    }
    cout << word << endl;
}