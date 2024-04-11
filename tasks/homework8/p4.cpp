#include<iostream>
using namespace std;

/*

Problem 4: Last Word Extractor

Write a C++ program that receives a text input containing multiple words and prints the last word of the text. 
For example, if the input is "This is the last word," the program should output "word."

*/

int main(){
    string input;
    getline(cin, input);
    string word;
    string newword;
    for (int i = input.length(); input[i] >=0; i--) {
        if (input[i] != ' ') {
            word+= input[i];
        }else{
            break;
        }
    }
    for (int j=word.length();j>=0;j--){
        newword+=word[j];
    }
    cout << newword << endl;
}
