#include<iostream>
using namespace std; 
    // TASK: Write a program to get the price of an item and print its price + 9% tax. 
int main(){
    double price;
    cout << "please enter your price of an item:";
    cin >> price;
    cout << "According to my calculations,"<< price << "+ 9% tax will be "<< price + (price * 0.09) << " dollars";
}