#include<iostream>
using namespace std; 
#include <cctype>

/*

First Rank: Create a program that receives a sentence from the user, including a set of first names separated by space, 
and prints out the name that would show up first in alphabetical order. 
You cannot assume no two names in the list share the same first character. 
Example: if the input is "John Lauren Ashton Nicholas Ava," the output should be "Ashton."

*/

int main() {
    string str;
    string newword;
    char in;
    char in2;
    getline(cin, str);
    int i = 0;
    while (i < str.length()) {
        if (str[i] != ' ') {
            newword += str[i];
        } else {
            in = newword[0];
            in2 = str[i + 1];
            if (in > in2) {
                newword = "";
            }
        }
        i++;
    }
    cout << newword << endl;
}