#include<iostream>
using namespace std; 

/*
Palindrome Check: Develop a program that checks if a given text string is a palindrome. 
A palindrome is a word, phrase, or sequence that reads the same backward as forward. 
Can you write the same program to check if a given text is a palindrome ignoring spaces and punctuation?
*/

int main(){
    string str;
    bool pal = true;
    getline(cin, str);
    for (int i = 0;i < str.length() / 2;i++){
        if (str[i] != ' '){
            if (str[i] != str[str.length()-i-1]){
            pal = false;
            break;
            }
        }continue;
    }
    if (pal == true){
        cout << "palindrom" << endl;
    }else{
        cout << " not palindrom" << endl;
    }
}