#include<iostream>
using namespace std; 
    /*
    TASK: Develop a program that prints the cost of a menu item based on user selection 
    (Menu has 5 choices -- items 1 to 5 -- with prices 10, 20, 30, 25, 39).
    */
int main(){
    int num;
    cout << "Please enter your number:";
    cin >> num;
    if (num==1){
        cout << "price is 10"<< endl;
    }else if (num==2){
        cout << "price is 20"<< endl;
    }else if (num==3){
        cout << "price is 30"<< endl;
    }else if (num==4){
        cout << "price is 25"<< endl;
    }else if (num==5){
        cout << "price is 39"<< endl;
    }else{
         cout << "wrong number "<< endl;
    }
}