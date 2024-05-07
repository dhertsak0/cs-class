#include <iostream>
using namespace std;

/*

Develop a program that reads 8 integers into an array, then counts the frequency of each element and prints the elements along with their frequencies.

*/

void getArr(int arr[8]){
    for (int i=0;i<8;i++){
        cin >> arr[i];
    }
}

void deldubl(int arr[8]) {
    
    for (int i = 0; i < 8; i++) {
        int count = 1;
        for (int j = i+1; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        cout << arr[i] << "         " << count << endl;

    }
    cout << endl;
}


int main(){

    int arr[8];

    getArr(arr);
    deldubl(arr);
}