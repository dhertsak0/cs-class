#include<iostream>
using namespace std; 

/*
Write a program that prompts the user to enter a number between 1 and 12. 
Based on the number entered, use a switch statement to print the corresponding month name 
(e.g., 1 for January, 2 for February, etc.). 
If the number entered is outside the valid range, print an error message.
*/

int main(){
   int num;
    cout << "Enter your number: ";
    cin >> num;
    if (num >0 && num < 13){
        switch(num) {
            case 1:
                cout << "January " << endl;
                break;
            case 2:
                cout << "February " << endl;
                break;
            case 3:
                cout << "March " << endl;
                break;
            case 4:
                cout << "April " << endl;
                break;
            case 5:
                cout << "May " << endl;
                break;
            case 6:
                cout << "June " << endl;
                break;
            case 7:
                cout << "July " << endl;
                break;
            case 8:
                cout << "August " << endl;
                break;
            case 9:
                cout << "September " << endl;
                break;
            case 10:
                cout << "October " << endl;
                break;
            case 11:
                cout << "November " << endl;
                break;
            case 12:
                cout << "December " << endl;
                break;
        }
    }else{
        cout << " Out of range. " << endl;
    }
}