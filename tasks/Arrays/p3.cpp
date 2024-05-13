#include <iostream>
using namespace std;

/*

Write a program to receive 10 integers from the input, put them in an array and then modify the array in a way
 to make sure every pair of numbers is sorted in ascending order. 
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 2, 12, 5, 9, 3, 13, 9, 23

*/

int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        cin >> arr[i];
    }
    for (int i=0;i<10;i+=2){
        if (arr[i]<arr[i+1]){
            int j = arr[i];
            arr[i+1]=arr[i];
            arr[i]=j;
        }
    }
    for (int k:arr){
        cout << k << " ";
    }
}