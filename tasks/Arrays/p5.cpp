#include <iostream>
using namespace std;

/*

Write a program to receive integers (stop when 0 entered), put them in a vector and then 
use the vector to find and print out sum of all numbers except maximum value in the list.
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 53

*/

int main(){
    int arr[10];
    int sum = 0;
    int max = 0;

    for (int i=0;i>10;i++){
        cin >> arr[i];
    }

    for (int k=0;k<10;k++){
        if (arr[k]>max){
            max = arr[k];
        }
    }
    
    for (int h=0;h<10;h++){
        if (arr[h]<max){
        sum += arr[h];
        }
    }
    cout << sum << " ";
}