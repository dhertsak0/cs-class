#include<iostream>
using namespace std; 

/*
Reverse String: 
Write a program that reverses the order of the words in given text string that has words separated by space characters. 
For example, if the input is "hello world of c++" the program should output "c++ of world hello".


*/

int main(){

    string str;
    getline(cin,str);
    string list;
    int cnt = str.length();

    for (int i = cnt;i > 0;i--){
        if (str[i] == ' '){
            list += str.substr(i + 1, cnt - i - 1) + " ";
            cnt = i;
            }
        }list+=str.substr(0, cnt);
    cout << list << endl;
}

