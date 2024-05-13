#include <iostream>
using namespace std;

/*

Write the tic tac toe game for two human vs. each other and get the inputs for each player from the cin.


*/

void getArr(int arr[3][3]){
    int count = 0;
    int r,s =0;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){

            if (count % 2 == 0){
                cout << "enter your pos in rows" << endl;
                cin >> r;
                cout << "enter your pos in str" << endl;
                cin >> s;
                arr[r][s]='X';
            }else{
                cout << "enter your pos in rows" << endl;
                cin >> r;
                cout << "enter your pos in str" << endl;
                cin >> s;
                arr[r][s]='O';
            }
        
        count++;
        }
    }
    
}

void requrnArr(int arr[3][3]){

    for (int r=0;r<3;r++){
        for (int c=0;c<3;c++){
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
}


int main(){

    int arr[3][3];

    getArr(arr);
    requrnArr(arr);
}