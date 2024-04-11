#include<iostream>
using namespace std; 

/*
Create a program that receives a sentence from the user including a set of first names separated by space and prints out the name that would show up first in alphabetical order.
You can assume no two names in the list share the same first character.
Example: if the input is "John Lauren Samuel Nicholas Eva", the output should be "Eva". 
*/

int main(){

    string str;
    getline(cin,str);
    string list;
    cout << list;
    for (int i = 0;i < str.length();i++){
        if (str[i]!= ' '){
            if (str[i]>=list[0]){
                list+=str[i];
            }
        }
    }cout << list << endl;
}
