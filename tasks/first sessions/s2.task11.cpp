#include<iostream>
using namespace std; 
    // TASK: Create a program that displays the name of a shape based on the number of sides entered (Quadrilaterals, Triangles, Pentagons, Hexagons)
int main(){
    int num;
    cout << "Please enter your number of sides:";
    cin >> num;
    if (num==4){
        cout << "your figure is Quadrilateral"<< endl;
    }else if (num==3){
        cout << "your figure is Triangle"<< endl;
    }else if (num==5){
        cout << "your figure is Pentagons"<< endl;
    }else if (num==6){
        cout << "your figure is Hexagons"<< endl;
    }else{
        cout << "you enter wrong figure"<< endl;
    }
}