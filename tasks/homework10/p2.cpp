#include <iostream>
using namespace std;

/*

Write a program that reads 10 integers into two separate arrays (5 in each) then finds and prints the common elements (intersection) between these arrays.



*/

void getArr(int arr[5]){
    cout << "enter nums" << endl;
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
}

void deldubl(int arr[5],int arr2[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr2[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}


int main(){

    int arr[5];
    int arr2[5];

    getArr(arr);
    getArr(arr2);
    deldubl(arr,arr2);
}