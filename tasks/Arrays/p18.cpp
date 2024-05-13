#include <iostream>
using namespace std;

/*

Write a C++ program that adds two matrices (both are 2x3). 


*/

void getArr(int arr[3][4]){
    cout << "enter new arr:" << endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
        cin >> arr[i][j];
        }
    }
    
}

void calculateSum(int arr[3][4], int arr2[3][4]){
    int arr3[3][4];
    for (int r=0;r<3;r++){
        for (int i=0;i<4;i++){
            arr3[r][i]=arr[r][i]+arr2[r][i];
        }
    }
    cout << "mult arr:" << endl;
    for (int r=0;r<3;r++){
        for (int c=0;c<4;c++){
            cout << arr3[r][c] << " ";
        }
        cout << endl;
    }
}


int main(){

    int arr[3][4],arr2[3][4];

    getArr(arr);
    getArr(arr2);
    calculateSum(arr,arr2);
}