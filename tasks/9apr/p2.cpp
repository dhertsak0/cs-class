#include<iostream>
using namespace std; 
#include <cctype>

/*

Reverse Words: 
Write a C++ program that receives multiple single words from the user and prints their reverse. 
The program will stop if the entered word by the user is "stop."


*/

int main(){

    string str, newstr="";
    do{
        newstr = "";
        cin >> str;
        for (int i=0; i<str.length();i++){
            newstr=str[i]+newstr;
        }
        cout << newstr << endl;
    }while (newstr != "stop");
}
