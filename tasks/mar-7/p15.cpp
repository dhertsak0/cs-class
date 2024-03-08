#include<iostream>
using namespace std; 

/*
Write a C++ program that receives 5 positive numbers from the user and prints the highest value of them on the screen. 
Use a for loop to solve this problem. 
*/

int main(){
    int v1,v2,v3,v4,v5;
    for (;;){
        cin >> v1; cin >> v2; cin >> v3; cin >> v4; cin >> v5;
        if (v1 > v2  && v1 > v3  && v1 > v4  && v1 > v5){
            cout << v1 << " highest value!" << endl;
            break;
        }else if(v2 > v1  && v2 > v3  && v2 > v4  && v2 > v5){
            cout << v2 << " highest value!" << endl;
            break;
        }else if(v3 > v1  && v3 > v2  && v3 > v4  && v3 > v5){
            cout << v3 << " highest value!" << endl;
            break;
        }else if(v4 > v1  && v4 > v3  && v4 > v2  && v4 > v5){
            cout << v4 << " highest value!" << endl;
            break;
        }else{
            cout << v5 << " highest value!" << endl;
            break;
        }
    }
}