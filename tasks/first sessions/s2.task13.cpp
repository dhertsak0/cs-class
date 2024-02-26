#include<iostream>
using namespace std; 
    // TASK: Write a program that prints the number of days in a given month number (1 to 12). Assume it is not a leap year. 
int main(){
    int number;
    cout << "Please enter your number of month:";
    cin >> number;
    if (number % 2 == 0){
        cout << " you have 30 day in this month " << endl;
    }else{
        cout << " you have 31 days in this month " << endl;
    }
}