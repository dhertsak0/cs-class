#include<iostream>
using namespace std;

/*

Write a C++ program that receives a sentence from the user and identifies and prints all palindromic substrings within the sentence. 
A palindromic substring reads the same forwards and backward (ignoring spaces and punctuation).
Example Input: zabracecarbax Output: abracecarba, bracecarb, racecar, aceca, cec. 


*/

int main(){
    string str,str2;
    bool ch=false;
    cin>> str;
    for (int i =0; i<=str.length(); i++){
        for (int j=i;j<=str.length();j++){
            if (str[i]!=str[str.length()-i]){
                continue;
            }else{
            str2+=str[i];
        }
        cout << str2 << endl;
    }
    
}
