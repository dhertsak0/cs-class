#include<iostream>
using namespace std; 

/*
3. Sum of All Positive Numbers: Write a C++ program that receives 5 numbers and prints out sum of all numbers that are positive.
For example if the input numbers are 5, 2, -9, 6, -11, the output should be 13.
*/

int main(){
    int num, x = 0;
    for (int i = 1; i <= 5; i++){
        cin >> num;
        if (num > 0){
            x+=num;
        }else{
            continue;
        }
    }
    cout << x << endl;
}
