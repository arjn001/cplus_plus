//Arjun Gyawali
//kjj97
//Lab 11
// Section 10
//11/14/23


#include <iostream>
#include <string>
using namespace std;

struct Car {
    string make;
    int year;
    int quantity;
};

int main() {
    const int SIZE = 3;
    Car carInventory[SIZE];
    int total = 0;
    string highestInventoryMake, lowestInventoryMake;
    int highestInventory = 0, lowestInventory = INT_MAX;

    for (int i = 0; i < SIZE; i++) {
        cout << "Record #" << i + 1 << endl;
        cout << "Enter make: ";
        getline(cin, carInventory[i].make); 
        
        cout << "Enter year: ";
        cin >> carInventory[i].year;
        cout << "Enter quantity: ";
        cin >> carInventory[i].quantity;

        total += carInventory[i].quantity;

        if (carInventory[i].quantity > highestInventory) {
            highestInventory = carInventory[i].quantity;
            highestInventoryMake = carInventory[i].make;
        }

        if (carInventory[i].quantity < lowestInventory) {
            lowestInventory = carInventory[i].quantity;
            lowestInventoryMake = carInventory[i].make;
        }

        cin.ignore(); 
    }

    cout << "Total Inventory: " << total << endl;
    cout << "Highest Inventory: " << highestInventoryMake << endl;
    cout << "Lowest Inventory: " << lowestInventoryMake << endl;

    return 0;
}
