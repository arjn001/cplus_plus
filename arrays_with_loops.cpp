#include <iostream>
using namespace std;


int main(){

 int numElements = 5;
 int elementsArray [numElements];

 for (int i = 0; i < numElements; i++){

    cout << "Value: ";
    cin >> elementsArray[i];



 } 

cout << "You Entered: ";
for (int i = 0; i < numElements; i++){

cout << elementsArray[i] << " ";

}


   return 0; 
}