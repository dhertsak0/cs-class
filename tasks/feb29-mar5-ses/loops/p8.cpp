#include<iostream>
using namespace std; 

/*
Create a C++ program that uses a for loop to simulate a basic calculator.
The program should repeatedly ask the user for two numbers and an operation
(addition, subtraction, multiplication, or division) and display the result.
Ask if the user wants to perform another calculation and continue until they choose to exit.
*/

int main(){
    char var;

    for (;;) {
        char op;
        double v1,v2;

        cout << " enter your number: "<< endl;
        cin >> v1;
        cout << " enter operator: " << endl;
        cin >> op;
        cout << " enter your number: " << endl;
        cin >> v2;

        switch (op){
            case '+':
                cout << v1 + v2 << endl;
                break;
            case '-':
                cout << v1 - v2 << endl;  
                break;
            case '*':
                cout << v1 * v2 << endl;
                break;
            case '/':
                if(v2 != 0){
                cout << v1 / v2 << endl;                    
                }else{
                    cout << "Division by zero!";
                }
                break;
        }
    
        cout << "Do you want to perform calculation? y-yes, n-no: " << endl;
        cin >> var;
        
        if (var != 'y') {
            break;
        }
    }
}