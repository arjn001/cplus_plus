#include <iostream>
using namespace std;



void valueChange(int &x) {
    x++;  // Changes are made to the original  x
}

int main() {
    int num = 5;
    valueChange(num);
    cout << "Original num: " << num << endl;  // Output: Original num: 6
    return 0;
}
