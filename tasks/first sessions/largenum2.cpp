#include<iostream>
using namespace std; 
    // TASK: Write a program that receives a number if prints on the screen a sentence about if the number is greater than 10 or less than 10. 
int main(){
    int val;
    cout << "Please enter your value:";
    cin >> val;
    if (val>10){
        cout << val << " is larger 10" << endl;
    }else{
        cout << val << " is lower 10 " << endl;
    }
}