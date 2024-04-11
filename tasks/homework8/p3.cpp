#include<iostream>
using namespace std; 
#include <cctype>

/*

Problem 3: First 'a' Word Index

Develop a C++ program that accepts a text input with multiple words and prints the index (location) of the first word that starts with the character 'a'. 
If there is no word starting with 'a', the program should print "not found."

*/

int main(){
    string str;
    getline(cin, str);
    int i=0;
    int count =1;
    for (int i=0;i<=str.length();i++){
        if (str[0]=='a'){
            cout << 1;
        }else{
            if (str[i]==' '){
                if (str[i+1]!='a'){
                    count++;
                    continue;
                }else{
                    cout << count+1;
                }

            }
        }
    }
}
