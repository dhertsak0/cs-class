#include <iostream>
using namespace std;

/*

Write a program that reads 6 integers into an array, then reverses the order of elements in the array and prints 
the reversed array.


*/
int arr[6];
int arr2[6];
int main(){
    for (int i=0;i<6;i++){
        cin >> arr[i];
    }
    for (int i=6;i<0;i--){
        cout << arr[i] << endl;;
    }
    
}