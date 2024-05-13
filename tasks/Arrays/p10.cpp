#include <iostream>
using namespace std;

/*

Write a program that reads 8 integers into an array and counts the occurrences of a particular number specified by the user. 
Output the count.




*/

void getArr(int arr[],int size){
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
}

int main(){
    int arr[10];
    int num;
    int count=0;

    getArr(arr,10);
    cout << "enter num";
    cin >> num;
    for (int j=0;j<10;j++){
        if (arr[j]!=num){
            continue;
        }else{
            count++;
        }
    }
    cout << count;
}