#include <iostream>
using namespace std;

/*

Write a C++ program that receives a matrix (4x5) and then prints sum of each column. 
The output should be 5 numbers (one for each column). Use functions to calculate sum of a column. 


*/

void getArr(int arr[4][5]){
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
        cin >> arr[i][j];
        }
    }
}

void calculateSum(int arr[4][5]){
    for (int r=0;r<5;r++){
        int arr2 = 0;
        for (int i=0;i<4;i++){
            arr2+=arr[i][r];
        }
        cout << arr2 << endl;
    }
}

int main(){

    int arr[4][5];

    getArr(arr);
    calculateSum(arr);
}