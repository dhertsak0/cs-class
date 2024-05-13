#include <iostream>
using namespace std;

/*

Write a C++ program that receives a matrix (3x4) and then prints the row with highest sum. 



*/

void getArr(int arr[4][5]){
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
        cin >> arr[i][j];
        }
    }
}

void calculateSum(int arr[4][5]){
    int c = 0;
    int arr3 = 0;
    for (int r=0;r<5;r++){
        int arr2 = 0;
        for (int i=0;i<4;i++){
            arr2+=arr[i][r];
        }
        if (arr2>arr3){
            arr3=arr2;
            c++;
        }else{
            continue;
        }
        
    }cout << c << endl;
}

int main(){

    int arr[4][5];

    getArr(arr);
    calculateSum(arr);
}