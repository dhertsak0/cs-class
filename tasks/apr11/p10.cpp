#include<iostream>
using namespace std;

/*

Write a program that receives a string from the user and removes any duplicate characters, leaving only the first occurrence of each character. 
The input string doesn't have any space or special character and only includes lower case alphabet characters.


*/

int main(){
    string str;
    string str2;
    getline(cin,str);
    for (int i =0; i<str.length(); i++){
        for (int j=0;j<str2.length();j++){
            if (str2[j]==str[i]){
                break;
            }
        }str2+=str[i];
        
    }cout << str2 << endl;
}
