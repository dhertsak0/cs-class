#include<iostream>
using namespace std; 
#include <cctype>

/*

Multiplication Table: Create a C++ program that uses nested loops to print a multiplication table from 1 to 10, similar to the following format:
1x1=1     1x2=2 ...      1x10=10
2x1=2     2x2=4 ...      2x10=20
…
10x1=10   10x2=20 ...  10x10=100


*/

int main(){
    for (int line =1; line< 10; line++){
        for (int pos=1;pos<10;pos++){
            cout << line <<"x"<< pos << "=" << line*pos << endl;
        }
        cout << endl;
    }
}
