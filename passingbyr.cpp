#include <iostream>

using namespace std;

void modifyValue(int &x) {
    x = 42;
}

int main() {
    int number = 10;

    cout << "Before function call: " << number << endl;

    modifyValue(number); // Pass by reference

    cout << "After function call: " << number << endl;

    return 0;
}