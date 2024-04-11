#include<iostream>
using namespace std; 
#include <cctype>

/*

Write a C++ program that receives two words and prints out the word that comes first in alphabetical order. 
Use while loop to solve this problem.  Assume both names are of the same length and in all lower case letters. 

*/

int main(){

    string str;
    string newword;
    int i =0;
    char in;
    char in2;
    getline(cin,str);
    while (i<str.length()){
        if (str[i]!= ' '){
            newword+=str[i];
        }else{
            in=newword[0];
            in2=str[i+1];
            if (in>in2){
                cout << newword << endl;
            }
        }newword = "";
    }i++;
    cout << newword << endl;
}
