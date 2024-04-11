#include<iostream>
using namespace std; 
#include <cctype>

/*
Create a program that asks the user to enter a string and a character. 
Then, use a while loop to count and display the number of occurrences of that character in the string.  
Your program should count both lower and uppercase formats of the entered char by user.

*/

int main(){

    string str;
    string in;
    getline(cin,str);
    getline(cin,in);
    int i = 0;
    int count=0;
    bool start = true;
    while (i<str.length()){
        if (str[i] == in[0]){
            count++;
        }
        i++;
        
    }cout << count << endl;
}
