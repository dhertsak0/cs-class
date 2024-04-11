#include<iostream>
using namespace std; 
#include <cctype>

/*

Problem 1: Word Character Replacement

Create a C++ program that takes a text input containing two words and replaces all the characters of the second word with '*'. 
For example, if the input is "hello world," the program should output "hello *****."

*/

int main(){
    string str;
    getline(cin,str);
    string newW;
    int i=0;
    int j =0;
    for (int i=0;i<=str.length();i++){
        if (str[i]!=' '){
            newW+=str[i];
        }else{
            cout << newW+ " ";
            j=str.length()-newW.length();
        }
    }
    for (j;j>0;j--){
        cout << "*";
    }
    cout << endl;
}
