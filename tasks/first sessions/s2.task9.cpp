#include<iostream>
using namespace std; 
    // TASK: Write a program that displays the name of a day given its number (1 for Sunday, 2 for Monday, etc.).
int main(){
    int num;
    cout << "Please enter your number:";
    cin >> num;
    if (num==1){
        cout << "your day is Monday"<< endl;
    }else if (num==2){
        cout << "your day is Tuesday"<< endl;
    }else if (num==3){
        cout << "your day is Wednesday"<< endl;
    }else if (num==4){
        cout << "your day is Thursday"<< endl;
    }else if (num==5){
        cout << "your day is Friday"<< endl;
    }else if (num==6){
        cout << "your day is Saturday"<< endl;
    }else if (num==7){
        cout << "your day is Sunday"<< endl;
    }
}