#include <iostream>
using namespace std;

/*

Write a program that reads 10 integers into an array and extracts a subrange of elements 
(from index 2 to index 6) into a new array, then print the new array.




*/

void getArr(int arr[],int size){
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
}

void megeArr(int arr1[],int arr2[]){
    for (int i=2;i<=6;i++){
        arr2[i-2]=arr1[i];
    }
}

void printArr(int arr2[]){
    for (int i=0;i<4;i++){
        cout << arr2[i];
    }
}
int main(){
    int arr1[10];
    int arr2[5];

    getArr(arr1,10);
    megeArr(arr1,arr2);

    printArr(arr2);
}