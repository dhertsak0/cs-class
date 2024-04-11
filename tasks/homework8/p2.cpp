#include<iostream>
using namespace std;

/*

Problem 2: Text Abbreviation

Write a C++ program that receives a text input and produces its abbreviation. 
The abbreviation should consist of the initials of each word in the input text. 
For instance, if the input is "Computer Science Saddleback College," the program should output "CSSC."

*/

int main(){
    string input;
    getline(cin, input);
    bool isFirstLetter = true;

    for (int i = 0; input[i] != '\0'; ++i) {
        if (isFirstLetter || input[i - 1] == ' ') {
            cout << input[i];
            isFirstLetter = false;
        }
    }
}
