#include <iostream>
using namespace std;

//structure definition

struct Point{

int x;
int y;




};


void displayResult( Point p ){


cout << "Coordinates are: " << p.x << ", " << p.y << endl;

}

int main(){

//creating a structure variable

Point p1 = {2,3};

//passing structure to the function

displayResult(p1);




}