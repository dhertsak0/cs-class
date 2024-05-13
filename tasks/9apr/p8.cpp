#include<iostream>
using namespace std; 
#include <cctype>

/*

Write a C++ program that receives a 16-character string from the user and prints it as a 4x4 matrix. For example if the intput string is itisagreatday!!!  the output should be:

  i t i s
  a g r e
  a t d a
  y ! ! !

*/

int main(){
    string str;
    cin >> str;
    int k=0;
    for (int i =0; i<4; i++){
        for (int j=0;j<4;j++){
            cout << str[k++]<< " ";
        }
        cout << endl;
    }
}
