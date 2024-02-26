#include<iostream>
using namespace std; 
    // TASK: Write a program that finds the largest among three numbers.
int main(){
    char val1, val2, val3;
    cout << "Please enter your first value:";
    cin >> val1;
    cout << "Please enter your second value:";
    cin >> val2;    
    cout << "Please enter your third value:";
    cin >> val3;
    if (val1>val2 and val1>val3){
        cout << val1 << " is larger " << val2 <<" and " << val3 << endl;
    }else{
        if (val2>val1 and val2>val3){
        cout << val2 << " is larger " << val1 <<" and " << val3 << endl;
        }else{
            cout << val3 << " is larger " << val1 <<" and " << val2 << endl;
        }
    }

}