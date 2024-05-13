#include<iostream>
using namespace std;

/*

Write a C++ program that defines a function called calculateSum which takes two double parameters and returns their sum. 
In the main() function, call this calculateSum function three times with different sets of arguments and display the result each time.


*/

bool calculateSum(double i, double j) { 
    double sum = i + j;
    return sum; 
}

int main(){
    double  j,i=0;
    for(int i=0; i<3;i++) { 
        cin >> i;
        cin >> j;
        double sum = calculateSum(i,j);
        cout << sum;
    }
}
