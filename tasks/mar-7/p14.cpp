#include<iostream>
using namespace std; 

/*
Write a C++ program that receives number of items in an invoice from the user 
(let's say there are n items) and then receives price of those n items from the user and prints total of prices of all items. 
Use a for loop to solve this problem. 
*/

int main(){
    int count;
    int price;
    int sum = 0;
    cout << "enter number of items: " << endl;
    cin >> count;

    for (int i = 1; i <= count; i++){
        cout << "enter price of items: " << endl;
        cin >> price;
        sum+=price;
    }
    cout << "your total price of all items is: " << sum << endl;
}    