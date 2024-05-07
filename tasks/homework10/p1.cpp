#include <iostream>
using namespace std;

/*

Input 9 integers into an array and remove any duplicates, leaving only unique elements in the array. Print the modified array.



*/

void getArr(int arr[9]){
    for (int i=0;i<9;i++){
        cin >> arr[i];
    }
}

void deldubl(int arr[9]) {
    for (int i = 0; i < 9; i++) {
        bool isDuplicate = false;
        for (int d = i + 1; d < 9; d++) {
            if (arr[i] == arr[d]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


int main(){

    int arr[9];

    getArr(arr);
    deldubl(arr);
}