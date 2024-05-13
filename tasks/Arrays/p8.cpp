#include <iostream>
using namespace std;

/*

Write a program to input 10 integers into an array and then prompt the user to enter a number 
to search for in the array. Output whether the number was found or not.



*/

int arr[10];
int num;
int main(){
    for (int i=0;i<10;i++){
        cin >> arr[i];
    }

    cin >> num;
    for (int j=0;j<10;j++){
        if (arr[j]!=num){
            continue;
        }else{
            cout << "found!";
            break;
        }
    }
    
}