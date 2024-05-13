#include <iostream>
using namespace std;

/*

Write a program to receive 10 integers from the input, put them in an array and then use the array 
to find and print the second largest number of the array. 
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0, 7
Output: 13

*/

int main(){
    int arr[10];
    int f = 0;
    int j =0;
    for (int i=0;i<10;i++){
        cin >> arr[i];
    }
    for (int i=1;i<=10;i++){
        if (arr[i]>arr[i-1]){
            j = arr[i];
        }
    }
    for (int k=1;k<10;k++){
        if (arr[k]>arr[k-1]&& arr[k]!=j){
            f = arr[k];
        }
        
    }
    cout << f << " ";
}