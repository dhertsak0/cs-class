#include<iostream>
using namespace std; 

/*
Ascending or Descending: 
Write a C++ program that receives 10 numbers from the user and then prints "Ascending" if the entered numbers are in ascending order 
and print "Descending" if the entered numbers are in descending order, and otherwise Prints "Shuffled"  
*/

int main(){
    string str;
    getline(cin,str);
    int c=0;
    int b=0;
    for (int i = 1;i < str[str.length()-1];i++){
        if(str[i]>str[i-1]){
            c++;
        }else if (str[i]<str[i-1]){
            b++;
        }
    }
    if (c>b){
        cout << "Ascending";
    }else if(b>c){
        cout << "Descending";
    }else{
        cout << "Shuffled";
    }
}