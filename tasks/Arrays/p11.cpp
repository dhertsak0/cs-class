#include <iostream>
using namespace std;

/*

Create two arrays with 4 integers each. Merge these two arrays into a third array of size 8 and print the merged vector.




*/

void getArr(int arr[],int size){
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
}

void megeArr(int arr1[],int arr2[],int arr3[], int size){
    for (int i=0;i<size;i++){
        arr3[i]=arr1[i];
        arr3[i+4]=arr2[i];
    }
}

void printArr(int arr3[]){
    for (int i=0;i<8;i++){
        cout << arr3[i];
    }
}
int main(){
    int arr1[4];
    int arr2[4];
    int arr3[8];

    getArr(arr1,4);
    getArr(arr2,4);
    megeArr(arr1,arr2,arr3, 4);

    printArr(arr3);
}