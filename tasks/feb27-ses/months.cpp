#include<iostream>
using namespace std; 

/*
Write a program that prints the number of days in a given month.
*/

int main(){
   int num;
    cout << "Enter your number of month: ";
    cin >> num;
    if (num >0 && num < 13){
        switch(num) {
            case 1:
            case 5:
            case 7:
            case 8:
            case 10:
            cout << "31 days" << endl;
                break;
            case 2:
            case 3:
                cout << "29 days" << endl;
                break;
            case 4:
            case 9:
            case 11:
            case 6:
                cout << "30 days" << endl;
                break;
        }
    }else{
        cout << " Out of range. " << endl;
    }
}