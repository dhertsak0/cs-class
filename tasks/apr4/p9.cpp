#include<iostream>
using namespace std; 
#include <cctype>

/*

Develop a C++ program that uses a while loop to generate and print the first 20 terms of the geometric progression with a common ratio of 2, 
starting with the term 1.

*/

int main(){

    string str;
    string newstr="";
    int i=0;
    getline(cin,str);
    while (i<str.length()){
        if (str[i]!= ' '){
            newstr+=str[i];
        }
        i++;
    }
    cout << newstr << endl;
}
