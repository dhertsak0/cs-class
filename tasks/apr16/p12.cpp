#include<iostream>
using namespace std;

/*

Write a C++ program that receives two words from the user and checks if they are anagrams of each other. Anagrams are words or phrases formed by rearranging the letters of another. For example race and care are anagrams. In this problem the two words are of the same length and there is no repeated character in any of the two words. 



*/

int main(){
    string str;
    string str2;
    bool ch=false;
    cin>> str>>str2;
    for (int i =0; i<=str.length(); i++){
        for (int j=0;j<=str2.length();j++){
            if (str2[j]==str[i]){
                ch=true;
            }
        }
    }
    if (ch==true){
        cout << "Anagrams" << endl;
    }else{
        cout << "isnt Anagrams" << endl;
    }
}