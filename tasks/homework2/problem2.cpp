#include<iostream>
using namespace std; 

/*
2. Absolute Sum: Write a C++ program to receive 6 numbers and print sum of the absolute value of all the numbers.
Example of absolute value: |5| = 5, |-12| = 12. 
*/

int main(){
    int num,x = 0;
    for (int i = 1; i <= 6; i++){
        cin >> num;
        if (num < 0){
            x+=-num;
        }else{
            x+=num;
        }
    }
    cout << x << endl;
}
