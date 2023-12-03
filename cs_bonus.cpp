#include <iostream>

using namespace std;



struct Student{

string name;
int age;
float gpa;



};



void displayStudentsWith4Gpa(Student students[], int size){


for (int i = 0; i < size; i ++) {

if(students[i].gpa < 4.0){

    cout << "With GPS Less than 4.0: " << endl;
    cout << students[i].gpa << endl;

}



}



}




int main(){

const int arraySize = 3;

Student students[arraySize];

for (int i = 0; i < arraySize; i++){

    cout << "Name: " << endl;
    cin >> students[i].name;
    cout << "Age: " << endl;
    cin >> students[i].age;
    cout << "GPA : " << endl;
    cin >> students[i].gpa;



}

displayStudentsWith4Gpa(students, arraySize);



    return 0;
}