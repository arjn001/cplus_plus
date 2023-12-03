#include <iostream>
using namespace std;


int main(){

int size = 3;

string name[size];
string model[size];
int date[size];
int i;

for ( i = 0; i < size; i++){

cout << "Name: ";
cin >> name[i];
cout << "Model: ";
cin >> model[i];
cout << "Date: " ;
cin >> date[i]; 



}


int newest = date[0];

for (int i = 0; i < size; i++){
if (date[i]> newest){


newest = date[i];
}






}


cout << newest;

return 0; 
}