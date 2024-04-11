#include<iostream>
using namespace std; 

/*
Create a program that takes a string input from the user and uses a while loop to count and display the number of vowels (a, e, i, o, u) in the string.
*/

int main(){

    string str;
    getline(cin,str);

    int count = 0;
    int i = 0;

    while (str[i]){
        if (str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
            count++;
        }i++;
    }
    cout << count << endl;
}
