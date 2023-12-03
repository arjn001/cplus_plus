#include <iostream>
using namespace std;

struct Student {

    string name;
    int age;
    float gpa;

    
};


int main(){

const int numStudents = 5;

Student students[numStudents];

for (int i = 0; i < numStudents; i++){

cout << "Name: " << endl;
cin >> students[i].name; 
cout << "Age: " << endl;
cin >> students[i].age;
cout << "GPA: " << endl;
cin >> students[i].gpa; 


}

for (int i = 0; i < numStudents; i++){

if (students[i].gpa < 4.0){

cout << students[i].name << endl;

}

}

return 0;
}