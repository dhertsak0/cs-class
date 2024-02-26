#include<iostream>
using namespace std; 

/*
Write a C++ program that acts as a shape calculator. Prompt the user to enter the name of a shape they want to calculate the area or perimeter for.
The options should be: Square, Triangle, Circle. Next ask the user whether they want to calculate the area or perimeter of the chosen shape.
Based on the chosen shape and calculation type, prompt the user to enter the required measurements:
Square: Side length (integer), Triangle: Base length (integer) and height (integer), Circle: Radius (integer).
Calculate the requested value (area or perimeter) based on the chosen shape
and user-provided measurements and print the final result on the screen with an appropriate message. 
*/

int main(){
   int shape, num2, num3;
    cout << "Enter the number type of figure, where 1 - Square, 2 - Triangle, 3 - Circle: ";
    cin >> shape;
    switch(shape) {
        case 1:
            cout << "Enter your side: " << endl;
            cin >> num2;
            cout << "Your area of Square = " << num2*num2 << " or perimetr: "<< num2*4<< endl;
            break;
        case 2:
            cout << "Enter your length: " << endl;
            cin >> num2;
            cout << "Enter your height: " << endl;
            cin >> num3;
            cout << "Your perimetr of Triangle: " << num3*2+num2 << " or square: " << 0.5*(num2*num3) << endl;
            break;
        case 3:
            cout << "Enter your Radius: " << endl;
            cin >> num2;
            cout << "Your area of Circle: " << 3.14*num2*num2 << " or perimetr: " << 2*3.14*num2 << endl;
            break;
    }
}
/*
Maybe I didn't understand the task correctly - just let me know and I'll do it the right way. Thank you.
*/
