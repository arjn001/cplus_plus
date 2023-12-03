#include <iostream>
#include <string>

using namespace std;


//since the function get_Data is called before it is defined or declared, we need to set up the function protoype
// to define it before we use it.

//function prototype:

void get_Data(string name[], int age[], int ssn[], int aSize);

int main() 
{
    int aSize = 3;
    string name[aSize];
    int age[aSize];
    int ssn[aSize];

    get_Data(name, age, ssn, aSize); // Add a semicolon here

    return 0;
}



void get_Data(string name[], int age[], int ssn[], int aSize) {
    for (int i = 0; i < aSize; i++) {
        cout << "Name: ";
        cin >> name[i];

        cout << "Age: ";
        cin >> age[i];

        cout << "SSN: ";
        cin >> ssn[i];
    }
}

