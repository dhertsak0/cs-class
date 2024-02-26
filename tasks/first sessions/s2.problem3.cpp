#include<iostream>
using namespace std; 
    /* TASK: Create a program that prompts the user to enter the day of the week (1 for Monday, 2 for Tuesday, etc.) 
    and then displays whether it's a weekday or a weekend day.
    */
int main(){
    int num;
    cout << "Please enter your number of day:";
    cin >> num;
    if (num >= 1 && num <= 5){
        cout << "entered day is a weekday" << endl;
    }else if(num <= 7 && num >= 1 ){
        cout << "entered day is a weekend" << endl;
    }else{
        cout << "you wrote wrong number" << endl;
    }
}