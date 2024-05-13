#include <iostream>
using namespace std;

/*

Write a program that receives two sequence of numbers and put them in two vectors 
from the input (each sequence ends when 0 is entered) and the use the vectors to check if they have the same elements 
(in any order). Assume no number is repeated in the vectors.
Example input: 12, 2, 5, 9,0, 2, 9, 5, 12, 0
Output: Yes

*/
int arr1[5];
int arr2[5];

void firstarr(){
    for (int i=0; i<5;i++){
        cin >> arr1[i];
    }
}

void secarr(){
    for (int i=0;i<5;i++){
        cin >> arr2[i];
    }
}

int main(){
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (arr2[j]!=arr1[i]){
                continue;
            }else{
                cout << "yes!" << endl;
                break;
            }
        }
    }
    return 0;
}