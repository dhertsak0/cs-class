#include<iostream>
using namespace std; 
#include <cctype>

/*
Write a program that asks the user to enter a sentence and then uses a while loop to capitalize the first letter of each word in the sentence. 
Display the modified sentence.
*/

int main(){

    string str;
    getline(cin,str);
    int i = 0;
    bool start = true;
    while (i<str.length()){
        str[0] = toupper(str[0]);
        if (str[i] == ' '){
            str[i+1]= toupper(str[i+1]);
        }
        i++;
        
    }cout << str << endl;
}
