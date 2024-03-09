#include<iostream>
using namespace std; 

/*
1. More Divisible by 3 or 5: 
Write a C++ program to receive 20 number from the user and tell us if there are more numbers in the 20 numbers that are divisible by 3 
or there more that are divisible by 5.
*/

int main(){
    int num;
    string f,x;
    for (int i = 0; i <= 20; i++){
        cin >> num;
        if (num % 3 == 0){
            f+=num;
        }else if(num % 5 == 0){
            x+=num;
        }
    }
    if (x.length()>f.length()){
        cout << "there more that are divisible by 5." << endl;
    }else{
        cout << "there more that are divisible by 3." << endl;
    }
}
