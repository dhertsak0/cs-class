#include<iostream>
using namespace std; 

/*
Create a program that receives a sentence from the user and counts the number of words in the sentence.
A word is defined as a sequence of characters separated by spaces.
*/

int main(){
    string str;
    int count = 0;
    getline(cin, str);
    for (int i = 0;i < str[str.length()-1];i++){
        if (str[i] == ' '){
            count++;
        }else{
            continue;
        }
    }
    cout << count << endl;
}