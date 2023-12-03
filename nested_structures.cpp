#include <iostream>
using namespace std;

struct Address {
    string city;
    string country;
};

struct Employee {
    string name;
    int age;
    Address addr; // Nested structure
};

int main() {
    Employee emp;
    emp.name = "Sarah";
    emp.age = 27;
    emp.addr.city = "New York";
    emp.addr.country = "USA";
    // Accessing nested structure members
    cout << emp.name << " lives in " << emp.addr.city << ", " << emp.addr.country << endl;
    return 0;
}
