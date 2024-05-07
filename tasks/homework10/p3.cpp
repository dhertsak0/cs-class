#include <iostream>
using namespace std;

/*

Create a program that reads 7 integers into an array, then rotates the elements of the array by a given number of positions (input from the user) to the left and prints the rotated array.
Example: 
Input array:

9 3 5 15 29 1 7

Rotated by 2 to the left: 
5 15 29 1 7 9 3




*/

void getArr(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void rotateArray(int arr[], int size, int positions) {
    int temp;
    for (int i = 0; i < positions; i++) {
        temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void printArray(int arr[], int size) {
    cout << "Rotated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 7;
    int arr[size];
    int positions;

    getArr(arr, size);

    cout << "Enter the number of positions to rotate left: ";
    cin >> positions;

    rotateArray(arr, size, positions);
    printArray(arr, size);
}