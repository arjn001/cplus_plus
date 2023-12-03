#include <iostream>
using namespace std;

// Function to add 20 to numbers less than 30 in an array
void add20ToNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 30) {
            arr[i] += 20;
        }
    }
}

int main() {
    int arraySize;
    cout << "Enter the Size of the Array: ";
    cin >> arraySize;

    int numbers[arraySize]; // Define the array with the specified size

    // Input values for the array
    cout << "Enter " << arraySize << " values for the array: ";
    for (int i = 0; i < arraySize; ++i) {
        cin >> numbers[i];
    }

    // Call the function to add 20 to numbers less than 30
    add20ToNumbers(numbers, arraySize);

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
