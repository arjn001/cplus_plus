#include <iostream>

using namespace std;


double pizzaArea(double diameter){

    double radius, area;
    double pi = 3.14;

    radius = diameter/2;
    area = pi * radius * radius;

    return area;


}



int main()
{

cout << "the area is: " << pizzaArea(4);


   
}
