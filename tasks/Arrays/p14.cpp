#include <iostream>
using namespace std;

/*

Write a C++ program that receives a matrix (4x4) and then prints members on the main diagonal of the matrix.

*/

void getArr(int arr[],int size){
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
}

int calculateSum(int arr[]){
    int sum=0;
    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}

int calculateAverage(int sum){
    int av=0;
    av=sum/5;
    return av;
}

int main(){

    int arr[4][4];

    getArr(arr,5);
    sum = calculateSum(arr);
    av = calculateAverage(sum);
    cout << sum << endl << av << endl;
}