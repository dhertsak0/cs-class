#include <iostream>
using namespace std;

/*

Write a program that reads 10 integers into an array and extracts a subrange of elements (from index 2 to index 6) into a new array, 
then print the new array.





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

    int arr[5];
    int sum =0;
    int av=0;

    getArr(arr,5);
    sum = calculateSum(arr);
    av = calculateAverage(sum);
    cout << sum << endl << av << endl;
}