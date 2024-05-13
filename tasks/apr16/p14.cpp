#include<iostream>
using namespace std;

/*

Write a C++ program that receives a word and a text. 
The program should check if the word appears in the given text. 
If the word is found in the text, print "Word found." If not, print "Word not found."


*/

int main(){
    string str,text;
    bool ch=false;
    bool in = false;
    getline(cin,text);
    cin >> str;
    for (int i = 0; i<text.length(); i++){
        for (int j=0;j<str.length();j++){
            if (str[j++]!=text[i++]){
                continue;
            }else{
            ch=true;
            }
            if (ch){
                in=true;
            }
        }
    }
    if(in){
        cout << "found"<< endl;
    }else{
        cout << "not found"<< endl;
    }
}
