#include<iostream>
using namespace std; 

/*
Write a C++ program that receives 5 positive numbers from the user and prints "Ascending" if numbers that are entered are in the ascending order.
Use a for loop to solve this problem.
Example of an ascending list: 1, 9, 25, 45, 129
*/

int main(){
    int v1,v2,v3,v4,v5;
    for (;;){
        cin >> v1; cin >> v2; cin >> v3; cin >> v4; cin >> v5;
        if (v1 < v2  && v2 < v3  && v3 < v4  && v4 < v5){
            cout << "Ascending!" << endl;
            break;
        }else{
            cout << "Not Ascending!" << endl;
            break;
        }
    }
}