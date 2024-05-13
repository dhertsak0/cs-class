#include <iostream>
using namespace std;

/*

Write a C++ program that receives a matrix (4x5) and then prints sum of each row. 
The output should be four numbers (one for each row). Use functions to calculate sum of a row. 

*/

void getArr(int arr[4][5]){
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++)
        cin >> arr[i][j];
    }
}

int calculateSum(int arr[4][5],int arr2[]){
    for (int r=0;r<4;r++){
        for (int i=0;i<5;i++){
            arr2+=arr[r][i];
    }
    return arr2;
}

int calculateAverage(int sum){
    int av=0;
    av=sum/5;
    return av;
}

int main(){

    int arr[4][5];
    int arr2[4];
    int sum =0;

    getArr(arr,5);calculateSum(arr,arr2);
    cout << arr2 << endl;
}